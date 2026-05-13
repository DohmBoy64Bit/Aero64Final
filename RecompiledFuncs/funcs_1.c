#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void D_8023F4DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023F4DC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8023F4E0: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8023F4E4: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8023F4E8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8023F4EC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8023F4F0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8023F4F4: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x8023F4F8: or          $s3, $a2, $zero
    ctx->r19 = ctx->r6 | 0;
    // 0x8023F4FC: sw          $zero, 0x10($a0)
    MEM_W(0X10, ctx->r4) = 0;
    // 0x8023F500: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
    // 0x8023F504: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x8023F508: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x8023F50C: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x8023F510: blez        $a2, L_8023F534
    if (SIGNED(ctx->r6) <= 0) {
        // 0x8023F514: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_8023F534;
    }
    // 0x8023F514: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8023F518: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
L_8023F51C:
    // 0x8023F51C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8023F520: jal         0x80237150
    // 0x8023F524: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    static_3_80237150(rdram, ctx);
        goto after_0;
    // 0x8023F524: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_0:
    // 0x8023F528: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8023F52C: bne         $s0, $s3, L_8023F51C
    if (ctx->r16 != ctx->r19) {
        // 0x8023F530: addiu       $s1, $s1, 0x1C
        ctx->r17 = ADD32(ctx->r17, 0X1C);
            goto L_8023F51C;
    }
    // 0x8023F530: addiu       $s1, $s1, 0x1C
    ctx->r17 = ADD32(ctx->r17, 0X1C);
L_8023F534:
    // 0x8023F534: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8023F538: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8023F53C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8023F540: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8023F544: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8023F548: jr          $ra
    // 0x8023F54C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8023F54C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void D_8022B8F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022B8F8: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8022B8FC: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x8022B900: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x8022B904: lw          $t1, 0x0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X0);
    // 0x8022B908: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022B90C: addiu       $t9, $a1, -0x1
    ctx->r25 = ADD32(ctx->r5, -0X1);
    // 0x8022B910: addu        $t7, $t6, $a1
    ctx->r15 = ADD32(ctx->r14, ctx->r5);
    // 0x8022B914: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022B918: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x8022B91C: nor         $t0, $t9, $zero
    ctx->r8 = ~(ctx->r25 | 0);
    // 0x8022B920: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8022B924: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022B928: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x8022B92C: beq         $t1, $zero, L_8022B944
    if (ctx->r9 == 0) {
        // 0x8022B930: and         $a3, $t8, $t0
        ctx->r7 = ctx->r24 & ctx->r8;
            goto L_8022B944;
    }
    // 0x8022B930: and         $a3, $t8, $t0
    ctx->r7 = ctx->r24 & ctx->r8;
    // 0x8022B934: jal         0x8022B80C
    // 0x8022B938: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    func_8022B80C(rdram, ctx);
        goto after_0;
    // 0x8022B938: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_0:
    // 0x8022B93C: b           L_8022B9F8
    // 0x8022B940: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8022B9F8;
    // 0x8022B940: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8022B944:
    // 0x8022B944: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8022B948: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8022B94C: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    // 0x8022B950: jal         0x8022B2F4
    // 0x8022B954: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    func_8022B2F4(rdram, ctx);
        goto after_1;
    // 0x8022B954: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_1:
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
        goto after_2;
    // 0x8022B974: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_2:
    // 0x8022B978: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
L_8022B97C:
    // 0x8022B97C: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x8022B980: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x8022B984: addiu       $v0, $v0, 0x0
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x8022B988: addu        $t2, $a3, $s0
    ctx->r10 = ADD32(ctx->r7, ctx->r16);
    // 0x8022B98C: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x8022B990: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x8022B994: lw          $t4, 0x0($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X0);
    // 0x8022B998: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8022B99C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
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
        goto after_3;
    // 0x8022B9B0: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    after_3:
    // 0x8022B9B4: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x8022B9B8: lw          $t5, 0x0($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X0);
    // 0x8022B9BC: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x8022B9C0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022B9C4: addiu       $v0, $v0, 0x0
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x8022B9C8: sw          $t5, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r13;
    // 0x8022B9CC: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8022B9D0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022B9D4: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8022B9D8: addu        $t7, $t6, $s0
    ctx->r15 = ADD32(ctx->r14, ctx->r16);
    // 0x8022B9DC: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8022B9E0: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
    // 0x8022B9E4: jal         0x8022B80C
    // 0x8022B9E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8022B80C(rdram, ctx);
        goto after_4;
    // 0x8022B9E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
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
RECOMP_FUNC void D_802833B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80283430: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x80283434: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80283438: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8028343C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80283440: sw          $a1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r5;
    // 0x80283444: sw          $a2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r6;
    // 0x80283448: sw          $a3, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r7;
    // 0x8028344C: lbu         $t6, 0x68C($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X68C);
    // 0x80283450: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80283454: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80283458: beql        $t6, $zero, L_8028355C
    if (ctx->r14 == 0) {
        // 0x8028345C: addiu       $s1, $sp, 0x40
        ctx->r17 = ADD32(ctx->r29, 0X40);
            goto L_8028355C;
    }
    goto skip_0;
    // 0x8028345C: addiu       $s1, $sp, 0x40
    ctx->r17 = ADD32(ctx->r29, 0X40);
    skip_0:
    // 0x80283460: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x80283464: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
    // 0x80283468: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8028346C: lwc1        $f4, 0x32A8($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X32A8);
    // 0x80283470: addiu       $s1, $sp, 0x40
    ctx->r17 = ADD32(ctx->r29, 0X40);
    // 0x80283474: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x80283478: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8028347C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80283480: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    // 0x80283484: jal         0x8021B6D4
    // 0x80283488: lw          $a0, 0x4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4);
    static_3_8021B6D4(rdram, ctx);
        goto after_0;
    // 0x80283488: lw          $a0, 0x4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4);
    after_0:
    // 0x8028348C: lwc1        $f10, 0x70($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80283490: lwc1        $f16, 0x74($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X74);
    // 0x80283494: lwc1        $f18, 0x78($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X78);
    // 0x80283498: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8028349C: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    // 0x802834A0: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x802834A4: jal         0x8022970C
    // 0x802834A8: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    func_8022970C(rdram, ctx);
        goto after_1;
    // 0x802834A8: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    after_1:
    // 0x802834AC: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x802834B0: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x802834B4: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x802834B8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802834BC: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x802834C0: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    // 0x802834C4: swc1        $f4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f4.u32l;
    // 0x802834C8: swc1        $f6, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f6.u32l;
    // 0x802834CC: jal         0x802D01D4
    // 0x802834D0: swc1        $f8, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f8.u32l;
    static_3_802D01D4(rdram, ctx);
        goto after_2;
    // 0x802834D0: swc1        $f8, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x802834D4: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802834D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802834DC: jal         0x8021B4B0
    // 0x802834E0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    static_3_8021B4B0(rdram, ctx);
        goto after_3;
    // 0x802834E0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_3:
    // 0x802834E4: lw          $t8, 0x18($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X18);
    // 0x802834E8: addiu       $at, $zero, 0x1B
    ctx->r1 = ADD32(0, 0X1B);
    // 0x802834EC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802834F0: bne         $t8, $at, L_80283558
    if (ctx->r24 != ctx->r1) {
        // 0x802834F4: or          $a2, $s1, $zero
        ctx->r6 = ctx->r17 | 0;
            goto L_80283558;
    }
    // 0x802834F4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x802834F8: jal         0x8021B6D4
    // 0x802834FC: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    static_3_8021B6D4(rdram, ctx);
        goto after_4;
    // 0x802834FC: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_4:
    // 0x80283500: lwc1        $f10, 0x70($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80283504: lwc1        $f16, 0x74($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X74);
    // 0x80283508: lwc1        $f18, 0x78($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X78);
    // 0x8028350C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80283510: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    // 0x80283514: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x80283518: jal         0x8022970C
    // 0x8028351C: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    func_8022970C(rdram, ctx);
        goto after_5;
    // 0x8028351C: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    after_5:
    // 0x80283520: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80283524: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80283528: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8028352C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80283530: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x80283534: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    // 0x80283538: swc1        $f4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f4.u32l;
    // 0x8028353C: swc1        $f6, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f6.u32l;
    // 0x80283540: jal         0x802D01D4
    // 0x80283544: swc1        $f8, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f8.u32l;
    static_3_802D01D4(rdram, ctx);
        goto after_6;
    // 0x80283544: swc1        $f8, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f8.u32l;
    after_6:
    // 0x80283548: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x8028354C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80283550: jal         0x8021B4B0
    // 0x80283554: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    static_3_8021B4B0(rdram, ctx);
        goto after_7;
    // 0x80283554: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_7:
L_80283558:
    // 0x80283558: addiu       $s1, $sp, 0x40
    ctx->r17 = ADD32(ctx->r29, 0X40);
L_8028355C:
    // 0x8028355C: jal         0x802D25F4
    // 0x80283560: addiu       $a0, $s0, 0x1A4
    ctx->r4 = ADD32(ctx->r16, 0X1A4);
    static_3_802D25F4(rdram, ctx);
        goto after_8;
    // 0x80283560: addiu       $a0, $s0, 0x1A4
    ctx->r4 = ADD32(ctx->r16, 0X1A4);
    after_8:
    // 0x80283564: lwc1        $f10, 0x690($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X690);
    // 0x80283568: lwc1        $f2, 0x694($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X694);
    // 0x8028356C: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    // 0x80283570: sub.s       $f12, $f0, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x80283574: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80283578: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x8028357C: nop

    // 0x80283580: bc1fl       L_802835AC
    if (!c1cs) {
        // 0x80283584: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_802835AC;
    }
    goto skip_1;
    // 0x80283584: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_1:
    // 0x80283588: sub.s       $f16, $f12, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x8028358C: lwc1        $f0, 0x698($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X698);
    // 0x80283590: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x80283594: nop

    // 0x80283598: bc1fl       L_802835D8
    if (!c1cs) {
        // 0x8028359C: swc1        $f14, 0x690($s0)
        MEM_W(0X690, ctx->r16) = ctx->f14.u32l;
            goto L_802835D8;
    }
    goto skip_2;
    // 0x8028359C: swc1        $f14, 0x690($s0)
    MEM_W(0X690, ctx->r16) = ctx->f14.u32l;
    skip_2:
    // 0x802835A0: b           L_802835D4
    // 0x802835A4: add.s       $f12, $f2, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f0.fl;
        goto L_802835D4;
    // 0x802835A4: add.s       $f12, $f2, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x802835A8: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_802835AC:
    // 0x802835AC: nop

    // 0x802835B0: bc1fl       L_802835D8
    if (!c1cs) {
        // 0x802835B4: swc1        $f14, 0x690($s0)
        MEM_W(0X690, ctx->r16) = ctx->f14.u32l;
            goto L_802835D8;
    }
    goto skip_3;
    // 0x802835B4: swc1        $f14, 0x690($s0)
    MEM_W(0X690, ctx->r16) = ctx->f14.u32l;
    skip_3:
    // 0x802835B8: sub.s       $f18, $f2, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x802835BC: lwc1        $f0, 0x69C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X69C);
    // 0x802835C0: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x802835C4: nop

    // 0x802835C8: bc1fl       L_802835D8
    if (!c1cs) {
        // 0x802835CC: swc1        $f14, 0x690($s0)
        MEM_W(0X690, ctx->r16) = ctx->f14.u32l;
            goto L_802835D8;
    }
    goto skip_4;
    // 0x802835CC: swc1        $f14, 0x690($s0)
    MEM_W(0X690, ctx->r16) = ctx->f14.u32l;
    skip_4:
    // 0x802835D0: sub.s       $f12, $f2, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f2.fl - ctx->f0.fl;
L_802835D4:
    // 0x802835D4: swc1        $f14, 0x690($s0)
    MEM_W(0X690, ctx->r16) = ctx->f14.u32l;
L_802835D8:
    // 0x802835D8: swc1        $f12, 0x694($s0)
    MEM_W(0X694, ctx->r16) = ctx->f12.u32l;
    // 0x802835DC: swc1        $f12, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f12.u32l;
    // 0x802835E0: jal         0x80228DE0
    // 0x802835E4: lw          $a1, 0x84($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X84);
    func_80228DE0(rdram, ctx);
        goto after_9;
    // 0x802835E4: lw          $a1, 0x84($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X84);
    after_9:
    // 0x802835E8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802835EC: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802835F0: lui         $at, 0xC248
    ctx->r1 = S32(0XC248 << 16);
    // 0x802835F4: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    // 0x802835F8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802835FC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80283600: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    // 0x80283604: mul.s       $f8, $f12, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f6.fl);
    // 0x80283608: nop

    // 0x8028360C: mul.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x80283610: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x80283614: jal         0x802D01D4
    // 0x80283618: nop

    static_3_802D01D4(rdram, ctx);
        goto after_10;
    // 0x80283618: nop

    after_10:
    // 0x8028361C: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x80283620: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80283624: jal         0x8021B4B0
    // 0x80283628: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    static_3_8021B4B0(rdram, ctx);
        goto after_11;
    // 0x80283628: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_11:
    // 0x8028362C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80283630: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80283634: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80283638: jr          $ra
    // 0x8028363C: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x8028363C: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void D_80201180(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80201180: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80201184: sw          $a0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r4;
    // 0x80201188: sw          $a1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r5;
    // 0x8020118C: sw          $a2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r6;
    // 0x80201190: sw          $a3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r7;
    // 0x80201194: jr          $ra
    // 0x80201198: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80201198: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void D_8028C900(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028C980: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x8028C984: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8028C988: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8028C98C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8028C990: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8028C994: sw          $a1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r5;
    // 0x8028C998: sw          $a2, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r6;
    // 0x8028C99C: sw          $a3, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r7;
    // 0x8028C9A0: jal         0x802AEDDC
    // 0x8028C9A4: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    static_3_802AEDDC(rdram, ctx);
        goto after_0;
    // 0x8028C9A4: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    after_0:
    // 0x8028C9A8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8028C9AC: jal         0x802AED90
    // 0x8028C9B0: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    static_3_802AED90(rdram, ctx);
        goto after_1;
    // 0x8028C9B0: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    after_1:
    // 0x8028C9B4: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    // 0x8028C9B8: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    // 0x8028C9BC: lw          $t9, 0x64($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X64);
    // 0x8028C9C0: lh          $t6, 0x60($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X60);
    // 0x8028C9C4: jalr        $t9
    // 0x8028C9C8: addu        $a0, $t6, $s0
    ctx->r4 = ADD32(ctx->r14, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x8028C9C8: addu        $a0, $t6, $s0
    ctx->r4 = ADD32(ctx->r14, ctx->r16);
    after_2:
    // 0x8028C9CC: addiu       $t7, $s0, 0xB0
    ctx->r15 = ADD32(ctx->r16, 0XB0);
    // 0x8028C9D0: addiu       $t8, $s0, 0xB4
    ctx->r24 = ADD32(ctx->r16, 0XB4);
    // 0x8028C9D4: addiu       $t0, $sp, 0x3C
    ctx->r8 = ADD32(ctx->r29, 0X3C);
    // 0x8028C9D8: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x8028C9DC: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x8028C9E0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8028C9E4: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    // 0x8028C9E8: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    // 0x8028C9EC: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    // 0x8028C9F0: jal         0x802CF1C8
    // 0x8028C9F4: addiu       $a3, $sp, 0x4C
    ctx->r7 = ADD32(ctx->r29, 0X4C);
    static_3_802CF1C8(rdram, ctx);
        goto after_3;
    // 0x8028C9F4: addiu       $a3, $sp, 0x4C
    ctx->r7 = ADD32(ctx->r29, 0X4C);
    after_3:
    // 0x8028C9F8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8028C9FC: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    // 0x8028CA00: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    // 0x8028CA04: jal         0x802CF0BC
    // 0x8028CA08: addiu       $a3, $sp, 0x40
    ctx->r7 = ADD32(ctx->r29, 0X40);
    static_3_802CF0BC(rdram, ctx);
        goto after_4;
    // 0x8028CA08: addiu       $a3, $sp, 0x40
    ctx->r7 = ADD32(ctx->r29, 0X40);
    after_4:
    // 0x8028CA0C: lwc1        $f12, 0x54($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8028CA10: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8028CA14: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8028CA18: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8028CA1C: sub.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f12.fl;
    // 0x8028CA20: lwc1        $f14, 0x50($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8028CA24: lwc1        $f18, 0x44($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8028CA28: lwc1        $f16, 0x4C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8028CA2C: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x8028CA30: sub.s       $f4, $f18, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f14.fl;
    // 0x8028CA34: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8028CA38: lwc1        $f2, 0x0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8028CA3C: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    // 0x8028CA40: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8028CA44: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x8028CA48: add.s       $f10, $f12, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f12.fl + ctx->f8.fl;
    // 0x8028CA4C: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x8028CA50: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x8028CA54: swc1        $f10, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f10.u32l;
    // 0x8028CA58: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8028CA5C: add.s       $f8, $f14, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f14.fl + ctx->f6.fl;
    // 0x8028CA60: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x8028CA64: swc1        $f8, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f8.u32l;
    // 0x8028CA68: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x8028CA6C: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x8028CA70: jal         0x8022A210
    // 0x8028CA74: swc1        $f6, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f6.u32l;
    static_3_8022A210(rdram, ctx);
        goto after_5;
    // 0x8028CA74: swc1        $f6, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f6.u32l;
    after_5:
    // 0x8028CA78: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x8028CA7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8028CA80: jal         0x8021B4B0
    // 0x8028CA84: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    static_3_8021B4B0(rdram, ctx);
        goto after_6;
    // 0x8028CA84: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    after_6:
    // 0x8028CA88: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8028CA8C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8028CA90: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    // 0x8028CA94: jr          $ra
    // 0x8028CA98: nop

    return;
    // 0x8028CA98: nop

;}
RECOMP_FUNC void D_802E6BB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E6C34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802E6C38: bne         $a0, $zero, L_802E6C50
    if (ctx->r4 != 0) {
        // 0x802E6C3C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802E6C50;
    }
    // 0x802E6C3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802E6C40: jal         0x802C67EC
    // 0x802E6C44: addiu       $a0, $zero, 0x1A4
    ctx->r4 = ADD32(0, 0X1A4);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802E6C44: addiu       $a0, $zero, 0x1A4
    ctx->r4 = ADD32(0, 0X1A4);
    after_0:
    // 0x802E6C48: beq         $v0, $zero, L_802E6C78
    if (ctx->r2 == 0) {
        // 0x802E6C4C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802E6C78;
    }
    // 0x802E6C4C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_802E6C50:
    // 0x802E6C50: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802E6C54: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802E6C58: ori         $t7, $zero, 0xFFFF
    ctx->r15 = 0 | 0XFFFF;
    // 0x802E6C5C: sw          $t6, 0x1A0($a0)
    MEM_W(0X1A0, ctx->r4) = ctx->r14;
    // 0x802E6C60: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x802E6C64: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
    // 0x802E6C68: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x802E6C6C: jal         0x80317014
    // 0x802E6C70: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_80317014(rdram, ctx);
        goto after_1;
    // 0x802E6C70: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x802E6C74: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_802E6C78:
    // 0x802E6C78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802E6C7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802E6C80: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x802E6C84: jr          $ra
    // 0x802E6C88: nop

    return;
    // 0x802E6C88: nop

;}
RECOMP_FUNC void D_802F2B4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802F2BCC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802F2BD0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802F2BD4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802F2BD8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802F2BDC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x802F2BE0: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x802F2BE4: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    // 0x802F2BE8: addiu       $a1, $zero, 0x7C
    ctx->r5 = ADD32(0, 0X7C);
    // 0x802F2BEC: jal         0x80302DC8
    // 0x802F2BF0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302DC8(rdram, ctx);
        goto after_0;
    // 0x802F2BF0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_0:
    // 0x802F2BF4: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x802F2BF8: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802F2BFC: addiu       $a1, $zero, 0x7D
    ctx->r5 = ADD32(0, 0X7D);
    // 0x802F2C00: jal         0x80302DC8
    // 0x802F2C04: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302DC8(rdram, ctx);
        goto after_1;
    // 0x802F2C04: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_1:
    // 0x802F2C08: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x802F2C0C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802F2C10: addiu       $a1, $zero, 0x3B
    ctx->r5 = ADD32(0, 0X3B);
    // 0x802F2C14: jal         0x80302DC8
    // 0x802F2C18: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302DC8(rdram, ctx);
        goto after_2;
    // 0x802F2C18: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_2:
    // 0x802F2C1C: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802F2C20: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x802F2C24: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802F2C28: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x802F2C2C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802F2C30: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    // 0x802F2C34: add.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x802F2C38: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x802F2C3C: jal         0x80290474
    // 0x802F2C40: nop

    static_3_80290474(rdram, ctx);
        goto after_3;
    // 0x802F2C40: nop

    after_3:
    // 0x802F2C44: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802F2C48: jal         0x80302980
    // 0x802F2C4C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302980(rdram, ctx);
        goto after_4;
    // 0x802F2C4C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_4:
    // 0x802F2C50: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802F2C54: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802F2C58: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802F2C5C: addiu       $a1, $zero, 0x7C
    ctx->r5 = ADD32(0, 0X7C);
    // 0x802F2C60: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802F2C64: jal         0x80302988
    // 0x802F2C68: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_5;
    // 0x802F2C68: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_5:
    // 0x802F2C6C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802F2C70: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802F2C74: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802F2C78: addiu       $a1, $zero, 0x7D
    ctx->r5 = ADD32(0, 0X7D);
    // 0x802F2C7C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802F2C80: jal         0x80302988
    // 0x802F2C84: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_6;
    // 0x802F2C84: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_6:
    // 0x802F2C88: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802F2C8C: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802F2C90: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802F2C94: addiu       $a1, $zero, 0x3B
    ctx->r5 = ADD32(0, 0X3B);
    // 0x802F2C98: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802F2C9C: jal         0x80302988
    // 0x802F2CA0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_7;
    // 0x802F2CA0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_7:
    // 0x802F2CA4: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802F2CA8: jal         0x80302A7C
    // 0x802F2CAC: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302A7C(rdram, ctx);
        goto after_8;
    // 0x802F2CAC: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_8:
    // 0x802F2CB0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802F2CB4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802F2CB8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802F2CBC: jr          $ra
    // 0x802F2CC0: nop

    return;
    // 0x802F2CC0: nop

;}
RECOMP_FUNC void D_802F05C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802F0648: jr          $ra
    // 0x802F064C: lw          $v0, 0x4C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4C);
    return;
    // 0x802F064C: lw          $v0, 0x4C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4C);
;}
RECOMP_FUNC void D_802ED874(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802ED8F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802ED8F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802ED8FC: beq         $a0, $zero, L_802ED92C
    if (ctx->r4 == 0) {
        // 0x802ED900: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_802ED92C;
    }
    // 0x802ED900: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802ED904: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802ED908: jal         0x8031C514
    // 0x802ED90C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_8031C514(rdram, ctx);
        goto after_0;
    // 0x802ED90C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802ED910: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x802ED914: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802ED918: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x802ED91C: beql        $t7, $zero, L_802ED930
    if (ctx->r15 == 0) {
        // 0x802ED920: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802ED930;
    }
    goto skip_0;
    // 0x802ED920: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802ED924: jal         0x802C681C
    // 0x802ED928: nop

    static_3_802C681C(rdram, ctx);
        goto after_1;
    // 0x802ED928: nop

    after_1:
L_802ED92C:
    // 0x802ED92C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802ED930:
    // 0x802ED930: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802ED934: jr          $ra
    // 0x802ED938: nop

    return;
    // 0x802ED938: nop

;}
RECOMP_FUNC void func_8023CD40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void D_802D311C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D319C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802D31A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802D31A4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802D31A8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x802D31AC: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x802D31B0: jal         0x8030369C
    // 0x802D31B4: lbu         $a1, 0x27($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X27);
    static_3_8030369C(rdram, ctx);
        goto after_0;
    // 0x802D31B4: lbu         $a1, 0x27($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X27);
    after_0:
    // 0x802D31B8: beq         $v0, $zero, L_802D31F0
    if (ctx->r2 == 0) {
        // 0x802D31BC: sb          $v0, 0x1F($sp)
        MEM_B(0X1F, ctx->r29) = ctx->r2;
            goto L_802D31F0;
    }
    // 0x802D31BC: sb          $v0, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r2;
    // 0x802D31C0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802D31C4: lbu         $t6, 0x27($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X27);
    // 0x802D31C8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D31CC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802D31D0: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x802D31D4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x802D31D8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802D31DC: jal         0x80303914
    // 0x802D31E0: sw          $t6, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r14;
    static_3_80303914(rdram, ctx);
        goto after_1;
    // 0x802D31E0: sw          $t6, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r14;
    after_1:
    // 0x802D31E4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x802D31E8: jal         0x803036BC
    // 0x802D31EC: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    static_3_803036BC(rdram, ctx);
        goto after_2;
    // 0x802D31EC: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_2:
L_802D31F0:
    // 0x802D31F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802D31F4: lbu         $v0, 0x1F($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X1F);
    // 0x802D31F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802D31FC: jr          $ra
    // 0x802D3200: nop

    return;
    // 0x802D3200: nop

;}
RECOMP_FUNC void D_802C0D34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802C0DB4: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x802C0DB8: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x802C0DBC: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802C0DC0: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x802C0DC4: mtc1        $at, $f13
    ctx->f_odd[(13 - 1) * 2] = ctx->r1;
    // 0x802C0DC8: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x802C0DCC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802C0DD0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802C0DD4: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x802C0DD8: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x802C0DDC: sw          $a2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r6;
    // 0x802C0DE0: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    // 0x802C0DE4: addiu       $t9, $t7, 0x30
    ctx->r25 = ADD32(ctx->r15, 0X30);
    // 0x802C0DE8: addiu       $t6, $sp, 0x30
    ctx->r14 = ADD32(ctx->r29, 0X30);
L_802C0DEC:
    // 0x802C0DEC: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x802C0DF0: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x802C0DF4: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x802C0DF8: sw          $at, -0xC($t6)
    MEM_W(-0XC, ctx->r14) = ctx->r1;
    // 0x802C0DFC: lw          $at, -0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X8);
    // 0x802C0E00: sw          $at, -0x8($t6)
    MEM_W(-0X8, ctx->r14) = ctx->r1;
    // 0x802C0E04: lw          $at, -0x4($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X4);
    // 0x802C0E08: bne         $t7, $t9, L_802C0DEC
    if (ctx->r15 != ctx->r25) {
        // 0x802C0E0C: sw          $at, -0x4($t6)
        MEM_W(-0X4, ctx->r14) = ctx->r1;
            goto L_802C0DEC;
    }
    // 0x802C0E0C: sw          $at, -0x4($t6)
    MEM_W(-0X4, ctx->r14) = ctx->r1;
    // 0x802C0E10: jal         0x8021E6EC
    // 0x802C0E14: mov.d       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.d = ctx->f12.d;
    func_8021E6EC(rdram, ctx);
        goto after_0;
    // 0x802C0E14: mov.d       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.d = ctx->f12.d;
    after_0:
    // 0x802C0E18: lw          $t8, 0x6C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X6C);
    // 0x802C0E1C: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802C0E20: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x802C0E24: addu        $v0, $v0, $t8
    ctx->r2 = ADD32(ctx->r2, ctx->r24);
    // 0x802C0E28: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x802C0E2C: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x802C0E30: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x802C0E34: beq         $v0, $t0, L_802C0E7C
    if (ctx->r2 == ctx->r8) {
        // 0x802C0E38: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_802C0E7C;
    }
    // 0x802C0E38: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802C0E3C: beq         $v0, $at, L_802C0E84
    if (ctx->r2 == ctx->r1) {
        // 0x802C0E40: lui         $v1, 0x0
        ctx->r3 = S32(0X0 << 16);
            goto L_802C0E84;
    }
    // 0x802C0E40: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x802C0E44: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802C0E48: beq         $v0, $at, L_802C0E90
    if (ctx->r2 == ctx->r1) {
        // 0x802C0E4C: lui         $v1, 0x0
        ctx->r3 = S32(0X0 << 16);
            goto L_802C0E90;
    }
    // 0x802C0E4C: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x802C0E50: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x802C0E54: beq         $v0, $at, L_802C0E9C
    if (ctx->r2 == ctx->r1) {
        // 0x802C0E58: lui         $v1, 0x0
        ctx->r3 = S32(0X0 << 16);
            goto L_802C0E9C;
    }
    // 0x802C0E58: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x802C0E5C: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x802C0E60: beq         $v0, $at, L_802C0EA8
    if (ctx->r2 == ctx->r1) {
        // 0x802C0E64: lui         $v1, 0x0
        ctx->r3 = S32(0X0 << 16);
            goto L_802C0EA8;
    }
    // 0x802C0E64: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x802C0E68: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x802C0E6C: beq         $v0, $at, L_802C0EB4
    if (ctx->r2 == ctx->r1) {
        // 0x802C0E70: lui         $v1, 0x0
        ctx->r3 = S32(0X0 << 16);
            goto L_802C0EB4;
    }
    // 0x802C0E70: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x802C0E74: b           L_802C0EBC
    // 0x802C0E78: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
        goto L_802C0EBC;
    // 0x802C0E78: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
L_802C0E7C:
    // 0x802C0E7C: b           L_802C0EBC
    // 0x802C0E80: lw          $s0, 0x4($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X4);
        goto L_802C0EBC;
    // 0x802C0E80: lw          $s0, 0x4($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X4);
L_802C0E84:
    // 0x802C0E84: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x802C0E88: b           L_802C0EBC
    // 0x802C0E8C: lw          $s0, 0x8($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X8);
        goto L_802C0EBC;
    // 0x802C0E8C: lw          $s0, 0x8($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X8);
L_802C0E90:
    // 0x802C0E90: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x802C0E94: b           L_802C0EBC
    // 0x802C0E98: lw          $s0, 0x0($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X0);
        goto L_802C0EBC;
    // 0x802C0E98: lw          $s0, 0x0($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X0);
L_802C0E9C:
    // 0x802C0E9C: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x802C0EA0: b           L_802C0EBC
    // 0x802C0EA4: lw          $s0, 0xC($v1)
    ctx->r16 = MEM_W(ctx->r3, 0XC);
        goto L_802C0EBC;
    // 0x802C0EA4: lw          $s0, 0xC($v1)
    ctx->r16 = MEM_W(ctx->r3, 0XC);
L_802C0EA8:
    // 0x802C0EA8: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x802C0EAC: b           L_802C0EBC
    // 0x802C0EB0: lw          $s0, 0x10($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X10);
        goto L_802C0EBC;
    // 0x802C0EB0: lw          $s0, 0x10($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X10);
L_802C0EB4:
    // 0x802C0EB4: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x802C0EB8: lw          $s0, 0x14($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X14);
L_802C0EBC:
    // 0x802C0EBC: jal         0x8021E66C
    // 0x802C0EC0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    static_3_8021E66C(rdram, ctx);
        goto after_1;
    // 0x802C0EC0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_1:
    // 0x802C0EC4: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x802C0EC8: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x802C0ECC: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x802C0ED0: jal         0x8021E708
    // 0x802C0ED4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_2;
    // 0x802C0ED4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_2:
    // 0x802C0ED8: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802C0EDC: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x802C0EE0: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x802C0EE4: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x802C0EE8: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x802C0EEC: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x802C0EF0: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x802C0EF4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x802C0EF8: addiu       $t3, $zero, 0x8
    ctx->r11 = ADD32(0, 0X8);
    // 0x802C0EFC: addiu       $t4, $zero, 0x10
    ctx->r12 = ADD32(0, 0X10);
    // 0x802C0F00: beq         $v0, $at, L_802C0F1C
    if (ctx->r2 == ctx->r1) {
        // 0x802C0F04: addiu       $t5, $zero, 0x20
        ctx->r13 = ADD32(0, 0X20);
            goto L_802C0F1C;
    }
    // 0x802C0F04: addiu       $t5, $zero, 0x20
    ctx->r13 = ADD32(0, 0X20);
    // 0x802C0F08: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x802C0F0C: beq         $v0, $at, L_802C110C
    if (ctx->r2 == ctx->r1) {
        // 0x802C0F10: lw          $a0, 0x64($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X64);
            goto L_802C110C;
    }
    // 0x802C0F10: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x802C0F14: b           L_802C11A4
    // 0x802C0F18: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
        goto L_802C11A4;
    // 0x802C0F18: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
