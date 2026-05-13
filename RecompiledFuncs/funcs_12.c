#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void D_80299444(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802994C4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802994C8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802994CC: jr          $ra
    // 0x802994D0: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x802994D0: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void D_802E7C40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E7CC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802E7CC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802E7CC8: lw          $v1, 0xC($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC);
    // 0x802E7CCC: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802E7CD0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E7CD4: bne         $v1, $zero, L_802E7CFC
    if (ctx->r3 != 0) {
        // 0x802E7CD8: addiu       $a0, $a0, 0x0
        ctx->r4 = ADD32(ctx->r4, 0X0);
            goto L_802E7CFC;
    }
    // 0x802E7CD8: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802E7CDC: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802E7CE0: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802E7CE4: jal         0x80231A24
    // 0x802E7CE8: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x802E7CE8: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x802E7CEC: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x802E7CF0: addiu       $t6, $zero, 0x29A
    ctx->r14 = ADD32(0, 0X29A);
    // 0x802E7CF4: sw          $t6, 0x0($zero)
    MEM_W(0X0, 0) = ctx->r14;
    // 0x802E7CF8: lw          $v1, 0xC($a2)
    ctx->r3 = MEM_W(ctx->r6, 0XC);
L_802E7CFC:
    // 0x802E7CFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802E7D00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802E7D04: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x802E7D08: jr          $ra
    // 0x802E7D0C: nop

    return;
    // 0x802E7D0C: nop

;}
RECOMP_FUNC void D_802B94EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B956C: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x802B9570: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x802B9574: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802B9578: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x802B957C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x802B9580: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B9584: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802B9588: addu        $v0, $a0, $t7
    ctx->r2 = ADD32(ctx->r4, ctx->r15);
    // 0x802B958C: lbu         $t8, 0x0($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X0);
    // 0x802B9590: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x802B9594: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802B9598: bnel        $t8, $zero, L_802B95D4
    if (ctx->r24 != 0) {
        // 0x802B959C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802B95D4;
    }
    goto skip_0;
    // 0x802B959C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802B95A0: swc1        $f12, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f12.u32l;
    // 0x802B95A4: sb          $t6, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r14;
    // 0x802B95A8: jal         0x80207130
    // 0x802B95AC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    static_3_80207130(rdram, ctx);
        goto after_0;
    // 0x802B95AC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x802B95B0: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x802B95B4: cvt.s.d     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f4.fl = CVT_S_D(ctx->f0.d);
    // 0x802B95B8: lbu         $a0, 0x27($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X27);
    // 0x802B95BC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802B95C0: sb          $zero, 0x1($v0)
    MEM_B(0X1, ctx->r2) = 0;
    // 0x802B95C4: swc1        $f4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f4.u32l;
    // 0x802B95C8: jal         0x8022C254
    // 0x802B95CC: sb          $t9, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r25;
    static_3_8022C254(rdram, ctx);
        goto after_1;
    // 0x802B95CC: sb          $t9, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r25;
    after_1:
    // 0x802B95D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802B95D4:
    // 0x802B95D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802B95D8: jr          $ra
    // 0x802B95DC: nop

    return;
    // 0x802B95DC: nop

;}
RECOMP_FUNC void D_802D0B40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D0BC0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802D0BC4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802D0BC8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802D0BCC: bne         $a0, $zero, L_802D0BE4
    if (ctx->r4 != 0) {
        // 0x802D0BD0: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_802D0BE4;
    }
    // 0x802D0BD0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802D0BD4: jal         0x802C67EC
    // 0x802D0BD8: addiu       $a0, $zero, 0x4174
    ctx->r4 = ADD32(0, 0X4174);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802D0BD8: addiu       $a0, $zero, 0x4174
    ctx->r4 = ADD32(0, 0X4174);
    after_0:
    // 0x802D0BDC: beq         $v0, $zero, L_802D0C20
    if (ctx->r2 == 0) {
        // 0x802D0BE0: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_802D0C20;
    }
    // 0x802D0BE0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_802D0BE4:
    // 0x802D0BE4: jal         0x80308668
    // 0x802D0BE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80308668(rdram, ctx);
        goto after_1;
    // 0x802D0BE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x802D0BEC: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802D0BF0: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802D0BF4: sw          $t6, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r14;
    // 0x802D0BF8: jal         0x8031DCDC
    // 0x802D0BFC: addiu       $a0, $s0, 0x84
    ctx->r4 = ADD32(ctx->r16, 0X84);
    static_3_8031DCDC(rdram, ctx);
        goto after_2;
    // 0x802D0BFC: addiu       $a0, $s0, 0x84
    ctx->r4 = ADD32(ctx->r16, 0X84);
    after_2:
    // 0x802D0C00: jal         0x80305738
    // 0x802D0C04: addiu       $a0, $s0, 0x1B4
    ctx->r4 = ADD32(ctx->r16, 0X1B4);
    static_3_80305738(rdram, ctx);
        goto after_3;
    // 0x802D0C04: addiu       $a0, $s0, 0x1B4
    ctx->r4 = ADD32(ctx->r16, 0X1B4);
    after_3:
    // 0x802D0C08: lui         $a3, 0x8029
    ctx->r7 = S32(0X8029 << 16);
    // 0x802D0C0C: addiu       $a3, $a3, -0x40D0
    ctx->r7 = ADD32(ctx->r7, -0X40D0);
    // 0x802D0C10: addiu       $a0, $s0, 0xE10
    ctx->r4 = ADD32(ctx->r16, 0XE10);
    // 0x802D0C14: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x802D0C18: jal         0x802C6930
    // 0x802D0C1C: addiu       $a2, $zero, 0x448
    ctx->r6 = ADD32(0, 0X448);
    static_3_802C6930(rdram, ctx);
        goto after_4;
    // 0x802D0C1C: addiu       $a2, $zero, 0x448
    ctx->r6 = ADD32(0, 0X448);
    after_4:
L_802D0C20:
    // 0x802D0C20: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802D0C24: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x802D0C28: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802D0C2C: jr          $ra
    // 0x802D0C30: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x802D0C30: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void D_802389E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802389E0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802389E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802389E8: addiu       $t6, $zero, 0xD
    ctx->r14 = ADD32(0, 0XD);
    // 0x802389EC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802389F0: sh          $t6, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r14;
    // 0x802389F4: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x802389F8: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    // 0x802389FC: jal         0x8023F37C
    // 0x80238A00: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_8023F37C(rdram, ctx);
        goto after_0;
    // 0x80238A00: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80238A04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80238A08: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80238A0C: jr          $ra
    // 0x80238A10: nop

    return;
    // 0x80238A10: nop

;}
RECOMP_FUNC void D_802821D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282254: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80282258: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8028225C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80282260: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x80282264: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80282268: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8028226C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80282270: sw          $a1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r5;
    // 0x80282274: sw          $t6, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r14;
    // 0x80282278: swc1        $f12, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f12.u32l;
    // 0x8028227C: swc1        $f4, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f4.u32l;
    // 0x80282280: jal         0x80224CA8
    // 0x80282284: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    static_3_80224CA8(rdram, ctx);
        goto after_0;
    // 0x80282284: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    after_0:
    // 0x80282288: jal         0x8030A9AC
    // 0x8028228C: nop

    static_3_8030A9AC(rdram, ctx);
        goto after_1;
    // 0x8028228C: nop

    after_1:
    // 0x80282290: jal         0x80224CA8
    // 0x80282294: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    static_3_80224CA8(rdram, ctx);
        goto after_2;
    // 0x80282294: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    after_2:
    // 0x80282298: jal         0x80224CA8
    // 0x8028229C: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    static_3_80224CA8(rdram, ctx);
        goto after_3;
    // 0x8028229C: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    after_3:
    // 0x802822A0: jal         0x80224CA8
    // 0x802822A4: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    static_3_80224CA8(rdram, ctx);
        goto after_4;
    // 0x802822A4: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    after_4:
    // 0x802822A8: jal         0x80224CA8
    // 0x802822AC: addiu       $a0, $zero, 0x3F
    ctx->r4 = ADD32(0, 0X3F);
    static_3_80224CA8(rdram, ctx);
        goto after_5;
    // 0x802822AC: addiu       $a0, $zero, 0x3F
    ctx->r4 = ADD32(0, 0X3F);
    after_5:
    // 0x802822B0: jal         0x80224CA8
    // 0x802822B4: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    static_3_80224CA8(rdram, ctx);
        goto after_6;
    // 0x802822B4: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    after_6:
    // 0x802822B8: jal         0x80224CA8
    // 0x802822BC: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    static_3_80224CA8(rdram, ctx);
        goto after_7;
    // 0x802822BC: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    after_7:
    // 0x802822C0: jal         0x80224CA8
    // 0x802822C4: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    static_3_80224CA8(rdram, ctx);
        goto after_8;
    // 0x802822C4: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    after_8:
    // 0x802822C8: jal         0x80224CA8
    // 0x802822CC: addiu       $a0, $zero, 0x2A
    ctx->r4 = ADD32(0, 0X2A);
    static_3_80224CA8(rdram, ctx);
        goto after_9;
    // 0x802822CC: addiu       $a0, $zero, 0x2A
    ctx->r4 = ADD32(0, 0X2A);
    after_9:
    // 0x802822D0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802822D4: jal         0x80205AA0
    // 0x802822D8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_80205AA0(rdram, ctx);
        goto after_10;
    // 0x802822D8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_10:
    // 0x802822DC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802822E0: jal         0x80205EBC
    // 0x802822E4: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    static_3_80205EBC(rdram, ctx);
        goto after_11;
    // 0x802822E4: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    after_11:
    // 0x802822E8: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x802822EC: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x802822F0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802822F4: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x802822F8: jal         0x80205E0C
    // 0x802822FC: sw          $t7, 0x7168($v0)
    MEM_W(0X7168, ctx->r2) = ctx->r15;
    static_3_80205E0C(rdram, ctx);
        goto after_12;
    // 0x802822FC: sw          $t7, 0x7168($v0)
    MEM_W(0X7168, ctx->r2) = ctx->r15;
    after_12:
    // 0x80282300: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x80282304: jal         0x802B0078
    // 0x80282308: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    static_3_802B0078(rdram, ctx);
        goto after_13;
    // 0x80282308: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    after_13:
    // 0x8028230C: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x80282310: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80282314: addiu       $t9, $zero, 0x64
    ctx->r25 = ADD32(0, 0X64);
    // 0x80282318: sb          $t8, 0x716C($v0)
    MEM_B(0X716C, ctx->r2) = ctx->r24;
    // 0x8028231C: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x80282320: lui         $at, 0xC0E0
    ctx->r1 = S32(0XC0E0 << 16);
    // 0x80282324: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80282328: sb          $t9, 0x716D($v0)
    MEM_B(0X716D, ctx->r2) = ctx->r25;
    // 0x8028232C: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x80282330: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80282334: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80282338: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8028233C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80282340: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80282344: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80282348: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8028234C: jal         0x8030890C
    // 0x80282350: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    static_3_8030890C(rdram, ctx);
        goto after_14;
    // 0x80282350: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    after_14:
    // 0x80282354: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x80282358: addiu       $t1, $t1, 0x0
    ctx->r9 = ADD32(ctx->r9, 0X0);
    // 0x8028235C: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x80282360: addiu       $v0, $sp, 0x34
    ctx->r2 = ADD32(ctx->r29, 0X34);
    // 0x80282364: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x80282368: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x8028236C: lw          $t3, 0x4($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X4);
    // 0x80282370: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x80282374: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x80282378: lw          $at, 0x8($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X8);
    // 0x8028237C: sw          $at, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r1;
    // 0x80282380: lw          $t3, 0xC($t1)
    ctx->r11 = MEM_W(ctx->r9, 0XC);
    // 0x80282384: sw          $t3, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r11;
    // 0x80282388: lw          $at, 0x10($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X10);
    // 0x8028238C: sw          $at, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r1;
    // 0x80282390: lw          $t3, 0x14($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X14);
    // 0x80282394: sw          $t3, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r11;
    // 0x80282398: lw          $at, 0x18($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X18);
    // 0x8028239C: sw          $at, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r1;
    // 0x802823A0: lbu         $t4, 0x0($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X0);
    // 0x802823A4: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802823A8: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x802823AC: addu        $t6, $v0, $t5
    ctx->r14 = ADD32(ctx->r2, ctx->r13);
    // 0x802823B0: lwc1        $f0, 0x0($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X0);
    // 0x802823B4: addiu       $a0, $a0, 0x6B8
    ctx->r4 = ADD32(ctx->r4, 0X6B8);
    // 0x802823B8: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x802823BC: jal         0x80303778
    // 0x802823C0: nop

    static_3_80303778(rdram, ctx);
        goto after_15;
    // 0x802823C0: nop

    after_15:
    // 0x802823C4: addiu       $at, $s0, 0x7FFF
    ctx->r1 = ADD32(ctx->r16, 0X7FFF);
    // 0x802823C8: sb          $zero, 0x6DB5($at)
    MEM_B(0X6DB5, ctx->r1) = 0;
    // 0x802823CC: sb          $zero, 0x6DB6($at)
    MEM_B(0X6DB6, ctx->r1) = 0;
    // 0x802823D0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802823D4: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x802823D8: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x802823DC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802823E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802823E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802823E8: jal         0x80309D48
    // 0x802823EC: swc1        $f8, -0x1248($at)
    MEM_W(-0X1248, ctx->r1) = ctx->f8.u32l;
    static_3_80309D48(rdram, ctx);
        goto after_16;
    // 0x802823EC: swc1        $f8, -0x1248($at)
    MEM_W(-0X1248, ctx->r1) = ctx->f8.u32l;
    after_16:
    // 0x802823F0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802823F4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802823F8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x802823FC: jr          $ra
    // 0x80282400: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80282400: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void D_802E7EE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E7F68: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x802E7F6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802E7F70: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x802E7F74: bne         $a1, $zero, L_802E7F98
    if (ctx->r5 != 0) {
        // 0x802E7F78: sw          $a1, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->r5;
            goto L_802E7F98;
    }
    // 0x802E7F78: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x802E7F7C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E7F80: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802E7F84: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802E7F88: jal         0x80231A24
    // 0x802E7F8C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x802E7F8C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x802E7F90: addiu       $t7, $zero, 0x29A
    ctx->r15 = ADD32(0, 0X29A);
    // 0x802E7F94: sw          $t7, 0x0($zero)
    MEM_W(0X0, 0) = ctx->r15;
L_802E7F98:
    // 0x802E7F98: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x802E7F9C: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x802E7FA0: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x802E7FA4: bne         $t8, $zero, L_802E7FC8
    if (ctx->r24 != 0) {
        // 0x802E7FA8: addiu       $a2, $sp, 0x2C
        ctx->r6 = ADD32(ctx->r29, 0X2C);
            goto L_802E7FC8;
    }
    // 0x802E7FA8: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x802E7FAC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E7FB0: jal         0x80231A24
    // 0x802E7FB4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_1;
    // 0x802E7FB4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_1:
    // 0x802E7FB8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802E7FBC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802E7FC0: b           L_802E8004
    // 0x802E7FC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802E8004;
    // 0x802E7FC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802E7FC8:
    // 0x802E7FC8: jal         0x80318498
    // 0x802E7FCC: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    static_3_80318498(rdram, ctx);
        goto after_2;
    // 0x802E7FCC: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    after_2:
    // 0x802E7FD0: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x802E7FD4: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x802E7FD8: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x802E7FDC: jal         0x80318498
    // 0x802E7FE0: addiu       $a3, $sp, 0x34
    ctx->r7 = ADD32(ctx->r29, 0X34);
    static_3_80318498(rdram, ctx);
        goto after_3;
    // 0x802E7FE0: addiu       $a3, $sp, 0x34
    ctx->r7 = ADD32(ctx->r29, 0X34);
    after_3:
    // 0x802E7FE4: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x802E7FE8: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x802E7FEC: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x802E7FF0: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x802E7FF4: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x802E7FF8: jal         0x8022ADA8
    // 0x802E7FFC: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    static_3_8022ADA8(rdram, ctx);
        goto after_4;
    // 0x802E7FFC: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    after_4:
    // 0x802E8000: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802E8004:
    // 0x802E8004: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x802E8008: jr          $ra
    // 0x802E800C: nop

    return;
    // 0x802E800C: nop