L_802C0F1C:
    // 0x802C0F1C: lw          $t9, 0x60($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X60);
    // 0x802C0F20: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x802C0F24: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x802C0F28: lw          $v0, 0x1BC($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X1BC);
    // 0x802C0F2C: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    // 0x802C0F30: beq         $v0, $at, L_802C0F48
    if (ctx->r2 == ctx->r1) {
        // 0x802C0F34: addiu       $at, $zero, 0x7
        ctx->r1 = ADD32(0, 0X7);
            goto L_802C0F48;
    }
    // 0x802C0F34: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x802C0F38: beq         $v0, $at, L_802C0FDC
    if (ctx->r2 == ctx->r1) {
        // 0x802C0F3C: lw          $a0, 0x64($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X64);
            goto L_802C0FDC;
    }
    // 0x802C0F3C: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x802C0F40: b           L_802C1074
    // 0x802C0F44: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
        goto L_802C1074;
    // 0x802C0F44: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
L_802C0F48:
    // 0x802C0F48: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802C0F4C: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x802C0F50: beq         $v0, $t0, L_802C0F88
    if (ctx->r2 == ctx->r8) {
        // 0x802C0F54: nop
    
            goto L_802C0F88;
    }
    // 0x802C0F54: nop

    // 0x802C0F58: beq         $v0, $t1, L_802C0F90
    if (ctx->r2 == ctx->r9) {
        // 0x802C0F5C: nop
    
            goto L_802C0F90;
    }
    // 0x802C0F5C: nop

    // 0x802C0F60: beq         $v0, $t2, L_802C0F98
    if (ctx->r2 == ctx->r10) {
        // 0x802C0F64: nop
    
            goto L_802C0F98;
    }
    // 0x802C0F64: nop

    // 0x802C0F68: beq         $v0, $t3, L_802C0FA0
    if (ctx->r2 == ctx->r11) {
        // 0x802C0F6C: nop
    
            goto L_802C0FA0;
    }
    // 0x802C0F6C: nop

    // 0x802C0F70: beq         $v0, $t4, L_802C0FA8
    if (ctx->r2 == ctx->r12) {
        // 0x802C0F74: nop
    
            goto L_802C0FA8;
    }
    // 0x802C0F74: nop

    // 0x802C0F78: beql        $v0, $t5, L_802C0FB4
    if (ctx->r2 == ctx->r13) {
        // 0x802C0F7C: lw          $s0, 0x14($v1)
        ctx->r16 = MEM_W(ctx->r3, 0X14);
            goto L_802C0FB4;
    }
    goto skip_0;
    // 0x802C0F7C: lw          $s0, 0x14($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X14);
    skip_0:
    // 0x802C0F80: b           L_802C0FB4
    // 0x802C0F84: nop

        goto L_802C0FB4;
    // 0x802C0F84: nop

L_802C0F88:
    // 0x802C0F88: b           L_802C0FB4
    // 0x802C0F8C: lw          $s0, 0x4($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X4);
        goto L_802C0FB4;
    // 0x802C0F8C: lw          $s0, 0x4($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X4);
L_802C0F90:
    // 0x802C0F90: b           L_802C0FB4
    // 0x802C0F94: lw          $s0, 0x8($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X8);
        goto L_802C0FB4;
    // 0x802C0F94: lw          $s0, 0x8($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X8);
L_802C0F98:
    // 0x802C0F98: b           L_802C0FB4
    // 0x802C0F9C: lw          $s0, 0x0($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X0);
        goto L_802C0FB4;
    // 0x802C0F9C: lw          $s0, 0x0($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X0);
L_802C0FA0:
    // 0x802C0FA0: b           L_802C0FB4
    // 0x802C0FA4: lw          $s0, 0xC($v1)
    ctx->r16 = MEM_W(ctx->r3, 0XC);
        goto L_802C0FB4;
    // 0x802C0FA4: lw          $s0, 0xC($v1)
    ctx->r16 = MEM_W(ctx->r3, 0XC);
L_802C0FA8:
    // 0x802C0FA8: b           L_802C0FB4
    // 0x802C0FAC: lw          $s0, 0x10($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X10);
        goto L_802C0FB4;
    // 0x802C0FAC: lw          $s0, 0x10($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X10);
    // 0x802C0FB0: lw          $s0, 0x14($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X14);
L_802C0FB4:
    // 0x802C0FB4: jal         0x8021E87C
    // 0x802C0FB8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    static_3_8021E87C(rdram, ctx);
        goto after_3;
    // 0x802C0FB8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_3:
    // 0x802C0FBC: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    // 0x802C0FC0: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802C0FC4: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802C0FC8: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x802C0FCC: jal         0x8021E87C
    // 0x802C0FD0: addiu       $a1, $a1, -0x8
    ctx->r5 = ADD32(ctx->r5, -0X8);
    static_3_8021E87C(rdram, ctx);
        goto after_4;
    // 0x802C0FD0: addiu       $a1, $a1, -0x8
    ctx->r5 = ADD32(ctx->r5, -0X8);
    after_4:
    // 0x802C0FD4: b           L_802C11D8
    // 0x802C0FD8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802C11D8;
    // 0x802C0FD8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802C0FDC:
    // 0x802C0FDC: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802C0FE0: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x802C0FE4: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    // 0x802C0FE8: beq         $v0, $t0, L_802C1020
    if (ctx->r2 == ctx->r8) {
        // 0x802C0FEC: nop
    
            goto L_802C1020;
    }
    // 0x802C0FEC: nop

    // 0x802C0FF0: beq         $v0, $t1, L_802C1028
    if (ctx->r2 == ctx->r9) {
        // 0x802C0FF4: nop
    
            goto L_802C1028;
    }
    // 0x802C0FF4: nop

    // 0x802C0FF8: beq         $v0, $t2, L_802C1030
    if (ctx->r2 == ctx->r10) {
        // 0x802C0FFC: nop
    
            goto L_802C1030;
    }
    // 0x802C0FFC: nop

    // 0x802C1000: beq         $v0, $t3, L_802C1038
    if (ctx->r2 == ctx->r11) {
        // 0x802C1004: nop
    
            goto L_802C1038;
    }
    // 0x802C1004: nop

    // 0x802C1008: beq         $v0, $t4, L_802C1040
    if (ctx->r2 == ctx->r12) {
        // 0x802C100C: nop
    
            goto L_802C1040;
    }
    // 0x802C100C: nop

    // 0x802C1010: beql        $v0, $t5, L_802C104C
    if (ctx->r2 == ctx->r13) {
        // 0x802C1014: lw          $s0, 0x14($v1)
        ctx->r16 = MEM_W(ctx->r3, 0X14);
            goto L_802C104C;
    }
    goto skip_1;
    // 0x802C1014: lw          $s0, 0x14($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X14);
    skip_1:
    // 0x802C1018: b           L_802C104C
    // 0x802C101C: nop

        goto L_802C104C;
    // 0x802C101C: nop

L_802C1020:
    // 0x802C1020: b           L_802C104C
    // 0x802C1024: lw          $s0, 0x4($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X4);
        goto L_802C104C;
    // 0x802C1024: lw          $s0, 0x4($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X4);
L_802C1028:
    // 0x802C1028: b           L_802C104C
    // 0x802C102C: lw          $s0, 0x8($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X8);
        goto L_802C104C;
    // 0x802C102C: lw          $s0, 0x8($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X8);
L_802C1030:
    // 0x802C1030: b           L_802C104C
    // 0x802C1034: lw          $s0, 0x0($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X0);
        goto L_802C104C;
    // 0x802C1034: lw          $s0, 0x0($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X0);
L_802C1038:
    // 0x802C1038: b           L_802C104C
    // 0x802C103C: lw          $s0, 0xC($v1)
    ctx->r16 = MEM_W(ctx->r3, 0XC);
        goto L_802C104C;
    // 0x802C103C: lw          $s0, 0xC($v1)
    ctx->r16 = MEM_W(ctx->r3, 0XC);
L_802C1040:
    // 0x802C1040: b           L_802C104C
    // 0x802C1044: lw          $s0, 0x10($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X10);
        goto L_802C104C;
    // 0x802C1044: lw          $s0, 0x10($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X10);
    // 0x802C1048: lw          $s0, 0x14($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X14);
L_802C104C:
    // 0x802C104C: jal         0x8021E87C
    // 0x802C1050: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    static_3_8021E87C(rdram, ctx);
        goto after_5;
    // 0x802C1050: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_5:
    // 0x802C1054: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    // 0x802C1058: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802C105C: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802C1060: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x802C1064: jal         0x8021E87C
    // 0x802C1068: addiu       $a1, $a1, -0x8
    ctx->r5 = ADD32(ctx->r5, -0X8);
    static_3_8021E87C(rdram, ctx);
        goto after_6;
    // 0x802C1068: addiu       $a1, $a1, -0x8
    ctx->r5 = ADD32(ctx->r5, -0X8);
    after_6:
    // 0x802C106C: b           L_802C11D8
    // 0x802C1070: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802C11D8;
    // 0x802C1070: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802C1074:
    // 0x802C1074: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x802C1078: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x802C107C: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    // 0x802C1080: beq         $v0, $t0, L_802C10B8
    if (ctx->r2 == ctx->r8) {
        // 0x802C1084: nop
    
            goto L_802C10B8;
    }
    // 0x802C1084: nop

    // 0x802C1088: beq         $v0, $t1, L_802C10C0
    if (ctx->r2 == ctx->r9) {
        // 0x802C108C: nop
    
            goto L_802C10C0;
    }
    // 0x802C108C: nop

    // 0x802C1090: beq         $v0, $t2, L_802C10C8
    if (ctx->r2 == ctx->r10) {
        // 0x802C1094: nop
    
            goto L_802C10C8;
    }
    // 0x802C1094: nop

    // 0x802C1098: beq         $v0, $t3, L_802C10D0
    if (ctx->r2 == ctx->r11) {
        // 0x802C109C: nop
    
            goto L_802C10D0;
    }
    // 0x802C109C: nop

    // 0x802C10A0: beq         $v0, $t4, L_802C10D8
    if (ctx->r2 == ctx->r12) {
        // 0x802C10A4: nop
    
            goto L_802C10D8;
    }
    // 0x802C10A4: nop

    // 0x802C10A8: beql        $v0, $t5, L_802C10E4
    if (ctx->r2 == ctx->r13) {
        // 0x802C10AC: lw          $s0, 0x14($v1)
        ctx->r16 = MEM_W(ctx->r3, 0X14);
            goto L_802C10E4;
    }
    goto skip_2;
    // 0x802C10AC: lw          $s0, 0x14($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X14);
    skip_2:
    // 0x802C10B0: b           L_802C10E4
    // 0x802C10B4: nop

        goto L_802C10E4;
    // 0x802C10B4: nop

L_802C10B8:
    // 0x802C10B8: b           L_802C10E4
    // 0x802C10BC: lw          $s0, 0x4($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X4);
        goto L_802C10E4;
    // 0x802C10BC: lw          $s0, 0x4($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X4);
L_802C10C0:
    // 0x802C10C0: b           L_802C10E4
    // 0x802C10C4: lw          $s0, 0x8($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X8);
        goto L_802C10E4;
    // 0x802C10C4: lw          $s0, 0x8($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X8);
L_802C10C8:
    // 0x802C10C8: b           L_802C10E4
    // 0x802C10CC: lw          $s0, 0x0($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X0);
        goto L_802C10E4;
    // 0x802C10CC: lw          $s0, 0x0($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X0);
L_802C10D0:
    // 0x802C10D0: b           L_802C10E4
    // 0x802C10D4: lw          $s0, 0xC($v1)
    ctx->r16 = MEM_W(ctx->r3, 0XC);
        goto L_802C10E4;
    // 0x802C10D4: lw          $s0, 0xC($v1)
    ctx->r16 = MEM_W(ctx->r3, 0XC);
L_802C10D8:
    // 0x802C10D8: b           L_802C10E4
    // 0x802C10DC: lw          $s0, 0x10($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X10);
        goto L_802C10E4;
    // 0x802C10DC: lw          $s0, 0x10($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X10);
    // 0x802C10E0: lw          $s0, 0x14($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X14);
L_802C10E4:
    // 0x802C10E4: jal         0x8021E87C
    // 0x802C10E8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    static_3_8021E87C(rdram, ctx);
        goto after_7;
    // 0x802C10E8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_7:
    // 0x802C10EC: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    // 0x802C10F0: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802C10F4: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802C10F8: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x802C10FC: jal         0x8021E87C
    // 0x802C1100: addiu       $a1, $a1, -0x8
    ctx->r5 = ADD32(ctx->r5, -0X8);
    static_3_8021E87C(rdram, ctx);
        goto after_8;
    // 0x802C1100: addiu       $a1, $a1, -0x8
    ctx->r5 = ADD32(ctx->r5, -0X8);
    after_8:
    // 0x802C1104: b           L_802C11D8
    // 0x802C1108: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802C11D8;
    // 0x802C1108: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802C110C:
    // 0x802C110C: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802C1110: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x802C1114: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    // 0x802C1118: beq         $v0, $t0, L_802C1150
    if (ctx->r2 == ctx->r8) {
        // 0x802C111C: nop
    
            goto L_802C1150;
    }
    // 0x802C111C: nop

    // 0x802C1120: beq         $v0, $t1, L_802C1158
    if (ctx->r2 == ctx->r9) {
        // 0x802C1124: nop
    
            goto L_802C1158;
    }
    // 0x802C1124: nop

    // 0x802C1128: beq         $v0, $t2, L_802C1160
    if (ctx->r2 == ctx->r10) {
        // 0x802C112C: nop
    
            goto L_802C1160;
    }
    // 0x802C112C: nop

    // 0x802C1130: beq         $v0, $t3, L_802C1168
    if (ctx->r2 == ctx->r11) {
        // 0x802C1134: nop
    
            goto L_802C1168;
    }
    // 0x802C1134: nop

    // 0x802C1138: beq         $v0, $t4, L_802C1170
    if (ctx->r2 == ctx->r12) {
        // 0x802C113C: nop
    
            goto L_802C1170;
    }
    // 0x802C113C: nop

    // 0x802C1140: beql        $v0, $t5, L_802C117C
    if (ctx->r2 == ctx->r13) {
        // 0x802C1144: lw          $s0, 0x14($v1)
        ctx->r16 = MEM_W(ctx->r3, 0X14);
            goto L_802C117C;
    }
    goto skip_3;
    // 0x802C1144: lw          $s0, 0x14($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X14);
    skip_3:
    // 0x802C1148: b           L_802C117C
    // 0x802C114C: nop

        goto L_802C117C;
    // 0x802C114C: nop

L_802C1150:
    // 0x802C1150: b           L_802C117C
    // 0x802C1154: lw          $s0, 0x4($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X4);
        goto L_802C117C;
    // 0x802C1154: lw          $s0, 0x4($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X4);
L_802C1158:
    // 0x802C1158: b           L_802C117C
    // 0x802C115C: lw          $s0, 0x8($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X8);
        goto L_802C117C;
    // 0x802C115C: lw          $s0, 0x8($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X8);
L_802C1160:
    // 0x802C1160: b           L_802C117C
    // 0x802C1164: lw          $s0, 0x0($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X0);
        goto L_802C117C;
    // 0x802C1164: lw          $s0, 0x0($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X0);
L_802C1168:
    // 0x802C1168: b           L_802C117C
    // 0x802C116C: lw          $s0, 0xC($v1)
    ctx->r16 = MEM_W(ctx->r3, 0XC);
        goto L_802C117C;
    // 0x802C116C: lw          $s0, 0xC($v1)
    ctx->r16 = MEM_W(ctx->r3, 0XC);
L_802C1170:
    // 0x802C1170: b           L_802C117C
    // 0x802C1174: lw          $s0, 0x10($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X10);
        goto L_802C117C;
    // 0x802C1174: lw          $s0, 0x10($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X10);
    // 0x802C1178: lw          $s0, 0x14($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X14);
L_802C117C:
    // 0x802C117C: jal         0x8021E87C
    // 0x802C1180: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    static_3_8021E87C(rdram, ctx);
        goto after_9;
    // 0x802C1180: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_9:
    // 0x802C1184: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    // 0x802C1188: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802C118C: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802C1190: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x802C1194: jal         0x8021E87C
    // 0x802C1198: addiu       $a1, $a1, -0x8
    ctx->r5 = ADD32(ctx->r5, -0X8);
    static_3_8021E87C(rdram, ctx);
        goto after_10;
    // 0x802C1198: addiu       $a1, $a1, -0x8
    ctx->r5 = ADD32(ctx->r5, -0X8);
    after_10:
    // 0x802C119C: b           L_802C11D8
    // 0x802C11A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802C11D8;
    // 0x802C11A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802C11A4:
    // 0x802C11A4: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    // 0x802C11A8: jal         0x8021E87C
    // 0x802C11AC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    static_3_8021E87C(rdram, ctx);
        goto after_11;
    // 0x802C11AC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_11:
    // 0x802C11B0: jal         0x8030A3EC
    // 0x802C11B4: lw          $a0, 0x6C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X6C);
    static_3_8030A3EC(rdram, ctx);
        goto after_12;
    // 0x802C11B4: lw          $a0, 0x6C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X6C);
    after_12:
    // 0x802C11B8: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    // 0x802C11BC: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x802C11C0: addu        $a2, $sp, $t7
    ctx->r6 = ADD32(ctx->r29, ctx->r15);
    // 0x802C11C4: lw          $a2, 0x30($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X30);
    // 0x802C11C8: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x802C11CC: jal         0x8021E87C
    // 0x802C11D0: addiu       $a1, $a1, -0x8
    ctx->r5 = ADD32(ctx->r5, -0X8);
    static_3_8021E87C(rdram, ctx);
        goto after_13;
    // 0x802C11D0: addiu       $a1, $a1, -0x8
    ctx->r5 = ADD32(ctx->r5, -0X8);
    after_13:
    // 0x802C11D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802C11D8:
    // 0x802C11D8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802C11DC: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x802C11E0: jr          $ra
    // 0x802C11E4: nop

    return;
    // 0x802C11E4: nop

;}
RECOMP_FUNC void D_80238A50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80238A50: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80238A54: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x80238A58: and         $t9, $a1, $at
    ctx->r25 = ctx->r5 & ctx->r1;
    // 0x80238A5C: andi        $t2, $a1, 0xFF00
    ctx->r10 = ctx->r5 & 0XFF00;
    // 0x80238A60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80238A64: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x80238A68: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x80238A6C: addiu       $t8, $zero, 0x51
    ctx->r24 = ADD32(0, 0X51);
    // 0x80238A70: sra         $t1, $t9, 16
    ctx->r9 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80238A74: sra         $t3, $t2, 8
    ctx->r11 = S32(SIGNED(ctx->r10) >> 8);
    // 0x80238A78: or          $t4, $a1, $zero
    ctx->r12 = ctx->r5 | 0;
    // 0x80238A7C: sh          $t6, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r14;
    // 0x80238A80: sb          $t7, 0x20($sp)
    MEM_B(0X20, ctx->r29) = ctx->r15;
    // 0x80238A84: sb          $t8, 0x21($sp)
    MEM_B(0X21, ctx->r29) = ctx->r24;
    // 0x80238A88: sb          $t1, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r9;
    // 0x80238A8C: sb          $t3, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r11;
    // 0x80238A90: sb          $t4, 0x25($sp)
    MEM_B(0X25, ctx->r29) = ctx->r12;
    // 0x80238A94: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x80238A98: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    // 0x80238A9C: jal         0x8023F37C
    // 0x80238AA0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_8023F37C(rdram, ctx);
        goto after_0;
    // 0x80238AA0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80238AA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80238AA8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80238AAC: jr          $ra
    // 0x80238AB0: nop

    return;
    // 0x80238AB0: nop

;}
RECOMP_FUNC void D_802B889C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B891C: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x802B8920: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802B8924: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802B8928: sw          $a1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r5;
    // 0x802B892C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802B8930: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802B8934: addiu       $a1, $s0, 0x88
    ctx->r5 = ADD32(ctx->r16, 0X88);
    // 0x802B8938: addiu       $a0, $a0, 0xC8
    ctx->r4 = ADD32(ctx->r4, 0XC8);
    // 0x802B893C: sw          $a2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r6;
    // 0x802B8940: sb          $t6, 0x7F($sp)
    MEM_B(0X7F, ctx->r29) = ctx->r14;
    // 0x802B8944: sw          $a0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r4;
    // 0x802B8948: jal         0x80228DE0
    // 0x802B894C: sw          $a1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r5;
    func_80228DE0(rdram, ctx);
        goto after_0;
    // 0x802B894C: sw          $a1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r5;
    after_0:
    // 0x802B8950: lw          $v0, 0x4C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4C);
    // 0x802B8954: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x802B8958: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    // 0x802B895C: beq         $v0, $at, L_802B8970
    if (ctx->r2 == ctx->r1) {
        // 0x802B8960: lw          $a0, 0x38($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X38);
            goto L_802B8970;
    }
    // 0x802B8960: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x802B8964: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802B8968: bne         $v0, $at, L_802B8A10
    if (ctx->r2 != ctx->r1) {
        // 0x802B896C: lwc1        $f6, 0x88($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X88);
            goto L_802B8A10;
    }
    // 0x802B896C: lwc1        $f6, 0x88($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X88);
L_802B8970:
    // 0x802B8970: addiu       $t7, $sp, 0x64
    ctx->r15 = ADD32(ctx->r29, 0X64);
    // 0x802B8974: addiu       $t8, $sp, 0x60
    ctx->r24 = ADD32(ctx->r29, 0X60);
    // 0x802B8978: addiu       $t9, $sp, 0x5C
    ctx->r25 = ADD32(ctx->r29, 0X5C);
    // 0x802B897C: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x802B8980: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x802B8984: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x802B8988: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x802B898C: jal         0x802CF1C8
    // 0x802B8990: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    static_3_802CF1C8(rdram, ctx);
        goto after_1;
    // 0x802B8990: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    after_1:
    // 0x802B8994: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x802B8998: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802B899C: lwc1        $f6, 0x88($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X88);
    // 0x802B89A0: lwc1        $f10, 0x10C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10C);
    // 0x802B89A4: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802B89A8: add.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x802B89AC: swc1        $f18, 0x10C($s0)
    MEM_W(0X10C, ctx->r16) = ctx->f18.u32l;
    // 0x802B89B0: jal         0x80300424
    // 0x802B89B4: lwc1        $f12, 0x60($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X60);
    static_3_80300424(rdram, ctx);
        goto after_2;
    // 0x802B89B4: lwc1        $f12, 0x60($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X60);
    after_2:
    // 0x802B89B8: lwc1        $f6, 0x10C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10C);
    // 0x802B89BC: neg.s       $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = -ctx->f0.fl;
    // 0x802B89C0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B89C4: mul.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802B89C8: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B89CC: lwc1        $f8, 0x60($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X60);
    // 0x802B89D0: add.s       $f12, $f8, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x802B89D4: jal         0x80300424
    // 0x802B89D8: swc1        $f10, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f10.u32l;
    static_3_80300424(rdram, ctx);
        goto after_3;
    // 0x802B89D8: swc1        $f10, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f10.u32l;
    after_3:
    // 0x802B89DC: jal         0x80234B48
    // 0x802B89E0: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    static_3_80234B48(rdram, ctx);
        goto after_4;
    // 0x802B89E0: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_4:
    // 0x802B89E4: lwc1        $f6, 0x10C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10C);
    // 0x802B89E8: neg.s       $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = -ctx->f0.fl;
    // 0x802B89EC: lwc1        $f10, 0x84($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X84);
    // 0x802B89F0: lwc1        $f8, 0x88($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X88);
    // 0x802B89F4: mul.s       $f16, $f4, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802B89F8: nop

    // 0x802B89FC: mul.s       $f2, $f10, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x802B8A00: swc1        $f2, 0x108($s0)
    MEM_W(0X108, ctx->r16) = ctx->f2.u32l;
    // 0x802B8A04: lwc1        $f18, 0x58($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X58);
    // 0x802B8A08: b           L_802B8A20
    // 0x802B8A0C: add.s       $f14, $f18, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = ctx->f18.fl + ctx->f2.fl;
        goto L_802B8A20;
    // 0x802B8A0C: add.s       $f14, $f18, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = ctx->f18.fl + ctx->f2.fl;
L_802B8A10:
    // 0x802B8A10: lwc1        $f4, 0x84($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X84);
    // 0x802B8A14: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x802B8A18: mul.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802B8A1C: nop

L_802B8A20:
    // 0x802B8A20: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x802B8A24: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x802B8A28: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x802B8A2C: jal         0x8022A0D0
    // 0x802B8A30: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    static_3_8022A0D0(rdram, ctx);
        goto after_5;
    // 0x802B8A30: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_5:
    // 0x802B8A34: lh          $v0, 0x80($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X80);
    // 0x802B8A38: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802B8A3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802B8A40: bne         $v0, $at, L_802B8A50
    if (ctx->r2 != ctx->r1) {
        // 0x802B8A44: lw          $a2, 0x38($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X38);
            goto L_802B8A50;
    }
    // 0x802B8A44: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x802B8A48: jal         0x8021B4B0
    // 0x802B8A4C: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    static_3_8021B4B0(rdram, ctx);
        goto after_6;
    // 0x802B8A4C: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_6:
L_802B8A50:
    // 0x802B8A50: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802B8A54: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802B8A58: addiu       $a1, $s0, 0x64
    ctx->r5 = ADD32(ctx->r16, 0X64);
    // 0x802B8A5C: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x802B8A60: jal         0x803025D8
    // 0x802B8A64: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_803025D8(rdram, ctx);
        goto after_7;
    // 0x802B8A64: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_7:
    // 0x802B8A68: lwc1        $f10, 0x54($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X54);
    // 0x802B8A6C: lw          $a3, 0x50($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X50);
    // 0x802B8A70: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802B8A74: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x802B8A78: lw          $t0, 0x4C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X4C);
    // 0x802B8A7C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802B8A80: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802B8A84: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x802B8A88: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x802B8A8C: jal         0x802AF31C
    // 0x802B8A90: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    static_3_802AF31C(rdram, ctx);
        goto after_8;
    // 0x802B8A90: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_8:
    // 0x802B8A94: beq         $v0, $zero, L_802B8B38
    if (ctx->r2 == 0) {
        // 0x802B8A98: sw          $v0, 0x78($sp)
        MEM_W(0X78, ctx->r29) = ctx->r2;
            goto L_802B8B38;
    }
    // 0x802B8A98: sw          $v0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r2;
    // 0x802B8A9C: xori        $v1, $v0, 0x5
    ctx->r3 = ctx->r2 ^ 0X5;
    // 0x802B8AA0: sltiu       $a0, $v1, 0x1
    ctx->r4 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x802B8AA4: beq         $a0, $zero, L_802B8AB8
    if (ctx->r4 == 0) {
        // 0x802B8AA8: nop
    
            goto L_802B8AB8;
    }
    // 0x802B8AA8: nop

    // 0x802B8AAC: jal         0x80309DAC
    // 0x802B8AB0: nop

    static_3_80309DAC(rdram, ctx);
        goto after_9;
    // 0x802B8AB0: nop

    after_9:
    // 0x802B8AB4: sltu        $a0, $zero, $v0
    ctx->r4 = 0 < ctx->r2 ? 1 : 0;
L_802B8AB8:
    // 0x802B8AB8: bne         $a0, $zero, L_802B8B38
    if (ctx->r4 != 0) {
        // 0x802B8ABC: nop
    
            goto L_802B8B38;
    }
    // 0x802B8ABC: nop

    // 0x802B8AC0: lw          $t1, 0x60($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X60);
    // 0x802B8AC4: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x802B8AC8: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x802B8ACC: bne         $t1, $at, L_802B8B10
    if (ctx->r9 != ctx->r1) {
        // 0x802B8AD0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_802B8B10;
    }
    // 0x802B8AD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802B8AD4: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    // 0x802B8AD8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802B8ADC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802B8AE0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802B8AE4: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x802B8AE8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802B8AEC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x802B8AF0: lw          $t2, 0x4C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X4C);
    // 0x802B8AF4: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802B8AF8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x802B8AFC: lui         $a3, 0x4040
    ctx->r7 = S32(0X4040 << 16);
    // 0x802B8B00: jal         0x802AA880
    // 0x802B8B04: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    static_3_802AA880(rdram, ctx);
        goto after_10;
    // 0x802B8B04: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    after_10:
    // 0x802B8B08: b           L_802B8B1C
    // 0x802B8B0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_802B8B1C;
    // 0x802B8B0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_802B8B10:
    // 0x802B8B10: jal         0x802E8B30
    // 0x802B8B14: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_802E8B30(rdram, ctx);
        goto after_11;
    // 0x802B8B14: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_11:
    // 0x802B8B18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_802B8B1C:
    // 0x802B8B1C: jal         0x80320824
    // 0x802B8B20: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_80320824(rdram, ctx);
        goto after_12;
    // 0x802B8B20: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_12:
    // 0x802B8B24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802B8B28: lw          $a1, 0x78($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X78);
    // 0x802B8B2C: jal         0x80320964
    // 0x802B8B30: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    static_3_80320964(rdram, ctx);
        goto after_13;
    // 0x802B8B30: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    after_13:
    // 0x802B8B34: sb          $zero, 0x7F($sp)
    MEM_B(0X7F, ctx->r29) = 0;
L_802B8B38:
    // 0x802B8B38: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x802B8B3C: lbu         $t3, 0x0($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X0);
    // 0x802B8B40: jal         0x80309DAC
    // 0x802B8B44: sw          $t3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r11;
    static_3_80309DAC(rdram, ctx);
        goto after_14;
    // 0x802B8B44: sw          $t3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r11;
    after_14:
    // 0x802B8B48: bne         $v0, $zero, L_802B8C00
    if (ctx->r2 != 0) {
        // 0x802B8B4C: lw          $t4, 0x6C($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X6C);
            goto L_802B8C00;
    }
    // 0x802B8B4C: lw          $t4, 0x6C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X6C);
    // 0x802B8B50: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x802B8B54: beq         $t4, $at, L_802B8C00
    if (ctx->r12 == ctx->r1) {
        // 0x802B8B58: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_802B8C00;
    }
    // 0x802B8B58: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802B8B5C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802B8B60: lw          $a1, 0xB8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XB8);
    // 0x802B8B64: jal         0x802AEF08
    // 0x802B8B68: lw          $a2, 0xBC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XBC);
    static_3_802AEF08(rdram, ctx);
        goto after_15;
    // 0x802B8B68: lw          $a2, 0xBC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XBC);
    after_15:
    // 0x802B8B6C: lwc1        $f4, 0xC0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC0);
    // 0x802B8B70: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802B8B74: sub.s       $f2, $f4, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x802B8B78: c.le.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl <= ctx->f6.fl;
    // 0x802B8B7C: nop

    // 0x802B8B80: bc1fl       L_802B8C04
    if (!c1cs) {
        // 0x802B8B84: lwc1        $f18, 0x5C($s0)
        ctx->f18.u32l = MEM_W(ctx->r16, 0X5C);
            goto L_802B8C04;
    }
    goto skip_0;
    // 0x802B8B84: lwc1        $f18, 0x5C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X5C);
    skip_0:
    // 0x802B8B88: lw          $a0, 0x60($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X60);
    // 0x802B8B8C: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x802B8B90: sb          $zero, 0x7F($sp)
    MEM_B(0X7F, ctx->r29) = 0;
    // 0x802B8B94: bne         $a0, $at, L_802B8BDC
    if (ctx->r4 != ctx->r1) {
        // 0x802B8B98: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_802B8BDC;
    }
    // 0x802B8B98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802B8B9C: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    // 0x802B8BA0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802B8BA4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802B8BA8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802B8BAC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x802B8BB0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802B8BB4: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x802B8BB8: lw          $t5, 0x4C($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X4C);
    // 0x802B8BBC: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802B8BC0: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x802B8BC4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x802B8BC8: lui         $a3, 0x4040
    ctx->r7 = S32(0X4040 << 16);
    // 0x802B8BCC: jal         0x802AA880
    // 0x802B8BD0: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    static_3_802AA880(rdram, ctx);
        goto after_16;
    // 0x802B8BD0: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    after_16:
    // 0x802B8BD4: b           L_802B8BE8
    // 0x802B8BD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_802B8BE8;
    // 0x802B8BD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_802B8BDC:
    // 0x802B8BDC: jal         0x802E8B30
    // 0x802B8BE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802E8B30(rdram, ctx);
        goto after_17;
    // 0x802B8BE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x802B8BE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_802B8BE8:
    // 0x802B8BE8: jal         0x80320824
    // 0x802B8BEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_80320824(rdram, ctx);
        goto after_18;
    // 0x802B8BEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_18:
    // 0x802B8BF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802B8BF4: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x802B8BF8: jal         0x80320964
    // 0x802B8BFC: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    static_3_80320964(rdram, ctx);
        goto after_19;
    // 0x802B8BFC: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    after_19:
L_802B8C00:
    // 0x802B8C00: lwc1        $f18, 0x5C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X5C);
L_802B8C04:
    // 0x802B8C04: lwc1        $f4, 0x88($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X88);
    // 0x802B8C08: lwc1        $f10, 0x58($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X58);
    // 0x802B8C0C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x802B8C10: swc1        $f6, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->f6.u32l;
    // 0x802B8C14: lwc1        $f8, 0x5C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X5C);
    // 0x802B8C18: c.lt.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl < ctx->f8.fl;
    // 0x802B8C1C: nop

    // 0x802B8C20: bc1fl       L_802B8C90
    if (!c1cs) {
        // 0x802B8C24: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_802B8C90;
    }
    goto skip_1;
    // 0x802B8C24: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_1:
    // 0x802B8C28: sb          $zero, 0x7F($sp)
    MEM_B(0X7F, ctx->r29) = 0;
    // 0x802B8C2C: lw          $t6, 0x60($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X60);
    // 0x802B8C30: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x802B8C34: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802B8C38: bne         $t6, $at, L_802B8C70
    if (ctx->r14 != ctx->r1) {
        // 0x802B8C3C: lw          $a1, 0x3C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X3C);
            goto L_802B8C70;
    }
    // 0x802B8C3C: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x802B8C40: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    // 0x802B8C44: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802B8C48: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802B8C4C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802B8C50: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x802B8C54: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802B8C58: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x802B8C5C: lw          $t7, 0x4C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X4C);
    // 0x802B8C60: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x802B8C64: lui         $a3, 0x4040
    ctx->r7 = S32(0X4040 << 16);
    // 0x802B8C68: jal         0x802AA880
    // 0x802B8C6C: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    static_3_802AA880(rdram, ctx);
        goto after_20;
    // 0x802B8C6C: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    after_20:
L_802B8C70:
    // 0x802B8C70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802B8C74: jal         0x80320824
    // 0x802B8C78: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_80320824(rdram, ctx);
        goto after_21;
    // 0x802B8C78: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_21:
    // 0x802B8C7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802B8C80: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802B8C84: jal         0x80320964
    // 0x802B8C88: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    static_3_80320964(rdram, ctx);
        goto after_22;
    // 0x802B8C88: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    after_22:
    // 0x802B8C8C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_802B8C90:
    // 0x802B8C90: lbu         $v0, 0x7F($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X7F);
    // 0x802B8C94: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802B8C98: jr          $ra
    // 0x802B8C9C: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x802B8C9C: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void D_8022D49C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022D49C: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8022D4A0: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x8022D4A4: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x8022D4A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D4AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022D4B0: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8022D4B4: slti        $at, $t7, 0x5
    ctx->r1 = SIGNED(ctx->r15) < 0X5 ? 1 : 0;
    // 0x8022D4B8: bne         $at, $zero, L_8022D4C4
    if (ctx->r1 != 0) {
        // 0x8022D4BC: sw          $t7, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->r15;
            goto L_8022D4C4;
    }
    // 0x8022D4BC: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x8022D4C0: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
L_8022D4C4:
    // 0x8022D4C4: jal         0x80207130
    // 0x8022D4C8: addiu       $a0, $zero, 0x69
    ctx->r4 = ADD32(0, 0X69);
    static_3_80207130(rdram, ctx);
        goto after_0;
    // 0x8022D4C8: addiu       $a0, $zero, 0x69
    ctx->r4 = ADD32(0, 0X69);
    after_0:
    // 0x8022D4CC: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8022D4D0: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x8022D4D4: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x8022D4D8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022D4DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022D4E0: sll         $t9, $v0, 3
    ctx->r25 = S32(ctx->r2 << 3);
    // 0x8022D4E4: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8022D4E8: sdc1        $f0, 0x0($at)
    CHECK_FR(ctx, 0);
    SD(ctx->f0.u64, 0X0, ctx->r1);
    // 0x8022D4EC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022D4F0: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x8022D4F4: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8022D4F8: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
    // 0x8022D4FC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022D500: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8022D504: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
    // 0x8022D508: jr          $ra
    // 0x8022D50C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8022D50C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void D_8023EC78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023EC78: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8023EC7C: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x8023EC80: sw          $zero, 0x0($sp)
    MEM_W(0X0, ctx->r29) = 0;
L_8023EC84:
    // 0x8023EC84: lw          $t6, 0x0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X0);
    // 0x8023EC88: lw          $t8, 0x0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X0);
    // 0x8023EC8C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8023EC90: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8023EC94: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8023EC98: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
    // 0x8023EC9C: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8023ECA0: slti        $at, $t9, 0x10
    ctx->r1 = SIGNED(ctx->r25) < 0X10 ? 1 : 0;
    // 0x8023ECA4: bne         $at, $zero, L_8023EC84
    if (ctx->r1 != 0) {
        // 0x8023ECA8: sw          $t9, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r25;
            goto L_8023EC84;
    }
    // 0x8023ECA8: sw          $t9, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r25;
    // 0x8023ECAC: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x8023ECB0: lbu         $t9, 0x0($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X0);
    // 0x8023ECB4: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x8023ECB8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8023ECBC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8023ECC0: addiu       $t1, $t1, 0x0
    ctx->r9 = ADD32(ctx->r9, 0X0);
    // 0x8023ECC4: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8023ECC8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8023ECCC: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x8023ECD0: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8023ECD4: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8023ECD8: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x8023ECDC: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8023ECE0: sw          $t0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r8;
    // 0x8023ECE4: sw          $t1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r9;
    // 0x8023ECE8: sb          $t2, 0x4($sp)
    MEM_B(0X4, ctx->r29) = ctx->r10;
    // 0x8023ECEC: sb          $t3, 0x5($sp)
    MEM_B(0X5, ctx->r29) = ctx->r11;
    // 0x8023ECF0: sb          $t4, 0x6($sp)
    MEM_B(0X6, ctx->r29) = ctx->r12;
    // 0x8023ECF4: sb          $a0, 0x7($sp)
    MEM_B(0X7, ctx->r29) = ctx->r4;
    // 0x8023ECF8: sb          $t5, 0x8($sp)
    MEM_B(0X8, ctx->r29) = ctx->r13;
    // 0x8023ECFC: sb          $t6, 0x9($sp)
    MEM_B(0X9, ctx->r29) = ctx->r14;
    // 0x8023ED00: sb          $t7, 0xA($sp)
    MEM_B(0XA, ctx->r29) = ctx->r15;
    // 0x8023ED04: sb          $t8, 0xB($sp)
    MEM_B(0XB, ctx->r29) = ctx->r24;
    // 0x8023ED08: blez        $t9, L_8023ED58
    if (SIGNED(ctx->r25) <= 0) {
        // 0x8023ED0C: sw          $zero, 0x0($sp)
        MEM_W(0X0, ctx->r29) = 0;
            goto L_8023ED58;
    }
    // 0x8023ED0C: sw          $zero, 0x0($sp)
    MEM_W(0X0, ctx->r29) = 0;
L_8023ED10:
    // 0x8023ED10: addiu       $t1, $sp, 0x4
    ctx->r9 = ADD32(ctx->r29, 0X4);
    // 0x8023ED14: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x8023ED18: lw          $t0, 0xC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC);
    // 0x8023ED1C: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x8023ED20: swl         $at, 0x0($t0)
    do_swl(rdram, 0X0, ctx->r8, ctx->r1);
    // 0x8023ED24: swr         $at, 0x3($t0)
    do_swr(rdram, 0X3, ctx->r8, ctx->r1);
    // 0x8023ED28: lw          $t3, 0x4($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X4);
    // 0x8023ED2C: swl         $t3, 0x4($t0)
    do_swl(rdram, 0X4, ctx->r8, ctx->r11);
    // 0x8023ED30: swr         $t3, 0x7($t0)
    do_swr(rdram, 0X7, ctx->r8, ctx->r11);
    // 0x8023ED34: lw          $t6, 0x0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X0);
    // 0x8023ED38: lbu         $t8, 0x0($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X0);
    // 0x8023ED3C: lw          $t4, 0xC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XC);
    // 0x8023ED40: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8023ED44: slt         $at, $t7, $t8
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x8023ED48: addiu       $t5, $t4, 0x8
    ctx->r13 = ADD32(ctx->r12, 0X8);
    // 0x8023ED4C: sw          $t7, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r15;
    // 0x8023ED50: bne         $at, $zero, L_8023ED10
    if (ctx->r1 != 0) {
        // 0x8023ED54: sw          $t5, 0xC($sp)
        MEM_W(0XC, ctx->r29) = ctx->r13;
            goto L_8023ED10;
    }
    // 0x8023ED54: sw          $t5, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r13;
L_8023ED58:
    // 0x8023ED58: lw          $t2, 0xC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC);
    // 0x8023ED5C: addiu       $t9, $zero, 0xFE
    ctx->r25 = ADD32(0, 0XFE);
    // 0x8023ED60: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    // 0x8023ED64: jr          $ra
    // 0x8023ED68: sb          $t9, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r25;
    return;
    // 0x8023ED68: sb          $t9, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r25;
;}
RECOMP_FUNC void D_802D0390(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D0410: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x802D0414: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802D0418: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x802D041C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x802D0420: lbu         $t6, 0x28($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X28);
    // 0x802D0424: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x802D0428: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x802D042C: beq         $t6, $zero, L_802D04B4
    if (ctx->r14 == 0) {
        // 0x802D0430: addiu       $t4, $t4, 0x0
        ctx->r12 = ADD32(ctx->r12, 0X0);
            goto L_802D04B4;
    }
    // 0x802D0430: addiu       $t4, $t4, 0x0
    ctx->r12 = ADD32(ctx->r12, 0X0);
    // 0x802D0434: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802D0438: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x802D043C: sb          $t7, 0xE08($a0)
    MEM_B(0XE08, ctx->r4) = ctx->r15;
    // 0x802D0440: addiu       $t8, $t8, 0x0
    ctx->r24 = ADD32(ctx->r24, 0X0);
    // 0x802D0444: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x802D0448: addiu       $v0, $sp, 0x44
    ctx->r2 = ADD32(ctx->r29, 0X44);
    // 0x802D044C: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x802D0450: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x802D0454: lw          $t0, 0x4($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X4);
    // 0x802D0458: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x802D045C: sw          $t0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r8;
    // 0x802D0460: lw          $at, 0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X8);
    // 0x802D0464: sw          $at, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r1;
    // 0x802D0468: lw          $t0, 0xC($t8)
    ctx->r8 = MEM_W(ctx->r24, 0XC);
    // 0x802D046C: sw          $t0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r8;
    // 0x802D0470: lw          $at, 0x10($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X10);
    // 0x802D0474: sw          $at, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r1;
    // 0x802D0478: lw          $t0, 0x14($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X14);
    // 0x802D047C: sw          $t0, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r8;
    // 0x802D0480: lw          $at, 0x18($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X18);
    // 0x802D0484: sw          $at, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r1;
    // 0x802D0488: lbu         $t1, 0x0($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X0);
    // 0x802D048C: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    // 0x802D0490: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x802D0494: addu        $t3, $v0, $t2
    ctx->r11 = ADD32(ctx->r2, ctx->r10);
    // 0x802D0498: lwc1        $f0, 0x0($t3)
    ctx->f0.u32l = MEM_W(ctx->r11, 0X0);
    // 0x802D049C: addiu       $a0, $a0, 0x6B8
    ctx->r4 = ADD32(ctx->r4, 0X6B8);
    // 0x802D04A0: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x802D04A4: jal         0x80303778
    // 0x802D04A8: nop

    static_3_80303778(rdram, ctx);
        goto after_0;
    // 0x802D04A8: nop

    after_0:
    // 0x802D04AC: b           L_802D0520
    // 0x802D04B0: addiu       $s0, $s1, 0x1B4
    ctx->r16 = ADD32(ctx->r17, 0X1B4);
        goto L_802D0520;
    // 0x802D04B0: addiu       $s0, $s1, 0x1B4
    ctx->r16 = ADD32(ctx->r17, 0X1B4);
L_802D04B4:
    // 0x802D04B4: lw          $at, 0x0($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X0);
    // 0x802D04B8: addiu       $v0, $sp, 0x28
    ctx->r2 = ADD32(ctx->r29, 0X28);
    // 0x802D04BC: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802D04C0: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x802D04C4: lw          $t6, 0x4($t4)
    ctx->r14 = MEM_W(ctx->r12, 0X4);
    // 0x802D04C8: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x802D04CC: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x802D04D0: lw          $at, 0x8($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X8);
    // 0x802D04D4: sw          $at, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r1;
    // 0x802D04D8: lw          $t6, 0xC($t4)
    ctx->r14 = MEM_W(ctx->r12, 0XC);
    // 0x802D04DC: sw          $t6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r14;
    // 0x802D04E0: lw          $at, 0x10($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X10);
    // 0x802D04E4: sw          $at, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r1;
    // 0x802D04E8: lw          $t6, 0x14($t4)
    ctx->r14 = MEM_W(ctx->r12, 0X14);
    // 0x802D04EC: sw          $t6, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r14;
    // 0x802D04F0: lw          $at, 0x18($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X18);
    // 0x802D04F4: sw          $at, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r1;
    // 0x802D04F8: lbu         $t7, 0x0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X0);
    // 0x802D04FC: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x802D0500: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x802D0504: addu        $t8, $v0, $t9
    ctx->r24 = ADD32(ctx->r2, ctx->r25);
    // 0x802D0508: lwc1        $f0, 0x0($t8)
    ctx->f0.u32l = MEM_W(ctx->r24, 0X0);
    // 0x802D050C: addiu       $a0, $a0, 0x6B8
    ctx->r4 = ADD32(ctx->r4, 0X6B8);
    // 0x802D0510: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x802D0514: jal         0x80303778
    // 0x802D0518: nop

    static_3_80303778(rdram, ctx);
        goto after_1;
    // 0x802D0518: nop

    after_1:
    // 0x802D051C: addiu       $s0, $s1, 0x1B4
    ctx->r16 = ADD32(ctx->r17, 0X1B4);
L_802D0520:
    // 0x802D0520: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D0524: jal         0x80305858
    // 0x802D0528: addiu       $a1, $zero, 0x8C
    ctx->r5 = ADD32(0, 0X8C);
    static_3_80305858(rdram, ctx);
        goto after_2;
    // 0x802D0528: addiu       $a1, $zero, 0x8C
    ctx->r5 = ADD32(0, 0X8C);
    after_2:
    // 0x802D052C: lw          $v0, 0x354($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X354);
    // 0x802D0530: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802D0534: lh          $t0, 0xB0($v0)
    ctx->r8 = MEM_H(ctx->r2, 0XB0);
    // 0x802D0538: lw          $t9, 0xB4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XB4);
    // 0x802D053C: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    // 0x802D0540: jalr        $t9
    // 0x802D0544: addiu       $a0, $a0, 0x1B4
    ctx->r4 = ADD32(ctx->r4, 0X1B4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x802D0544: addiu       $a0, $a0, 0x1B4
    ctx->r4 = ADD32(ctx->r4, 0X1B4);
    after_3:
    // 0x802D0548: lui         $a1, 0xC5BB
    ctx->r5 = S32(0XC5BB << 16);
    // 0x802D054C: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x802D0550: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D0554: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x802D0558: jal         0x80318E04
    // 0x802D055C: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    static_3_80318E04(rdram, ctx);
        goto after_4;
    // 0x802D055C: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    after_4:
    // 0x802D0560: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D0564: jal         0x80318C9C
    // 0x802D0568: lui         $a1, 0x4387
    ctx->r5 = S32(0X4387 << 16);
    static_3_80318C9C(rdram, ctx);
        goto after_5;
    // 0x802D0568: lui         $a1, 0x4387
    ctx->r5 = S32(0X4387 << 16);
    after_5:
    // 0x802D056C: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x802D0570: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802D0574: jal         0x802AA498
    // 0x802D0578: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    static_3_802AA498(rdram, ctx);
        goto after_6;
    // 0x802D0578: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_6:
    // 0x802D057C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802D0580: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x802D0584: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x802D0588: jr          $ra
    // 0x802D058C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x802D058C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void D_802B7128(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B71A8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802B71AC: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x802B71B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B71B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B71B8: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x802B71BC: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x802B71C0: jal         0x802C5468
    // 0x802B71C4: addiu       $a0, $a0, 0x1204
    ctx->r4 = ADD32(ctx->r4, 0X1204);
    static_3_802C5468(rdram, ctx);
        goto after_0;
    // 0x802B71C4: addiu       $a0, $a0, 0x1204
    ctx->r4 = ADD32(ctx->r4, 0X1204);
    after_0:
    // 0x802B71C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B71CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B71D0: jr          $ra
    // 0x802B71D4: nop

    return;
    // 0x802B71D4: nop

;}
RECOMP_FUNC void D_802D4174(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D41F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802D41F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802D41FC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802D4200: beq         $a0, $zero, L_802D424C
    if (ctx->r4 == 0) {
        // 0x802D4204: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_802D424C;
    }
    // 0x802D4204: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802D4208: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802D420C: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802D4210: sw          $t6, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r14;
    // 0x802D4214: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x802D4218: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    // 0x802D421C: jal         0x8028D2B8
    // 0x802D4220: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_8028D2B8(rdram, ctx);
        goto after_0;
    // 0x802D4220: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x802D4224: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802D4228: jal         0x803086D4
    // 0x802D422C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_803086D4(rdram, ctx);
        goto after_1;
    // 0x802D422C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x802D4230: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x802D4234: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x802D4238: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x802D423C: beql        $t8, $zero, L_802D4250
    if (ctx->r24 == 0) {
        // 0x802D4240: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802D4250;
    }
    goto skip_0;
    // 0x802D4240: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802D4244: jal         0x802C681C
    // 0x802D4248: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    static_3_802C681C(rdram, ctx);
        goto after_2;
    // 0x802D4248: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_2:
L_802D424C:
    // 0x802D424C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802D4250:
    // 0x802D4250: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802D4254: jr          $ra
    // 0x802D4258: nop

    return;
    // 0x802D4258: nop

;}
RECOMP_FUNC void D_802E0BA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E0C24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802E0C28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802E0C2C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802E0C30: sw          $a1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r5;
    // 0x802E0C34: sw          $zero, 0x24($a0)
    MEM_W(0X24, ctx->r4) = 0;
    // 0x802E0C38: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x802E0C3C: jal         0x80224CA8
    // 0x802E0C40: addiu       $a0, $zero, 0x2D
    ctx->r4 = ADD32(0, 0X2D);
    static_3_80224CA8(rdram, ctx);
        goto after_0;
    // 0x802E0C40: addiu       $a0, $zero, 0x2D
    ctx->r4 = ADD32(0, 0X2D);
    after_0:
    // 0x802E0C44: jal         0x8030A9AC
    // 0x802E0C48: nop

    static_3_8030A9AC(rdram, ctx);
        goto after_1;
    // 0x802E0C48: nop

    after_1:
    // 0x802E0C4C: jal         0x80224CA8
    // 0x802E0C50: addiu       $a0, $zero, 0x3F
    ctx->r4 = ADD32(0, 0X3F);
    static_3_80224CA8(rdram, ctx);
        goto after_2;
    // 0x802E0C50: addiu       $a0, $zero, 0x3F
    ctx->r4 = ADD32(0, 0X3F);
    after_2:
    // 0x802E0C54: jal         0x80224CA8
    // 0x802E0C58: addiu       $a0, $zero, 0x4E
    ctx->r4 = ADD32(0, 0X4E);
    static_3_80224CA8(rdram, ctx);
        goto after_3;
    // 0x802E0C58: addiu       $a0, $zero, 0x4E
    ctx->r4 = ADD32(0, 0X4E);
    after_3:
    // 0x802E0C5C: jal         0x80224CA8
    // 0x802E0C60: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    static_3_80224CA8(rdram, ctx);
        goto after_4;
    // 0x802E0C60: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_4:
    // 0x802E0C64: jal         0x80224CA8
    // 0x802E0C68: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    static_3_80224CA8(rdram, ctx);
        goto after_5;
    // 0x802E0C68: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    after_5:
    // 0x802E0C6C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802E0C70: jal         0x80205AA0
    // 0x802E0C74: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_80205AA0(rdram, ctx);
        goto after_6;
    // 0x802E0C74: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x802E0C78: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x802E0C7C: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x802E0C80: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802E0C84: lw          $v0, 0x14($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X14);
    // 0x802E0C88: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802E0C8C: jal         0x80205E0C
    // 0x802E0C90: sw          $t7, 0x7168($v0)
    MEM_W(0X7168, ctx->r2) = ctx->r15;
    static_3_80205E0C(rdram, ctx);
        goto after_7;
    // 0x802E0C90: sw          $t7, 0x7168($v0)
    MEM_W(0X7168, ctx->r2) = ctx->r15;
    after_7:
    // 0x802E0C94: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x802E0C98: lw          $a0, 0x14($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X14);
    // 0x802E0C9C: jal         0x8028E430
    // 0x802E0CA0: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    static_3_8028E430(rdram, ctx);
        goto after_8;
    // 0x802E0CA0: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    after_8:
    // 0x802E0CA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802E0CA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802E0CAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802E0CB0: jr          $ra
    // 0x802E0CB4: nop

    return;
    // 0x802E0CB4: nop

;}
RECOMP_FUNC void D_802284B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802284B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802284B4: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x802284B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802284BC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802284C0: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802284C4: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802284C8: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802284CC: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802284D0: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802284D4: jal         0x80231C58
    // 0x802284D8: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    static_3_80231C58(rdram, ctx);
        goto after_0;
    // 0x802284D8: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_0:
    // 0x802284DC: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x802284E0: addiu       $t2, $t2, 0x0
    ctx->r10 = ADD32(ctx->r10, 0X0);
    // 0x802284E4: bne         $v0, $zero, L_80228638
    if (ctx->r2 != 0) {
        // 0x802284E8: lw          $a3, 0x18($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X18);
            goto L_80228638;
    }
    // 0x802284E8: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x802284EC: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802284F0: addiu       $v0, $v0, 0x0
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x802284F4: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x802284F8: lwc1        $f6, 0x18($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X18);
    // 0x802284FC: lwc1        $f10, 0x0($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X0);
    // 0x80228500: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x80228504: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80228508: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8022850C: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80228510: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x80228514: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80228518: lwc1        $f8, 0x1C($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X1C);
    // 0x8022851C: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x80228520: lwc1        $f16, 0x4($a3)
    ctx->f16.u32l = MEM_W(ctx->r7, 0X4);
    // 0x80228524: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80228528: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8022852C: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x80228530: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80228534: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80228538: lwc1        $f10, 0x20($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X20);
    // 0x8022853C: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x80228540: lwc1        $f18, 0x8($a3)
    ctx->f18.u32l = MEM_W(ctx->r7, 0X8);
    // 0x80228544: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x80228548: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8022854C: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x80228550: slti        $at, $a2, 0x100
    ctx->r1 = SIGNED(ctx->r6) < 0X100 ? 1 : 0;
    // 0x80228554: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80228558: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x8022855C: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
    // 0x80228560: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80228564: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x80228568: mfc1        $t1, $f8
    ctx->r9 = (int32_t)ctx->f8.u32l;
    // 0x8022856C: bgez        $a2, L_8022857C
    if (SIGNED(ctx->r6) >= 0) {
        // 0x80228570: nop
    
            goto L_8022857C;
    }
    // 0x80228570: nop

    // 0x80228574: b           L_80228588
    // 0x80228578: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
        goto L_80228588;
    // 0x80228578: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_8022857C:
    // 0x8022857C: bne         $at, $zero, L_80228588
    if (ctx->r1 != 0) {
        // 0x80228580: nop
    
            goto L_80228588;
    }
    // 0x80228580: nop

    // 0x80228584: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
L_80228588:
    // 0x80228588: bgez        $t0, L_80228598
    if (SIGNED(ctx->r8) >= 0) {
        // 0x8022858C: slti        $at, $t0, 0x100
        ctx->r1 = SIGNED(ctx->r8) < 0X100 ? 1 : 0;
            goto L_80228598;
    }
    // 0x8022858C: slti        $at, $t0, 0x100
    ctx->r1 = SIGNED(ctx->r8) < 0X100 ? 1 : 0;
    // 0x80228590: b           L_802285A4
    // 0x80228594: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
        goto L_802285A4;
    // 0x80228594: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
L_80228598:
    // 0x80228598: bne         $at, $zero, L_802285A4
    if (ctx->r1 != 0) {
        // 0x8022859C: nop
    
            goto L_802285A4;
    }
    // 0x8022859C: nop

    // 0x802285A0: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
L_802285A4:
    // 0x802285A4: bgez        $t1, L_802285B4
    if (SIGNED(ctx->r9) >= 0) {
        // 0x802285A8: slti        $at, $t1, 0x100
        ctx->r1 = SIGNED(ctx->r9) < 0X100 ? 1 : 0;
            goto L_802285B4;
    }
    // 0x802285A8: slti        $at, $t1, 0x100
    ctx->r1 = SIGNED(ctx->r9) < 0X100 ? 1 : 0;
    // 0x802285AC: b           L_802285C0
    // 0x802285B0: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
        goto L_802285C0;
    // 0x802285B0: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
L_802285B4:
    // 0x802285B4: bne         $at, $zero, L_802285C0
    if (ctx->r1 != 0) {
        // 0x802285B8: nop
    
            goto L_802285C0;
    }
    // 0x802285B8: nop

    // 0x802285BC: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
L_802285C0:
    // 0x802285C0: lhu         $t3, 0x0($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0X0);
    // 0x802285C4: lw          $v1, 0x0($t2)
    ctx->r3 = MEM_W(ctx->r10, 0X0);
    // 0x802285C8: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x802285CC: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x802285D0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x802285D4: lw          $t5, 0x0($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X0);
    // 0x802285D8: sll         $t9, $v1, 3
    ctx->r25 = S32(ctx->r3 << 3);
    // 0x802285DC: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
    // 0x802285E0: sw          $t6, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r14;
    // 0x802285E4: addu        $v0, $t9, $t5
    ctx->r2 = ADD32(ctx->r25, ctx->r13);
    // 0x802285E8: sb          $a2, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r6;
    // 0x802285EC: sb          $a2, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r6;
    // 0x802285F0: sb          $t0, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r8;
    // 0x802285F4: sb          $t0, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r8;
    // 0x802285F8: sb          $t1, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r9;
    // 0x802285FC: sb          $t1, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r9;
    // 0x80228600: lw          $a1, 0x0($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X0);
    // 0x80228604: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x80228608: lui         $at, 0x300
    ctx->r1 = S32(0X300 << 16);
    // 0x8022860C: addiu       $t7, $a1, 0x8
    ctx->r15 = ADD32(ctx->r5, 0X8);
    // 0x80228610: sw          $t7, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r15;
    // 0x80228614: lw          $t8, 0x0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X0);
    // 0x80228618: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x8022861C: sll         $t3, $t8, 1
    ctx->r11 = S32(ctx->r24 << 1);
    // 0x80228620: addiu       $t4, $t3, 0x86
    ctx->r12 = ADD32(ctx->r11, 0X86);
    // 0x80228624: andi        $t9, $t4, 0xFF
    ctx->r25 = ctx->r12 & 0XFF;
    // 0x80228628: sll         $t5, $t9, 16
    ctx->r13 = S32(ctx->r25 << 16);
    // 0x8022862C: or          $t6, $t5, $at
    ctx->r14 = ctx->r13 | ctx->r1;
    // 0x80228630: ori         $t7, $t6, 0x10
    ctx->r15 = ctx->r14 | 0X10;
    // 0x80228634: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
L_80228638:
    // 0x80228638: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022863C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80228640: jr          $ra
    // 0x80228644: nop

    return;
    // 0x80228644: nop

;}
RECOMP_FUNC void D_802CB71C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802CB79C: sll         $v1, $a1, 2
    ctx->r3 = S32(ctx->r5 << 2);
    // 0x802CB7A0: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802CB7A4: addu        $t7, $t7, $v1
    ctx->r15 = ADD32(ctx->r15, ctx->r3);
    // 0x802CB7A8: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x802CB7AC: sll         $t6, $a2, 2
    ctx->r14 = S32(ctx->r6 << 2);
    // 0x802CB7B0: addu        $v0, $a0, $t6
    ctx->r2 = ADD32(ctx->r4, ctx->r14);
    // 0x802CB7B4: sll         $t8, $a1, 1
    ctx->r24 = S32(ctx->r5 << 1);
    // 0x802CB7B8: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x802CB7BC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x802CB7C0: sw          $t7, 0xB8($v0)
    MEM_W(0XB8, ctx->r2) = ctx->r15;
    // 0x802CB7C4: lh          $t9, 0x0($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X0);
    // 0x802CB7C8: sll         $t0, $a2, 1
    ctx->r8 = S32(ctx->r6 << 1);
    // 0x802CB7CC: addu        $t1, $a0, $t0
    ctx->r9 = ADD32(ctx->r4, ctx->r8);
    // 0x802CB7D0: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x802CB7D4: addu        $t2, $t2, $v1
    ctx->r10 = ADD32(ctx->r10, ctx->r3);
    // 0x802CB7D8: sh          $t9, 0xE8($t1)
    MEM_H(0XE8, ctx->r9) = ctx->r25;
    // 0x802CB7DC: lw          $t2, 0x0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X0);
    // 0x802CB7E0: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x802CB7E4: addu        $t3, $t3, $v1
    ctx->r11 = ADD32(ctx->r11, ctx->r3);
    // 0x802CB7E8: sw          $t2, 0x100($v0)
    MEM_W(0X100, ctx->r2) = ctx->r10;
    // 0x802CB7EC: lw          $t3, 0x0($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X0);
    // 0x802CB7F0: jr          $ra
    // 0x802CB7F4: sw          $t3, 0x130($v0)
    MEM_W(0X130, ctx->r2) = ctx->r11;
    return;
    // 0x802CB7F4: sw          $t3, 0x130($v0)
    MEM_W(0X130, ctx->r2) = ctx->r11;
;}
RECOMP_FUNC void D_8023D330(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023D330: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8023D334: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8023D338: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8023D33C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8023D340: jal         0x80246C00
    // 0x8023D344: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    static_3_80246C00(rdram, ctx);
        goto after_0;
    // 0x8023D344: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x8023D348: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8023D34C: jal         0x8023E640
    // 0x8023D350: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    static_3_8023E640(rdram, ctx);
        goto after_1;
    // 0x8023D350: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_1:
    // 0x8023D354: jal         0x80246C44
    // 0x8023D358: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    static_3_80246C44(rdram, ctx);
        goto after_2;
    // 0x8023D358: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_2:
    // 0x8023D35C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8023D360: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x8023D364: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023D368: jr          $ra
    // 0x8023D36C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8023D36C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void D_80295E64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80295EE4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80295EE8: beq         $v0, $zero, L_80295EFC
    if (ctx->r2 == 0) {
        // 0x80295EEC: nop
    
            goto L_80295EFC;
    }
    // 0x80295EEC: nop

    // 0x80295EF0: lw          $v0, 0x8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X8);
L_80295EF4:
    // 0x80295EF4: bnel        $v0, $zero, L_80295EF4
    if (ctx->r2 != 0) {
        // 0x80295EF8: lw          $v0, 0x8($v0)
        ctx->r2 = MEM_W(ctx->r2, 0X8);
            goto L_80295EF4;
    }
    goto skip_0;
    // 0x80295EF8: lw          $v0, 0x8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X8);
    skip_0:
L_80295EFC:
    // 0x80295EFC: jr          $ra
    // 0x80295F00: nop

    return;
    // 0x80295F00: nop

;}
RECOMP_FUNC void func_80234ED0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void D_80235970(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80235970: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x80235974: addiu       $t8, $zero, 0x1E8
    ctx->r24 = ADD32(0, 0X1E8);
    // 0x80235978: beql        $v0, $zero, L_8023599C
    if (ctx->r2 == 0) {
        // 0x8023597C: sw          $t8, 0x24($a0)
        MEM_W(0X24, ctx->r4) = ctx->r24;
            goto L_8023599C;
    }
    goto skip_0;
    // 0x8023597C: sw          $t8, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r24;
    skip_0:
    // 0x80235980: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80235984: mul.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x80235988: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x8023598C: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x80235990: jr          $ra
    // 0x80235994: sw          $t7, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r15;
    return;
    // 0x80235994: sw          $t7, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r15;
    // 0x80235998: sw          $t8, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r24;
L_8023599C:
    // 0x8023599C: jr          $ra
    // 0x802359A0: nop

    return;
    // 0x802359A0: nop

    // 0x802359A4: jr          $ra
    // 0x802359A8: nop

    return;
    // 0x802359A8: nop

;}
RECOMP_FUNC void D_80239270(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80239270: addiu       $sp, $sp, -0x170
    ctx->r29 = ADD32(ctx->r29, -0X170);
    // 0x80239274: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80239278: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8023927C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80239280: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80239284: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80239288: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8023928C: lw          $t6, 0x50($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X50);
    // 0x80239290: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80239294: slt         $at, $a1, $t6
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80239298: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x8023929C: beq         $at, $zero, L_802392AC
    if (ctx->r1 == 0) {
        // 0x802392A0: or          $s4, $a2, $zero
        ctx->r20 = ctx->r6 | 0;
            goto L_802392AC;
    }
    // 0x802392A0: or          $s4, $a2, $zero
    ctx->r20 = ctx->r6 | 0;
    // 0x802392A4: bgez        $a1, L_802392B4
    if (SIGNED(ctx->r5) >= 0) {
        // 0x802392A8: nop
    
            goto L_802392B4;
    }
    // 0x802392A8: nop

L_802392AC:
    // 0x802392AC: b           L_802394F4
    // 0x802392B0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_802394F4;
    // 0x802392B0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_802392B4:
    // 0x802392B4: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
    // 0x802392B8: nop

    // 0x802392BC: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x802392C0: bne         $t8, $zero, L_802392D0
    if (ctx->r24 != 0) {
        // 0x802392C4: nop
    
            goto L_802392D0;
    }
    // 0x802392C4: nop

    // 0x802392C8: b           L_802394F4
    // 0x802392CC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_802394F4;
    // 0x802392CC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_802392D0:
    // 0x802392D0: jal         0x802452EC
    // 0x802392D4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    static_3_802452EC(rdram, ctx);
        goto after_0;
    // 0x802392D4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_0:
    // 0x802392D8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802392DC: bne         $v0, $at, L_802392EC
    if (ctx->r2 != ctx->r1) {
        // 0x802392E0: nop
    
            goto L_802392EC;
    }
    // 0x802392E0: nop

    // 0x802392E4: b           L_802394F4
    // 0x802392E8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_802394F4;
    // 0x802392E8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_802392EC:
    // 0x802392EC: lbu         $t9, 0x65($s2)
    ctx->r25 = MEM_BU(ctx->r18, 0X65);
    // 0x802392F0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802392F4: beq         $t9, $zero, L_80239314
    if (ctx->r25 == 0) {
        // 0x802392F8: nop
    
            goto L_80239314;
    }
    // 0x802392F8: nop

    // 0x802392FC: jal         0x802456A0
    // 0x80239300: sb          $zero, 0x65($s2)
    MEM_B(0X65, ctx->r18) = 0;
    static_3_802456A0(rdram, ctx);
        goto after_1;
    // 0x80239300: sb          $zero, 0x65($s2)
    MEM_B(0X65, ctx->r18) = 0;
    after_1:
    // 0x80239304: beq         $v0, $zero, L_80239314
    if (ctx->r2 == 0) {
        // 0x80239308: nop
    
            goto L_80239314;
    }
    // 0x80239308: nop

    // 0x8023930C: b           L_802394F8
    // 0x80239310: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_802394F8;
    // 0x80239310: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80239314:
    // 0x80239314: lw          $t2, 0x5C($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X5C);
    // 0x80239318: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x8023931C: addu        $a2, $t2, $s0
    ctx->r6 = ADD32(ctx->r10, ctx->r16);
    // 0x80239320: andi        $t3, $a2, 0xFFFF
    ctx->r11 = ctx->r6 & 0XFFFF;
    // 0x80239324: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x80239328: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    // 0x8023932C: jal         0x80245710
    // 0x80239330: addiu       $a3, $sp, 0x48
    ctx->r7 = ADD32(ctx->r29, 0X48);
    static_3_80245710(rdram, ctx);
        goto after_2;
    // 0x80239330: addiu       $a3, $sp, 0x48
    ctx->r7 = ADD32(ctx->r29, 0X48);
    after_2:
    // 0x80239334: beq         $v0, $zero, L_80239348
    if (ctx->r2 == 0) {
        // 0x80239338: lhu         $t4, 0x4C($sp)
        ctx->r12 = MEM_HU(ctx->r29, 0X4C);
            goto L_80239348;
    }
    // 0x80239338: lhu         $t4, 0x4C($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X4C);
    // 0x8023933C: b           L_802394F8
    // 0x80239340: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_802394F8;
    // 0x80239340: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80239344: lhu         $t4, 0x4C($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X4C);
L_80239348:
    // 0x80239348: lw          $t5, 0x48($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X48);
    // 0x8023934C: beq         $t4, $zero, L_8023935C
    if (ctx->r12 == 0) {
        // 0x80239350: nop
    
            goto L_8023935C;
    }
    // 0x80239350: nop

    // 0x80239354: bne         $t5, $zero, L_80239368
    if (ctx->r13 != 0) {
        // 0x80239358: lhu         $t6, 0x4E($sp)
        ctx->r14 = MEM_HU(ctx->r29, 0X4E);
            goto L_80239368;
    }
    // 0x80239358: lhu         $t6, 0x4E($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X4E);
L_8023935C:
    // 0x8023935C: b           L_802394F4
    // 0x80239360: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_802394F4;
    // 0x80239360: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80239364: lhu         $t6, 0x4E($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X4E);
L_80239368:
    // 0x80239368: lw          $t7, 0x60($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X60);
    // 0x8023936C: lbu         $s3, 0x4E($sp)
    ctx->r19 = MEM_BU(ctx->r29, 0X4E);
    // 0x80239370: slt         $at, $t6, $t7
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80239374: beq         $at, $zero, L_80239384
    if (ctx->r1 == 0) {
        // 0x80239378: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_80239384;
    }
    // 0x80239378: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8023937C: b           L_802394F4
    // 0x80239380: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_802394F4;
    // 0x80239380: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80239384:
    // 0x80239384: lbu         $t8, 0x64($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0X64);
    // 0x80239388: lbu         $t1, 0x4F($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X4F);
    // 0x8023938C: slt         $at, $s3, $t8
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80239390: beq         $at, $zero, L_80239474
    if (ctx->r1 == 0) {
        // 0x80239394: or          $t0, $s3, $zero
        ctx->r8 = ctx->r19 | 0;
            goto L_80239474;
    }
    // 0x80239394: or          $t0, $s3, $zero
    ctx->r8 = ctx->r19 | 0;
    // 0x80239398: addiu       $s1, $sp, 0x44
    ctx->r17 = ADD32(ctx->r29, 0X44);
    // 0x8023939C: addiu       $s0, $sp, 0x68
    ctx->r16 = ADD32(ctx->r29, 0X68);
    // 0x802393A0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_802393A4:
    // 0x802393A4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802393A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802393AC: andi        $a3, $s3, 0xFF
    ctx->r7 = ctx->r19 & 0XFF;
    // 0x802393B0: sw          $v1, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->r3;
    // 0x802393B4: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x802393B8: jal         0x80245404
    // 0x802393BC: sb          $t1, 0x3E($sp)
    MEM_B(0X3E, ctx->r29) = ctx->r9;
    static_3_80245404(rdram, ctx);
        goto after_3;
    // 0x802393BC: sb          $t1, 0x3E($sp)
    MEM_B(0X3E, ctx->r29) = ctx->r9;
    after_3:
    // 0x802393C0: lbu         $t1, 0x3E($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X3E);
    // 0x802393C4: lw          $v1, 0x168($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X168);
    // 0x802393C8: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x802393CC: beq         $v0, $zero, L_802393DC
    if (ctx->r2 == 0) {
        // 0x802393D0: sll         $t9, $t1, 1
        ctx->r25 = S32(ctx->r9 << 1);
            goto L_802393DC;
    }
    // 0x802393D0: sll         $t9, $t1, 1
    ctx->r25 = S32(ctx->r9 << 1);
    // 0x802393D4: b           L_802394F8
    // 0x802393D8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_802394F8;
    // 0x802393D8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_802393DC:
    // 0x802393DC: addu        $t2, $s0, $t9
    ctx->r10 = ADD32(ctx->r16, ctx->r25);
    // 0x802393E0: lhu         $at, 0x0($t2)
    ctx->r1 = MEM_HU(ctx->r10, 0X0);
    // 0x802393E4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802393E8: sh          $at, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r1;
    // 0x802393EC: lw          $t6, 0x60($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X60);
    // 0x802393F0: lhu         $t5, 0x44($sp)
    ctx->r13 = MEM_HU(ctx->r29, 0X44);
    // 0x802393F4: nop

    // 0x802393F8: slt         $at, $t5, $t6
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x802393FC: bne         $at, $zero, L_80239454
    if (ctx->r1 != 0) {
        // 0x80239400: lhu         $t7, 0x44($sp)
        ctx->r15 = MEM_HU(ctx->r29, 0X44);
            goto L_80239454;
    }
    // 0x80239400: lhu         $t7, 0x44($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X44);
    // 0x80239404: lbu         $t7, 0x45($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X45);
L_80239408:
    // 0x80239408: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8023940C: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x80239410: addu        $t9, $s0, $t8
    ctx->r25 = ADD32(ctx->r16, ctx->r24);
    // 0x80239414: lhu         $at, 0x0($t9)
    ctx->r1 = MEM_HU(ctx->r25, 0X0);
    // 0x80239418: nop

    // 0x8023941C: sh          $at, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r1;
    // 0x80239420: lbu         $t4, 0x44($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X44);
    // 0x80239424: lhu         $t5, 0x44($sp)
    ctx->r13 = MEM_HU(ctx->r29, 0X44);
    // 0x80239428: beq         $t0, $t4, L_8023943C
    if (ctx->r8 == ctx->r12) {
        // 0x8023942C: nop
    
            goto L_8023943C;
    }
    // 0x8023942C: nop

    // 0x80239430: lbu         $t1, 0x45($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X45);
    // 0x80239434: b           L_80239450
    // 0x80239438: or          $s3, $t4, $zero
    ctx->r19 = ctx->r12 | 0;
        goto L_80239450;
    // 0x80239438: or          $s3, $t4, $zero
    ctx->r19 = ctx->r12 | 0;
L_8023943C:
    // 0x8023943C: lw          $t6, 0x60($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X60);
    // 0x80239440: nop

    // 0x80239444: slt         $at, $t5, $t6
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80239448: beq         $at, $zero, L_80239408
    if (ctx->r1 == 0) {
        // 0x8023944C: lbu         $t7, 0x45($sp)
        ctx->r15 = MEM_BU(ctx->r29, 0X45);
            goto L_80239408;
    }
    // 0x8023944C: lbu         $t7, 0x45($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X45);
L_80239450:
    // 0x80239450: lhu         $t7, 0x44($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X44);
L_80239454:
    // 0x80239454: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80239458: beq         $t7, $at, L_80239478
    if (ctx->r15 == ctx->r1) {
        // 0x8023945C: lhu         $t3, 0x44($sp)
        ctx->r11 = MEM_HU(ctx->r29, 0X44);
            goto L_80239478;
    }
    // 0x8023945C: lhu         $t3, 0x44($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X44);
    // 0x80239460: lbu         $t8, 0x64($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0X64);
    // 0x80239464: or          $t0, $s3, $zero
    ctx->r8 = ctx->r19 | 0;
    // 0x80239468: slt         $at, $s3, $t8
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x8023946C: bne         $at, $zero, L_802393A4
    if (ctx->r1 != 0) {
        // 0x80239470: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_802393A4;
    }
    // 0x80239470: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_80239474:
    // 0x80239474: lhu         $t3, 0x44($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X44);
L_80239478:
    // 0x80239478: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8023947C: beq         $t3, $at, L_8023948C
    if (ctx->r11 == ctx->r1) {
        // 0x80239480: sll         $t9, $v1, 8
        ctx->r25 = S32(ctx->r3 << 8);
            goto L_8023948C;
    }
    // 0x80239480: sll         $t9, $v1, 8
    ctx->r25 = S32(ctx->r3 << 8);
    // 0x80239484: b           L_802394F4
    // 0x80239488: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_802394F4;
    // 0x80239488: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_8023948C:
    // 0x8023948C: sw          $t9, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r25;
    // 0x80239490: lhu         $t2, 0x4C($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X4C);
    // 0x80239494: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80239498: sh          $t2, 0x8($s4)
    MEM_H(0X8, ctx->r20) = ctx->r10;
    // 0x8023949C: lw          $t4, 0x48($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X48);
    // 0x802394A0: addiu       $v0, $sp, 0x48
    ctx->r2 = ADD32(ctx->r29, 0X48);
    // 0x802394A4: addiu       $v1, $sp, 0x58
    ctx->r3 = ADD32(ctx->r29, 0X58);
    // 0x802394A8: sw          $t4, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r12;
L_802394AC:
    // 0x802394AC: lbu         $t5, 0x10($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X10);
    // 0x802394B0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802394B4: sltu        $at, $v0, $v1
    ctx->r1 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x802394B8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x802394BC: bne         $at, $zero, L_802394AC
    if (ctx->r1 != 0) {
        // 0x802394C0: sb          $t5, 0xD($a0)
        MEM_B(0XD, ctx->r4) = ctx->r13;
            goto L_802394AC;
    }
    // 0x802394C0: sb          $t5, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r13;
    // 0x802394C4: lbu         $t6, 0x54($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X54);
    // 0x802394C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802394CC: sb          $t6, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r14;
    // 0x802394D0: lbu         $t7, 0x55($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X55);
    // 0x802394D4: nop

    // 0x802394D8: sb          $t7, 0xB($s4)
    MEM_B(0XB, ctx->r20) = ctx->r15;
    // 0x802394DC: lbu         $t8, 0x56($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X56);
    // 0x802394E0: nop

    // 0x802394E4: sb          $t8, 0xC($s4)
    MEM_B(0XC, ctx->r20) = ctx->r24;
    // 0x802394E8: lbu         $t3, 0x57($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X57);
    // 0x802394EC: nop

    // 0x802394F0: sb          $t3, 0xD($s4)
    MEM_B(0XD, ctx->r20) = ctx->r11;
L_802394F4:
    // 0x802394F4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_802394F8:
    // 0x802394F8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802394FC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80239500: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80239504: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80239508: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8023950C: jr          $ra
    // 0x80239510: addiu       $sp, $sp, 0x170
    ctx->r29 = ADD32(ctx->r29, 0X170);
    return;
    // 0x80239510: addiu       $sp, $sp, 0x170
    ctx->r29 = ADD32(ctx->r29, 0X170);
;}
RECOMP_FUNC void D_802A5D3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A5DBC: jr          $ra
    // 0x802A5DC0: sw          $a1, 0xF0($a0)
    MEM_W(0XF0, ctx->r4) = ctx->r5;
    return;
    // 0x802A5DC0: sw          $a1, 0xF0($a0)
    MEM_W(0XF0, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void D_8021E13C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021E13C: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x8021E140: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x8021E144: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x8021E148: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x8021E14C: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8021E150: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8021E154: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x8021E158: sb          $zero, 0x0($t7)
    MEM_B(0X0, ctx->r15) = 0;
    // 0x8021E15C: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x8021E160: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x8021E164: jr          $ra
    // 0x8021E168: sb          $zero, 0x1($t9)
    MEM_B(0X1, ctx->r25) = 0;
    return;
    // 0x8021E168: sb          $zero, 0x1($t9)
    MEM_B(0X1, ctx->r25) = 0;
;}
RECOMP_FUNC void D_8023D7D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023D7D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023D7D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023D7D8: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8023D7DC: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x8023D7E0: jal         0x80246C70
    // 0x8023D7E4: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    static_3_80246C70(rdram, ctx);
        goto after_0;
    // 0x8023D7E4: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
    // 0x8023D7E8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8023D7EC: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x8023D7F0: beq         $a0, $zero, L_8023D808
    if (ctx->r4 == 0) {
        // 0x8023D7F4: nop
    
            goto L_8023D808;
    }
    // 0x8023D7F4: nop

    // 0x8023D7F8: jal         0x802375F0
    // 0x8023D7FC: nop

    static_3_802375F0(rdram, ctx);
        goto after_1;
    // 0x8023D7FC: nop

    after_1:
    // 0x8023D800: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8023D804: sw          $v0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r2;
L_8023D808:
    // 0x8023D808: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8023D80C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x8023D810: beq         $a0, $zero, L_8023D828
    if (ctx->r4 == 0) {
        // 0x8023D814: nop
    
            goto L_8023D828;
    }
    // 0x8023D814: nop

    // 0x8023D818: jal         0x802375F0
    // 0x8023D81C: nop

    static_3_802375F0(rdram, ctx);
        goto after_2;
    // 0x8023D81C: nop

    after_2:
    // 0x8023D820: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8023D824: sw          $v0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r2;
L_8023D828:
    // 0x8023D828: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8023D82C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x8023D830: beq         $a0, $zero, L_8023D848
    if (ctx->r4 == 0) {
        // 0x8023D834: nop
    
            goto L_8023D848;
    }
    // 0x8023D834: nop

    // 0x8023D838: jal         0x802375F0
    // 0x8023D83C: nop

    static_3_802375F0(rdram, ctx);
        goto after_3;
    // 0x8023D83C: nop

    after_3:
    // 0x8023D840: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8023D844: sw          $v0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r2;
L_8023D848:
    // 0x8023D848: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8023D84C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x8023D850: beq         $a0, $zero, L_8023D868
    if (ctx->r4 == 0) {
        // 0x8023D854: nop
    
            goto L_8023D868;
    }
    // 0x8023D854: nop

    // 0x8023D858: jal         0x802375F0
    // 0x8023D85C: nop

    static_3_802375F0(rdram, ctx);
        goto after_4;
    // 0x8023D85C: nop

    after_4:
    // 0x8023D860: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8023D864: sw          $v0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r2;
L_8023D868:
    // 0x8023D868: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8023D86C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x8023D870: beq         $a0, $zero, L_8023D888
    if (ctx->r4 == 0) {
        // 0x8023D874: nop
    
            goto L_8023D888;
    }
    // 0x8023D874: nop

    // 0x8023D878: jal         0x802375F0
    // 0x8023D87C: nop

    static_3_802375F0(rdram, ctx);
        goto after_5;
    // 0x8023D87C: nop

    after_5:
    // 0x8023D880: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8023D884: sw          $v0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r2;
L_8023D888:
    // 0x8023D888: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8023D88C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x8023D890: beq         $a0, $zero, L_8023D8A8
    if (ctx->r4 == 0) {
        // 0x8023D894: nop
    
            goto L_8023D8A8;
    }
    // 0x8023D894: nop

    // 0x8023D898: jal         0x802375F0
    // 0x8023D89C: nop

    static_3_802375F0(rdram, ctx);
        goto after_6;
    // 0x8023D89C: nop

    after_6:
    // 0x8023D8A0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8023D8A4: sw          $v0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r2;
L_8023D8A8:
    // 0x8023D8A8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8023D8AC: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x8023D8B0: beql        $a0, $zero, L_8023D8CC
    if (ctx->r4 == 0) {
        // 0x8023D8B4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8023D8CC;
    }
    goto skip_0;
    // 0x8023D8B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8023D8B8: jal         0x802375F0
    // 0x8023D8BC: nop

    static_3_802375F0(rdram, ctx);
        goto after_7;
    // 0x8023D8BC: nop

    after_7:
    // 0x8023D8C0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8023D8C4: sw          $v0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r2;
    // 0x8023D8C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8023D8CC:
    // 0x8023D8CC: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x8023D8D0: addiu       $v0, $v0, 0x0
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x8023D8D4: jr          $ra
    // 0x8023D8D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8023D8D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void D_802B8074(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B80F4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802B80F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802B80FC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802B8100: lw          $v0, 0xB8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XB8);
    // 0x802B8104: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x802B8108: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802B810C: lh          $t6, 0x18($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X18);
    // 0x802B8110: lw          $t9, 0x1C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X1C);
    // 0x802B8114: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802B8118: addu        $a0, $t6, $a0
    ctx->r4 = ADD32(ctx->r14, ctx->r4);
    // 0x802B811C: jalr        $t9
    // 0x802B8120: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x802B8120: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    after_0:
    // 0x802B8124: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802B8128: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x802B812C: swc1        $f0, 0xF8($s0)
    MEM_W(0XF8, ctx->r16) = ctx->f0.u32l;
    // 0x802B8130: jal         0x803183C8
    // 0x802B8134: swc1        $f0, 0x100($s0)
    MEM_W(0X100, ctx->r16) = ctx->f0.u32l;
    static_3_803183C8(rdram, ctx);
        goto after_1;
    // 0x802B8134: swc1        $f0, 0x100($s0)
    MEM_W(0X100, ctx->r16) = ctx->f0.u32l;
    after_1:
    // 0x802B8138: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x802B813C: jal         0x803183C0
    // 0x802B8140: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    static_3_803183C0(rdram, ctx);
        goto after_2;
    // 0x802B8140: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_2:
    // 0x802B8144: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802B8148: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802B814C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x802B8150: div.s       $f12, $f0, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = DIV_S(ctx->f0.fl, ctx->f4.fl);
    // 0x802B8154: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B8158: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B815C: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x802B8160: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802B8164: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x802B8168: sub.s       $f2, $f14, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f14.fl - ctx->f12.fl;
    // 0x802B816C: c.lt.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl < ctx->f16.fl;
    // 0x802B8170: swc1        $f2, 0xFC($s0)
    MEM_W(0XFC, ctx->r16) = ctx->f2.u32l;
    // 0x802B8174: bc1fl       L_802B818C
    if (!c1cs) {
        // 0x802B8178: lwc1        $f0, 0xFC($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0XFC);
            goto L_802B818C;
    }
    goto skip_0;
    // 0x802B8178: lwc1        $f0, 0xFC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XFC);
    skip_0:
    // 0x802B817C: swc1        $f16, 0xFC($s0)
    MEM_W(0XFC, ctx->r16) = ctx->f16.u32l;
    // 0x802B8180: b           L_802B81A4
    // 0x802B8184: lwc1        $f0, 0xFC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XFC);
        goto L_802B81A4;
    // 0x802B8184: lwc1        $f0, 0xFC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XFC);
    // 0x802B8188: lwc1        $f0, 0xFC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XFC);
L_802B818C:
    // 0x802B818C: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    // 0x802B8190: nop

    // 0x802B8194: bc1f        L_802B81A4
    if (!c1cs) {
        // 0x802B8198: nop
    
            goto L_802B81A4;
    }
    // 0x802B8198: nop

    // 0x802B819C: swc1        $f14, 0xFC($s0)
    MEM_W(0XFC, ctx->r16) = ctx->f14.u32l;
    // 0x802B81A0: lwc1        $f0, 0xFC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XFC);
L_802B81A4:
    // 0x802B81A4: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x802B81A8: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x802B81AC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802B81B0: nop

    // 0x802B81B4: c.le.s      $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f12.fl <= ctx->f18.fl;
    // 0x802B81B8: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x802B81BC: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x802B81C0: bc1f        L_802B81D0
    if (!c1cs) {
        // 0x802B81C4: sh          $t8, 0x84($s0)
        MEM_H(0X84, ctx->r16) = ctx->r24;
            goto L_802B81D0;
    }
    // 0x802B81C4: sh          $t8, 0x84($s0)
    MEM_H(0X84, ctx->r16) = ctx->r24;
    // 0x802B81C8: b           L_802B81D4
    // 0x802B81CC: sb          $t0, 0x104($s0)
    MEM_B(0X104, ctx->r16) = ctx->r8;
        goto L_802B81D4;
    // 0x802B81CC: sb          $t0, 0x104($s0)
    MEM_B(0X104, ctx->r16) = ctx->r8;
L_802B81D0:
    // 0x802B81D0: sb          $zero, 0x104($s0)
    MEM_B(0X104, ctx->r16) = 0;
L_802B81D4:
    // 0x802B81D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802B81D8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802B81DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802B81E0: jr          $ra
    // 0x802B81E4: nop

    return;
    // 0x802B81E4: nop

;}
RECOMP_FUNC void D_802E6230(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E62B0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802E62B4: jr          $ra
    // 0x802E62B8: sb          $t6, 0x1B6($a0)
    MEM_B(0X1B6, ctx->r4) = ctx->r14;
    return;
    // 0x802E62B8: sb          $t6, 0x1B6($a0)
    MEM_B(0X1B6, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void D_802EFF30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EFFB0: lw          $v0, 0x60($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X60);
    // 0x802EFFB4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802EFFB8: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x802EFFBC: beq         $v0, $at, L_802EFFD8
    if (ctx->r2 == ctx->r1) {
        // 0x802EFFC0: sll         $t6, $v0, 3
        ctx->r14 = S32(ctx->r2 << 3);
            goto L_802EFFD8;
    }
    // 0x802EFFC0: sll         $t6, $v0, 3
    ctx->r14 = S32(ctx->r2 << 3);
    // 0x802EFFC4: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x802EFFC8: addu        $t7, $t6, $a1
    ctx->r15 = ADD32(ctx->r14, ctx->r5);
    // 0x802EFFCC: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x802EFFD0: addu        $v1, $v1, $t7
    ctx->r3 = ADD32(ctx->r3, ctx->r15);
    // 0x802EFFD4: lbu         $v1, 0x0($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X0);
L_802EFFD8:
    // 0x802EFFD8: jr          $ra
    // 0x802EFFDC: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    return;
    // 0x802EFFDC: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
;}
RECOMP_FUNC void D_802ECA14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802ECA94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802ECA98: bne         $a0, $zero, L_802ECAB0
    if (ctx->r4 != 0) {
        // 0x802ECA9C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802ECAB0;
    }
    // 0x802ECA9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802ECAA0: jal         0x802C67EC
    // 0x802ECAA4: addiu       $a0, $zero, 0xF0
    ctx->r4 = ADD32(0, 0XF0);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802ECAA4: addiu       $a0, $zero, 0xF0
    ctx->r4 = ADD32(0, 0XF0);
    after_0:
    // 0x802ECAA8: beq         $v0, $zero, L_802ECB04
    if (ctx->r2 == 0) {
        // 0x802ECAAC: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802ECB04;
    }
    // 0x802ECAAC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_802ECAB0:
    // 0x802ECAB0: jal         0x8031C47C
    // 0x802ECAB4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_8031C47C(rdram, ctx);
        goto after_1;
    // 0x802ECAB4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x802ECAB8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802ECABC: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    // 0x802ECAC0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802ECAC4: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802ECAC8: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x802ECACC: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x802ECAD0: addiu       $t8, $zero, 0xF
    ctx->r24 = ADD32(0, 0XF);
    // 0x802ECAD4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802ECAD8: sw          $zero, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = 0;
    // 0x802ECADC: sh          $t6, 0xBC($a0)
    MEM_H(0XBC, ctx->r4) = ctx->r14;
    // 0x802ECAE0: sw          $t7, 0xB8($a0)
    MEM_W(0XB8, ctx->r4) = ctx->r15;
    // 0x802ECAE4: sh          $zero, 0xE4($a0)
    MEM_H(0XE4, ctx->r4) = 0;
    // 0x802ECAE8: sh          $t8, 0xE6($a0)
    MEM_H(0XE6, ctx->r4) = ctx->r24;
    // 0x802ECAEC: swc1        $f0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->f0.u32l;
    // 0x802ECAF0: swc1        $f0, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f0.u32l;
    // 0x802ECAF4: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802ECAF8: jal         0x8031D270
    // 0x802ECAFC: swc1        $f4, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->f4.u32l;
    static_3_8031D270(rdram, ctx);
        goto after_2;
    // 0x802ECAFC: swc1        $f4, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->f4.u32l;
    after_2:
    // 0x802ECB00: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_802ECB04:
    // 0x802ECB04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802ECB08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802ECB0C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x802ECB10: jr          $ra
    // 0x802ECB14: nop

    return;
    // 0x802ECB14: nop

;}
RECOMP_FUNC void D_802EDB00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EDB80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802EDB84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802EDB88: beq         $a0, $zero, L_802EDBB8
    if (ctx->r4 == 0) {
        // 0x802EDB8C: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_802EDBB8;
    }
    // 0x802EDB8C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802EDB90: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802EDB94: jal         0x8031C514
    // 0x802EDB98: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_8031C514(rdram, ctx);
        goto after_0;
    // 0x802EDB98: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802EDB9C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x802EDBA0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802EDBA4: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x802EDBA8: beql        $t7, $zero, L_802EDBBC
    if (ctx->r15 == 0) {
        // 0x802EDBAC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802EDBBC;
    }
    goto skip_0;
    // 0x802EDBAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802EDBB0: jal         0x802C681C
    // 0x802EDBB4: nop

    static_3_802C681C(rdram, ctx);
        goto after_1;
    // 0x802EDBB4: nop

    after_1:
L_802EDBB8:
    // 0x802EDBB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802EDBBC:
    // 0x802EDBBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802EDBC0: jr          $ra
    // 0x802EDBC4: nop

    return;
    // 0x802EDBC4: nop