;}
RECOMP_FUNC void D_8028B760(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028B7E0: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x8028B7E4: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x8028B7E8: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x8028B7EC: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x8028B7F0: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8028B7F4: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x8028B7F8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8028B7FC: sw          $a2, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r6;
    // 0x8028B800: sb          $zero, 0x8($a0)
    MEM_B(0X8, ctx->r4) = 0;
    // 0x8028B804: sw          $a3, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r7;
    // 0x8028B808: sb          $zero, 0x234($a0)
    MEM_B(0X234, ctx->r4) = 0;
    // 0x8028B80C: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x8028B810: jal         0x802BCF2C
    // 0x8028B814: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    static_3_802BCF2C(rdram, ctx);
        goto after_0;
    // 0x8028B814: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    after_0:
    // 0x8028B818: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x8028B81C: lbu         $t7, 0x0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X0);
    // 0x8028B820: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x8028B824: bnel        $t7, $at, L_8028B838
    if (ctx->r15 != ctx->r1) {
        // 0x8028B828: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8028B838;
    }
    goto skip_0;
    // 0x8028B828: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x8028B82C: b           L_8028B838
    // 0x8028B830: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8028B838;
    // 0x8028B830: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8028B834: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8028B838:
    // 0x8028B838: beq         $v0, $zero, L_8028B920
    if (ctx->r2 == 0) {
        // 0x8028B83C: nop
    
            goto L_8028B920;
    }
    // 0x8028B83C: nop

    // 0x8028B840: jal         0x80233CE8
    // 0x8028B844: nop

    static_3_80233CE8(rdram, ctx);
        goto after_1;
    // 0x8028B844: nop

    after_1:
    // 0x8028B848: sw          $v0, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r2;
    // 0x8028B84C: addiu       $t8, $zero, 0x90
    ctx->r24 = ADD32(0, 0X90);
    // 0x8028B850: addiu       $t9, $zero, 0x34
    ctx->r25 = ADD32(0, 0X34);
    // 0x8028B854: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
    // 0x8028B858: addiu       $t1, $zero, 0xC8
    ctx->r9 = ADD32(0, 0XC8);
    // 0x8028B85C: addiu       $t2, $zero, 0x64
    ctx->r10 = ADD32(0, 0X64);
    // 0x8028B860: addiu       $t3, $zero, 0xA
    ctx->r11 = ADD32(0, 0XA);
    // 0x8028B864: addiu       $t4, $zero, 0xB
    ctx->r12 = ADD32(0, 0XB);
    // 0x8028B868: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8028B86C: sw          $t5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r13;
    // 0x8028B870: sw          $t4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r12;
    // 0x8028B874: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    // 0x8028B878: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x8028B87C: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x8028B880: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x8028B884: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x8028B888: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8028B88C: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x8028B890: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x8028B894: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8028B898: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8028B89C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8028B8A0: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x8028B8A4: addiu       $a2, $zero, 0x39
    ctx->r6 = ADD32(0, 0X39);
    // 0x8028B8A8: jal         0x802344F4
    // 0x8028B8AC: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    static_3_802344F4(rdram, ctx);
        goto after_2;
    // 0x8028B8AC: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_2:
    // 0x8028B8B0: jal         0x80233CE8
    // 0x8028B8B4: nop

    static_3_80233CE8(rdram, ctx);
        goto after_3;
    // 0x8028B8B4: nop

    after_3:
    // 0x8028B8B8: sw          $v0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r2;
    // 0x8028B8BC: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x8028B8C0: addiu       $t7, $zero, 0xC8
    ctx->r15 = ADD32(0, 0XC8);
    // 0x8028B8C4: addiu       $t8, $zero, 0x64
    ctx->r24 = ADD32(0, 0X64);
    // 0x8028B8C8: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x8028B8CC: addiu       $t0, $zero, 0xB
    ctx->r8 = ADD32(0, 0XB);
    // 0x8028B8D0: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8028B8D4: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x8028B8D8: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x8028B8DC: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x8028B8E0: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x8028B8E4: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x8028B8E8: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x8028B8EC: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x8028B8F0: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x8028B8F4: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8028B8F8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8028B8FC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8028B900: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8028B904: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8028B908: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x8028B90C: addiu       $a2, $zero, 0x3A
    ctx->r6 = ADD32(0, 0X3A);
    // 0x8028B910: jal         0x802344F4
    // 0x8028B914: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    static_3_802344F4(rdram, ctx);
        goto after_4;
    // 0x8028B914: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_4:
    // 0x8028B918: b           L_8028BC20
    // 0x8028B91C: nop

        goto L_8028BC20;
    // 0x8028B91C: nop

L_8028B920:
    // 0x8028B920: jal         0x80233CE8
    // 0x8028B924: nop

    static_3_80233CE8(rdram, ctx);
        goto after_5;
    // 0x8028B924: nop

    after_5:
    // 0x8028B928: sw          $v0, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->r2;
    // 0x8028B92C: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8028B930: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x8028B934: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8028B938: addiu       $t5, $zero, 0x64
    ctx->r13 = ADD32(0, 0X64);
    // 0x8028B93C: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x8028B940: addiu       $t7, $zero, 0xB
    ctx->r15 = ADD32(0, 0XB);
    // 0x8028B944: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8028B948: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x8028B94C: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x8028B950: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x8028B954: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x8028B958: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x8028B95C: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x8028B960: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x8028B964: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x8028B968: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8028B96C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8028B970: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x8028B974: addiu       $a2, $zero, 0x2D
    ctx->r6 = ADD32(0, 0X2D);
    // 0x8028B978: jal         0x802344F4
    // 0x8028B97C: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    static_3_802344F4(rdram, ctx);
        goto after_6;
    // 0x8028B97C: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_6:
    // 0x8028B980: jal         0x80233CE8
    // 0x8028B984: nop

    static_3_80233CE8(rdram, ctx);
        goto after_7;
    // 0x8028B984: nop

    after_7:
    // 0x8028B988: sw          $v0, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->r2;
    // 0x8028B98C: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x8028B990: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8028B994: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8028B998: addiu       $t2, $zero, 0x64
    ctx->r10 = ADD32(0, 0X64);
    // 0x8028B99C: addiu       $t3, $zero, 0xA
    ctx->r11 = ADD32(0, 0XA);
    // 0x8028B9A0: addiu       $t4, $zero, 0xB
    ctx->r12 = ADD32(0, 0XB);
    // 0x8028B9A4: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8028B9A8: sw          $t5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r13;
    // 0x8028B9AC: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x8028B9B0: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x8028B9B4: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x8028B9B8: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x8028B9BC: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x8028B9C0: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x8028B9C4: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x8028B9C8: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8028B9CC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8028B9D0: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x8028B9D4: addiu       $a2, $zero, 0x2E
    ctx->r6 = ADD32(0, 0X2E);
    // 0x8028B9D8: jal         0x802344F4
    // 0x8028B9DC: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    static_3_802344F4(rdram, ctx);
        goto after_8;
    // 0x8028B9DC: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_8:
    // 0x8028B9E0: jal         0x80233CE8
    // 0x8028B9E4: nop

    static_3_80233CE8(rdram, ctx);
        goto after_9;
    // 0x8028B9E4: nop

    after_9:
    // 0x8028B9E8: sw          $v0, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r2;
    // 0x8028B9EC: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8028B9F0: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x8028B9F4: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8028B9F8: addiu       $t9, $zero, 0x64
    ctx->r25 = ADD32(0, 0X64);
    // 0x8028B9FC: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
    // 0x8028BA00: addiu       $t1, $zero, 0xB
    ctx->r9 = ADD32(0, 0XB);
    // 0x8028BA04: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8028BA08: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x8028BA0C: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x8028BA10: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x8028BA14: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8028BA18: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x8028BA1C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8028BA20: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8028BA24: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x8028BA28: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8028BA2C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8028BA30: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x8028BA34: addiu       $a2, $zero, 0x2F
    ctx->r6 = ADD32(0, 0X2F);
    // 0x8028BA38: jal         0x802344F4
    // 0x8028BA3C: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    static_3_802344F4(rdram, ctx);
        goto after_10;
    // 0x8028BA3C: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_10:
    // 0x8028BA40: jal         0x80233CE8
    // 0x8028BA44: nop

    static_3_80233CE8(rdram, ctx);
        goto after_11;
    // 0x8028BA44: nop

    after_11:
    // 0x8028BA48: sw          $v0, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->r2;
    // 0x8028BA4C: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x8028BA50: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8028BA54: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8028BA58: addiu       $t6, $zero, 0x64
    ctx->r14 = ADD32(0, 0X64);
    // 0x8028BA5C: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x8028BA60: addiu       $t8, $zero, 0xB
    ctx->r24 = ADD32(0, 0XB);
    // 0x8028BA64: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8028BA68: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x8028BA6C: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x8028BA70: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x8028BA74: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x8028BA78: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x8028BA7C: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x8028BA80: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x8028BA84: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x8028BA88: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8028BA8C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8028BA90: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x8028BA94: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    // 0x8028BA98: jal         0x802344F4
    // 0x8028BA9C: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    static_3_802344F4(rdram, ctx);
        goto after_12;
    // 0x8028BA9C: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_12:
    // 0x8028BAA0: jal         0x80233CE8
    // 0x8028BAA4: nop

    static_3_80233CE8(rdram, ctx);
        goto after_13;
    // 0x8028BAA4: nop

    after_13:
    // 0x8028BAA8: sw          $v0, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->r2;
    // 0x8028BAAC: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8028BAB0: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8028BAB4: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8028BAB8: addiu       $t3, $zero, 0x64
    ctx->r11 = ADD32(0, 0X64);
    // 0x8028BABC: addiu       $t4, $zero, 0xA
    ctx->r12 = ADD32(0, 0XA);
    // 0x8028BAC0: addiu       $t5, $zero, 0xB
    ctx->r13 = ADD32(0, 0XB);
    // 0x8028BAC4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8028BAC8: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x8028BACC: sw          $t5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r13;
    // 0x8028BAD0: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x8028BAD4: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x8028BAD8: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x8028BADC: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x8028BAE0: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x8028BAE4: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x8028BAE8: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8028BAEC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8028BAF0: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x8028BAF4: addiu       $a2, $zero, 0x31
    ctx->r6 = ADD32(0, 0X31);
    // 0x8028BAF8: jal         0x802344F4
    // 0x8028BAFC: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    static_3_802344F4(rdram, ctx);
        goto after_14;
    // 0x8028BAFC: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_14:
    // 0x8028BB00: jal         0x80233CE8
    // 0x8028BB04: nop

    static_3_80233CE8(rdram, ctx);
        goto after_15;
    // 0x8028BB04: nop

    after_15:
    // 0x8028BB08: sw          $v0, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r2;
    // 0x8028BB0C: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x8028BB10: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8028BB14: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x8028BB18: addiu       $t0, $zero, 0x64
    ctx->r8 = ADD32(0, 0X64);
    // 0x8028BB1C: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
    // 0x8028BB20: addiu       $t2, $zero, 0xB
    ctx->r10 = ADD32(0, 0XB);
    // 0x8028BB24: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8028BB28: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    // 0x8028BB2C: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x8028BB30: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x8028BB34: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x8028BB38: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x8028BB3C: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x8028BB40: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8028BB44: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x8028BB48: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8028BB4C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8028BB50: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x8028BB54: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    // 0x8028BB58: jal         0x802344F4
    // 0x8028BB5C: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    static_3_802344F4(rdram, ctx);
        goto after_16;
    // 0x8028BB5C: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_16:
    // 0x8028BB60: jal         0x80233CE8
    // 0x8028BB64: nop

    static_3_80233CE8(rdram, ctx);
        goto after_17;
    // 0x8028BB64: nop

    after_17:
    // 0x8028BB68: sw          $v0, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->r2;
    // 0x8028BB6C: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8028BB70: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8028BB74: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8028BB78: addiu       $t7, $zero, 0x64
    ctx->r15 = ADD32(0, 0X64);
    // 0x8028BB7C: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x8028BB80: addiu       $t9, $zero, 0xB
    ctx->r25 = ADD32(0, 0XB);
    // 0x8028BB84: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8028BB88: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x8028BB8C: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x8028BB90: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x8028BB94: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x8028BB98: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x8028BB9C: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x8028BBA0: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x8028BBA4: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x8028BBA8: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8028BBAC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8028BBB0: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x8028BBB4: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    // 0x8028BBB8: jal         0x802344F4
    // 0x8028BBBC: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    static_3_802344F4(rdram, ctx);
        goto after_18;
    // 0x8028BBBC: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_18:
    // 0x8028BBC0: jal         0x80233CE8
    // 0x8028BBC4: nop

    static_3_80233CE8(rdram, ctx);
        goto after_19;
    // 0x8028BBC4: nop

    after_19:
    // 0x8028BBC8: sw          $v0, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r2;
    // 0x8028BBCC: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8028BBD0: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8028BBD4: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x8028BBD8: addiu       $t4, $zero, 0x64
    ctx->r12 = ADD32(0, 0X64);
    // 0x8028BBDC: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x8028BBE0: addiu       $t6, $zero, 0xB
    ctx->r14 = ADD32(0, 0XB);
    // 0x8028BBE4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8028BBE8: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x8028BBEC: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x8028BBF0: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x8028BBF4: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x8028BBF8: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x8028BBFC: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x8028BC00: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8028BC04: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x8028BC08: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8028BC0C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8028BC10: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x8028BC14: addiu       $a2, $zero, 0x34
    ctx->r6 = ADD32(0, 0X34);
    // 0x8028BC18: jal         0x802344F4
    // 0x8028BC1C: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    static_3_802344F4(rdram, ctx);
        goto after_20;
    // 0x8028BC1C: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_20:
L_8028BC20:
    // 0x8028BC20: jal         0x80233CE8
    // 0x8028BC24: nop

    static_3_80233CE8(rdram, ctx);
        goto after_21;
    // 0x8028BC24: nop

    after_21:
    // 0x8028BC28: sw          $v0, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->r2;
    // 0x8028BC2C: addiu       $t8, $zero, 0x29
    ctx->r24 = ADD32(0, 0X29);
    // 0x8028BC30: addiu       $t9, $zero, 0xAB
    ctx->r25 = ADD32(0, 0XAB);
    // 0x8028BC34: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
    // 0x8028BC38: addiu       $t1, $zero, 0xC8
    ctx->r9 = ADD32(0, 0XC8);
    // 0x8028BC3C: addiu       $t2, $zero, 0x64
    ctx->r10 = ADD32(0, 0X64);
    // 0x8028BC40: addiu       $t3, $zero, 0xA
    ctx->r11 = ADD32(0, 0XA);
    // 0x8028BC44: addiu       $t4, $zero, 0xB
    ctx->r12 = ADD32(0, 0XB);
    // 0x8028BC48: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8028BC4C: sw          $t5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r13;
    // 0x8028BC50: sw          $t4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r12;
    // 0x8028BC54: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    // 0x8028BC58: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x8028BC5C: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x8028BC60: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x8028BC64: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x8028BC68: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8028BC6C: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x8028BC70: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x8028BC74: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8028BC78: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8028BC7C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8028BC80: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x8028BC84: addiu       $a2, $zero, 0x3B
    ctx->r6 = ADD32(0, 0X3B);
    // 0x8028BC88: jal         0x802344F4
    // 0x8028BC8C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    static_3_802344F4(rdram, ctx);
        goto after_22;
    // 0x8028BC8C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_22:
    // 0x8028BC90: jal         0x80233CE8
    // 0x8028BC94: nop

    static_3_80233CE8(rdram, ctx);
        goto after_23;
    // 0x8028BC94: nop

    after_23:
    // 0x8028BC98: sw          $v0, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r2;
    // 0x8028BC9C: addiu       $t6, $zero, 0x29
    ctx->r14 = ADD32(0, 0X29);
    // 0x8028BCA0: addiu       $t7, $zero, 0xAB
    ctx->r15 = ADD32(0, 0XAB);
    // 0x8028BCA4: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x8028BCA8: addiu       $t9, $zero, 0xC8
    ctx->r25 = ADD32(0, 0XC8);
    // 0x8028BCAC: addiu       $t0, $zero, 0x64
    ctx->r8 = ADD32(0, 0X64);
    // 0x8028BCB0: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
    // 0x8028BCB4: addiu       $t2, $zero, 0xB
    ctx->r10 = ADD32(0, 0XB);
    // 0x8028BCB8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8028BCBC: sw          $t3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r11;
    // 0x8028BCC0: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
    // 0x8028BCC4: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x8028BCC8: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x8028BCCC: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x8028BCD0: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x8028BCD4: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8028BCD8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8028BCDC: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x8028BCE0: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x8028BCE4: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8028BCE8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8028BCEC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8028BCF0: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x8028BCF4: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x8028BCF8: jal         0x802344F4
    // 0x8028BCFC: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    static_3_802344F4(rdram, ctx);
        goto after_24;
    // 0x8028BCFC: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_24:
    // 0x8028BD00: jal         0x80233CE8
    // 0x8028BD04: nop

    static_3_80233CE8(rdram, ctx);
        goto after_25;
    // 0x8028BD04: nop

    after_25:
    // 0x8028BD08: sw          $v0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r2;
    // 0x8028BD0C: addiu       $t4, $zero, 0x8C
    ctx->r12 = ADD32(0, 0X8C);
    // 0x8028BD10: addiu       $t5, $zero, 0x6C
    ctx->r13 = ADD32(0, 0X6C);
    // 0x8028BD14: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x8028BD18: addiu       $t7, $zero, 0xC8
    ctx->r15 = ADD32(0, 0XC8);
    // 0x8028BD1C: addiu       $t8, $zero, 0x64
    ctx->r24 = ADD32(0, 0X64);
    // 0x8028BD20: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x8028BD24: addiu       $t0, $zero, 0xB
    ctx->r8 = ADD32(0, 0XB);
    // 0x8028BD28: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8028BD2C: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x8028BD30: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x8028BD34: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x8028BD38: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x8028BD3C: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x8028BD40: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x8028BD44: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x8028BD48: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x8028BD4C: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x8028BD50: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x8028BD54: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8028BD58: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8028BD5C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8028BD60: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x8028BD64: addiu       $a2, $zero, 0x39
    ctx->r6 = ADD32(0, 0X39);
    // 0x8028BD68: jal         0x802344F4
    // 0x8028BD6C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    static_3_802344F4(rdram, ctx);
        goto after_26;
    // 0x8028BD6C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_26:
    // 0x8028BD70: jal         0x80233CE8
    // 0x8028BD74: nop

    static_3_80233CE8(rdram, ctx);
        goto after_27;
    // 0x8028BD74: nop

    after_27:
    // 0x8028BD78: sw          $v0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r2;
    // 0x8028BD7C: addiu       $t2, $zero, 0x7
    ctx->r10 = ADD32(0, 0X7);
    // 0x8028BD80: addiu       $t3, $zero, 0xC8
    ctx->r11 = ADD32(0, 0XC8);
    // 0x8028BD84: addiu       $t4, $zero, 0x64
    ctx->r12 = ADD32(0, 0X64);
    // 0x8028BD88: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x8028BD8C: addiu       $t6, $zero, 0xB
    ctx->r14 = ADD32(0, 0XB);
    // 0x8028BD90: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8028BD94: sw          $t7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r15;
    // 0x8028BD98: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x8028BD9C: sw          $t5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r13;
    // 0x8028BDA0: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x8028BDA4: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x8028BDA8: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x8028BDAC: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x8028BDB0: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x8028BDB4: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8028BDB8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8028BDBC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8028BDC0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8028BDC4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8028BDC8: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x8028BDCC: addiu       $a2, $zero, 0x3A
    ctx->r6 = ADD32(0, 0X3A);
    // 0x8028BDD0: jal         0x802344F4
    // 0x8028BDD4: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    static_3_802344F4(rdram, ctx);
        goto after_28;
    // 0x8028BDD4: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_28:
    // 0x8028BDD8: jal         0x80233CE8
    // 0x8028BDDC: nop

    static_3_80233CE8(rdram, ctx);
        goto after_29;
    // 0x8028BDDC: nop

    after_29:
    // 0x8028BDE0: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x8028BDE4: addiu       $t8, $zero, 0x4C
    ctx->r24 = ADD32(0, 0X4C);
    // 0x8028BDE8: addiu       $t9, $zero, 0xAB
    ctx->r25 = ADD32(0, 0XAB);
    // 0x8028BDEC: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
    // 0x8028BDF0: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8028BDF4: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8028BDF8: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x8028BDFC: addiu       $t4, $zero, 0x64
    ctx->r12 = ADD32(0, 0X64);
    // 0x8028BE00: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x8028BE04: addiu       $t6, $zero, 0xB
    ctx->r14 = ADD32(0, 0XB);
    // 0x8028BE08: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8028BE0C: sw          $t7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r15;
    // 0x8028BE10: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x8028BE14: sw          $t5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r13;
    // 0x8028BE18: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x8028BE1C: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x8028BE20: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x8028BE24: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x8028BE28: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x8028BE2C: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x8028BE30: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8028BE34: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x8028BE38: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x8028BE3C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8028BE40: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x8028BE44: addiu       $a2, $zero, 0x3D
    ctx->r6 = ADD32(0, 0X3D);
    // 0x8028BE48: jal         0x802344F4
    // 0x8028BE4C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    static_3_802344F4(rdram, ctx);
        goto after_30;
    // 0x8028BE4C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_30:
    // 0x8028BE50: jal         0x80233CE8
    // 0x8028BE54: nop

    static_3_80233CE8(rdram, ctx);
        goto after_31;
    // 0x8028BE54: nop

    after_31:
    // 0x8028BE58: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8028BE5C: addiu       $t8, $zero, 0xE0
    ctx->r24 = ADD32(0, 0XE0);
    // 0x8028BE60: addiu       $t9, $zero, 0xAB
    ctx->r25 = ADD32(0, 0XAB);
    // 0x8028BE64: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
    // 0x8028BE68: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8028BE6C: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8028BE70: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x8028BE74: addiu       $t4, $zero, 0x64
    ctx->r12 = ADD32(0, 0X64);
    // 0x8028BE78: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x8028BE7C: addiu       $t6, $zero, 0xB
    ctx->r14 = ADD32(0, 0XB);
    // 0x8028BE80: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8028BE84: sw          $t7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r15;
    // 0x8028BE88: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x8028BE8C: sw          $t5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r13;
    // 0x8028BE90: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x8028BE94: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x8028BE98: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x8028BE9C: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x8028BEA0: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x8028BEA4: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x8028BEA8: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8028BEAC: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x8028BEB0: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x8028BEB4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8028BEB8: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x8028BEBC: addiu       $a2, $zero, 0x3E
    ctx->r6 = ADD32(0, 0X3E);
    // 0x8028BEC0: jal         0x802344F4
    // 0x8028BEC4: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    static_3_802344F4(rdram, ctx);
        goto after_32;
    // 0x8028BEC4: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_32:
    // 0x8028BEC8: jal         0x80233CE8
    // 0x8028BECC: nop

    static_3_80233CE8(rdram, ctx);
        goto after_33;
    // 0x8028BECC: nop

    after_33:
    // 0x8028BED0: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x8028BED4: addiu       $t8, $zero, 0x2D
    ctx->r24 = ADD32(0, 0X2D);
    // 0x8028BED8: addiu       $t9, $zero, 0xAB
    ctx->r25 = ADD32(0, 0XAB);
    // 0x8028BEDC: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
    // 0x8028BEE0: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8028BEE4: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8028BEE8: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x8028BEEC: addiu       $t4, $zero, 0x64
    ctx->r12 = ADD32(0, 0X64);
    // 0x8028BEF0: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x8028BEF4: addiu       $t6, $zero, 0xB
    ctx->r14 = ADD32(0, 0XB);
    // 0x8028BEF8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8028BEFC: sw          $t7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r15;
    // 0x8028BF00: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x8028BF04: sw          $t5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r13;
    // 0x8028BF08: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x8028BF0C: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x8028BF10: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x8028BF14: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x8028BF18: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x8028BF1C: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x8028BF20: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8028BF24: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x8028BF28: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x8028BF2C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8028BF30: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x8028BF34: addiu       $a2, $zero, 0x26
    ctx->r6 = ADD32(0, 0X26);
    // 0x8028BF38: jal         0x802344F4
    // 0x8028BF3C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    static_3_802344F4(rdram, ctx);
        goto after_34;
    // 0x8028BF3C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_34:
    // 0x8028BF40: jal         0x80233CE8
    // 0x8028BF44: nop

    static_3_80233CE8(rdram, ctx);
        goto after_35;
    // 0x8028BF44: nop

    after_35:
    // 0x8028BF48: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8028BF4C: addiu       $t8, $zero, 0x29
    ctx->r24 = ADD32(0, 0X29);
    // 0x8028BF50: addiu       $t9, $zero, 0x7E
    ctx->r25 = ADD32(0, 0X7E);
    // 0x8028BF54: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
    // 0x8028BF58: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8028BF5C: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8028BF60: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x8028BF64: addiu       $t4, $zero, 0x96
    ctx->r12 = ADD32(0, 0X96);
    // 0x8028BF68: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x8028BF6C: addiu       $t6, $zero, 0xB
    ctx->r14 = ADD32(0, 0XB);
    // 0x8028BF70: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8028BF74: sw          $t7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r15;
    // 0x8028BF78: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x8028BF7C: sw          $t5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r13;
    // 0x8028BF80: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x8028BF84: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x8028BF88: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x8028BF8C: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x8028BF90: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x8028BF94: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x8028BF98: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8028BF9C: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x8028BFA0: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x8028BFA4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8028BFA8: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x8028BFAC: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    // 0x8028BFB0: jal         0x802344F4
    // 0x8028BFB4: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    static_3_802344F4(rdram, ctx);
        goto after_36;
    // 0x8028BFB4: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_36:
    // 0x8028BFB8: jal         0x80233CE8
    // 0x8028BFBC: nop

    static_3_80233CE8(rdram, ctx);
        goto after_37;
    // 0x8028BFBC: nop

    after_37:
    // 0x8028BFC0: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x8028BFC4: addiu       $t8, $zero, 0x100
    ctx->r24 = ADD32(0, 0X100);
    // 0x8028BFC8: addiu       $t9, $zero, 0xAB
    ctx->r25 = ADD32(0, 0XAB);
    // 0x8028BFCC: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
    // 0x8028BFD0: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8028BFD4: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8028BFD8: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x8028BFDC: addiu       $t4, $zero, 0x64
    ctx->r12 = ADD32(0, 0X64);
    // 0x8028BFE0: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x8028BFE4: addiu       $t6, $zero, 0xB
    ctx->r14 = ADD32(0, 0XB);
    // 0x8028BFE8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8028BFEC: sw          $t7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r15;
    // 0x8028BFF0: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x8028BFF4: sw          $t5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r13;
    // 0x8028BFF8: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x8028BFFC: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x8028C000: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x8028C004: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x8028C008: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x8028C00C: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x8028C010: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8028C014: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x8028C018: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x8028C01C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8028C020: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x8028C024: addiu       $a2, $zero, 0x27
    ctx->r6 = ADD32(0, 0X27);
    // 0x8028C028: jal         0x802344F4
    // 0x8028C02C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    static_3_802344F4(rdram, ctx);
        goto after_38;
    // 0x8028C02C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_38:
    // 0x8028C030: jal         0x80233CE8
    // 0x8028C034: nop

    static_3_80233CE8(rdram, ctx);
        goto after_39;
    // 0x8028C034: nop

    after_39:
    // 0x8028C038: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    // 0x8028C03C: addiu       $t8, $zero, 0x115
    ctx->r24 = ADD32(0, 0X115);
    // 0x8028C040: addiu       $t9, $zero, 0x7E
    ctx->r25 = ADD32(0, 0X7E);
    // 0x8028C044: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
    // 0x8028C048: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8028C04C: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8028C050: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x8028C054: addiu       $t4, $zero, 0x96
    ctx->r12 = ADD32(0, 0X96);
    // 0x8028C058: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x8028C05C: addiu       $t6, $zero, 0xB
    ctx->r14 = ADD32(0, 0XB);
    // 0x8028C060: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8028C064: sw          $t7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r15;
    // 0x8028C068: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x8028C06C: sw          $t5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r13;
    // 0x8028C070: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x8028C074: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x8028C078: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x8028C07C: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x8028C080: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x8028C084: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x8028C088: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8028C08C: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x8028C090: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x8028C094: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8028C098: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x8028C09C: addiu       $a2, $zero, 0x29
    ctx->r6 = ADD32(0, 0X29);
    // 0x8028C0A0: jal         0x802344F4
    // 0x8028C0A4: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    static_3_802344F4(rdram, ctx);
        goto after_40;
    // 0x8028C0A4: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_40:
    // 0x8028C0A8: jal         0x80233CE8
    // 0x8028C0AC: nop

    static_3_80233CE8(rdram, ctx);
        goto after_41;
    // 0x8028C0AC: nop

    after_41:
    // 0x8028C0B0: sw          $v0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r2;
    // 0x8028C0B4: addiu       $t8, $zero, 0x9B
    ctx->r24 = ADD32(0, 0X9B);
    // 0x8028C0B8: addiu       $t9, $zero, 0xC2
    ctx->r25 = ADD32(0, 0XC2);
    // 0x8028C0BC: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
    // 0x8028C0C0: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8028C0C4: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8028C0C8: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x8028C0CC: addiu       $t4, $zero, 0x96
    ctx->r12 = ADD32(0, 0X96);
    // 0x8028C0D0: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x8028C0D4: addiu       $t6, $zero, 0xB
    ctx->r14 = ADD32(0, 0XB);
    // 0x8028C0D8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8028C0DC: sw          $t7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r15;
    // 0x8028C0E0: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x8028C0E4: sw          $t5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r13;
    // 0x8028C0E8: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x8028C0EC: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x8028C0F0: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x8028C0F4: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x8028C0F8: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x8028C0FC: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x8028C100: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8028C104: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x8028C108: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x8028C10C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8028C110: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x8028C114: addiu       $a2, $zero, 0x2A
    ctx->r6 = ADD32(0, 0X2A);
    // 0x8028C118: jal         0x802344F4
    // 0x8028C11C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    static_3_802344F4(rdram, ctx);
        goto after_42;
    // 0x8028C11C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_42:
    // 0x8028C120: jal         0x80233CE8
    // 0x8028C124: nop

    static_3_80233CE8(rdram, ctx);
        goto after_43;
    // 0x8028C124: nop

    after_43:
    // 0x8028C128: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x8028C12C: addiu       $t8, $zero, 0x28
    ctx->r24 = ADD32(0, 0X28);
    // 0x8028C130: addiu       $t9, $zero, 0x9B
    ctx->r25 = ADD32(0, 0X9B);
    // 0x8028C134: addiu       $t0, $zero, 0x96
    ctx->r8 = ADD32(0, 0X96);
    // 0x8028C138: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
    // 0x8028C13C: addiu       $t2, $zero, 0xB
    ctx->r10 = ADD32(0, 0XB);
    // 0x8028C140: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8028C144: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    // 0x8028C148: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x8028C14C: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x8028C150: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x8028C154: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x8028C158: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x8028C15C: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x8028C160: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8028C164: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8028C168: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8028C16C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x8028C170: addiu       $a2, $zero, 0x2B
    ctx->r6 = ADD32(0, 0X2B);
    // 0x8028C174: jal         0x802344F4
    // 0x8028C178: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    static_3_802344F4(rdram, ctx);
        goto after_44;
    // 0x8028C178: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_44:
    // 0x8028C17C: jal         0x80233CE8
    // 0x8028C180: nop

    static_3_80233CE8(rdram, ctx);
        goto after_45;
    // 0x8028C180: nop

    after_45:
    // 0x8028C184: sw          $v0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r2;
    // 0x8028C188: addiu       $t4, $zero, 0x28
    ctx->r12 = ADD32(0, 0X28);
    // 0x8028C18C: addiu       $t5, $zero, 0x9B
    ctx->r13 = ADD32(0, 0X9B);
    // 0x8028C190: addiu       $t6, $zero, 0x96
    ctx->r14 = ADD32(0, 0X96);
    // 0x8028C194: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x8028C198: addiu       $t8, $zero, 0xB
    ctx->r24 = ADD32(0, 0XB);
    // 0x8028C19C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8028C1A0: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x8028C1A4: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x8028C1A8: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x8028C1AC: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x8028C1B0: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x8028C1B4: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x8028C1B8: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x8028C1BC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8028C1C0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8028C1C4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8028C1C8: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x8028C1CC: addiu       $a2, $zero, 0x35
    ctx->r6 = ADD32(0, 0X35);
    // 0x8028C1D0: jal         0x802344F4
    // 0x8028C1D4: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    static_3_802344F4(rdram, ctx);
        goto after_46;
    // 0x8028C1D4: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_46:
    // 0x8028C1D8: jal         0x80233CE8
    // 0x8028C1DC: nop

    static_3_80233CE8(rdram, ctx);
        goto after_47;
    // 0x8028C1DC: nop

    after_47:
    // 0x8028C1E0: sw          $v0, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r2;
    // 0x8028C1E4: addiu       $t0, $zero, 0x9B
    ctx->r8 = ADD32(0, 0X9B);
    // 0x8028C1E8: addiu       $t1, $zero, 0x28
    ctx->r9 = ADD32(0, 0X28);
    // 0x8028C1EC: addiu       $t2, $zero, 0x96
    ctx->r10 = ADD32(0, 0X96);
    // 0x8028C1F0: addiu       $t3, $zero, 0xA
    ctx->r11 = ADD32(0, 0XA);
    // 0x8028C1F4: addiu       $t4, $zero, 0xB
    ctx->r12 = ADD32(0, 0XB);
    // 0x8028C1F8: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8028C1FC: sw          $t5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r13;
    // 0x8028C200: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x8028C204: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x8028C208: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x8028C20C: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x8028C210: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x8028C214: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x8028C218: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8028C21C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8028C220: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8028C224: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x8028C228: addiu       $a2, $zero, 0x2C
    ctx->r6 = ADD32(0, 0X2C);
    // 0x8028C22C: jal         0x802344F4
    // 0x8028C230: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    static_3_802344F4(rdram, ctx);
        goto after_48;
    // 0x8028C230: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_48:
    // 0x8028C234: jal         0x80233CE8
    // 0x8028C238: nop

    static_3_80233CE8(rdram, ctx);
        goto after_49;
    // 0x8028C238: nop

    after_49:
    // 0x8028C23C: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
    // 0x8028C240: addiu       $t6, $zero, 0x9B
    ctx->r14 = ADD32(0, 0X9B);
    // 0x8028C244: addiu       $t7, $zero, 0x28
    ctx->r15 = ADD32(0, 0X28);
    // 0x8028C248: addiu       $t8, $zero, 0x96
    ctx->r24 = ADD32(0, 0X96);
    // 0x8028C24C: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x8028C250: addiu       $t0, $zero, 0xB
    ctx->r8 = ADD32(0, 0XB);
    // 0x8028C254: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8028C258: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x8028C25C: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x8028C260: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x8028C264: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x8028C268: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8028C26C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8028C270: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x8028C274: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8028C278: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8028C27C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8028C280: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x8028C284: addiu       $a2, $zero, 0x36
    ctx->r6 = ADD32(0, 0X36);
    // 0x8028C288: jal         0x802344F4
    // 0x8028C28C: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    static_3_802344F4(rdram, ctx);
        goto after_50;
    // 0x8028C28C: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_50:
    // 0x8028C290: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x8028C294: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8028C298: addiu       $v1, $s0, 0x7C
    ctx->r3 = ADD32(ctx->r16, 0X7C);
L_8028C29C:
    // 0x8028C29C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8028C2A0: sw          $v1, 0x20C($v0)
    MEM_W(0X20C, ctx->r2) = ctx->r3;
    // 0x8028C2A4: swc1        $f0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f0.u32l;
    // 0x8028C2A8: lw          $t2, 0x20C($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X20C);
    // 0x8028C2AC: swc1        $f0, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->f0.u32l;
    // 0x8028C2B0: lw          $a0, 0x20C($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X20C);
    // 0x8028C2B4: sw          $a1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r5;
    // 0x8028C2B8: sw          $v1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r3;
    // 0x8028C2BC: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    // 0x8028C2C0: jal         0x8022970C
    // 0x8028C2C4: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    func_8022970C(rdram, ctx);
        goto after_51;
    // 0x8028C2C4: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    after_51:
    // 0x8028C2C8: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x8028C2CC: lw          $v0, 0x5C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X5C);
    // 0x8028C2D0: lw          $v1, 0x54($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X54);
    // 0x8028C2D4: addiu       $a1, $a1, 0x50
    ctx->r5 = ADD32(ctx->r5, 0X50);
    // 0x8028C2D8: slti        $at, $a1, 0x190
    ctx->r1 = SIGNED(ctx->r5) < 0X190 ? 1 : 0;
    // 0x8028C2DC: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8028C2E0: bne         $at, $zero, L_8028C29C
    if (ctx->r1 != 0) {
        // 0x8028C2E4: addiu       $v1, $v1, 0x50
        ctx->r3 = ADD32(ctx->r3, 0X50);
            goto L_8028C29C;
    }
    // 0x8028C2E4: addiu       $v1, $v1, 0x50
    ctx->r3 = ADD32(ctx->r3, 0X50);
    // 0x8028C2E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8028C2EC: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_8028C2F0:
    // 0x8028C2F0: lw          $t3, 0x210($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X210);
    // 0x8028C2F4: lw          $t4, 0x20C($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X20C);
    // 0x8028C2F8: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8028C2FC: slti        $at, $a2, 0x4
    ctx->r1 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
    // 0x8028C300: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8028C304: bne         $at, $zero, L_8028C2F0
    if (ctx->r1 != 0) {
        // 0x8028C308: sw          $t3, 0x48($t4)
        MEM_W(0X48, ctx->r12) = ctx->r11;
            goto L_8028C2F0;
    }
    // 0x8028C308: sw          $t3, 0x48($t4)
    MEM_W(0X48, ctx->r12) = ctx->r11;
    // 0x8028C30C: lw          $t5, 0x20C($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X20C);
    // 0x8028C310: lw          $t6, 0x20C($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X20C);
    // 0x8028C314: addiu       $v0, $s0, 0x4
    ctx->r2 = ADD32(ctx->r16, 0X4);
    // 0x8028C318: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x8028C31C: sw          $t5, 0x48($t6)
    MEM_W(0X48, ctx->r14) = ctx->r13;
    // 0x8028C320: lw          $t8, 0x20C($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X20C);
    // 0x8028C324: lw          $t7, 0x208($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X208);
    // 0x8028C328: sll         $t5, $a2, 2
    ctx->r13 = S32(ctx->r6 << 2);
    // 0x8028C32C: addu        $t6, $s0, $t5
    ctx->r14 = ADD32(ctx->r16, ctx->r13);
    // 0x8028C330: sw          $t7, 0x4C($t8)
    MEM_W(0X4C, ctx->r24) = ctx->r15;
    // 0x8028C334: lw          $t0, 0x210($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X210);
    // 0x8028C338: lw          $t9, 0x20C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X20C);
    // 0x8028C33C: sw          $t9, 0x4C($t0)
    MEM_W(0X4C, ctx->r8) = ctx->r25;
    // 0x8028C340: lw          $t2, 0x214($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X214);
    // 0x8028C344: lw          $t1, 0x210($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X210);
    // 0x8028C348: addiu       $t0, $zero, 0x11DF
    ctx->r8 = ADD32(0, 0X11DF);
    // 0x8028C34C: sw          $t1, 0x4C($t2)
    MEM_W(0X4C, ctx->r10) = ctx->r9;
    // 0x8028C350: lw          $t4, 0x218($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X218);
    // 0x8028C354: lw          $t3, 0x214($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X214);
    // 0x8028C358: sw          $t3, 0x4C($t4)
    MEM_W(0X4C, ctx->r12) = ctx->r11;
    // 0x8028C35C: lw          $t8, 0x20C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X20C);
    // 0x8028C360: lw          $t7, 0x208($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X208);
    // 0x8028C364: sw          $t7, 0x4C($t8)
    MEM_W(0X4C, ctx->r24) = ctx->r15;
    // 0x8028C368: lw          $t9, 0x20C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X20C);
    // 0x8028C36C: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x8028C370: sb          $zero, 0x235($s0)
    MEM_B(0X235, ctx->r16) = 0;
    // 0x8028C374: sw          $t0, 0x238($s0)
    MEM_W(0X238, ctx->r16) = ctx->r8;
    // 0x8028C378: sb          $zero, 0x74($s0)
    MEM_B(0X74, ctx->r16) = 0;
    // 0x8028C37C: sw          $t9, 0x220($s0)
    MEM_W(0X220, ctx->r16) = ctx->r25;
    // 0x8028C380: jal         0x802C53C8
    // 0x8028C384: addiu       $a0, $a0, 0x1204
    ctx->r4 = ADD32(ctx->r4, 0X1204);
    static_3_802C53C8(rdram, ctx);
        goto after_52;
    // 0x8028C384: addiu       $a0, $a0, 0x1204
    ctx->r4 = ADD32(ctx->r4, 0X1204);
    after_52:
    // 0x8028C388: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x8028C38C: sw          $v0, 0x244($s0)
    MEM_W(0X244, ctx->r16) = ctx->r2;
    // 0x8028C390: jal         0x802C53B0
    // 0x8028C394: addiu       $a0, $a0, 0x1204
    ctx->r4 = ADD32(ctx->r4, 0X1204);
    static_3_802C53B0(rdram, ctx);
        goto after_53;
    // 0x8028C394: addiu       $a0, $a0, 0x1204
    ctx->r4 = ADD32(ctx->r4, 0X1204);
    after_53:
    // 0x8028C398: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x8028C39C: swc1        $f0, 0x23C($s0)
    MEM_W(0X23C, ctx->r16) = ctx->f0.u32l;
    // 0x8028C3A0: jal         0x802C53B8
    // 0x8028C3A4: addiu       $a0, $a0, 0x1204
    ctx->r4 = ADD32(ctx->r4, 0X1204);
    static_3_802C53B8(rdram, ctx);
        goto after_54;
    // 0x8028C3A4: addiu       $a0, $a0, 0x1204
    ctx->r4 = ADD32(ctx->r4, 0X1204);
    after_54:
    // 0x8028C3A8: swc1        $f0, 0x240($s0)
    MEM_W(0X240, ctx->r16) = ctx->f0.u32l;
    // 0x8028C3AC: jal         0x80318804
    // 0x8028C3B0: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    static_3_80318804(rdram, ctx);
        goto after_55;
    // 0x8028C3B0: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_55:
    // 0x8028C3B4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8028C3B8: beql        $v0, $at, L_8028C3E8
    if (ctx->r2 == ctx->r1) {
        // 0x8028C3BC: lui         $at, 0x447A
        ctx->r1 = S32(0X447A << 16);
            goto L_8028C3E8;
    }
    goto skip_1;
    // 0x8028C3BC: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    skip_1:
    // 0x8028C3C0: jal         0x80318804
    // 0x8028C3C4: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    static_3_80318804(rdram, ctx);
        goto after_56;
    // 0x8028C3C4: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_56:
    // 0x8028C3C8: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x8028C3CC: beql        $v0, $at, L_8028C3E8
    if (ctx->r2 == ctx->r1) {
        // 0x8028C3D0: lui         $at, 0x447A
        ctx->r1 = S32(0X447A << 16);
            goto L_8028C3E8;
    }
    goto skip_2;
    // 0x8028C3D0: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    skip_2:
    // 0x8028C3D4: jal         0x80318804
    // 0x8028C3D8: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    static_3_80318804(rdram, ctx);
        goto after_57;
    // 0x8028C3D8: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_57:
    // 0x8028C3DC: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x8028C3E0: bne         $v0, $at, L_8028C404
    if (ctx->r2 != ctx->r1) {
        // 0x8028C3E4: lui         $at, 0x447A
        ctx->r1 = S32(0X447A << 16);
            goto L_8028C404;
    }
    // 0x8028C3E4: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
L_8028C3E8:
    // 0x8028C3E8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8028C3EC: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x8028C3F0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8028C3F4: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x8028C3F8: sw          $t1, 0x244($s0)
    MEM_W(0X244, ctx->r16) = ctx->r9;
    // 0x8028C3FC: swc1        $f4, 0x23C($s0)
    MEM_W(0X23C, ctx->r16) = ctx->f4.u32l;
    // 0x8028C400: swc1        $f6, 0x240($s0)
    MEM_W(0X240, ctx->r16) = ctx->f6.u32l;
L_8028C404:
    // 0x8028C404: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x8028C408: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x8028C40C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x8028C410: jr          $ra
    // 0x8028C414: nop

    return;
    // 0x8028C414: nop

;}
RECOMP_FUNC void D_80247470(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80247470: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80247474: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80247478: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8024747C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80247480: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80247484: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x80247488: lui         $s1, 0x0
    ctx->r17 = S32(0X0 << 16);
    // 0x8024748C: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80247490: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
    // 0x80247494: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x80247498: lw          $s0, 0x8($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X8);
    // 0x8024749C: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x802474A0: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x802474A4: jal         0x802375F0
    // 0x802474A8: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    static_3_802375F0(rdram, ctx);
        goto after_0;
    // 0x802474A8: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    after_0:
    // 0x802474AC: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x802474B0: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x802474B4: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x802474B8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x802474BC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x802474C0: addu        $t1, $s0, $t0
    ctx->r9 = ADD32(ctx->r16, ctx->r8);
    // 0x802474C4: lw          $t2, 0x28($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X28);
    // 0x802474C8: addu        $t3, $t2, $s2
    ctx->r11 = ADD32(ctx->r10, ctx->r18);
    // 0x802474CC: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
    // 0x802474D0: lhu         $t4, 0x0($s1)
    ctx->r12 = MEM_HU(ctx->r17, 0X0);
    // 0x802474D4: andi        $t5, $t4, 0x2
    ctx->r13 = ctx->r12 & 0X2;
    // 0x802474D8: beq         $t5, $zero, L_802474FC
    if (ctx->r13 == 0) {
        // 0x802474DC: nop
    
            goto L_802474FC;
    }
    // 0x802474DC: nop

    // 0x802474E0: lw          $t7, 0x20($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X20);
    // 0x802474E4: lw          $t6, 0x20($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X20);
    // 0x802474E8: addiu       $at, $zero, -0x1000
    ctx->r1 = ADD32(0, -0X1000);
    // 0x802474EC: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x802474F0: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x802474F4: b           L_80247504
    // 0x802474F8: sw          $t9, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r25;
        goto L_80247504;
    // 0x802474F8: sw          $t9, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r25;
L_802474FC:
    // 0x802474FC: lw          $t0, 0x20($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X20);
    // 0x80247500: sw          $t0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r8;
L_80247504:
    // 0x80247504: lhu         $t1, 0x0($s1)
    ctx->r9 = MEM_HU(ctx->r17, 0X0);
    // 0x80247508: andi        $t2, $t1, 0x4
    ctx->r10 = ctx->r9 & 0X4;
    // 0x8024750C: beq         $t2, $zero, L_80247614
    if (ctx->r10 == 0) {
        // 0x80247510: nop
    
            goto L_80247614;
    }
    // 0x80247510: nop

    // 0x80247514: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x80247518: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8024751C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80247520: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80247524: addu        $t5, $s0, $t4
    ctx->r13 = ADD32(ctx->r16, ctx->r12);
    // 0x80247528: lw          $t7, 0x2C($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X2C);
    // 0x8024752C: andi        $t6, $t7, 0xFFF
    ctx->r14 = ctx->r15 & 0XFFF;
    // 0x80247530: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x80247534: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x80247538: lwc1        $f4, 0x24($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X24);
    // 0x8024753C: bgez        $t6, L_80247554
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80247540: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_80247554;
    }
    // 0x80247540: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80247544: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80247548: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8024754C: nop

    // 0x80247550: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_80247554:
    // 0x80247554: mul.s       $f16, $f4, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x80247558: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8024755C: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80247560: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80247564: nop

    // 0x80247568: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x8024756C: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80247570: nop

    // 0x80247574: andi        $at, $t9, 0x4
    ctx->r1 = ctx->r25 & 0X4;
    // 0x80247578: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x8024757C: beq         $t9, $zero, L_802475CC
    if (ctx->r25 == 0) {
        // 0x80247580: lui         $at, 0x4F00
        ctx->r1 = S32(0X4F00 << 16);
            goto L_802475CC;
    }
    // 0x80247580: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80247584: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80247588: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8024758C: sub.s       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80247590: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80247594: nop

    // 0x80247598: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8024759C: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x802475A0: nop

    // 0x802475A4: andi        $at, $t9, 0x4
    ctx->r1 = ctx->r25 & 0X4;
    // 0x802475A8: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x802475AC: bne         $t9, $zero, L_802475C4
    if (ctx->r25 != 0) {
        // 0x802475B0: nop
    
            goto L_802475C4;
    }
    // 0x802475B0: nop

    // 0x802475B4: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x802475B8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802475BC: b           L_802475DC
    // 0x802475C0: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
        goto L_802475DC;
    // 0x802475C0: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