;}
RECOMP_FUNC void D_802B2B6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B2BEC: addiu       $sp, $sp, -0x158
    ctx->r29 = ADD32(ctx->r29, -0X158);
    // 0x802B2BF0: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x802B2BF4: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x802B2BF8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802B2BFC: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x802B2C00: sw          $a1, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->r5;
    // 0x802B2C04: sw          $a2, 0x160($sp)
    MEM_W(0X160, ctx->r29) = ctx->r6;
    // 0x802B2C08: jal         0x802D25CC
    // 0x802B2C0C: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    static_3_802D25CC(rdram, ctx);
        goto after_0;
    // 0x802B2C0C: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    after_0:
    // 0x802B2C10: jal         0x802D2660
    // 0x802B2C14: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    static_3_802D2660(rdram, ctx);
        goto after_1;
    // 0x802B2C14: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    after_1:
    // 0x802B2C18: swc1        $f0, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->f0.u32l;
    // 0x802B2C1C: jal         0x802D2668
    // 0x802B2C20: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    static_3_802D2668(rdram, ctx);
        goto after_2;
    // 0x802B2C20: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    after_2:
    // 0x802B2C24: swc1        $f0, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->f0.u32l;
    // 0x802B2C28: jal         0x802D25F4
    // 0x802B2C2C: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    static_3_802D25F4(rdram, ctx);
        goto after_3;
    // 0x802B2C2C: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    after_3:
    // 0x802B2C30: swc1        $f0, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->f0.u32l;
    // 0x802B2C34: lw          $v0, 0xC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XC);
    // 0x802B2C38: lw          $s0, 0xD8($v0)
    ctx->r16 = MEM_W(ctx->r2, 0XD8);
    // 0x802B2C3C: lw          $t9, 0x5C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X5C);
    // 0x802B2C40: lh          $t6, 0x58($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X58);
    // 0x802B2C44: jalr        $t9
    // 0x802B2C48: addu        $a0, $t6, $v0
    ctx->r4 = ADD32(ctx->r14, ctx->r2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x802B2C48: addu        $a0, $t6, $v0
    ctx->r4 = ADD32(ctx->r14, ctx->r2);
    after_4:
    // 0x802B2C4C: lw          $v0, 0xC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XC);
    // 0x802B2C50: lw          $s0, 0xD8($v0)
    ctx->r16 = MEM_W(ctx->r2, 0XD8);
    // 0x802B2C54: lw          $t9, 0x4C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X4C);
    // 0x802B2C58: lh          $t7, 0x48($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X48);
    // 0x802B2C5C: jalr        $t9
    // 0x802B2C60: addu        $a0, $t7, $v0
    ctx->r4 = ADD32(ctx->r15, ctx->r2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x802B2C60: addu        $a0, $t7, $v0
    ctx->r4 = ADD32(ctx->r15, ctx->r2);
    after_5:
    // 0x802B2C64: swc1        $f0, 0xB4($s1)
    MEM_W(0XB4, ctx->r17) = ctx->f0.u32l;
    // 0x802B2C68: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x802B2C6C: jal         0x80223F4C
    // 0x802B2C70: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_80223F4C(rdram, ctx);
        goto after_6;
    // 0x802B2C70: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x802B2C74: lbu         $v1, 0x648($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X648);
    // 0x802B2C78: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x802B2C7C: sltu        $t8, $zero, $v1
    ctx->r24 = 0 < ctx->r3 ? 1 : 0;
    // 0x802B2C80: sltiu       $v1, $t8, 0x1
    ctx->r3 = ctx->r24 < 0X1 ? 1 : 0;
    // 0x802B2C84: beq         $v1, $zero, L_802B2E3C
    if (ctx->r3 == 0) {
        // 0x802B2C88: nop
    
            goto L_802B2E3C;
    }
    // 0x802B2C88: nop

    // 0x802B2C8C: lw          $v0, 0x18($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X18);
    // 0x802B2C90: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802B2C94: beq         $v0, $at, L_802B2CA8
    if (ctx->r2 == ctx->r1) {
        // 0x802B2C98: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_802B2CA8;
    }
    // 0x802B2C98: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802B2C9C: beq         $v0, $at, L_802B2CA8
    if (ctx->r2 == ctx->r1) {
        // 0x802B2CA0: addiu       $at, $zero, 0xB
        ctx->r1 = ADD32(0, 0XB);
            goto L_802B2CA8;
    }
    // 0x802B2CA0: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x802B2CA4: bne         $v0, $at, L_802B2E3C
    if (ctx->r2 != ctx->r1) {
        // 0x802B2CA8: lui         $at, 0x0
        ctx->r1 = S32(0X0 << 16);
            goto L_802B2E3C;
    }
L_802B2CA8:
    // 0x802B2CA8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B2CAC: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B2CB0: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x802B2CB4: nop

    // 0x802B2CB8: bc1fl       L_802B2D3C
    if (!c1cs) {
        // 0x802B2CBC: lwc1        $f18, 0x15C($sp)
        ctx->f18.u32l = MEM_W(ctx->r29, 0X15C);
            goto L_802B2D3C;
    }
    goto skip_0;
    // 0x802B2CBC: lwc1        $f18, 0x15C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X15C);
    skip_0:
    // 0x802B2CC0: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x802B2CC4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802B2CC8: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x802B2CCC: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x802B2CD0: bne         $v1, $zero, L_802B2CE0
    if (ctx->r3 != 0) {
        // 0x802B2CD4: nop
    
            goto L_802B2CE0;
    }
    // 0x802B2CD4: nop

    // 0x802B2CD8: b           L_802B2CF8
    // 0x802B2CDC: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
        goto L_802B2CF8;
    // 0x802B2CDC: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_802B2CE0:
    // 0x802B2CE0: bne         $v1, $at, L_802B2CF4
    if (ctx->r3 != ctx->r1) {
        // 0x802B2CE4: lui         $s0, 0x0
        ctx->r16 = S32(0X0 << 16);
            goto L_802B2CF4;
    }
    // 0x802B2CE4: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x802B2CE8: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x802B2CEC: b           L_802B2CF8
    // 0x802B2CF0: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
        goto L_802B2CF8;
    // 0x802B2CF0: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_802B2CF4:
    // 0x802B2CF4: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_802B2CF8:
    // 0x802B2CF8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802B2CFC: jal         0x80223F70
    // 0x802B2D00: swc1        $f2, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->f2.u32l;
    static_3_80223F70(rdram, ctx);
        goto after_7;
    // 0x802B2D00: swc1        $f2, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->f2.u32l;
    after_7:
    // 0x802B2D04: beq         $v0, $zero, L_802B2D38
    if (ctx->r2 == 0) {
        // 0x802B2D08: lwc1        $f2, 0x12C($sp)
        ctx->f2.u32l = MEM_W(ctx->r29, 0X12C);
            goto L_802B2D38;
    }
    // 0x802B2D08: lwc1        $f2, 0x12C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x802B2D0C: lw          $t0, 0x64C($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X64C);
    // 0x802B2D10: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x802B2D14: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802B2D18: bnel        $t0, $zero, L_802B2D3C
    if (ctx->r8 != 0) {
        // 0x802B2D1C: lwc1        $f18, 0x15C($sp)
        ctx->f18.u32l = MEM_W(ctx->r29, 0X15C);
            goto L_802B2D3C;
    }
    goto skip_1;
    // 0x802B2D1C: lwc1        $f18, 0x15C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X15C);
    skip_1:
    // 0x802B2D20: sw          $t1, 0x64C($s1)
    MEM_W(0X64C, ctx->r17) = ctx->r9;
    // 0x802B2D24: lwc1        $f6, 0x15C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X15C);
    // 0x802B2D28: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802B2D2C: nop

    // 0x802B2D30: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x802B2D34: swc1        $f10, 0x654($s1)
    MEM_W(0X654, ctx->r17) = ctx->f10.u32l;
L_802B2D38:
    // 0x802B2D38: lwc1        $f18, 0x15C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X15C);
L_802B2D3C:
    // 0x802B2D3C: lwc1        $f4, 0x654($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X654);
    // 0x802B2D40: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B2D44: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x802B2D48: nop

    // 0x802B2D4C: bc1f        L_802B2E34
    if (!c1cs) {
        // 0x802B2D50: nop
    
            goto L_802B2E34;
    }
    // 0x802B2D50: nop

    // 0x802B2D54: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802B2D58: nop

    // 0x802B2D5C: c.lt.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl < ctx->f2.fl;
    // 0x802B2D60: nop

    // 0x802B2D64: bc1fl       L_802B2D78
    if (!c1cs) {
        // 0x802B2D68: neg.s       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
            goto L_802B2D78;
    }
    goto skip_2;
    // 0x802B2D68: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    skip_2:
    // 0x802B2D6C: b           L_802B2D78
    // 0x802B2D70: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
        goto L_802B2D78;
    // 0x802B2D70: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x802B2D74: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
L_802B2D78:
    // 0x802B2D78: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B2D7C: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x802B2D80: nop

    // 0x802B2D84: bc1f        L_802B2DA8
    if (!c1cs) {
        // 0x802B2D88: nop
    
            goto L_802B2DA8;
    }
    // 0x802B2D88: nop

    // 0x802B2D8C: lw          $t2, 0x64C($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X64C);
    // 0x802B2D90: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802B2D94: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x802B2D98: bne         $t2, $at, L_802B2DA8
    if (ctx->r10 != ctx->r1) {
        // 0x802B2D9C: nop
    
            goto L_802B2DA8;
    }
    // 0x802B2D9C: nop

    // 0x802B2DA0: b           L_802B3168
    // 0x802B2DA4: sw          $t3, 0x64C($s1)
    MEM_W(0X64C, ctx->r17) = ctx->r11;
        goto L_802B3168;
    // 0x802B2DA4: sw          $t3, 0x64C($s1)
    MEM_W(0X64C, ctx->r17) = ctx->r11;
L_802B2DA8:
    // 0x802B2DA8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B2DAC: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B2DB0: c.lt.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl < ctx->f10.fl;
    // 0x802B2DB4: nop

    // 0x802B2DB8: bc1fl       L_802B316C
    if (!c1cs) {
        // 0x802B2DBC: lw          $a0, 0x20($s1)
        ctx->r4 = MEM_W(ctx->r17, 0X20);
            goto L_802B316C;
    }
    goto skip_3;
    // 0x802B2DBC: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    skip_3:
    // 0x802B2DC0: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x802B2DC4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802B2DC8: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x802B2DCC: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x802B2DD0: bne         $v1, $zero, L_802B2DE0
    if (ctx->r3 != 0) {
        // 0x802B2DD4: nop
    
            goto L_802B2DE0;
    }
    // 0x802B2DD4: nop

    // 0x802B2DD8: b           L_802B2DF8
    // 0x802B2DDC: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
        goto L_802B2DF8;
    // 0x802B2DDC: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_802B2DE0:
    // 0x802B2DE0: bne         $v1, $at, L_802B2DF4
    if (ctx->r3 != ctx->r1) {
        // 0x802B2DE4: lui         $s0, 0x0
        ctx->r16 = S32(0X0 << 16);
            goto L_802B2DF4;
    }
    // 0x802B2DE4: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x802B2DE8: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x802B2DEC: b           L_802B2DF8
    // 0x802B2DF0: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
        goto L_802B2DF8;
    // 0x802B2DF0: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_802B2DF4:
    // 0x802B2DF4: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_802B2DF8:
    // 0x802B2DF8: jal         0x80223F70
    // 0x802B2DFC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    static_3_80223F70(rdram, ctx);
        goto after_8;
    // 0x802B2DFC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_8:
    // 0x802B2E00: beql        $v0, $zero, L_802B316C
    if (ctx->r2 == 0) {
        // 0x802B2E04: lw          $a0, 0x20($s1)
        ctx->r4 = MEM_W(ctx->r17, 0X20);
            goto L_802B316C;
    }
    goto skip_4;
    // 0x802B2E04: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    skip_4:
    // 0x802B2E08: lw          $t4, 0x64C($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X64C);
    // 0x802B2E0C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802B2E10: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x802B2E14: bnel        $t4, $at, L_802B316C
    if (ctx->r12 != ctx->r1) {
        // 0x802B2E18: lw          $a0, 0x20($s1)
        ctx->r4 = MEM_W(ctx->r17, 0X20);
            goto L_802B316C;
    }
    goto skip_5;
    // 0x802B2E18: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    skip_5:
    // 0x802B2E1C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x802B2E20: sw          $zero, 0x64C($s1)
    MEM_W(0X64C, ctx->r17) = 0;
    // 0x802B2E24: sb          $t5, 0x648($s1)
    MEM_B(0X648, ctx->r17) = ctx->r13;
    // 0x802B2E28: sw          $zero, 0x650($s1)
    MEM_W(0X650, ctx->r17) = 0;
    // 0x802B2E2C: b           L_802B3168
    // 0x802B2E30: swc1        $f18, 0x654($s1)
    MEM_W(0X654, ctx->r17) = ctx->f18.u32l;
        goto L_802B3168;
    // 0x802B2E30: swc1        $f18, 0x654($s1)
    MEM_W(0X654, ctx->r17) = ctx->f18.u32l;
L_802B2E34:
    // 0x802B2E34: b           L_802B3168
    // 0x802B2E38: sw          $zero, 0x64C($s1)
    MEM_W(0X64C, ctx->r17) = 0;
        goto L_802B3168;
    // 0x802B2E38: sw          $zero, 0x64C($s1)
    MEM_W(0X64C, ctx->r17) = 0;
L_802B2E3C:
    // 0x802B2E3C: beq         $v1, $zero, L_802B3168
    if (ctx->r3 == 0) {
        // 0x802B2E40: lui         $at, 0x3FF8
        ctx->r1 = S32(0X3FF8 << 16);
            goto L_802B3168;
    }
    // 0x802B2E40: lui         $at, 0x3FF8
    ctx->r1 = S32(0X3FF8 << 16);
    // 0x802B2E44: lwc1        $f6, 0x140($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X140);
    // 0x802B2E48: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x802B2E4C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802B2E50: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x802B2E54: lwc1        $f18, 0x130($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X130);
    // 0x802B2E58: mul.d       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f4.d, ctx->f8.d);
    // 0x802B2E5C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B2E60: cvt.d.s     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f6.d = CVT_D_S(ctx->f18.fl);
    // 0x802B2E64: c.le.d      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.d <= ctx->f10.d;
    // 0x802B2E68: nop

    // 0x802B2E6C: bc1fl       L_802B316C
    if (!c1cs) {
        // 0x802B2E70: lw          $a0, 0x20($s1)
        ctx->r4 = MEM_W(ctx->r17, 0X20);
            goto L_802B316C;
    }
    goto skip_6;
    // 0x802B2E70: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    skip_6:
    // 0x802B2E74: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B2E78: lwc1        $f8, 0xB4($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0XB4);
    // 0x802B2E7C: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x802B2E80: nop

    // 0x802B2E84: bc1fl       L_802B316C
    if (!c1cs) {
        // 0x802B2E88: lw          $a0, 0x20($s1)
        ctx->r4 = MEM_W(ctx->r17, 0X20);
            goto L_802B316C;
    }
    goto skip_7;
    // 0x802B2E88: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    skip_7:
    // 0x802B2E8C: lw          $v0, 0x18($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X18);
    // 0x802B2E90: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802B2E94: beq         $v0, $at, L_802B2EAC
    if (ctx->r2 == ctx->r1) {
        // 0x802B2E98: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_802B2EAC;
    }
    // 0x802B2E98: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x802B2E9C: beq         $v0, $at, L_802B2EAC
    if (ctx->r2 == ctx->r1) {
        // 0x802B2EA0: addiu       $at, $zero, 0xA
        ctx->r1 = ADD32(0, 0XA);
            goto L_802B2EAC;
    }
    // 0x802B2EA0: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x802B2EA4: bnel        $v0, $at, L_802B316C
    if (ctx->r2 != ctx->r1) {
        // 0x802B2EA8: lw          $a0, 0x20($s1)
        ctx->r4 = MEM_W(ctx->r17, 0X20);
            goto L_802B316C;
    }
    goto skip_8;
    // 0x802B2EA8: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    skip_8:
L_802B2EAC:
    // 0x802B2EAC: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x802B2EB0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802B2EB4: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x802B2EB8: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x802B2EBC: bne         $v1, $zero, L_802B2ECC
    if (ctx->r3 != 0) {
        // 0x802B2EC0: nop
    
            goto L_802B2ECC;
    }
    // 0x802B2EC0: nop

    // 0x802B2EC4: b           L_802B2EE4
    // 0x802B2EC8: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
        goto L_802B2EE4;
    // 0x802B2EC8: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_802B2ECC:
    // 0x802B2ECC: bne         $v1, $at, L_802B2EE0
    if (ctx->r3 != ctx->r1) {
        // 0x802B2ED0: lui         $s0, 0x0
        ctx->r16 = S32(0X0 << 16);
            goto L_802B2EE0;
    }
    // 0x802B2ED0: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x802B2ED4: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x802B2ED8: b           L_802B2EE4
    // 0x802B2EDC: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
        goto L_802B2EE4;
    // 0x802B2EDC: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_802B2EE0:
    // 0x802B2EE0: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_802B2EE4:
    // 0x802B2EE4: jal         0x80223F70
    // 0x802B2EE8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    static_3_80223F70(rdram, ctx);
        goto after_9;
    // 0x802B2EE8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_9:
    // 0x802B2EEC: bnel        $v0, $zero, L_802B2F40
    if (ctx->r2 != 0) {
        // 0x802B2EF0: lw          $t6, 0x64C($s1)
        ctx->r14 = MEM_W(ctx->r17, 0X64C);
            goto L_802B2F40;
    }
    goto skip_9;
    // 0x802B2EF0: lw          $t6, 0x64C($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X64C);
    skip_9:
    // 0x802B2EF4: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x802B2EF8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802B2EFC: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802B2F00: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    // 0x802B2F04: bne         $v0, $zero, L_802B2F14
    if (ctx->r2 != 0) {
        // 0x802B2F08: nop
    
            goto L_802B2F14;
    }
    // 0x802B2F08: nop

    // 0x802B2F0C: b           L_802B2F2C
    // 0x802B2F10: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
        goto L_802B2F2C;
    // 0x802B2F10: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
L_802B2F14:
    // 0x802B2F14: bne         $v0, $at, L_802B2F28
    if (ctx->r2 != ctx->r1) {
        // 0x802B2F18: lui         $a1, 0x0
        ctx->r5 = S32(0X0 << 16);
            goto L_802B2F28;
    }
    // 0x802B2F18: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802B2F1C: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802B2F20: b           L_802B2F2C
    // 0x802B2F24: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
        goto L_802B2F2C;
    // 0x802B2F24: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
L_802B2F28:
    // 0x802B2F28: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
L_802B2F2C:
    // 0x802B2F2C: jal         0x80223F70
    // 0x802B2F30: nop

    static_3_80223F70(rdram, ctx);
        goto after_10;
    // 0x802B2F30: nop

    after_10:
    // 0x802B2F34: beql        $v0, $zero, L_802B2F6C
    if (ctx->r2 == 0) {
        // 0x802B2F38: lwc1        $f4, 0x15C($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X15C);
            goto L_802B2F6C;
    }
    goto skip_10;
    // 0x802B2F38: lwc1        $f4, 0x15C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X15C);
    skip_10:
    // 0x802B2F3C: lw          $t6, 0x64C($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X64C);
L_802B2F40:
    // 0x802B2F40: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802B2F44: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802B2F48: bnel        $t6, $zero, L_802B2F6C
    if (ctx->r14 != 0) {
        // 0x802B2F4C: lwc1        $f4, 0x15C($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X15C);
            goto L_802B2F6C;
    }
    goto skip_11;
    // 0x802B2F4C: lwc1        $f4, 0x15C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X15C);
    skip_11:
    // 0x802B2F50: sw          $t7, 0x64C($s1)
    MEM_W(0X64C, ctx->r17) = ctx->r15;
    // 0x802B2F54: lwc1        $f18, 0x15C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X15C);
    // 0x802B2F58: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802B2F5C: nop

    // 0x802B2F60: add.s       $f6, $f18, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x802B2F64: swc1        $f6, 0x654($s1)
    MEM_W(0X654, ctx->r17) = ctx->f6.u32l;
    // 0x802B2F68: lwc1        $f4, 0x15C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X15C);
L_802B2F6C:
    // 0x802B2F6C: lwc1        $f8, 0x654($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X654);
    // 0x802B2F70: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x802B2F74: nop

    // 0x802B2F78: bc1fl       L_802B3168
    if (!c1cs) {
        // 0x802B2F7C: sw          $zero, 0x64C($s1)
        MEM_W(0X64C, ctx->r17) = 0;
            goto L_802B3168;
    }
    goto skip_12;
    // 0x802B2F7C: sw          $zero, 0x64C($s1)
    MEM_W(0X64C, ctx->r17) = 0;
    skip_12:
    // 0x802B2F80: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x802B2F84: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802B2F88: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x802B2F8C: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x802B2F90: bne         $v1, $zero, L_802B2FA0
    if (ctx->r3 != 0) {
        // 0x802B2F94: nop
    
            goto L_802B2FA0;
    }
    // 0x802B2F94: nop

    // 0x802B2F98: b           L_802B2FB8
    // 0x802B2F9C: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
        goto L_802B2FB8;
    // 0x802B2F9C: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_802B2FA0:
    // 0x802B2FA0: bne         $v1, $at, L_802B2FB4
    if (ctx->r3 != ctx->r1) {
        // 0x802B2FA4: lui         $s0, 0x0
        ctx->r16 = S32(0X0 << 16);
            goto L_802B2FB4;
    }
    // 0x802B2FA4: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x802B2FA8: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x802B2FAC: b           L_802B2FB8
    // 0x802B2FB0: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
        goto L_802B2FB8;
    // 0x802B2FB0: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_802B2FB4:
    // 0x802B2FB4: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_802B2FB8:
    // 0x802B2FB8: jal         0x80223F70
    // 0x802B2FBC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    static_3_80223F70(rdram, ctx);
        goto after_11;
    // 0x802B2FBC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_11:
    // 0x802B2FC0: bnel        $v0, $zero, L_802B3030
    if (ctx->r2 != 0) {
        // 0x802B2FC4: lw          $a0, 0x20($s1)
        ctx->r4 = MEM_W(ctx->r17, 0X20);
            goto L_802B3030;
    }
    goto skip_13;
    // 0x802B2FC4: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    skip_13:
    // 0x802B2FC8: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x802B2FCC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802B2FD0: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802B2FD4: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    // 0x802B2FD8: bne         $v0, $zero, L_802B2FE8
    if (ctx->r2 != 0) {
        // 0x802B2FDC: nop
    
            goto L_802B2FE8;
    }
    // 0x802B2FDC: nop

    // 0x802B2FE0: b           L_802B3000
    // 0x802B2FE4: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
        goto L_802B3000;
    // 0x802B2FE4: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
L_802B2FE8:
    // 0x802B2FE8: bne         $v0, $at, L_802B2FFC
    if (ctx->r2 != ctx->r1) {
        // 0x802B2FEC: lui         $a1, 0x0
        ctx->r5 = S32(0X0 << 16);
            goto L_802B2FFC;
    }
    // 0x802B2FEC: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802B2FF0: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802B2FF4: b           L_802B3000
    // 0x802B2FF8: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
        goto L_802B3000;
    // 0x802B2FF8: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
L_802B2FFC:
    // 0x802B2FFC: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
L_802B3000:
    // 0x802B3000: jal         0x80223F70
    // 0x802B3004: nop

    static_3_80223F70(rdram, ctx);
        goto after_12;
    // 0x802B3004: nop

    after_12:
    // 0x802B3008: bnel        $v0, $zero, L_802B3030
    if (ctx->r2 != 0) {
        // 0x802B300C: lw          $a0, 0x20($s1)
        ctx->r4 = MEM_W(ctx->r17, 0X20);
            goto L_802B3030;
    }
    goto skip_14;
    // 0x802B300C: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    skip_14:
    // 0x802B3010: lw          $t9, 0x64C($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X64C);
    // 0x802B3014: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802B3018: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x802B301C: bnel        $t9, $at, L_802B3030
    if (ctx->r25 != ctx->r1) {
        // 0x802B3020: lw          $a0, 0x20($s1)
        ctx->r4 = MEM_W(ctx->r17, 0X20);
            goto L_802B3030;
    }
    goto skip_15;
    // 0x802B3020: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    skip_15:
    // 0x802B3024: b           L_802B3168
    // 0x802B3028: sw          $t8, 0x64C($s1)
    MEM_W(0X64C, ctx->r17) = ctx->r24;
        goto L_802B3168;
    // 0x802B3028: sw          $t8, 0x64C($s1)
    MEM_W(0X64C, ctx->r17) = ctx->r24;
    // 0x802B302C: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
L_802B3030:
    // 0x802B3030: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802B3034: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x802B3038: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x802B303C: bne         $v1, $zero, L_802B304C
    if (ctx->r3 != 0) {
        // 0x802B3040: nop
    
            goto L_802B304C;
    }
    // 0x802B3040: nop

    // 0x802B3044: b           L_802B3064
    // 0x802B3048: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
        goto L_802B3064;
    // 0x802B3048: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_802B304C:
    // 0x802B304C: bne         $v1, $at, L_802B3060
    if (ctx->r3 != ctx->r1) {
        // 0x802B3050: lui         $s0, 0x0
        ctx->r16 = S32(0X0 << 16);
            goto L_802B3060;
    }
    // 0x802B3050: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x802B3054: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x802B3058: b           L_802B3064
    // 0x802B305C: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
        goto L_802B3064;
    // 0x802B305C: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_802B3060:
    // 0x802B3060: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_802B3064:
    // 0x802B3064: jal         0x80223F70
    // 0x802B3068: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    static_3_80223F70(rdram, ctx);
        goto after_13;
    // 0x802B3068: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_13:
    // 0x802B306C: beql        $v0, $zero, L_802B30CC
    if (ctx->r2 == 0) {
        // 0x802B3070: lw          $a0, 0x20($s1)
        ctx->r4 = MEM_W(ctx->r17, 0X20);
            goto L_802B30CC;
    }
    goto skip_16;
    // 0x802B3070: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    skip_16:
    // 0x802B3074: lw          $t0, 0x64C($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X64C);
    // 0x802B3078: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802B307C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x802B3080: bne         $t0, $at, L_802B30C8
    if (ctx->r8 != ctx->r1) {
        // 0x802B3084: addiu       $t2, $zero, 0x2
        ctx->r10 = ADD32(0, 0X2);
            goto L_802B30C8;
    }
    // 0x802B3084: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x802B3088: lw          $v0, 0xC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XC);
    // 0x802B308C: sw          $zero, 0x64C($s1)
    MEM_W(0X64C, ctx->r17) = 0;
    // 0x802B3090: sb          $t1, 0x648($s1)
    MEM_B(0X648, ctx->r17) = ctx->r9;
    // 0x802B3094: sw          $t2, 0x650($s1)
    MEM_W(0X650, ctx->r17) = ctx->r10;
    // 0x802B3098: lw          $s0, 0xD8($v0)
    ctx->r16 = MEM_W(ctx->r2, 0XD8);
    // 0x802B309C: lw          $t9, 0x44($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X44);
    // 0x802B30A0: lh          $t3, 0x40($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X40);
    // 0x802B30A4: jalr        $t9
    // 0x802B30A8: addu        $a0, $t3, $v0
    ctx->r4 = ADD32(ctx->r11, ctx->r2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x802B30A8: addu        $a0, $t3, $v0
    ctx->r4 = ADD32(ctx->r11, ctx->r2);
    after_14:
    // 0x802B30AC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B30B0: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B30B4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802B30B8: add.s       $f10, $f0, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f18.fl;
    // 0x802B30BC: swc1        $f6, 0x654($s1)
    MEM_W(0X654, ctx->r17) = ctx->f6.u32l;
    // 0x802B30C0: b           L_802B3168
    // 0x802B30C4: swc1        $f10, 0x65C($s1)
    MEM_W(0X65C, ctx->r17) = ctx->f10.u32l;
        goto L_802B3168;
    // 0x802B30C4: swc1        $f10, 0x65C($s1)
    MEM_W(0X65C, ctx->r17) = ctx->f10.u32l;
L_802B30C8:
    // 0x802B30C8: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
L_802B30CC:
    // 0x802B30CC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802B30D0: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x802B30D4: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x802B30D8: bne         $v1, $zero, L_802B30E8
    if (ctx->r3 != 0) {
        // 0x802B30DC: nop
    
            goto L_802B30E8;
    }
    // 0x802B30DC: nop

    // 0x802B30E0: b           L_802B3100
    // 0x802B30E4: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
        goto L_802B3100;
    // 0x802B30E4: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_802B30E8:
    // 0x802B30E8: bne         $v1, $at, L_802B30FC
    if (ctx->r3 != ctx->r1) {
        // 0x802B30EC: lui         $s0, 0x0
        ctx->r16 = S32(0X0 << 16);
            goto L_802B30FC;
    }
    // 0x802B30EC: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x802B30F0: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x802B30F4: b           L_802B3100
    // 0x802B30F8: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
        goto L_802B3100;
    // 0x802B30F8: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_802B30FC:
    // 0x802B30FC: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_802B3100:
    // 0x802B3100: jal         0x80223F70
    // 0x802B3104: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    static_3_80223F70(rdram, ctx);
        goto after_15;
    // 0x802B3104: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_15:
    // 0x802B3108: beql        $v0, $zero, L_802B316C
    if (ctx->r2 == 0) {
        // 0x802B310C: lw          $a0, 0x20($s1)
        ctx->r4 = MEM_W(ctx->r17, 0X20);
            goto L_802B316C;
    }
    goto skip_17;
    // 0x802B310C: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    skip_17:
    // 0x802B3110: lw          $t4, 0x64C($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X64C);
    // 0x802B3114: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802B3118: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x802B311C: bne         $t4, $at, L_802B3168
    if (ctx->r12 != ctx->r1) {
        // 0x802B3120: addiu       $t6, $zero, 0x3
        ctx->r14 = ADD32(0, 0X3);
            goto L_802B3168;
    }
    // 0x802B3120: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x802B3124: lw          $v0, 0xC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XC);
    // 0x802B3128: sw          $zero, 0x64C($s1)
    MEM_W(0X64C, ctx->r17) = 0;
    // 0x802B312C: sb          $t5, 0x648($s1)
    MEM_B(0X648, ctx->r17) = ctx->r13;
    // 0x802B3130: sw          $t6, 0x650($s1)
    MEM_W(0X650, ctx->r17) = ctx->r14;
    // 0x802B3134: lw          $s0, 0xD8($v0)
    ctx->r16 = MEM_W(ctx->r2, 0XD8);
    // 0x802B3138: lw          $t9, 0x44($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X44);
    // 0x802B313C: lh          $t7, 0x40($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X40);
    // 0x802B3140: jalr        $t9
    // 0x802B3144: addu        $a0, $t7, $v0
    ctx->r4 = ADD32(ctx->r15, ctx->r2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x802B3144: addu        $a0, $t7, $v0
    ctx->r4 = ADD32(ctx->r15, ctx->r2);
    after_16:
    // 0x802B3148: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B314C: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B3150: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x802B3154: add.s       $f8, $f0, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x802B3158: swc1        $f18, 0x654($s1)
    MEM_W(0X654, ctx->r17) = ctx->f18.u32l;
    // 0x802B315C: b           L_802B3168
    // 0x802B3160: swc1        $f8, 0x65C($s1)
    MEM_W(0X65C, ctx->r17) = ctx->f8.u32l;
        goto L_802B3168;
    // 0x802B3160: swc1        $f8, 0x65C($s1)
    MEM_W(0X65C, ctx->r17) = ctx->f8.u32l;
    // 0x802B3164: sw          $zero, 0x64C($s1)
    MEM_W(0X64C, ctx->r17) = 0;
L_802B3168:
    // 0x802B3168: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
L_802B316C:
    // 0x802B316C: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x802B3170: bne         $v1, $zero, L_802B3180
    if (ctx->r3 != 0) {
        // 0x802B3174: lui         $s0, 0x0
        ctx->r16 = S32(0X0 << 16);
            goto L_802B3180;
    }
    // 0x802B3174: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x802B3178: b           L_802B319C
    // 0x802B317C: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
        goto L_802B319C;
    // 0x802B317C: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_802B3180:
    // 0x802B3180: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802B3184: bne         $v1, $at, L_802B3198
    if (ctx->r3 != ctx->r1) {
        // 0x802B3188: lui         $s0, 0x0
        ctx->r16 = S32(0X0 << 16);
            goto L_802B3198;
    }
    // 0x802B3188: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x802B318C: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x802B3190: b           L_802B319C
    // 0x802B3194: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
        goto L_802B319C;
    // 0x802B3194: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_802B3198:
    // 0x802B3198: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_802B319C:
    // 0x802B319C: jal         0x80223F70
    // 0x802B31A0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    static_3_80223F70(rdram, ctx);
        goto after_17;
    // 0x802B31A0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_17:
    // 0x802B31A4: beql        $v0, $zero, L_802B31F0
    if (ctx->r2 == 0) {
        // 0x802B31A8: lw          $a0, 0x20($s1)
        ctx->r4 = MEM_W(ctx->r17, 0X20);
            goto L_802B31F0;
    }
    goto skip_18;
    // 0x802B31A8: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    skip_18:
    // 0x802B31AC: lwc1        $f10, 0x144($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X144);
    // 0x802B31B0: addiu       $a0, $s1, 0x1A4
    ctx->r4 = ADD32(ctx->r17, 0X1A4);
    // 0x802B31B4: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x802B31B8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802B31BC: jal         0x802D64CC
    // 0x802B31C0: swc1        $f10, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->f10.u32l;
    static_3_802D64CC(rdram, ctx);
        goto after_18;
    // 0x802B31C0: swc1        $f10, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->f10.u32l;
    after_18:
    // 0x802B31C4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802B31C8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802B31CC: lwc1        $f6, 0x160($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X160);
    // 0x802B31D0: lwc1        $f18, 0x58($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X58);
    // 0x802B31D4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802B31D8: mul.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x802B31DC: sh          $t8, 0x60($s1)
    MEM_H(0X60, ctx->r17) = ctx->r24;
    // 0x802B31E0: sub.s       $f10, $f18, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f18.fl - ctx->f8.fl;
    // 0x802B31E4: b           L_802B32F8
    // 0x802B31E8: swc1        $f10, 0x58($s1)
    MEM_W(0X58, ctx->r17) = ctx->f10.u32l;
        goto L_802B32F8;
    // 0x802B31E8: swc1        $f10, 0x58($s1)
    MEM_W(0X58, ctx->r17) = ctx->f10.u32l;
    // 0x802B31EC: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
L_802B31F0:
    // 0x802B31F0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802B31F4: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x802B31F8: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x802B31FC: bne         $v1, $zero, L_802B320C
    if (ctx->r3 != 0) {
        // 0x802B3200: nop
    
            goto L_802B320C;
    }
    // 0x802B3200: nop

    // 0x802B3204: b           L_802B3224
    // 0x802B3208: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
        goto L_802B3224;
    // 0x802B3208: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_802B320C:
    // 0x802B320C: bne         $v1, $at, L_802B3220
    if (ctx->r3 != ctx->r1) {
        // 0x802B3210: lui         $s0, 0x0
        ctx->r16 = S32(0X0 << 16);
            goto L_802B3220;
    }
    // 0x802B3210: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x802B3214: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x802B3218: b           L_802B3224
    // 0x802B321C: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
        goto L_802B3224;
    // 0x802B321C: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_802B3220:
    // 0x802B3220: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_802B3224:
    // 0x802B3224: jal         0x80223F70
    // 0x802B3228: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    static_3_80223F70(rdram, ctx);
        goto after_19;
    // 0x802B3228: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_19:
    // 0x802B322C: beq         $v0, $zero, L_802B3264
    if (ctx->r2 == 0) {
        // 0x802B3230: lwc1        $f6, 0x140($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X140);
            goto L_802B3264;
    }
    // 0x802B3230: lwc1        $f6, 0x140($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X140);
    // 0x802B3234: addiu       $a0, $s1, 0x1A4
    ctx->r4 = ADD32(ctx->r17, 0X1A4);
    // 0x802B3238: swc1        $f6, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->f6.u32l;
    // 0x802B323C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x802B3240: jal         0x802D64CC
    // 0x802B3244: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802D64CC(rdram, ctx);
        goto after_20;
    // 0x802B3244: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_20:
    // 0x802B3248: lwc1        $f4, 0x58($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X58);
    // 0x802B324C: lwc1        $f18, 0x160($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X160);
    // 0x802B3250: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x802B3254: sh          $t0, 0x60($s1)
    MEM_H(0X60, ctx->r17) = ctx->r8;
    // 0x802B3258: add.s       $f8, $f4, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x802B325C: b           L_802B32F8
    // 0x802B3260: swc1        $f8, 0x58($s1)
    MEM_W(0X58, ctx->r17) = ctx->f8.u32l;
        goto L_802B32F8;
    // 0x802B3260: swc1        $f8, 0x58($s1)
    MEM_W(0X58, ctx->r17) = ctx->f8.u32l;
L_802B3264:
    // 0x802B3264: lw          $v0, 0xC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XC);
    // 0x802B3268: lw          $s0, 0xD8($v0)
    ctx->r16 = MEM_W(ctx->r2, 0XD8);
    // 0x802B326C: lw          $t9, 0x5C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X5C);
    // 0x802B3270: lh          $t1, 0x58($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X58);
    // 0x802B3274: jalr        $t9
    // 0x802B3278: addu        $a0, $t1, $v0
    ctx->r4 = ADD32(ctx->r9, ctx->r2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_21;
    // 0x802B3278: addu        $a0, $t1, $v0
    ctx->r4 = ADD32(ctx->r9, ctx->r2);
    after_21:
    // 0x802B327C: lwc1        $f14, 0x144($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X144);
    // 0x802B3280: lwc1        $f6, 0x140($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X140);
    // 0x802B3284: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B3288: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B328C: sub.s       $f4, $f14, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f14.fl - ctx->f6.fl;
    // 0x802B3290: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802B3294: swc1        $f0, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->f0.u32l;
    // 0x802B3298: mul.s       $f2, $f10, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x802B329C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802B32A0: sub.s       $f12, $f14, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f14.fl - ctx->f2.fl;
    // 0x802B32A4: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x802B32A8: nop

    // 0x802B32AC: bc1fl       L_802B32BC
    if (!c1cs) {
        // 0x802B32B0: lwc1        $f18, 0x140($sp)
        ctx->f18.u32l = MEM_W(ctx->r29, 0X140);
            goto L_802B32BC;
    }
    goto skip_19;
    // 0x802B32B0: lwc1        $f18, 0x140($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X140);
    skip_19:
    // 0x802B32B4: swc1        $f12, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->f12.u32l;
    // 0x802B32B8: lwc1        $f18, 0x140($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X140);
L_802B32BC:
    // 0x802B32BC: lwc1        $f8, 0x148($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X148);
    // 0x802B32C0: add.s       $f0, $f18, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x802B32C4: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x802B32C8: nop

    // 0x802B32CC: bc1fl       L_802B32DC
    if (!c1cs) {
        // 0x802B32D0: lwc1        $f6, 0x160($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X160);
            goto L_802B32DC;
    }
    goto skip_20;
    // 0x802B32D0: lwc1        $f6, 0x160($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X160);
    skip_20:
    // 0x802B32D4: swc1        $f0, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->f0.u32l;
    // 0x802B32D8: lwc1        $f6, 0x160($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X160);
L_802B32DC:
    // 0x802B32DC: lwc1        $f18, 0x58($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X58);
    // 0x802B32E0: sh          $zero, 0x60($s1)
    MEM_H(0X60, ctx->r17) = 0;
    // 0x802B32E4: mul.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x802B32E8: addiu       $t2, $s1, 0x1A4
    ctx->r10 = ADD32(ctx->r17, 0X1A4);
    // 0x802B32EC: sub.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x802B32F0: swc1        $f8, 0x58($s1)
    MEM_W(0X58, ctx->r17) = ctx->f8.u32l;
    // 0x802B32F4: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
L_802B32F8:
    // 0x802B32F8: lbu         $t3, 0x24($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0X24);
    // 0x802B32FC: beql        $t3, $zero, L_802B3320
    if (ctx->r11 == 0) {
        // 0x802B3300: lbu         $t4, 0x648($s1)
        ctx->r12 = MEM_BU(ctx->r17, 0X648);
            goto L_802B3320;
    }
    goto skip_21;
    // 0x802B3300: lbu         $t4, 0x648($s1)
    ctx->r12 = MEM_BU(ctx->r17, 0X648);
    skip_21:
    // 0x802B3304: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802B3308: sb          $zero, 0x648($s1)
    MEM_B(0X648, ctx->r17) = 0;
    // 0x802B330C: sb          $zero, 0x649($s1)
    MEM_B(0X649, ctx->r17) = 0;
    // 0x802B3310: sw          $zero, 0x64C($s1)
    MEM_W(0X64C, ctx->r17) = 0;
    // 0x802B3314: sw          $zero, 0x650($s1)
    MEM_W(0X650, ctx->r17) = 0;
    // 0x802B3318: swc1        $f6, 0x658($s1)
    MEM_W(0X658, ctx->r17) = ctx->f6.u32l;
    // 0x802B331C: lbu         $t4, 0x648($s1)
    ctx->r12 = MEM_BU(ctx->r17, 0X648);
L_802B3320:
    // 0x802B3320: bnel        $t4, $zero, L_802B3398
    if (ctx->r12 != 0) {
        // 0x802B3324: lw          $s0, 0x1A0($s1)
        ctx->r16 = MEM_W(ctx->r17, 0X1A0);
            goto L_802B3398;
    }
    goto skip_22;
    // 0x802B3324: lw          $s0, 0x1A0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X1A0);
    skip_22:
    // 0x802B3328: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x802B332C: jal         0x80223F4C
    // 0x802B3330: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_80223F4C(rdram, ctx);
        goto after_22;
    // 0x802B3330: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_22:
    // 0x802B3334: swc1        $f0, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->f0.u32l;
    // 0x802B3338: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x802B333C: jal         0x80223F4C
    // 0x802B3340: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_80223F4C(rdram, ctx);
        goto after_23;
    // 0x802B3340: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_23:
    // 0x802B3344: swc1        $f0, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->f0.u32l;
    // 0x802B3348: jal         0x802D64D4
    // 0x802B334C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    static_3_802D64D4(rdram, ctx);
        goto after_24;
    // 0x802B334C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_24:
    // 0x802B3350: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802B3354: bne         $v0, $at, L_802B37B8
    if (ctx->r2 != ctx->r1) {
        // 0x802B3358: lwc1        $f0, 0x140($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X140);
            goto L_802B37B8;
    }
    // 0x802B3358: lwc1        $f0, 0x140($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X140);
    // 0x802B335C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B3360: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B3364: lwc1        $f4, 0x130($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X130);
    // 0x802B3368: swc1        $f0, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->f0.u32l;
    // 0x802B336C: mul.s       $f18, $f10, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x802B3370: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x802B3374: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x802B3378: nop

    // 0x802B337C: bc1fl       L_802B37BC
    if (!c1cs) {
        // 0x802B3380: lui         $at, 0x4000
        ctx->r1 = S32(0X4000 << 16);
            goto L_802B37BC;
    }
    goto skip_23;
    // 0x802B3380: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    skip_23:
    // 0x802B3384: jal         0x802D64CC
    // 0x802B3388: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802D64CC(rdram, ctx);
        goto after_25;
    // 0x802B3388: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_25:
    // 0x802B338C: b           L_802B37BC
    // 0x802B3390: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
        goto L_802B37BC;
    // 0x802B3390: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802B3394: lw          $s0, 0x1A0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X1A0);
L_802B3398:
    // 0x802B3398: lwc1        $f8, 0x140($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X140);
    // 0x802B339C: addiu       $a1, $sp, 0xD8
    ctx->r5 = ADD32(ctx->r29, 0XD8);
    // 0x802B33A0: lh          $t5, 0x60($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X60);
    // 0x802B33A4: swc1        $f8, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->f8.u32l;
    // 0x802B33A8: lw          $t9, 0x64($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X64);
    // 0x802B33AC: addu        $a0, $t5, $s1
    ctx->r4 = ADD32(ctx->r13, ctx->r17);
    // 0x802B33B0: jalr        $t9
    // 0x802B33B4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_26;
    // 0x802B33B4: nop

    after_26:
    // 0x802B33B8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802B33BC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802B33C0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802B33C4: swc1        $f6, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->f6.u32l;
    // 0x802B33C8: swc1        $f10, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->f10.u32l;
    // 0x802B33CC: lw          $v0, 0x650($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X650);
    // 0x802B33D0: beql        $v0, $zero, L_802B33E4
    if (ctx->r2 == 0) {
        // 0x802B33D4: lw          $t6, 0x18($s1)
        ctx->r14 = MEM_W(ctx->r17, 0X18);
            goto L_802B33E4;
    }
    goto skip_24;
    // 0x802B33D4: lw          $t6, 0x18($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X18);
    skip_24:
    // 0x802B33D8: bnel        $v0, $at, L_802B3748
    if (ctx->r2 != ctx->r1) {
        // 0x802B33DC: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_802B3748;
    }
    goto skip_25;
    // 0x802B33DC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    skip_25:
    // 0x802B33E0: lw          $t6, 0x18($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X18);
L_802B33E4:
    // 0x802B33E4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802B33E8: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802B33EC: bnel        $t6, $at, L_802B3588
    if (ctx->r14 != ctx->r1) {
        // 0x802B33F0: lw          $a0, 0x30($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X30);
            goto L_802B3588;
    }
    goto skip_26;
    // 0x802B33F0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    skip_26:
    // 0x802B33F4: lbu         $t7, 0x0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X0);
    // 0x802B33F8: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x802B33FC: bnel        $t7, $at, L_802B3588
    if (ctx->r15 != ctx->r1) {
        // 0x802B3400: lw          $a0, 0x30($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X30);
            goto L_802B3588;
    }
    goto skip_27;
    // 0x802B3400: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    skip_27:
    // 0x802B3404: lbu         $t8, 0x941($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X941);
    // 0x802B3408: bnel        $t8, $zero, L_802B3588
    if (ctx->r24 != 0) {
        // 0x802B340C: lw          $a0, 0x30($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X30);
            goto L_802B3588;
    }
    goto skip_28;
    // 0x802B340C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    skip_28:
    // 0x802B3410: lw          $s0, 0x1A0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X1A0);
    // 0x802B3414: addiu       $a1, $sp, 0x84
    ctx->r5 = ADD32(ctx->r29, 0X84);
    // 0x802B3418: lw          $t9, 0x64($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X64);
    // 0x802B341C: lh          $t0, 0x60($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X60);
    // 0x802B3420: jalr        $t9
    // 0x802B3424: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_27;
    // 0x802B3424: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    after_27:
    // 0x802B3428: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B342C: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B3430: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B3434: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B3438: lui         $at, 0x4331
    ctx->r1 = S32(0X4331 << 16);
    // 0x802B343C: lwc1        $f16, 0xBC($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x802B3440: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802B3444: lwc1        $f0, 0xB4($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x802B3448: lwc1        $f2, 0xB8($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x802B344C: sub.s       $f6, $f16, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f8.fl;
    // 0x802B3450: swc1        $f16, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f16.u32l;
    // 0x802B3454: swc1        $f0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f0.u32l;
    // 0x802B3458: sub.s       $f12, $f0, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f18.fl;
    // 0x802B345C: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x802B3460: swc1        $f2, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f2.u32l;
    // 0x802B3464: jal         0x802D05CC
    // 0x802B3468: sub.s       $f14, $f2, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f4.fl;
    static_3_802D05CC(rdram, ctx);
        goto after_28;
    // 0x802B3468: sub.s       $f14, $f2, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f4.fl;
    after_28:
    // 0x802B346C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B3470: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B3474: lwc1        $f10, 0x80($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X80);
    // 0x802B3478: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B347C: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B3480: lui         $at, 0x4331
    ctx->r1 = S32(0X4331 << 16);
    // 0x802B3484: sub.s       $f12, $f10, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x802B3488: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802B348C: lwc1        $f6, 0x78($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X78);
    // 0x802B3490: lwc1        $f4, 0x7C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x802B3494: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
    // 0x802B3498: sub.s       $f2, $f6, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x802B349C: sub.s       $f14, $f4, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x802B34A0: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x802B34A4: jal         0x802D05CC
    // 0x802B34A8: swc1        $f2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f2.u32l;
    static_3_802D05CC(rdram, ctx);
        goto after_29;
    // 0x802B34A8: swc1        $f2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f2.u32l;
    after_29:
    // 0x802B34AC: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x802B34B0: lwc1        $f16, 0x80($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X80);
    // 0x802B34B4: lwc1        $f10, 0x7C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x802B34B8: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x802B34BC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B34C0: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B34C4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B34C8: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B34CC: sub.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x802B34D0: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
    // 0x802B34D4: jal         0x802D05CC
    // 0x802B34D8: sub.s       $f14, $f10, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f8.fl;
    static_3_802D05CC(rdram, ctx);
        goto after_30;
    // 0x802B34D8: sub.s       $f14, $f10, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f8.fl;
    after_30:
    // 0x802B34DC: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x802B34E0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802B34E4: lwc1        $f10, 0x50($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X50);
    // 0x802B34E8: lwc1        $f18, 0x4C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x802B34EC: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x802B34F0: c.lt.s      $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f10.fl < ctx->f2.fl;
    // 0x802B34F4: addiu       $a0, $zero, 0x1F40
    ctx->r4 = ADD32(0, 0X1F40);
    // 0x802B34F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802B34FC: bc1t        L_802B3524
    if (c1cs) {
        // 0x802B3500: nop
    
            goto L_802B3524;
    }
    // 0x802B3500: nop

    // 0x802B3504: c.lt.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl < ctx->f2.fl;
    // 0x802B3508: nop

    // 0x802B350C: bc1t        L_802B3524
    if (c1cs) {
        // 0x802B3510: nop
    
            goto L_802B3524;
    }
    // 0x802B3510: nop

    // 0x802B3514: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x802B3518: nop

    // 0x802B351C: bc1fl       L_802B3588
    if (!c1cs) {
        // 0x802B3520: lw          $a0, 0x30($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X30);
            goto L_802B3588;
    }
    goto skip_29;
    // 0x802B3520: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    skip_29:
L_802B3524:
    // 0x802B3524: jal         0x80305E90
    // 0x802B3528: sb          $t1, 0x44($sp)
    MEM_B(0X44, ctx->r29) = ctx->r9;
    static_3_80305E90(rdram, ctx);
        goto after_31;
    // 0x802B3528: sb          $t1, 0x44($sp)
    MEM_B(0X44, ctx->r29) = ctx->r9;
    after_31:
    // 0x802B352C: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x802B3530: addiu       $s0, $s0, 0x0
    ctx->r16 = ADD32(ctx->r16, 0X0);
    // 0x802B3534: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x802B3538: addiu       $t2, $zero, 0x30
    ctx->r10 = ADD32(0, 0X30);
    // 0x802B353C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x802B3540: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x802B3544: addiu       $a2, $zero, 0x69
    ctx->r6 = ADD32(0, 0X69);
    // 0x802B3548: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x802B354C: jal         0x80302238
    // 0x802B3550: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302238(rdram, ctx);
        goto after_32;
    // 0x802B3550: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_32:
    // 0x802B3554: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x802B3558: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x802B355C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x802B3560: jal         0x8030262C
    // 0x802B3564: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_8030262C(rdram, ctx);
        goto after_33;
    // 0x802B3564: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_33:
    // 0x802B3568: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x802B356C: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x802B3570: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x802B3574: jal         0x80302664
    // 0x802B3578: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302664(rdram, ctx);
        goto after_34;
    // 0x802B3578: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_34:
    // 0x802B357C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x802B3580: sb          $t3, 0x941($s1)
    MEM_B(0X941, ctx->r17) = ctx->r11;
    // 0x802B3584: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
L_802B3588:
    // 0x802B3588: jal         0x802D64CC
    // 0x802B358C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802D64CC(rdram, ctx);
        goto after_35;
    // 0x802B358C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_35:
    // 0x802B3590: lw          $v0, 0x650($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X650);
    // 0x802B3594: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802B3598: bne         $v0, $zero, L_802B35FC
    if (ctx->r2 != 0) {
        // 0x802B359C: nop
    
            goto L_802B35FC;
    }
    // 0x802B359C: nop

    // 0x802B35A0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802B35A4: lwc1        $f2, 0x658($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X658);
    // 0x802B35A8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802B35AC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802B35B0: c.lt.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl < ctx->f2.fl;
    // 0x802B35B4: lwc1        $f4, 0x160($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X160);
    // 0x802B35B8: bc1fl       L_802B35E0
    if (!c1cs) {
        // 0x802B35BC: lui         $at, 0x4180
        ctx->r1 = S32(0X4180 << 16);
            goto L_802B35E0;
    }
    goto skip_30;
    // 0x802B35BC: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    skip_30:
    // 0x802B35C0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802B35C4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802B35C8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802B35CC: nop

    // 0x802B35D0: sub.s       $f10, $f2, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f6.fl;
    // 0x802B35D4: mul.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x802B35D8: sub.s       $f2, $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f18.fl;
    // 0x802B35DC: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
L_802B35E0:
    // 0x802B35E0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802B35E4: nop

    // 0x802B35E8: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802B35EC: nop

    // 0x802B35F0: mul.s       $f2, $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x802B35F4: b           L_802B36A4
    // 0x802B35F8: swc1        $f2, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f2.u32l;
        goto L_802B36A4;
    // 0x802B35F8: swc1        $f2, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f2.u32l;
L_802B35FC:
    // 0x802B35FC: bnel        $v0, $at, L_802B36A8
    if (ctx->r2 != ctx->r1) {
        // 0x802B3600: lwc1        $f2, 0xD4($sp)
        ctx->f2.u32l = MEM_W(ctx->r29, 0XD4);
            goto L_802B36A8;
    }
    goto skip_31;
    // 0x802B3600: lwc1        $f2, 0xD4($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XD4);
    skip_31:
    // 0x802B3604: lbu         $t4, 0x649($s1)
    ctx->r12 = MEM_BU(ctx->r17, 0X649);
    // 0x802B3608: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802B360C: beq         $t4, $zero, L_802B3678
    if (ctx->r12 == 0) {
        // 0x802B3610: nop
    
            goto L_802B3678;
    }
    // 0x802B3610: nop

    // 0x802B3614: lwc1        $f10, 0x658($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X658);
    // 0x802B3618: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802B361C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802B3620: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802B3624: mul.s       $f2, $f10, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x802B3628: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802B362C: c.lt.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl < ctx->f2.fl;
    // 0x802B3630: lwc1        $f4, 0x160($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X160);
    // 0x802B3634: bc1fl       L_802B365C
    if (!c1cs) {
        // 0x802B3638: lui         $at, 0x4180
        ctx->r1 = S32(0X4180 << 16);
            goto L_802B365C;
    }
    goto skip_32;
    // 0x802B3638: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    skip_32:
    // 0x802B363C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802B3640: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802B3644: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802B3648: nop

    // 0x802B364C: sub.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f8.fl;
    // 0x802B3650: mul.s       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x802B3654: sub.s       $f2, $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f18.fl;
    // 0x802B3658: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
L_802B365C:
    // 0x802B365C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802B3660: nop

    // 0x802B3664: mul.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x802B3668: nop

    // 0x802B366C: mul.s       $f2, $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x802B3670: b           L_802B36A0
    // 0x802B3674: nop

        goto L_802B36A0;
    // 0x802B3674: nop

L_802B3678:
    // 0x802B3678: jal         0x80300424
    // 0x802B367C: lwc1        $f12, 0x658($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X658);
    static_3_80300424(rdram, ctx);
        goto after_36;
    // 0x802B367C: lwc1        $f12, 0x658($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X658);
    after_36:
    // 0x802B3680: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x802B3684: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802B3688: lwc1        $f10, 0x160($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X160);
    // 0x802B368C: neg.s       $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = -ctx->f0.fl;
    // 0x802B3690: mul.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x802B3694: nop

    // 0x802B3698: mul.s       $f2, $f8, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x802B369C: nop

L_802B36A0:
    // 0x802B36A0: swc1        $f2, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f2.u32l;
L_802B36A4:
    // 0x802B36A4: lwc1        $f2, 0xD4($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XD4);
L_802B36A8:
    // 0x802B36A8: lwc1        $f6, 0x110($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X110);
    // 0x802B36AC: add.s       $f10, $f6, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f2.fl;
    // 0x802B36B0: swc1        $f10, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f10.u32l;
    // 0x802B36B4: lw          $v0, 0xC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XC);
    // 0x802B36B8: lw          $s0, 0xD8($v0)
    ctx->r16 = MEM_W(ctx->r2, 0XD8);
    // 0x802B36BC: lw          $t9, 0x6C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X6C);
    // 0x802B36C0: lh          $t5, 0x68($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X68);
    // 0x802B36C4: jalr        $t9
    // 0x802B36C8: addu        $a0, $t5, $v0
    ctx->r4 = ADD32(ctx->r13, ctx->r2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_37;
    // 0x802B36C8: addu        $a0, $t5, $v0
    ctx->r4 = ADD32(ctx->r13, ctx->r2);
    after_37:
    // 0x802B36CC: lwc1        $f8, 0x160($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X160);
    // 0x802B36D0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B36D4: ldc1        $f18, 0x0($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, 0X0);
    // 0x802B36D8: cvt.d.s     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f4.d = CVT_D_S(ctx->f8.fl);
    // 0x802B36DC: lwc1        $f10, 0xB4($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0XB4);
    // 0x802B36E0: mul.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x802B36E4: lwc1        $f2, 0x110($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X110);
    // 0x802B36E8: cvt.d.s     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f8.d = CVT_D_S(ctx->f10.fl);
    // 0x802B36EC: lwc1        $f12, 0x108($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X108);
    // 0x802B36F0: lwc1        $f14, 0x10C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X10C);
    // 0x802B36F4: lw          $a3, 0xB0($s1)
    ctx->r7 = MEM_W(ctx->r17, 0XB0);
    // 0x802B36F8: addiu       $t6, $sp, 0xD8
    ctx->r14 = ADD32(ctx->r29, 0XD8);
    // 0x802B36FC: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x802B3700: sub.d       $f18, $f8, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f6.d); 
    ctx->f18.d = ctx->f8.d - ctx->f6.d;
    // 0x802B3704: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x802B3708: swc1        $f4, 0xB4($s1)
    MEM_W(0XB4, ctx->r17) = ctx->f4.u32l;
    // 0x802B370C: lwc1        $f10, 0xB4($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0XB4);
    // 0x802B3710: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x802B3714: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x802B3718: jal         0x802CF27C
    // 0x802B371C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    static_3_802CF27C(rdram, ctx);
        goto after_38;
    // 0x802B371C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_38:
    // 0x802B3720: lw          $v0, 0xC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XC);
    // 0x802B3724: addiu       $a1, $sp, 0xD8
    ctx->r5 = ADD32(ctx->r29, 0XD8);
    // 0x802B3728: lw          $s0, 0xD8($v0)
    ctx->r16 = MEM_W(ctx->r2, 0XD8);
    // 0x802B372C: lw          $t9, 0xAC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XAC);
    // 0x802B3730: lh          $t7, 0xA8($s0)
    ctx->r15 = MEM_H(ctx->r16, 0XA8);
    // 0x802B3734: jalr        $t9
    // 0x802B3738: addu        $a0, $t7, $v0
    ctx->r4 = ADD32(ctx->r15, ctx->r2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_39;
    // 0x802B3738: addu        $a0, $t7, $v0
    ctx->r4 = ADD32(ctx->r15, ctx->r2);
    after_39:
    // 0x802B373C: b           L_802B37BC
    // 0x802B3740: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
        goto L_802B37BC;
    // 0x802B3740: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802B3744: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_802B3748:
    // 0x802B3748: bne         $v0, $at, L_802B3780
    if (ctx->r2 != ctx->r1) {
        // 0x802B374C: lui         $at, 0x40E0
        ctx->r1 = S32(0X40E0 << 16);
            goto L_802B3780;
    }
    // 0x802B374C: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x802B3750: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802B3754: lwc1        $f0, 0x7C0($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X7C0);
    // 0x802B3758: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802B375C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802B3760: sub.s       $f6, $f8, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x802B3764: lwc1        $f10, 0x160($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X160);
    // 0x802B3768: mul.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f18.fl);
    // 0x802B376C: nop

    // 0x802B3770: mul.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x802B3774: add.s       $f6, $f0, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x802B3778: b           L_802B37B8
    // 0x802B377C: swc1        $f6, 0x7C0($s1)
    MEM_W(0X7C0, ctx->r17) = ctx->f6.u32l;
        goto L_802B37B8;
    // 0x802B377C: swc1        $f6, 0x7C0($s1)
    MEM_W(0X7C0, ctx->r17) = ctx->f6.u32l;
L_802B3780:
    // 0x802B3780: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802B3784: bne         $v0, $at, L_802B37B8
    if (ctx->r2 != ctx->r1) {
        // 0x802B3788: lui         $at, 0xC0E0
        ctx->r1 = S32(0XC0E0 << 16);
            goto L_802B37B8;
    }
    // 0x802B3788: lui         $at, 0xC0E0
    ctx->r1 = S32(0XC0E0 << 16);
    // 0x802B378C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802B3790: lwc1        $f0, 0x7C0($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X7C0);
    // 0x802B3794: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802B3798: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802B379C: sub.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f0.fl;
    // 0x802B37A0: lwc1        $f6, 0x160($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X160);
    // 0x802B37A4: mul.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x802B37A8: nop

    // 0x802B37AC: mul.s       $f18, $f8, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x802B37B0: add.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f18.fl;
    // 0x802B37B4: swc1        $f4, 0x7C0($s1)
    MEM_W(0X7C0, ctx->r17) = ctx->f4.u32l;
L_802B37B8:
    // 0x802B37B8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
L_802B37BC:
    // 0x802B37BC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802B37C0: lwc1        $f0, 0x7C0($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X7C0);
    // 0x802B37C4: lwc1        $f6, 0x160($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X160);
    // 0x802B37C8: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x802B37CC: mul.s       $f8, $f0, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x802B37D0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802B37D4: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x802B37D8: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x802B37DC: mul.s       $f18, $f8, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x802B37E0: sub.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f18.fl;
    // 0x802B37E4: bne         $v1, $zero, L_802B37F4
    if (ctx->r3 != 0) {
        // 0x802B37E8: swc1        $f4, 0x7C0($s1)
        MEM_W(0X7C0, ctx->r17) = ctx->f4.u32l;
            goto L_802B37F4;
    }
    // 0x802B37E8: swc1        $f4, 0x7C0($s1)
    MEM_W(0X7C0, ctx->r17) = ctx->f4.u32l;
    // 0x802B37EC: b           L_802B380C
    // 0x802B37F0: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
        goto L_802B380C;
    // 0x802B37F0: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_802B37F4:
    // 0x802B37F4: bne         $v1, $at, L_802B3808
    if (ctx->r3 != ctx->r1) {
        // 0x802B37F8: lui         $s0, 0x0
        ctx->r16 = S32(0X0 << 16);
            goto L_802B3808;
    }
    // 0x802B37F8: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x802B37FC: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x802B3800: b           L_802B380C
    // 0x802B3804: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
        goto L_802B380C;
    // 0x802B3804: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_802B3808:
    // 0x802B3808: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_802B380C:
    // 0x802B380C: jal         0x80223F70
    // 0x802B3810: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    static_3_80223F70(rdram, ctx);
        goto after_40;
    // 0x802B3810: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_40:
    // 0x802B3814: beql        $v0, $zero, L_802B3850
    if (ctx->r2 == 0) {
        // 0x802B3818: lw          $a0, 0x20($s1)
        ctx->r4 = MEM_W(ctx->r17, 0X20);
            goto L_802B3850;
    }
    goto skip_33;
    // 0x802B3818: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    skip_33:
    // 0x802B381C: lbu         $t8, 0x648($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X648);
    // 0x802B3820: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802B3824: bnel        $t8, $zero, L_802B3850
    if (ctx->r24 != 0) {
        // 0x802B3828: lw          $a0, 0x20($s1)
        ctx->r4 = MEM_W(ctx->r17, 0X20);
            goto L_802B3850;
    }
    goto skip_34;
    // 0x802B3828: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    skip_34:
    // 0x802B382C: lwc1        $f0, 0x7BC($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X7BC);
    // 0x802B3830: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802B3834: lwc1        $f6, 0x160($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X160);
    // 0x802B3838: sub.s       $f8, $f10, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x802B383C: mul.s       $f18, $f8, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x802B3840: add.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f18.fl;
    // 0x802B3844: b           L_802B38E4
    // 0x802B3848: swc1        $f4, 0x7BC($s1)
    MEM_W(0X7BC, ctx->r17) = ctx->f4.u32l;
        goto L_802B38E4;
    // 0x802B3848: swc1        $f4, 0x7BC($s1)
    MEM_W(0X7BC, ctx->r17) = ctx->f4.u32l;
    // 0x802B384C: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
L_802B3850:
    // 0x802B3850: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802B3854: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x802B3858: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x802B385C: bne         $v1, $zero, L_802B386C
    if (ctx->r3 != 0) {
        // 0x802B3860: nop
    
            goto L_802B386C;
    }
    // 0x802B3860: nop

    // 0x802B3864: b           L_802B3884
    // 0x802B3868: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
        goto L_802B3884;
    // 0x802B3868: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_802B386C:
    // 0x802B386C: bne         $v1, $at, L_802B3880
    if (ctx->r3 != ctx->r1) {
        // 0x802B3870: lui         $s0, 0x0
        ctx->r16 = S32(0X0 << 16);
            goto L_802B3880;
    }
    // 0x802B3870: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x802B3874: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x802B3878: b           L_802B3884
    // 0x802B387C: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
        goto L_802B3884;
    // 0x802B387C: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_802B3880:
    // 0x802B3880: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_802B3884:
    // 0x802B3884: jal         0x80223F70
    // 0x802B3888: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    static_3_80223F70(rdram, ctx);
        goto after_41;
    // 0x802B3888: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_41:
    // 0x802B388C: beq         $v0, $zero, L_802B38C4
    if (ctx->r2 == 0) {
        // 0x802B3890: lui         $at, 0x4000
        ctx->r1 = S32(0X4000 << 16);
            goto L_802B38C4;
    }
    // 0x802B3890: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802B3894: lbu         $t0, 0x648($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0X648);
    // 0x802B3898: bnel        $t0, $zero, L_802B38C8
    if (ctx->r8 != 0) {
        // 0x802B389C: lwc1        $f0, 0x7BC($s1)
        ctx->f0.u32l = MEM_W(ctx->r17, 0X7BC);
            goto L_802B38C8;
    }
    goto skip_35;
    // 0x802B389C: lwc1        $f0, 0x7BC($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X7BC);
    skip_35:
    // 0x802B38A0: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x802B38A4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802B38A8: lwc1        $f0, 0x7BC($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X7BC);
    // 0x802B38AC: lwc1        $f6, 0x160($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X160);
    // 0x802B38B0: sub.s       $f8, $f10, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x802B38B4: mul.s       $f18, $f8, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x802B38B8: add.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f18.fl;
    // 0x802B38BC: b           L_802B38E4
    // 0x802B38C0: swc1        $f4, 0x7BC($s1)
    MEM_W(0X7BC, ctx->r17) = ctx->f4.u32l;
        goto L_802B38E4;
    // 0x802B38C0: swc1        $f4, 0x7BC($s1)
    MEM_W(0X7BC, ctx->r17) = ctx->f4.u32l;
L_802B38C4:
    // 0x802B38C4: lwc1        $f0, 0x7BC($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X7BC);
L_802B38C8:
    // 0x802B38C8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802B38CC: lwc1        $f6, 0x160($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X160);
    // 0x802B38D0: mul.s       $f8, $f0, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x802B38D4: nop

    // 0x802B38D8: mul.s       $f18, $f8, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x802B38DC: sub.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f18.fl;
    // 0x802B38E0: swc1        $f4, 0x7BC($s1)
    MEM_W(0X7BC, ctx->r17) = ctx->f4.u32l;
L_802B38E4:
    // 0x802B38E4: lwc1        $f10, 0x154($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X154);
    // 0x802B38E8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802B38EC: lwc1        $f6, 0x154($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X154);
    // 0x802B38F0: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    // 0x802B38F4: c.le.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl <= ctx->f10.fl;
    // 0x802B38F8: mul.s       $f18, $f6, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f6.fl);
    // 0x802B38FC: bc1f        L_802B390C
    if (!c1cs) {
        // 0x802B3900: nop
    
            goto L_802B390C;
    }
    // 0x802B3900: nop

    // 0x802B3904: b           L_802B390C
    // 0x802B3908: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
        goto L_802B390C;
    // 0x802B3908: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_802B390C:
    // 0x802B390C: mtc1        $s0, $f4
    ctx->f4.u32l = ctx->r16;
    // 0x802B3910: lwc1        $f6, 0x150($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X150);
    // 0x802B3914: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    // 0x802B3918: cvt.s.w     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802B391C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802B3920: nop

    // 0x802B3924: c.le.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl <= ctx->f6.fl;
    // 0x802B3928: mul.s       $f8, $f18, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f10.fl);
    // 0x802B392C: lwc1        $f18, 0x150($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X150);
    // 0x802B3930: mul.s       $f10, $f18, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x802B3934: bc1f        L_802B3944
    if (!c1cs) {
        // 0x802B3938: swc1        $f8, 0x154($sp)
        MEM_W(0X154, ctx->r29) = ctx->f8.u32l;
            goto L_802B3944;
    }
    // 0x802B3938: swc1        $f8, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->f8.u32l;
    // 0x802B393C: b           L_802B3944
    // 0x802B3940: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
        goto L_802B3944;
    // 0x802B3940: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_802B3944:
    // 0x802B3944: mtc1        $s0, $f8
    ctx->f8.u32l = ctx->r16;
    // 0x802B3948: lw          $a1, 0x154($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X154);
    // 0x802B394C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x802B3950: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802B3954: mul.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x802B3958: swc1        $f4, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->f4.u32l;
    // 0x802B395C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x802B3960: jal         0x802D27BC
    // 0x802B3964: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    func_802D273C(rdram, ctx);
        goto after_42;
    // 0x802B3964: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    after_42:
    // 0x802B3968: lwc1        $f18, 0x7BC($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X7BC);
    // 0x802B396C: lwc1        $f8, 0x7C0($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X7C0);
    // 0x802B3970: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x802B3974: add.s       $f10, $f18, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x802B3978: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x802B397C: jal         0x802D64C0
    // 0x802B3980: nop

    static_3_802D64C0(rdram, ctx);
        goto after_43;
    // 0x802B3980: nop

    after_43:
    // 0x802B3984: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    // 0x802B3988: jal         0x802D2990
    // 0x802B398C: lw          $a1, 0x148($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X148);
    static_3_802D2990(rdram, ctx);
        goto after_44;
    // 0x802B398C: lw          $a1, 0x148($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X148);
    after_44:
    // 0x802B3990: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802B3994: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x802B3998: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x802B399C: jr          $ra
    // 0x802B39A0: addiu       $sp, $sp, 0x158
    ctx->r29 = ADD32(ctx->r29, 0X158);
    return;
    // 0x802B39A0: addiu       $sp, $sp, 0x158
    ctx->r29 = ADD32(ctx->r29, 0X158);
;}
RECOMP_FUNC void D_80299C40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80299CC0: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x80299CC4: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x80299CC8: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x80299CCC: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x80299CD0: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x80299CD4: addiu       $t8, $t8, 0x0
    ctx->r24 = ADD32(ctx->r24, 0X0);
    // 0x80299CD8: addiu       $t9, $t9, 0x0
    ctx->r25 = ADD32(ctx->r25, 0X0);
    // 0x80299CDC: addiu       $t0, $t0, 0x0
    ctx->r8 = ADD32(ctx->r8, 0X0);
    // 0x80299CE0: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x80299CE4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80299CE8: sb          $t6, 0x18($a0)
    MEM_B(0X18, ctx->r4) = ctx->r14;
    // 0x80299CEC: sb          $t1, 0x19($a0)
    MEM_B(0X19, ctx->r4) = ctx->r9;
    // 0x80299CF0: sb          $zero, 0x1B($a0)
    MEM_B(0X1B, ctx->r4) = 0;
    // 0x80299CF4: sw          $t8, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r24;
    // 0x80299CF8: sw          $t9, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r25;
    // 0x80299CFC: sw          $t0, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r8;
    // 0x80299D00: sb          $zero, 0x30($a0)
    MEM_B(0X30, ctx->r4) = 0;
    // 0x80299D04: sb          $t2, 0x32($a0)
    MEM_B(0X32, ctx->r4) = ctx->r10;
    // 0x80299D08: sb          $t3, 0x34($a0)
    MEM_B(0X34, ctx->r4) = ctx->r11;
    // 0x80299D0C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80299D10: jr          $ra
    // 0x80299D14: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
    return;
    // 0x80299D14: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
;}
RECOMP_FUNC void D_802A1EF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A1F78: jr          $ra
    // 0x802A1F7C: lwc1        $f0, 0x28($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X28);
    return;
    // 0x802A1F7C: lwc1        $f0, 0x28($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X28);
;}
RECOMP_FUNC void D_8021E3B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021E3B0: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x8021E3B4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8021E3B8: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8021E3BC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8021E3C0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8021E3C4: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8021E3C8: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8021E3CC: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8021E3D0: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8021E3D4: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8021E3D8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8021E3DC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8021E3E0: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8021E3E4: addiu       $a0, $zero, 0xB0
    ctx->r4 = ADD32(0, 0XB0);
    // 0x8021E3E8: jal         0x8022B948
    // 0x8021E3EC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8022B948(rdram, ctx);
        goto after_0;
    // 0x8021E3EC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x8021E3F0: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8021E3F4: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x8021E3F8: sll         $t7, $s1, 2
    ctx->r15 = S32(ctx->r17 << 2);
    // 0x8021E3FC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8021E400: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8021E404: jal         0x80223840
    // 0x8021E408: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    func_80223840(rdram, ctx);
        goto after_1;
    // 0x8021E408: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    after_1:
    // 0x8021E40C: or          $s7, $v0, $zero
    ctx->r23 = ctx->r2 | 0;
    // 0x8021E410: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8021E414: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    // 0x8021E418: addiu       $a2, $sp, 0x60
    ctx->r6 = ADD32(ctx->r29, 0X60);
    // 0x8021E41C: jal         0x8022393C
    // 0x8021E420: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8022393C(rdram, ctx);
        goto after_2;
    // 0x8021E420: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x8021E424: beq         $v0, $zero, L_8021E518
    if (ctx->r2 == 0) {
        // 0x8021E428: lw          $fp, 0x54($sp)
        ctx->r30 = MEM_W(ctx->r29, 0X54);
            goto L_8021E518;
    }
    // 0x8021E428: lw          $fp, 0x54($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X54);
    // 0x8021E42C: lui         $s6, 0x5354
    ctx->r22 = S32(0X5354 << 16);
    // 0x8021E430: lui         $s5, 0x494D
    ctx->r21 = S32(0X494D << 16);
    // 0x8021E434: lui         $s4, 0x4652
    ctx->r20 = S32(0X4652 << 16);
    // 0x8021E438: lui         $s3, 0x4249
    ctx->r19 = S32(0X4249 << 16);
    // 0x8021E43C: ori         $s3, $s3, 0x544D
    ctx->r19 = ctx->r19 | 0X544D;
    // 0x8021E440: ori         $s4, $s4, 0x4D54
    ctx->r20 = ctx->r20 | 0X4D54;
    // 0x8021E444: ori         $s5, $s5, 0x4147
    ctx->r21 = ctx->r21 | 0X4147;
    // 0x8021E448: ori         $s6, $s6, 0x5247
    ctx->r22 = ctx->r22 | 0X5247;
L_8021E44C:
    // 0x8021E44C: beq         $v0, $s3, L_8021E4A8
    if (ctx->r2 == ctx->r19) {
        // 0x8021E450: lw          $a0, 0x64($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X64);
            goto L_8021E4A8;
    }
    // 0x8021E450: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x8021E454: beq         $v0, $s4, L_8021E490
    if (ctx->r2 == ctx->r20) {
        // 0x8021E458: lw          $t9, 0x60($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X60);
            goto L_8021E490;
    }
    // 0x8021E458: lw          $t9, 0x60($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X60);
    // 0x8021E45C: beq         $v0, $s5, L_8021E4D0
    if (ctx->r2 == ctx->r21) {
        // 0x8021E460: lw          $a0, 0x64($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X64);
            goto L_8021E4D0;
    }
    // 0x8021E460: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x8021E464: bne         $v0, $s6, L_8021E4F8
    if (ctx->r2 != ctx->r22) {
        // 0x8021E468: lw          $a0, 0x64($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X64);
            goto L_8021E4F8;
    }
    // 0x8021E468: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x8021E46C: jal         0x8022B948
    // 0x8021E470: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8022B948(rdram, ctx);
        goto after_3;
    // 0x8021E470: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_3:
    // 0x8021E474: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x8021E478: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x8021E47C: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    // 0x8021E480: jal         0x8022B460
    // 0x8021E484: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8022B460(rdram, ctx);
        goto after_4;
    // 0x8021E484: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_4:
    // 0x8021E488: b           L_8021E4FC
    // 0x8021E48C: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
        goto L_8021E4FC;
    // 0x8021E48C: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
L_8021E490:
    // 0x8021E490: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x8021E494: sb          $t0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r8;
    // 0x8021E498: lw          $t1, 0x60($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X60);
    // 0x8021E49C: lw          $t2, 0x4($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X4);
    // 0x8021E4A0: b           L_8021E4F8
    // 0x8021E4A4: sb          $t2, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r10;
        goto L_8021E4F8;
    // 0x8021E4A4: sb          $t2, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r10;
L_8021E4A8:
    // 0x8021E4A8: srl         $fp, $a0, 4
    ctx->r30 = S32(U32(ctx->r4) >> 4);
    // 0x8021E4AC: jal         0x8022B948
    // 0x8021E4B0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_8022B948(rdram, ctx);
        goto after_5;
    // 0x8021E4B0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_5:
    // 0x8021E4B4: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x8021E4B8: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x8021E4BC: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    // 0x8021E4C0: jal         0x8022B460
    // 0x8021E4C4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8022B460(rdram, ctx);
        goto after_6;
    // 0x8021E4C4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_6:
    // 0x8021E4C8: b           L_8021E4FC
    // 0x8021E4CC: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
        goto L_8021E4FC;
    // 0x8021E4CC: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
L_8021E4D0:
    // 0x8021E4D0: sll         $t3, $s2, 2
    ctx->r11 = S32(ctx->r18 << 2);
    // 0x8021E4D4: addu        $s1, $s0, $t3
    ctx->r17 = ADD32(ctx->r16, ctx->r11);
    // 0x8021E4D8: jal         0x8022B948
    // 0x8021E4DC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_8022B948(rdram, ctx);
        goto after_7;
    // 0x8021E4DC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_7:
    // 0x8021E4E0: sw          $v0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r2;
    // 0x8021E4E4: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x8021E4E8: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    // 0x8021E4EC: jal         0x8022B460
    // 0x8021E4F0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8022B460(rdram, ctx);
        goto after_8;
    // 0x8021E4F0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_8:
    // 0x8021E4F4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_8021E4F8:
    // 0x8021E4F8: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
L_8021E4FC:
    // 0x8021E4FC: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    // 0x8021E500: addiu       $a2, $sp, 0x60
    ctx->r6 = ADD32(ctx->r29, 0X60);
    // 0x8021E504: jal         0x8022393C
    // 0x8021E508: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8022393C(rdram, ctx);
        goto after_9;
    // 0x8021E508: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_9:
    // 0x8021E50C: bne         $v0, $zero, L_8021E44C
    if (ctx->r2 != 0) {
        // 0x8021E510: nop
    
            goto L_8021E44C;
    }
    // 0x8021E510: nop

    // 0x8021E514: sw          $fp, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r30;
L_8021E518:
    // 0x8021E518: lw          $fp, 0x54($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X54);
    // 0x8021E51C: jal         0x802238F0
    // 0x8021E520: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    static_3_802238F0(rdram, ctx);
        goto after_10;
    // 0x8021E520: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    after_10:
    // 0x8021E524: blez        $fp, L_8021E5E8
    if (SIGNED(ctx->r30) <= 0) {
        // 0x8021E528: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_8021E5E8;
    }
    // 0x8021E528: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8021E52C: andi        $v0, $fp, 0x3
    ctx->r2 = ctx->r30 & 0X3;
    // 0x8021E530: beq         $v0, $zero, L_8021E568
    if (ctx->r2 == 0) {
        // 0x8021E534: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_8021E568;
    }
    // 0x8021E534: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8021E538: sll         $v1, $zero, 4
    ctx->r3 = S32(0 << 4);
L_8021E53C:
    // 0x8021E53C: lw          $t4, 0xC($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC);
    // 0x8021E540: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8021E544: addu        $v0, $t4, $v1
    ctx->r2 = ADD32(ctx->r12, ctx->r3);
    // 0x8021E548: lw          $t5, 0x8($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X8);
    // 0x8021E54C: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x8021E550: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8021E554: addu        $t7, $s0, $t6
    ctx->r15 = ADD32(ctx->r16, ctx->r14);
    // 0x8021E558: lw          $t8, 0x10($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X10);
    // 0x8021E55C: bne         $a1, $a0, L_8021E53C
    if (ctx->r5 != ctx->r4) {
        // 0x8021E560: sw          $t8, 0x8($v0)
        MEM_W(0X8, ctx->r2) = ctx->r24;
            goto L_8021E53C;
    }
    // 0x8021E560: sw          $t8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r24;
    // 0x8021E564: beq         $a0, $fp, L_8021E5E8
    if (ctx->r4 == ctx->r30) {
        // 0x8021E568: sll         $v1, $a0, 4
        ctx->r3 = S32(ctx->r4 << 4);
            goto L_8021E5E8;
    }
L_8021E568:
    // 0x8021E568: sll         $v1, $a0, 4
    ctx->r3 = S32(ctx->r4 << 4);
    // 0x8021E56C: sll         $a1, $fp, 4
    ctx->r5 = S32(ctx->r30 << 4);
L_8021E570:
    // 0x8021E570: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
    // 0x8021E574: addu        $v0, $t9, $v1
    ctx->r2 = ADD32(ctx->r25, ctx->r3);
    // 0x8021E578: lw          $t0, 0x8($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X8);
    // 0x8021E57C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8021E580: addu        $t2, $s0, $t1
    ctx->r10 = ADD32(ctx->r16, ctx->r9);
    // 0x8021E584: lw          $t3, 0x10($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X10);
    // 0x8021E588: sw          $t3, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r11;
    // 0x8021E58C: lw          $t4, 0xC($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC);
    // 0x8021E590: addu        $v0, $t4, $v1
    ctx->r2 = ADD32(ctx->r12, ctx->r3);
    // 0x8021E594: lw          $t5, 0x18($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X18);
    // 0x8021E598: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8021E59C: addu        $t7, $s0, $t6
    ctx->r15 = ADD32(ctx->r16, ctx->r14);
    // 0x8021E5A0: lw          $t8, 0x10($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X10);
    // 0x8021E5A4: sw          $t8, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r24;
    // 0x8021E5A8: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
    // 0x8021E5AC: addu        $v0, $t9, $v1
    ctx->r2 = ADD32(ctx->r25, ctx->r3);
    // 0x8021E5B0: lw          $t0, 0x28($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X28);
    // 0x8021E5B4: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8021E5B8: addu        $t2, $s0, $t1
    ctx->r10 = ADD32(ctx->r16, ctx->r9);
    // 0x8021E5BC: lw          $t3, 0x10($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X10);
    // 0x8021E5C0: sw          $t3, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r11;
    // 0x8021E5C4: lw          $t4, 0xC($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC);
    // 0x8021E5C8: addu        $v0, $t4, $v1
    ctx->r2 = ADD32(ctx->r12, ctx->r3);
    // 0x8021E5CC: lw          $t5, 0x38($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X38);
    // 0x8021E5D0: addiu       $v1, $v1, 0x40
    ctx->r3 = ADD32(ctx->r3, 0X40);
    // 0x8021E5D4: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8021E5D8: addu        $t7, $s0, $t6
    ctx->r15 = ADD32(ctx->r16, ctx->r14);
    // 0x8021E5DC: lw          $t8, 0x10($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X10);
    // 0x8021E5E0: bne         $v1, $a1, L_8021E570
    if (ctx->r3 != ctx->r5) {
        // 0x8021E5E4: sw          $t8, 0x38($v0)
        MEM_W(0X38, ctx->r2) = ctx->r24;
            goto L_8021E570;
    }
    // 0x8021E5E4: sw          $t8, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->r24;
L_8021E5E8:
    // 0x8021E5E8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8021E5EC: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x8021E5F0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8021E5F4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8021E5F8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8021E5FC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8021E600: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8021E604: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8021E608: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8021E60C: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8021E610: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8021E614: jr          $ra
    // 0x8021E618: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x8021E618: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void D_80218C24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80218C24: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80218C28: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x80218C2C: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80218C30: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x80218C34: lwc1        $f2, 0x0($a2)
    ctx->f2.u32l = MEM_W(ctx->r6, 0X0);
    // 0x80218C38: bgez        $t7, L_80218C50
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80218C3C: lwc1        $f0, 0x0($a1)
        ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
            goto L_80218C50;
    }
    // 0x80218C3C: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80218C40: addiu       $a0, $t7, 0x4
    ctx->r4 = ADD32(ctx->r15, 0X4);
    // 0x80218C44: sll         $t8, $a0, 16
    ctx->r24 = S32(ctx->r4 << 16);
    // 0x80218C48: b           L_80218C78
    // 0x80218C4C: sra         $a0, $t8, 16
    ctx->r4 = S32(SIGNED(ctx->r24) >> 16);
        goto L_80218C78;
    // 0x80218C4C: sra         $a0, $t8, 16
    ctx->r4 = S32(SIGNED(ctx->r24) >> 16);
L_80218C50:
    // 0x80218C50: slti        $at, $a0, 0x4
    ctx->r1 = SIGNED(ctx->r4) < 0X4 ? 1 : 0;
    // 0x80218C54: bne         $at, $zero, L_80218C78
    if (ctx->r1 != 0) {
        // 0x80218C58: nop
    
            goto L_80218C78;
    }
    // 0x80218C58: nop

    // 0x80218C5C: bgez        $a0, L_80218C70
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80218C60: andi        $t0, $a0, 0x3
        ctx->r8 = ctx->r4 & 0X3;
            goto L_80218C70;
    }
    // 0x80218C60: andi        $t0, $a0, 0x3
    ctx->r8 = ctx->r4 & 0X3;
    // 0x80218C64: beq         $t0, $zero, L_80218C70
    if (ctx->r8 == 0) {
        // 0x80218C68: nop
    
            goto L_80218C70;
    }
    // 0x80218C68: nop

    // 0x80218C6C: addiu       $t0, $t0, -0x4
    ctx->r8 = ADD32(ctx->r8, -0X4);
L_80218C70:
    // 0x80218C70: sll         $t1, $t0, 16
    ctx->r9 = S32(ctx->r8 << 16);
    // 0x80218C74: sra         $a0, $t1, 16
    ctx->r4 = S32(SIGNED(ctx->r9) >> 16);
L_80218C78:
    // 0x80218C78: beq         $a0, $zero, L_80218CA0
    if (ctx->r4 == 0) {
        // 0x80218C7C: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80218CA0;
    }
    // 0x80218C7C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80218C80: beq         $a0, $at, L_80218CAC
    if (ctx->r4 == ctx->r1) {
        // 0x80218C84: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80218CAC;
    }
    // 0x80218C84: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80218C88: beq         $a0, $at, L_80218CBC
    if (ctx->r4 == ctx->r1) {
        // 0x80218C8C: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80218CBC;
    }
    // 0x80218C8C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80218C90: beql        $a0, $at, L_80218CD4
    if (ctx->r4 == ctx->r1) {
        // 0x80218C94: neg.s       $f10, $f2
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = -ctx->f2.fl;
            goto L_80218CD4;
    }
    goto skip_0;
    // 0x80218C94: neg.s       $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = -ctx->f2.fl;
    skip_0:
    // 0x80218C98: jr          $ra
    // 0x80218C9C: nop

    return;
    // 0x80218C9C: nop

L_80218CA0:
    // 0x80218CA0: swc1        $f0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f0.u32l;
    // 0x80218CA4: jr          $ra
    // 0x80218CA8: swc1        $f2, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f2.u32l;
    return;
    // 0x80218CA8: swc1        $f2, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f2.u32l;
L_80218CAC:
    // 0x80218CAC: neg.s       $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = -ctx->f0.fl;
    // 0x80218CB0: swc1        $f2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f2.u32l;
    // 0x80218CB4: jr          $ra
    // 0x80218CB8: swc1        $f4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f4.u32l;
    return;
    // 0x80218CB8: swc1        $f4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f4.u32l;
L_80218CBC:
    // 0x80218CBC: neg.s       $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = -ctx->f0.fl;
    // 0x80218CC0: neg.s       $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = -ctx->f2.fl;
    // 0x80218CC4: swc1        $f6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f6.u32l;
    // 0x80218CC8: jr          $ra
    // 0x80218CCC: swc1        $f8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f8.u32l;
    return;
    // 0x80218CCC: swc1        $f8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f8.u32l;
    // 0x80218CD0: neg.s       $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = -ctx->f2.fl;
L_80218CD4:
    // 0x80218CD4: swc1        $f10, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f10.u32l;
    // 0x80218CD8: swc1        $f0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f0.u32l;
    // 0x80218CDC: jr          $ra
    // 0x80218CE0: nop

    return;
    // 0x80218CE0: nop

;}
RECOMP_FUNC void D_8023DA90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023DA90: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8023DA94: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8023DA98: jal         0x80241760
    // 0x8023DA9C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    static_3_80241760(rdram, ctx);
        goto after_0;
    // 0x8023DA9C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x8023DAA0: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8023DAA4: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x8023DAA8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8023DAAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8023DAB0: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x8023DAB4: jal         0x80241780
    // 0x8023DAB8: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    static_3_80241780(rdram, ctx);
        goto after_1;
    // 0x8023DAB8: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    after_1:
    // 0x8023DABC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8023DAC0: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x8023DAC4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023DAC8: jr          $ra
    // 0x8023DACC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8023DACC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void D_802D2744(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D27C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802D27C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802D27CC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802D27D0: lwc1        $f4, 0x4($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X4);
    // 0x802D27D4: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x802D27D8: nop

    // 0x802D27DC: bc1fl       L_802D2800
    if (!c1cs) {
        // 0x802D27E0: swc1        $f12, 0x4($a0)
        MEM_W(0X4, ctx->r4) = ctx->f12.u32l;
            goto L_802D2800;
    }
    goto skip_0;
    // 0x802D27E0: swc1        $f12, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f12.u32l;
    skip_0:
    // 0x802D27E4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802D27E8: jal         0x80302E28
    // 0x802D27EC: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    static_3_80302E28(rdram, ctx);
        goto after_0;
    // 0x802D27EC: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x802D27F0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802D27F4: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802D27F8: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x802D27FC: swc1        $f12, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f12.u32l;
L_802D2800:
    // 0x802D2800: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802D2804: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802D2808: jr          $ra
    // 0x802D280C: nop

    return;
    // 0x802D280C: nop

;}
RECOMP_FUNC void D_8024411C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024411C: sw          $a1, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r5;
    // 0x80244120: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x80244124: sw          $a2, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r6;
    // 0x80244128: andi        $t8, $a2, 0xFFFF
    ctx->r24 = ctx->r6 & 0XFFFF;
    // 0x8024412C: sra         $t9, $a0, 3
    ctx->r25 = S32(SIGNED(ctx->r4) >> 3);
    // 0x80244130: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x80244134: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80244138: bne         $t9, $zero, L_80244148
    if (ctx->r25 != 0) {
        // 0x8024413C: or          $a0, $t9, $zero
        ctx->r4 = ctx->r25 | 0;
            goto L_80244148;
    }
    // 0x8024413C: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x80244140: jr          $ra
    // 0x80244144: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    return;
    // 0x80244144: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