L_802475C4:
    // 0x802475C4: b           L_802475DC
    // 0x802475C8: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
        goto L_802475DC;
    // 0x802475C8: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
L_802475CC:
    // 0x802475CC: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x802475D0: nop

    // 0x802475D4: bltz        $t9, L_802475C4
    if (SIGNED(ctx->r25) < 0) {
        // 0x802475D8: nop
    
            goto L_802475C4;
    }
    // 0x802475D8: nop

L_802475DC:
    // 0x802475DC: sw          $t9, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r25;
    // 0x802475E0: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x802475E4: lw          $t0, 0x2C($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X2C);
    // 0x802475E8: addiu       $at, $zero, -0x1000
    ctx->r1 = ADD32(0, -0X1000);
    // 0x802475EC: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x802475F0: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x802475F4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x802475F8: addu        $t3, $s0, $t2
    ctx->r11 = ADD32(ctx->r16, ctx->r10);
    // 0x802475FC: lw          $t4, 0x2C($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X2C);
    // 0x80247600: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80247604: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x80247608: or          $t7, $t0, $t5
    ctx->r15 = ctx->r8 | ctx->r13;
    // 0x8024760C: b           L_80247630
    // 0x80247610: sw          $t7, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r15;
        goto L_80247630;
    // 0x80247610: sw          $t7, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r15;
L_80247614:
    // 0x80247614: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80247618: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x8024761C: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80247620: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80247624: addu        $t9, $s0, $t8
    ctx->r25 = ADD32(ctx->r16, ctx->r24);
    // 0x80247628: lw          $t1, 0x2C($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X2C);
    // 0x8024762C: sw          $t1, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r9;
L_80247630:
    // 0x80247630: lw          $t2, 0x1C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X1C);
    // 0x80247634: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x80247638: lhu         $t3, 0x0($s1)
    ctx->r11 = MEM_HU(ctx->r17, 0X0);
    // 0x8024763C: andi        $t4, $t3, 0x20
    ctx->r12 = ctx->r11 & 0X20;
    // 0x80247640: beq         $t4, $zero, L_8024764C
    if (ctx->r12 == 0) {
        // 0x80247644: nop
    
            goto L_8024764C;
    }
    // 0x80247644: nop

    // 0x80247648: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
L_8024764C:
    // 0x8024764C: lhu         $t0, 0x0($s1)
    ctx->r8 = MEM_HU(ctx->r17, 0X0);
    // 0x80247650: andi        $t5, $t0, 0x40
    ctx->r13 = ctx->r8 & 0X40;
    // 0x80247654: beq         $t5, $zero, L_8024766C
    if (ctx->r13 == 0) {
        // 0x80247658: nop
    
            goto L_8024766C;
    }
    // 0x80247658: nop

    // 0x8024765C: sw          $zero, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = 0;
    // 0x80247660: jal         0x802375F0
    // 0x80247664: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    static_3_802375F0(rdram, ctx);
        goto after_1;
    // 0x80247664: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    after_1:
    // 0x80247668: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
L_8024766C:
    // 0x8024766C: lhu         $t7, 0x0($s1)
    ctx->r15 = MEM_HU(ctx->r17, 0X0);
    // 0x80247670: andi        $t6, $t7, 0x80
    ctx->r14 = ctx->r15 & 0X80;
    // 0x80247674: beq         $t6, $zero, L_8024769C
    if (ctx->r14 == 0) {
        // 0x80247678: nop
    
            goto L_8024769C;
    }
    // 0x80247678: nop

    // 0x8024767C: lhu         $t8, 0x28($s1)
    ctx->r24 = MEM_HU(ctx->r17, 0X28);
    // 0x80247680: lui         $at, 0x3FF
    ctx->r1 = S32(0X3FF << 16);
    // 0x80247684: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x80247688: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x8024768C: and         $t1, $t9, $at
    ctx->r9 = ctx->r25 & ctx->r1;
    // 0x80247690: jal         0x802375F0
    // 0x80247694: sw          $t1, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r9;
    static_3_802375F0(rdram, ctx);
        goto after_2;
    // 0x80247694: sw          $t1, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r9;
    after_2:
    // 0x80247698: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
L_8024769C:
    // 0x8024769C: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x802476A0: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x802476A4: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x802476A8: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x802476AC: lw          $t4, 0x8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X8);
    // 0x802476B0: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802476B4: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x802476B8: sw          $t4, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r12;
    // 0x802476BC: lw          $t5, 0xC($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC);
    // 0x802476C0: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x802476C4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802476C8: sw          $t5, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r13;
    // 0x802476CC: lw          $t6, 0x10($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X10);
    // 0x802476D0: sw          $t6, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r14;
    // 0x802476D4: lw          $t9, 0x14($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X14);
    // 0x802476D8: sw          $t9, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r25;
    // 0x802476DC: lw          $t2, 0x18($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X18);
    // 0x802476E0: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x802476E4: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x802476E8: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x802476EC: sw          $t4, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r12;
    // 0x802476F0: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x802476F4: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x802476F8: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x802476FC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80247700: addu        $t6, $s0, $t7
    ctx->r14 = ADD32(ctx->r16, ctx->r15);
    // 0x80247704: lw          $t8, 0x30($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X30);
    // 0x80247708: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x8024770C: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x80247710: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80247714: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80247718: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8024771C: addu        $t3, $s0, $t2
    ctx->r11 = ADD32(ctx->r16, ctx->r10);
    // 0x80247720: lw          $t4, 0x34($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X34);
    // 0x80247724: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x80247728: sw          $t4, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r12;
    // 0x8024772C: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x80247730: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x80247734: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80247738: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x8024773C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80247740: addu        $t6, $s0, $t7
    ctx->r14 = ADD32(ctx->r16, ctx->r15);
    // 0x80247744: lw          $t8, 0x38($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X38);
    // 0x80247748: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x8024774C: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80247750: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x80247754: lw          $t1, 0x20($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X20);
    // 0x80247758: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x8024775C: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80247760: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
    // 0x80247764: lw          $t3, 0x2C($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X2C);
    // 0x80247768: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x8024776C: lw          $t0, 0xC($s1)
    ctx->r8 = MEM_W(ctx->r17, 0XC);
    // 0x80247770: sw          $t0, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r8;
    // 0x80247774: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x80247778: sw          $t7, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r15;
    // 0x8024777C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80247780: sw          $s1, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r17;
    // 0x80247784: lw          $t8, 0x0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X0);
    // 0x80247788: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x8024778C: addiu       $t2, $t8, 0x30
    ctx->r10 = ADD32(ctx->r24, 0X30);
L_80247790:
    // 0x80247790: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x80247794: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x80247798: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x8024779C: sw          $at, -0xC($t6)
    MEM_W(-0XC, ctx->r14) = ctx->r1;
    // 0x802477A0: lw          $at, -0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, -0X8);
    // 0x802477A4: sw          $at, -0x8($t6)
    MEM_W(-0X8, ctx->r14) = ctx->r1;
    // 0x802477A8: lw          $at, -0x4($t8)
    ctx->r1 = MEM_W(ctx->r24, -0X4);
    // 0x802477AC: bne         $t8, $t2, L_80247790
    if (ctx->r24 != ctx->r10) {
        // 0x802477B0: sw          $at, -0x4($t6)
        MEM_W(-0X4, ctx->r14) = ctx->r1;
            goto L_80247790;
    }
    // 0x802477B0: sw          $at, -0x4($t6)
    MEM_W(-0X4, ctx->r14) = ctx->r1;
    // 0x802477B4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802477B8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802477BC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802477C0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x802477C4: jr          $ra
    // 0x802477C8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x802477C8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void D_80227E4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80227E4C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80227E50: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80227E54: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x80227E58: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x80227E5C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80227E60: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80227E64: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80227E68: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80227E6C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80227E70: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80227E74: jal         0x80223840
    // 0x80227E78: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    func_80223840(rdram, ctx);
        goto after_0;
    // 0x80227E78: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    after_0:
    // 0x80227E7C: addiu       $s2, $sp, 0x34
    ctx->r18 = ADD32(ctx->r29, 0X34);
    // 0x80227E80: addiu       $s3, $sp, 0x30
    ctx->r19 = ADD32(ctx->r29, 0X30);
    // 0x80227E84: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80227E88: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x80227E8C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80227E90: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80227E94: jal         0x8022393C
    // 0x80227E98: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8022393C(rdram, ctx);
        goto after_1;
    // 0x80227E98: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x80227E9C: beq         $v0, $zero, L_80227ED8
    if (ctx->r2 == 0) {
        // 0x80227EA0: lui         $s0, 0x434F
        ctx->r16 = S32(0X434F << 16);
            goto L_80227ED8;
    }
    // 0x80227EA0: lui         $s0, 0x434F
    ctx->r16 = S32(0X434F << 16);
    // 0x80227EA4: ori         $s0, $s0, 0x4D4D
    ctx->r16 = ctx->r16 | 0X4D4D;
L_80227EA8:
    // 0x80227EA8: bnel        $v0, $s0, L_80227EC0
    if (ctx->r2 != ctx->r16) {
        // 0x80227EAC: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80227EC0;
    }
    goto skip_0;
    // 0x80227EAC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_0:
    // 0x80227EB0: jal         0x80226C48
    // 0x80227EB4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    static_3_80226C48(rdram, ctx);
        goto after_2;
    // 0x80227EB4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_2:
    // 0x80227EB8: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80227EBC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_80227EC0:
    // 0x80227EC0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80227EC4: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x80227EC8: jal         0x8022393C
    // 0x80227ECC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8022393C(rdram, ctx);
        goto after_3;
    // 0x80227ECC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
    // 0x80227ED0: bne         $v0, $zero, L_80227EA8
    if (ctx->r2 != 0) {
        // 0x80227ED4: nop
    
            goto L_80227EA8;
    }
    // 0x80227ED4: nop

L_80227ED8:
    // 0x80227ED8: jal         0x802238F0
    // 0x80227EDC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    static_3_802238F0(rdram, ctx);
        goto after_4;
    // 0x80227EDC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_4:
    // 0x80227EE0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80227EE4: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x80227EE8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80227EEC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80227EF0: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80227EF4: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80227EF8: jr          $ra
    // 0x80227EFC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80227EFC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void D_8022AD8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022AD8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022AD90: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    // 0x8022AD94: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8022AD98: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8022AD9C: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8022ADA0: mul.s       $f6, $f4, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x8022ADA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022ADA8: mul.s       $f8, $f14, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x8022ADAC: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8022ADB0: mul.s       $f18, $f16, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x8022ADB4: jal         0x8022AA40
    // 0x8022ADB8: add.s       $f12, $f10, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f18.fl;
    static_3_8022AA40(rdram, ctx);
        goto after_0;
    // 0x8022ADB8: add.s       $f12, $f10, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f18.fl;
    after_0:
    // 0x8022ADBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022ADC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022ADC4: jr          $ra
    // 0x8022ADC8: nop

    return;
    // 0x8022ADC8: nop

;}
RECOMP_FUNC void D_802E3B5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E3BDC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802E3BE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802E3BE4: beq         $a0, $zero, L_802E3C14
    if (ctx->r4 == 0) {
        // 0x802E3BE8: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_802E3C14;
    }
    // 0x802E3BE8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802E3BEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802E3BF0: jal         0x802C49D0
    // 0x802E3BF4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_802C49D0(rdram, ctx);
        goto after_0;
    // 0x802E3BF4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802E3BF8: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x802E3BFC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802E3C00: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x802E3C04: beql        $t7, $zero, L_802E3C18
    if (ctx->r15 == 0) {
        // 0x802E3C08: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802E3C18;
    }
    goto skip_0;
    // 0x802E3C08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802E3C0C: jal         0x802C681C
    // 0x802E3C10: nop

    static_3_802C681C(rdram, ctx);
        goto after_1;
    // 0x802E3C10: nop

    after_1:
L_802E3C14:
    // 0x802E3C14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802E3C18:
    // 0x802E3C18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802E3C1C: jr          $ra
    // 0x802E3C20: nop

    return;
    // 0x802E3C20: nop

;}
RECOMP_FUNC void D_802D22EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D236C: jr          $ra
    // 0x802D2370: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x802D2370: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void D_802EDE3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EDEBC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802EDEC0: bne         $a0, $zero, L_802EDED8
    if (ctx->r4 != 0) {
        // 0x802EDEC4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802EDED8;
    }
    // 0x802EDEC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802EDEC8: jal         0x802C67EC
    // 0x802EDECC: addiu       $a0, $zero, 0xF0
    ctx->r4 = ADD32(0, 0XF0);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802EDECC: addiu       $a0, $zero, 0xF0
    ctx->r4 = ADD32(0, 0XF0);
    after_0:
    // 0x802EDED0: beq         $v0, $zero, L_802EDF70
    if (ctx->r2 == 0) {
        // 0x802EDED4: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802EDF70;
    }
    // 0x802EDED4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_802EDED8:
    // 0x802EDED8: jal         0x8031C47C
    // 0x802EDEDC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_8031C47C(rdram, ctx);
        goto after_1;
    // 0x802EDEDC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x802EDEE0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802EDEE4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802EDEE8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802EDEEC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802EDEF0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802EDEF4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802EDEF8: addiu       $t6, $zero, 0x13
    ctx->r14 = ADD32(0, 0X13);
    // 0x802EDEFC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802EDF00: sh          $t6, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r14;
    // 0x802EDF04: sw          $zero, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = 0;
    // 0x802EDF08: sh          $v1, 0xE4($a0)
    MEM_H(0XE4, ctx->r4) = ctx->r3;
    // 0x802EDF0C: swc1        $f2, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->f2.u32l;
    // 0x802EDF10: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802EDF14: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x802EDF18: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802EDF1C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x802EDF20: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802EDF24: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x802EDF28: addiu       $t8, $zero, 0x1AC
    ctx->r24 = ADD32(0, 0X1AC);
    // 0x802EDF2C: addiu       $t9, $zero, 0x10
    ctx->r25 = ADD32(0, 0X10);
    // 0x802EDF30: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    // 0x802EDF34: sh          $v1, 0xE6($a0)
    MEM_H(0XE6, ctx->r4) = ctx->r3;
    // 0x802EDF38: sw          $t7, 0xB8($a0)
    MEM_W(0XB8, ctx->r4) = ctx->r15;
    // 0x802EDF3C: sh          $t9, 0xA6($a0)
    MEM_H(0XA6, ctx->r4) = ctx->r25;
    // 0x802EDF40: sh          $t8, 0x9C($a0)
    MEM_H(0X9C, ctx->r4) = ctx->r24;
    // 0x802EDF44: sh          $a1, 0x98($a0)
    MEM_H(0X98, ctx->r4) = ctx->r5;
    // 0x802EDF48: sh          $a1, 0x9A($a0)
    MEM_H(0X9A, ctx->r4) = ctx->r5;
    // 0x802EDF4C: sh          $v1, 0xA4($a0)
    MEM_H(0XA4, ctx->r4) = ctx->r3;
    // 0x802EDF50: sb          $zero, 0x74($a0)
    MEM_B(0X74, ctx->r4) = 0;
    // 0x802EDF54: sh          $t0, 0xBC($a0)
    MEM_H(0XBC, ctx->r4) = ctx->r8;
    // 0x802EDF58: swc1        $f0, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f0.u32l;
    // 0x802EDF5C: swc1        $f0, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f0.u32l;
    // 0x802EDF60: swc1        $f0, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f0.u32l;
    // 0x802EDF64: swc1        $f2, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->f2.u32l;
    // 0x802EDF68: swc1        $f4, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f4.u32l;
    // 0x802EDF6C: swc1        $f6, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->f6.u32l;
L_802EDF70:
    // 0x802EDF70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802EDF74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802EDF78: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x802EDF7C: jr          $ra
    // 0x802EDF80: nop

    return;
    // 0x802EDF80: nop

;}
RECOMP_FUNC void D_8021E69C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021E69C: cvt.s.d     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.d); 
    ctx->f4.fl = CVT_S_D(ctx->f12.d);
    // 0x8021E6A0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8021E6A4: cvt.s.d     $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.d); 
    ctx->f6.fl = CVT_S_D(ctx->f14.d);
    // 0x8021E6A8: swc1        $f4, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->f4.u32l;
    // 0x8021E6AC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8021E6B0: jr          $ra
    // 0x8021E6B4: swc1        $f6, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->f6.u32l;
    return;
    // 0x8021E6B4: swc1        $f6, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->f6.u32l;
;}
RECOMP_FUNC void D_802023D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802023D4: andi        $a2, $a1, 0xFFFF
    ctx->r6 = ctx->r5 & 0XFFFF;
    // 0x802023D8: sll         $t6, $a2, 2
    ctx->r14 = S32(ctx->r6 << 2);
    // 0x802023DC: addiu       $sp, $sp, -0xC0
    ctx->r29 = ADD32(ctx->r29, -0XC0);
    // 0x802023E0: addu        $t6, $t6, $a2
    ctx->r14 = ADD32(ctx->r14, ctx->r6);
    // 0x802023E4: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802023E8: sw          $a1, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r5;
    // 0x802023EC: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x802023F0: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x802023F4: addu        $a1, $t6, $t7
    ctx->r5 = ADD32(ctx->r14, ctx->r15);
    // 0x802023F8: lw          $t8, 0x4C($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X4C);
    // 0x802023FC: andi        $a3, $a0, 0xFF
    ctx->r7 = ctx->r4 & 0XFF;
    // 0x80202400: sll         $v1, $a3, 2
    ctx->r3 = S32(ctx->r7 << 2);
    // 0x80202404: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x80202408: subu        $v1, $v1, $a3
    ctx->r3 = SUB32(ctx->r3, ctx->r7);
    // 0x8020240C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80202410: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80202414: subu        $v1, $v1, $a3
    ctx->r3 = SUB32(ctx->r3, ctx->r7);
    // 0x80202418: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x8020241C: lwc1        $f4, 0x40($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X40);
    // 0x80202420: lwc1        $f6, 0x48($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X48);
    // 0x80202424: lw          $t9, 0x0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X0);
    // 0x80202428: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8020242C: addu        $v1, $v1, $a3
    ctx->r3 = ADD32(ctx->r3, ctx->r7);
    // 0x80202430: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80202434: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80202438: sw          $a0, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r4;
    // 0x8020243C: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    // 0x80202440: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    // 0x80202444: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    // 0x80202448: addu        $v0, $v1, $t9
    ctx->r2 = ADD32(ctx->r3, ctx->r25);
    // 0x8020244C: lw          $t0, 0x98($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X98);
    // 0x80202450: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x80202454: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80202458: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x8020245C: jal         0x80228DE0
    // 0x80202460: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    func_80228DE0(rdram, ctx);
        goto after_0;
    // 0x80202460: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    after_0:
    // 0x80202464: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x80202468: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x8020246C: lwc1        $f18, 0x30($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80202470: andi        $t1, $v1, 0x8
    ctx->r9 = ctx->r3 & 0X8;
    // 0x80202474: beq         $t1, $zero, L_802027EC
    if (ctx->r9 == 0) {
        // 0x80202478: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_802027EC;
    }
    // 0x80202478: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8020247C: lwc1        $f18, 0x3C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80202480: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80202484: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80202488: andi        $t2, $v1, 0x2
    ctx->r10 = ctx->r3 & 0X2;
    // 0x8020248C: lwc1        $f0, 0x6C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80202490: lwc1        $f2, 0x70($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80202494: lwc1        $f12, 0x74($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X74);
    // 0x80202498: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x8020249C: swc1        $f18, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f18.u32l;
    // 0x802024A0: swc1        $f4, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f4.u32l;
    // 0x802024A4: beq         $t2, $zero, L_80202638
    if (ctx->r10 == 0) {
        // 0x802024A8: swc1        $f6, 0xA8($sp)
        MEM_W(0XA8, ctx->r29) = ctx->f6.u32l;
            goto L_80202638;
    }
    // 0x802024A8: swc1        $f6, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f6.u32l;
    // 0x802024AC: lwc1        $f8, 0x40($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X40);
    // 0x802024B0: addiu       $a0, $sp, 0x94
    ctx->r4 = ADD32(ctx->r29, 0X94);
    // 0x802024B4: addiu       $a1, $v0, 0x58
    ctx->r5 = ADD32(ctx->r2, 0X58);
    // 0x802024B8: sub.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x802024BC: swc1        $f10, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f10.u32l;
    // 0x802024C0: lwc1        $f18, 0x44($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X44);
    // 0x802024C4: sub.s       $f4, $f2, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f18.fl;
    // 0x802024C8: swc1        $f4, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f4.u32l;
    // 0x802024CC: lwc1        $f6, 0x48($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X48);
    // 0x802024D0: swc1        $f12, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f12.u32l;
    // 0x802024D4: swc1        $f2, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f2.u32l;
    // 0x802024D8: sub.s       $f8, $f12, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f12.fl - ctx->f6.fl;
    // 0x802024DC: swc1        $f0, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f0.u32l;
    // 0x802024E0: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x802024E4: jal         0x80234BE4
    // 0x802024E8: swc1        $f8, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f8.u32l;
    static_3_80234BE4(rdram, ctx);
        goto after_1;
    // 0x802024E8: swc1        $f8, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x802024EC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802024F0: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x802024F4: lwc1        $f2, 0x98($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X98);
    // 0x802024F8: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x802024FC: lwc1        $f0, 0x94($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X94);
    // 0x80202500: bc1fl       L_80202528
    if (!c1cs) {
        // 0x80202504: lwc1        $f10, 0x58($v0)
        ctx->f10.u32l = MEM_W(ctx->r2, 0X58);
            goto L_80202528;
    }
    goto skip_0;
    // 0x80202504: lwc1        $f10, 0x58($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X58);
    skip_0:
    // 0x80202508: mul.s       $f18, $f0, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x8020250C: lwc1        $f12, 0x9C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x80202510: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80202514: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80202518: mul.s       $f8, $f12, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x8020251C: b           L_80202630
    // 0x80202520: add.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl + ctx->f8.fl;
        goto L_80202630;
    // 0x80202520: add.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80202524: lwc1        $f10, 0x58($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X58);