L_80244148:
    // 0x80244148: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x8024414C: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80244150: mtc1        $a2, $f8
    ctx->f8.u32l = ctx->r6;
    // 0x80244154: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80244158: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8024415C: bgez        $a2, L_80244174
    if (SIGNED(ctx->r6) >= 0) {
        // 0x80244160: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_80244174;
    }
    // 0x80244160: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80244164: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80244168: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8024416C: nop

    // 0x80244170: add.s       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f4.fl;
L_80244174:
    // 0x80244174: lui         $at, 0x4780
    ctx->r1 = S32(0X4780 << 16);
    // 0x80244178: add.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x8024417C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80244180: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80244184: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80244188: addiu       $v1, $zero, 0x20
    ctx->r3 = ADD32(0, 0X20);
    // 0x8024418C: div.s       $f0, $f8, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = DIV_S(ctx->f8.fl, ctx->f4.fl);
    // 0x80244190: andi        $t7, $a0, 0x1
    ctx->r15 = ctx->r4 & 0X1;
L_80244194:
    // 0x80244194: beq         $t7, $zero, L_802441A4
    if (ctx->r15 == 0) {
        // 0x80244198: sra         $t8, $a0, 1
        ctx->r24 = S32(SIGNED(ctx->r4) >> 1);
            goto L_802441A4;
    }
    // 0x80244198: sra         $t8, $a0, 1
    ctx->r24 = S32(SIGNED(ctx->r4) >> 1);
    // 0x8024419C: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x802441A0: nop