L_80202528:
    // 0x80202528: addiu       $a0, $sp, 0x94
    ctx->r4 = ADD32(ctx->r29, 0X94);
    // 0x8020252C: addiu       $a1, $sp, 0x88
    ctx->r5 = ADD32(ctx->r29, 0X88);
    // 0x80202530: neg.s       $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = -ctx->f10.fl;
    // 0x80202534: swc1        $f18, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f18.u32l;
    // 0x80202538: lwc1        $f4, 0x5C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X5C);
    // 0x8020253C: lwc1        $f18, 0xAC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x80202540: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x80202544: swc1        $f6, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f6.u32l;
    // 0x80202548: lwc1        $f8, 0x60($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X60);
    // 0x8020254C: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x80202550: lwc1        $f8, 0xB0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x80202554: swc1        $f10, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f10.u32l;
    // 0x80202558: lwc1        $f4, 0x4C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x8020255C: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80202560: lwc1        $f4, 0xB4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x80202564: swc1        $f6, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f6.u32l;
    // 0x80202568: lwc1        $f10, 0x50($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X50);
    // 0x8020256C: sub.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80202570: swc1        $f18, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f18.u32l;
    // 0x80202574: lwc1        $f6, 0x54($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X54);
    // 0x80202578: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x8020257C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80202580: jal         0x80234BE4
    // 0x80202584: swc1        $f8, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f8.u32l;
    static_3_80234BE4(rdram, ctx);
        goto after_2;
    // 0x80202584: swc1        $f8, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x80202588: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8020258C: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x80202590: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x80202594: lwc1        $f10, 0x88($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X88);
    // 0x80202598: bc1f        L_802025C8
    if (!c1cs) {
        // 0x8020259C: nop
    
            goto L_802025C8;
    }
    // 0x8020259C: nop

    // 0x802025A0: lwc1        $f0, 0x94($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X94);
    // 0x802025A4: lwc1        $f2, 0x98($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X98);
    // 0x802025A8: lwc1        $f12, 0x9C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x802025AC: mul.s       $f18, $f0, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x802025B0: nop

    // 0x802025B4: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x802025B8: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x802025BC: mul.s       $f8, $f12, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x802025C0: b           L_80202630
    // 0x802025C4: add.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl + ctx->f8.fl;
        goto L_80202630;
    // 0x802025C4: add.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl + ctx->f8.fl;
L_802025C8:
    // 0x802025C8: mul.s       $f18, $f0, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x802025CC: lwc1        $f4, 0x4C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x802025D0: lwc1        $f8, 0xAC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x802025D4: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x802025D8: lwc1        $f18, 0x8C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x802025DC: sub.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x802025E0: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x802025E4: lwc1        $f18, 0xB0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x802025E8: swc1        $f10, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f10.u32l;
    // 0x802025EC: lwc1        $f8, 0x50($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X50);
    // 0x802025F0: add.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x802025F4: lwc1        $f8, 0x90($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X90);
    // 0x802025F8: sub.s       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x802025FC: mul.s       $f18, $f0, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x80202600: swc1        $f4, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f4.u32l;
    // 0x80202604: lwc1        $f6, 0x54($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X54);
    // 0x80202608: add.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x8020260C: lwc1        $f18, 0xB4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x80202610: sub.s       $f6, $f18, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f8.fl;
    // 0x80202614: mul.s       $f18, $f10, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x80202618: nop

    // 0x8020261C: mul.s       $f8, $f4, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x80202620: swc1        $f6, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f6.u32l;
    // 0x80202624: mul.s       $f4, $f6, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f6.fl);
    // 0x80202628: add.s       $f10, $f18, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x8020262C: add.s       $f14, $f10, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f10.fl + ctx->f4.fl;
L_80202630:
    // 0x80202630: b           L_80202698
    // 0x80202634: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
        goto L_80202698;
    // 0x80202634: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
L_80202638:
    // 0x80202638: andi        $t4, $v1, 0x1
    ctx->r12 = ctx->r3 & 0X1;
    // 0x8020263C: beq         $t4, $zero, L_8020264C
    if (ctx->r12 == 0) {
        // 0x80202640: lwc1        $f8, 0x6C($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
            goto L_8020264C;
    }
    // 0x80202640: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80202644: b           L_80202698
    // 0x80202648: lwc1        $f14, 0x84($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X84);
        goto L_80202698;
    // 0x80202648: lwc1        $f14, 0x84($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X84);
L_8020264C:
    // 0x8020264C: lwc1        $f18, 0x30($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X30);
    // 0x80202650: lwc1        $f4, 0x70($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80202654: sub.s       $f6, $f18, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f8.fl;
    // 0x80202658: swc1        $f6, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f6.u32l;
    // 0x8020265C: lwc1        $f10, 0x34($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X34);
    // 0x80202660: lwc1        $f6, 0x74($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X74);
    // 0x80202664: sub.s       $f18, $f10, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x80202668: lwc1        $f4, 0x94($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X94);
    // 0x8020266C: swc1        $f18, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f18.u32l;
    // 0x80202670: lwc1        $f8, 0x38($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X38);
    // 0x80202674: mul.s       $f18, $f4, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x80202678: sub.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x8020267C: lwc1        $f8, 0x98($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X98);
    // 0x80202680: mul.s       $f6, $f8, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f8.fl);
    // 0x80202684: swc1        $f10, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f10.u32l;
    // 0x80202688: lwc1        $f4, 0x9C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x8020268C: mul.s       $f8, $f4, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x80202690: add.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x80202694: add.s       $f14, $f10, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f10.fl + ctx->f8.fl;
L_80202698:
    // 0x80202698: lwc1        $f0, 0x94($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X94);
    // 0x8020269C: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x802026A0: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x802026A4: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x802026A8: lwc1        $f18, 0x30($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X30);
    // 0x802026AC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802026B0: bc1fl       L_802026DC
    if (!c1cs) {
        // 0x802026B4: lwc1        $f2, 0x90($v0)
        ctx->f2.u32l = MEM_W(ctx->r2, 0X90);
            goto L_802026DC;
    }
    goto skip_1;
    // 0x802026B4: lwc1        $f2, 0x90($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X90);
    skip_1:
    // 0x802026B8: lw          $t5, 0x0($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X0);
    // 0x802026BC: addiu       $t8, $zero, 0x40
    ctx->r24 = ADD32(0, 0X40);
    // 0x802026C0: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x802026C4: lwc1        $f18, 0x74($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X74);
    // 0x802026C8: sb          $t8, 0xAE($v0)
    MEM_B(0XAE, ctx->r2) = ctx->r24;
    // 0x802026CC: sw          $zero, 0xA4($v0)
    MEM_W(0XA4, ctx->r2) = 0;
    // 0x802026D0: b           L_802028CC
    // 0x802026D4: swc1        $f18, 0x9C($v0)
    MEM_W(0X9C, ctx->r2) = ctx->f18.u32l;
        goto L_802028CC;
    // 0x802026D4: swc1        $f18, 0x9C($v0)
    MEM_W(0X9C, ctx->r2) = ctx->f18.u32l;
    // 0x802026D8: lwc1        $f2, 0x90($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X90);
L_802026DC:
    // 0x802026DC: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x802026E0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x802026E4: c.le.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl <= ctx->f2.fl;
    // 0x802026E8: nop

    // 0x802026EC: bc1fl       L_80202708
    if (!c1cs) {
        // 0x802026F0: sub.s       $f4, $f0, $f14
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f14.fl;
            goto L_80202708;
    }
    goto skip_2;
    // 0x802026F0: sub.s       $f4, $f0, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f14.fl;
    skip_2:
    // 0x802026F4: lw          $t9, 0x0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X0);
    // 0x802026F8: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x802026FC: b           L_80202718
    // 0x80202700: lwc1        $f16, 0x70($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X70);
        goto L_80202718;
    // 0x80202700: lwc1        $f16, 0x70($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X70);
    // 0x80202704: sub.s       $f4, $f0, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f14.fl;
L_80202708:
    // 0x80202708: lwc1        $f6, 0x70($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X70);
    // 0x8020270C: sub.s       $f8, $f0, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x80202710: mul.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x80202714: div.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = DIV_S(ctx->f10.fl, ctx->f8.fl);
L_80202718:
    // 0x80202718: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8020271C: nop

    // 0x80202720: c.eq.s      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.fl == ctx->f6.fl;
    // 0x80202724: nop

    // 0x80202728: bc1t        L_802027E4
    if (c1cs) {
        // 0x8020272C: nop
    
            goto L_802027E4;
    }
    // 0x8020272C: nop

    // 0x80202730: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80202734: addiu       $a0, $sp, 0x94
    ctx->r4 = ADD32(ctx->r29, 0X94);
    // 0x80202738: addiu       $a1, $sp, 0xA0
    ctx->r5 = ADD32(ctx->r29, 0XA0);
    // 0x8020273C: c.eq.s      $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f14.fl == ctx->f4.fl;
    // 0x80202740: nop

    // 0x80202744: bc1t        L_802027E4
    if (c1cs) {
        // 0x80202748: nop
    
            goto L_802027E4;
    }
    // 0x80202748: nop

    // 0x8020274C: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80202750: swc1        $f14, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f14.u32l;
    // 0x80202754: jal         0x80234C30
    // 0x80202758: swc1        $f16, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f16.u32l;
    static_3_80234C30(rdram, ctx);
        goto after_3;
    // 0x80202758: swc1        $f16, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f16.u32l;
    after_3:
    // 0x8020275C: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x80202760: lwc1        $f14, 0x84($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X84);
    // 0x80202764: lwc1        $f16, 0xB8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x80202768: lwc1        $f2, 0x90($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X90);
    // 0x8020276C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x80202770: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x80202774: c.lt.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl < ctx->f2.fl;
    // 0x80202778: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8020277C: bc1f        L_80202790
    if (!c1cs) {
        // 0x80202780: nop
    
            goto L_80202790;
    }
    // 0x80202780: nop

    // 0x80202784: div.s       $f10, $f14, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = DIV_S(ctx->f14.fl, ctx->f2.fl);
    // 0x80202788: mul.s       $f12, $f0, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x8020278C: nop

L_80202790:
    // 0x80202790: beql        $t2, $zero, L_802027AC
    if (ctx->r10 == 0) {
        // 0x80202794: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_802027AC;
    }
    goto skip_3;
    // 0x80202794: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_3:
    // 0x80202798: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020279C: nop

    // 0x802027A0: mul.s       $f12, $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f8.fl);
    // 0x802027A4: nop

    // 0x802027A8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_802027AC:
    // 0x802027AC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802027B0: lui         $at, 0x4280
    ctx->r1 = S32(0X4280 << 16);
    // 0x802027B4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802027B8: add.s       $f6, $f18, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f12.fl;
    // 0x802027BC: addiu       $at, $zero, 0x80
    ctx->r1 = ADD32(0, 0X80);
    // 0x802027C0: mul.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x802027C4: trunc.w.s   $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x802027C8: mfc1        $a0, $f8
    ctx->r4 = (int32_t)ctx->f8.u32l;
    // 0x802027CC: nop

    // 0x802027D0: bne         $a0, $at, L_802027DC
    if (ctx->r4 != ctx->r1) {
        // 0x802027D4: nop
    
            goto L_802027DC;
    }
    // 0x802027D4: nop

    // 0x802027D8: addiu       $a0, $zero, 0x7F
    ctx->r4 = ADD32(0, 0X7F);
L_802027DC:
    // 0x802027DC: b           L_80202840
    // 0x802027E0: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
        goto L_80202840;
    // 0x802027E0: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
L_802027E4:
    // 0x802027E4: b           L_80202840
    // 0x802027E8: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
        goto L_80202840;
    // 0x802027E8: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
L_802027EC:
    // 0x802027EC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802027F0: lwc1        $f16, 0x70($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X70);
    // 0x802027F4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802027F8: c.eq.s      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.fl == ctx->f6.fl;
    // 0x802027FC: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x80202800: bc1t        L_80202840
    if (c1cs) {
        // 0x80202804: nop
    
            goto L_80202840;
    }
    // 0x80202804: nop

    // 0x80202808: lwc1        $f4, 0x78($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X78);
    // 0x8020280C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80202810: lui         $at, 0x4280
    ctx->r1 = S32(0X4280 << 16);
    // 0x80202814: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80202818: add.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x8020281C: addiu       $at, $zero, 0x80
    ctx->r1 = ADD32(0, 0X80);
    // 0x80202820: mul.s       $f6, $f8, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x80202824: trunc.w.s   $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x80202828: mfc1        $a0, $f4
    ctx->r4 = (int32_t)ctx->f4.u32l;
    // 0x8020282C: nop

    // 0x80202830: bnel        $a0, $at, L_80202844
    if (ctx->r4 != ctx->r1) {
        // 0x80202834: andi        $t5, $v1, 0x4
        ctx->r13 = ctx->r3 & 0X4;
            goto L_80202844;
    }
    goto skip_4;
    // 0x80202834: andi        $t5, $v1, 0x4
    ctx->r13 = ctx->r3 & 0X4;
    skip_4:
    // 0x80202838: b           L_80202840
    // 0x8020283C: addiu       $a0, $zero, 0x7F
    ctx->r4 = ADD32(0, 0X7F);
        goto L_80202840;
    // 0x8020283C: addiu       $a0, $zero, 0x7F
    ctx->r4 = ADD32(0, 0X7F);
L_80202840:
    // 0x80202840: andi        $t5, $v1, 0x4
    ctx->r13 = ctx->r3 & 0X4;
L_80202844:
    // 0x80202844: beq         $t5, $zero, L_8020286C
    if (ctx->r13 == 0) {
        // 0x80202848: lui         $t0, 0x0
        ctx->r8 = S32(0X0 << 16);
            goto L_8020286C;
    }
    // 0x80202848: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x8020284C: lui         $at, 0x42FE
    ctx->r1 = S32(0X42FE << 16);
    // 0x80202850: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80202854: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80202858: mul.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x8020285C: trunc.w.s   $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x80202860: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x80202864: b           L_8020288C
    // 0x80202868: sb          $t7, 0xAF($v0)
    MEM_B(0XAF, ctx->r2) = ctx->r15;
        goto L_8020288C;
    // 0x80202868: sb          $t7, 0xAF($v0)
    MEM_B(0XAF, ctx->r2) = ctx->r15;
L_8020286C:
    // 0x8020286C: lui         $at, 0x42FE
    ctx->r1 = S32(0X42FE << 16);
    // 0x80202870: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80202874: lwc1        $f4, 0x7C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X7C);
    // 0x80202878: mul.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x8020287C: trunc.w.s   $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80202880: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x80202884: nop

    // 0x80202888: sb          $t9, 0xAF($v0)
    MEM_B(0XAF, ctx->r2) = ctx->r25;
L_8020288C:
    // 0x8020288C: lw          $t0, 0x0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X0);
    // 0x80202890: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80202894: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80202898: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x8020289C: lwc1        $f6, 0x74($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X74);
    // 0x802028A0: sb          $a0, 0xAE($v0)
    MEM_B(0XAE, ctx->r2) = ctx->r4;
    // 0x802028A4: swc1        $f6, 0x9C($v0)
    MEM_W(0X9C, ctx->r2) = ctx->f6.u32l;
    // 0x802028A8: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x802028AC: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802028B0: mul.s       $f10, $f16, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x802028B4: nop

    // 0x802028B8: mul.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x802028BC: trunc.w.s   $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x802028C0: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x802028C4: nop

    // 0x802028C8: sw          $t4, 0xA4($v0)
    MEM_W(0XA4, ctx->r2) = ctx->r12;
L_802028CC:
    // 0x802028CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802028D0: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
    // 0x802028D4: jr          $ra
    // 0x802028D8: nop

    return;
    // 0x802028D8: nop

;}
RECOMP_FUNC void D_802D56EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D576C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802D5770: jr          $ra
    // 0x802D5774: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x802D5774: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void D_802CAAB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802CAB30: jr          $ra
    // 0x802CAB34: lbu         $v0, 0x53($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X53);
    return;
    // 0x802CAB34: lbu         $v0, 0x53($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X53);
;}
RECOMP_FUNC void D_802E0C38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E0CB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802E0CBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802E0CC0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802E0CC4: jal         0x8021BAE0
    // 0x802E0CC8: lw          $a0, 0x2A8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2A8);
    static_3_8021BAE0(rdram, ctx);
        goto after_0;
    // 0x802E0CC8: lw          $a0, 0x2A8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2A8);
    after_0:
    // 0x802E0CCC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802E0CD0: jal         0x8028D688
    // 0x802E0CD4: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    static_3_8028D688(rdram, ctx);
        goto after_1;
    // 0x802E0CD4: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    after_1:
    // 0x802E0CD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802E0CDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802E0CE0: jr          $ra
    // 0x802E0CE4: nop

    return;
    // 0x802E0CE4: nop

;}
RECOMP_FUNC void D_8028C784(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028C804: lw          $t6, 0x248($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X248);
    // 0x8028C808: jr          $ra
    // 0x8028C80C: sw          $t6, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->r14;
    return;
    // 0x8028C80C: sw          $t6, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void D_802422E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802422E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802422E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802422E8: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802422EC: lui         $a2, 0x8024
    ctx->r6 = S32(0X8024 << 16);
    // 0x802422F0: addiu       $a2, $a2, 0x4880
    ctx->r6 = ADD32(ctx->r6, 0X4880);
    // 0x802422F4: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802422F8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802422FC: jal         0x80249920
    // 0x80242300: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    static_3_80249920(rdram, ctx);
        goto after_0;
    // 0x80242300: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_0:
    // 0x80242304: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80242308: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8024230C: sw          $zero, 0x14($a0)
    MEM_W(0X14, ctx->r4) = 0;
    // 0x80242310: sw          $t6, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r14;
    // 0x80242314: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80242318: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8024231C: jr          $ra
    // 0x80242320: nop

    return;
    // 0x80242320: nop

;}
RECOMP_FUNC void D_802907C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80290840: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80290844: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80290848: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8029084C: bne         $a0, $zero, L_80290864
    if (ctx->r4 != 0) {
        // 0x80290850: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_80290864;
    }
    // 0x80290850: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80290854: jal         0x802C67EC
    // 0x80290858: addiu       $a0, $zero, 0x97C
    ctx->r4 = ADD32(0, 0X97C);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x80290858: addiu       $a0, $zero, 0x97C
    ctx->r4 = ADD32(0, 0X97C);
    after_0:
    // 0x8029085C: beq         $v0, $zero, L_80290894
    if (ctx->r2 == 0) {
        // 0x80290860: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80290894;
    }
    // 0x80290860: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_80290864:
    // 0x80290864: jal         0x8031CF20
    // 0x80290868: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_8031CF20(rdram, ctx);
        goto after_1;
    // 0x80290868: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8029086C: jal         0x8031CF20
    // 0x80290870: addiu       $a0, $s0, 0x21C
    ctx->r4 = ADD32(ctx->r16, 0X21C);
    static_3_8031CF20(rdram, ctx);
        goto after_2;
    // 0x80290870: addiu       $a0, $s0, 0x21C
    ctx->r4 = ADD32(ctx->r16, 0X21C);
    after_2:
    // 0x80290874: jal         0x8031DCDC
    // 0x80290878: addiu       $a0, $s0, 0x43C
    ctx->r4 = ADD32(ctx->r16, 0X43C);
    static_3_8031DCDC(rdram, ctx);
        goto after_3;
    // 0x80290878: addiu       $a0, $s0, 0x43C
    ctx->r4 = ADD32(ctx->r16, 0X43C);
    after_3:
    // 0x8029087C: jal         0x8031FA88
    // 0x80290880: addiu       $a0, $s0, 0x52C
    ctx->r4 = ADD32(ctx->r16, 0X52C);
    static_3_8031FA88(rdram, ctx);
        goto after_4;
    // 0x80290880: addiu       $a0, $s0, 0x52C
    ctx->r4 = ADD32(ctx->r16, 0X52C);
    after_4:
    // 0x80290884: jal         0x8031C5B0
    // 0x80290888: addiu       $a0, $s0, 0x760
    ctx->r4 = ADD32(ctx->r16, 0X760);
    static_3_8031C5B0(rdram, ctx);
        goto after_5;
    // 0x80290888: addiu       $a0, $s0, 0x760
    ctx->r4 = ADD32(ctx->r16, 0X760);
    after_5:
    // 0x8029088C: jal         0x8031DCDC
    // 0x80290890: addiu       $a0, $s0, 0x850
    ctx->r4 = ADD32(ctx->r16, 0X850);
    static_3_8031DCDC(rdram, ctx);
        goto after_6;
    // 0x80290890: addiu       $a0, $s0, 0x850
    ctx->r4 = ADD32(ctx->r16, 0X850);
    after_6:
L_80290894:
    // 0x80290894: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80290898: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x8029089C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802908A0: jr          $ra
    // 0x802908A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x802908A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void D_8027E654(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027E6CC: jr          $ra
    // 0x8027E6D0: lwc1        $f0, 0x32AC($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X32AC);
    return;
    // 0x8027E6D0: lwc1        $f0, 0x32AC($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X32AC);
;}
RECOMP_FUNC void D_802AA4C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AA540: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802AA544: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802AA548: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802AA54C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x802AA550: lbu         $t7, 0xB9($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0XB9);
    // 0x802AA554: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x802AA558: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802AA55C: beq         $t7, $at, L_802AA5EC
    if (ctx->r15 == ctx->r1) {
        // 0x802AA560: andi        $t6, $a1, 0xFF
        ctx->r14 = ctx->r5 & 0XFF;
            goto L_802AA5EC;
    }
    // 0x802AA560: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x802AA564: beq         $t6, $zero, L_802AA5D8
    if (ctx->r14 == 0) {
        // 0x802AA568: nop
    
            goto L_802AA5D8;
    }
    // 0x802AA568: nop

    // 0x802AA56C: jal         0x80305EF0
    // 0x802AA570: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    static_3_80305EF0(rdram, ctx);
        goto after_0;
    // 0x802AA570: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    after_0:
    // 0x802AA574: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802AA578: addiu       $a1, $zero, 0x190
    ctx->r5 = ADD32(0, 0X190);
    // 0x802AA57C: jal         0x80305E90
    // 0x802AA580: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_80305E90(rdram, ctx);
        goto after_1;
    // 0x802AA580: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x802AA584: lbu         $t8, 0x24($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X24);
    // 0x802AA588: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x802AA58C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802AA590: bne         $t8, $zero, L_802AA5EC
    if (ctx->r24 != 0) {
        // 0x802AA594: addiu       $a1, $s0, 0xC4
        ctx->r5 = ADD32(ctx->r16, 0XC4);
            goto L_802AA5EC;
    }
    // 0x802AA594: addiu       $a1, $s0, 0xC4
    ctx->r5 = ADD32(ctx->r16, 0XC4);
    // 0x802AA598: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802AA59C: lbu         $a2, 0xB9($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0XB9);
    // 0x802AA5A0: addiu       $t9, $zero, 0x8
    ctx->r25 = ADD32(0, 0X8);
    // 0x802AA5A4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x802AA5A8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x802AA5AC: jal         0x80302238
    // 0x802AA5B0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302238(rdram, ctx);
        goto after_2;
    // 0x802AA5B0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_2:
    // 0x802AA5B4: beq         $v0, $zero, L_802AA5EC
    if (ctx->r2 == 0) {
        // 0x802AA5B8: lw          $a1, 0x2C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X2C);
            goto L_802AA5EC;
    }
    // 0x802AA5B8: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x802AA5BC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802AA5C0: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802AA5C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802AA5C8: jal         0x8030276C
    // 0x802AA5CC: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_8030276C(rdram, ctx);
        goto after_3;
    // 0x802AA5CC: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_3:
    // 0x802AA5D0: b           L_802AA5F0
    // 0x802AA5D4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_802AA5F0;
    // 0x802AA5D4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802AA5D8:
    // 0x802AA5D8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802AA5DC: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802AA5E0: addiu       $a1, $s0, 0xC4
    ctx->r5 = ADD32(ctx->r16, 0XC4);
    // 0x802AA5E4: jal         0x80302414
    // 0x802AA5E8: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302414(rdram, ctx);
        goto after_4;
    // 0x802AA5E8: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_4:
L_802AA5EC:
    // 0x802AA5EC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802AA5F0:
    // 0x802AA5F0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802AA5F4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x802AA5F8: jr          $ra
    // 0x802AA5FC: nop

    return;
    // 0x802AA5FC: nop

;}
RECOMP_FUNC void D_8029C3C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029C440: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8029C444: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8029C448: lbu         $v0, 0x18($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X18);
    // 0x8029C44C: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x8029C450: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8029C454: beq         $v0, $at, L_8029C470
    if (ctx->r2 == ctx->r1) {
        // 0x8029C458: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_8029C470;
    }
    // 0x8029C458: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8029C45C: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x8029C460: beql        $v0, $at, L_8029C4B4
    if (ctx->r2 == ctx->r1) {
        // 0x8029C464: lw          $a0, 0x10($a1)
        ctx->r4 = MEM_W(ctx->r5, 0X10);
            goto L_8029C4B4;
    }
    goto skip_0;
    // 0x8029C464: lw          $a0, 0x10($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X10);
    skip_0:
    // 0x8029C468: b           L_8029C4DC
    // 0x8029C46C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8029C4DC;
    // 0x8029C46C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8029C470:
    // 0x8029C470: lw          $v1, 0xC($a1)
    ctx->r3 = MEM_W(ctx->r5, 0XC);
    // 0x8029C474: lw          $v0, 0xB8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XB8);
    // 0x8029C478: lh          $t6, 0x8($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X8);
    // 0x8029C47C: sb          $a2, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r6;
    // 0x8029C480: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    // 0x8029C484: lw          $t9, 0xC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XC);
    // 0x8029C488: addu        $a0, $t6, $v1
    ctx->r4 = ADD32(ctx->r14, ctx->r3);
    // 0x8029C48C: jalr        $t9
    // 0x8029C490: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x8029C490: nop

    after_0:
    // 0x8029C494: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8029C498: bne         $v0, $zero, L_8029C4D8
    if (ctx->r2 != 0) {
        // 0x8029C49C: lbu         $a2, 0x1F($sp)
        ctx->r6 = MEM_BU(ctx->r29, 0X1F);
            goto L_8029C4D8;
    }
    // 0x8029C49C: lbu         $a2, 0x1F($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X1F);
    // 0x8029C4A0: jal         0x802CD358
    // 0x8029C4A4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    static_3_802CD358(rdram, ctx);
        goto after_1;
    // 0x8029C4A4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_1:
    // 0x8029C4A8: b           L_8029C4D8
    // 0x8029C4AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
        goto L_8029C4D8;
    // 0x8029C4AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8029C4B0: lw          $a0, 0x10($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X10);
L_8029C4B4:
    // 0x8029C4B4: sb          $a2, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r6;
    // 0x8029C4B8: jal         0x802FC994
    // 0x8029C4BC: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    static_3_802FC994(rdram, ctx);
        goto after_2;
    // 0x8029C4BC: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    after_2:
    // 0x8029C4C0: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8029C4C4: bne         $v0, $zero, L_8029C4D8
    if (ctx->r2 != 0) {
        // 0x8029C4C8: lbu         $a2, 0x1F($sp)
        ctx->r6 = MEM_BU(ctx->r29, 0X1F);
            goto L_8029C4D8;
    }
    // 0x8029C4C8: lbu         $a2, 0x1F($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X1F);
    // 0x8029C4CC: jal         0x802CD358
    // 0x8029C4D0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    static_3_802CD358(rdram, ctx);
        goto after_3;
    // 0x8029C4D0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_3:
    // 0x8029C4D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_8029C4D8:
    // 0x8029C4D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8029C4DC:
    // 0x8029C4DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8029C4E0: andi        $v0, $a2, 0xFF
    ctx->r2 = ctx->r6 & 0XFF;
    // 0x8029C4E4: jr          $ra
    // 0x8029C4E8: nop

    return;
    // 0x8029C4E8: nop

;}
RECOMP_FUNC void D_802235EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802235EC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802235F0: jr          $ra
    // 0x802235F4: sw          $a0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r4;
    return;
    // 0x802235F4: sw          $a0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void D_80298744(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802987C4: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x802987C8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802987CC: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802987D0: sw          $a0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r4;
    // 0x802987D4: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x802987D8: sw          $a2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r6;
    // 0x802987DC: jal         0x80228DE0
    // 0x802987E0: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    func_80228DE0(rdram, ctx);
        goto after_0;
    // 0x802987E0: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    after_0:
    // 0x802987E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802987E8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802987EC: lw          $a2, 0x88($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X88);
    // 0x802987F0: jal         0x8022A0D0
    // 0x802987F4: lui         $a3, 0x4100
    ctx->r7 = S32(0X4100 << 16);
    static_3_8022A0D0(rdram, ctx);
        goto after_1;
    // 0x802987F4: lui         $a3, 0x4100
    ctx->r7 = S32(0X4100 << 16);
    after_1:
    // 0x802987F8: lw          $t6, 0x80($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X80);
    // 0x802987FC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80298800: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80298804: lwc1        $f2, 0x20($t6)
    ctx->f2.u32l = MEM_W(ctx->r14, 0X20);
    // 0x80298808: lui         $at, 0xC2C8
    ctx->r1 = S32(0XC2C8 << 16);
    // 0x8029880C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80298810: mul.s       $f0, $f2, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80298814: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80298818: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8029881C: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x80298820: nop

    // 0x80298824: mul.s       $f8, $f0, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x80298828: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x8029882C: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x80298830: jal         0x8022A0D0
    // 0x80298834: nop

    static_3_8022A0D0(rdram, ctx);
        goto after_2;
    // 0x80298834: nop

    after_2:
    // 0x80298838: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x8029883C: jal         0x802CF888
    // 0x80298840: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    static_3_802CF888(rdram, ctx);
        goto after_3;
    // 0x80298840: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_3:
    // 0x80298844: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80298848: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8029884C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80298850: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    // 0x80298854: add.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f0.fl + ctx->f10.fl;
    // 0x80298858: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x8029885C: jal         0x802D01D4
    // 0x80298860: nop

    static_3_802D01D4(rdram, ctx);
        goto after_4;
    // 0x80298860: nop

    after_4:
    // 0x80298864: lw          $v0, 0x80($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X80);
    // 0x80298868: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8029886C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80298870: addiu       $t7, $v0, 0x7FFF
    ctx->r15 = ADD32(ctx->r2, 0X7FFF);
    // 0x80298874: lbu         $t7, 0x15B5($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X15B5);
    // 0x80298878: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8029887C: bnel        $t7, $zero, L_80298900
    if (ctx->r15 != 0) {
        // 0x80298880: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_80298900;
    }
    goto skip_0;
    // 0x80298880: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x80298884: lwc1        $f18, 0x20($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X20);
    // 0x80298888: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8029888C: addiu       $at, $v0, 0x7FFF
    ctx->r1 = ADD32(ctx->r2, 0X7FFF);
    // 0x80298890: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80298894: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x80298898: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8029889C: bc1fl       L_80298900
    if (!c1cs) {
        // 0x802988A0: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_80298900;
    }
    goto skip_1;
    // 0x802988A0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_1:
    // 0x802988A4: sb          $t8, 0x15B5($at)
    MEM_B(0X15B5, ctx->r1) = ctx->r24;
    // 0x802988A8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802988AC: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802988B0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802988B4: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802988B8: mul.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x802988BC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802988C0: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802988C4: mul.s       $f16, $f10, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x802988C8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802988CC: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802988D0: mul.s       $f4, $f18, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f12.fl);
    // 0x802988D4: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x802988D8: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    // 0x802988DC: mul.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x802988E0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802988E4: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x802988E8: swc1        $f12, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f12.u32l;
    // 0x802988EC: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x802988F0: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x802988F4: jal         0x80205C7C
    // 0x802988F8: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    static_3_80205C7C(rdram, ctx);
        goto after_5;
    // 0x802988F8: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_5:
    // 0x802988FC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80298900:
    // 0x80298900: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80298904: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    // 0x80298908: jr          $ra
    // 0x8029890C: nop

    return;
    // 0x8029890C: nop

;}
RECOMP_FUNC void D_802BAB08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802BAB88: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802BAB8C: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x802BAB90: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802BAB94: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802BAB98: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802BAB9C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802BABA0: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x802BABA4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802BABA8: swc1        $f0, 0xC8($a0)
    MEM_W(0XC8, ctx->r4) = ctx->f0.u32l;
    // 0x802BABAC: jal         0x80233CE8
    // 0x802BABB0: swc1        $f0, 0xCC($a0)
    MEM_W(0XCC, ctx->r4) = ctx->f0.u32l;
    static_3_80233CE8(rdram, ctx);
        goto after_0;
    // 0x802BABB0: swc1        $f0, 0xCC($a0)
    MEM_W(0XCC, ctx->r4) = ctx->f0.u32l;
    after_0:
    // 0x802BABB4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802BABB8: bne         $v0, $at, L_802BABE0
    if (ctx->r2 != ctx->r1) {
        // 0x802BABBC: sw          $v0, 0xC($s0)
        MEM_W(0XC, ctx->r16) = ctx->r2;
            goto L_802BABE0;
    }
    // 0x802BABBC: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x802BABC0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802BABC4: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802BABC8: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802BABCC: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802BABD0: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802BABD4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802BABD8: jal         0x80231A24
    // 0x802BABDC: addiu       $a3, $zero, 0x3BB
    ctx->r7 = ADD32(0, 0X3BB);
    static_3_80231A24(rdram, ctx);
        goto after_1;
    // 0x802BABDC: addiu       $a3, $zero, 0x3BB
    ctx->r7 = ADD32(0, 0X3BB);
    after_1:
L_802BABE0:
    // 0x802BABE0: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x802BABE4: addiu       $t7, $zero, 0x14
    ctx->r15 = ADD32(0, 0X14);
    // 0x802BABE8: addiu       $t8, $zero, 0xE1
    ctx->r24 = ADD32(0, 0XE1);
    // 0x802BABEC: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x802BABF0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x802BABF4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802BABF8: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802BABFC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802BAC00: jal         0x802344F4
    // 0x802BAC04: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    static_3_802344F4(rdram, ctx);
        goto after_2;
    // 0x802BAC04: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_2:
    // 0x802BAC08: jal         0x80233CE8
    // 0x802BAC0C: nop

    static_3_80233CE8(rdram, ctx);
        goto after_3;
    // 0x802BAC0C: nop

    after_3:
    // 0x802BAC10: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802BAC14: bne         $v0, $at, L_802BAC3C
    if (ctx->r2 != ctx->r1) {
        // 0x802BAC18: sw          $v0, 0x10($s0)
        MEM_W(0X10, ctx->r16) = ctx->r2;
            goto L_802BAC3C;
    }
    // 0x802BAC18: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x802BAC1C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802BAC20: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802BAC24: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802BAC28: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802BAC2C: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802BAC30: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802BAC34: jal         0x80231A24
    // 0x802BAC38: addiu       $a3, $zero, 0x3C3
    ctx->r7 = ADD32(0, 0X3C3);
    static_3_80231A24(rdram, ctx);
        goto after_4;
    // 0x802BAC38: addiu       $a3, $zero, 0x3C3
    ctx->r7 = ADD32(0, 0X3C3);
    after_4:
L_802BAC3C:
    // 0x802BAC3C: jal         0x80233CE8
    // 0x802BAC40: nop

    static_3_80233CE8(rdram, ctx);
        goto after_5;
    // 0x802BAC40: nop

    after_5:
    // 0x802BAC44: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802BAC48: bne         $v0, $at, L_802BAC70
    if (ctx->r2 != ctx->r1) {
        // 0x802BAC4C: sw          $v0, 0x14($s0)
        MEM_W(0X14, ctx->r16) = ctx->r2;
            goto L_802BAC70;
    }
    // 0x802BAC4C: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x802BAC50: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802BAC54: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802BAC58: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802BAC5C: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802BAC60: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802BAC64: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802BAC68: jal         0x80231A24
    // 0x802BAC6C: addiu       $a3, $zero, 0x3C7
    ctx->r7 = ADD32(0, 0X3C7);
    static_3_80231A24(rdram, ctx);
        goto after_6;
    // 0x802BAC6C: addiu       $a3, $zero, 0x3C7
    ctx->r7 = ADD32(0, 0X3C7);
    after_6:
L_802BAC70:
    // 0x802BAC70: jal         0x80233CE8
    // 0x802BAC74: nop

    static_3_80233CE8(rdram, ctx);
        goto after_7;
    // 0x802BAC74: nop

    after_7:
    // 0x802BAC78: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802BAC7C: bne         $v0, $at, L_802BACA4
    if (ctx->r2 != ctx->r1) {
        // 0x802BAC80: sw          $v0, 0x18($s0)
        MEM_W(0X18, ctx->r16) = ctx->r2;
            goto L_802BACA4;
    }
    // 0x802BAC80: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x802BAC84: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802BAC88: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802BAC8C: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802BAC90: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802BAC94: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802BAC98: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802BAC9C: jal         0x80231A24
    // 0x802BACA0: addiu       $a3, $zero, 0x3CB
    ctx->r7 = ADD32(0, 0X3CB);
    static_3_80231A24(rdram, ctx);
        goto after_8;
    // 0x802BACA0: addiu       $a3, $zero, 0x3CB
    ctx->r7 = ADD32(0, 0X3CB);
    after_8:
L_802BACA4:
    // 0x802BACA4: jal         0x80233CE8
    // 0x802BACA8: nop

    static_3_80233CE8(rdram, ctx);
        goto after_9;
    // 0x802BACA8: nop

    after_9:
    // 0x802BACAC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802BACB0: bne         $v0, $at, L_802BACD8
    if (ctx->r2 != ctx->r1) {
        // 0x802BACB4: sw          $v0, 0x1C($s0)
        MEM_W(0X1C, ctx->r16) = ctx->r2;
            goto L_802BACD8;
    }
    // 0x802BACB4: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x802BACB8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802BACBC: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802BACC0: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802BACC4: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802BACC8: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802BACCC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802BACD0: jal         0x80231A24
    // 0x802BACD4: addiu       $a3, $zero, 0x3CF
    ctx->r7 = ADD32(0, 0X3CF);
    static_3_80231A24(rdram, ctx);
        goto after_10;
    // 0x802BACD4: addiu       $a3, $zero, 0x3CF
    ctx->r7 = ADD32(0, 0X3CF);
    after_10:
L_802BACD8:
    // 0x802BACD8: jal         0x80233CE8
    // 0x802BACDC: nop

    static_3_80233CE8(rdram, ctx);
        goto after_11;
    // 0x802BACDC: nop

    after_11:
    // 0x802BACE0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802BACE4: bne         $v0, $at, L_802BAD0C
    if (ctx->r2 != ctx->r1) {
        // 0x802BACE8: sw          $v0, 0x20($s0)
        MEM_W(0X20, ctx->r16) = ctx->r2;
            goto L_802BAD0C;
    }
    // 0x802BACE8: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x802BACEC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802BACF0: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802BACF4: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802BACF8: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802BACFC: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802BAD00: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802BAD04: jal         0x80231A24
    // 0x802BAD08: addiu       $a3, $zero, 0x3D4
    ctx->r7 = ADD32(0, 0X3D4);
    static_3_80231A24(rdram, ctx);
        goto after_12;
    // 0x802BAD08: addiu       $a3, $zero, 0x3D4
    ctx->r7 = ADD32(0, 0X3D4);
    after_12:
L_802BAD0C:
    // 0x802BAD0C: jal         0x80233CE8
    // 0x802BAD10: nop

    static_3_80233CE8(rdram, ctx);
        goto after_13;
    // 0x802BAD10: nop

    after_13:
    // 0x802BAD14: jal         0x80233CE8
    // 0x802BAD18: sw          $v0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r2;
    static_3_80233CE8(rdram, ctx);
        goto after_14;
    // 0x802BAD18: sw          $v0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r2;
    after_14:
    // 0x802BAD1C: jal         0x80233CE8
    // 0x802BAD20: sw          $v0, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r2;
    static_3_80233CE8(rdram, ctx);
        goto after_15;
    // 0x802BAD20: sw          $v0, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r2;
    after_15:
    // 0x802BAD24: jal         0x80233CE8
    // 0x802BAD28: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
    static_3_80233CE8(rdram, ctx);
        goto after_16;
    // 0x802BAD28: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
    after_16:
    // 0x802BAD2C: jal         0x80233CE8
    // 0x802BAD30: sw          $v0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r2;
    static_3_80233CE8(rdram, ctx);
        goto after_17;
    // 0x802BAD30: sw          $v0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r2;
    after_17:
    // 0x802BAD34: jal         0x80233CE8
    // 0x802BAD38: sw          $v0, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r2;
    static_3_80233CE8(rdram, ctx);
        goto after_18;
    // 0x802BAD38: sw          $v0, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r2;
    after_18:
    // 0x802BAD3C: lw          $v1, 0x1BC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1BC);
    // 0x802BAD40: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x802BAD44: sw          $v0, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->r2;
    // 0x802BAD48: beq         $v1, $at, L_802BAD64
    if (ctx->r3 == ctx->r1) {
        // 0x802BAD4C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_802BAD64;
    }
    // 0x802BAD4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802BAD50: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x802BAD54: beq         $v1, $at, L_802BAD74
    if (ctx->r3 == ctx->r1) {
        // 0x802BAD58: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_802BAD74;
    }
    // 0x802BAD58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802BAD5C: b           L_802BAD84
    // 0x802BAD60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_802BAD84;
    // 0x802BAD60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_802BAD64:
    // 0x802BAD64: jal         0x802F6348
    // 0x802BAD68: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802F6348(rdram, ctx);
        goto after_19;
    // 0x802BAD68: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_19:
    // 0x802BAD6C: b           L_802BAD90
    // 0x802BAD70: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
        goto L_802BAD90;
    // 0x802BAD70: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
L_802BAD74:
    // 0x802BAD74: jal         0x802F6348
    // 0x802BAD78: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_802F6348(rdram, ctx);
        goto after_20;
    // 0x802BAD78: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_20:
    // 0x802BAD7C: b           L_802BAD90
    // 0x802BAD80: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
        goto L_802BAD90;
    // 0x802BAD80: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
L_802BAD84:
    // 0x802BAD84: jal         0x802F6348
    // 0x802BAD88: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802F6348(rdram, ctx);
        goto after_21;
    // 0x802BAD88: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_21:
    // 0x802BAD8C: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
L_802BAD90:
    // 0x802BAD90: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802BAD94: addiu       $t1, $zero, 0x9
    ctx->r9 = ADD32(0, 0X9);
    // 0x802BAD98: lbu         $t0, 0x3624($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X3624);
    // 0x802BAD9C: beql        $t0, $at, L_802BADAC
    if (ctx->r8 == ctx->r1) {
        // 0x802BADA0: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_802BADAC;
    }
    goto skip_0;
    // 0x802BADA0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x802BADA4: sb          $t1, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r9;
    // 0x802BADA8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_802BADAC:
    // 0x802BADAC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802BADB0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x802BADB4: jr          $ra
    // 0x802BADB8: nop

    return;
    // 0x802BADB8: nop

;}
RECOMP_FUNC void D_80228D4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80228D4C: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x80228D50: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x80228D54: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80228D58: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228D5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228D60: bgez        $v0, L_80228D7C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80228D64: addiu       $t6, $v0, -0x1
        ctx->r14 = ADD32(ctx->r2, -0X1);
            goto L_80228D7C;
    }
    // 0x80228D64: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x80228D68: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80228D6C: jal         0x80231A24
    // 0x80228D70: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x80228D70: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x80228D74: b           L_80228D84
    // 0x80228D78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80228D84;
    // 0x80228D78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80228D7C:
    // 0x80228D7C: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80228D80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80228D84:
    // 0x80228D84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80228D88: jr          $ra
    // 0x80228D8C: nop

    return;
    // 0x80228D8C: nop

;}
RECOMP_FUNC void D_80240110(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80240110: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80240114: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80240118: lw          $t6, 0x2C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X2C);
    // 0x8024011C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80240120: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80240124: bne         $t6, $at, L_802401DC
    if (ctx->r14 != ctx->r1) {
        // 0x80240128: lw          $a2, 0x18($a0)
        ctx->r6 = MEM_W(ctx->r4, 0X18);
            goto L_802401DC;
    }
    // 0x80240128: lw          $a2, 0x18($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X18);
    // 0x8024012C: beq         $a2, $zero, L_802401DC
    if (ctx->r6 == 0) {
        // 0x80240130: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_802401DC;
    }
    // 0x80240130: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x80240134: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x80240138: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8024013C: jal         0x80249660
    // 0x80240140: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    static_3_80249660(rdram, ctx);
        goto after_0;
    // 0x80240140: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    after_0:
    // 0x80240144: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x80240148: beq         $v0, $zero, L_802401DC
    if (ctx->r2 == 0) {
        // 0x8024014C: lw          $a3, 0x38($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X38);
            goto L_802401DC;
    }
    // 0x8024014C: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x80240150: lw          $t7, 0x84($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X84);
    // 0x80240154: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x80240158: beql        $t7, $zero, L_802401BC
    if (ctx->r15 == 0) {
        // 0x8024015C: sh          $zero, 0x28($sp)
        MEM_H(0X28, ctx->r29) = 0;
            goto L_802401BC;
    }
    goto skip_0;
    // 0x8024015C: sh          $zero, 0x28($sp)
    MEM_H(0X28, ctx->r29) = 0;
    skip_0:
    // 0x80240160: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80240164: jal         0x80249228
    // 0x80240168: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    static_3_80249228(rdram, ctx);
        goto after_1;
    // 0x80240168: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    after_1:
    // 0x8024016C: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x80240170: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80240174: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x80240178: lw          $t0, 0x80($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X80);
    // 0x8024017C: addu        $t9, $v0, $t8
    ctx->r25 = ADD32(ctx->r2, ctx->r24);
    // 0x80240180: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x80240184: lw          $t1, 0x8($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X8);
    // 0x80240188: slt         $at, $t9, $t1
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x8024018C: bnel        $at, $zero, L_802401BC
    if (ctx->r1 != 0) {
        // 0x80240190: sh          $zero, 0x28($sp)
        MEM_H(0X28, ctx->r29) = 0;
            goto L_802401BC;
    }
    goto skip_1;
    // 0x80240190: sh          $zero, 0x28($sp)
    MEM_H(0X28, ctx->r29) = 0;
    skip_1:
    // 0x80240194: lw          $a1, 0x7C($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X7C);
    // 0x80240198: jal         0x8024920C
    // 0x8024019C: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    static_3_8024920C(rdram, ctx);
        goto after_2;
    // 0x8024019C: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    after_2:
    // 0x802401A0: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x802401A4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802401A8: lw          $v0, 0x84($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X84);
    // 0x802401AC: beq         $v0, $at, L_802401B8
    if (ctx->r2 == ctx->r1) {
        // 0x802401B0: addiu       $t2, $v0, -0x1
        ctx->r10 = ADD32(ctx->r2, -0X1);
            goto L_802401B8;
    }
    // 0x802401B0: addiu       $t2, $v0, -0x1
    ctx->r10 = ADD32(ctx->r2, -0X1);
    // 0x802401B4: sw          $t2, 0x84($a3)
    MEM_W(0X84, ctx->r7) = ctx->r10;
L_802401B8:
    // 0x802401B8: sh          $zero, 0x28($sp)
    MEM_H(0X28, ctx->r29) = 0;
L_802401BC:
    // 0x802401BC: lw          $t3, 0x24($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X24);
    // 0x802401C0: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x802401C4: addiu       $a0, $a3, 0x48
    ctx->r4 = ADD32(ctx->r7, 0X48);
    // 0x802401C8: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x802401CC: multu       $t3, $t4
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802401D0: mflo        $a2
    ctx->r6 = lo;
    // 0x802401D4: jal         0x8023F37C
    // 0x802401D8: nop

    static_3_8023F37C(rdram, ctx);
        goto after_3;
    // 0x802401D8: nop

    after_3:
L_802401DC:
    // 0x802401DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802401E0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x802401E4: jr          $ra
    // 0x802401E8: nop

    return;
    // 0x802401E8: nop

;}
RECOMP_FUNC void D_802D2F00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D2F80: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802D2F84: jr          $ra
    // 0x802D2F88: sb          $a1, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r5;
    return;
    // 0x802D2F88: sb          $a1, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void D_8027CDD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027CE50: addiu       $sp, $sp, -0x128
    ctx->r29 = ADD32(ctx->r29, -0X128);
    // 0x8027CE54: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x8027CE58: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x8027CE5C: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x8027CE60: sw          $a0, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->r4;
    // 0x8027CE64: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x8027CE68: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x8027CE6C: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x8027CE70: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x8027CE74: sdc1        $f26, 0x40($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X40, ctx->r29);
    // 0x8027CE78: sdc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X38, ctx->r29);
    // 0x8027CE7C: sdc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X30, ctx->r29);
    // 0x8027CE80: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x8027CE84: sw          $a2, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->r6;
    // 0x8027CE88: sw          $a3, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->r7;
    // 0x8027CE8C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x8027CE90: jal         0x802C53A8
    // 0x8027CE94: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    static_3_802C53A8(rdram, ctx);
        goto after_0;
    // 0x8027CE94: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8027CE98: addiu       $s4, $sp, 0xB4
    ctx->r20 = ADD32(ctx->r29, 0XB4);
    // 0x8027CE9C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8027CEA0: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x8027CEA4: jal         0x802C51D0
    // 0x8027CEA8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    static_3_802C51D0(rdram, ctx);
        goto after_1;
    // 0x8027CEA8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x8027CEAC: addiu       $a1, $sp, 0x11C
    ctx->r5 = ADD32(ctx->r29, 0X11C);
    // 0x8027CEB0: addiu       $t6, $sp, 0x118
    ctx->r14 = ADD32(ctx->r29, 0X118);
    // 0x8027CEB4: addiu       $t7, $sp, 0x114
    ctx->r15 = ADD32(ctx->r29, 0X114);
    // 0x8027CEB8: addiu       $t8, $sp, 0x110
    ctx->r24 = ADD32(ctx->r29, 0X110);
    // 0x8027CEBC: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x8027CEC0: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8027CEC4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8027CEC8: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x8027CECC: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x8027CED0: jal         0x802CF1C8
    // 0x8027CED4: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    static_3_802CF1C8(rdram, ctx);
        goto after_2;
    // 0x8027CED4: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_2:
    // 0x8027CED8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8027CEDC: beq         $s0, $at, L_8027CEF8
    if (ctx->r16 == ctx->r1) {
        // 0x8027CEE0: lw          $t9, 0x128($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X128);
            goto L_8027CEF8;
    }
    // 0x8027CEE0: lw          $t9, 0x128($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X128);
    // 0x8027CEE4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8027CEE8: beq         $s0, $at, L_8027CEF8
    if (ctx->r16 == ctx->r1) {
        // 0x8027CEEC: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_8027CEF8;
    }
    // 0x8027CEEC: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8027CEF0: bnel        $s0, $at, L_8027D308
    if (ctx->r16 != ctx->r1) {
        // 0x8027CEF4: or          $v0, $s3, $zero
        ctx->r2 = ctx->r19 | 0;
            goto L_8027D308;
    }
    goto skip_0;
    // 0x8027CEF4: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
    skip_0:
L_8027CEF8:
    // 0x8027CEF8: lw          $v1, 0x6F00($t9)
    ctx->r3 = MEM_W(ctx->r25, 0X6F00);
    // 0x8027CEFC: beql        $v1, $zero, L_8027D024
    if (ctx->r3 == 0) {
        // 0x8027CF00: lw          $s0, 0x128($sp)
        ctx->r16 = MEM_W(ctx->r29, 0X128);
            goto L_8027D024;
    }
    goto skip_1;
    // 0x8027CF00: lw          $s0, 0x128($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X128);
    skip_1:
    // 0x8027CF04: lw          $v0, 0x1A0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1A0);
    // 0x8027CF08: addiu       $s2, $sp, 0x74
    ctx->r18 = ADD32(ctx->r29, 0X74);
    // 0x8027CF0C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x8027CF10: lw          $t9, 0x64($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X64);
    // 0x8027CF14: lh          $t0, 0x60($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X60);
    // 0x8027CF18: jalr        $t9
    // 0x8027CF1C: addu        $a0, $t0, $v1
    ctx->r4 = ADD32(ctx->r8, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x8027CF1C: addu        $a0, $t0, $v1
    ctx->r4 = ADD32(ctx->r8, ctx->r3);
    after_3:
    // 0x8027CF20: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8027CF24: jal         0x802CF954
    // 0x8027CF28: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    static_3_802CF954(rdram, ctx);
        goto after_4;
    // 0x8027CF28: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_4:
    // 0x8027CF2C: lwc1        $f4, 0x140($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X140);
    // 0x8027CF30: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8027CF34: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x8027CF38: nop

    // 0x8027CF3C: bc1f        L_8027D020
    if (!c1cs) {
        // 0x8027CF40: nop
    
            goto L_8027D020;
    }
    // 0x8027CF40: nop

    // 0x8027CF44: jal         0x802CF7E8
    // 0x8027CF48: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    static_3_802CF7E8(rdram, ctx);
        goto after_5;
    // 0x8027CF48: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_5:
    // 0x8027CF4C: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x8027CF50: lwc1        $f12, 0x118($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X118);
    // 0x8027CF54: jal         0x802CF4D0
    // 0x8027CF58: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    static_3_802CF4D0(rdram, ctx);
        goto after_6;
    // 0x8027CF58: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    after_6:
    // 0x8027CF5C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8027CF60: lwc1        $f26, 0x0($at)
    ctx->f26.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8027CF64: lwc1        $f24, 0x144($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X144);
    // 0x8027CF68: mul.s       $f2, $f26, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f26.fl, ctx->f0.fl);
    // 0x8027CF6C: neg.s       $f6, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = -ctx->f24.fl;
    // 0x8027CF70: c.lt.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl < ctx->f2.fl;
    // 0x8027CF74: nop

    // 0x8027CF78: bc1f        L_8027D020
    if (!c1cs) {
        // 0x8027CF7C: nop
    
            goto L_8027D020;
    }
    // 0x8027CF7C: nop

    // 0x8027CF80: c.lt.s      $f2, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f2.fl < ctx->f24.fl;
    // 0x8027CF84: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8027CF88: bc1f        L_8027D020
    if (!c1cs) {
        // 0x8027CF8C: nop
    
            goto L_8027D020;
    }
    // 0x8027CF8C: nop

    // 0x8027CF90: jal         0x802CF888
    // 0x8027CF94: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    static_3_802CF888(rdram, ctx);
        goto after_7;
    // 0x8027CF94: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_7:
    // 0x8027CF98: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8027CF9C: lwc1        $f12, 0x114($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X114);
    // 0x8027CFA0: jal         0x802CF4D0
    // 0x8027CFA4: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    static_3_802CF4D0(rdram, ctx);
        goto after_8;
    // 0x8027CFA4: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    after_8:
    // 0x8027CFA8: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8027CFAC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8027CFB0: lwc1        $f16, 0x148($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X148);
    // 0x8027CFB4: lwc1        $f18, 0x14C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x8027CFB8: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x8027CFBC: nop

    // 0x8027CFC0: mul.s       $f2, $f26, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = MUL_S(ctx->f26.fl, ctx->f10.fl);
    // 0x8027CFC4: c.lt.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl < ctx->f16.fl;
    // 0x8027CFC8: nop

    // 0x8027CFCC: bc1f        L_8027D020
    if (!c1cs) {
        // 0x8027CFD0: nop
    
            goto L_8027D020;
    }
    // 0x8027CFD0: nop

    // 0x8027CFD4: c.lt.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl < ctx->f2.fl;
    // 0x8027CFD8: lw          $t1, 0x128($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X128);
    // 0x8027CFDC: lw          $t3, 0x130($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X130);
    // 0x8027CFE0: bc1f        L_8027D020
    if (!c1cs) {
        // 0x8027CFE4: nop
    
            goto L_8027D020;
    }
    // 0x8027CFE4: nop

    // 0x8027CFE8: lw          $t2, 0x6F00($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X6F00);
    // 0x8027CFEC: neg.s       $f4, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = -ctx->f20.fl;
    // 0x8027CFF0: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x8027CFF4: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x8027CFF8: lw          $t4, 0x134($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X134);
    // 0x8027CFFC: swc1        $f22, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f22.u32l;
    // 0x8027D000: lw          $t5, 0x138($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X138);
    // 0x8027D004: swc1        $f4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->f4.u32l;
    // 0x8027D008: lw          $t6, 0x13C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X13C);
    // 0x8027D00C: slt         $at, $s3, $t6
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8027D010: bne         $at, $zero, L_8027D020
    if (ctx->r1 != 0) {
        // 0x8027D014: nop
    
            goto L_8027D020;
    }
    // 0x8027D014: nop

    // 0x8027D018: b           L_8027D308
    // 0x8027D01C: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
        goto L_8027D308;
    // 0x8027D01C: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
L_8027D020:
    // 0x8027D020: lw          $s0, 0x128($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X128);
L_8027D024:
    // 0x8027D024: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8027D028: lwc1        $f26, 0x0($at)
    ctx->f26.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8027D02C: addiu       $s0, $s0, 0x365C
    ctx->r16 = ADD32(ctx->r16, 0X365C);
    // 0x8027D030: addiu       $s2, $sp, 0x74
    ctx->r18 = ADD32(ctx->r29, 0X74);
    // 0x8027D034: lwc1        $f24, 0x144($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X144);
    // 0x8027D038: jal         0x803187FC
    // 0x8027D03C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_803187FC(rdram, ctx);
        goto after_9;
    // 0x8027D03C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x8027D040: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8027D044: bne         $v0, $at, L_8027D17C
    if (ctx->r2 != ctx->r1) {
        // 0x8027D048: lw          $v1, 0x128($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X128);
            goto L_8027D17C;
    }
    // 0x8027D048: lw          $v1, 0x128($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X128);
    // 0x8027D04C: lw          $v0, 0x37FC($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X37FC);
    // 0x8027D050: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x8027D054: lh          $t7, 0x60($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X60);
    // 0x8027D058: lw          $t9, 0x64($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X64);
    // 0x8027D05C: addu        $a0, $t7, $v1
    ctx->r4 = ADD32(ctx->r15, ctx->r3);
    // 0x8027D060: jalr        $t9
    // 0x8027D064: addiu       $a0, $a0, 0x365C
    ctx->r4 = ADD32(ctx->r4, 0X365C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x8027D064: addiu       $a0, $a0, 0x365C
    ctx->r4 = ADD32(ctx->r4, 0X365C);
    after_10:
    // 0x8027D068: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8027D06C: jal         0x802CF954
    // 0x8027D070: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    static_3_802CF954(rdram, ctx);
        goto after_11;
    // 0x8027D070: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_11:
    // 0x8027D074: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8027D078: jal         0x80319298
    // 0x8027D07C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80319298(rdram, ctx);
        goto after_12;
    // 0x8027D07C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x8027D080: beq         $v0, $zero, L_8027D098
    if (ctx->r2 == 0) {
        // 0x8027D084: lwc1        $f0, 0x140($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X140);
            goto L_8027D098;
    }
    // 0x8027D084: lwc1        $f0, 0x140($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X140);
    // 0x8027D088: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x8027D08C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8027D090: b           L_8027D09C
    // 0x8027D094: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
        goto L_8027D09C;
    // 0x8027D094: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
L_8027D098:
    // 0x8027D098: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
L_8027D09C:
    // 0x8027D09C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8027D0A0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x8027D0A4: bc1fl       L_8027D180
    if (!c1cs) {
        // 0x8027D0A8: lw          $v0, 0x128($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X128);
            goto L_8027D180;
    }
    goto skip_2;
    // 0x8027D0A8: lw          $v0, 0x128($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X128);
    skip_2:
    // 0x8027D0AC: jal         0x802CF7E8
    // 0x8027D0B0: neg.s       $f20, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f20.fl = -ctx->f24.fl;
    static_3_802CF7E8(rdram, ctx);
        goto after_13;
    // 0x8027D0B0: neg.s       $f20, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f20.fl = -ctx->f24.fl;
    after_13:
    // 0x8027D0B4: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x8027D0B8: lwc1        $f12, 0x118($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X118);
    // 0x8027D0BC: jal         0x802CF4D0
    // 0x8027D0C0: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    static_3_802CF4D0(rdram, ctx);
        goto after_14;
    // 0x8027D0C0: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    after_14:
    // 0x8027D0C4: mul.s       $f2, $f26, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f26.fl, ctx->f0.fl);
    // 0x8027D0C8: c.lt.s      $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f20.fl < ctx->f2.fl;
    // 0x8027D0CC: nop

    // 0x8027D0D0: bc1fl       L_8027D180
    if (!c1cs) {
        // 0x8027D0D4: lw          $v0, 0x128($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X128);
            goto L_8027D180;
    }
    goto skip_3;
    // 0x8027D0D4: lw          $v0, 0x128($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X128);
    skip_3:
    // 0x8027D0D8: c.lt.s      $f2, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f2.fl < ctx->f24.fl;
    // 0x8027D0DC: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8027D0E0: bc1fl       L_8027D180
    if (!c1cs) {
        // 0x8027D0E4: lw          $v0, 0x128($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X128);
            goto L_8027D180;
    }
    goto skip_4;
    // 0x8027D0E4: lw          $v0, 0x128($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X128);
    skip_4:
    // 0x8027D0E8: jal         0x802CF888
    // 0x8027D0EC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    static_3_802CF888(rdram, ctx);
        goto after_15;
    // 0x8027D0EC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_15:
    // 0x8027D0F0: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8027D0F4: lwc1        $f12, 0x114($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X114);
    // 0x8027D0F8: jal         0x802CF4D0
    // 0x8027D0FC: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    static_3_802CF4D0(rdram, ctx);
        goto after_16;
    // 0x8027D0FC: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    after_16:
    // 0x8027D100: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8027D104: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8027D108: lwc1        $f10, 0x148($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X148);
    // 0x8027D10C: lwc1        $f16, 0x14C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x8027D110: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x8027D114: nop

    // 0x8027D118: mul.s       $f2, $f26, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = MUL_S(ctx->f26.fl, ctx->f8.fl);
    // 0x8027D11C: c.lt.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl < ctx->f10.fl;
    // 0x8027D120: nop

    // 0x8027D124: bc1f        L_8027D17C
    if (!c1cs) {
        // 0x8027D128: nop
    
            goto L_8027D17C;
    }
    // 0x8027D128: nop

    // 0x8027D12C: c.lt.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl < ctx->f2.fl;
    // 0x8027D130: lw          $t8, 0x130($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X130);
    // 0x8027D134: bc1f        L_8027D17C
    if (!c1cs) {
        // 0x8027D138: sll         $v1, $s3, 2
        ctx->r3 = S32(ctx->r19 << 2);
            goto L_8027D17C;
    }
    // 0x8027D138: sll         $v1, $s3, 2
    ctx->r3 = S32(ctx->r19 << 2);
    // 0x8027D13C: addu        $t0, $t8, $v1
    ctx->r8 = ADD32(ctx->r24, ctx->r3);
    // 0x8027D140: sw          $s0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r16;
    // 0x8027D144: lw          $t1, 0x134($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X134);
    // 0x8027D148: neg.s       $f18, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = -ctx->f20.fl;
    // 0x8027D14C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x8027D150: addu        $t2, $t1, $v1
    ctx->r10 = ADD32(ctx->r9, ctx->r3);
    // 0x8027D154: swc1        $f22, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->f22.u32l;
    // 0x8027D158: lw          $t3, 0x138($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X138);
    // 0x8027D15C: addu        $t4, $t3, $v1
    ctx->r12 = ADD32(ctx->r11, ctx->r3);
    // 0x8027D160: swc1        $f18, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f18.u32l;
    // 0x8027D164: lw          $t5, 0x13C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X13C);
    // 0x8027D168: slt         $at, $s3, $t5
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x8027D16C: bnel        $at, $zero, L_8027D180
    if (ctx->r1 != 0) {
        // 0x8027D170: lw          $v0, 0x128($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X128);
            goto L_8027D180;
    }
    goto skip_5;
    // 0x8027D170: lw          $v0, 0x128($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X128);
    skip_5:
    // 0x8027D174: b           L_8027D308
    // 0x8027D178: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
        goto L_8027D308;
    // 0x8027D178: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
L_8027D17C:
    // 0x8027D17C: lw          $v0, 0x128($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X128);
L_8027D180:
    // 0x8027D180: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8027D184: lbu         $t6, 0x6EFC($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X6EFC);
    // 0x8027D188: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8027D18C: blezl       $t6, L_8027D308
    if (SIGNED(ctx->r14) <= 0) {
        // 0x8027D190: or          $v0, $s3, $zero
        ctx->r2 = ctx->r19 | 0;
            goto L_8027D308;
    }
    goto skip_6;
    // 0x8027D190: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
    skip_6:
    // 0x8027D194: lw          $a2, 0x6EEC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X6EEC);
L_8027D198:
    // 0x8027D198: beql        $a2, $zero, L_8027D2EC
    if (ctx->r6 == 0) {
        // 0x8027D19C: lw          $v0, 0x128($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X128);
            goto L_8027D2EC;
    }
    goto skip_7;
    // 0x8027D19C: lw          $v0, 0x128($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X128);
    skip_7:
    // 0x8027D1A0: jal         0x80317E10
    // 0x8027D1A4: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    static_3_80317E10(rdram, ctx);
        goto after_17;
    // 0x8027D1A4: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_17:
    // 0x8027D1A8: beql        $v0, $zero, L_8027D2EC
    if (ctx->r2 == 0) {
        // 0x8027D1AC: lw          $v0, 0x128($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X128);
            goto L_8027D2EC;
    }
    goto skip_8;
    // 0x8027D1AC: lw          $v0, 0x128($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X128);
    skip_8:
    // 0x8027D1B0: lw          $a2, 0x6EEC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X6EEC);
    // 0x8027D1B4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x8027D1B8: lw          $v0, 0x1A0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X1A0);
    // 0x8027D1BC: lw          $t9, 0x64($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X64);
    // 0x8027D1C0: lh          $t7, 0x60($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X60);
    // 0x8027D1C4: jalr        $t9
    // 0x8027D1C8: addu        $a0, $t7, $a2
    ctx->r4 = ADD32(ctx->r15, ctx->r6);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_18;
    // 0x8027D1C8: addu        $a0, $t7, $a2
    ctx->r4 = ADD32(ctx->r15, ctx->r6);
    after_18:
    // 0x8027D1CC: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8027D1D0: jal         0x802CF954
    // 0x8027D1D4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    static_3_802CF954(rdram, ctx);
        goto after_19;
    // 0x8027D1D4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_19:
    // 0x8027D1D8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8027D1DC: jal         0x80319298
    // 0x8027D1E0: lw          $a0, 0x6EEC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X6EEC);
    static_3_80319298(rdram, ctx);
        goto after_20;
    // 0x8027D1E0: lw          $a0, 0x6EEC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X6EEC);
    after_20:
    // 0x8027D1E4: beq         $v0, $zero, L_8027D1FC
    if (ctx->r2 == 0) {
        // 0x8027D1E8: lwc1        $f0, 0x140($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X140);
            goto L_8027D1FC;
    }
    // 0x8027D1E8: lwc1        $f0, 0x140($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X140);
    // 0x8027D1EC: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x8027D1F0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8027D1F4: b           L_8027D200
    // 0x8027D1F8: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
        goto L_8027D200;
    // 0x8027D1F8: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
L_8027D1FC:
    // 0x8027D1FC: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
L_8027D200:
    // 0x8027D200: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8027D204: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x8027D208: bc1fl       L_8027D2EC
    if (!c1cs) {
        // 0x8027D20C: lw          $v0, 0x128($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X128);
            goto L_8027D2EC;
    }
    goto skip_9;
    // 0x8027D20C: lw          $v0, 0x128($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X128);
    skip_9:
    // 0x8027D210: jal         0x802CF7E8
    // 0x8027D214: neg.s       $f20, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f20.fl = -ctx->f24.fl;
    static_3_802CF7E8(rdram, ctx);
        goto after_21;
    // 0x8027D214: neg.s       $f20, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f20.fl = -ctx->f24.fl;
    after_21:
    // 0x8027D218: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x8027D21C: lwc1        $f12, 0x118($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X118);
    // 0x8027D220: jal         0x802CF4D0
    // 0x8027D224: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    static_3_802CF4D0(rdram, ctx);
        goto after_22;
    // 0x8027D224: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    after_22:
    // 0x8027D228: mul.s       $f2, $f26, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f26.fl, ctx->f0.fl);
    // 0x8027D22C: c.lt.s      $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f20.fl < ctx->f2.fl;
    // 0x8027D230: nop

    // 0x8027D234: bc1fl       L_8027D2EC
    if (!c1cs) {
        // 0x8027D238: lw          $v0, 0x128($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X128);
            goto L_8027D2EC;
    }
    goto skip_10;
    // 0x8027D238: lw          $v0, 0x128($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X128);
    skip_10:
    // 0x8027D23C: c.lt.s      $f2, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f2.fl < ctx->f24.fl;
    // 0x8027D240: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8027D244: bc1fl       L_8027D2EC
    if (!c1cs) {
        // 0x8027D248: lw          $v0, 0x128($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X128);
            goto L_8027D2EC;
    }
    goto skip_11;
    // 0x8027D248: lw          $v0, 0x128($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X128);
    skip_11:
    // 0x8027D24C: jal         0x802CF888
    // 0x8027D250: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    static_3_802CF888(rdram, ctx);
        goto after_23;
    // 0x8027D250: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_23:
    // 0x8027D254: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8027D258: lwc1        $f12, 0x114($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X114);
    // 0x8027D25C: jal         0x802CF4D0
    // 0x8027D260: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    static_3_802CF4D0(rdram, ctx);
        goto after_24;
    // 0x8027D260: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    after_24:
    // 0x8027D264: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8027D268: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8027D26C: lwc1        $f8, 0x148($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X148);
    // 0x8027D270: lwc1        $f10, 0x14C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x8027D274: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8027D278: nop

    // 0x8027D27C: mul.s       $f2, $f26, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = MUL_S(ctx->f26.fl, ctx->f6.fl);
    // 0x8027D280: c.lt.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl < ctx->f8.fl;
    // 0x8027D284: nop

    // 0x8027D288: bc1f        L_8027D2E8
    if (!c1cs) {
        // 0x8027D28C: nop
    
            goto L_8027D2E8;
    }
    // 0x8027D28C: nop

    // 0x8027D290: c.lt.s      $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f10.fl < ctx->f2.fl;
    // 0x8027D294: lw          $t8, 0x130($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X130);
    // 0x8027D298: bc1fl       L_8027D2EC
    if (!c1cs) {
        // 0x8027D29C: lw          $v0, 0x128($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X128);
            goto L_8027D2EC;
    }
    goto skip_12;
    // 0x8027D29C: lw          $v0, 0x128($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X128);
    skip_12:
    // 0x8027D2A0: lw          $v0, 0x6EEC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X6EEC);
    // 0x8027D2A4: sll         $v1, $s3, 2
    ctx->r3 = S32(ctx->r19 << 2);
    // 0x8027D2A8: addu        $t0, $t8, $v1
    ctx->r8 = ADD32(ctx->r24, ctx->r3);
    // 0x8027D2AC: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
    // 0x8027D2B0: lw          $t1, 0x134($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X134);
    // 0x8027D2B4: neg.s       $f16, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = -ctx->f20.fl;
    // 0x8027D2B8: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x8027D2BC: addu        $t2, $t1, $v1
    ctx->r10 = ADD32(ctx->r9, ctx->r3);
    // 0x8027D2C0: swc1        $f22, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->f22.u32l;
    // 0x8027D2C4: lw          $t3, 0x138($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X138);
    // 0x8027D2C8: addu        $t4, $t3, $v1
    ctx->r12 = ADD32(ctx->r11, ctx->r3);
    // 0x8027D2CC: swc1        $f16, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f16.u32l;
    // 0x8027D2D0: lw          $t5, 0x13C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X13C);
    // 0x8027D2D4: slt         $at, $s3, $t5
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x8027D2D8: bnel        $at, $zero, L_8027D2EC
    if (ctx->r1 != 0) {
        // 0x8027D2DC: lw          $v0, 0x128($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X128);
            goto L_8027D2EC;
    }
    goto skip_13;
    // 0x8027D2DC: lw          $v0, 0x128($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X128);
    skip_13:
    // 0x8027D2E0: b           L_8027D308
    // 0x8027D2E4: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
        goto L_8027D308;
    // 0x8027D2E4: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
L_8027D2E8:
    // 0x8027D2E8: lw          $v0, 0x128($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X128);
L_8027D2EC:
    // 0x8027D2EC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8027D2F0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8027D2F4: lbu         $t6, 0x6EFC($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X6EFC);
    // 0x8027D2F8: slt         $at, $s1, $t6
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8027D2FC: bnel        $at, $zero, L_8027D198
    if (ctx->r1 != 0) {
        // 0x8027D300: lw          $a2, 0x6EEC($s0)
        ctx->r6 = MEM_W(ctx->r16, 0X6EEC);
            goto L_8027D198;
    }
    goto skip_14;
    // 0x8027D300: lw          $a2, 0x6EEC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X6EEC);
    skip_14:
    // 0x8027D304: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
L_8027D308:
    // 0x8027D308: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x8027D30C: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x8027D310: ldc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X30);
    // 0x8027D314: ldc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X38);
    // 0x8027D318: ldc1        $f26, 0x40($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X40);
    // 0x8027D31C: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x8027D320: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x8027D324: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x8027D328: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x8027D32C: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x8027D330: jr          $ra
    // 0x8027D334: addiu       $sp, $sp, 0x128
    ctx->r29 = ADD32(ctx->r29, 0X128);
    return;
    // 0x8027D334: addiu       $sp, $sp, 0x128
    ctx->r29 = ADD32(ctx->r29, 0X128);
;}
RECOMP_FUNC void D_80289FE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028A068: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8028A06C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8028A070: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x8028A074: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8028A078: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8028A07C: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x8028A080: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x8028A084: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x8028A088: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x8028A08C: addiu       $a3, $sp, 0x34
    ctx->r7 = ADD32(ctx->r29, 0X34);
    // 0x8028A090: jal         0x8028C2C0
    // 0x8028A094: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    static_3_8028C2C0(rdram, ctx);
        goto after_0;
    // 0x8028A094: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_0:
    // 0x8028A098: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8028A09C: lwc1        $f6, 0x0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X0);
    // 0x8028A0A0: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8028A0A4: lwc1        $f18, 0x10($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X10);
    // 0x8028A0A8: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8028A0AC: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8028A0B0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8028A0B4: mul.s       $f6, $f10, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x8028A0B8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8028A0BC: add.s       $f18, $f8, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x8028A0C0: lwc1        $f6, 0x20($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X20);
    // 0x8028A0C4: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8028A0C8: mul.s       $f6, $f8, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x8028A0CC: add.s       $f18, $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x8028A0D0: lwc1        $f6, 0x30($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X30);
    // 0x8028A0D4: add.s       $f2, $f18, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x8028A0D8: lwc1        $f18, 0x4($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X4);
    // 0x8028A0DC: mul.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x8028A0E0: lwc1        $f18, 0x14($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X14);
    // 0x8028A0E4: mul.s       $f18, $f10, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x8028A0E8: add.s       $f6, $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x8028A0EC: lwc1        $f18, 0x24($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X24);
    // 0x8028A0F0: mul.s       $f18, $f8, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x8028A0F4: add.s       $f6, $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x8028A0F8: lwc1        $f18, 0x34($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X34);
    // 0x8028A0FC: add.s       $f12, $f6, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x8028A100: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    // 0x8028A104: mul.s       $f18, $f4, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8028A108: lwc1        $f6, 0x18($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X18);
    // 0x8028A10C: mul.s       $f6, $f10, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x8028A110: add.s       $f18, $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x8028A114: lwc1        $f6, 0x28($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X28);
    // 0x8028A118: mul.s       $f6, $f8, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x8028A11C: add.s       $f18, $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x8028A120: lwc1        $f6, 0x38($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X38);
    // 0x8028A124: add.s       $f14, $f18, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x8028A128: lwc1        $f18, 0xC($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XC);
    // 0x8028A12C: mul.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x8028A130: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x8028A134: mul.s       $f18, $f10, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x8028A138: lwc1        $f4, 0x2C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x8028A13C: add.s       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x8028A140: mul.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x8028A144: lwc1        $f8, 0x3C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x8028A148: add.s       $f18, $f10, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x8028A14C: add.s       $f0, $f18, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x8028A150: div.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
    // 0x8028A154: div.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = DIV_S(ctx->f12.fl, ctx->f0.fl);
    // 0x8028A158: c.lt.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl < ctx->f16.fl;
    // 0x8028A15C: nop

    // 0x8028A160: bc1t        L_8028A1B0
    if (c1cs) {
        // 0x8028A164: div.s       $f14, $f14, $f0
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = DIV_S(ctx->f14.fl, ctx->f0.fl);
            goto L_8028A1B0;
    }
    // 0x8028A164: div.s       $f14, $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = DIV_S(ctx->f14.fl, ctx->f0.fl);
    // 0x8028A168: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8028A16C: nop

    // 0x8028A170: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x8028A174: nop

    // 0x8028A178: bc1t        L_8028A1B0
    if (c1cs) {
        // 0x8028A17C: nop
    
            goto L_8028A1B0;
    }
    // 0x8028A17C: nop

    // 0x8028A180: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    // 0x8028A184: nop

    // 0x8028A188: bc1t        L_8028A1B0
    if (c1cs) {
        // 0x8028A18C: nop
    
            goto L_8028A1B0;
    }
    // 0x8028A18C: nop

    // 0x8028A190: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x8028A194: nop

    // 0x8028A198: bc1t        L_8028A1B0
    if (c1cs) {
        // 0x8028A19C: nop
    
            goto L_8028A1B0;
    }
    // 0x8028A19C: nop

    // 0x8028A1A0: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x8028A1A4: lui         $at, 0x4320
    ctx->r1 = S32(0X4320 << 16);
    // 0x8028A1A8: bc1fl       L_8028A1BC
    if (!c1cs) {
        // 0x8028A1AC: mtc1        $at, $f0
        ctx->f0.u32l = ctx->r1;
            goto L_8028A1BC;
    }
    goto skip_0;
    // 0x8028A1AC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    skip_0:
L_8028A1B0:
    // 0x8028A1B0: b           L_8028A200
    // 0x8028A1B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8028A200;
    // 0x8028A1B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8028A1B8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
L_8028A1BC:
    // 0x8028A1BC: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x8028A1C0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8028A1C4: mul.s       $f4, $f2, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x8028A1C8: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x8028A1CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8028A1D0: mul.s       $f18, $f12, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x8028A1D4: add.s       $f10, $f4, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x8028A1D8: add.s       $f8, $f18, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f14.fl;
    // 0x8028A1DC: trunc.w.s   $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x8028A1E0: trunc.w.s   $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x8028A1E4: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x8028A1E8: nop

    // 0x8028A1EC: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x8028A1F0: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x8028A1F4: mfc1        $t0, $f4
    ctx->r8 = (int32_t)ctx->f4.u32l;
    // 0x8028A1F8: nop

    // 0x8028A1FC: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
L_8028A200:
    // 0x8028A200: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8028A204: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8028A208: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8028A20C: jr          $ra
    // 0x8028A210: nop

    return;
    // 0x8028A210: nop

;}
RECOMP_FUNC void D_80203764(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80203764: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x80203768: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x8020376C: subu        $t8, $t8, $t6
    ctx->r24 = SUB32(ctx->r24, ctx->r14);
    // 0x80203770: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80203774: subu        $t8, $t8, $t6
    ctx->r24 = SUB32(ctx->r24, ctx->r14);
    // 0x80203778: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x8020377C: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x80203780: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80203784: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80203788: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8020378C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80203790: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80203794: jr          $ra
    // 0x80203798: lbu         $v0, 0x8C($t9)
    ctx->r2 = MEM_BU(ctx->r25, 0X8C);
    return;
    // 0x80203798: lbu         $v0, 0x8C($t9)
    ctx->r2 = MEM_BU(ctx->r25, 0X8C);
;}
RECOMP_FUNC void D_8027EB8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027EC04: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x8027EC08: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x8027EC0C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8027EC10: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8027EC14: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x8027EC18: sw          $a2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r6;
    // 0x8027EC1C: sw          $a3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r7;
    // 0x8027EC20: sw          $zero, 0x68($sp)
    MEM_W(0X68, ctx->r29) = 0;
    // 0x8027EC24: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x8027EC28: jal         0x803087A8
    // 0x8027EC2C: lw          $a0, 0x65FC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X65FC);
    static_3_803087A8(rdram, ctx);
        goto after_0;
    // 0x8027EC2C: lw          $a0, 0x65FC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X65FC);
    after_0:
    // 0x8027EC30: sw          $v0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r2;
    // 0x8027EC34: lbu         $t6, 0x3DED($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X3DED);
    // 0x8027EC38: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8027EC3C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8027EC40: bne         $t6, $zero, L_8027EC6C
    if (ctx->r14 != 0) {
        // 0x8027EC44: addiu       $t1, $sp, 0x64
        ctx->r9 = ADD32(ctx->r29, 0X64);
            goto L_8027EC6C;
    }
    // 0x8027EC44: addiu       $t1, $sp, 0x64
    ctx->r9 = ADD32(ctx->r29, 0X64);
    // 0x8027EC48: lbu         $t7, 0x3DEE($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X3DEE);
    // 0x8027EC4C: bne         $t7, $zero, L_8027EC6C
    if (ctx->r15 != 0) {
        // 0x8027EC50: nop
    
            goto L_8027EC6C;
    }
    // 0x8027EC50: nop

    // 0x8027EC54: lbu         $t8, 0x3DEF($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X3DEF);
    // 0x8027EC58: bne         $t8, $zero, L_8027EC6C
    if (ctx->r24 != 0) {
        // 0x8027EC5C: nop
    
            goto L_8027EC6C;
    }
    // 0x8027EC5C: nop

    // 0x8027EC60: lbu         $t9, 0x3DF0($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X3DF0);
    // 0x8027EC64: beql        $t9, $zero, L_8027EC74
    if (ctx->r25 == 0) {
        // 0x8027EC68: addiu       $at, $zero, -0x1
        ctx->r1 = ADD32(0, -0X1);
            goto L_8027EC74;
    }
    goto skip_0;
    // 0x8027EC68: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    skip_0:
L_8027EC6C:
    // 0x8027EC6C: sb          $t0, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r8;
    // 0x8027EC70: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_8027EC74:
    // 0x8027EC74: beql        $v0, $at, L_8027ED10
    if (ctx->r2 == ctx->r1) {
        // 0x8027EC78: lw          $t6, 0x84($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X84);
            goto L_8027ED10;
    }
    goto skip_1;
    // 0x8027EC78: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    skip_1:
    // 0x8027EC7C: lw          $v0, 0x78($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X78);
    // 0x8027EC80: lw          $a1, 0x30($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X30);
    // 0x8027EC84: lw          $a2, 0x34($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X34);
    // 0x8027EC88: lwc1        $f4, 0x30($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X30);
    // 0x8027EC8C: lw          $a3, 0x38($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X38);
    // 0x8027EC90: addiu       $t2, $sp, 0x60
    ctx->r10 = ADD32(ctx->r29, 0X60);
    // 0x8027EC94: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8027EC98: lwc1        $f6, 0x34($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X34);
    // 0x8027EC9C: addiu       $t3, $sp, 0x5C
    ctx->r11 = ADD32(ctx->r29, 0X5C);
    // 0x8027ECA0: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x8027ECA4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x8027ECA8: lwc1        $f8, 0x38($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X38);
    // 0x8027ECAC: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x8027ECB0: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x8027ECB4: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x8027ECB8: jal         0x802141C8
    // 0x8027ECBC: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    static_3_802141C8(rdram, ctx);
        goto after_1;
    // 0x8027ECBC: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x8027ECC0: blez        $v0, L_8027ED0C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8027ECC4: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_8027ED0C;
    }
    // 0x8027ECC4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8027ECC8: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
    // 0x8027ECCC: lbu         $t5, 0x8B($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X8B);
    // 0x8027ECD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8027ECD4: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x8027ECD8: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    // 0x8027ECDC: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x8027ECE0: jal         0x802A99A8
    // 0x8027ECE4: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    static_3_802A99A8(rdram, ctx);
        goto after_2;
    // 0x8027ECE4: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    after_2:
    // 0x8027ECE8: beq         $v0, $zero, L_8027ED0C
    if (ctx->r2 == 0) {
        // 0x8027ECEC: sw          $v0, 0x68($sp)
        MEM_W(0X68, ctx->r29) = ctx->r2;
            goto L_8027ED0C;
    }
    // 0x8027ECEC: sw          $v0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r2;
    // 0x8027ECF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8027ECF4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8027ECF8: lw          $a2, 0x84($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X84);
    // 0x8027ECFC: jal         0x802B0A60
    // 0x8027ED00: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    static_3_802B0A60(rdram, ctx);
        goto after_3;
    // 0x8027ED00: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    after_3:
    // 0x8027ED04: b           L_8027EED4
    // 0x8027ED08: lw          $v0, 0x68($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X68);
        goto L_8027EED4;
    // 0x8027ED08: lw          $v0, 0x68($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X68);
L_8027ED0C:
    // 0x8027ED0C: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
L_8027ED10:
    // 0x8027ED10: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8027ED14: bnel        $t6, $at, L_8027ED64
    if (ctx->r14 != ctx->r1) {
        // 0x8027ED18: lw          $v0, 0x78($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X78);
            goto L_8027ED64;
    }
    goto skip_2;
    // 0x8027ED18: lw          $v0, 0x78($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X78);
    skip_2:
    // 0x8027ED1C: lw          $a0, 0x6FBC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X6FBC);
    // 0x8027ED20: beql        $a0, $zero, L_8027ED64
    if (ctx->r4 == 0) {
        // 0x8027ED24: lw          $v0, 0x78($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X78);
            goto L_8027ED64;
    }
    goto skip_3;
    // 0x8027ED24: lw          $v0, 0x78($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X78);
    skip_3:
    // 0x8027ED28: jal         0x803183C0
    // 0x8027ED2C: nop

    static_3_803183C0(rdram, ctx);
        goto after_4;
    // 0x8027ED2C: nop

    after_4:
    // 0x8027ED30: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8027ED34: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8027ED38: nop

    // 0x8027ED3C: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x8027ED40: nop

    // 0x8027ED44: bc1fl       L_8027ED64
    if (!c1cs) {
        // 0x8027ED48: lw          $v0, 0x78($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X78);
            goto L_8027ED64;
    }
    goto skip_4;
    // 0x8027ED48: lw          $v0, 0x78($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X78);
    skip_4:
    // 0x8027ED4C: jal         0x80318420
    // 0x8027ED50: lw          $a0, 0x6FBC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X6FBC);
    static_3_80318420(rdram, ctx);
        goto after_5;
    // 0x8027ED50: lw          $a0, 0x6FBC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X6FBC);
    after_5:
    // 0x8027ED54: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8027ED58: jal         0x8021BA1C
    // 0x8027ED5C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_8021BA1C(rdram, ctx);
        goto after_6;
    // 0x8027ED5C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x8027ED60: lw          $v0, 0x78($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X78);