L_802441A4:
    // 0x802441A4: beq         $t8, $zero, L_802441BC
    if (ctx->r24 == 0) {
        // 0x802441A8: or          $a0, $t8, $zero
        ctx->r4 = ctx->r24 | 0;
            goto L_802441BC;
    }
    // 0x802441A8: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x802441AC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802441B0: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x802441B4: bnel        $v0, $v1, L_80244194
    if (ctx->r2 != ctx->r3) {
        // 0x802441B8: andi        $t7, $a0, 0x1
        ctx->r15 = ctx->r4 & 0X1;
            goto L_80244194;
    }
    goto skip_0;
    // 0x802441B8: andi        $t7, $a0, 0x1
    ctx->r15 = ctx->r4 & 0X1;
    skip_0:
L_802441BC:
    // 0x802441BC: mul.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x802441C0: nop

    // 0x802441C4: jr          $ra
    // 0x802441C8: nop

    return;
    // 0x802441C8: nop

;}
RECOMP_FUNC void D_802A8A5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A8ADC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802A8AE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A8AE4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x802A8AE8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802A8AEC: lwc1        $f0, 0x20($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X20);
    // 0x802A8AF0: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x802A8AF4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x802A8AF8: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x802A8AFC: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x802A8B00: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802A8B04: lui         $a3, 0x4100
    ctx->r7 = S32(0X4100 << 16);
    // 0x802A8B08: jal         0x8022A0D0
    // 0x802A8B0C: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    static_3_8022A0D0(rdram, ctx);
        goto after_0;
    // 0x802A8B0C: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x802A8B10: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A8B14: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A8B18: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802A8B1C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x802A8B20: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    // 0x802A8B24: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x802A8B28: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x802A8B2C: jal         0x802D01D4
    // 0x802A8B30: nop

    static_3_802D01D4(rdram, ctx);
        goto after_1;
    // 0x802A8B30: nop

    after_1:
    // 0x802A8B34: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A8B38: lwc1        $f0, 0x1C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802A8B3C: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A8B40: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A8B44: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A8B48: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x802A8B4C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x802A8B50: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802A8B54: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x802A8B58: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x802A8B5C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x802A8B60: jal         0x8022A0D0
    // 0x802A8B64: nop

    static_3_8022A0D0(rdram, ctx);
        goto after_2;
    // 0x802A8B64: nop

    after_2:
    // 0x802A8B68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A8B6C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802A8B70: jr          $ra
    // 0x802A8B74: nop

    return;
    // 0x802A8B74: nop

;}
RECOMP_FUNC void D_8028A194(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028A214: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x8028A218: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8028A21C: addiu       $at, $zero, 0x72
    ctx->r1 = ADD32(0, 0X72);
    // 0x8028A220: or          $s0, $a3, $zero
    ctx->r16 = ctx->r7 | 0;
    // 0x8028A224: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8028A228: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x8028A22C: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x8028A230: beq         $a3, $at, L_8028A24C
    if (ctx->r7 == ctx->r1) {
        // 0x8028A234: sw          $a2, 0x70($sp)
        MEM_W(0X70, ctx->r29) = ctx->r6;
            goto L_8028A24C;
    }
    // 0x8028A234: sw          $a2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r6;
    // 0x8028A238: addiu       $at, $zero, 0x73
    ctx->r1 = ADD32(0, 0X73);
    // 0x8028A23C: beq         $a3, $at, L_8028A24C
    if (ctx->r7 == ctx->r1) {
        // 0x8028A240: addiu       $at, $zero, 0x70
        ctx->r1 = ADD32(0, 0X70);
            goto L_8028A24C;
    }
    // 0x8028A240: addiu       $at, $zero, 0x70
    ctx->r1 = ADD32(0, 0X70);
    // 0x8028A244: bnel        $a3, $at, L_8028A79C
    if (ctx->r7 != ctx->r1) {
        // 0x8028A248: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_8028A79C;
    }
    goto skip_0;
    // 0x8028A248: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_0:
L_8028A24C:
    // 0x8028A24C: jal         0x8022331C
    // 0x8028A250: nop

    static_3_8022331C(rdram, ctx);
        goto after_0;
    // 0x8028A250: nop

    after_0:
    // 0x8028A254: jal         0x80223468
    // 0x8028A258: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80223468(rdram, ctx);
        goto after_1;
    // 0x8028A258: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8028A25C: lw          $t6, 0x68($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X68);
    // 0x8028A260: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8028A264: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8028A268: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x8028A26C: addiu       $at, $zero, 0x73
    ctx->r1 = ADD32(0, 0X73);
    // 0x8028A270: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
    // 0x8028A274: lwc1        $f6, 0x7188($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X7188);
    // 0x8028A278: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8028A27C: bne         $s0, $at, L_8028A28C
    if (ctx->r16 != ctx->r1) {
        // 0x8028A280: swc1        $f8, 0x64($sp)
        MEM_W(0X64, ctx->r29) = ctx->f8.u32l;
            goto L_8028A28C;
    }
    // 0x8028A280: swc1        $f8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f8.u32l;
    // 0x8028A284: b           L_8028A28C
    // 0x8028A288: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
        goto L_8028A28C;
    // 0x8028A288: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
L_8028A28C:
    // 0x8028A28C: jal         0x8021F4E4
    // 0x8028A290: sw          $v0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r2;
    static_3_8021F4E4(rdram, ctx);
        goto after_2;
    // 0x8028A290: sw          $v0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r2;
    after_2:
    // 0x8028A294: lui         $at, 0x4110
    ctx->r1 = S32(0X4110 << 16);
    // 0x8028A298: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8028A29C: lwc1        $f18, 0x94($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X94);
    // 0x8028A2A0: lw          $t8, 0x6C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X6C);
    // 0x8028A2A4: lwc1        $f8, 0x64($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
    // 0x8028A2A8: mul.s       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x8028A2AC: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x8028A2B0: lw          $t0, 0x70($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X70);
    // 0x8028A2B4: lw          $s0, 0x90($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X90);
    // 0x8028A2B8: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    // 0x8028A2BC: lw          $t4, 0x88($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X88);
    // 0x8028A2C0: cvt.s.w     $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    ctx->f2.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8028A2C4: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x8028A2C8: lw          $t5, 0x8C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X8C);
    // 0x8028A2CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8028A2D0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8028A2D4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8028A2D8: sub.s       $f4, $f2, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x8028A2DC: swc1        $f2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f2.u32l;
    // 0x8028A2E0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8028A2E4: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x8028A2E8: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x8028A2EC: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x8028A2F0: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x8028A2F4: mfc1        $t2, $f16
    ctx->r10 = (int32_t)ctx->f16.u32l;
    // 0x8028A2F8: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x8028A2FC: mfc1        $a0, $f6
    ctx->r4 = (int32_t)ctx->f6.u32l;
    // 0x8028A300: subu        $a1, $t0, $t2
    ctx->r5 = SUB32(ctx->r8, ctx->r10);
    // 0x8028A304: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x8028A308: jal         0x8021F35C
    // 0x8028A30C: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    static_3_8021F35C(rdram, ctx);
        goto after_3;
    // 0x8028A30C: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    after_3:
    // 0x8028A310: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8028A314: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8028A318: lwc1        $f4, 0x94($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X94);
    // 0x8028A31C: lwc1        $f2, 0x54($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8028A320: lw          $v0, 0x60($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X60);
    // 0x8028A324: mul.s       $f0, $f18, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x8028A328: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    // 0x8028A32C: lw          $t8, 0x88($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X88);
    // 0x8028A330: lw          $t9, 0x8C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X8C);
    // 0x8028A334: sll         $a3, $v0, 5
    ctx->r7 = S32(ctx->r2 << 5);
    // 0x8028A338: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x8028A33C: sw          $a3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r7;
    // 0x8028A340: add.s       $f6, $f2, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x8028A344: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    // 0x8028A348: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8028A34C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8028A350: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x8028A354: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8028A358: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8028A35C: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x8028A360: mfc1        $a0, $f8
    ctx->r4 = (int32_t)ctx->f8.u32l;
    // 0x8028A364: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8028A368: jal         0x8021F35C
    // 0x8028A36C: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    static_3_8021F35C(rdram, ctx);
        goto after_4;
    // 0x8028A36C: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    after_4:
    // 0x8028A370: lwc1        $f0, 0x48($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8028A374: lwc1        $f10, 0x64($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X64);
    // 0x8028A378: lw          $t1, 0x70($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X70);
    // 0x8028A37C: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x8028A380: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x8028A384: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    // 0x8028A388: lw          $t4, 0x88($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X88);
    // 0x8028A38C: lw          $t5, 0x8C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X8C);
    // 0x8028A390: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x8028A394: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8028A398: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8028A39C: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8028A3A0: sw          $a3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r7;
    // 0x8028A3A4: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x8028A3A8: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x8028A3AC: mfc1        $t2, $f18
    ctx->r10 = (int32_t)ctx->f18.u32l;
    // 0x8028A3B0: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x8028A3B4: addu        $a1, $t1, $t2
    ctx->r5 = ADD32(ctx->r9, ctx->r10);
    // 0x8028A3B8: jal         0x8021F35C
    // 0x8028A3BC: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    static_3_8021F35C(rdram, ctx);
        goto after_5;
    // 0x8028A3BC: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    after_5:
    // 0x8028A3C0: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x8028A3C4: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    // 0x8028A3C8: lw          $t8, 0x88($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X88);
    // 0x8028A3CC: lw          $t9, 0x8C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X8C);
    // 0x8028A3D0: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x8028A3D4: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x8028A3D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8028A3DC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8028A3E0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8028A3E4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8028A3E8: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8028A3EC: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x8028A3F0: jal         0x8021F35C
    // 0x8028A3F4: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    static_3_8021F35C(rdram, ctx);
        goto after_6;
    // 0x8028A3F4: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    after_6:
    // 0x8028A3F8: jal         0x8021FCD0
    // 0x8028A3FC: nop

    static_3_8021FCD0(rdram, ctx);
        goto after_7;
    // 0x8028A3FC: nop

    after_7:
    // 0x8028A400: lw          $t0, 0x78($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X78);
    // 0x8028A404: addiu       $at, $zero, 0xFFF
    ctx->r1 = ADD32(0, 0XFFF);
    // 0x8028A408: beql        $t0, $at, L_8028A564
    if (ctx->r8 == ctx->r1) {
        // 0x8028A40C: lw          $a0, 0x7C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X7C);
            goto L_8028A564;
    }
    goto skip_1;
    // 0x8028A40C: lw          $a0, 0x7C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X7C);
    skip_1:
    // 0x8028A410: jal         0x8022342C
    // 0x8028A414: lui         $a0, 0x40
    ctx->r4 = S32(0X40 << 16);
    static_3_8022342C(rdram, ctx);
        goto after_8;
    // 0x8028A414: lui         $a0, 0x40
    ctx->r4 = S32(0X40 << 16);
    after_8:
    // 0x8028A418: jal         0x80223468
    // 0x8028A41C: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    static_3_80223468(rdram, ctx);
        goto after_9;
    // 0x8028A41C: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    after_9:
    // 0x8028A420: jal         0x8021F4E4
    // 0x8028A424: nop

    static_3_8021F4E4(rdram, ctx);
        goto after_10;
    // 0x8028A424: nop

    after_10:
    // 0x8028A428: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8028A42C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8028A430: lwc1        $f6, 0x64($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X64);
    // 0x8028A434: lw          $a0, 0x6C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X6C);
    // 0x8028A438: lw          $t3, 0x70($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X70);
    // 0x8028A43C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8028A440: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8028A444: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8028A448: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8028A44C: addiu       $a0, $a0, -0x22
    ctx->r4 = ADD32(ctx->r4, -0X22);
    // 0x8028A450: sw          $a0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r4;
    // 0x8028A454: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x8028A458: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x8028A45C: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x8028A460: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x8028A464: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8028A468: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    // 0x8028A46C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8028A470: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8028A474: addu        $a1, $t3, $t2
    ctx->r5 = ADD32(ctx->r11, ctx->r10);
    // 0x8028A478: sw          $a1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r5;
    // 0x8028A47C: jal         0x8021F35C
    // 0x8028A480: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    static_3_8021F35C(rdram, ctx);
        goto after_11;
    // 0x8028A480: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    after_11:
    // 0x8028A484: lw          $a0, 0x6C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X6C);
    // 0x8028A488: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x8028A48C: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8028A490: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x8028A494: addiu       $a0, $a0, -0x9
    ctx->r4 = ADD32(ctx->r4, -0X9);
    // 0x8028A498: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x8028A49C: sw          $a0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r4;
    // 0x8028A4A0: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8028A4A4: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x8028A4A8: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8028A4AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8028A4B0: addiu       $a3, $zero, 0x340
    ctx->r7 = ADD32(0, 0X340);
    // 0x8028A4B4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8028A4B8: jal         0x8021F35C
    // 0x8028A4BC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    static_3_8021F35C(rdram, ctx);
        goto after_12;
    // 0x8028A4BC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    after_12:
    // 0x8028A4C0: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x8028A4C4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8028A4C8: lwc1        $f18, 0x64($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X64);
    // 0x8028A4CC: lw          $t3, 0x70($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X70);
    // 0x8028A4D0: addiu       $t2, $zero, 0xC0
    ctx->r10 = ADD32(0, 0XC0);
    // 0x8028A4D4: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x8028A4D8: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8028A4DC: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8028A4E0: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8028A4E4: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x8028A4E8: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x8028A4EC: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x8028A4F0: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x8028A4F4: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x8028A4F8: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x8028A4FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8028A500: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x8028A504: addiu       $a3, $zero, 0x340
    ctx->r7 = ADD32(0, 0X340);
    // 0x8028A508: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8028A50C: addu        $a1, $t3, $t1
    ctx->r5 = ADD32(ctx->r11, ctx->r9);
    // 0x8028A510: jal         0x8021F35C
    // 0x8028A514: sw          $a1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r5;
    static_3_8021F35C(rdram, ctx);
        goto after_13;
    // 0x8028A514: sw          $a1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r5;
    after_13:
    // 0x8028A518: addiu       $t7, $zero, 0xC0
    ctx->r15 = ADD32(0, 0XC0);
    // 0x8028A51C: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8028A520: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x8028A524: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8028A528: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x8028A52C: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x8028A530: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x8028A534: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x8028A538: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8028A53C: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x8028A540: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8028A544: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8028A548: jal         0x8021F35C
    // 0x8028A54C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    static_3_8021F35C(rdram, ctx);
        goto after_14;
    // 0x8028A54C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    after_14:
    // 0x8028A550: jal         0x8021FCD0
    // 0x8028A554: nop

    static_3_8021FCD0(rdram, ctx);
        goto after_15;
    // 0x8028A554: nop

    after_15:
    // 0x8028A558: jal         0x802233EC
    // 0x8028A55C: lui         $a0, 0x40
    ctx->r4 = S32(0X40 << 16);
    static_3_802233EC(rdram, ctx);
        goto after_16;
    // 0x8028A55C: lui         $a0, 0x40
    ctx->r4 = S32(0X40 << 16);
    after_16:
    // 0x8028A560: lw          $a0, 0x7C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X7C);
L_8028A564:
    // 0x8028A564: lw          $t3, 0x6C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X6C);
    // 0x8028A568: addiu       $at, $zero, 0xFFF
    ctx->r1 = ADD32(0, 0XFFF);
    // 0x8028A56C: beq         $a0, $at, L_8028A790
    if (ctx->r4 == ctx->r1) {
        // 0x8028A570: addiu       $t1, $t3, -0x9
        ctx->r9 = ADD32(ctx->r11, -0X9);
            goto L_8028A790;
    }
    // 0x8028A570: addiu       $t1, $t3, -0x9
    ctx->r9 = ADD32(ctx->r11, -0X9);
    // 0x8028A574: jal         0x80223468
    // 0x8028A578: sw          $t1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r9;
    static_3_80223468(rdram, ctx);
        goto after_17;
    // 0x8028A578: sw          $t1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r9;
    after_17:
    // 0x8028A57C: jal         0x8021F4E4
    // 0x8028A580: nop

    static_3_8021F4E4(rdram, ctx);
        goto after_18;
    // 0x8028A580: nop

    after_18:
    // 0x8028A584: lw          $a0, 0x6C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X6C);
    // 0x8028A588: lw          $a1, 0x70($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X70);
    // 0x8028A58C: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    // 0x8028A590: lw          $t4, 0x88($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X88);
    // 0x8028A594: lw          $t5, 0x8C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X8C);
    // 0x8028A598: addiu       $a0, $a0, -0x20
    ctx->r4 = ADD32(ctx->r4, -0X20);
    // 0x8028A59C: addiu       $a1, $a1, -0x6
    ctx->r5 = ADD32(ctx->r5, -0X6);
    // 0x8028A5A0: sw          $a1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r5;
    // 0x8028A5A4: sw          $a0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r4;
    // 0x8028A5A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8028A5AC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8028A5B0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8028A5B4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8028A5B8: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x8028A5BC: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x8028A5C0: jal         0x8021F35C
    // 0x8028A5C4: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    static_3_8021F35C(rdram, ctx);
        goto after_19;
    // 0x8028A5C4: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    after_19:
    // 0x8028A5C8: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    // 0x8028A5CC: lw          $t7, 0x88($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X88);
    // 0x8028A5D0: lw          $t8, 0x8C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X8C);
    // 0x8028A5D4: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x8028A5D8: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x8028A5DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8028A5E0: addiu       $a3, $zero, 0x2E0
    ctx->r7 = ADD32(0, 0X2E0);
    // 0x8028A5E4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8028A5E8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8028A5EC: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x8028A5F0: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x8028A5F4: jal         0x8021F35C
    // 0x8028A5F8: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    static_3_8021F35C(rdram, ctx);
        goto after_20;
    // 0x8028A5F8: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    after_20:
    // 0x8028A5FC: lw          $a1, 0x70($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X70);
    // 0x8028A600: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    // 0x8028A604: lw          $t3, 0x88($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X88);
    // 0x8028A608: lw          $t1, 0x8C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X8C);
    // 0x8028A60C: addiu       $t9, $zero, 0xA0
    ctx->r25 = ADD32(0, 0XA0);
    // 0x8028A610: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x8028A614: sw          $a1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r5;
    // 0x8028A618: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x8028A61C: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x8028A620: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8028A624: addiu       $a3, $zero, 0x2E0
    ctx->r7 = ADD32(0, 0X2E0);
    // 0x8028A628: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8028A62C: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x8028A630: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x8028A634: jal         0x8021F35C
    // 0x8028A638: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    static_3_8021F35C(rdram, ctx);
        goto after_21;
    // 0x8028A638: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    after_21:
    // 0x8028A63C: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
    // 0x8028A640: lw          $t5, 0x88($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X88);
    // 0x8028A644: lw          $t6, 0x8C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X8C);
    // 0x8028A648: addiu       $t2, $zero, 0xA0
    ctx->r10 = ADD32(0, 0XA0);
    // 0x8028A64C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x8028A650: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x8028A654: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x8028A658: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8028A65C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8028A660: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8028A664: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x8028A668: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x8028A66C: jal         0x8021F35C
    // 0x8028A670: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    static_3_8021F35C(rdram, ctx);
        goto after_22;
    // 0x8028A670: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    after_22:
    // 0x8028A674: jal         0x8021FCD0
    // 0x8028A678: nop

    static_3_8021FCD0(rdram, ctx);
        goto after_23;
    // 0x8028A678: nop

    after_23:
    // 0x8028A67C: jal         0x8021F4E4
    // 0x8028A680: nop

    static_3_8021F4E4(rdram, ctx);
        goto after_24;
    // 0x8028A680: nop

    after_24:
    // 0x8028A684: lw          $t7, 0x80($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X80);
    // 0x8028A688: addiu       $t8, $zero, 0x15
    ctx->r24 = ADD32(0, 0X15);
    // 0x8028A68C: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    // 0x8028A690: subu        $v0, $t8, $t7
    ctx->r2 = SUB32(ctx->r24, ctx->r15);
    // 0x8028A694: lw          $t3, 0x88($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X88);
    // 0x8028A698: lw          $t1, 0x8C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X8C);
    // 0x8028A69C: addiu       $a3, $v0, 0x17
    ctx->r7 = ADD32(ctx->r2, 0X17);
    // 0x8028A6A0: sll         $t9, $a3, 5
    ctx->r25 = S32(ctx->r7 << 5);
    // 0x8028A6A4: or          $a3, $t9, $zero
    ctx->r7 = ctx->r25 | 0;
    // 0x8028A6A8: sw          $t9, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r25;
    // 0x8028A6AC: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    // 0x8028A6B0: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x8028A6B4: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x8028A6B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8028A6BC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8028A6C0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8028A6C4: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x8028A6C8: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x8028A6CC: jal         0x8021F35C
    // 0x8028A6D0: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    static_3_8021F35C(rdram, ctx);
        goto after_25;
    // 0x8028A6D0: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    after_25:
    // 0x8028A6D4: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
    // 0x8028A6D8: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
    // 0x8028A6DC: lw          $t5, 0x88($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X88);
    // 0x8028A6E0: lw          $t6, 0x8C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X8C);
    // 0x8028A6E4: addiu       $a3, $v0, 0x2E
    ctx->r7 = ADD32(ctx->r2, 0X2E);
    // 0x8028A6E8: sll         $t2, $a3, 5
    ctx->r10 = S32(ctx->r7 << 5);
    // 0x8028A6EC: or          $a3, $t2, $zero
    ctx->r7 = ctx->r10 | 0;
    // 0x8028A6F0: sw          $t2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r10;
    // 0x8028A6F4: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x8028A6F8: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x8028A6FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8028A700: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8028A704: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8028A708: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x8028A70C: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x8028A710: jal         0x8021F35C
    // 0x8028A714: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    static_3_8021F35C(rdram, ctx);
        goto after_26;
    // 0x8028A714: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    after_26:
    // 0x8028A718: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    // 0x8028A71C: lw          $t9, 0x88($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X88);
    // 0x8028A720: lw          $t0, 0x8C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X8C);
    // 0x8028A724: addiu       $t8, $zero, 0xA0
    ctx->r24 = ADD32(0, 0XA0);
    // 0x8028A728: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    // 0x8028A72C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8028A730: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x8028A734: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x8028A738: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8028A73C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8028A740: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8028A744: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x8028A748: jal         0x8021F35C
    // 0x8028A74C: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    static_3_8021F35C(rdram, ctx);
        goto after_27;
    // 0x8028A74C: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    after_27:
    // 0x8028A750: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x8028A754: lw          $t2, 0x88($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X88);
    // 0x8028A758: lw          $t4, 0x8C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X8C);
    // 0x8028A75C: addiu       $t3, $zero, 0xA0
    ctx->r11 = ADD32(0, 0XA0);
    // 0x8028A760: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x8028A764: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x8028A768: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x8028A76C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8028A770: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x8028A774: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8028A778: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x8028A77C: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x8028A780: jal         0x8021F35C
    // 0x8028A784: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    static_3_8021F35C(rdram, ctx);
        goto after_28;
    // 0x8028A784: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    after_28:
    // 0x8028A788: jal         0x8021FCD0
    // 0x8028A78C: nop

    static_3_8021FCD0(rdram, ctx);
        goto after_29;
    // 0x8028A78C: nop

    after_29:
L_8028A790:
    // 0x8028A790: jal         0x8022337C
    // 0x8028A794: nop

    static_3_8022337C(rdram, ctx);
        goto after_30;
    // 0x8028A794: nop

    after_30:
    // 0x8028A798: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8028A79C:
    // 0x8028A79C: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8028A7A0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x8028A7A4: jr          $ra
    // 0x8028A7A8: nop

    return;
    // 0x8028A7A8: nop

;}
RECOMP_FUNC void D_802056B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802056B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802056BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802056C0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802056C4: jal         0x80237F60
    // 0x802056C8: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    static_3_80237F60(rdram, ctx);
        goto after_0;
    // 0x802056C8: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    after_0:
    // 0x802056CC: beq         $v0, $zero, L_802056DC
    if (ctx->r2 == 0) {
        // 0x802056D0: nop
    
            goto L_802056DC;
    }
    // 0x802056D0: nop

    // 0x802056D4: jal         0x802057FC
    // 0x802056D8: nop

    static_3_802057FC(rdram, ctx);
        goto after_1;
    // 0x802056D8: nop

    after_1:
L_802056DC:
    // 0x802056DC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802056E0: jal         0x80238A70
    // 0x802056E4: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    static_3_80238A70(rdram, ctx);
        goto after_2;
    // 0x802056E4: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    after_2:
    // 0x802056E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802056EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802056F0: jr          $ra
    // 0x802056F4: nop

    return;
    // 0x802056F4: nop

;}
RECOMP_FUNC void D_8023E8D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023E8D0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023E8D4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8023E8D8: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8023E8DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023E8E0: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8023E8E4: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x8023E8E8: sw          $zero, 0x0($t6)
    MEM_W(0X0, ctx->r14) = 0;
    // 0x8023E8EC: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x8023E8F0: sw          $zero, 0x4($t7)
    MEM_W(0X4, ctx->r15) = 0;
    // 0x8023E8F4: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8023E8F8: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x8023E8FC: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x8023E900: sw          $t9, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r25;
    // 0x8023E904: sw          $t8, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r24;
    // 0x8023E908: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x8023E90C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8023E910: bne         $t2, $zero, L_8023E920
    if (ctx->r10 != 0) {
        // 0x8023E914: nop
    
            goto L_8023E920;
    }
    // 0x8023E914: nop

    // 0x8023E918: beq         $t3, $zero, L_8023E930
    if (ctx->r11 == 0) {
        // 0x8023E91C: nop
    
            goto L_8023E930;
    }
    // 0x8023E91C: nop

L_8023E920:
    // 0x8023E920: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x8023E924: sw          $t2, 0x10($t1)
    MEM_W(0X10, ctx->r9) = ctx->r10;
    // 0x8023E928: b           L_8023E944
    // 0x8023E92C: sw          $t3, 0x14($t1)
    MEM_W(0X14, ctx->r9) = ctx->r11;
        goto L_8023E944;
    // 0x8023E92C: sw          $t3, 0x14($t1)
    MEM_W(0X14, ctx->r9) = ctx->r11;
L_8023E930:
    // 0x8023E930: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8023E934: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x8023E938: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8023E93C: sw          $t4, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->r12;
    // 0x8023E940: sw          $t5, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->r13;
L_8023E944:
    // 0x8023E944: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x8023E948: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x8023E94C: sw          $t7, 0x18($t8)
    MEM_W(0X18, ctx->r24) = ctx->r15;
    // 0x8023E950: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8023E954: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x8023E958: sw          $t9, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->r25;
    // 0x8023E95C: jal         0x80247308
    // 0x8023E960: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    static_3_80247308(rdram, ctx);
        goto after_0;
    // 0x8023E960: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_0:
    // 0x8023E964: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x8023E968: lw          $t2, 0x0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X0);
    // 0x8023E96C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8023E970: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x8023E974: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x8023E978: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x8023E97C: bne         $t3, $t1, L_8023E990
    if (ctx->r11 != ctx->r9) {
        // 0x8023E980: nop
    
            goto L_8023E990;
    }
    // 0x8023E980: nop

    // 0x8023E984: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8023E988: jal         0x80247294
    // 0x8023E98C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    static_3_80247294(rdram, ctx);
        goto after_1;
    // 0x8023E98C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_1:
L_8023E990:
    // 0x8023E990: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023E994: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8023E998: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8023E99C: jr          $ra
    // 0x8023E9A0: nop

    return;
    // 0x8023E9A0: nop

;}
RECOMP_FUNC void D_8029FE3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029FEBC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8029FEC0: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8029FEC4: lwc1        $f4, 0x8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X8);
    // 0x8029FEC8: c.lt.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl < ctx->f12.fl;
    // 0x8029FECC: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x8029FED0: bc1fl       L_8029FEE4
    if (!c1cs) {
        // 0x8029FED4: neg.s       $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = -ctx->f12.fl;
            goto L_8029FEE4;
    }
    goto skip_0;
    // 0x8029FED4: neg.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = -ctx->f12.fl;
    skip_0:
    // 0x8029FED8: b           L_8029FEE4
    // 0x8029FEDC: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
        goto L_8029FEE4;
    // 0x8029FEDC: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    // 0x8029FEE0: neg.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = -ctx->f12.fl;
L_8029FEE4:
    // 0x8029FEE4: c.lt.s      $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.fl < ctx->f14.fl;
    // 0x8029FEE8: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x8029FEEC: bc1fl       L_8029FF00
    if (!c1cs) {
        // 0x8029FEF0: neg.s       $f0, $f14
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
            goto L_8029FF00;
    }
    goto skip_1;
    // 0x8029FEF0: neg.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
    skip_1:
    // 0x8029FEF4: b           L_8029FF00
    // 0x8029FEF8: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
        goto L_8029FF00;
    // 0x8029FEF8: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
    // 0x8029FEFC: neg.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
L_8029FF00:
    // 0x8029FF00: c.lt.s      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.fl < ctx->f4.fl;
    // 0x8029FF04: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x8029FF08: lwc1        $f0, 0x8($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X8);
    // 0x8029FF0C: bc1fl       L_8029FF20
    if (!c1cs) {
        // 0x8029FF10: neg.s       $f0, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
            goto L_8029FF20;
    }
    goto skip_2;
    // 0x8029FF10: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    skip_2:
    // 0x8029FF14: b           L_8029FF20
    // 0x8029FF18: mov.s       $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = ctx->f4.fl;
        goto L_8029FF20;
    // 0x8029FF18: mov.s       $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = ctx->f4.fl;
    // 0x8029FF1C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_8029FF20:
    // 0x8029FF20: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x8029FF24: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    // 0x8029FF28: bc1fl       L_8029FF40
    if (!c1cs) {
        // 0x8029FF2C: c.lt.s      $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
            goto L_8029FF40;
    }
    goto skip_3;
    // 0x8029FF2C: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    skip_3:
    // 0x8029FF30: mov.s       $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    ctx->f16.fl = ctx->f2.fl;
    // 0x8029FF34: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
    // 0x8029FF38: mov.s       $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = ctx->f16.fl;
    // 0x8029FF3C: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
L_8029FF40:
    // 0x8029FF40: nop

    // 0x8029FF44: bc1fl       L_8029FF58
    if (!c1cs) {
        // 0x8029FF48: add.s       $f6, $f12, $f14
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f12.fl + ctx->f14.fl;
            goto L_8029FF58;
    }
    goto skip_4;
    // 0x8029FF48: add.s       $f6, $f12, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f12.fl + ctx->f14.fl;
    skip_4:
    // 0x8029FF4C: mov.s       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    ctx->f14.fl = ctx->f2.fl;
    // 0x8029FF50: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x8029FF54: add.s       $f6, $f12, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f12.fl + ctx->f14.fl;
L_8029FF58:
    // 0x8029FF58: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8029FF5C: nop

    // 0x8029FF60: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8029FF64: jr          $ra
    // 0x8029FF68: add.s       $f0, $f2, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f10.fl;
    return;
    // 0x8029FF68: add.s       $f0, $f2, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f10.fl;
;}
RECOMP_FUNC void D_80244A40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80244A40: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80244A44: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x80244A48: bne         $t6, $zero, L_80244A58
    if (ctx->r14 != 0) {
        // 0x80244A4C: nop
    
            goto L_80244A58;
    }
    // 0x80244A4C: nop

    // 0x80244A50: jr          $ra
    // 0x80244A54: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80244A54: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80244A58:
    // 0x80244A58: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x80244A5C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80244A60: jr          $ra
    // 0x80244A64: nop

    return;
    // 0x80244A64: nop

;}
RECOMP_FUNC void D_80281FA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282020: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80282024: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80282028: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8028202C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80282030: addiu       $v0, $a0, 0x7FFF
    ctx->r2 = ADD32(ctx->r4, 0X7FFF);
    // 0x80282034: lbu         $v0, 0x6DB7($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X6DB7);
    // 0x80282038: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8028203C: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80282040: beq         $v0, $at, L_8028205C
    if (ctx->r2 == ctx->r1) {
        // 0x80282044: addiu       $a1, $s0, 0x70
        ctx->r5 = ADD32(ctx->r16, 0X70);
            goto L_8028205C;
    }
    // 0x80282044: addiu       $a1, $s0, 0x70
    ctx->r5 = ADD32(ctx->r16, 0X70);
    // 0x80282048: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x8028204C: beql        $v0, $at, L_802820B0
    if (ctx->r2 == ctx->r1) {
        // 0x80282050: lui         $at, 0x41A0
        ctx->r1 = S32(0X41A0 << 16);
            goto L_802820B0;
    }
    goto skip_0;
    // 0x80282050: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    skip_0:
    // 0x80282054: b           L_8028211C
    // 0x80282058: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
        goto L_8028211C;
    // 0x80282058: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
L_8028205C:
    // 0x8028205C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80282060: jal         0x802B1FE4
    // 0x80282064: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    static_3_802B1FE4(rdram, ctx);
        goto after_0;
    // 0x80282064: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80282068: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x8028206C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80282070: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x80282074: lui         $a2, 0xC3A2
    ctx->r6 = S32(0XC3A2 << 16);
    // 0x80282078: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8028207C: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x80282080: lui         $a3, 0x4416
    ctx->r7 = S32(0X4416 << 16);
    // 0x80282084: jal         0x802AFF70
    // 0x80282088: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    static_3_802AFF70(rdram, ctx);
        goto after_1;
    // 0x80282088: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x8028208C: addiu       $t6, $zero, 0xC
    ctx->r14 = ADD32(0, 0XC);
    // 0x80282090: addiu       $at, $s0, 0x7FFF
    ctx->r1 = ADD32(ctx->r16, 0X7FFF);
    // 0x80282094: sb          $t6, 0x6DB7($at)
    MEM_B(0X6DB7, ctx->r1) = ctx->r14;
    // 0x80282098: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8028209C: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x802820A0: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x802820A4: b           L_80282118
    // 0x802820A8: swc1        $f6, -0x1248($at)
    MEM_W(-0X1248, ctx->r1) = ctx->f6.u32l;
        goto L_80282118;
    // 0x802820A8: swc1        $f6, -0x1248($at)
    MEM_W(-0X1248, ctx->r1) = ctx->f6.u32l;
    // 0x802820AC: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
L_802820B0:
    // 0x802820B0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802820B4: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x802820B8: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x802820BC: lwc1        $f10, -0x1248($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1248);
    // 0x802820C0: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x802820C4: nop

    // 0x802820C8: bc1fl       L_8028211C
    if (!c1cs) {
        // 0x802820CC: ori         $at, $zero, 0x8000
        ctx->r1 = 0 | 0X8000;
            goto L_8028211C;
    }
    goto skip_1;
    // 0x802820CC: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    skip_1:
    // 0x802820D0: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802820D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802820D8: jal         0x802F7220
    // 0x802820DC: addiu       $a0, $a0, 0x6D0
    ctx->r4 = ADD32(ctx->r4, 0X6D0);
    static_3_802F7220(rdram, ctx);
        goto after_2;
    // 0x802820DC: addiu       $a0, $a0, 0x6D0
    ctx->r4 = ADD32(ctx->r4, 0X6D0);
    after_2:
    // 0x802820E0: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x802820E4: lw          $t7, 0x8A4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X8A4);
    // 0x802820E8: lw          $t8, 0x8A0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X8A0);
    // 0x802820EC: lw          $t0, 0x89C($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X89C);
    // 0x802820F0: addiu       $a0, $v0, 0x6D0
    ctx->r4 = ADD32(ctx->r2, 0X6D0);
    // 0x802820F4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x802820F8: jal         0x802F6C24
    // 0x802820FC: addu        $a1, $t9, $t0
    ctx->r5 = ADD32(ctx->r25, ctx->r8);
    static_3_802F6C24(rdram, ctx);
        goto after_3;
    // 0x802820FC: addu        $a1, $t9, $t0
    ctx->r5 = ADD32(ctx->r25, ctx->r8);
    after_3:
    // 0x80282100: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x80282104: jal         0x8030CB24
    // 0x80282108: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    static_3_8030CB24(rdram, ctx);
        goto after_4;
    // 0x80282108: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    after_4:
    // 0x8028210C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x80282110: jal         0x802AFFE0
    // 0x80282114: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802AFFE0(rdram, ctx);
        goto after_5;
    // 0x80282114: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
L_80282118:
    // 0x80282118: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
L_8028211C:
    // 0x8028211C: addu        $v0, $s0, $at
    ctx->r2 = ADD32(ctx->r16, ctx->r1);
    // 0x80282120: lwc1        $f16, 0x6DB8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X6DB8);
    // 0x80282124: lwc1        $f18, 0x3C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80282128: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x8028212C: swc1        $f4, 0x6DB8($v0)
    MEM_W(0X6DB8, ctx->r2) = ctx->f4.u32l;
    // 0x80282130: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80282134: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80282138: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8028213C: jr          $ra
    // 0x80282140: nop

    return;
    // 0x80282140: nop

;}