L_8027ED64:
    // 0x8027ED64: lwc1        $f12, 0x30($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X30);
    // 0x8027ED68: lwc1        $f14, 0x34($s1)
    ctx->f14.u32l = MEM_W(ctx->r17, 0X34);
    // 0x8027ED6C: lwc1        $f16, 0x34($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X34);
    // 0x8027ED70: lw          $a2, 0x38($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X38);
    // 0x8027ED74: lw          $a3, 0x30($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X30);
    // 0x8027ED78: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x8027ED7C: lwc1        $f18, 0x38($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X38);
    // 0x8027ED80: addiu       $t7, $sp, 0x64
    ctx->r15 = ADD32(ctx->r29, 0X64);
    // 0x8027ED84: addiu       $t8, $sp, 0x60
    ctx->r24 = ADD32(ctx->r29, 0X60);
    // 0x8027ED88: addiu       $t9, $sp, 0x5C
    ctx->r25 = ADD32(ctx->r29, 0X5C);
    // 0x8027ED8C: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x8027ED90: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x8027ED94: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x8027ED98: jal         0x802151B8
    // 0x8027ED9C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    static_3_802151B8(rdram, ctx);
        goto after_7;
    // 0x8027ED9C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_7:
    // 0x8027EDA0: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    // 0x8027EDA4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8027EDA8: sw          $v0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r2;
    // 0x8027EDAC: bnel        $t0, $at, L_8027EDFC
    if (ctx->r8 != ctx->r1) {
        // 0x8027EDB0: lw          $t1, 0x6C($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X6C);
            goto L_8027EDFC;
    }
    goto skip_5;
    // 0x8027EDB0: lw          $t1, 0x6C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X6C);
    skip_5:
    // 0x8027EDB4: lw          $a0, 0x6FBC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X6FBC);
    // 0x8027EDB8: beql        $a0, $zero, L_8027EDFC
    if (ctx->r4 == 0) {
        // 0x8027EDBC: lw          $t1, 0x6C($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X6C);
            goto L_8027EDFC;
    }
    goto skip_6;
    // 0x8027EDBC: lw          $t1, 0x6C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X6C);
    skip_6:
    // 0x8027EDC0: jal         0x803183C0
    // 0x8027EDC4: nop

    static_3_803183C0(rdram, ctx);
        goto after_8;
    // 0x8027EDC4: nop

    after_8:
    // 0x8027EDC8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8027EDCC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8027EDD0: nop

    // 0x8027EDD4: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x8027EDD8: nop

    // 0x8027EDDC: bc1fl       L_8027EDFC
    if (!c1cs) {
        // 0x8027EDE0: lw          $t1, 0x6C($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X6C);
            goto L_8027EDFC;
    }
    goto skip_7;
    // 0x8027EDE0: lw          $t1, 0x6C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X6C);
    skip_7:
    // 0x8027EDE4: jal         0x80318420
    // 0x8027EDE8: lw          $a0, 0x6FBC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X6FBC);
    static_3_80318420(rdram, ctx);
        goto after_9;
    // 0x8027EDE8: lw          $a0, 0x6FBC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X6FBC);
    after_9:
    // 0x8027EDEC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8027EDF0: jal         0x8021B838
    // 0x8027EDF4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_8021B838(rdram, ctx);
        goto after_10;
    // 0x8027EDF4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_10:
    // 0x8027EDF8: lw          $t1, 0x6C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X6C);
L_8027EDFC:
    // 0x8027EDFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8027EE00: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x8027EE04: blez        $t1, L_8027EE50
    if (SIGNED(ctx->r9) <= 0) {
        // 0x8027EE08: or          $a1, $t1, $zero
        ctx->r5 = ctx->r9 | 0;
            goto L_8027EE50;
    }
    // 0x8027EE08: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x8027EE0C: lwc1        $f6, 0x80($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X80);
    // 0x8027EE10: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    // 0x8027EE14: lbu         $t3, 0x8B($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X8B);
    // 0x8027EE18: lw          $a3, 0x7C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X7C);
    // 0x8027EE1C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x8027EE20: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x8027EE24: jal         0x802A942C
    // 0x8027EE28: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    static_3_802A942C(rdram, ctx);
        goto after_11;
    // 0x8027EE28: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    after_11:
    // 0x8027EE2C: beq         $v0, $zero, L_8027EE50
    if (ctx->r2 == 0) {
        // 0x8027EE30: sw          $v0, 0x68($sp)
        MEM_W(0X68, ctx->r29) = ctx->r2;
            goto L_8027EE50;
    }
    // 0x8027EE30: sw          $v0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r2;
    // 0x8027EE34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8027EE38: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8027EE3C: lw          $a2, 0x84($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X84);
    // 0x8027EE40: jal         0x802B0A60
    // 0x8027EE44: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    static_3_802B0A60(rdram, ctx);
        goto after_12;
    // 0x8027EE44: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    after_12:
    // 0x8027EE48: b           L_8027EED4
    // 0x8027EE4C: lw          $v0, 0x68($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X68);
        goto L_8027EED4;
    // 0x8027EE4C: lw          $v0, 0x68($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X68);
L_8027EE50:
    // 0x8027EE50: lw          $t4, 0x68($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X68);
    // 0x8027EE54: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x8027EE58: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x8027EE5C: bne         $t4, $zero, L_8027EEBC
    if (ctx->r12 != 0) {
        // 0x8027EE60: addiu       $at, $zero, 0x7
        ctx->r1 = ADD32(0, 0X7);
            goto L_8027EEBC;
    }
    // 0x8027EE60: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x8027EE64: beq         $v0, $at, L_8027EE7C
    if (ctx->r2 == ctx->r1) {
        // 0x8027EE68: lw          $t6, 0x78($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X78);
            goto L_8027EE7C;
    }
    // 0x8027EE68: lw          $t6, 0x78($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X78);
    // 0x8027EE6C: lw          $t5, 0x7168($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X7168);
    // 0x8027EE70: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8027EE74: bnel        $t5, $at, L_8027EEC0
    if (ctx->r13 != ctx->r1) {
        // 0x8027EE78: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8027EEC0;
    }
    goto skip_8;
    // 0x8027EE78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_8:
L_8027EE7C:
    // 0x8027EE7C: lwc1        $f8, 0x30($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X30);
    // 0x8027EE80: lw          $a1, 0x30($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X30);
    // 0x8027EE84: lw          $a2, 0x34($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X34);
    // 0x8027EE88: lw          $a3, 0x38($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X38);
    // 0x8027EE8C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x8027EE90: lwc1        $f10, 0x34($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X34);
    // 0x8027EE94: addiu       $t7, $sp, 0x64
    ctx->r15 = ADD32(ctx->r29, 0X64);
    // 0x8027EE98: addiu       $t8, $sp, 0x60
    ctx->r24 = ADD32(ctx->r29, 0X60);
    // 0x8027EE9C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x8027EEA0: lwc1        $f16, 0x38($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X38);
    // 0x8027EEA4: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x8027EEA8: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x8027EEAC: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x8027EEB0: jal         0x80211DA4
    // 0x8027EEB4: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    static_3_80211DA4(rdram, ctx);
        goto after_13;
    // 0x8027EEB4: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    after_13:
    // 0x8027EEB8: sw          $v0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r2;
L_8027EEBC:
    // 0x8027EEBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8027EEC0:
    // 0x8027EEC0: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    // 0x8027EEC4: lw          $a2, 0x84($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X84);
    // 0x8027EEC8: jal         0x802B0A60
    // 0x8027EECC: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    static_3_802B0A60(rdram, ctx);
        goto after_14;
    // 0x8027EECC: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    after_14:
    // 0x8027EED0: lw          $v0, 0x68($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X68);
L_8027EED4:
    // 0x8027EED4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8027EED8: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x8027EEDC: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x8027EEE0: jr          $ra
    // 0x8027EEE4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x8027EEE4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void D_8028F05C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028F0DC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8028F0E0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8028F0E4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8028F0E8: bne         $a0, $zero, L_8028F100
    if (ctx->r4 != 0) {
        // 0x8028F0EC: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_8028F100;
    }
    // 0x8028F0EC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8028F0F0: jal         0x802C67EC
    // 0x8028F0F4: addiu       $a0, $zero, 0xF34
    ctx->r4 = ADD32(0, 0XF34);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x8028F0F4: addiu       $a0, $zero, 0xF34
    ctx->r4 = ADD32(0, 0XF34);
    after_0:
    // 0x8028F0F8: beq         $v0, $zero, L_8028F160
    if (ctx->r2 == 0) {
        // 0x8028F0FC: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_8028F160;
    }
    // 0x8028F0FC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_8028F100:
    // 0x8028F100: jal         0x80317344
    // 0x8028F104: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80317344(rdram, ctx);
        goto after_1;
    // 0x8028F104: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8028F108: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8028F10C: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x8028F110: sw          $t6, 0x1A0($s0)
    MEM_W(0X1A0, ctx->r16) = ctx->r14;
    // 0x8028F114: jal         0x802D6620
    // 0x8028F118: addiu       $a0, $s0, 0x1A4
    ctx->r4 = ADD32(ctx->r16, 0X1A4);
    static_3_802D6620(rdram, ctx);
        goto after_2;
    // 0x8028F118: addiu       $a0, $s0, 0x1A4
    ctx->r4 = ADD32(ctx->r16, 0X1A4);
    after_2:
    // 0x8028F11C: jal         0x803142B0
    // 0x8028F120: addiu       $a0, $s0, 0x2F0
    ctx->r4 = ADD32(ctx->r16, 0X2F0);
    static_3_803142B0(rdram, ctx);
        goto after_3;
    // 0x8028F120: addiu       $a0, $s0, 0x2F0
    ctx->r4 = ADD32(ctx->r16, 0X2F0);
    after_3:
    // 0x8028F124: jal         0x802C498C
    // 0x8028F128: addiu       $a0, $s0, 0x490
    ctx->r4 = ADD32(ctx->r16, 0X490);
    static_3_802C498C(rdram, ctx);
        goto after_4;
    // 0x8028F128: addiu       $a0, $s0, 0x490
    ctx->r4 = ADD32(ctx->r16, 0X490);
    after_4:
    // 0x8028F12C: jal         0x802C498C
    // 0x8028F130: addiu       $a0, $s0, 0x624
    ctx->r4 = ADD32(ctx->r16, 0X624);
    static_3_802C498C(rdram, ctx);
        goto after_5;
    // 0x8028F130: addiu       $a0, $s0, 0x624
    ctx->r4 = ADD32(ctx->r16, 0X624);
    after_5:
    // 0x8028F134: jal         0x802C498C
    // 0x8028F138: addiu       $a0, $s0, 0x7B8
    ctx->r4 = ADD32(ctx->r16, 0X7B8);
    static_3_802C498C(rdram, ctx);
        goto after_6;
    // 0x8028F138: addiu       $a0, $s0, 0x7B8
    ctx->r4 = ADD32(ctx->r16, 0X7B8);
    after_6:
    // 0x8028F13C: jal         0x802C498C
    // 0x8028F140: addiu       $a0, $s0, 0x94C
    ctx->r4 = ADD32(ctx->r16, 0X94C);
    static_3_802C498C(rdram, ctx);
        goto after_7;
    // 0x8028F140: addiu       $a0, $s0, 0x94C
    ctx->r4 = ADD32(ctx->r16, 0X94C);
    after_7:
    // 0x8028F144: jal         0x802C498C
    // 0x8028F148: addiu       $a0, $s0, 0xAE0
    ctx->r4 = ADD32(ctx->r16, 0XAE0);
    static_3_802C498C(rdram, ctx);
        goto after_8;
    // 0x8028F148: addiu       $a0, $s0, 0xAE0
    ctx->r4 = ADD32(ctx->r16, 0XAE0);
    after_8:
    // 0x8028F14C: jal         0x802C498C
    // 0x8028F150: addiu       $a0, $s0, 0xC74
    ctx->r4 = ADD32(ctx->r16, 0XC74);
    static_3_802C498C(rdram, ctx);
        goto after_9;
    // 0x8028F150: addiu       $a0, $s0, 0xC74
    ctx->r4 = ADD32(ctx->r16, 0XC74);
    after_9:
    // 0x8028F154: jal         0x8031DCDC
    // 0x8028F158: addiu       $a0, $s0, 0xE28
    ctx->r4 = ADD32(ctx->r16, 0XE28);
    static_3_8031DCDC(rdram, ctx);
        goto after_10;
    // 0x8028F158: addiu       $a0, $s0, 0xE28
    ctx->r4 = ADD32(ctx->r16, 0XE28);
    after_10:
    // 0x8028F15C: sb          $zero, 0xF1C($s0)
    MEM_B(0XF1C, ctx->r16) = 0;
L_8028F160:
    // 0x8028F160: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8028F164: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x8028F168: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8028F16C: jr          $ra
    // 0x8028F170: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8028F170: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void D_8027F7E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027F858: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027F85C: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x8027F860: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x8027F864: addiu       $t6, $a0, 0x4E3C
    ctx->r14 = ADD32(ctx->r4, 0X4E3C);
    // 0x8027F868: bne         $a1, $t6, L_8027F88C
    if (ctx->r5 != ctx->r14) {
        // 0x8027F86C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8027F88C;
    }
    // 0x8027F86C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027F870: swc1        $f12, 0x4E2C($a0)
    MEM_W(0X4E2C, ctx->r4) = ctx->f12.u32l;
    // 0x8027F874: swc1        $f14, 0x4E30($a0)
    MEM_W(0X4E30, ctx->r4) = ctx->f14.u32l;
    // 0x8027F878: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8027F87C: addiu       $t7, $zero, 0xD
    ctx->r15 = ADD32(0, 0XD);
    // 0x8027F880: sw          $t7, 0x65B4($a0)
    MEM_W(0X65B4, ctx->r4) = ctx->r15;
    // 0x8027F884: b           L_8027F8B8
    // 0x8027F888: swc1        $f4, 0x4E34($a0)
    MEM_W(0X4E34, ctx->r4) = ctx->f4.u32l;
        goto L_8027F8B8;
    // 0x8027F888: swc1        $f4, 0x4E34($a0)
    MEM_W(0X4E34, ctx->r4) = ctx->f4.u32l;
L_8027F88C:
    // 0x8027F88C: sw          $a1, 0x4E1C($a0)
    MEM_W(0X4E1C, ctx->r4) = ctx->r5;
    // 0x8027F890: swc1        $f12, 0x4E20($a0)
    MEM_W(0X4E20, ctx->r4) = ctx->f12.u32l;
    // 0x8027F894: swc1        $f14, 0x4E24($a0)
    MEM_W(0X4E24, ctx->r4) = ctx->f14.u32l;
    // 0x8027F898: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8027F89C: addiu       $t8, $zero, 0xD
    ctx->r24 = ADD32(0, 0XD);
    // 0x8027F8A0: addiu       $a2, $a0, 0x365C
    ctx->r6 = ADD32(ctx->r4, 0X365C);
    // 0x8027F8A4: sw          $t8, 0x4E18($a0)
    MEM_W(0X4E18, ctx->r4) = ctx->r24;
    // 0x8027F8A8: beq         $a1, $a2, L_8027F8B8
    if (ctx->r5 == ctx->r6) {
        // 0x8027F8AC: swc1        $f6, 0x4E28($a0)
        MEM_W(0X4E28, ctx->r4) = ctx->f6.u32l;
            goto L_8027F8B8;
    }
    // 0x8027F8AC: swc1        $f6, 0x4E28($a0)
    MEM_W(0X4E28, ctx->r4) = ctx->f6.u32l;
    // 0x8027F8B0: jal         0x802E78F4
    // 0x8027F8B4: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    static_3_802E78F4(rdram, ctx);
        goto after_0;
    // 0x8027F8B4: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
L_8027F8B8:
    // 0x8027F8B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027F8BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027F8C0: jr          $ra
    // 0x8027F8C4: nop

    return;
    // 0x8027F8C4: nop

;}
RECOMP_FUNC void D_802D2668(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D26E8: sll         $t6, $a1, 4
    ctx->r14 = S32(ctx->r5 << 4);
    // 0x802D26EC: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802D26F0: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x802D26F4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802D26F8: jr          $ra
    // 0x802D26FC: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    return;
    // 0x802D26FC: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
;}
RECOMP_FUNC void D_802D2E80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D2F00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802D2F04: bne         $a0, $zero, L_802D2F1C
    if (ctx->r4 != 0) {
        // 0x802D2F08: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802D2F1C;
    }
    // 0x802D2F08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802D2F0C: jal         0x802C67EC
    // 0x802D2F10: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802D2F10: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    after_0:
    // 0x802D2F14: beq         $v0, $zero, L_802D2F3C
    if (ctx->r2 == 0) {
        // 0x802D2F18: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802D2F3C;
    }
    // 0x802D2F18: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_802D2F1C:
    // 0x802D2F1C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802D2F20: addiu       $t6, $zero, 0x1E
    ctx->r14 = ADD32(0, 0X1E);
    // 0x802D2F24: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x802D2F28: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x802D2F2C: sb          $t7, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r15;
    // 0x802D2F30: sb          $zero, 0x10($a0)
    MEM_B(0X10, ctx->r4) = 0;
    // 0x802D2F34: sw          $zero, 0x14($a0)
    MEM_W(0X14, ctx->r4) = 0;
    // 0x802D2F38: swc1        $f4, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f4.u32l;
L_802D2F3C:
    // 0x802D2F3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802D2F40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802D2F44: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x802D2F48: jr          $ra
    // 0x802D2F4C: nop

    return;
    // 0x802D2F4C: nop

;}
RECOMP_FUNC void D_802B7690(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B7710: jr          $ra
    // 0x802B7714: sw          $a1, 0x1524($a0)
    MEM_W(0X1524, ctx->r4) = ctx->r5;
    return;
    // 0x802B7714: sw          $a1, 0x1524($a0)
    MEM_W(0X1524, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void D_802E9EF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E9F74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802E9F78: beq         $a0, $zero, L_802E9F9C
    if (ctx->r4 == 0) {
        // 0x802E9F7C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802E9F9C;
    }
    // 0x802E9F7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802E9F80: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802E9F84: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802E9F88: andi        $t7, $a1, 0x1
    ctx->r15 = ctx->r5 & 0X1;
    // 0x802E9F8C: beq         $t7, $zero, L_802E9F9C
    if (ctx->r15 == 0) {
        // 0x802E9F90: sw          $t6, 0xB0($a0)
        MEM_W(0XB0, ctx->r4) = ctx->r14;
            goto L_802E9F9C;
    }
    // 0x802E9F90: sw          $t6, 0xB0($a0)
    MEM_W(0XB0, ctx->r4) = ctx->r14;
    // 0x802E9F94: jal         0x802C681C
    // 0x802E9F98: nop

    static_3_802C681C(rdram, ctx);
        goto after_0;
    // 0x802E9F98: nop

    after_0:
L_802E9F9C:
    // 0x802E9F9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802E9FA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802E9FA4: jr          $ra
    // 0x802E9FA8: nop

    return;
    // 0x802E9FA8: nop

;}
RECOMP_FUNC void D_802B7D90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B7E10: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802B7E14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B7E18: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x802B7E1C: lbu         $t7, 0x968($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X968);
    // 0x802B7E20: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802B7E24: beq         $t7, $zero, L_802B7E8C
    if (ctx->r15 == 0) {
        // 0x802B7E28: nop
    
            goto L_802B7E8C;
    }
    // 0x802B7E28: nop

    // 0x802B7E2C: lw          $a1, 0x944($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X944);
    // 0x802B7E30: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802B7E34: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x802B7E38: beq         $a1, $at, L_802B7E5C
    if (ctx->r5 == ctx->r1) {
        // 0x802B7E3C: lw          $v0, 0x0($v0)
        ctx->r2 = MEM_W(ctx->r2, 0X0);
            goto L_802B7E5C;
    }
    // 0x802B7E3C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x802B7E40: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802B7E44: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802B7E48: addiu       $a0, $v0, 0x8F4
    ctx->r4 = ADD32(ctx->r2, 0X8F4);
    // 0x802B7E4C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802B7E50: jal         0x80302988
    // 0x802B7E54: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    static_3_80302988(rdram, ctx);
        goto after_0;
    // 0x802B7E54: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x802B7E58: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
L_802B7E5C:
    // 0x802B7E5C: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x802B7E60: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x802B7E64: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802B7E68: lw          $a1, 0x948($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X948);
    // 0x802B7E6C: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802B7E70: addiu       $a0, $v0, 0x8F4
    ctx->r4 = ADD32(ctx->r2, 0X8F4);
    // 0x802B7E74: beq         $a1, $at, L_802B7E84
    if (ctx->r5 == ctx->r1) {
        // 0x802B7E78: nop
    
            goto L_802B7E84;
    }
    // 0x802B7E78: nop

    // 0x802B7E7C: jal         0x80302988
    // 0x802B7E80: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    static_3_80302988(rdram, ctx);
        goto after_1;
    // 0x802B7E80: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_1:
L_802B7E84:
    // 0x802B7E84: b           L_802B7E8C
    // 0x802B7E88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802B7E8C;
    // 0x802B7E88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802B7E8C:
    // 0x802B7E8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B7E90: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802B7E94: jr          $ra
    // 0x802B7E98: nop

    return;
    // 0x802B7E98: nop

;}
RECOMP_FUNC void D_802A3720(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A37A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A37A4: bne         $a0, $zero, L_802A37BC
    if (ctx->r4 != 0) {
        // 0x802A37A8: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802A37BC;
    }
    // 0x802A37A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A37AC: jal         0x802C67EC
    // 0x802A37B0: addiu       $a0, $zero, 0x11C
    ctx->r4 = ADD32(0, 0X11C);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802A37B0: addiu       $a0, $zero, 0x11C
    ctx->r4 = ADD32(0, 0X11C);
    after_0:
    // 0x802A37B4: beq         $v0, $zero, L_802A37D4
    if (ctx->r2 == 0) {
        // 0x802A37B8: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802A37D4;
    }
    // 0x802A37B8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_802A37BC:
    // 0x802A37BC: jal         0x802D1960
    // 0x802A37C0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_802D18E0(rdram, ctx);
        goto after_1;
    // 0x802A37C0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x802A37C4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802A37C8: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802A37CC: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802A37D0: sw          $t6, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = ctx->r14;
L_802A37D4:
    // 0x802A37D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A37D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A37DC: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x802A37E0: jr          $ra
    // 0x802A37E4: nop

    return;
    // 0x802A37E4: nop

;}
RECOMP_FUNC void D_802C9CD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802C9D58: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802C9D5C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x802C9D60: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x802C9D64: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x802C9D68: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x802C9D6C: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x802C9D70: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802C9D74: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802C9D78: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x802C9D7C: addiu       $s3, $zero, 0x8
    ctx->r19 = ADD32(0, 0X8);
L_802C9D80:
    // 0x802C9D80: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x802C9D84: beql        $a0, $zero, L_802C9DA8
    if (ctx->r4 == 0) {
        // 0x802C9D88: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_802C9DA8;
    }
    goto skip_0;
    // 0x802C9D88: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    skip_0:
    // 0x802C9D8C: jal         0x802F9244
    // 0x802C9D90: nop

    static_3_802F9244(rdram, ctx);
        goto after_0;
    // 0x802C9D90: nop

    after_0:
    // 0x802C9D94: beq         $v0, $zero, L_802C9DA4
    if (ctx->r2 == 0) {
        // 0x802C9D98: or          $a1, $s2, $zero
        ctx->r5 = ctx->r18 | 0;
            goto L_802C9DA4;
    }
    // 0x802C9D98: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x802C9D9C: jal         0x802F92EC
    // 0x802C9DA0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    static_3_802F92EC(rdram, ctx);
        goto after_1;
    // 0x802C9DA0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_1:
L_802C9DA4:
    // 0x802C9DA4: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_802C9DA8:
    // 0x802C9DA8: bne         $s1, $s3, L_802C9D80
    if (ctx->r17 != ctx->r19) {
        // 0x802C9DAC: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_802C9D80;
    }
    // 0x802C9DAC: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x802C9DB0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802C9DB4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x802C9DB8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x802C9DBC: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x802C9DC0: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x802C9DC4: jr          $ra
    // 0x802C9DC8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x802C9DC8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void D_802D95B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D9638: andi        $t7, $a1, 0xFF
    ctx->r15 = ctx->r5 & 0XFF;
    // 0x802D963C: andi        $t8, $a2, 0xFF
    ctx->r24 = ctx->r6 & 0XFF;
    // 0x802D9640: sll         $t3, $t7, 6
    ctx->r11 = S32(ctx->r15 << 6);
    // 0x802D9644: sll         $t9, $a0, 11
    ctx->r25 = S32(ctx->r4 << 11);
    // 0x802D9648: or          $t4, $t9, $t3
    ctx->r12 = ctx->r25 | ctx->r11;
    // 0x802D964C: sll         $t5, $t8, 1
    ctx->r13 = S32(ctx->r24 << 1);
    // 0x802D9650: or          $t1, $t4, $t5
    ctx->r9 = ctx->r12 | ctx->r13;
    // 0x802D9654: sll         $t6, $t1, 16
    ctx->r14 = S32(ctx->r9 << 16);
    // 0x802D9658: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x802D965C: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x802D9660: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802D9664: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802D9668: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x802D966C: ori         $t0, $t0, 0xA800
    ctx->r8 = ctx->r8 | 0XA800;
    // 0x802D9670: ori         $a3, $a3, 0x5800
    ctx->r7 = ctx->r7 | 0X5800;
    // 0x802D9674: sra         $t1, $t6, 16
    ctx->r9 = S32(SIGNED(ctx->r14) >> 16);
    // 0x802D9678: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
L_802D967C:
    // 0x802D967C: addiu       $t2, $t2, 0x0
    ctx->r10 = ADD32(ctx->r10, 0X0);
    // 0x802D9680: sh          $t1, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r9;
    // 0x802D9684: sltu        $at, $t2, $a3
    ctx->r1 = ctx->r10 < ctx->r7 ? 1 : 0;
    // 0x802D9688: sh          $t1, -0x2($t2)
    MEM_H(-0X2, ctx->r10) = ctx->r9;
    // 0x802D968C: bne         $at, $zero, L_802D967C
    if (ctx->r1 != 0) {
        // 0x802D9690: addiu       $t0, $t0, 0x2
        ctx->r8 = ADD32(ctx->r8, 0X2);
            goto L_802D967C;
    }
    // 0x802D9690: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
    // 0x802D9694: jr          $ra
    // 0x802D9698: nop

    return;
    // 0x802D9698: nop

;}
RECOMP_FUNC void D_802E01A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E0224: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x802E0228: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x802E022C: jr          $ra
    // 0x802E0230: sw          $t6, 0x7168($v0)
    MEM_W(0X7168, ctx->r2) = ctx->r14;
    return;
    // 0x802E0230: sw          $t6, 0x7168($v0)
    MEM_W(0X7168, ctx->r2) = ctx->r14;
;}
RECOMP_FUNC void D_802D3990(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D3A10: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x802D3A14: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x802D3A18: jr          $ra
    // 0x802D3A1C: sw          $t6, 0x7168($v0)
    MEM_W(0X7168, ctx->r2) = ctx->r14;
    return;
    // 0x802D3A1C: sw          $t6, 0x7168($v0)
    MEM_W(0X7168, ctx->r2) = ctx->r14;
;}
RECOMP_FUNC void D_80226CC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80226CC4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80226CC8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80226CCC: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x80226CD0: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x80226CD4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80226CD8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80226CDC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80226CE0: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80226CE4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80226CE8: jal         0x80225424
    // 0x80226CEC: addiu       $a0, $s0, 0x4
    ctx->r4 = ADD32(ctx->r16, 0X4);
    func_80225424(rdram, ctx);
        goto after_0;
    // 0x80226CEC: addiu       $a0, $s0, 0x4
    ctx->r4 = ADD32(ctx->r16, 0X4);
    after_0:
    // 0x80226CF0: lui         $s1, 0x0
    ctx->r17 = S32(0X0 << 16);
    // 0x80226CF4: addiu       $s1, $s1, 0x0
    ctx->r17 = ADD32(ctx->r17, 0X0);
    // 0x80226CF8: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x80226CFC: lhu         $t8, 0x4($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X4);
    // 0x80226D00: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x80226D04: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x80226D08: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x80226D0C: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x80226D10: addiu       $t2, $t2, 0x0
    ctx->r10 = ADD32(ctx->r10, 0X0);
    // 0x80226D14: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x80226D18: sltu        $at, $t0, $t2
    ctx->r1 = ctx->r8 < ctx->r10 ? 1 : 0;
    // 0x80226D1C: bne         $at, $zero, L_80226D30
    if (ctx->r1 != 0) {
        // 0x80226D20: sw          $t0, 0x0($s1)
        MEM_W(0X0, ctx->r17) = ctx->r8;
            goto L_80226D30;
    }
    // 0x80226D20: sw          $t0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r8;
    // 0x80226D24: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80226D28: jal         0x80231A24
    // 0x80226D2C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_1;
    // 0x80226D2C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_1:
L_80226D30:
    // 0x80226D30: lhu         $a2, 0x4($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X4);
    // 0x80226D34: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80226D38: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80226D3C: sll         $t3, $a2, 1
    ctx->r11 = S32(ctx->r6 << 1);
    // 0x80226D40: jal         0x8022B460
    // 0x80226D44: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    func_8022B460(rdram, ctx);
        goto after_2;
    // 0x80226D44: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    after_2:
    // 0x80226D48: lhu         $t5, 0x4($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X4);
    // 0x80226D4C: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x80226D50: addiu       $a0, $s0, 0xC
    ctx->r4 = ADD32(ctx->r16, 0XC);
    // 0x80226D54: sll         $t6, $t5, 1
    ctx->r14 = S32(ctx->r13 << 1);
    // 0x80226D58: addu        $t8, $t4, $t6
    ctx->r24 = ADD32(ctx->r12, ctx->r14);
    // 0x80226D5C: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x80226D60: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80226D64: jal         0x80225424
    // 0x80226D68: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_3;
    // 0x80226D68: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_3:
    // 0x80226D6C: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x80226D70: lhu         $t0, 0xC($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0XC);
    // 0x80226D74: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x80226D78: sw          $t7, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r15;
    // 0x80226D7C: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x80226D80: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x80226D84: addiu       $t5, $t5, 0x0
    ctx->r13 = ADD32(ctx->r13, 0X0);
    // 0x80226D88: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x80226D8C: sltu        $at, $t2, $t5
    ctx->r1 = ctx->r10 < ctx->r13 ? 1 : 0;
    // 0x80226D90: bne         $at, $zero, L_80226DA4
    if (ctx->r1 != 0) {
        // 0x80226D94: sw          $t2, 0x0($s1)
        MEM_W(0X0, ctx->r17) = ctx->r10;
            goto L_80226DA4;
    }
    // 0x80226D94: sw          $t2, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r10;
    // 0x80226D98: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80226D9C: jal         0x80231A24
    // 0x80226DA0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_4;
    // 0x80226DA0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_4:
L_80226DA4:
    // 0x80226DA4: lhu         $a2, 0xC($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0XC);
    // 0x80226DA8: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x80226DAC: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80226DB0: sll         $t4, $a2, 1
    ctx->r12 = S32(ctx->r6 << 1);
    // 0x80226DB4: jal         0x8022B460
    // 0x80226DB8: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    func_8022B460(rdram, ctx);
        goto after_5;
    // 0x80226DB8: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    after_5:
    // 0x80226DBC: lhu         $t8, 0xC($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0XC);
    // 0x80226DC0: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80226DC4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80226DC8: sll         $t7, $t8, 1
    ctx->r15 = S32(ctx->r24 << 1);
    // 0x80226DCC: addu        $t0, $t6, $t7
    ctx->r8 = ADD32(ctx->r14, ctx->r15);
    // 0x80226DD0: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x80226DD4: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80226DD8: jal         0x80225424
    // 0x80226DDC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_6;
    // 0x80226DDC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_6:
    // 0x80226DE0: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x80226DE4: lhu         $t2, 0x14($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X14);
    // 0x80226DE8: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x80226DEC: sw          $t9, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r25;
    // 0x80226DF0: lw          $t1, 0x0($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X0);
    // 0x80226DF4: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x80226DF8: addiu       $t8, $t8, 0x0
    ctx->r24 = ADD32(ctx->r24, 0X0);
    // 0x80226DFC: addu        $t5, $t1, $t3
    ctx->r13 = ADD32(ctx->r9, ctx->r11);
    // 0x80226E00: sltu        $at, $t5, $t8
    ctx->r1 = ctx->r13 < ctx->r24 ? 1 : 0;
    // 0x80226E04: bne         $at, $zero, L_80226E18
    if (ctx->r1 != 0) {
        // 0x80226E08: sw          $t5, 0x0($s1)
        MEM_W(0X0, ctx->r17) = ctx->r13;
            goto L_80226E18;
    }
    // 0x80226E08: sw          $t5, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r13;
    // 0x80226E0C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80226E10: jal         0x80231A24
    // 0x80226E14: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_7;
    // 0x80226E14: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_7:
L_80226E18:
    // 0x80226E18: lhu         $a2, 0x14($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X14);
    // 0x80226E1C: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x80226E20: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80226E24: sll         $t6, $a2, 1
    ctx->r14 = S32(ctx->r6 << 1);
    // 0x80226E28: jal         0x8022B460
    // 0x80226E2C: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    func_8022B460(rdram, ctx);
        goto after_8;
    // 0x80226E2C: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    after_8:
    // 0x80226E30: lhu         $t0, 0x14($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X14);
    // 0x80226E34: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x80226E38: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80226E3C: sll         $t9, $t0, 1
    ctx->r25 = S32(ctx->r8 << 1);
    // 0x80226E40: addu        $t2, $t7, $t9
    ctx->r10 = ADD32(ctx->r15, ctx->r25);
    // 0x80226E44: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x80226E48: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80226E4C: jal         0x80225424
    // 0x80226E50: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_9;
    // 0x80226E50: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_9:
    // 0x80226E54: lw          $t1, 0x0($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X0);
    // 0x80226E58: lhu         $t5, 0x1C($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X1C);
    // 0x80226E5C: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x80226E60: sw          $t1, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r9;
    // 0x80226E64: lw          $t3, 0x0($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X0);
    // 0x80226E68: sll         $t4, $t5, 1
    ctx->r12 = S32(ctx->r13 << 1);
    // 0x80226E6C: addiu       $t0, $t0, 0x0
    ctx->r8 = ADD32(ctx->r8, 0X0);
    // 0x80226E70: addu        $t8, $t3, $t4
    ctx->r24 = ADD32(ctx->r11, ctx->r12);
    // 0x80226E74: sltu        $at, $t8, $t0
    ctx->r1 = ctx->r24 < ctx->r8 ? 1 : 0;
    // 0x80226E78: bne         $at, $zero, L_80226E8C
    if (ctx->r1 != 0) {
        // 0x80226E7C: sw          $t8, 0x0($s1)
        MEM_W(0X0, ctx->r17) = ctx->r24;
            goto L_80226E8C;
    }
    // 0x80226E7C: sw          $t8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r24;
    // 0x80226E80: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80226E84: jal         0x80231A24
    // 0x80226E88: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_10;
    // 0x80226E88: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_10:
L_80226E8C:
    // 0x80226E8C: lhu         $a2, 0x1C($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X1C);
    // 0x80226E90: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x80226E94: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80226E98: sll         $t7, $a2, 1
    ctx->r15 = S32(ctx->r6 << 1);
    // 0x80226E9C: jal         0x8022B460
    // 0x80226EA0: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    func_8022B460(rdram, ctx);
        goto after_11;
    // 0x80226EA0: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    after_11:
    // 0x80226EA4: lhu         $t2, 0x1C($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X1C);
    // 0x80226EA8: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x80226EAC: addiu       $a0, $s0, 0x24
    ctx->r4 = ADD32(ctx->r16, 0X24);
    // 0x80226EB0: sll         $t1, $t2, 1
    ctx->r9 = S32(ctx->r10 << 1);
    // 0x80226EB4: addu        $t5, $t9, $t1
    ctx->r13 = ADD32(ctx->r25, ctx->r9);
    // 0x80226EB8: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x80226EBC: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80226EC0: jal         0x80225424
    // 0x80226EC4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_12;
    // 0x80226EC4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_12:
    // 0x80226EC8: lw          $t3, 0x0($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X0);
    // 0x80226ECC: lhu         $t8, 0x24($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X24);
    // 0x80226ED0: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x80226ED4: sw          $t3, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r11;
    // 0x80226ED8: lw          $t4, 0x0($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X0);
    // 0x80226EDC: sll         $t6, $t8, 1
    ctx->r14 = S32(ctx->r24 << 1);
    // 0x80226EE0: addiu       $t2, $t2, 0x0
    ctx->r10 = ADD32(ctx->r10, 0X0);
    // 0x80226EE4: addu        $t0, $t4, $t6
    ctx->r8 = ADD32(ctx->r12, ctx->r14);
    // 0x80226EE8: sltu        $at, $t0, $t2
    ctx->r1 = ctx->r8 < ctx->r10 ? 1 : 0;
    // 0x80226EEC: bne         $at, $zero, L_80226F00
    if (ctx->r1 != 0) {
        // 0x80226EF0: sw          $t0, 0x0($s1)
        MEM_W(0X0, ctx->r17) = ctx->r8;
            goto L_80226F00;
    }
    // 0x80226EF0: sw          $t0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r8;
    // 0x80226EF4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80226EF8: jal         0x80231A24
    // 0x80226EFC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_13;
    // 0x80226EFC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_13:
L_80226F00:
    // 0x80226F00: lhu         $a2, 0x24($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X24);
    // 0x80226F04: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    // 0x80226F08: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80226F0C: sll         $t9, $a2, 1
    ctx->r25 = S32(ctx->r6 << 1);
    // 0x80226F10: jal         0x8022B460
    // 0x80226F14: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    func_8022B460(rdram, ctx);
        goto after_14;
    // 0x80226F14: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    after_14:
    // 0x80226F18: lhu         $t5, 0x24($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X24);
    // 0x80226F1C: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x80226F20: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80226F24: sll         $t3, $t5, 1
    ctx->r11 = S32(ctx->r13 << 1);
    // 0x80226F28: addu        $t8, $t1, $t3
    ctx->r24 = ADD32(ctx->r9, ctx->r11);
    // 0x80226F2C: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x80226F30: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80226F34: jal         0x80225424
    // 0x80226F38: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_15;
    // 0x80226F38: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_15:
    // 0x80226F3C: lw          $t4, 0x0($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X0);
    // 0x80226F40: lhu         $t0, 0x2C($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X2C);
    // 0x80226F44: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x80226F48: sw          $t4, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r12;
    // 0x80226F4C: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x80226F50: sll         $t7, $t0, 1
    ctx->r15 = S32(ctx->r8 << 1);
    // 0x80226F54: addiu       $t5, $t5, 0x0
    ctx->r13 = ADD32(ctx->r13, 0X0);
    // 0x80226F58: addu        $t2, $t6, $t7
    ctx->r10 = ADD32(ctx->r14, ctx->r15);
    // 0x80226F5C: sltu        $at, $t2, $t5
    ctx->r1 = ctx->r10 < ctx->r13 ? 1 : 0;
    // 0x80226F60: bne         $at, $zero, L_80226F74
    if (ctx->r1 != 0) {
        // 0x80226F64: sw          $t2, 0x0($s1)
        MEM_W(0X0, ctx->r17) = ctx->r10;
            goto L_80226F74;
    }
    // 0x80226F64: sw          $t2, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r10;
    // 0x80226F68: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80226F6C: jal         0x80231A24
    // 0x80226F70: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_16;
    // 0x80226F70: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_16:
L_80226F74:
    // 0x80226F74: lhu         $a2, 0x2C($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X2C);
    // 0x80226F78: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    // 0x80226F7C: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80226F80: sll         $t1, $a2, 1
    ctx->r9 = S32(ctx->r6 << 1);
    // 0x80226F84: jal         0x8022B460
    // 0x80226F88: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    func_8022B460(rdram, ctx);
        goto after_17;
    // 0x80226F88: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    after_17:
    // 0x80226F8C: lhu         $t8, 0x2C($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X2C);
    // 0x80226F90: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x80226F94: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80226F98: sll         $t4, $t8, 1
    ctx->r12 = S32(ctx->r24 << 1);
    // 0x80226F9C: addu        $t0, $t3, $t4
    ctx->r8 = ADD32(ctx->r11, ctx->r12);
    // 0x80226FA0: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x80226FA4: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80226FA8: jal         0x80225424
    // 0x80226FAC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_18;
    // 0x80226FAC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_18:
    // 0x80226FB0: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x80226FB4: lhu         $t2, 0x34($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X34);
    // 0x80226FB8: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x80226FBC: sw          $t6, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r14;
    // 0x80226FC0: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x80226FC4: sll         $t9, $t2, 1
    ctx->r25 = S32(ctx->r10 << 1);
    // 0x80226FC8: addiu       $t8, $t8, 0x0
    ctx->r24 = ADD32(ctx->r24, 0X0);
    // 0x80226FCC: addu        $t5, $t7, $t9
    ctx->r13 = ADD32(ctx->r15, ctx->r25);
    // 0x80226FD0: sltu        $at, $t5, $t8
    ctx->r1 = ctx->r13 < ctx->r24 ? 1 : 0;
    // 0x80226FD4: bne         $at, $zero, L_80226FE8
    if (ctx->r1 != 0) {
        // 0x80226FD8: sw          $t5, 0x0($s1)
        MEM_W(0X0, ctx->r17) = ctx->r13;
            goto L_80226FE8;
    }
    // 0x80226FD8: sw          $t5, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r13;
    // 0x80226FDC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80226FE0: jal         0x80231A24
    // 0x80226FE4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_19;
    // 0x80226FE4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_19:
L_80226FE8:
    // 0x80226FE8: lhu         $a2, 0x34($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X34);
    // 0x80226FEC: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    // 0x80226FF0: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80226FF4: sll         $t3, $a2, 1
    ctx->r11 = S32(ctx->r6 << 1);
    // 0x80226FF8: jal         0x8022B460
    // 0x80226FFC: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    func_8022B460(rdram, ctx);
        goto after_20;
    // 0x80226FFC: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    after_20:
    // 0x80227000: lhu         $t0, 0x34($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X34);
    // 0x80227004: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x80227008: addiu       $a0, $s0, 0x3C
    ctx->r4 = ADD32(ctx->r16, 0X3C);
    // 0x8022700C: sll         $t6, $t0, 1
    ctx->r14 = S32(ctx->r8 << 1);
    // 0x80227010: addu        $t2, $t4, $t6
    ctx->r10 = ADD32(ctx->r12, ctx->r14);
    // 0x80227014: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x80227018: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8022701C: jal         0x80225424
    // 0x80227020: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_21;
    // 0x80227020: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_21:
    // 0x80227024: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x80227028: lhu         $t5, 0x3C($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X3C);
    // 0x8022702C: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x80227030: sw          $t7, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r15;
    // 0x80227034: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x80227038: sll         $t1, $t5, 1
    ctx->r9 = S32(ctx->r13 << 1);
    // 0x8022703C: addiu       $t0, $t0, 0x0
    ctx->r8 = ADD32(ctx->r8, 0X0);
    // 0x80227040: addu        $t8, $t9, $t1
    ctx->r24 = ADD32(ctx->r25, ctx->r9);
    // 0x80227044: sltu        $at, $t8, $t0
    ctx->r1 = ctx->r24 < ctx->r8 ? 1 : 0;
    // 0x80227048: bne         $at, $zero, L_8022705C
    if (ctx->r1 != 0) {
        // 0x8022704C: sw          $t8, 0x0($s1)
        MEM_W(0X0, ctx->r17) = ctx->r24;
            goto L_8022705C;
    }
    // 0x8022704C: sw          $t8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r24;
    // 0x80227050: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80227054: jal         0x80231A24
    // 0x80227058: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_22;
    // 0x80227058: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_22:
L_8022705C:
    // 0x8022705C: lhu         $a2, 0x3C($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X3C);
    // 0x80227060: lw          $a0, 0x38($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X38);
    // 0x80227064: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80227068: sll         $t4, $a2, 1
    ctx->r12 = S32(ctx->r6 << 1);
    // 0x8022706C: jal         0x8022B460
    // 0x80227070: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    func_8022B460(rdram, ctx);
        goto after_23;
    // 0x80227070: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    after_23:
    // 0x80227074: lhu         $t2, 0x3C($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X3C);
    // 0x80227078: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8022707C: addiu       $a0, $s0, 0x44
    ctx->r4 = ADD32(ctx->r16, 0X44);
    // 0x80227080: sll         $t7, $t2, 1
    ctx->r15 = S32(ctx->r10 << 1);
    // 0x80227084: addu        $t5, $t6, $t7
    ctx->r13 = ADD32(ctx->r14, ctx->r15);
    // 0x80227088: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x8022708C: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80227090: jal         0x80225424
    // 0x80227094: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_24;
    // 0x80227094: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_24:
    // 0x80227098: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x8022709C: lhu         $t8, 0x44($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X44);
    // 0x802270A0: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x802270A4: sw          $t9, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r25;
    // 0x802270A8: lw          $t1, 0x0($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X0);
    // 0x802270AC: sll         $t3, $t8, 1
    ctx->r11 = S32(ctx->r24 << 1);
    // 0x802270B0: addiu       $t2, $t2, 0x0
    ctx->r10 = ADD32(ctx->r10, 0X0);
    // 0x802270B4: addu        $t0, $t1, $t3
    ctx->r8 = ADD32(ctx->r9, ctx->r11);
    // 0x802270B8: sltu        $at, $t0, $t2
    ctx->r1 = ctx->r8 < ctx->r10 ? 1 : 0;
    // 0x802270BC: bne         $at, $zero, L_802270D0
    if (ctx->r1 != 0) {
        // 0x802270C0: sw          $t0, 0x0($s1)
        MEM_W(0X0, ctx->r17) = ctx->r8;
            goto L_802270D0;
    }
    // 0x802270C0: sw          $t0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r8;
    // 0x802270C4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802270C8: jal         0x80231A24
    // 0x802270CC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_25;
    // 0x802270CC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_25:
L_802270D0:
    // 0x802270D0: lhu         $a2, 0x44($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X44);
    // 0x802270D4: lw          $a0, 0x40($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X40);
    // 0x802270D8: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x802270DC: sll         $t6, $a2, 1
    ctx->r14 = S32(ctx->r6 << 1);
    // 0x802270E0: jal         0x8022B460
    // 0x802270E4: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    func_8022B460(rdram, ctx);
        goto after_26;
    // 0x802270E4: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    after_26:
    // 0x802270E8: lhu         $t5, 0x44($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X44);
    // 0x802270EC: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x802270F0: addiu       $a0, $s0, 0x4C
    ctx->r4 = ADD32(ctx->r16, 0X4C);
    // 0x802270F4: sll         $t9, $t5, 1
    ctx->r25 = S32(ctx->r13 << 1);
    // 0x802270F8: addu        $t8, $t7, $t9
    ctx->r24 = ADD32(ctx->r15, ctx->r25);
    // 0x802270FC: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x80227100: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80227104: jal         0x80225424
    // 0x80227108: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_27;
    // 0x80227108: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_27:
    // 0x8022710C: lw          $t1, 0x0($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X0);
    // 0x80227110: lhu         $t0, 0x4C($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X4C);
    // 0x80227114: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x80227118: sw          $t1, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r9;
    // 0x8022711C: lw          $t3, 0x0($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X0);
    // 0x80227120: sll         $t4, $t0, 1
    ctx->r12 = S32(ctx->r8 << 1);
    // 0x80227124: addiu       $t5, $t5, 0x0
    ctx->r13 = ADD32(ctx->r13, 0X0);
    // 0x80227128: addu        $t2, $t3, $t4
    ctx->r10 = ADD32(ctx->r11, ctx->r12);
    // 0x8022712C: sltu        $at, $t2, $t5
    ctx->r1 = ctx->r10 < ctx->r13 ? 1 : 0;
    // 0x80227130: bne         $at, $zero, L_80227144
    if (ctx->r1 != 0) {
        // 0x80227134: sw          $t2, 0x0($s1)
        MEM_W(0X0, ctx->r17) = ctx->r10;
            goto L_80227144;
    }
    // 0x80227134: sw          $t2, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r10;
    // 0x80227138: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8022713C: jal         0x80231A24
    // 0x80227140: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_28;
    // 0x80227140: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_28:
L_80227144:
    // 0x80227144: lhu         $a2, 0x4C($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X4C);
    // 0x80227148: lw          $a0, 0x48($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X48);
    // 0x8022714C: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80227150: sll         $t7, $a2, 1
    ctx->r15 = S32(ctx->r6 << 1);
    // 0x80227154: jal         0x8022B460
    // 0x80227158: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    func_8022B460(rdram, ctx);
        goto after_29;
    // 0x80227158: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    after_29:
    // 0x8022715C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80227160: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80227164: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80227168: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8022716C: jr          $ra
    // 0x80227170: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80227170: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void D_802357C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802357C4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x802357C8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802357CC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802357D0: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x802357D4: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x802357D8: addiu       $t8, $zero, 0x3E80
    ctx->r24 = ADD32(0, 0X3E80);
    // 0x802357DC: or          $t0, $a1, $zero
    ctx->r8 = ctx->r5 | 0;
    // 0x802357E0: sw          $t7, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r15;
    // 0x802357E4: sw          $t8, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->r24;
    // 0x802357E8: sw          $t6, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->r14;
    // 0x802357EC: lw          $t9, 0x0($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X0);
    // 0x802357F0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802357F4: lw          $a2, 0x8($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X8);
    // 0x802357F8: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x802357FC: subu        $t1, $t1, $t9
    ctx->r9 = SUB32(ctx->r9, ctx->r25);
    // 0x80235800: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80235804: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80235808: sw          $t0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r8;
    // 0x8023580C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80235810: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80235814: jal         0x80236CD0
    // 0x80235818: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    static_3_80236CD0(rdram, ctx);
        goto after_0;
    // 0x80235818: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x8023581C: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x80235820: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
    // 0x80235824: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80235828: lw          $t2, 0x0($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X0);
    // 0x8023582C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80235830: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80235834: beq         $t2, $zero, L_80235858
    if (ctx->r10 == 0) {
        // 0x80235838: addiu       $a3, $zero, 0x1
        ctx->r7 = ADD32(0, 0X1);
            goto L_80235858;
    }
    // 0x80235838: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8023583C: sw          $zero, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = 0;
L_80235840:
    // 0x80235840: lw          $t3, 0x0($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X0);
    // 0x80235844: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80235848: addiu       $a0, $a0, 0x30
    ctx->r4 = ADD32(ctx->r4, 0X30);
    // 0x8023584C: sltu        $at, $v1, $t3
    ctx->r1 = ctx->r3 < ctx->r11 ? 1 : 0;
    // 0x80235850: bnel        $at, $zero, L_80235840
    if (ctx->r1 != 0) {
        // 0x80235854: sw          $zero, 0x1C($a0)
        MEM_W(0X1C, ctx->r4) = 0;
            goto L_80235840;
    }
    goto skip_0;
    // 0x80235854: sw          $zero, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = 0;
    skip_0:
L_80235858:
    // 0x80235858: lw          $t4, 0x4($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X4);
    // 0x8023585C: lw          $a2, 0x8($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X8);
    // 0x80235860: sw          $t0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r8;
    // 0x80235864: sll         $t5, $t4, 3
    ctx->r13 = S32(ctx->r12 << 3);
    // 0x80235868: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x8023586C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80235870: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80235874: jal         0x80236CD0
    // 0x80235878: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_80236CD0(rdram, ctx);
        goto after_1;
    // 0x80235878: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x8023587C: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x80235880: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80235884: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80235888: lw          $a2, 0x4($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X4);
    // 0x8023588C: jal         0x8023F52C
    // 0x80235890: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    static_3_8023F52C(rdram, ctx);
        goto after_2;
    // 0x80235890: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_2:
    // 0x80235894: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80235898: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    // 0x8023589C: lui         $t7, 0x8023
    ctx->r15 = S32(0X8023 << 16);
    // 0x802358A0: addiu       $t7, $t7, 0x52CC
    ctx->r15 = ADD32(ctx->r15, 0X52CC);
    // 0x802358A4: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x802358A8: sw          $t7, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r15;
    // 0x802358AC: sw          $s0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r16;
    // 0x802358B0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802358B4: jal         0x8023F5A0
    // 0x802358B8: sw          $a0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r4;
    func_8023F5A0(rdram, ctx);
        goto after_3;
    // 0x802358B8: sw          $a0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r4;
    after_3:
    // 0x802358BC: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x802358C0: sh          $t8, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r24;
    // 0x802358C4: lw          $a2, 0x48($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X48);
    // 0x802358C8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x802358CC: jal         0x8023F37C
    // 0x802358D0: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    static_3_8023F37C(rdram, ctx);
        goto after_4;
    // 0x802358D0: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_4:
    // 0x802358D4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x802358D8: jal         0x8023F4A0
    // 0x802358DC: addiu       $a1, $s0, 0x28
    ctx->r5 = ADD32(ctx->r16, 0X28);
    static_3_8023F4A0(rdram, ctx);
        goto after_5;
    // 0x802358DC: addiu       $a1, $s0, 0x28
    ctx->r5 = ADD32(ctx->r16, 0X28);
    after_5:
    // 0x802358E0: sw          $v0, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->r2;
    // 0x802358E4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802358E8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802358EC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x802358F0: jr          $ra
    // 0x802358F4: nop

    return;
    // 0x802358F4: nop

;}
RECOMP_FUNC void D_8023CE30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023CE30: blez        $a1, L_8023CE78
    if (SIGNED(ctx->r5) <= 0) {
        // 0x8023CE34: nop
    
            goto L_8023CE78;
    }
    // 0x8023CE34: nop

    // 0x8023CE38: addiu       $t3, $zero, 0x2000
    ctx->r11 = ADD32(0, 0X2000);
    // 0x8023CE3C: sltu        $at, $a1, $t3
    ctx->r1 = ctx->r5 < ctx->r11 ? 1 : 0;
    // 0x8023CE40: beq         $at, $zero, L_8023CE80
    if (ctx->r1 == 0) {
        // 0x8023CE44: nop
    
            goto L_8023CE80;
    }
    // 0x8023CE44: nop

    // 0x8023CE48: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x8023CE4C: addu        $t1, $a0, $a1
    ctx->r9 = ADD32(ctx->r4, ctx->r5);
    // 0x8023CE50: sltu        $at, $t0, $t1
    ctx->r1 = ctx->r8 < ctx->r9 ? 1 : 0;
    // 0x8023CE54: beq         $at, $zero, L_8023CE78
    if (ctx->r1 == 0) {
        // 0x8023CE58: nop
    
            goto L_8023CE78;
    }
    // 0x8023CE58: nop

    // 0x8023CE5C: andi        $t2, $t0, 0xF
    ctx->r10 = ctx->r8 & 0XF;
    // 0x8023CE60: addiu       $t1, $t1, -0x10
    ctx->r9 = ADD32(ctx->r9, -0X10);
    // 0x8023CE64: subu        $t0, $t0, $t2
    ctx->r8 = SUB32(ctx->r8, ctx->r10);
L_8023CE68:
    // 0x8023CE68: cache       0x19, 0x0($t0)

    // 0x8023CE6C: sltu        $at, $t0, $t1
    ctx->r1 = ctx->r8 < ctx->r9 ? 1 : 0;
    // 0x8023CE70: bne         $at, $zero, L_8023CE68
    if (ctx->r1 != 0) {
        // 0x8023CE74: addiu       $t0, $t0, 0x10
        ctx->r8 = ADD32(ctx->r8, 0X10);
            goto L_8023CE68;
    }
    // 0x8023CE74: addiu       $t0, $t0, 0x10
    ctx->r8 = ADD32(ctx->r8, 0X10);
L_8023CE78:
    // 0x8023CE78: jr          $ra
    // 0x8023CE7C: nop

    return;
    // 0x8023CE7C: nop

L_8023CE80:
    // 0x8023CE80: lui         $t0, 0x8000
    ctx->r8 = S32(0X8000 << 16);
    // 0x8023CE84: addu        $t1, $t0, $t3
    ctx->r9 = ADD32(ctx->r8, ctx->r11);
    // 0x8023CE88: addiu       $t1, $t1, -0x10
    ctx->r9 = ADD32(ctx->r9, -0X10);
L_8023CE8C:
    // 0x8023CE8C: cache       0x01, 0x0($t0)

    // 0x8023CE90: sltu        $at, $t0, $t1
    ctx->r1 = ctx->r8 < ctx->r9 ? 1 : 0;
    // 0x8023CE94: bne         $at, $zero, L_8023CE8C
    if (ctx->r1 != 0) {
        // 0x8023CE98: addiu       $t0, $t0, 0x10
        ctx->r8 = ADD32(ctx->r8, 0X10);
            goto L_8023CE8C;
    }
    // 0x8023CE98: addiu       $t0, $t0, 0x10
    ctx->r8 = ADD32(ctx->r8, 0X10);
    // 0x8023CE9C: jr          $ra
    // 0x8023CEA0: nop

    return;
    // 0x8023CEA0: nop

;}
