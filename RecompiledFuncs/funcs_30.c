#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void D_802ED71C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802ED79C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802ED7A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802ED7A4: beq         $a0, $zero, L_802ED7D4
    if (ctx->r4 == 0) {
        // 0x802ED7A8: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_802ED7D4;
    }
    // 0x802ED7A8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802ED7AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802ED7B0: jal         0x8031C514
    // 0x802ED7B4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_8031C514(rdram, ctx);
        goto after_0;
    // 0x802ED7B4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802ED7B8: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x802ED7BC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802ED7C0: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x802ED7C4: beql        $t7, $zero, L_802ED7D8
    if (ctx->r15 == 0) {
        // 0x802ED7C8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802ED7D8;
    }
    goto skip_0;
    // 0x802ED7C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802ED7CC: jal         0x802C681C
    // 0x802ED7D0: nop

    static_3_802C681C(rdram, ctx);
        goto after_1;
    // 0x802ED7D0: nop

    after_1:
L_802ED7D4:
    // 0x802ED7D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802ED7D8:
    // 0x802ED7D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802ED7DC: jr          $ra
    // 0x802ED7E0: nop

    return;
    // 0x802ED7E0: nop

;}
RECOMP_FUNC void func_8029DB34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029DBB4: mtc1        $a1, $f14
    ctx->f14.u32l = ctx->r5;
    // 0x8029DBB8: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x8029DBBC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8029DBC0: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8029DBC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8029DBC8: lw          $a1, 0x44($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X44);
    // 0x8029DBCC: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x8029DBD0: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x8029DBD4: jal         0x80316B90
    // 0x8029DBD8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_80316B90(rdram, ctx);
        goto after_0;
    // 0x8029DBD8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8029DBDC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8029DBE0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8029DBE4: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8029DBE8: lwc1        $f12, 0x4C($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x8029DBEC: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x8029DBF0: mul.s       $f14, $f12, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x8029DBF4: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    // 0x8029DBF8: nop

    // 0x8029DBFC: bc1fl       L_8029DC0C
    if (!c1cs) {
        // 0x8029DC00: sub.s       $f6, $f12, $f2
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_8029DC0C;
    }
    goto skip_0;
    // 0x8029DC00: sub.s       $f6, $f12, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f12.fl - ctx->f2.fl;
    skip_0:
    // 0x8029DC04: mov.s       $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    ctx->f2.fl = ctx->f14.fl;
    // 0x8029DC08: sub.s       $f6, $f12, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f12.fl - ctx->f2.fl;
L_8029DC0C:
    // 0x8029DC0C: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x8029DC10: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8029DC14: swc1        $f6, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f6.u32l;
    // 0x8029DC18: lwc1        $f8, 0x4C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x8029DC1C: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x8029DC20: nop

    // 0x8029DC24: bc1fl       L_8029DC34
    if (!c1cs) {
        // 0x8029DC28: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8029DC34;
    }
    goto skip_1;
    // 0x8029DC28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x8029DC2C: swc1        $f0, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f0.u32l;
    // 0x8029DC30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8029DC34:
    // 0x8029DC34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8029DC38: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8029DC3C: jr          $ra
    // 0x8029DC40: nop

    return;
    // 0x8029DC40: nop

;}
RECOMP_FUNC void D_802D17C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D1848: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802D184C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802D1850: beq         $a0, $zero, L_802D187C
    if (ctx->r4 == 0) {
        // 0x802D1854: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_802D187C;
    }
    // 0x802D1854: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802D1858: jal         0x80302070
    // 0x802D185C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_80302070(rdram, ctx);
        goto after_0;
    // 0x802D185C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802D1860: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x802D1864: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802D1868: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x802D186C: beql        $t7, $zero, L_802D1880
    if (ctx->r15 == 0) {
        // 0x802D1870: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802D1880;
    }
    goto skip_0;
    // 0x802D1870: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802D1874: jal         0x802C681C
    // 0x802D1878: nop

    static_3_802C681C(rdram, ctx);
        goto after_1;
    // 0x802D1878: nop

    after_1:
L_802D187C:
    // 0x802D187C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802D1880:
    // 0x802D1880: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802D1884: jr          $ra
    // 0x802D1888: nop

    return;
    // 0x802D1888: nop

;}
RECOMP_FUNC void D_802B7ED4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B7F54: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B7F58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B7F5C: lbu         $t6, 0x968($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X968);
    // 0x802B7F60: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802B7F64: beq         $t6, $zero, L_802B7F88
    if (ctx->r14 == 0) {
        // 0x802B7F68: nop
    
            goto L_802B7F88;
    }
    // 0x802B7F68: nop

    // 0x802B7F6C: lw          $t7, 0x960($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X960);
    // 0x802B7F70: beq         $a1, $t7, L_802B7F88
    if (ctx->r5 == ctx->r15) {
        // 0x802B7F74: nop
    
            goto L_802B7F88;
    }
    // 0x802B7F74: nop

    // 0x802B7F78: jal         0x802E7F90
    // 0x802B7F7C: sw          $a1, 0x960($a0)
    MEM_W(0X960, ctx->r4) = ctx->r5;
    static_3_802E7F90(rdram, ctx);
        goto after_0;
    // 0x802B7F7C: sw          $a1, 0x960($a0)
    MEM_W(0X960, ctx->r4) = ctx->r5;
    after_0:
    // 0x802B7F80: b           L_802B7F88
    // 0x802B7F84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802B7F88;
    // 0x802B7F84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802B7F88:
    // 0x802B7F88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B7F8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B7F90: jr          $ra
    // 0x802B7F94: nop

    return;
    // 0x802B7F94: nop

;}
RECOMP_FUNC void D_802E0FCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E104C: addiu       $t6, $zero, -0xA
    ctx->r14 = ADD32(0, -0XA);
    // 0x802E1050: sh          $t6, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r14;
    // 0x802E1054: sh          $zero, 0x2($a0)
    MEM_H(0X2, ctx->r4) = 0;
    // 0x802E1058: jr          $ra
    // 0x802E105C: sb          $zero, 0x4($a0)
    MEM_B(0X4, ctx->r4) = 0;
    return;
    // 0x802E105C: sb          $zero, 0x4($a0)
    MEM_B(0X4, ctx->r4) = 0;
;}
RECOMP_FUNC void D_80298340(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802983C0: jr          $ra
    // 0x802983C4: lw          $v0, 0x1120($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1120);
    return;
    // 0x802983C4: lw          $v0, 0x1120($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1120);
;}
RECOMP_FUNC void D_802E3F30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E3FB0: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x802E3FB4: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x802E3FB8: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x802E3FBC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802E3FC0: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x802E3FC4: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x802E3FC8: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x802E3FCC: or          $s4, $a3, $zero
    ctx->r20 = ctx->r7 | 0;
    // 0x802E3FD0: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x802E3FD4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x802E3FD8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x802E3FDC: sw          $a2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r6;
    // 0x802E3FE0: jal         0x8022970C
    // 0x802E3FE4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8022970C(rdram, ctx);
        goto after_0;
    // 0x802E3FE4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x802E3FE8: addiu       $s3, $sp, 0x38
    ctx->r19 = ADD32(ctx->r29, 0X38);
    // 0x802E3FEC: jal         0x8022970C
    // 0x802E3FF0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_8022970C(rdram, ctx);
        goto after_1;
    // 0x802E3FF0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_1:
    // 0x802E3FF4: blez        $s4, L_802E402C
    if (SIGNED(ctx->r20) <= 0) {
        // 0x802E3FF8: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_802E402C;
    }
    // 0x802E3FF8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x802E3FFC: lw          $s1, 0x80($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X80);
L_802E4000:
    // 0x802E4000: lw          $a0, 0x4($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X4);
    // 0x802E4004: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x802E4008: jal         0x8021B6D4
    // 0x802E400C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    static_3_8021B6D4(rdram, ctx);
        goto after_2;
    // 0x802E400C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_2:
    // 0x802E4010: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802E4014: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x802E4018: jal         0x802297A8
    // 0x802E401C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    static_3_802297A8(rdram, ctx);
        goto after_3;
    // 0x802E401C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_3:
    // 0x802E4020: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x802E4024: bne         $s0, $s4, L_802E4000
    if (ctx->r16 != ctx->r20) {
        // 0x802E4028: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_802E4000;
    }
    // 0x802E4028: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_802E402C:
    // 0x802E402C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802E4030: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x802E4034: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x802E4038: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x802E403C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x802E4040: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x802E4044: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x802E4048: jr          $ra
    // 0x802E404C: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x802E404C: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void D_802E7C30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E7CB0: jr          $ra
    // 0x802E7CB4: lwc1        $f0, 0x4C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X4C);
    return;
    // 0x802E7CB4: lwc1        $f0, 0x4C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X4C);
;}
RECOMP_FUNC void D_802ECF40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802ECFC0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802ECFC4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802ECFC8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802ECFCC: bne         $a0, $zero, L_802ECFE4
    if (ctx->r4 != 0) {
        // 0x802ECFD0: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_802ECFE4;
    }
    // 0x802ECFD0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802ECFD4: jal         0x802C67EC
    // 0x802ECFD8: addiu       $a0, $zero, 0x258
    ctx->r4 = ADD32(0, 0X258);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802ECFD8: addiu       $a0, $zero, 0x258
    ctx->r4 = ADD32(0, 0X258);
    after_0:
    // 0x802ECFDC: beq         $v0, $zero, L_802ED04C
    if (ctx->r2 == 0) {
        // 0x802ECFE0: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_802ED04C;
    }
    // 0x802ECFE0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_802ECFE4:
    // 0x802ECFE4: jal         0x8031C47C
    // 0x802ECFE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_8031C47C(rdram, ctx);
        goto after_1;
    // 0x802ECFE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x802ECFEC: addiu       $a0, $s0, 0xF0
    ctx->r4 = ADD32(ctx->r16, 0XF0);
    // 0x802ECFF0: lui         $a3, 0x8029
    ctx->r7 = S32(0X8029 << 16);
    // 0x802ECFF4: addiu       $a3, $a3, -0x5B40
    ctx->r7 = ADD32(ctx->r7, -0X5B40);
    // 0x802ECFF8: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    // 0x802ECFFC: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x802ED000: jal         0x802C6930
    // 0x802ED004: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    static_3_802C6930(rdram, ctx);
        goto after_2;
    // 0x802ED004: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_2:
    // 0x802ED008: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x802ED00C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802ED010: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802ED014: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x802ED018: addiu       $t7, $zero, 0x9
    ctx->r15 = ADD32(0, 0X9);
    // 0x802ED01C: addiu       $t8, $t8, 0x0
    ctx->r24 = ADD32(ctx->r24, 0X0);
    // 0x802ED020: addiu       $t9, $zero, 0x1E
    ctx->r25 = ADD32(0, 0X1E);
    // 0x802ED024: sh          $t7, 0xBC($s0)
    MEM_H(0XBC, ctx->r16) = ctx->r15;
    // 0x802ED028: sw          $t8, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->r24;
    // 0x802ED02C: sh          $zero, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = 0;
    // 0x802ED030: sh          $t9, 0xE6($s0)
    MEM_H(0XE6, ctx->r16) = ctx->r25;
    // 0x802ED034: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802ED038: sw          $t6, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r14;
    // 0x802ED03C: swc1        $f0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->f0.u32l;
    // 0x802ED040: swc1        $f0, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f0.u32l;
    // 0x802ED044: jal         0x8031D7B8
    // 0x802ED048: swc1        $f0, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = ctx->f0.u32l;
    static_3_8031D7B8(rdram, ctx);
        goto after_3;
    // 0x802ED048: swc1        $f0, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = ctx->f0.u32l;
    after_3:
L_802ED04C:
    // 0x802ED04C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802ED050: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x802ED054: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802ED058: jr          $ra
    // 0x802ED05C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x802ED05C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void D_802DCB5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802DCBDC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802DCBE0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802DCBE4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802DCBE8: bne         $a0, $zero, L_802DCC00
    if (ctx->r4 != 0) {
        // 0x802DCBEC: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_802DCC00;
    }
    // 0x802DCBEC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802DCBF0: jal         0x802C67EC
    // 0x802DCBF4: addiu       $a0, $zero, 0x68C
    ctx->r4 = ADD32(0, 0X68C);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802DCBF4: addiu       $a0, $zero, 0x68C
    ctx->r4 = ADD32(0, 0X68C);
    after_0:
    // 0x802DCBF8: beq         $v0, $zero, L_802DCC2C
    if (ctx->r2 == 0) {
        // 0x802DCBFC: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_802DCC2C;
    }
    // 0x802DCBFC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_802DCC00:
    // 0x802DCC00: jal         0x80317344
    // 0x802DCC04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80317344(rdram, ctx);
        goto after_1;
    // 0x802DCC04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x802DCC08: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802DCC0C: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802DCC10: sw          $t6, 0x1A0($s0)
    MEM_W(0X1A0, ctx->r16) = ctx->r14;
    // 0x802DCC14: jal         0x802D4800
    // 0x802DCC18: addiu       $a0, $s0, 0x1A4
    ctx->r4 = ADD32(ctx->r16, 0X1A4);
    static_3_802D4800(rdram, ctx);
        goto after_2;
    // 0x802DCC18: addiu       $a0, $s0, 0x1A4
    ctx->r4 = ADD32(ctx->r16, 0X1A4);
    after_2:
    // 0x802DCC1C: jal         0x802C498C
    // 0x802DCC20: addiu       $a0, $s0, 0x364
    ctx->r4 = ADD32(ctx->r16, 0X364);
    static_3_802C498C(rdram, ctx);
        goto after_3;
    // 0x802DCC20: addiu       $a0, $s0, 0x364
    ctx->r4 = ADD32(ctx->r16, 0X364);
    after_3:
    // 0x802DCC24: jal         0x802C498C
    // 0x802DCC28: addiu       $a0, $s0, 0x4F8
    ctx->r4 = ADD32(ctx->r16, 0X4F8);
    static_3_802C498C(rdram, ctx);
        goto after_4;
    // 0x802DCC28: addiu       $a0, $s0, 0x4F8
    ctx->r4 = ADD32(ctx->r16, 0X4F8);
    after_4:
L_802DCC2C:
    // 0x802DCC2C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802DCC30: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x802DCC34: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802DCC38: jr          $ra
    // 0x802DCC3C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x802DCC3C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void D_802E5CA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E5D20: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802E5D24: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x802E5D28: lui         $at, 0x4030
    ctx->r1 = S32(0X4030 << 16);
    // 0x802E5D2C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802E5D30: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802E5D34: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802E5D38: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802E5D3C: sub.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f12.fl - ctx->f4.fl;
    // 0x802E5D40: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802E5D44: mul.s       $f2, $f6, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x802E5D48: c.lt.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl < ctx->f2.fl;
    // 0x802E5D4C: nop

    // 0x802E5D50: bc1f        L_802E5D5C
    if (!c1cs) {
        // 0x802E5D54: nop
    
            goto L_802E5D5C;
    }
    // 0x802E5D54: nop

    // 0x802E5D58: mov.s       $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    ctx->f2.fl = ctx->f14.fl;
L_802E5D5C:
    // 0x802E5D5C: mul.s       $f0, $f2, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x802E5D60: jr          $ra
    // 0x802E5D64: nop

    return;
    // 0x802E5D64: nop

;}
RECOMP_FUNC void D_80219B34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80219B34: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x80219B38: swc1        $f12, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f12.u32l;
    // 0x80219B3C: sw          $a3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r7;
    // 0x80219B40: lwc1        $f4, 0x74($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X74);
    // 0x80219B44: lwc1        $f6, 0x68($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X68);
    // 0x80219B48: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    // 0x80219B4C: lw          $t7, 0x88($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X88);
    // 0x80219B50: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80219B54: lw          $t8, 0x8C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X8C);
    // 0x80219B58: lw          $t9, 0x90($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X90);
    // 0x80219B5C: swc1        $f14, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f14.u32l;
    // 0x80219B60: sw          $a2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r6;
    // 0x80219B64: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80219B68: sw          $t6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r14;
    // 0x80219B6C: sw          $t7, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r15;
    // 0x80219B70: sw          $t8, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r24;
    // 0x80219B74: bc1f        L_80219B88
    if (!c1cs) {
        // 0x80219B78: sw          $t9, 0x58($sp)
        MEM_W(0X58, ctx->r29) = ctx->r25;
            goto L_80219B88;
    }
    // 0x80219B78: sw          $t9, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r25;
    // 0x80219B7C: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    // 0x80219B80: b           L_80219B98
    // 0x80219B84: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
        goto L_80219B98;
    // 0x80219B84: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
L_80219B88:
    // 0x80219B88: lwc1        $f8, 0x74($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X74);
    // 0x80219B8C: lwc1        $f10, 0x68($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X68);
    // 0x80219B90: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    // 0x80219B94: swc1        $f10, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f10.u32l;
L_80219B98:
    // 0x80219B98: lwc1        $f6, 0x78($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X78);
    // 0x80219B9C: lwc1        $f4, 0x6C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80219BA0: lwc1        $f8, 0x78($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X78);
    // 0x80219BA4: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x80219BA8: c.lt.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl < ctx->f4.fl;
    // 0x80219BAC: nop

    // 0x80219BB0: bc1fl       L_80219BC8
    if (!c1cs) {
        // 0x80219BB4: lwc1        $f10, 0x6C($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X6C);
            goto L_80219BC8;
    }
    goto skip_0;
    // 0x80219BB4: lwc1        $f10, 0x6C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X6C);
    skip_0:
    // 0x80219BB8: swc1        $f4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f4.u32l;
    // 0x80219BBC: b           L_80219BD0
    // 0x80219BC0: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
        goto L_80219BD0;
    // 0x80219BC0: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    // 0x80219BC4: lwc1        $f10, 0x6C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X6C);
L_80219BC8:
    // 0x80219BC8: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    // 0x80219BCC: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
L_80219BD0:
    // 0x80219BD0: lwc1        $f4, 0x7C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x80219BD4: lwc1        $f6, 0x70($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80219BD8: lw          $v0, 0x80($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X80);
    // 0x80219BDC: lwc1        $f14, 0x7C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x80219BE0: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80219BE4: lwc1        $f2, 0x70($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80219BE8: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80219BEC: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x80219BF0: bc1f        L_80219C04
    if (!c1cs) {
        // 0x80219BF4: lwc1        $f10, 0x38($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
            goto L_80219C04;
    }
    // 0x80219BF4: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80219BF8: mov.s       $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = ctx->f6.fl;
    // 0x80219BFC: b           L_80219C04
    // 0x80219C00: mov.s       $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = ctx->f4.fl;
        goto L_80219C04;
    // 0x80219C00: mov.s       $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = ctx->f4.fl;
L_80219C04:
    // 0x80219C04: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80219C08: c.lt.s      $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f8.fl < ctx->f18.fl;
    // 0x80219C0C: nop

    // 0x80219C10: bc1fl       L_80219C28
    if (!c1cs) {
        // 0x80219C14: lwc1        $f12, 0xC($v0)
        ctx->f12.u32l = MEM_W(ctx->r2, 0XC);
            goto L_80219C28;
    }
    goto skip_1;
    // 0x80219C14: lwc1        $f12, 0xC($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0XC);
    skip_1:
    // 0x80219C18: sh          $t0, 0x0($t1)
    MEM_H(0X0, ctx->r9) = ctx->r8;
    // 0x80219C1C: b           L_8021A318
    // 0x80219C20: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021A318;
    // 0x80219C20: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80219C24: lwc1        $f12, 0xC($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0XC);
L_80219C28:
    // 0x80219C28: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80219C2C: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
    // 0x80219C30: c.lt.s      $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f12.fl < ctx->f10.fl;
    // 0x80219C34: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80219C38: bc1fl       L_80219C50
    if (!c1cs) {
        // 0x80219C3C: lwc1        $f0, 0x4($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
            goto L_80219C50;
    }
    goto skip_2;
    // 0x80219C3C: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    skip_2:
    // 0x80219C40: sh          $t2, 0x0($t3)
    MEM_H(0X0, ctx->r11) = ctx->r10;
    // 0x80219C44: b           L_8021A318
    // 0x80219C48: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021A318;
    // 0x80219C48: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80219C4C: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
L_80219C50:
    // 0x80219C50: addiu       $t4, $zero, -0x2
    ctx->r12 = ADD32(0, -0X2);
    // 0x80219C54: lw          $t5, 0x54($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X54);
    // 0x80219C58: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x80219C5C: nop

    // 0x80219C60: bc1fl       L_80219C78
    if (!c1cs) {
        // 0x80219C64: lwc1        $f16, 0x10($v0)
        ctx->f16.u32l = MEM_W(ctx->r2, 0X10);
            goto L_80219C78;
    }
    goto skip_3;
    // 0x80219C64: lwc1        $f16, 0x10($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X10);
    skip_3:
    // 0x80219C68: sh          $t4, 0x0($t5)
    MEM_H(0X0, ctx->r13) = ctx->r12;
    // 0x80219C6C: b           L_8021A318
    // 0x80219C70: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021A318;
    // 0x80219C70: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80219C74: lwc1        $f16, 0x10($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X10);
L_80219C78:
    // 0x80219C78: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80219C7C: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x80219C80: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80219C84: c.lt.s      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.fl < ctx->f4.fl;
    // 0x80219C88: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    // 0x80219C8C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x80219C90: bc1fl       L_80219CA8
    if (!c1cs) {
        // 0x80219C94: lwc1        $f16, 0x8($v0)
        ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
            goto L_80219CA8;
    }
    goto skip_4;
    // 0x80219C94: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    skip_4:
    // 0x80219C98: sh          $a1, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r5;
    // 0x80219C9C: b           L_8021A318
    // 0x80219CA0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021A318;
    // 0x80219CA0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80219CA4: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
L_80219CA8:
    // 0x80219CA8: addiu       $t7, $zero, -0x3
    ctx->r15 = ADD32(0, -0X3);
    // 0x80219CAC: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x80219CB0: c.lt.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl < ctx->f16.fl;
    // 0x80219CB4: nop

    // 0x80219CB8: bc1fl       L_80219CD0
    if (!c1cs) {
        // 0x80219CBC: lwc1        $f0, 0x14($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0X14);
            goto L_80219CD0;
    }
    goto skip_5;
    // 0x80219CBC: lwc1        $f0, 0x14($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X14);
    skip_5:
    // 0x80219CC0: sh          $t7, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r15;
    // 0x80219CC4: b           L_8021A318
    // 0x80219CC8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021A318;
    // 0x80219CC8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80219CCC: lwc1        $f0, 0x14($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X14);
L_80219CD0:
    // 0x80219CD0: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x80219CD4: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x80219CD8: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x80219CDC: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80219CE0: bc1fl       L_80219CF8
    if (!c1cs) {
        // 0x80219CE4: c.le.s      $f8, $f12
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f8.fl <= ctx->f12.fl;
            goto L_80219CF8;
    }
    goto skip_6;
    // 0x80219CE4: c.le.s      $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f8.fl <= ctx->f12.fl;
    skip_6:
    // 0x80219CE8: sh          $t9, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r25;
    // 0x80219CEC: b           L_8021A318
    // 0x80219CF0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021A318;
    // 0x80219CF0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80219CF4: c.le.s      $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f8.fl <= ctx->f12.fl;
L_80219CF8:
    // 0x80219CF8: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80219CFC: bc1fl       L_80219D70
    if (!c1cs) {
        // 0x80219D00: c.le.s      $f2, $f16
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl <= ctx->f16.fl;
            goto L_80219D70;
    }
    goto skip_7;
    // 0x80219D00: c.le.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl <= ctx->f16.fl;
    skip_7:
    // 0x80219D04: c.le.s      $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f18.fl <= ctx->f10.fl;
    // 0x80219D08: lwc1        $f6, 0x10($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X10);
    // 0x80219D0C: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80219D10: bc1fl       L_80219D70
    if (!c1cs) {
        // 0x80219D14: c.le.s      $f2, $f16
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl <= ctx->f16.fl;
            goto L_80219D70;
    }
    goto skip_8;
    // 0x80219D14: c.le.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl <= ctx->f16.fl;
    skip_8:
    // 0x80219D18: c.le.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl <= ctx->f6.fl;
    // 0x80219D1C: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80219D20: lwc1        $f10, 0x14($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80219D24: bc1fl       L_80219D70
    if (!c1cs) {
        // 0x80219D28: c.le.s      $f2, $f16
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl <= ctx->f16.fl;
            goto L_80219D70;
    }
    goto skip_9;
    // 0x80219D28: c.le.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl <= ctx->f16.fl;
    skip_9:
    // 0x80219D2C: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x80219D30: nop

    // 0x80219D34: bc1fl       L_80219D70
    if (!c1cs) {
        // 0x80219D38: c.le.s      $f2, $f16
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl <= ctx->f16.fl;
            goto L_80219D70;
    }
    goto skip_10;
    // 0x80219D38: c.le.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl <= ctx->f16.fl;
    skip_10:
    // 0x80219D3C: c.le.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl <= ctx->f0.fl;
    // 0x80219D40: nop

    // 0x80219D44: bc1fl       L_80219D70
    if (!c1cs) {
        // 0x80219D48: c.le.s      $f2, $f16
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl <= ctx->f16.fl;
            goto L_80219D70;
    }
    goto skip_11;
    // 0x80219D48: c.le.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl <= ctx->f16.fl;
    skip_11:
    // 0x80219D4C: c.le.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl <= ctx->f2.fl;
    // 0x80219D50: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x80219D54: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x80219D58: bc1fl       L_80219D70
    if (!c1cs) {
        // 0x80219D5C: c.le.s      $f2, $f16
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl <= ctx->f16.fl;
            goto L_80219D70;
    }
    goto skip_12;
    // 0x80219D5C: c.le.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl <= ctx->f16.fl;
    skip_12:
    // 0x80219D60: sh          $t1, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r9;
    // 0x80219D64: b           L_8021A318
    // 0x80219D68: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_8021A318;
    // 0x80219D68: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80219D6C: c.le.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl <= ctx->f16.fl;
L_80219D70:
    // 0x80219D70: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    // 0x80219D74: lwc1        $f6, 0x7C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x80219D78: lwc1        $f4, 0x70($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80219D7C: bc1fl       L_80219E44
    if (!c1cs) {
        // 0x80219D80: lwc1        $f0, 0x14($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0X14);
            goto L_80219E44;
    }
    goto skip_13;
    // 0x80219D80: lwc1        $f0, 0x14($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X14);
    skip_13:
    // 0x80219D84: sub.s       $f2, $f6, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x80219D88: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80219D8C: lwc1        $f8, 0x70($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80219D90: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x80219D94: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x80219D98: lwc1        $f6, 0x74($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X74);
    // 0x80219D9C: bc1fl       L_80219DB0
    if (!c1cs) {
        // 0x80219DA0: sub.s       $f10, $f16, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f16.fl - ctx->f8.fl;
            goto L_80219DB0;
    }
    goto skip_14;
    // 0x80219DA0: sub.s       $f10, $f16, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f16.fl - ctx->f8.fl;
    skip_14:
    // 0x80219DA4: b           L_80219DB4
    // 0x80219DA8: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
        goto L_80219DB4;
    // 0x80219DA8: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x80219DAC: sub.s       $f10, $f16, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f16.fl - ctx->f8.fl;
L_80219DB0:
    // 0x80219DB0: div.s       $f12, $f10, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = DIV_S(ctx->f10.fl, ctx->f2.fl);
L_80219DB4:
    // 0x80219DB4: sub.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x80219DB8: lwc1        $f6, 0x18($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80219DBC: mul.s       $f10, $f12, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f8.fl);
    // 0x80219DC0: add.s       $f0, $f10, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80219DC4: c.le.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl <= ctx->f0.fl;
    // 0x80219DC8: nop

    // 0x80219DCC: bc1fl       L_80219E44
    if (!c1cs) {
        // 0x80219DD0: lwc1        $f0, 0x14($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0X14);
            goto L_80219E44;
    }
    goto skip_15;
    // 0x80219DD0: lwc1        $f0, 0x14($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X14);
    skip_15:
    // 0x80219DD4: c.le.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl <= ctx->f6.fl;
    // 0x80219DD8: lwc1        $f8, 0x78($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X78);
    // 0x80219DDC: lwc1        $f10, 0x6C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80219DE0: bc1fl       L_80219E44
    if (!c1cs) {
        // 0x80219DE4: lwc1        $f0, 0x14($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0X14);
            goto L_80219E44;
    }
    goto skip_16;
    // 0x80219DE4: lwc1        $f0, 0x14($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X14);
    skip_16:
    // 0x80219DE8: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80219DEC: lwc1        $f8, 0x14($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80219DF0: mul.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x80219DF4: lwc1        $f4, 0x10($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X10);
    // 0x80219DF8: add.s       $f0, $f6, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x80219DFC: c.le.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl <= ctx->f0.fl;
    // 0x80219E00: nop

    // 0x80219E04: bc1fl       L_80219E44
    if (!c1cs) {
        // 0x80219E08: lwc1        $f0, 0x14($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0X14);
            goto L_80219E44;
    }
    goto skip_17;
    // 0x80219E08: lwc1        $f0, 0x14($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X14);
    skip_17:
    // 0x80219E0C: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x80219E10: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x80219E14: addiu       $t4, $zero, -0x3
    ctx->r12 = ADD32(0, -0X3);
    // 0x80219E18: bc1fl       L_80219E44
    if (!c1cs) {
        // 0x80219E1C: lwc1        $f0, 0x14($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0X14);
            goto L_80219E44;
    }
    goto skip_18;
    // 0x80219E1C: lwc1        $f0, 0x14($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X14);
    skip_18:
    // 0x80219E20: swc1        $f12, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f12.u32l;
    // 0x80219E24: lw          $t5, 0x54($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X54);
    // 0x80219E28: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80219E2C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80219E30: bne         $v1, $a1, L_80219E40
    if (ctx->r3 != ctx->r5) {
        // 0x80219E34: sh          $t4, 0x0($t5)
        MEM_H(0X0, ctx->r13) = ctx->r12;
            goto L_80219E40;
    }
    // 0x80219E34: sh          $t4, 0x0($t5)
    MEM_H(0X0, ctx->r13) = ctx->r12;
    // 0x80219E38: b           L_8021A318
    // 0x80219E3C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8021A318;
    // 0x80219E3C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80219E40:
    // 0x80219E40: lwc1        $f0, 0x14($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X14);
L_80219E44:
    // 0x80219E44: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80219E48: lwc1        $f6, 0x7C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x80219E4C: c.le.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl <= ctx->f14.fl;
    // 0x80219E50: lwc1        $f10, 0x70($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80219E54: bc1fl       L_80219F3C
    if (!c1cs) {
        // 0x80219E58: lwc1        $f2, 0x4($v0)
        ctx->f2.u32l = MEM_W(ctx->r2, 0X4);
            goto L_80219F3C;
    }
    goto skip_19;
    // 0x80219E58: lwc1        $f2, 0x4($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X4);
    skip_19:
    // 0x80219E5C: sub.s       $f2, $f6, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x80219E60: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80219E64: lwc1        $f8, 0x74($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X74);
    // 0x80219E68: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x80219E6C: c.eq.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl == ctx->f6.fl;
    // 0x80219E70: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80219E74: lwc1        $f10, 0x70($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80219E78: sub.s       $f14, $f8, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x80219E7C: bc1fl       L_80219E94
    if (!c1cs) {
        // 0x80219E80: sub.s       $f8, $f0, $f10
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f10.fl;
            goto L_80219E94;
    }
    goto skip_20;
    // 0x80219E80: sub.s       $f8, $f0, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f10.fl;
    skip_20:
    // 0x80219E84: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x80219E88: b           L_80219E98
    // 0x80219E8C: nop

        goto L_80219E98;
    // 0x80219E8C: nop

    // 0x80219E90: sub.s       $f8, $f0, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f10.fl;
L_80219E94:
    // 0x80219E94: div.s       $f12, $f8, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = DIV_S(ctx->f8.fl, ctx->f2.fl);
L_80219E98:
    // 0x80219E98: mul.s       $f4, $f12, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x80219E9C: lwc1        $f6, 0x68($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X68);
    // 0x80219EA0: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80219EA4: c.le.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl <= ctx->f0.fl;
    // 0x80219EA8: nop

    // 0x80219EAC: bc1fl       L_80219F3C
    if (!c1cs) {
        // 0x80219EB0: lwc1        $f2, 0x4($v0)
        ctx->f2.u32l = MEM_W(ctx->r2, 0X4);
            goto L_80219F3C;
    }
    goto skip_21;
    // 0x80219EB0: lwc1        $f2, 0x4($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X4);
    skip_21:
    // 0x80219EB4: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80219EB8: lwc1        $f2, 0x6C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80219EBC: lwc1        $f8, 0x78($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X78);
    // 0x80219EC0: c.le.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl <= ctx->f10.fl;
    // 0x80219EC4: nop

    // 0x80219EC8: bc1fl       L_80219F3C
    if (!c1cs) {
        // 0x80219ECC: lwc1        $f2, 0x4($v0)
        ctx->f2.u32l = MEM_W(ctx->r2, 0X4);
            goto L_80219F3C;
    }
    goto skip_22;
    // 0x80219ECC: lwc1        $f2, 0x4($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X4);
    skip_22:
    // 0x80219ED0: sub.s       $f4, $f8, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f2.fl;
    // 0x80219ED4: lwc1        $f10, 0x4($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80219ED8: mul.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x80219EDC: add.s       $f0, $f6, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f2.fl;
    // 0x80219EE0: c.le.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl <= ctx->f0.fl;
    // 0x80219EE4: nop

    // 0x80219EE8: bc1fl       L_80219F3C
    if (!c1cs) {
        // 0x80219EEC: lwc1        $f2, 0x4($v0)
        ctx->f2.u32l = MEM_W(ctx->r2, 0X4);
            goto L_80219F3C;
    }
    goto skip_23;
    // 0x80219EEC: lwc1        $f2, 0x4($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X4);
    skip_23:
    // 0x80219EF0: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80219EF4: addiu       $a2, $sp, 0x5C
    ctx->r6 = ADD32(ctx->r29, 0X5C);
    // 0x80219EF8: sll         $a0, $v1, 2
    ctx->r4 = S32(ctx->r3 << 2);
    // 0x80219EFC: c.le.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl <= ctx->f8.fl;
    // 0x80219F00: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    // 0x80219F04: addu        $t6, $a2, $a0
    ctx->r14 = ADD32(ctx->r6, ctx->r4);
    // 0x80219F08: bc1fl       L_80219F3C
    if (!c1cs) {
        // 0x80219F0C: lwc1        $f2, 0x4($v0)
        ctx->f2.u32l = MEM_W(ctx->r2, 0X4);
            goto L_80219F3C;
    }
    goto skip_24;
    // 0x80219F0C: lwc1        $f2, 0x4($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X4);
    skip_24:
    // 0x80219F10: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x80219F14: addu        $t9, $a3, $a0
    ctx->r25 = ADD32(ctx->r7, ctx->r4);
    // 0x80219F18: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x80219F1C: swc1        $f12, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f12.u32l;
    // 0x80219F20: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x80219F24: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80219F28: bne         $v1, $a1, L_80219F38
    if (ctx->r3 != ctx->r5) {
        // 0x80219F2C: sh          $t8, 0x0($t0)
        MEM_H(0X0, ctx->r8) = ctx->r24;
            goto L_80219F38;
    }
    // 0x80219F2C: sh          $t8, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r24;
    // 0x80219F30: b           L_8021A318
    // 0x80219F34: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8021A318;
    // 0x80219F34: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80219F38:
    // 0x80219F38: lwc1        $f2, 0x4($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X4);
L_80219F3C:
    // 0x80219F3C: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80219F40: addiu       $a2, $sp, 0x5C
    ctx->r6 = ADD32(ctx->r29, 0X5C);
    // 0x80219F44: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    // 0x80219F48: c.le.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl <= ctx->f2.fl;
    // 0x80219F4C: lwc1        $f6, 0x78($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X78);
    // 0x80219F50: lwc1        $f10, 0x6C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80219F54: bc1fl       L_8021A034
    if (!c1cs) {
        // 0x80219F58: lwc1        $f2, 0x10($v0)
        ctx->f2.u32l = MEM_W(ctx->r2, 0X10);
            goto L_8021A034;
    }
    goto skip_25;
    // 0x80219F58: lwc1        $f2, 0x10($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X10);
    skip_25:
    // 0x80219F5C: sub.s       $f0, $f6, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x80219F60: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80219F64: lwc1        $f8, 0x74($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X74);
    // 0x80219F68: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x80219F6C: c.eq.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl == ctx->f16.fl;
    // 0x80219F70: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80219F74: lwc1        $f6, 0x6C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80219F78: sub.s       $f14, $f8, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x80219F7C: bc1fl       L_80219F90
    if (!c1cs) {
        // 0x80219F80: sub.s       $f10, $f2, $f6
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f6.fl;
            goto L_80219F90;
    }
    goto skip_26;
    // 0x80219F80: sub.s       $f10, $f2, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f6.fl;
    skip_26:
    // 0x80219F84: b           L_80219F94
    // 0x80219F88: mov.s       $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = ctx->f16.fl;
        goto L_80219F94;
    // 0x80219F88: mov.s       $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = ctx->f16.fl;
    // 0x80219F8C: sub.s       $f10, $f2, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f6.fl;
L_80219F90:
    // 0x80219F90: div.s       $f12, $f10, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
L_80219F94:
    // 0x80219F94: mul.s       $f8, $f12, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x80219F98: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x80219F9C: add.s       $f0, $f8, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x80219FA0: c.le.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl <= ctx->f0.fl;
    // 0x80219FA4: nop

    // 0x80219FA8: bc1fl       L_8021A034
    if (!c1cs) {
        // 0x80219FAC: lwc1        $f2, 0x10($v0)
        ctx->f2.u32l = MEM_W(ctx->r2, 0X10);
            goto L_8021A034;
    }
    goto skip_27;
    // 0x80219FAC: lwc1        $f2, 0x10($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X10);
    skip_27:
    // 0x80219FB0: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80219FB4: lwc1        $f10, 0x7C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x80219FB8: lwc1        $f8, 0x70($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80219FBC: c.le.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl <= ctx->f6.fl;
    // 0x80219FC0: nop

    // 0x80219FC4: bc1fl       L_8021A034
    if (!c1cs) {
        // 0x80219FC8: lwc1        $f2, 0x10($v0)
        ctx->f2.u32l = MEM_W(ctx->r2, 0X10);
            goto L_8021A034;
    }
    goto skip_28;
    // 0x80219FC8: lwc1        $f2, 0x10($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X10);
    skip_28:
    // 0x80219FCC: sub.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x80219FD0: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80219FD4: mul.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x80219FD8: add.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80219FDC: c.le.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl <= ctx->f0.fl;
    // 0x80219FE0: nop

    // 0x80219FE4: bc1fl       L_8021A034
    if (!c1cs) {
        // 0x80219FE8: lwc1        $f2, 0x10($v0)
        ctx->f2.u32l = MEM_W(ctx->r2, 0X10);
            goto L_8021A034;
    }
    goto skip_29;
    // 0x80219FE8: lwc1        $f2, 0x10($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X10);
    skip_29:
    // 0x80219FEC: lwc1        $f4, 0x14($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X14);
    // 0x80219FF0: sll         $a0, $v1, 2
    ctx->r4 = S32(ctx->r3 << 2);
    // 0x80219FF4: addu        $t1, $a2, $a0
    ctx->r9 = ADD32(ctx->r6, ctx->r4);
    // 0x80219FF8: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x80219FFC: nop

    // 0x8021A000: bc1fl       L_8021A034
    if (!c1cs) {
        // 0x8021A004: lwc1        $f2, 0x10($v0)
        ctx->f2.u32l = MEM_W(ctx->r2, 0X10);
            goto L_8021A034;
    }
    goto skip_30;
    // 0x8021A004: lwc1        $f2, 0x10($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X10);
    skip_30:
    // 0x8021A008: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x8021A00C: addu        $t4, $a3, $a0
    ctx->r12 = ADD32(ctx->r7, ctx->r4);
    // 0x8021A010: addiu       $t3, $zero, -0x2
    ctx->r11 = ADD32(0, -0X2);
    // 0x8021A014: swc1        $f12, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->f12.u32l;
    // 0x8021A018: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x8021A01C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8021A020: bne         $v1, $a1, L_8021A030
    if (ctx->r3 != ctx->r5) {
        // 0x8021A024: sh          $t3, 0x0($t5)
        MEM_H(0X0, ctx->r13) = ctx->r11;
            goto L_8021A030;
    }
    // 0x8021A024: sh          $t3, 0x0($t5)
    MEM_H(0X0, ctx->r13) = ctx->r11;
    // 0x8021A028: b           L_8021A318
    // 0x8021A02C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8021A318;
    // 0x8021A02C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8021A030:
    // 0x8021A030: lwc1        $f2, 0x10($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X10);
L_8021A034:
    // 0x8021A034: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8021A038: lwc1        $f8, 0x78($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X78);
    // 0x8021A03C: lwc1        $f10, 0x6C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x8021A040: c.le.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl <= ctx->f6.fl;
    // 0x8021A044: nop

    // 0x8021A048: bc1fl       L_8021A128
    if (!c1cs) {
        // 0x8021A04C: lwc1        $f18, 0x0($v0)
        ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
            goto L_8021A128;
    }
    goto skip_31;
    // 0x8021A04C: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    skip_31:
    // 0x8021A050: sub.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8021A054: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8021A058: lwc1        $f4, 0x74($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X74);
    // 0x8021A05C: lwc1        $f6, 0x68($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8021A060: c.eq.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl == ctx->f8.fl;
    // 0x8021A064: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8021A068: lwc1        $f10, 0x6C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x8021A06C: sub.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8021A070: bc1fl       L_8021A088
    if (!c1cs) {
        // 0x8021A074: sub.s       $f4, $f2, $f10
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f10.fl;
            goto L_8021A088;
    }
    goto skip_32;
    // 0x8021A074: sub.s       $f4, $f2, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f10.fl;
    skip_32:
    // 0x8021A078: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x8021A07C: b           L_8021A08C
    // 0x8021A080: nop

        goto L_8021A08C;
    // 0x8021A080: nop

    // 0x8021A084: sub.s       $f4, $f2, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f10.fl;
L_8021A088:
    // 0x8021A088: div.s       $f12, $f4, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
L_8021A08C:
    // 0x8021A08C: mul.s       $f6, $f12, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x8021A090: lwc1        $f8, 0x68($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8021A094: add.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8021A098: c.le.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl <= ctx->f0.fl;
    // 0x8021A09C: nop

    // 0x8021A0A0: bc1fl       L_8021A128
    if (!c1cs) {
        // 0x8021A0A4: lwc1        $f18, 0x0($v0)
        ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
            goto L_8021A128;
    }
    goto skip_33;
    // 0x8021A0A4: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    skip_33:
    // 0x8021A0A8: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8021A0AC: lwc1        $f4, 0x7C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x8021A0B0: lwc1        $f6, 0x70($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X70);
    // 0x8021A0B4: c.le.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl <= ctx->f10.fl;
    // 0x8021A0B8: nop

    // 0x8021A0BC: bc1fl       L_8021A128
    if (!c1cs) {
        // 0x8021A0C0: lwc1        $f18, 0x0($v0)
        ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
            goto L_8021A128;
    }
    goto skip_34;
    // 0x8021A0C0: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    skip_34:
    // 0x8021A0C4: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8021A0C8: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8021A0CC: mul.s       $f10, $f12, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f8.fl);
    // 0x8021A0D0: add.s       $f0, $f10, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x8021A0D4: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x8021A0D8: nop

    // 0x8021A0DC: bc1fl       L_8021A128
    if (!c1cs) {
        // 0x8021A0E0: lwc1        $f18, 0x0($v0)
        ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
            goto L_8021A128;
    }
    goto skip_35;
    // 0x8021A0E0: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    skip_35:
    // 0x8021A0E4: lwc1        $f8, 0x14($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X14);
    // 0x8021A0E8: sll         $a0, $v1, 2
    ctx->r4 = S32(ctx->r3 << 2);
    // 0x8021A0EC: addu        $t6, $a2, $a0
    ctx->r14 = ADD32(ctx->r6, ctx->r4);
    // 0x8021A0F0: c.le.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl <= ctx->f8.fl;
    // 0x8021A0F4: nop

    // 0x8021A0F8: bc1fl       L_8021A128
    if (!c1cs) {
        // 0x8021A0FC: lwc1        $f18, 0x0($v0)
        ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
            goto L_8021A128;
    }
    goto skip_36;
    // 0x8021A0FC: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    skip_36:
    // 0x8021A100: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x8021A104: addu        $t9, $a3, $a0
    ctx->r25 = ADD32(ctx->r7, ctx->r4);
    // 0x8021A108: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8021A10C: swc1        $f12, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f12.u32l;
    // 0x8021A110: lw          $t8, 0x0($t9)
    ctx->r24 = MEM_W(ctx->r25, 0X0);
    // 0x8021A114: bne         $v1, $a1, L_8021A124
    if (ctx->r3 != ctx->r5) {
        // 0x8021A118: sh          $a1, 0x0($t8)
        MEM_H(0X0, ctx->r24) = ctx->r5;
            goto L_8021A124;
    }
    // 0x8021A118: sh          $a1, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r5;
    // 0x8021A11C: b           L_8021A318
    // 0x8021A120: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8021A318;
    // 0x8021A120: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8021A124:
    // 0x8021A124: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
L_8021A128:
    // 0x8021A128: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8021A12C: lwc1        $f6, 0x74($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X74);
    // 0x8021A130: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8021A134: c.le.s      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.fl <= ctx->f18.fl;
    // 0x8021A138: nop

    // 0x8021A13C: bc1fl       L_8021A220
    if (!c1cs) {
        // 0x8021A140: lwc1        $f0, 0xC($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
            goto L_8021A220;
    }
    goto skip_37;
    // 0x8021A140: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    skip_37:
    // 0x8021A144: sub.s       $f14, $f6, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x8021A148: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8021A14C: lwc1        $f8, 0x7C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x8021A150: lwc1        $f10, 0x70($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X70);
    // 0x8021A154: c.eq.s      $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f14.fl == ctx->f6.fl;
    // 0x8021A158: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8021A15C: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8021A160: sub.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8021A164: bc1fl       L_8021A17C
    if (!c1cs) {
        // 0x8021A168: sub.s       $f8, $f18, $f4
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f4.fl;
            goto L_8021A17C;
    }
    goto skip_38;
    // 0x8021A168: sub.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f4.fl;
    skip_38:
    // 0x8021A16C: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x8021A170: b           L_8021A180
    // 0x8021A174: nop

        goto L_8021A180;
    // 0x8021A174: nop

    // 0x8021A178: sub.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f4.fl;
L_8021A17C:
    // 0x8021A17C: div.s       $f12, $f8, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = DIV_S(ctx->f8.fl, ctx->f14.fl);
L_8021A180:
    // 0x8021A180: mul.s       $f10, $f12, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x8021A184: lwc1        $f6, 0x70($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X70);
    // 0x8021A188: add.s       $f0, $f10, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x8021A18C: c.le.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl <= ctx->f0.fl;
    // 0x8021A190: nop

    // 0x8021A194: bc1fl       L_8021A220
    if (!c1cs) {
        // 0x8021A198: lwc1        $f0, 0xC($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
            goto L_8021A220;
    }
    goto skip_39;
    // 0x8021A198: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    skip_39:
    // 0x8021A19C: lwc1        $f4, 0x14($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X14);
    // 0x8021A1A0: lwc1        $f8, 0x78($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X78);
    // 0x8021A1A4: lwc1        $f10, 0x6C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x8021A1A8: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x8021A1AC: nop

    // 0x8021A1B0: bc1fl       L_8021A220
    if (!c1cs) {
        // 0x8021A1B4: lwc1        $f0, 0xC($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
            goto L_8021A220;
    }
    goto skip_40;
    // 0x8021A1B4: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    skip_40:
    // 0x8021A1B8: sub.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8021A1BC: lwc1        $f8, 0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8021A1C0: mul.s       $f4, $f12, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f6.fl);
    // 0x8021A1C4: add.s       $f0, $f4, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x8021A1C8: c.le.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl <= ctx->f0.fl;
    // 0x8021A1CC: nop

    // 0x8021A1D0: bc1fl       L_8021A220
    if (!c1cs) {
        // 0x8021A1D4: lwc1        $f0, 0xC($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
            goto L_8021A220;
    }
    goto skip_41;
    // 0x8021A1D4: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    skip_41:
    // 0x8021A1D8: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8021A1DC: sll         $a0, $v1, 2
    ctx->r4 = S32(ctx->r3 << 2);
    // 0x8021A1E0: addu        $t0, $a2, $a0
    ctx->r8 = ADD32(ctx->r6, ctx->r4);
    // 0x8021A1E4: c.le.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl <= ctx->f6.fl;
    // 0x8021A1E8: nop

    // 0x8021A1EC: bc1fl       L_8021A220
    if (!c1cs) {
        // 0x8021A1F0: lwc1        $f0, 0xC($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
            goto L_8021A220;
    }
    goto skip_42;
    // 0x8021A1F0: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    skip_42:
    // 0x8021A1F4: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x8021A1F8: addu        $t4, $a3, $a0
    ctx->r12 = ADD32(ctx->r7, ctx->r4);
    // 0x8021A1FC: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x8021A200: swc1        $f12, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f12.u32l;
    // 0x8021A204: lw          $t3, 0x0($t4)
    ctx->r11 = MEM_W(ctx->r12, 0X0);
    // 0x8021A208: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8021A20C: bne         $v1, $a1, L_8021A21C
    if (ctx->r3 != ctx->r5) {
        // 0x8021A210: sh          $t2, 0x0($t3)
        MEM_H(0X0, ctx->r11) = ctx->r10;
            goto L_8021A21C;
    }
    // 0x8021A210: sh          $t2, 0x0($t3)
    MEM_H(0X0, ctx->r11) = ctx->r10;
    // 0x8021A214: b           L_8021A318
    // 0x8021A218: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8021A318;
    // 0x8021A218: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8021A21C:
    // 0x8021A21C: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
L_8021A220:
    // 0x8021A220: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8021A224: lwc1        $f10, 0x74($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X74);
    // 0x8021A228: lwc1        $f8, 0x68($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8021A22C: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x8021A230: nop

    // 0x8021A234: bc1fl       L_8021A318
    if (!c1cs) {
        // 0x8021A238: andi        $v0, $v1, 0xFF
        ctx->r2 = ctx->r3 & 0XFF;
            goto L_8021A318;
    }
    goto skip_43;
    // 0x8021A238: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    skip_43:
    // 0x8021A23C: sub.s       $f14, $f10, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x8021A240: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8021A244: lwc1        $f6, 0x7C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x8021A248: lwc1        $f4, 0x70($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X70);
    // 0x8021A24C: c.eq.s      $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f14.fl == ctx->f10.fl;
    // 0x8021A250: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8021A254: lwc1        $f8, 0x68($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8021A258: sub.s       $f2, $f6, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x8021A25C: bc1fl       L_8021A274
    if (!c1cs) {
        // 0x8021A260: sub.s       $f6, $f0, $f8
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f8.fl;
            goto L_8021A274;
    }
    goto skip_44;
    // 0x8021A260: sub.s       $f6, $f0, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f8.fl;
    skip_44:
    // 0x8021A264: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x8021A268: b           L_8021A278
    // 0x8021A26C: nop

        goto L_8021A278;
    // 0x8021A26C: nop

    // 0x8021A270: sub.s       $f6, $f0, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f8.fl;
L_8021A274:
    // 0x8021A274: div.s       $f12, $f6, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = DIV_S(ctx->f6.fl, ctx->f14.fl);
L_8021A278:
    // 0x8021A278: mul.s       $f4, $f12, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x8021A27C: lwc1        $f10, 0x70($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X70);
    // 0x8021A280: add.s       $f0, $f4, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x8021A284: c.le.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl <= ctx->f0.fl;
    // 0x8021A288: nop

    // 0x8021A28C: bc1fl       L_8021A318
    if (!c1cs) {
        // 0x8021A290: andi        $v0, $v1, 0xFF
        ctx->r2 = ctx->r3 & 0XFF;
            goto L_8021A318;
    }
    goto skip_45;
    // 0x8021A290: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    skip_45:
    // 0x8021A294: lwc1        $f8, 0x14($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X14);
    // 0x8021A298: lwc1        $f6, 0x78($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X78);
    // 0x8021A29C: lwc1        $f4, 0x6C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x8021A2A0: c.le.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl <= ctx->f8.fl;
    // 0x8021A2A4: nop

    // 0x8021A2A8: bc1fl       L_8021A318
    if (!c1cs) {
        // 0x8021A2AC: andi        $v0, $v1, 0xFF
        ctx->r2 = ctx->r3 & 0XFF;
            goto L_8021A318;
    }
    goto skip_46;
    // 0x8021A2AC: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    skip_46:
    // 0x8021A2B0: sub.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x8021A2B4: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8021A2B8: mul.s       $f8, $f12, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f10.fl);
    // 0x8021A2BC: add.s       $f0, $f8, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x8021A2C0: c.le.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl <= ctx->f0.fl;
    // 0x8021A2C4: nop

    // 0x8021A2C8: bc1fl       L_8021A318
    if (!c1cs) {
        // 0x8021A2CC: andi        $v0, $v1, 0xFF
        ctx->r2 = ctx->r3 & 0XFF;
            goto L_8021A318;
    }
    goto skip_47;
    // 0x8021A2CC: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    skip_47:
    // 0x8021A2D0: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8021A2D4: sll         $a0, $v1, 2
    ctx->r4 = S32(ctx->r3 << 2);
    // 0x8021A2D8: addu        $t5, $a2, $a0
    ctx->r13 = ADD32(ctx->r6, ctx->r4);
    // 0x8021A2DC: c.le.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl <= ctx->f10.fl;
    // 0x8021A2E0: nop

    // 0x8021A2E4: bc1fl       L_8021A318
    if (!c1cs) {
        // 0x8021A2E8: andi        $v0, $v1, 0xFF
        ctx->r2 = ctx->r3 & 0XFF;
            goto L_8021A318;
    }
    goto skip_48;
    // 0x8021A2E8: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    skip_48:
    // 0x8021A2EC: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x8021A2F0: addu        $t9, $a3, $a0
    ctx->r25 = ADD32(ctx->r7, ctx->r4);
    // 0x8021A2F4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8021A2F8: swc1        $f12, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f12.u32l;
    // 0x8021A2FC: lw          $t8, 0x0($t9)
    ctx->r24 = MEM_W(ctx->r25, 0X0);
    // 0x8021A300: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8021A304: bne         $v1, $a1, L_8021A314
    if (ctx->r3 != ctx->r5) {
        // 0x8021A308: sh          $t7, 0x0($t8)
        MEM_H(0X0, ctx->r24) = ctx->r15;
            goto L_8021A314;
    }
    // 0x8021A308: sh          $t7, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r15;
    // 0x8021A30C: b           L_8021A318
    // 0x8021A310: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8021A318;
    // 0x8021A310: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8021A314:
    // 0x8021A314: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
L_8021A318:
    // 0x8021A318: jr          $ra
    // 0x8021A31C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x8021A31C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void D_802E6E84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E6F04: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x802E6F08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802E6F0C: sw          $a0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r4;
    // 0x802E6F10: sw          $a2, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r6;
    // 0x802E6F14: bne         $a1, $zero, L_802E6F40
    if (ctx->r5 != 0) {
        // 0x802E6F18: or          $a3, $a1, $zero
        ctx->r7 = ctx->r5 | 0;
            goto L_802E6F40;
    }
    // 0x802E6F18: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x802E6F1C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E6F20: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802E6F24: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802E6F28: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802E6F2C: jal         0x80231A24
    // 0x802E6F30: sw          $a3, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r7;
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x802E6F30: sw          $a3, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r7;
    after_0:
    // 0x802E6F34: addiu       $t6, $zero, 0x29A
    ctx->r14 = ADD32(0, 0X29A);
    // 0x802E6F38: sw          $t6, 0x0($zero)
    MEM_W(0X0, 0) = ctx->r14;
    // 0x802E6F3C: lw          $a3, 0xAC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XAC);
L_802E6F40:
    // 0x802E6F40: jal         0x803183D0
    // 0x802E6F44: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    static_3_803183D0(rdram, ctx);
        goto after_1;
    // 0x802E6F44: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_1:
    // 0x802E6F48: lw          $v1, 0xD8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XD8);
    // 0x802E6F4C: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    // 0x802E6F50: lw          $t9, 0x14($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X14);
    // 0x802E6F54: lh          $t7, 0x10($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X10);
    // 0x802E6F58: jalr        $t9
    // 0x802E6F5C: addu        $a0, $t7, $v0
    ctx->r4 = ADD32(ctx->r15, ctx->r2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x802E6F5C: addu        $a0, $t7, $v0
    ctx->r4 = ADD32(ctx->r15, ctx->r2);
    after_2:
    // 0x802E6F60: jal         0x803183D0
    // 0x802E6F64: lw          $a0, 0xB0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XB0);
    static_3_803183D0(rdram, ctx);
        goto after_3;
    // 0x802E6F64: lw          $a0, 0xB0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XB0);
    after_3:
    // 0x802E6F68: lw          $v1, 0xD8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XD8);
    // 0x802E6F6C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x802E6F70: lw          $t9, 0x14($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X14);
    // 0x802E6F74: lh          $t8, 0x10($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X10);
    // 0x802E6F78: jalr        $t9
    // 0x802E6F7C: addu        $a0, $t8, $v0
    ctx->r4 = ADD32(ctx->r24, ctx->r2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x802E6F7C: addu        $a0, $t8, $v0
    ctx->r4 = ADD32(ctx->r24, ctx->r2);
    after_4:
    // 0x802E6F80: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x802E6F84: jal         0x802CF718
    // 0x802E6F88: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    static_3_802CF718(rdram, ctx);
        goto after_5;
    // 0x802E6F88: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_5:
    // 0x802E6F8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802E6F90: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    // 0x802E6F94: jr          $ra
    // 0x802E6F98: nop

    return;
    // 0x802E6F98: nop

;}
RECOMP_FUNC void D_802C5B60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802C5BE0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802C5BE4: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802C5BE8: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x802C5BEC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802C5BF0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x802C5BF4: addiu       $a0, $zero, 0x2710
    ctx->r4 = ADD32(0, 0X2710);
    // 0x802C5BF8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802C5BFC: jal         0x80305E90
    // 0x802C5C00: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    static_3_80305E90(rdram, ctx);
        goto after_0;
    // 0x802C5C00: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    after_0:
    // 0x802C5C04: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x802C5C08: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x802C5C0C: addiu       $t7, $zero, 0x38
    ctx->r15 = ADD32(0, 0X38);
    // 0x802C5C10: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x802C5C14: addiu       $a2, $zero, 0x2F
    ctx->r6 = ADD32(0, 0X2F);
    // 0x802C5C18: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x802C5C1C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    // 0x802C5C20: jal         0x80302238
    // 0x802C5C24: addiu       $a1, $a1, 0x168
    ctx->r5 = ADD32(ctx->r5, 0X168);
    static_3_80302238(rdram, ctx);
        goto after_1;
    // 0x802C5C24: addiu       $a1, $a1, 0x168
    ctx->r5 = ADD32(ctx->r5, 0X168);
    after_1:
    // 0x802C5C28: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802C5C2C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802C5C30: jr          $ra
    // 0x802C5C34: nop

    return;
    // 0x802C5C34: nop

;}
RECOMP_FUNC void D_80246B30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80246B30: lhu         $t6, 0x14($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X14);
    // 0x80246B34: nor         $t7, $a1, $zero
    ctx->r15 = ~(ctx->r5 | 0);
    // 0x80246B38: and         $t8, $t6, $t7
    ctx->r24 = ctx->r14 & ctx->r15;
    // 0x80246B3C: jr          $ra
    // 0x80246B40: sh          $t8, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r24;
    return;
    // 0x80246B40: sh          $t8, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r24;
;}
RECOMP_FUNC void D_802937BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029383C: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x80293840: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x80293844: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80293848: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8029384C: sw          $a1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r5;
    // 0x80293850: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x80293854: addiu       $t6, $sp, 0x5C
    ctx->r14 = ADD32(ctx->r29, 0X5C);
    // 0x80293858: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8029385C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80293860: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80293864: lwc1        $f4, 0x154($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X154);
    // 0x80293868: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8029386C: addiu       $a2, $sp, 0x64
    ctx->r6 = ADD32(ctx->r29, 0X64);
    // 0x80293870: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x80293874: lwc1        $f6, 0x15C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X15C);
    // 0x80293878: addiu       $a3, $sp, 0x60
    ctx->r7 = ADD32(ctx->r29, 0X60);
    // 0x8029387C: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x80293880: lwc1        $f8, 0x160($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X160);
    // 0x80293884: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x80293888: lwc1        $f10, 0x164($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X164);
    // 0x8029388C: jal         0x802AD568
    // 0x80293890: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    static_3_802AD568(rdram, ctx);
        goto after_0;
    // 0x80293890: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    after_0:
    // 0x80293894: blez        $v0, L_80293998
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80293898: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80293998;
    }
    // 0x80293898: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8029389C: jal         0x802C51D0
    // 0x802938A0: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    static_3_802C51D0(rdram, ctx);
        goto after_1;
    // 0x802938A0: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    after_1:
    // 0x802938A4: lwc1        $f16, 0x98($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X98);
    // 0x802938A8: lwc1        $f18, 0x9C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x802938AC: lwc1        $f4, 0xA0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x802938B0: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x802938B4: swc1        $f16, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f16.u32l;
    // 0x802938B8: swc1        $f18, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f18.u32l;
    // 0x802938BC: jal         0x8022970C
    // 0x802938C0: swc1        $f4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f4.u32l;
    func_8022970C(rdram, ctx);
        goto after_2;
    // 0x802938C0: swc1        $f4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x802938C4: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x802938C8: lwc1        $f6, 0x4C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x802938CC: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x802938D0: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x802938D4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802938D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802938DC: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    // 0x802938E0: addiu       $a2, $sp, 0x60
    ctx->r6 = ADD32(ctx->r29, 0X60);
    // 0x802938E4: addiu       $a3, $sp, 0x5C
    ctx->r7 = ADD32(ctx->r29, 0X5C);
    // 0x802938E8: swc1        $f6, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f6.u32l;
    // 0x802938EC: swc1        $f8, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f8.u32l;
    // 0x802938F0: swc1        $f10, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f10.u32l;
    // 0x802938F4: jal         0x802C484C
    // 0x802938F8: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    static_3_802C484C(rdram, ctx);
        goto after_3;
    // 0x802938F8: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_3:
    // 0x802938FC: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x80293900: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    // 0x80293904: jal         0x802D01D4
    // 0x80293908: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    static_3_802D01D4(rdram, ctx);
        goto after_4;
    // 0x80293908: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    after_4:
    // 0x8029390C: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x80293910: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x80293914: jal         0x802D01D4
    // 0x80293918: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    static_3_802D01D4(rdram, ctx);
        goto after_5;
    // 0x80293918: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    after_5:
    // 0x8029391C: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x80293920: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80293924: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80293928: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8029392C: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x80293930: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80293934: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80293938: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8029393C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80293940: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x80293944: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x80293948: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x8029394C: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    // 0x80293950: lw          $t8, 0x8C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8C);
    // 0x80293954: addiu       $t9, $zero, 0x13
    ctx->r25 = ADD32(0, 0X13);
    // 0x80293958: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8029395C: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x80293960: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x80293964: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    // 0x80293968: addiu       $a2, $zero, 0x5B
    ctx->r6 = ADD32(0, 0X5B);
    // 0x8029396C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80293970: jal         0x802AB018
    // 0x80293974: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    static_3_802AB018(rdram, ctx);
        goto after_6;
    // 0x80293974: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    after_6:
    // 0x80293978: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8029397C: jal         0x802D0CC0
    // 0x80293980: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    static_3_802D0CC0(rdram, ctx);
        goto after_7;
    // 0x80293980: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    after_7:
    // 0x80293984: lw          $t0, 0x18C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X18C);
    // 0x80293988: lwc1        $f10, 0xAC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x8029398C: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x80293990: sw          $t1, 0x18C($s0)
    MEM_W(0X18C, ctx->r16) = ctx->r9;
    // 0x80293994: swc1        $f10, 0xF4($s0)
    MEM_W(0XF4, ctx->r16) = ctx->f10.u32l;
L_80293998:
    // 0x80293998: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8029399C: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x802939A0: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    // 0x802939A4: jr          $ra
    // 0x802939A8: nop

    return;
    // 0x802939A8: nop

;}
RECOMP_FUNC void func_8023F020(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023F020: andi        $t2, $t1, 0xF
    ctx->r10 = ctx->r9 & 0XF;
    // 0x8023F024: beq         $t2, $zero, L_8023F040
    if (ctx->r10 == 0) {
        // 0x8023F028: nop
    
            goto L_8023F040;
    }
    // 0x8023F028: nop

    // 0x8023F02C: subu        $t1, $t1, $t2
    ctx->r9 = SUB32(ctx->r9, ctx->r10);
    // 0x8023F030: cache       0x15, 0x10($t1)

    // 0x8023F034: sltu        $at, $t1, $t0
    ctx->r1 = ctx->r9 < ctx->r8 ? 1 : 0;
    // 0x8023F038: bne         $at, $zero, L_8023F050
    if (ctx->r1 != 0) {
        // 0x8023F03C: nop
    
            goto L_8023F050;
    }
    // 0x8023F03C: nop

L_8023F040:
    // 0x8023F040: cache       0x11, 0x0($t0)

    // 0x8023F044: sltu        $at, $t0, $t1
    ctx->r1 = ctx->r8 < ctx->r9 ? 1 : 0;
    // 0x8023F048: bne         $at, $zero, L_8023F040
    if (ctx->r1 != 0) {
        // 0x8023F04C: addiu       $t0, $t0, 0x10
        ctx->r8 = ADD32(ctx->r8, 0X10);
            goto L_8023F040;
    }
    // 0x8023F04C: addiu       $t0, $t0, 0x10
    ctx->r8 = ADD32(ctx->r8, 0X10);
L_8023F050:
    // 0x8023F050: jr          $ra
    // 0x8023F054: nop

    return;
    // 0x8023F054: nop

    // 0x8023F058: lui         $t0, 0x8000
    ctx->r8 = S32(0X8000 << 16);
    // 0x8023F05C: addu        $t1, $t0, $t3
    ctx->r9 = ADD32(ctx->r8, ctx->r11);
    // 0x8023F060: addiu       $t1, $t1, -0x10
    ctx->r9 = ADD32(ctx->r9, -0X10);
L_8023F064:
    // 0x8023F064: cache       0x01, 0x0($t0)

    // 0x8023F068: sltu        $at, $t0, $t1
    ctx->r1 = ctx->r8 < ctx->r9 ? 1 : 0;
    // 0x8023F06C: bne         $at, $zero, L_8023F064
    if (ctx->r1 != 0) {
        // 0x8023F070: addiu       $t0, $t0, 0x10
        ctx->r8 = ADD32(ctx->r8, 0X10);
            goto L_8023F064;
    }
    // 0x8023F070: addiu       $t0, $t0, 0x10
    ctx->r8 = ADD32(ctx->r8, 0X10);
    // 0x8023F074: jr          $ra
    // 0x8023F078: nop

    return;
    // 0x8023F078: nop

    // 0x8023F07C: nop

    // 0x8023F080: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8023F084: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8023F088: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023F08C: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x8023F090: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x8023F094: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x8023F098: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x8023F09C: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x8023F0A0: jal         0x8023D1CC
    // 0x8023F0A4: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    static_3_8023D1CC(rdram, ctx);
        goto after_0;
    // 0x8023F0A4: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    after_0:
    // 0x8023F0A8: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8023F0AC: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x8023F0B0: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x8023F0B4: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x8023F0B8: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8023F0BC: jal         0x8023D228
    // 0x8023F0C0: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
    static_3_8023D228(rdram, ctx);
        goto after_1;
    // 0x8023F0C0: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
    after_1:
    // 0x8023F0C4: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8023F0C8: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x8023F0CC: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8023F0D0: subu        $t8, $t6, $v0
    ctx->r24 = SUB32(ctx->r14, ctx->r2);
    // 0x8023F0D4: sltu        $at, $t7, $v1
    ctx->r1 = ctx->r15 < ctx->r3 ? 1 : 0;
    // 0x8023F0D8: subu        $t8, $t8, $at
    ctx->r24 = SUB32(ctx->r24, ctx->r1);
    // 0x8023F0DC: subu        $t9, $t7, $v1
    ctx->r25 = SUB32(ctx->r15, ctx->r3);
    // 0x8023F0E0: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x8023F0E4: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x8023F0E8: bgtz        $t0, L_8023F148
    if (SIGNED(ctx->r8) > 0) {
        // 0x8023F0EC: lw          $t1, 0x24($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X24);
            goto L_8023F148;
    }
    // 0x8023F0EC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8023F0F0: bltz        $t0, L_8023F100
    if (SIGNED(ctx->r8) < 0) {
        // 0x8023F0F4: nop
    
            goto L_8023F100;
    }
    // 0x8023F0F4: nop

    // 0x8023F0F8: b           L_8023F14C
    // 0x8023F0FC: addiu       $t0, $sp, 0x20
    ctx->r8 = ADD32(ctx->r29, 0X20);
        goto L_8023F14C;
    // 0x8023F0FC: addiu       $t0, $sp, 0x20
    ctx->r8 = ADD32(ctx->r29, 0X20);
L_8023F100:
    // 0x8023F100: bltzl       $t8, L_8023F14C
    if (SIGNED(ctx->r24) < 0) {
        // 0x8023F104: addiu       $t0, $sp, 0x20
        ctx->r8 = ADD32(ctx->r29, 0X20);
            goto L_8023F14C;
    }
    goto skip_0;
    // 0x8023F104: addiu       $t0, $sp, 0x20
    ctx->r8 = ADD32(ctx->r29, 0X20);
    skip_0:
    // 0x8023F108: bgtz        $t8, L_8023F118
    if (SIGNED(ctx->r24) > 0) {
        // 0x8023F10C: addiu       $t3, $t1, 0x1
        ctx->r11 = ADD32(ctx->r9, 0X1);
            goto L_8023F118;
    }
    // 0x8023F10C: addiu       $t3, $t1, 0x1
    ctx->r11 = ADD32(ctx->r9, 0X1);
    // 0x8023F110: beql        $t9, $zero, L_8023F14C
    if (ctx->r25 == 0) {
        // 0x8023F114: addiu       $t0, $sp, 0x20
        ctx->r8 = ADD32(ctx->r29, 0X20);
            goto L_8023F14C;
    }
    goto skip_1;
    // 0x8023F114: addiu       $t0, $sp, 0x20
    ctx->r8 = ADD32(ctx->r29, 0X20);
    skip_1:
L_8023F118:
    // 0x8023F118: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x8023F11C: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x8023F120: sltiu       $at, $t3, 0x1
    ctx->r1 = ctx->r11 < 0X1 ? 1 : 0;
    // 0x8023F124: addu        $t2, $t0, $at
    ctx->r10 = ADD32(ctx->r8, ctx->r1);
    // 0x8023F128: subu        $t6, $t8, $t4
    ctx->r14 = SUB32(ctx->r24, ctx->r12);
    // 0x8023F12C: sltu        $at, $t9, $t5
    ctx->r1 = ctx->r25 < ctx->r13 ? 1 : 0;
    // 0x8023F130: subu        $t6, $t6, $at
    ctx->r14 = SUB32(ctx->r14, ctx->r1);
    // 0x8023F134: subu        $t7, $t9, $t5
    ctx->r15 = SUB32(ctx->r25, ctx->r13);
    // 0x8023F138: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x8023F13C: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x8023F140: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x8023F144: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
L_8023F148:
    // 0x8023F148: addiu       $t0, $sp, 0x20
    ctx->r8 = ADD32(ctx->r29, 0X20);
L_8023F14C:
    // 0x8023F14C: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x8023F150: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x8023F154: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x8023F158: lw          $t3, 0x4($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X4);
    // 0x8023F15C: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x8023F160: lw          $at, 0x8($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X8);
    // 0x8023F164: sw          $at, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r1;
    // 0x8023F168: lw          $t3, 0xC($t0)
    ctx->r11 = MEM_W(ctx->r8, 0XC);
    // 0x8023F16C: sw          $t3, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r11;
    // 0x8023F170: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023F174: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8023F178: jr          $ra
    // 0x8023F17C: nop

    return;
    // 0x8023F17C: nop

    // 0x8023F180: div         $zero, $a1, $a2
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r6)));
    // 0x8023F184: mflo        $v0
    ctx->r2 = lo;
    // 0x8023F188: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8023F18C: bne         $a2, $zero, L_8023F198
    if (ctx->r6 != 0) {
        // 0x8023F190: nop
    
            goto L_8023F198;
    }
    // 0x8023F190: nop

    // 0x8023F194: break       7
    do_break(2149839252);
L_8023F198:
    // 0x8023F198: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8023F19C: bne         $a2, $at, L_8023F1B0
    if (ctx->r6 != ctx->r1) {
        // 0x8023F1A0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8023F1B0;
    }
    // 0x8023F1A0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8023F1A4: bne         $a1, $at, L_8023F1B0
    if (ctx->r5 != ctx->r1) {
        // 0x8023F1A8: nop
    
            goto L_8023F1B0;
    }
    // 0x8023F1A8: nop

    // 0x8023F1AC: break       6
    do_break(2149839276);
L_8023F1B0:
    // 0x8023F1B0: multu       $a2, $v0
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023F1B4: sw          $v0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r2;
    // 0x8023F1B8: addiu       $t7, $sp, 0x0
    ctx->r15 = ADD32(ctx->r29, 0X0);
    // 0x8023F1BC: mflo        $t6
    ctx->r14 = lo;
    // 0x8023F1C0: subu        $v1, $a1, $t6
    ctx->r3 = SUB32(ctx->r5, ctx->r14);
    // 0x8023F1C4: bgez        $v0, L_8023F1E8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023F1C8: sw          $v1, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r3;
            goto L_8023F1E8;
    }
    // 0x8023F1C8: sw          $v1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r3;
    // 0x8023F1CC: sw          $v0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r2;
    // 0x8023F1D0: blez        $v1, L_8023F1E8
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8023F1D4: sw          $v1, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r3;
            goto L_8023F1E8;
    }
    // 0x8023F1D4: sw          $v1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r3;
    // 0x8023F1D8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023F1DC: subu        $v1, $v1, $a2
    ctx->r3 = SUB32(ctx->r3, ctx->r6);
    // 0x8023F1E0: sw          $v1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r3;
    // 0x8023F1E4: sw          $v0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r2;
L_8023F1E8:
    // 0x8023F1E8: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x8023F1EC: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8023F1F0: sw          $at, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r1;
    // 0x8023F1F4: lw          $t0, 0x4($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X4);
    // 0x8023F1F8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x8023F1FC: jr          $ra
    return;
;}
RECOMP_FUNC void D_802829B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282A34: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80282A38: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80282A3C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80282A40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80282A44: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x80282A48: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x80282A4C: jal         0x8028DA48
    // 0x80282A50: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    static_3_8028DA48(rdram, ctx);
        goto after_0;
    // 0x80282A50: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    after_0:
    // 0x80282A54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80282A58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80282A5C: jr          $ra
    // 0x80282A60: nop

    return;
    // 0x80282A60: nop

;}
RECOMP_FUNC void D_80227A6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80227A6C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80227A70: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80227A74: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x80227A78: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80227A7C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80227A80: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80227A84: jal         0x80223840
    // 0x80227A88: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    func_80223840(rdram, ctx);
        goto after_0;
    // 0x80227A88: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    after_0:
    // 0x80227A8C: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x80227A90: lui         $a3, 0x434F
    ctx->r7 = S32(0X434F << 16);
    // 0x80227A94: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80227A98: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80227A9C: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x80227AA0: ori         $a3, $a3, 0x4D4D
    ctx->r7 = ctx->r7 | 0X4D4D;
    // 0x80227AA4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80227AA8: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x80227AAC: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x80227AB0: jal         0x80223B30
    // 0x80227AB4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    static_3_80223B30(rdram, ctx);
        goto after_1;
    // 0x80227AB4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_1:
    // 0x80227AB8: beq         $v0, $zero, L_80227ACC
    if (ctx->r2 == 0) {
        // 0x80227ABC: nop
    
            goto L_80227ACC;
    }
    // 0x80227ABC: nop

    // 0x80227AC0: jal         0x80225534
    // 0x80227AC4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    static_3_80225534(rdram, ctx);
        goto after_2;
    // 0x80227AC4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_2:
    // 0x80227AC8: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
L_80227ACC:
    // 0x80227ACC: jal         0x802238F0
    // 0x80227AD0: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    static_3_802238F0(rdram, ctx);
        goto after_3;
    // 0x80227AD0: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_3:
    // 0x80227AD4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80227AD8: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x80227ADC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80227AE0: jr          $ra
    // 0x80227AE4: nop

    return;
    // 0x80227AE4: nop

;}
RECOMP_FUNC void D_802E8074(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E80F4: jr          $ra
    // 0x802E80F8: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    return;
    // 0x802E80F8: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
;}
RECOMP_FUNC void D_8027E5D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027E648: addiu       $t6, $a0, 0x365C
    ctx->r14 = ADD32(ctx->r4, 0X365C);
    // 0x8027E64C: bne         $a1, $t6, L_8027E65C
    if (ctx->r5 != ctx->r14) {
        // 0x8027E650: addiu       $t7, $a0, 0x4E3C
        ctx->r15 = ADD32(ctx->r4, 0X4E3C);
            goto L_8027E65C;
    }
    // 0x8027E650: addiu       $t7, $a0, 0x4E3C
    ctx->r15 = ADD32(ctx->r4, 0X4E3C);
    // 0x8027E654: jr          $ra
    // 0x8027E658: lw          $v0, 0x4E18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4E18);
    return;
    // 0x8027E658: lw          $v0, 0x4E18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4E18);
L_8027E65C:
    // 0x8027E65C: bnel        $a1, $t7, L_8027E670
    if (ctx->r5 != ctx->r15) {
        // 0x8027E660: lw          $v0, 0x4E18($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X4E18);
            goto L_8027E670;
    }
    goto skip_0;
    // 0x8027E660: lw          $v0, 0x4E18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4E18);
    skip_0:
    // 0x8027E664: jr          $ra
    // 0x8027E668: lw          $v0, 0x65B4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X65B4);
    return;
    // 0x8027E668: lw          $v0, 0x65B4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X65B4);
    // 0x8027E66C: lw          $v0, 0x4E18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4E18);
L_8027E670:
    // 0x8027E670: jr          $ra
    // 0x8027E674: nop

    return;
    // 0x8027E674: nop

;}
RECOMP_FUNC void D_80213440(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80213440: addiu       $sp, $sp, -0x130
    ctx->r29 = ADD32(ctx->r29, -0X130);
    // 0x80213444: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80213448: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x8021344C: sw          $ra, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r31;
    // 0x80213450: sw          $fp, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r30;
    // 0x80213454: sw          $s7, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r23;
    // 0x80213458: sw          $s6, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r22;
    // 0x8021345C: sw          $s5, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r21;
    // 0x80213460: sw          $s4, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r20;
    // 0x80213464: sw          $s3, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r19;
    // 0x80213468: sw          $s2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r18;
    // 0x8021346C: sw          $s1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r17;
    // 0x80213470: sw          $s0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r16;
    // 0x80213474: sdc1        $f30, 0x70($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X70, ctx->r29);
    // 0x80213478: sdc1        $f28, 0x68($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X68, ctx->r29);
    // 0x8021347C: sdc1        $f26, 0x60($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X60, ctx->r29);
    // 0x80213480: sdc1        $f24, 0x58($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X58, ctx->r29);
    // 0x80213484: sdc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X50, ctx->r29);
    // 0x80213488: sdc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X48, ctx->r29);
    // 0x8021348C: sw          $a0, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->r4;
    // 0x80213490: sw          $a1, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->r5;
    // 0x80213494: sw          $a2, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->r6;
    // 0x80213498: sw          $a3, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->r7;
    // 0x8021349C: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x802134A0: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x802134A4: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x802134A8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x802134AC: lw          $t1, 0x0($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X0);
    // 0x802134B0: lwc1        $f30, 0x140($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X140);
    // 0x802134B4: lwc1        $f4, 0x134($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X134);
    // 0x802134B8: bne         $t1, $zero, L_802134D4
    if (ctx->r9 != 0) {
        // 0x802134BC: sw          $t1, 0xE8($sp)
        MEM_W(0XE8, ctx->r29) = ctx->r9;
            goto L_802134D4;
    }
    // 0x802134BC: sw          $t1, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r9;
    // 0x802134C0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802134C4: jal         0x80231A24
    // 0x802134C8: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x802134C8: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x802134CC: b           L_80213B10
    // 0x802134D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80213B10;
    // 0x802134D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802134D4:
    // 0x802134D4: lw          $t3, 0xE8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XE8);
    // 0x802134D8: add.s       $f20, $f4, $f30
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f20.fl = ctx->f4.fl + ctx->f30.fl;
    // 0x802134DC: lwc1        $f6, 0x134($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X134);
    // 0x802134E0: lwc1        $f18, 0x0($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0X0);
    // 0x802134E4: lw          $t4, 0xE8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XE8);
    // 0x802134E8: c.lt.s      $f20, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f20.fl < ctx->f18.fl;
    // 0x802134EC: nop

    // 0x802134F0: bc1fl       L_80213504
    if (!c1cs) {
        // 0x802134F4: sub.s       $f22, $f6, $f30
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f22.fl = ctx->f6.fl - ctx->f30.fl;
            goto L_80213504;
    }
    goto skip_0;
    // 0x802134F4: sub.s       $f22, $f6, $f30
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f22.fl = ctx->f6.fl - ctx->f30.fl;
    skip_0:
    // 0x802134F8: b           L_80213B10
    // 0x802134FC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80213B10;
    // 0x802134FC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80213500: sub.s       $f22, $f6, $f30
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f22.fl = ctx->f6.fl - ctx->f30.fl;
L_80213504:
    // 0x80213504: lwc1        $f8, 0xC($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0XC);
    // 0x80213508: lwc1        $f10, 0x138($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X138);
    // 0x8021350C: lw          $t5, 0xE8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XE8);
    // 0x80213510: c.lt.s      $f8, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f8.fl < ctx->f22.fl;
    // 0x80213514: nop

    // 0x80213518: bc1fl       L_8021352C
    if (!c1cs) {
        // 0x8021351C: add.s       $f14, $f10, $f30
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f14.fl = ctx->f10.fl + ctx->f30.fl;
            goto L_8021352C;
    }
    goto skip_1;
    // 0x8021351C: add.s       $f14, $f10, $f30
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f14.fl = ctx->f10.fl + ctx->f30.fl;
    skip_1:
    // 0x80213520: b           L_80213B10
    // 0x80213524: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80213B10;
    // 0x80213524: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80213528: add.s       $f14, $f10, $f30
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f14.fl = ctx->f10.fl + ctx->f30.fl;
L_8021352C:
    // 0x8021352C: lwc1        $f12, 0x4($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X4);
    // 0x80213530: lwc1        $f4, 0x138($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X138);
    // 0x80213534: lw          $t6, 0xE8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XE8);
    // 0x80213538: c.lt.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl < ctx->f12.fl;
    // 0x8021353C: nop

    // 0x80213540: bc1fl       L_80213554
    if (!c1cs) {
        // 0x80213544: sub.s       $f16, $f4, $f30
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f16.fl = ctx->f4.fl - ctx->f30.fl;
            goto L_80213554;
    }
    goto skip_2;
    // 0x80213544: sub.s       $f16, $f4, $f30
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f16.fl = ctx->f4.fl - ctx->f30.fl;
    skip_2:
    // 0x80213548: b           L_80213B10
    // 0x8021354C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80213B10;
    // 0x8021354C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80213550: sub.s       $f16, $f4, $f30
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f16.fl = ctx->f4.fl - ctx->f30.fl;
L_80213554:
    // 0x80213554: lwc1        $f6, 0x10($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X10);
    // 0x80213558: lwc1        $f8, 0x13C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X13C);
    // 0x8021355C: lw          $t7, 0xE8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XE8);
    // 0x80213560: c.lt.s      $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f6.fl < ctx->f16.fl;
    // 0x80213564: nop

    // 0x80213568: bc1fl       L_8021357C
    if (!c1cs) {
        // 0x8021356C: add.s       $f10, $f8, $f30
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f30.fl;
            goto L_8021357C;
    }
    goto skip_3;
    // 0x8021356C: add.s       $f10, $f8, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f30.fl;
    skip_3:
    // 0x80213570: b           L_80213B10
    // 0x80213574: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80213B10;
    // 0x80213574: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80213578: add.s       $f10, $f8, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f30.fl;
L_8021357C:
    // 0x8021357C: lwc1        $f4, 0x8($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X8);
    // 0x80213580: lwc1        $f8, 0x13C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X13C);
    // 0x80213584: c.lt.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl < ctx->f4.fl;
    // 0x80213588: nop

    // 0x8021358C: bc1fl       L_802135A0
    if (!c1cs) {
        // 0x80213590: lw          $t8, 0xE8($sp)
        ctx->r24 = MEM_W(ctx->r29, 0XE8);
            goto L_802135A0;
    }
    goto skip_4;
    // 0x80213590: lw          $t8, 0xE8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XE8);
    skip_4:
    // 0x80213594: b           L_80213B10
    // 0x80213598: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80213B10;
    // 0x80213598: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8021359C: lw          $t8, 0xE8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XE8);
L_802135A0:
    // 0x802135A0: sub.s       $f10, $f8, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f30.fl;
    // 0x802135A4: lw          $t9, 0xE8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XE8);
    // 0x802135A8: lwc1        $f6, 0x14($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X14);
    // 0x802135AC: lui         $s3, 0x0
    ctx->r19 = S32(0X0 << 16);
    // 0x802135B0: c.lt.s      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.fl < ctx->f10.fl;
    // 0x802135B4: nop

    // 0x802135B8: bc1fl       L_802135CC
    if (!c1cs) {
        // 0x802135BC: sub.s       $f4, $f22, $f18
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f22.fl - ctx->f18.fl;
            goto L_802135CC;
    }
    goto skip_5;
    // 0x802135BC: sub.s       $f4, $f22, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f22.fl - ctx->f18.fl;
    skip_5:
    // 0x802135C0: b           L_80213B10
    // 0x802135C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80213B10;
    // 0x802135C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802135C8: sub.s       $f4, $f22, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f22.fl - ctx->f18.fl;
L_802135CC:
    // 0x802135CC: lwc1        $f0, 0x1C($t9)
    ctx->f0.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x802135D0: lwc1        $f2, 0x20($t9)
    ctx->f2.u32l = MEM_W(ctx->r25, 0X20);
    // 0x802135D4: sub.s       $f10, $f20, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f20.fl - ctx->f18.fl;
    // 0x802135D8: lui         $fp, 0x0
    ctx->r30 = S32(0X0 << 16);
    // 0x802135DC: lui         $s7, 0x0
    ctx->r23 = S32(0X0 << 16);
    // 0x802135E0: div.s       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x802135E4: lw          $t7, 0xE8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XE8);
    // 0x802135E8: addiu       $s7, $s7, 0x0
    ctx->r23 = ADD32(ctx->r23, 0X0);
    // 0x802135EC: addiu       $fp, $fp, 0x0
    ctx->r30 = ADD32(ctx->r30, 0X0);
    // 0x802135F0: addiu       $s6, $zero, 0xC
    ctx->r22 = ADD32(0, 0XC);
    // 0x802135F4: div.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x802135F8: trunc.w.s   $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x802135FC: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x80213600: sub.s       $f6, $f16, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f12.fl;
    // 0x80213604: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80213608: div.s       $f10, $f6, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f2.fl);
    // 0x8021360C: mfc1        $a0, $f8
    ctx->r4 = (int32_t)ctx->f8.u32l;
    // 0x80213610: sub.s       $f8, $f14, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f14.fl - ctx->f12.fl;
    // 0x80213614: div.s       $f6, $f8, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = DIV_S(ctx->f8.fl, ctx->f2.fl);
    // 0x80213618: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x8021361C: mfc1        $t4, $f4
    ctx->r12 = (int32_t)ctx->f4.u32l;
    // 0x80213620: nop

    // 0x80213624: sw          $t4, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->r12;
    // 0x80213628: lw          $t8, 0x114($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X114);
    // 0x8021362C: trunc.w.s   $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x80213630: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x80213634: bgez        $v0, L_80213640
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80213638: sw          $t6, 0x110($sp)
        MEM_W(0X110, ctx->r29) = ctx->r14;
            goto L_80213640;
    }
    // 0x80213638: sw          $t6, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->r14;
    // 0x8021363C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80213640:
    // 0x80213640: lbu         $v1, 0x18($t7)
    ctx->r3 = MEM_BU(ctx->r15, 0X18);
    // 0x80213644: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80213648: slt         $at, $v1, $a0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8021364C: beq         $at, $zero, L_80213658
    if (ctx->r1 == 0) {
        // 0x80213650: nop
    
            goto L_80213658;
    }
    // 0x80213650: nop

    // 0x80213654: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
L_80213658:
    // 0x80213658: bgez        $t8, L_80213664
    if (SIGNED(ctx->r24) >= 0) {
        // 0x8021365C: addiu       $t3, $a0, 0x1
        ctx->r11 = ADD32(ctx->r4, 0X1);
            goto L_80213664;
    }
    // 0x8021365C: addiu       $t3, $a0, 0x1
    ctx->r11 = ADD32(ctx->r4, 0X1);
    // 0x80213660: sw          $zero, 0x114($sp)
    MEM_W(0X114, ctx->r29) = 0;
L_80213664:
    // 0x80213664: lw          $t1, 0xE8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XE8);
    // 0x80213668: lw          $t2, 0x110($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X110);
    // 0x8021366C: lbu         $v1, 0x19($t1)
    ctx->r3 = MEM_BU(ctx->r9, 0X19);
    // 0x80213670: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80213674: slt         $at, $v1, $t2
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x80213678: beql        $at, $zero, L_80213688
    if (ctx->r1 == 0) {
        // 0x8021367C: lw          $t9, 0xE8($sp)
        ctx->r25 = MEM_W(ctx->r29, 0XE8);
            goto L_80213688;
    }
    goto skip_6;
    // 0x8021367C: lw          $t9, 0xE8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XE8);
    skip_6:
    // 0x80213680: sw          $v1, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->r3;
    // 0x80213684: lw          $t9, 0xE8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XE8);
L_80213688:
    // 0x80213688: addiu       $s3, $s3, 0x0
    ctx->r19 = ADD32(ctx->r19, 0X0);
    // 0x8021368C: sw          $zero, 0x0($s3)
    MEM_W(0X0, ctx->r19) = 0;
    // 0x80213690: lwc1        $f4, 0x0($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X0);
    // 0x80213694: slt         $at, $a0, $v0
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80213698: swc1        $f4, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f4.u32l;
    // 0x8021369C: lwc1        $f8, 0x1C($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x802136A0: sw          $v0, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->r2;
    // 0x802136A4: add.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x802136A8: bne         $at, $zero, L_80213AD4
    if (ctx->r1 != 0) {
        // 0x802136AC: swc1        $f6, 0xC4($sp)
        MEM_W(0XC4, ctx->r29) = ctx->f6.u32l;
            goto L_80213AD4;
    }
    // 0x802136AC: swc1        $f6, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f6.u32l;
    // 0x802136B0: sw          $t3, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r11;
L_802136B4:
    // 0x802136B4: lw          $t4, 0xE8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XE8);
    // 0x802136B8: lw          $t5, 0x114($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X114);
    // 0x802136BC: lw          $t6, 0x110($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X110);
    // 0x802136C0: lwc1        $f10, 0x4($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X4);
    // 0x802136C4: slt         $at, $t6, $t5
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x802136C8: swc1        $f10, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f10.u32l;
    // 0x802136CC: lwc1        $f8, 0x20($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X20);
    // 0x802136D0: sw          $t5, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->r13;
    // 0x802136D4: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x802136D8: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x802136DC: bne         $at, $zero, L_80213AC0
    if (ctx->r1 != 0) {
        // 0x802136E0: swc1        $f4, 0xC0($sp)
        MEM_W(0XC0, ctx->r29) = ctx->f4.u32l;
            goto L_80213AC0;
    }
    // 0x802136E0: swc1        $f4, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f4.u32l;
    // 0x802136E4: sw          $t7, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r15;
L_802136E8:
    // 0x802136E8: lw          $t8, 0xE8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XE8);
    // 0x802136EC: lw          $t2, 0x128($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X128);
    // 0x802136F0: lw          $t3, 0x12C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X12C);
    // 0x802136F4: lbu         $t1, 0x18($t8)
    ctx->r9 = MEM_BU(ctx->r24, 0X18);
    // 0x802136F8: multu       $t1, $t2
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802136FC: mflo        $t9
    ctx->r25 = lo;
    // 0x80213700: addu        $t4, $t9, $t3
    ctx->r12 = ADD32(ctx->r25, ctx->r11);
    // 0x80213704: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80213708: sw          $t4, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->r12;
    // 0x8021370C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80213710: lw          $t6, 0x28($t8)
    ctx->r14 = MEM_W(ctx->r24, 0X28);
    // 0x80213714: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80213718: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x8021371C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80213720: addu        $v1, $t6, $t5
    ctx->r3 = ADD32(ctx->r14, ctx->r13);
    // 0x80213724: beql        $v1, $zero, L_80213AB0
    if (ctx->r3 == 0) {
        // 0x80213728: lw          $t2, 0x128($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X128);
            goto L_80213AB0;
    }
    goto skip_7;
    // 0x80213728: lw          $t2, 0x128($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X128);
    skip_7:
    // 0x8021372C: lw          $s5, 0x40($v1)
    ctx->r21 = MEM_W(ctx->r3, 0X40);
    // 0x80213730: lwc1        $f6, 0x134($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X134);
    // 0x80213734: beql        $s5, $zero, L_80213AB0
    if (ctx->r21 == 0) {
        // 0x80213738: lw          $t2, 0x128($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X128);
            goto L_80213AB0;
    }
    goto skip_8;
    // 0x80213738: lw          $t2, 0x128($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X128);
    skip_8:
    // 0x8021373C: lwc1        $f8, 0x30($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X30);
    // 0x80213740: lwc1        $f4, 0x138($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X138);
    // 0x80213744: addiu       $a1, $sp, 0x104
    ctx->r5 = ADD32(ctx->r29, 0X104);
    // 0x80213748: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8021374C: addiu       $a2, $sp, 0x100
    ctx->r6 = ADD32(ctx->r29, 0X100);
    // 0x80213750: swc1        $f10, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f10.u32l;
    // 0x80213754: lwc1        $f6, 0x34($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X34);
    // 0x80213758: lwc1        $f10, 0x13C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X13C);
    // 0x8021375C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80213760: swc1        $f8, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f8.u32l;
    // 0x80213764: lwc1        $f4, 0x38($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X38);
    // 0x80213768: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x8021376C: swc1        $f6, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f6.u32l;
    // 0x80213770: lwc1        $f8, 0x2C($s5)
    ctx->f8.u32l = MEM_W(ctx->r21, 0X2C);
    // 0x80213774: lbu         $v0, 0x48($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X48);
    // 0x80213778: sw          $v1, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r3;
    // 0x8021377C: mul.s       $f28, $f8, $f30
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f28.fl = MUL_S(ctx->f8.fl, ctx->f30.fl);
    // 0x80213780: beq         $v0, $zero, L_8021379C
    if (ctx->r2 == 0) {
        // 0x80213784: sw          $zero, 0x124($sp)
        MEM_W(0X124, ctx->r29) = 0;
            goto L_8021379C;
    }
    // 0x80213784: sw          $zero, 0x124($sp)
    MEM_W(0X124, ctx->r29) = 0;
    // 0x80213788: sll         $a0, $v0, 16
    ctx->r4 = S32(ctx->r2 << 16);
    // 0x8021378C: sra         $t7, $a0, 16
    ctx->r15 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80213790: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x80213794: jal         0x80218C74
    // 0x80213798: sw          $v1, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r3;
    static_3_80218C74(rdram, ctx);
        goto after_1;
    // 0x80213798: sw          $v1, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r3;
    after_1:
L_8021379C:
    // 0x8021379C: lwc1        $f10, 0xC4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x802137A0: lwc1        $f4, 0xBC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x802137A4: lwc1        $f6, 0xC0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x802137A8: mfc1        $a2, $f30
    ctx->r6 = (int32_t)ctx->f30.u32l;
    // 0x802137AC: lwc1        $f12, 0x104($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X104);
    // 0x802137B0: lwc1        $f14, 0x100($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X100);
    // 0x802137B4: lw          $a3, 0xC8($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC8);
    // 0x802137B8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x802137BC: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x802137C0: jal         0x80218D34
    // 0x802137C4: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    static_3_80218D34(rdram, ctx);
        goto after_2;
    // 0x802137C4: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x802137C8: lwc1        $f0, 0x2C($s5)
    ctx->f0.u32l = MEM_W(ctx->r21, 0X2C);
    // 0x802137CC: lwc1        $f8, 0x104($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X104);
    // 0x802137D0: lwc1        $f10, 0x100($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X100);
    // 0x802137D4: lwc1        $f4, 0xFC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XFC);
    // 0x802137D8: mul.s       $f22, $f0, $f8
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f22.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x802137DC: lhu         $v1, 0xC($s5)
    ctx->r3 = MEM_HU(ctx->r21, 0XC);
    // 0x802137E0: andi        $a0, $v0, 0xFFFF
    ctx->r4 = ctx->r2 & 0XFFFF;
    // 0x802137E4: mul.s       $f24, $f0, $f10
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f24.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x802137E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802137EC: mul.s       $f26, $f0, $f4
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f26.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x802137F0: blezl       $v1, L_80213AB0
    if (SIGNED(ctx->r3) <= 0) {
        // 0x802137F4: lw          $t2, 0x128($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X128);
            goto L_80213AB0;
    }
    goto skip_9;
    // 0x802137F4: lw          $t2, 0x128($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X128);
    skip_9:
    // 0x802137F8: sw          $a0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r4;
L_802137FC:
    // 0x802137FC: lw          $t1, 0x8($s5)
    ctx->r9 = MEM_W(ctx->r21, 0X8);
    // 0x80213800: lw          $t9, 0xB0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XB0);
    // 0x80213804: addu        $s4, $t1, $v0
    ctx->r20 = ADD32(ctx->r9, ctx->r2);
    // 0x80213808: lhu         $t2, 0x16($s4)
    ctx->r10 = MEM_HU(ctx->r20, 0X16);
    // 0x8021380C: and         $t3, $t2, $t9
    ctx->r11 = ctx->r10 & ctx->r25;
    // 0x80213810: beql        $t3, $zero, L_80213A98
    if (ctx->r11 == 0) {
        // 0x80213814: lw          $t9, 0x124($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X124);
            goto L_80213A98;
    }
    goto skip_10;
    // 0x80213814: lw          $t9, 0x124($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X124);
    skip_10:
    // 0x80213818: lwc1        $f6, 0x1C($s4)
    ctx->f6.u32l = MEM_W(ctx->r20, 0X1C);
    // 0x8021381C: mfc1        $a3, $f30
    ctx->r7 = (int32_t)ctx->f30.u32l;
    // 0x80213820: lwc1        $f12, 0x104($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X104);
    // 0x80213824: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80213828: lwc1        $f8, 0x20($s4)
    ctx->f8.u32l = MEM_W(ctx->r20, 0X20);
    // 0x8021382C: lwc1        $f14, 0x100($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X100);
    // 0x80213830: lw          $a2, 0xFC($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XFC);
    // 0x80213834: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x80213838: lwc1        $f10, 0x24($s4)
    ctx->f10.u32l = MEM_W(ctx->r20, 0X24);
    // 0x8021383C: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x80213840: lwc1        $f4, 0x28($s4)
    ctx->f4.u32l = MEM_W(ctx->r20, 0X28);
    // 0x80213844: sw          $v0, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r2;
    // 0x80213848: jal         0x802164C8
    // 0x8021384C: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    static_3_802164C8(rdram, ctx);
        goto after_3;
    // 0x8021384C: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x80213850: bnel        $v0, $zero, L_80213868
    if (ctx->r2 != 0) {
        // 0x80213854: lhu         $v0, 0x14($s4)
        ctx->r2 = MEM_HU(ctx->r20, 0X14);
            goto L_80213868;
    }
    goto skip_11;
    // 0x80213854: lhu         $v0, 0x14($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X14);
    skip_11:
    // 0x80213858: lhu         $v1, 0xC($s5)
    ctx->r3 = MEM_HU(ctx->r21, 0XC);
    // 0x8021385C: b           L_80213A94
    // 0x80213860: lw          $v0, 0xB4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XB4);
        goto L_80213A94;
    // 0x80213860: lw          $v0, 0xB4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XB4);
    // 0x80213864: lhu         $v0, 0x14($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X14);
L_80213868:
    // 0x80213868: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8021386C: blezl       $v0, L_80213A90
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80213870: lhu         $v1, 0xC($s5)
        ctx->r3 = MEM_HU(ctx->r21, 0XC);
            goto L_80213A90;
    }
    goto skip_12;
    // 0x80213870: lhu         $v1, 0xC($s5)
    ctx->r3 = MEM_HU(ctx->r21, 0XC);
    skip_12:
    // 0x80213874: lw          $t4, 0x10($s4)
    ctx->r12 = MEM_W(ctx->r20, 0X10);
L_80213878:
    // 0x80213878: sll         $t8, $s1, 3
    ctx->r24 = S32(ctx->r17 << 3);
    // 0x8021387C: lw          $t5, 0xB0($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XB0);
    // 0x80213880: addu        $t0, $t4, $t8
    ctx->r8 = ADD32(ctx->r12, ctx->r24);
    // 0x80213884: lhu         $t6, 0x6($t0)
    ctx->r14 = MEM_HU(ctx->r8, 0X6);
    // 0x80213888: and         $t7, $t6, $t5
    ctx->r15 = ctx->r14 & ctx->r13;
    // 0x8021388C: beql        $t7, $zero, L_80213A80
    if (ctx->r15 == 0) {
        // 0x80213890: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_80213A80;
    }
    goto skip_13;
    // 0x80213890: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_13:
    // 0x80213894: lhu         $t1, 0x0($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X0);
    // 0x80213898: lw          $v1, 0x0($s5)
    ctx->r3 = MEM_W(ctx->r21, 0X0);
    // 0x8021389C: lhu         $t9, 0x2($t0)
    ctx->r25 = MEM_HU(ctx->r8, 0X2);
    // 0x802138A0: sll         $t2, $t1, 4
    ctx->r10 = S32(ctx->r9 << 4);
    // 0x802138A4: addu        $v0, $v1, $t2
    ctx->r2 = ADD32(ctx->r3, ctx->r10);
    // 0x802138A8: lh          $t6, 0x0($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X0);
    // 0x802138AC: lhu         $t4, 0x4($t0)
    ctx->r12 = MEM_HU(ctx->r8, 0X4);
    // 0x802138B0: sll         $t3, $t9, 4
    ctx->r11 = S32(ctx->r25 << 4);
    // 0x802138B4: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x802138B8: addu        $a0, $v1, $t3
    ctx->r4 = ADD32(ctx->r3, ctx->r11);
    // 0x802138BC: sll         $t8, $t4, 4
    ctx->r24 = S32(ctx->r12 << 4);
    // 0x802138C0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x802138C4: addu        $a1, $v1, $t8
    ctx->r5 = ADD32(ctx->r3, ctx->r24);
    // 0x802138C8: lw          $s0, 0x0($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X0);
    // 0x802138CC: mfc1        $a2, $f26
    ctx->r6 = (int32_t)ctx->f26.u32l;
    // 0x802138D0: mfc1        $a3, $f28
    ctx->r7 = (int32_t)ctx->f28.u32l;
    // 0x802138D4: multu       $s0, $s6
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802138D8: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x802138DC: lh          $t5, 0x2($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X2);
    // 0x802138E0: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    // 0x802138E4: mov.s       $f14, $f24
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 24);
    ctx->f14.fl = ctx->f24.fl;
    // 0x802138E8: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x802138EC: lw          $t5, 0x0($fp)
    ctx->r13 = MEM_W(ctx->r30, 0X0);
    // 0x802138F0: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x802138F4: mflo        $t6
    ctx->r14 = lo;
    // 0x802138F8: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x802138FC: lh          $t7, 0x4($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X4);
    // 0x80213900: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x80213904: addu        $t7, $t6, $t5
    ctx->r15 = ADD32(ctx->r14, ctx->r13);
    // 0x80213908: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8021390C: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x80213910: lh          $t1, 0x0($a0)
    ctx->r9 = MEM_H(ctx->r4, 0X0);
    // 0x80213914: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x80213918: sll         $t1, $s0, 2
    ctx->r9 = S32(ctx->r16 << 2);
    // 0x8021391C: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80213920: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x80213924: lh          $t2, 0x2($a0)
    ctx->r10 = MEM_H(ctx->r4, 0X2);
    // 0x80213928: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x8021392C: lw          $t2, 0x0($s7)
    ctx->r10 = MEM_W(ctx->r23, 0X0);
    // 0x80213930: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80213934: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x80213938: lh          $t9, 0x4($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X4);
    // 0x8021393C: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x80213940: addu        $t9, $t1, $t2
    ctx->r25 = ADD32(ctx->r9, ctx->r10);
    // 0x80213944: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80213948: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x8021394C: lh          $t3, 0x0($a1)
    ctx->r11 = MEM_H(ctx->r5, 0X0);
    // 0x80213950: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x80213954: nop

    // 0x80213958: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8021395C: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    // 0x80213960: lh          $t4, 0x2($a1)
    ctx->r12 = MEM_H(ctx->r5, 0X2);
    // 0x80213964: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x80213968: nop

    // 0x8021396C: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80213970: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x80213974: lh          $t8, 0x4($a1)
    ctx->r24 = MEM_H(ctx->r5, 0X4);
    // 0x80213978: sw          $t9, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r25;
    // 0x8021397C: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    // 0x80213980: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80213984: nop

    // 0x80213988: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8021398C: jal         0x80213020
    // 0x80213990: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    static_3_80213020(rdram, ctx);
        goto after_4;
    // 0x80213990: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    after_4:
    // 0x80213994: bne         $v0, $zero, L_802139A4
    if (ctx->r2 != 0) {
        // 0x80213998: lw          $t3, 0xE4($sp)
        ctx->r11 = MEM_W(ctx->r29, 0XE4);
            goto L_802139A4;
    }
    // 0x80213998: lw          $t3, 0xE4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XE4);
    // 0x8021399C: b           L_80213A7C
    // 0x802139A0: lhu         $v0, 0x14($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X14);
        goto L_80213A7C;
    // 0x802139A0: lhu         $v0, 0x14($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X14);
L_802139A4:
    // 0x802139A4: lw          $t5, 0x124($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X124);
    // 0x802139A8: lw          $t8, 0x10C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X10C);
    // 0x802139AC: lbu         $v0, 0x48($t3)
    ctx->r2 = MEM_BU(ctx->r11, 0X48);
    // 0x802139B0: andi        $t7, $t5, 0x3FF
    ctx->r15 = ctx->r13 & 0X3FF;
    // 0x802139B4: sll         $t1, $t7, 12
    ctx->r9 = S32(ctx->r15 << 12);
    // 0x802139B8: sll         $t6, $t8, 22
    ctx->r14 = S32(ctx->r24 << 22);
    // 0x802139BC: addu        $s2, $t6, $t1
    ctx->r18 = ADD32(ctx->r14, ctx->r9);
    // 0x802139C0: beq         $v0, $zero, L_802139F0
    if (ctx->r2 == 0) {
        // 0x802139C4: neg.s       $f20, $f30
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f30.fl); 
    ctx->f20.fl = -ctx->f30.fl;
            goto L_802139F0;
    }
    // 0x802139C4: neg.s       $f20, $f30
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f30.fl); 
    ctx->f20.fl = -ctx->f30.fl;
    // 0x802139C8: lw          $t3, 0x0($s3)
    ctx->r11 = MEM_W(ctx->r19, 0X0);
    // 0x802139CC: lw          $t8, 0x0($fp)
    ctx->r24 = MEM_W(ctx->r30, 0X0);
    // 0x802139D0: negu        $a0, $v0
    ctx->r4 = SUB32(0, ctx->r2);
    // 0x802139D4: multu       $t3, $s6
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802139D8: sll         $t2, $a0, 16
    ctx->r10 = S32(ctx->r4 << 16);
    // 0x802139DC: sra         $a0, $t2, 16
    ctx->r4 = S32(SIGNED(ctx->r10) >> 16);
    // 0x802139E0: mflo        $t4
    ctx->r12 = lo;
    // 0x802139E4: addu        $a1, $t4, $t8
    ctx->r5 = ADD32(ctx->r12, ctx->r24);
    // 0x802139E8: jal         0x80218C74
    // 0x802139EC: addiu       $a2, $a1, 0x4
    ctx->r6 = ADD32(ctx->r5, 0X4);
    static_3_80218C74(rdram, ctx);
        goto after_5;
    // 0x802139EC: addiu       $a2, $a1, 0x4
    ctx->r6 = ADD32(ctx->r5, 0X4);
    after_5:
L_802139F0:
    // 0x802139F0: lwc1        $f4, 0x2C($s5)
    ctx->f4.u32l = MEM_W(ctx->r21, 0X2C);
    // 0x802139F4: lw          $t7, 0x0($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X0);
    // 0x802139F8: lw          $t5, 0x0($s7)
    ctx->r13 = MEM_W(ctx->r23, 0X0);
    // 0x802139FC: mul.s       $f6, $f20, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f20.fl, ctx->f4.fl);
    // 0x80213A00: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x80213A04: addu        $v0, $t5, $t6
    ctx->r2 = ADD32(ctx->r13, ctx->r14);
    // 0x80213A08: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80213A0C: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x80213A10: andi        $t1, $s1, 0xFFF
    ctx->r9 = ctx->r17 & 0XFFF;
    // 0x80213A14: addu        $t2, $s2, $t1
    ctx->r10 = ADD32(ctx->r18, ctx->r9);
    // 0x80213A18: div.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f10.fl, ctx->f6.fl);
    // 0x80213A1C: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80213A20: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80213A24: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80213A28: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x80213A2C: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
    // 0x80213A30: lw          $t3, 0x0($s3)
    ctx->r11 = MEM_W(ctx->r19, 0X0);
    // 0x80213A34: lw          $t9, 0x0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X0);
    // 0x80213A38: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80213A3C: addu        $t8, $t9, $t4
    ctx->r24 = ADD32(ctx->r25, ctx->r12);
    // 0x80213A40: sw          $t2, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r10;
    // 0x80213A44: lw          $t7, 0x0($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X0);
    // 0x80213A48: addiu       $t5, $t7, 0x1
    ctx->r13 = ADD32(ctx->r15, 0X1);
    // 0x80213A4C: sw          $t5, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r13;
    // 0x80213A50: lhu         $t6, 0x0($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X0);
    // 0x80213A54: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    // 0x80213A58: slt         $at, $t5, $t6
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80213A5C: bnel        $at, $zero, L_80213A7C
    if (ctx->r1 != 0) {
        // 0x80213A60: lhu         $v0, 0x14($s4)
        ctx->r2 = MEM_HU(ctx->r20, 0X14);
            goto L_80213A7C;
    }
    goto skip_14;
    // 0x80213A60: lhu         $v0, 0x14($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X14);
    skip_14:
    // 0x80213A64: jal         0x80231C58
    // 0x80213A68: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    static_3_80231C58(rdram, ctx);
        goto after_6;
    // 0x80213A68: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    after_6:
    // 0x80213A6C: lw          $t1, 0x0($s3)
    ctx->r9 = MEM_W(ctx->r19, 0X0);
    // 0x80213A70: addiu       $t3, $t1, -0x1
    ctx->r11 = ADD32(ctx->r9, -0X1);
    // 0x80213A74: sw          $t3, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r11;
    // 0x80213A78: lhu         $v0, 0x14($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X14);
L_80213A7C:
    // 0x80213A7C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_80213A80:
    // 0x80213A80: slt         $at, $s1, $v0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80213A84: bnel        $at, $zero, L_80213878
    if (ctx->r1 != 0) {
        // 0x80213A88: lw          $t4, 0x10($s4)
        ctx->r12 = MEM_W(ctx->r20, 0X10);
            goto L_80213878;
    }
    goto skip_15;
    // 0x80213A88: lw          $t4, 0x10($s4)
    ctx->r12 = MEM_W(ctx->r20, 0X10);
    skip_15:
    // 0x80213A8C: lhu         $v1, 0xC($s5)
    ctx->r3 = MEM_HU(ctx->r21, 0XC);
L_80213A90:
    // 0x80213A90: lw          $v0, 0xB4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XB4);
L_80213A94:
    // 0x80213A94: lw          $t9, 0x124($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X124);
L_80213A98:
    // 0x80213A98: addiu       $v0, $v0, 0x2C
    ctx->r2 = ADD32(ctx->r2, 0X2C);
    // 0x80213A9C: addiu       $t4, $t9, 0x1
    ctx->r12 = ADD32(ctx->r25, 0X1);
    // 0x80213AA0: slt         $at, $t4, $v1
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80213AA4: bne         $at, $zero, L_802137FC
    if (ctx->r1 != 0) {
        // 0x80213AA8: sw          $t4, 0x124($sp)
        MEM_W(0X124, ctx->r29) = ctx->r12;
            goto L_802137FC;
    }
    // 0x80213AA8: sw          $t4, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->r12;
    // 0x80213AAC: lw          $t2, 0x128($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X128);
L_80213AB0:
    // 0x80213AB0: lw          $t7, 0xA4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA4);
    // 0x80213AB4: addiu       $t8, $t2, 0x1
    ctx->r24 = ADD32(ctx->r10, 0X1);
    // 0x80213AB8: bne         $t7, $t8, L_802136E8
    if (ctx->r15 != ctx->r24) {
        // 0x80213ABC: sw          $t8, 0x128($sp)
        MEM_W(0X128, ctx->r29) = ctx->r24;
            goto L_802136E8;
    }
    // 0x80213ABC: sw          $t8, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->r24;
L_80213AC0:
    // 0x80213AC0: lw          $t5, 0x12C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X12C);
    // 0x80213AC4: lw          $t1, 0xA0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XA0);
    // 0x80213AC8: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80213ACC: bne         $t1, $t6, L_802136B4
    if (ctx->r9 != ctx->r14) {
        // 0x80213AD0: sw          $t6, 0x12C($sp)
        MEM_W(0X12C, ctx->r29) = ctx->r14;
            goto L_802136B4;
    }
    // 0x80213AD0: sw          $t6, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->r14;
L_80213AD4:
    // 0x80213AD4: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x80213AD8: lw          $t3, 0x0($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X0);
    // 0x80213ADC: lw          $t9, 0x144($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X144);
    // 0x80213AE0: lui         $s7, 0x0
    ctx->r23 = S32(0X0 << 16);
    // 0x80213AE4: addiu       $s7, $s7, 0x0
    ctx->r23 = ADD32(ctx->r23, 0X0);
    // 0x80213AE8: sw          $t3, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r11;
    // 0x80213AEC: lw          $t2, 0x148($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X148);
    // 0x80213AF0: lw          $t4, 0x0($s7)
    ctx->r12 = MEM_W(ctx->r23, 0X0);
    // 0x80213AF4: lui         $fp, 0x0
    ctx->r30 = S32(0X0 << 16);
    // 0x80213AF8: addiu       $fp, $fp, 0x0
    ctx->r30 = ADD32(ctx->r30, 0X0);
    // 0x80213AFC: sw          $t4, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r12;
    // 0x80213B00: lw          $t8, 0x14C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X14C);
    // 0x80213B04: lw          $t7, 0x0($fp)
    ctx->r15 = MEM_W(ctx->r30, 0X0);
    // 0x80213B08: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x80213B0C: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
L_80213B10:
    // 0x80213B10: lw          $ra, 0x9C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X9C);
    // 0x80213B14: ldc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X48);
    // 0x80213B18: ldc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X50);
    // 0x80213B1C: ldc1        $f24, 0x58($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X58);
    // 0x80213B20: ldc1        $f26, 0x60($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X60);
    // 0x80213B24: ldc1        $f28, 0x68($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X68);
    // 0x80213B28: ldc1        $f30, 0x70($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X70);
    // 0x80213B2C: lw          $s0, 0x78($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X78);
    // 0x80213B30: lw          $s1, 0x7C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X7C);
    // 0x80213B34: lw          $s2, 0x80($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X80);
    // 0x80213B38: lw          $s3, 0x84($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X84);
    // 0x80213B3C: lw          $s4, 0x88($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X88);
    // 0x80213B40: lw          $s5, 0x8C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X8C);
    // 0x80213B44: lw          $s6, 0x90($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X90);
    // 0x80213B48: lw          $s7, 0x94($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X94);
    // 0x80213B4C: lw          $fp, 0x98($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X98);
    // 0x80213B50: jr          $ra
    // 0x80213B54: addiu       $sp, $sp, 0x130
    ctx->r29 = ADD32(ctx->r29, 0X130);
    return;
    // 0x80213B54: addiu       $sp, $sp, 0x130
    ctx->r29 = ADD32(ctx->r29, 0X130);
;}
RECOMP_FUNC void D_802D2B28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D2BA8: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x802D2BAC: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x802D2BB0: swc1        $f12, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f12.u32l;
    // 0x802D2BB4: lwc1        $f4, 0x10($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X10);
    // 0x802D2BB8: swc1        $f4, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f4.u32l;
    // 0x802D2BBC: lw          $t6, 0x14($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X14);
    // 0x802D2BC0: sw          $a2, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r6;
    // 0x802D2BC4: jr          $ra
    // 0x802D2BC8: sw          $t6, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r14;
    return;
    // 0x802D2BC8: sw          $t6, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void D_802000F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802000F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802000F8: andi        $a3, $a0, 0xFFFF
    ctx->r7 = ctx->r4 & 0XFFFF;
    // 0x802000FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80200100: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80200104: blez        $a3, L_8020012C
    if (SIGNED(ctx->r7) <= 0) {
        // 0x80200108: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_8020012C;
    }
    // 0x80200108: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8020010C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80200110: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80200114: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80200118: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8020011C: addiu       $a2, $zero, 0x42
    ctx->r6 = ADD32(0, 0X42);
    // 0x80200120: jal         0x80231C9C
    // 0x80200124: sh          $a3, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r7;
    static_3_80231C9C(rdram, ctx);
        goto after_0;
    // 0x80200124: sh          $a3, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r7;
    after_0:
    // 0x80200128: lhu         $a3, 0x1A($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X1A);
L_8020012C:
    // 0x8020012C: sll         $t6, $a3, 2
    ctx->r14 = S32(ctx->r7 << 2);
    // 0x80200130: addu        $t6, $t6, $a3
    ctx->r14 = ADD32(ctx->r14, ctx->r7);
    // 0x80200134: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80200138: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x8020013C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80200140: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    // 0x80200144: jal         0x80228DE0
    // 0x80200148: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_80228DE0(rdram, ctx);
        goto after_1;
    // 0x80200148: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x8020014C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80200150: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80200154: jr          $ra
    // 0x80200158: nop

    return;
    // 0x80200158: nop

;}
RECOMP_FUNC void D_802E5DC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E5E48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802E5E4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802E5E50: lw          $v0, 0x100($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X100);
    // 0x802E5E54: sh          $zero, 0x1B4($a0)
    MEM_H(0X1B4, ctx->r4) = 0;
    // 0x802E5E58: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802E5E5C: lh          $t6, 0x78($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X78);
    // 0x802E5E60: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x802E5E64: lw          $t9, 0x7C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X7C);
    // 0x802E5E68: addu        $a0, $t6, $a0
    ctx->r4 = ADD32(ctx->r14, ctx->r4);
    // 0x802E5E6C: addiu       $a0, $a0, 0x50
    ctx->r4 = ADD32(ctx->r4, 0X50);
    // 0x802E5E70: jalr        $t9
    // 0x802E5E74: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x802E5E74: nop

    after_0:
    // 0x802E5E78: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x802E5E7C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802E5E80: jal         0x8031F800
    // 0x802E5E84: addiu       $a0, $a2, 0x50
    ctx->r4 = ADD32(ctx->r6, 0X50);
    static_3_8031F800(rdram, ctx);
        goto after_1;
    // 0x802E5E84: addiu       $a0, $a2, 0x50
    ctx->r4 = ADD32(ctx->r6, 0X50);
    after_1:
    // 0x802E5E88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802E5E8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802E5E90: jr          $ra
    // 0x802E5E94: nop

    return;
    // 0x802E5E94: nop

;}
RECOMP_FUNC void D_802D8004(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D8084: jr          $ra
    // 0x802D8088: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x802D8088: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void D_802ACB98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802ACC18: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802ACC1C: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x802ACC20: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802ACC24: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x802ACC28: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802ACC2C: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x802ACC30: lwc1        $f22, 0x0($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802ACC34: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802ACC38: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802ACC3C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802ACC40: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802ACC44: addiu       $t7, $zero, 0xB5
    ctx->r15 = ADD32(0, 0XB5);
    // 0x802ACC48: addiu       $t8, $zero, 0xB7
    ctx->r24 = ADD32(0, 0XB7);
    // 0x802ACC4C: addiu       $t9, $zero, 0x8B
    ctx->r25 = ADD32(0, 0X8B);
    // 0x802ACC50: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802ACC54: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802ACC58: sb          $t6, 0x968($a0)
    MEM_B(0X968, ctx->r4) = ctx->r14;
    // 0x802ACC5C: sw          $t7, 0x948($a0)
    MEM_W(0X948, ctx->r4) = ctx->r15;
    // 0x802ACC60: sw          $t8, 0x944($a0)
    MEM_W(0X944, ctx->r4) = ctx->r24;
    // 0x802ACC64: sw          $t9, 0x94C($a0)
    MEM_W(0X94C, ctx->r4) = ctx->r25;
    // 0x802ACC68: addiu       $a0, $a0, 0x96C
    ctx->r4 = ADD32(ctx->r4, 0X96C);
    // 0x802ACC6C: jal         0x803034A8
    // 0x802ACC70: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    static_3_803034A8(rdram, ctx);
        goto after_0;
    // 0x802ACC70: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    after_0:
    // 0x802ACC74: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802ACC78: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802ACC7C: addiu       $a0, $s0, 0x9E0
    ctx->r4 = ADD32(ctx->r16, 0X9E0);
    // 0x802ACC80: jal         0x803034A8
    // 0x802ACC84: addiu       $a1, $zero, 0x65
    ctx->r5 = ADD32(0, 0X65);
    static_3_803034A8(rdram, ctx);
        goto after_1;
    // 0x802ACC84: addiu       $a1, $zero, 0x65
    ctx->r5 = ADD32(0, 0X65);
    after_1:
    // 0x802ACC88: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802ACC8C: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802ACC90: addiu       $a0, $s0, 0xA54
    ctx->r4 = ADD32(ctx->r16, 0XA54);
    // 0x802ACC94: jal         0x803034A8
    // 0x802ACC98: addiu       $a1, $zero, 0x6E
    ctx->r5 = ADD32(0, 0X6E);
    static_3_803034A8(rdram, ctx);
        goto after_2;
    // 0x802ACC98: addiu       $a1, $zero, 0x6E
    ctx->r5 = ADD32(0, 0X6E);
    after_2:
    // 0x802ACC9C: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802ACCA0: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802ACCA4: addiu       $a0, $s0, 0xAC8
    ctx->r4 = ADD32(ctx->r16, 0XAC8);
    // 0x802ACCA8: jal         0x803034A8
    // 0x802ACCAC: addiu       $a1, $zero, 0x66
    ctx->r5 = ADD32(0, 0X66);
    static_3_803034A8(rdram, ctx);
        goto after_3;
    // 0x802ACCAC: addiu       $a1, $zero, 0x66
    ctx->r5 = ADD32(0, 0X66);
    after_3:
    // 0x802ACCB0: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802ACCB4: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802ACCB8: addiu       $a0, $s0, 0xB3C
    ctx->r4 = ADD32(ctx->r16, 0XB3C);
    // 0x802ACCBC: jal         0x803034A8
    // 0x802ACCC0: addiu       $a1, $zero, 0x63
    ctx->r5 = ADD32(0, 0X63);
    static_3_803034A8(rdram, ctx);
        goto after_4;
    // 0x802ACCC0: addiu       $a1, $zero, 0x63
    ctx->r5 = ADD32(0, 0X63);
    after_4:
    // 0x802ACCC4: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802ACCC8: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802ACCCC: addiu       $a0, $s0, 0xBB0
    ctx->r4 = ADD32(ctx->r16, 0XBB0);
    // 0x802ACCD0: jal         0x803034A8
    // 0x802ACCD4: addiu       $a1, $zero, 0x62
    ctx->r5 = ADD32(0, 0X62);
    static_3_803034A8(rdram, ctx);
        goto after_5;
    // 0x802ACCD4: addiu       $a1, $zero, 0x62
    ctx->r5 = ADD32(0, 0X62);
    after_5:
    // 0x802ACCD8: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802ACCDC: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802ACCE0: addiu       $a0, $s0, 0xC24
    ctx->r4 = ADD32(ctx->r16, 0XC24);
    // 0x802ACCE4: jal         0x803034A8
    // 0x802ACCE8: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    static_3_803034A8(rdram, ctx);
        goto after_6;
    // 0x802ACCE8: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    after_6:
    // 0x802ACCEC: lui         $a2, 0x3E99
    ctx->r6 = S32(0X3E99 << 16);
    // 0x802ACCF0: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802ACCF4: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x802ACCF8: addiu       $a0, $s0, 0xD0C
    ctx->r4 = ADD32(ctx->r16, 0XD0C);
    // 0x802ACCFC: jal         0x803034A8
    // 0x802ACD00: addiu       $a1, $zero, 0x67
    ctx->r5 = ADD32(0, 0X67);
    static_3_803034A8(rdram, ctx);
        goto after_7;
    // 0x802ACD00: addiu       $a1, $zero, 0x67
    ctx->r5 = ADD32(0, 0X67);
    after_7:
    // 0x802ACD04: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802ACD08: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802ACD0C: addiu       $a0, $s0, 0xDF4
    ctx->r4 = ADD32(ctx->r16, 0XDF4);
    // 0x802ACD10: jal         0x803034A8
    // 0x802ACD14: addiu       $a1, $zero, 0x6D
    ctx->r5 = ADD32(0, 0X6D);
    static_3_803034A8(rdram, ctx);
        goto after_8;
    // 0x802ACD14: addiu       $a1, $zero, 0x6D
    ctx->r5 = ADD32(0, 0X6D);
    after_8:
    // 0x802ACD18: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802ACD1C: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802ACD20: addiu       $a0, $s0, 0xE68
    ctx->r4 = ADD32(ctx->r16, 0XE68);
    // 0x802ACD24: jal         0x803034A8
    // 0x802ACD28: addiu       $a1, $zero, 0x6C
    ctx->r5 = ADD32(0, 0X6C);
    static_3_803034A8(rdram, ctx);
        goto after_9;
    // 0x802ACD28: addiu       $a1, $zero, 0x6C
    ctx->r5 = ADD32(0, 0X6C);
    after_9:
    // 0x802ACD2C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802ACD30: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x802ACD34: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x802ACD38: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802ACD3C: jr          $ra
    // 0x802ACD40: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x802ACD40: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void D_802D1128(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D11A8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802D11AC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802D11B0: jr          $ra
    // 0x802D11B4: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x802D11B4: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void D_802A35A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A3620: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A3624: bne         $a0, $zero, L_802A363C
    if (ctx->r4 != 0) {
        // 0x802A3628: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802A363C;
    }
    // 0x802A3628: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A362C: jal         0x802C67EC
    // 0x802A3630: addiu       $a0, $zero, 0xDC
    ctx->r4 = ADD32(0, 0XDC);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802A3630: addiu       $a0, $zero, 0xDC
    ctx->r4 = ADD32(0, 0XDC);
    after_0:
    // 0x802A3634: beq         $v0, $zero, L_802A3654
    if (ctx->r2 == 0) {
        // 0x802A3638: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802A3654;
    }
    // 0x802A3638: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_802A363C:
    // 0x802A363C: jal         0x802D1960
    // 0x802A3640: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_802D18E0(rdram, ctx);
        goto after_1;
    // 0x802A3640: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x802A3644: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802A3648: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802A364C: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802A3650: sw          $t6, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = ctx->r14;
L_802A3654:
    // 0x802A3654: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A3658: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A365C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x802A3660: jr          $ra
    // 0x802A3664: nop

    return;
    // 0x802A3664: nop

;}
RECOMP_FUNC void D_80283750(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802837D0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802837D4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802837D8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802837DC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802837E0: beq         $a0, $zero, L_80283840
    if (ctx->r4 == 0) {
        // 0x802837E4: sw          $a1, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r5;
            goto L_80283840;
    }
    // 0x802837E4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802837E8: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802837EC: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802837F0: jal         0x802B43E8
    // 0x802837F4: sw          $t6, 0x1A0($a0)
    MEM_W(0X1A0, ctx->r4) = ctx->r14;
    static_3_802B43E8(rdram, ctx);
        goto after_0;
    // 0x802837F4: sw          $t6, 0x1A0($a0)
    MEM_W(0X1A0, ctx->r4) = ctx->r14;
    after_0:
    // 0x802837F8: addiu       $a0, $s0, 0x4F8
    ctx->r4 = ADD32(ctx->r16, 0X4F8);
    // 0x802837FC: jal         0x802C49D0
    // 0x80283800: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802C49D0(rdram, ctx);
        goto after_1;
    // 0x80283800: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x80283804: addiu       $a0, $s0, 0x364
    ctx->r4 = ADD32(ctx->r16, 0X364);
    // 0x80283808: jal         0x802C49D0
    // 0x8028380C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802C49D0(rdram, ctx);
        goto after_2;
    // 0x8028380C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x80283810: addiu       $a0, $s0, 0x1A4
    ctx->r4 = ADD32(ctx->r16, 0X1A4);
    // 0x80283814: jal         0x802D48A8
    // 0x80283818: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802D48A8(rdram, ctx);
        goto after_3;
    // 0x80283818: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x8028381C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80283820: jal         0x8031739C
    // 0x80283824: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_8031739C(rdram, ctx);
        goto after_4;
    // 0x80283824: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80283828: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8028382C: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x80283830: beql        $t8, $zero, L_80283844
    if (ctx->r24 == 0) {
        // 0x80283834: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80283844;
    }
    goto skip_0;
    // 0x80283834: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x80283838: jal         0x802C681C
    // 0x8028383C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802C681C(rdram, ctx);
        goto after_5;
    // 0x8028383C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
L_80283840:
    // 0x80283840: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80283844:
    // 0x80283844: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80283848: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8028384C: jr          $ra
    // 0x80283850: nop

    return;
    // 0x80283850: nop

;}
RECOMP_FUNC void D_802AD234(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AD2B4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802AD2B8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802AD2BC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802AD2C0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802AD2C4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x802AD2C8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802AD2CC: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x802AD2D0: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802AD2D4: jal         0x802AED60
    // 0x802AD2D8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    static_3_802AED60(rdram, ctx);
        goto after_0;
    // 0x802AD2D8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
    // 0x802AD2DC: beql        $v0, $zero, L_802AD4E0
    if (ctx->r2 == 0) {
        // 0x802AD2E0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802AD4E0;
    }
    goto skip_0;
    // 0x802AD2E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x802AD2E4: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    // 0x802AD2E8: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x802AD2EC: bne         $v1, $zero, L_802AD2FC
    if (ctx->r3 != 0) {
        // 0x802AD2F0: lui         $a1, 0x0
        ctx->r5 = S32(0X0 << 16);
            goto L_802AD2FC;
    }
    // 0x802AD2F0: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802AD2F4: b           L_802AD318
    // 0x802AD2F8: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
        goto L_802AD318;
    // 0x802AD2F8: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
L_802AD2FC:
    // 0x802AD2FC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802AD300: bne         $v1, $at, L_802AD314
    if (ctx->r3 != ctx->r1) {
        // 0x802AD304: lui         $a1, 0x0
        ctx->r5 = S32(0X0 << 16);
            goto L_802AD314;
    }
    // 0x802AD304: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802AD308: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802AD30C: b           L_802AD318
    // 0x802AD310: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
        goto L_802AD318;
    // 0x802AD310: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
L_802AD314:
    // 0x802AD314: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
L_802AD318:
    // 0x802AD318: jal         0x80223FC4
    // 0x802AD31C: nop

    static_3_80223FC4(rdram, ctx);
        goto after_1;
    // 0x802AD31C: nop

    after_1:
    // 0x802AD320: beql        $v0, $zero, L_802AD378
    if (ctx->r2 == 0) {
        // 0x802AD324: lw          $a0, 0x20($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X20);
            goto L_802AD378;
    }
    goto skip_1;
    // 0x802AD324: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    skip_1:
    // 0x802AD328: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802AD32C: lwc1        $f6, 0x50($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X50);
    // 0x802AD330: addiu       $a0, $s0, 0x1204
    ctx->r4 = ADD32(ctx->r16, 0X1204);
    // 0x802AD334: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x802AD338: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x802AD33C: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x802AD340: bc1fl       L_802AD378
    if (!c1cs) {
        // 0x802AD344: lw          $a0, 0x20($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X20);
            goto L_802AD378;
    }
    goto skip_2;
    // 0x802AD344: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    skip_2:
    // 0x802AD348: jal         0x802C5468
    // 0x802AD34C: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    static_3_802C5468(rdram, ctx);
        goto after_2;
    // 0x802AD34C: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    after_2:
    // 0x802AD350: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x802AD354: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802AD358: jal         0x802C59F4
    // 0x802AD35C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    static_3_802C59F4(rdram, ctx);
        goto after_3;
    // 0x802AD35C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    after_3:
    // 0x802AD360: beq         $v0, $zero, L_802AD370
    if (ctx->r2 == 0) {
        // 0x802AD364: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_802AD370;
    }
    // 0x802AD364: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802AD368: b           L_802AD374
    // 0x802AD36C: sb          $t6, 0x792($s0)
    MEM_B(0X792, ctx->r16) = ctx->r14;
        goto L_802AD374;
    // 0x802AD36C: sb          $t6, 0x792($s0)
    MEM_B(0X792, ctx->r16) = ctx->r14;
L_802AD370:
    // 0x802AD370: sb          $zero, 0x792($s0)
    MEM_B(0X792, ctx->r16) = 0;
L_802AD374:
    // 0x802AD374: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
L_802AD378:
    // 0x802AD378: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802AD37C: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802AD380: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x802AD384: bne         $v1, $zero, L_802AD394
    if (ctx->r3 != 0) {
        // 0x802AD388: nop
    
            goto L_802AD394;
    }
    // 0x802AD388: nop

    // 0x802AD38C: b           L_802AD3AC
    // 0x802AD390: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
        goto L_802AD3AC;
    // 0x802AD390: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
L_802AD394:
    // 0x802AD394: bne         $v1, $at, L_802AD3A8
    if (ctx->r3 != ctx->r1) {
        // 0x802AD398: lui         $a1, 0x0
        ctx->r5 = S32(0X0 << 16);
            goto L_802AD3A8;
    }
    // 0x802AD398: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802AD39C: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802AD3A0: b           L_802AD3AC
    // 0x802AD3A4: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
        goto L_802AD3AC;
    // 0x802AD3A4: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
L_802AD3A8:
    // 0x802AD3A8: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
L_802AD3AC:
    // 0x802AD3AC: jal         0x80223FC4
    // 0x802AD3B0: nop

    static_3_80223FC4(rdram, ctx);
        goto after_4;
    // 0x802AD3B0: nop

    after_4:
    // 0x802AD3B4: beq         $v0, $zero, L_802AD3E4
    if (ctx->r2 == 0) {
        // 0x802AD3B8: addiu       $a0, $s0, 0x1398
        ctx->r4 = ADD32(ctx->r16, 0X1398);
            goto L_802AD3E4;
    }
    // 0x802AD3B8: addiu       $a0, $s0, 0x1398
    ctx->r4 = ADD32(ctx->r16, 0X1398);
    // 0x802AD3BC: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x802AD3C0: jal         0x802C5468
    // 0x802AD3C4: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    static_3_802C5468(rdram, ctx);
        goto after_5;
    // 0x802AD3C4: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    after_5:
    // 0x802AD3C8: beql        $v0, $zero, L_802AD3E8
    if (ctx->r2 == 0) {
        // 0x802AD3CC: lw          $a0, 0x20($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X20);
            goto L_802AD3E8;
    }
    goto skip_3;
    // 0x802AD3CC: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    skip_3:
    // 0x802AD3D0: jal         0x802E7F20
    // 0x802AD3D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802E7F20(rdram, ctx);
        goto after_6;
    // 0x802AD3D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x802AD3D8: lw          $t7, 0x664($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X664);
    // 0x802AD3DC: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x802AD3E0: sw          $t8, 0x664($s0)
    MEM_W(0X664, ctx->r16) = ctx->r24;
L_802AD3E4:
    // 0x802AD3E4: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
L_802AD3E8:
    // 0x802AD3E8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802AD3EC: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802AD3F0: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x802AD3F4: bne         $v1, $zero, L_802AD404
    if (ctx->r3 != 0) {
        // 0x802AD3F8: nop
    
            goto L_802AD404;
    }
    // 0x802AD3F8: nop

    // 0x802AD3FC: b           L_802AD41C
    // 0x802AD400: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
        goto L_802AD41C;
    // 0x802AD400: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
L_802AD404:
    // 0x802AD404: bne         $v1, $at, L_802AD418
    if (ctx->r3 != ctx->r1) {
        // 0x802AD408: lui         $a1, 0x0
        ctx->r5 = S32(0X0 << 16);
            goto L_802AD418;
    }
    // 0x802AD408: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802AD40C: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802AD410: b           L_802AD41C
    // 0x802AD414: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
        goto L_802AD41C;
    // 0x802AD414: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
L_802AD418:
    // 0x802AD418: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
L_802AD41C:
    // 0x802AD41C: jal         0x80223FC4
    // 0x802AD420: nop

    static_3_80223FC4(rdram, ctx);
        goto after_7;
    // 0x802AD420: nop

    after_7:
    // 0x802AD424: beq         $v0, $zero, L_802AD460
    if (ctx->r2 == 0) {
        // 0x802AD428: addiu       $a0, $s0, 0xEDC
        ctx->r4 = ADD32(ctx->r16, 0XEDC);
            goto L_802AD460;
    }
    // 0x802AD428: addiu       $a0, $s0, 0xEDC
    ctx->r4 = ADD32(ctx->r16, 0XEDC);
    // 0x802AD42C: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x802AD430: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x802AD434: jal         0x802C5468
    // 0x802AD438: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    static_3_802C5468(rdram, ctx);
        goto after_8;
    // 0x802AD438: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    after_8:
    // 0x802AD43C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x802AD440: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802AD444: jal         0x802C5DE8
    // 0x802AD448: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    static_3_802C5DE8(rdram, ctx);
        goto after_9;
    // 0x802AD448: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    after_9:
    // 0x802AD44C: beq         $v0, $zero, L_802AD45C
    if (ctx->r2 == 0) {
        // 0x802AD450: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_802AD45C;
    }
    // 0x802AD450: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802AD454: b           L_802AD460
    // 0x802AD458: sb          $t9, 0x794($s0)
    MEM_B(0X794, ctx->r16) = ctx->r25;
        goto L_802AD460;
    // 0x802AD458: sb          $t9, 0x794($s0)
    MEM_B(0X794, ctx->r16) = ctx->r25;
L_802AD45C:
    // 0x802AD45C: sb          $zero, 0x794($s0)
    MEM_B(0X794, ctx->r16) = 0;
L_802AD460:
    // 0x802AD460: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    // 0x802AD464: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802AD468: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802AD46C: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x802AD470: bne         $v1, $zero, L_802AD480
    if (ctx->r3 != 0) {
        // 0x802AD474: nop
    
            goto L_802AD480;
    }
    // 0x802AD474: nop

    // 0x802AD478: b           L_802AD498
    // 0x802AD47C: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
        goto L_802AD498;
    // 0x802AD47C: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
L_802AD480:
    // 0x802AD480: bne         $v1, $at, L_802AD494
    if (ctx->r3 != ctx->r1) {
        // 0x802AD484: lui         $a1, 0x0
        ctx->r5 = S32(0X0 << 16);
            goto L_802AD494;
    }
    // 0x802AD484: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802AD488: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802AD48C: b           L_802AD498
    // 0x802AD490: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
        goto L_802AD498;
    // 0x802AD490: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
L_802AD494:
    // 0x802AD494: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
L_802AD498:
    // 0x802AD498: jal         0x80223F70
    // 0x802AD49C: nop

    static_3_80223F70(rdram, ctx);
        goto after_10;
    // 0x802AD49C: nop

    after_10:
    // 0x802AD4A0: beq         $v0, $zero, L_802AD4DC
    if (ctx->r2 == 0) {
        // 0x802AD4A4: addiu       $a0, $s0, 0x1070
        ctx->r4 = ADD32(ctx->r16, 0X1070);
            goto L_802AD4DC;
    }
    // 0x802AD4A4: addiu       $a0, $s0, 0x1070
    ctx->r4 = ADD32(ctx->r16, 0X1070);
    // 0x802AD4A8: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x802AD4AC: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x802AD4B0: jal         0x802C5468
    // 0x802AD4B4: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    static_3_802C5468(rdram, ctx);
        goto after_11;
    // 0x802AD4B4: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    after_11:
    // 0x802AD4B8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x802AD4BC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802AD4C0: jal         0x802C5C04
    // 0x802AD4C4: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    static_3_802C5C04(rdram, ctx);
        goto after_12;
    // 0x802AD4C4: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    after_12:
    // 0x802AD4C8: beq         $v0, $zero, L_802AD4D8
    if (ctx->r2 == 0) {
        // 0x802AD4CC: addiu       $t0, $zero, 0x1
        ctx->r8 = ADD32(0, 0X1);
            goto L_802AD4D8;
    }
    // 0x802AD4CC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x802AD4D0: b           L_802AD4DC
    // 0x802AD4D4: sb          $t0, 0x793($s0)
    MEM_B(0X793, ctx->r16) = ctx->r8;
        goto L_802AD4DC;
    // 0x802AD4D4: sb          $t0, 0x793($s0)
    MEM_B(0X793, ctx->r16) = ctx->r8;
L_802AD4D8:
    // 0x802AD4D8: sb          $zero, 0x793($s0)
    MEM_B(0X793, ctx->r16) = 0;
L_802AD4DC:
    // 0x802AD4DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802AD4E0:
    // 0x802AD4E0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802AD4E4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x802AD4E8: jr          $ra
    // 0x802AD4EC: nop

    return;
    // 0x802AD4EC: nop

;}
RECOMP_FUNC void D_802D8214(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D8294: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802D8298: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802D829C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802D82A0: lbu         $t6, 0x0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X0);
    // 0x802D82A4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802D82A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802D82AC: beql        $t6, $zero, L_802D8454
    if (ctx->r14 == 0) {
        // 0x802D82B0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802D8454;
    }
    goto skip_0;
    // 0x802D82B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x802D82B4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x802D82B8: lwc1        $f4, 0x10($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X10);
    // 0x802D82BC: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    // 0x802D82C0: nop

    // 0x802D82C4: bc1fl       L_802D8320
    if (!c1cs) {
        // 0x802D82C8: lbu         $t9, 0x6($s0)
        ctx->r25 = MEM_BU(ctx->r16, 0X6);
            goto L_802D8320;
    }
    goto skip_1;
    // 0x802D82C8: lbu         $t9, 0x6($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X6);
    skip_1:
    // 0x802D82CC: lbu         $t7, 0x6($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X6);
    // 0x802D82D0: lwc1        $f0, 0x8($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X8);
    // 0x802D82D4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x802D82D8: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x802D82DC: bgez        $t7, L_802D82F0
    if (SIGNED(ctx->r15) >= 0) {
        // 0x802D82E0: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_802D82F0;
    }
    // 0x802D82E0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x802D82E4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802D82E8: nop

    // 0x802D82EC: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_802D82F0:
    // 0x802D82F0: c.le.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl <= ctx->f0.fl;
    // 0x802D82F4: nop

    // 0x802D82F8: bc1f        L_802D8368
    if (!c1cs) {
        // 0x802D82FC: nop
    
            goto L_802D8368;
    }
    // 0x802D82FC: nop

    // 0x802D8300: lbu         $t8, 0x1($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X1);
    // 0x802D8304: bne         $t8, $zero, L_802D8314
    if (ctx->r24 != 0) {
        // 0x802D8308: nop
    
            goto L_802D8314;
    }
    // 0x802D8308: nop

    // 0x802D830C: b           L_802D8450
    // 0x802D8310: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
        goto L_802D8450;
    // 0x802D8310: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
L_802D8314:
    // 0x802D8314: b           L_802D8368
    // 0x802D8318: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802D8368;
    // 0x802D8318: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802D831C: lbu         $t9, 0x6($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X6);
L_802D8320:
    // 0x802D8320: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x802D8324: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x802D8328: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x802D832C: bgez        $t9, L_802D8340
    if (SIGNED(ctx->r25) >= 0) {
        // 0x802D8330: cvt.s.w     $f18, $f16
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
            goto L_802D8340;
    }
    // 0x802D8330: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x802D8334: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802D8338: nop

    // 0x802D833C: add.s       $f18, $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f4.fl;
L_802D8340:
    // 0x802D8340: c.le.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl <= ctx->f18.fl;
    // 0x802D8344: nop

    // 0x802D8348: bc1f        L_802D8368
    if (!c1cs) {
        // 0x802D834C: nop
    
            goto L_802D8368;
    }
    // 0x802D834C: nop

    // 0x802D8350: lbu         $t0, 0x1($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X1);
    // 0x802D8354: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802D8358: bne         $t0, $zero, L_802D8368
    if (ctx->r8 != 0) {
        // 0x802D835C: nop
    
            goto L_802D8368;
    }
    // 0x802D835C: nop

    // 0x802D8360: b           L_802D8450
    // 0x802D8364: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
        goto L_802D8450;
    // 0x802D8364: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
L_802D8368:
    // 0x802D8368: beq         $v0, $zero, L_802D8380
    if (ctx->r2 == 0) {
        // 0x802D836C: addiu       $a3, $zero, 0x1
        ctx->r7 = ADD32(0, 0X1);
            goto L_802D8380;
    }
    // 0x802D836C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x802D8370: lwc1        $f6, 0xC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XC);
    // 0x802D8374: add.s       $f10, $f0, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x802D8378: swc1        $f10, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f10.u32l;
    // 0x802D837C: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
L_802D8380:
    // 0x802D8380: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x802D8384: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x802D8388: bc1fl       L_802D83A0
    if (!c1cs) {
        // 0x802D838C: mtc1        $at, $f2
        ctx->f2.u32l = ctx->r1;
            goto L_802D83A0;
    }
    goto skip_2;
    // 0x802D838C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    skip_2:
    // 0x802D8390: swc1        $f2, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f2.u32l;
    // 0x802D8394: b           L_802D83BC
    // 0x802D8398: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
        goto L_802D83BC;
    // 0x802D8398: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x802D839C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
L_802D83A0:
    // 0x802D83A0: nop

    // 0x802D83A4: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x802D83A8: nop

    // 0x802D83AC: bc1fl       L_802D83C0
    if (!c1cs) {
        // 0x802D83B0: cfc1        $t1, $FpcCsr
        ctx->r9 = get_cop1_cs();
            goto L_802D83C0;
    }
    goto skip_3;
    // 0x802D83B0: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    skip_3:
    // 0x802D83B4: swc1        $f2, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f2.u32l;
    // 0x802D83B8: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
L_802D83BC:
    // 0x802D83BC: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
L_802D83C0:
    // 0x802D83C0: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x802D83C4: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x802D83C8: lbu         $a1, 0x3($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X3);
    // 0x802D83CC: cvt.w.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = CVT_W_S(ctx->f0.fl);
    // 0x802D83D0: lbu         $a2, 0x4($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X4);
    // 0x802D83D4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x802D83D8: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x802D83DC: nop

    // 0x802D83E0: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x802D83E4: beql        $a3, $zero, L_802D8434
    if (ctx->r7 == 0) {
        // 0x802D83E8: mfc1        $a3, $f8
        ctx->r7 = (int32_t)ctx->f8.u32l;
            goto L_802D8434;
    }
    goto skip_4;
    // 0x802D83E8: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    skip_4:
    // 0x802D83EC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802D83F0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x802D83F4: sub.s       $f8, $f0, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x802D83F8: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x802D83FC: nop

    // 0x802D8400: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x802D8404: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x802D8408: nop

    // 0x802D840C: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x802D8410: bne         $a3, $zero, L_802D8428
    if (ctx->r7 != 0) {
        // 0x802D8414: nop
    
            goto L_802D8428;
    }
    // 0x802D8414: nop

    // 0x802D8418: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x802D841C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802D8420: b           L_802D8440
    // 0x802D8424: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
        goto L_802D8440;
    // 0x802D8424: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
L_802D8428:
    // 0x802D8428: b           L_802D8440
    // 0x802D842C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
        goto L_802D8440;
    // 0x802D842C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x802D8430: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
L_802D8434:
    // 0x802D8434: nop

    // 0x802D8438: bltz        $a3, L_802D8428
    if (SIGNED(ctx->r7) < 0) {
        // 0x802D843C: nop
    
            goto L_802D8428;
    }
    // 0x802D843C: nop

L_802D8440:
    // 0x802D8440: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x802D8444: sll         $t2, $a3, 16
    ctx->r10 = S32(ctx->r7 << 16);
    // 0x802D8448: jal         0x80309DEC
    // 0x802D844C: sra         $a3, $t2, 16
    ctx->r7 = S32(SIGNED(ctx->r10) >> 16);
    static_3_80309DEC(rdram, ctx);
        goto after_0;
    // 0x802D844C: sra         $a3, $t2, 16
    ctx->r7 = S32(SIGNED(ctx->r10) >> 16);
    after_0:
L_802D8450:
    // 0x802D8450: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802D8454:
    // 0x802D8454: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802D8458: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802D845C: jr          $ra
    // 0x802D8460: nop

    return;
    // 0x802D8460: nop

;}
RECOMP_FUNC void D_802E3674(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E36F4: jr          $ra
    // 0x802E36F8: sw          $a1, 0x3F8($a0)
    MEM_W(0X3F8, ctx->r4) = ctx->r5;
    return;
    // 0x802E36F8: sw          $a1, 0x3F8($a0)
    MEM_W(0X3F8, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void D_802B671C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B679C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x802B67A0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802B67A4: lwc1        $f4, 0x7BC($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X7BC);
    // 0x802B67A8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B67AC: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B67B0: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802B67B4: nop

    // 0x802B67B8: mul.s       $f0, $f10, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x802B67BC: jr          $ra
    // 0x802B67C0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    return;
    // 0x802B67C0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
;}
RECOMP_FUNC void D_802B7F18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B7F98: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802B7F9C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802B7FA0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802B7FA4: lbu         $t6, 0x968($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X968);
    // 0x802B7FA8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802B7FAC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802B7FB0: beq         $t6, $zero, L_802B803C
    if (ctx->r14 == 0) {
        // 0x802B7FB4: nop
    
            goto L_802B803C;
    }
    // 0x802B7FB4: nop

    // 0x802B7FB8: lw          $t7, 0x964($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X964);
    // 0x802B7FBC: beq         $a1, $t7, L_802B803C
    if (ctx->r5 == ctx->r15) {
        // 0x802B7FC0: nop
    
            goto L_802B803C;
    }
    // 0x802B7FC0: nop

    // 0x802B7FC4: sw          $a1, 0x964($a0)
    MEM_W(0X964, ctx->r4) = ctx->r5;
    // 0x802B7FC8: lw          $a1, 0x944($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X944);
    // 0x802B7FCC: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802B7FD0: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x802B7FD4: beq         $a1, $at, L_802B7FF8
    if (ctx->r5 == ctx->r1) {
        // 0x802B7FD8: lw          $v0, 0x0($v0)
        ctx->r2 = MEM_W(ctx->r2, 0X0);
            goto L_802B7FF8;
    }
    // 0x802B7FD8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x802B7FDC: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802B7FE0: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802B7FE4: addiu       $a0, $v0, 0x8F4
    ctx->r4 = ADD32(ctx->r2, 0X8F4);
    // 0x802B7FE8: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802B7FEC: jal         0x80302988
    // 0x802B7FF0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    static_3_80302988(rdram, ctx);
        goto after_0;
    // 0x802B7FF0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_0:
    // 0x802B7FF4: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
L_802B7FF8:
    // 0x802B7FF8: lw          $a1, 0x948($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X948);
    // 0x802B7FFC: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x802B8000: addiu       $a0, $v0, 0x8F4
    ctx->r4 = ADD32(ctx->r2, 0X8F4);
    // 0x802B8004: beq         $a1, $at, L_802B8020
    if (ctx->r5 == ctx->r1) {
        // 0x802B8008: lui         $a2, 0x3D4C
        ctx->r6 = S32(0X3D4C << 16);
            goto L_802B8020;
    }
    // 0x802B8008: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802B800C: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802B8010: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802B8014: jal         0x80302988
    // 0x802B8018: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    static_3_80302988(rdram, ctx);
        goto after_1;
    // 0x802B8018: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_1:
    // 0x802B801C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
L_802B8020:
    // 0x802B8020: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802B8024: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802B8028: addiu       $a1, $zero, 0x8C
    ctx->r5 = ADD32(0, 0X8C);
    // 0x802B802C: jal         0x80302988
    // 0x802B8030: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    static_3_80302988(rdram, ctx);
        goto after_2;
    // 0x802B8030: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_2:
    // 0x802B8034: b           L_802B803C
    // 0x802B8038: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802B803C;
    // 0x802B8038: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802B803C:
    // 0x802B803C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802B8040: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802B8044: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802B8048: jr          $ra
    // 0x802B804C: nop

    return;
    // 0x802B804C: nop

;}
RECOMP_FUNC void D_802E0E0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E0E8C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802E0E90: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802E0E94: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802E0E98: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802E0E9C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x802E0EA0: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x802E0EA4: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    // 0x802E0EA8: addiu       $a1, $zero, 0x7A
    ctx->r5 = ADD32(0, 0X7A);
    // 0x802E0EAC: jal         0x80302DC8
    // 0x802E0EB0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302DC8(rdram, ctx);
        goto after_0;
    // 0x802E0EB0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_0:
    // 0x802E0EB4: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x802E0EB8: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802E0EBC: addiu       $a1, $zero, 0xAB
    ctx->r5 = ADD32(0, 0XAB);
    // 0x802E0EC0: jal         0x80302DC8
    // 0x802E0EC4: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302DC8(rdram, ctx);
        goto after_1;
    // 0x802E0EC4: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_1:
    // 0x802E0EC8: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x802E0ECC: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802E0ED0: addiu       $a1, $zero, 0x7B
    ctx->r5 = ADD32(0, 0X7B);
    // 0x802E0ED4: jal         0x80302DC8
    // 0x802E0ED8: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302DC8(rdram, ctx);
        goto after_2;
    // 0x802E0ED8: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_2:
    // 0x802E0EDC: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802E0EE0: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x802E0EE4: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802E0EE8: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x802E0EEC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802E0EF0: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    // 0x802E0EF4: add.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x802E0EF8: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x802E0EFC: jal         0x80290474
    // 0x802E0F00: nop

    static_3_80290474(rdram, ctx);
        goto after_3;
    // 0x802E0F00: nop

    after_3:
    // 0x802E0F04: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802E0F08: jal         0x80302980
    // 0x802E0F0C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302980(rdram, ctx);
        goto after_4;
    // 0x802E0F0C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_4:
    // 0x802E0F10: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802E0F14: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802E0F18: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802E0F1C: addiu       $a1, $zero, 0x7A
    ctx->r5 = ADD32(0, 0X7A);
    // 0x802E0F20: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802E0F24: jal         0x80302988
    // 0x802E0F28: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_5;
    // 0x802E0F28: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_5:
    // 0x802E0F2C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802E0F30: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802E0F34: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802E0F38: addiu       $a1, $zero, 0xB0
    ctx->r5 = ADD32(0, 0XB0);
    // 0x802E0F3C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802E0F40: jal         0x80302988
    // 0x802E0F44: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_6;
    // 0x802E0F44: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_6:
    // 0x802E0F48: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802E0F4C: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802E0F50: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802E0F54: addiu       $a1, $zero, 0x7B
    ctx->r5 = ADD32(0, 0X7B);
    // 0x802E0F58: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802E0F5C: jal         0x80302988
    // 0x802E0F60: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_7;
    // 0x802E0F60: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_7:
    // 0x802E0F64: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802E0F68: jal         0x80302A7C
    // 0x802E0F6C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302A7C(rdram, ctx);
        goto after_8;
    // 0x802E0F6C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_8:
    // 0x802E0F70: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802E0F74: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802E0F78: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802E0F7C: jr          $ra
    // 0x802E0F80: nop

    return;
    // 0x802E0F80: nop

;}
RECOMP_FUNC void D_802496E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802496E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802496EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802496F0: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x802496F4: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x802496F8: sw          $a2, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r6;
    // 0x802496FC: sh          $zero, 0x1A($a0)
    MEM_H(0X1A, ctx->r4) = 0;
    // 0x80249700: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x80249704: jal         0x802496B8
    // 0x80249708: sw          $a1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r5;
    func_802496B8(rdram, ctx);
        goto after_0;
    // 0x80249708: sw          $a1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r5;
    after_0:
    // 0x8024970C: lui         $at, 0x4D54
    ctx->r1 = S32(0X4D54 << 16);
    // 0x80249710: ori         $at, $at, 0x6864
    ctx->r1 = ctx->r1 | 0X6864;
    // 0x80249714: bnel        $v0, $at, L_802497B4
    if (ctx->r2 != ctx->r1) {
        // 0x80249718: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802497B4;
    }
    goto skip_0;
    // 0x80249718: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8024971C: jal         0x802496B8
    // 0x80249720: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_802496B8(rdram, ctx);
        goto after_1;
    // 0x80249720: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_1:
    // 0x80249724: jal         0x80249708
    // 0x80249728: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    static_3_80249708(rdram, ctx);
        goto after_2;
    // 0x80249728: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_2:
    // 0x8024972C: bnel        $v0, $zero, L_802497B4
    if (ctx->r2 != 0) {
        // 0x80249730: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802497B4;
    }
    goto skip_1;
    // 0x80249730: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x80249734: jal         0x80249708
    // 0x80249738: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    static_3_80249708(rdram, ctx);
        goto after_3;
    // 0x80249738: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_3:
    // 0x8024973C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80249740: bnel        $v0, $at, L_802497B4
    if (ctx->r2 != ctx->r1) {
        // 0x80249744: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802497B4;
    }
    goto skip_2;
    // 0x80249744: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x80249748: jal         0x80249708
    // 0x8024974C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    static_3_80249708(rdram, ctx);
        goto after_4;
    // 0x8024974C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_4:
    // 0x80249750: sh          $v0, 0x18($a3)
    MEM_H(0X18, ctx->r7) = ctx->r2;
    // 0x80249754: lh          $v1, 0x18($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X18);
    // 0x80249758: andi        $t6, $v1, 0x8000
    ctx->r14 = ctx->r3 & 0X8000;
    // 0x8024975C: bnel        $t6, $zero, L_802497B4
    if (ctx->r14 != 0) {
        // 0x80249760: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802497B4;
    }
    goto skip_3;
    // 0x80249760: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_3:
    // 0x80249764: mtc1        $v1, $f6
    ctx->f6.u32l = ctx->r3;
    // 0x80249768: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8024976C: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80249770: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80249774: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80249778: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8024977C: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80249780: div.d       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f10.d); 
    ctx->f6.d = DIV_D(ctx->f4.d, ctx->f10.d);
    // 0x80249784: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x80249788: jal         0x802496B8
    // 0x8024978C: swc1        $f8, 0x14($a3)
    MEM_W(0X14, ctx->r7) = ctx->f8.u32l;
    func_802496B8(rdram, ctx);
        goto after_5;
    // 0x8024978C: swc1        $f8, 0x14($a3)
    MEM_W(0X14, ctx->r7) = ctx->f8.u32l;
    after_5:
    // 0x80249790: lui         $at, 0x4D54
    ctx->r1 = S32(0X4D54 << 16);
    // 0x80249794: ori         $at, $at, 0x726B
    ctx->r1 = ctx->r1 | 0X726B;
    // 0x80249798: bnel        $v0, $at, L_802497B4
    if (ctx->r2 != ctx->r1) {
        // 0x8024979C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802497B4;
    }
    goto skip_4;
    // 0x8024979C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_4:
    // 0x802497A0: jal         0x802496B8
    // 0x802497A4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_802496B8(rdram, ctx);
        goto after_6;
    // 0x802497A4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_6:
    // 0x802497A8: lw          $t7, 0x8($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X8);
    // 0x802497AC: sw          $t7, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r15;
    // 0x802497B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802497B4:
    // 0x802497B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802497B8: jr          $ra
    // 0x802497BC: nop

    return;
    // 0x802497BC: nop

;}
RECOMP_FUNC void D_802E7C38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E7CB8: jr          $ra
    // 0x802E7CBC: lwc1        $f0, 0x48($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X48);
    return;
    // 0x802E7CBC: lwc1        $f0, 0x48($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X48);
;}
RECOMP_FUNC void D_80228030(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80228030: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80228034: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80228038: lui         $s1, 0x0
    ctx->r17 = S32(0X0 << 16);
    // 0x8022803C: addiu       $s1, $s1, 0x0
    ctx->r17 = ADD32(ctx->r17, 0X0);
    // 0x80228040: lhu         $a0, 0x3E($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X3E);
    // 0x80228044: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80228048: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8022804C: sll         $t6, $a0, 5
    ctx->r14 = S32(ctx->r4 << 5);
    // 0x80228050: jal         0x8022BA58
    // 0x80228054: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    static_3_8022BA58(rdram, ctx);
        goto after_0;
    // 0x80228054: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_0:
    // 0x80228058: lhu         $a0, 0x42($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X42);
    // 0x8022805C: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x80228060: addiu       $s0, $s0, 0x0
    ctx->r16 = ADD32(ctx->r16, 0X0);
    // 0x80228064: sll         $t7, $a0, 4
    ctx->r15 = S32(ctx->r4 << 4);
    // 0x80228068: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x8022806C: jal         0x8022BA58
    // 0x80228070: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    static_3_8022BA58(rdram, ctx);
        goto after_1;
    // 0x80228070: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_1:
    // 0x80228074: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80228078: sw          $v0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r2;
    // 0x8022807C: lhu         $a0, 0x42($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X42);
    // 0x80228080: sll         $t8, $a0, 4
    ctx->r24 = S32(ctx->r4 << 4);
    // 0x80228084: jal         0x8022BA58
    // 0x80228088: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    static_3_8022BA58(rdram, ctx);
        goto after_2;
    // 0x80228088: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_2:
    // 0x8022808C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80228090: sw          $v0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r2;
    // 0x80228094: lhu         $a0, 0x40($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X40);
    // 0x80228098: sll         $t9, $a0, 3
    ctx->r25 = S32(ctx->r4 << 3);
    // 0x8022809C: jal         0x8022BA58
    // 0x802280A0: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    static_3_8022BA58(rdram, ctx);
        goto after_3;
    // 0x802280A0: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    after_3:
    // 0x802280A4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802280A8: sw          $v0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r2;
    // 0x802280AC: lhu         $a0, 0x40($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X40);
    // 0x802280B0: sll         $t0, $a0, 3
    ctx->r8 = S32(ctx->r4 << 3);
    // 0x802280B4: jal         0x8022BA58
    // 0x802280B8: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    static_3_8022BA58(rdram, ctx);
        goto after_4;
    // 0x802280B8: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_4:
    // 0x802280BC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802280C0: sw          $v0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r2;
    // 0x802280C4: lhu         $t1, 0x3E($s1)
    ctx->r9 = MEM_HU(ctx->r17, 0X3E);
    // 0x802280C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802280CC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x802280D0: blezl       $t1, L_8022810C
    if (SIGNED(ctx->r9) <= 0) {
        // 0x802280D4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8022810C;
    }
    goto skip_0;
    // 0x802280D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x802280D8: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
L_802280DC:
    // 0x802280DC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802280E0: addu        $t3, $t2, $v0
    ctx->r11 = ADD32(ctx->r10, ctx->r2);
    // 0x802280E4: sb          $zero, 0x0($t3)
    MEM_B(0X0, ctx->r11) = 0;
    // 0x802280E8: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x802280EC: addu        $t5, $t4, $v0
    ctx->r13 = ADD32(ctx->r12, ctx->r2);
    // 0x802280F0: sb          $zero, 0x1($t5)
    MEM_B(0X1, ctx->r13) = 0;
    // 0x802280F4: lhu         $t6, 0x3E($s1)
    ctx->r14 = MEM_HU(ctx->r17, 0X3E);
    // 0x802280F8: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x802280FC: slt         $at, $v1, $t6
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80228100: bnel        $at, $zero, L_802280DC
    if (ctx->r1 != 0) {
        // 0x80228104: lw          $t2, 0x0($s0)
        ctx->r10 = MEM_W(ctx->r16, 0X0);
            goto L_802280DC;
    }
    goto skip_1;
    // 0x80228104: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    skip_1:
    // 0x80228108: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8022810C:
    // 0x8022810C: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x80228110: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x80228114: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x80228118: addiu       $v0, $v0, 0x0
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x8022811C: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x80228120: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x80228124: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80228128: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8022812C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80228130: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
    // 0x80228134: jr          $ra
    // 0x80228138: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80228138: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void D_80248B20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80248B20: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80248B24: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80248B28: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80248B2C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80248B30: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80248B34: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x80248B38: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80248B3C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80248B40: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80248B44: lw          $s0, 0x0($t6)
    ctx->r16 = MEM_W(ctx->r14, 0X0);
    // 0x80248B48: andi        $t7, $s0, 0x3
    ctx->r15 = ctx->r16 & 0X3;
    // 0x80248B4C: beq         $t7, $zero, L_80248B68
    if (ctx->r15 == 0) {
        // 0x80248B50: nop
    
            goto L_80248B68;
    }
    // 0x80248B50: nop

L_80248B54:
    // 0x80248B54: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x80248B58: lw          $s0, 0x0($t8)
    ctx->r16 = MEM_W(ctx->r24, 0X0);
    // 0x80248B5C: andi        $t9, $s0, 0x3
    ctx->r25 = ctx->r16 & 0X3;
    // 0x80248B60: bne         $t9, $zero, L_80248B54
    if (ctx->r25 != 0) {
        // 0x80248B64: nop
    
            goto L_80248B54;
    }
    // 0x80248B64: nop

L_80248B68:
    // 0x80248B68: jal         0x802375F0
    // 0x80248B6C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    static_3_802375F0(rdram, ctx);
        goto after_0;
    // 0x80248B6C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_0:
    // 0x80248B70: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x80248B74: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
    // 0x80248B78: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x80248B7C: lw          $t1, 0x0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X0);
    // 0x80248B80: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80248B84: lui         $at, 0x1FFF
    ctx->r1 = S32(0X1FFF << 16);
    // 0x80248B88: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80248B8C: or          $t3, $t1, $t2
    ctx->r11 = ctx->r9 | ctx->r10;
    // 0x80248B90: and         $t4, $t3, $at
    ctx->r12 = ctx->r11 & ctx->r1;
    // 0x80248B94: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x80248B98: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x80248B9C: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x80248BA0: beq         $s1, $zero, L_80248BB8
    if (ctx->r17 == 0) {
        // 0x80248BA4: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80248BB8;
    }
    // 0x80248BA4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80248BA8: beq         $s1, $at, L_80248BCC
    if (ctx->r17 == ctx->r1) {
        // 0x80248BAC: nop
    
            goto L_80248BCC;
    }
    // 0x80248BAC: nop

    // 0x80248BB0: b           L_80248BE0
    // 0x80248BB4: nop

        goto L_80248BE0;
    // 0x80248BB4: nop

L_80248BB8:
    // 0x80248BB8: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80248BBC: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x80248BC0: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80248BC4: b           L_80248BE8
    // 0x80248BC8: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
        goto L_80248BE8;
    // 0x80248BC8: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
L_80248BCC:
    // 0x80248BCC: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80248BD0: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x80248BD4: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x80248BD8: b           L_80248BE8
    // 0x80248BDC: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
        goto L_80248BE8;
    // 0x80248BDC: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
L_80248BE0:
    // 0x80248BE0: b           L_80248BEC
    // 0x80248BE4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80248BEC;
    // 0x80248BE4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80248BE8:
    // 0x80248BE8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80248BEC:
    // 0x80248BEC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80248BF0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80248BF4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80248BF8: jr          $ra
    // 0x80248BFC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80248BFC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void D_80205B6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80205B6C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80205B70: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80205B74: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80205B78: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80205B7C: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80205B80: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x80205B84: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80205B88: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x80205B8C: jal         0x80231C58
    // 0x80205B90: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    static_3_80231C58(rdram, ctx);
        goto after_0;
    // 0x80205B90: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    after_0:
    // 0x80205B94: bne         $v0, $zero, L_80205C18
    if (ctx->r2 != 0) {
        // 0x80205B98: lw          $t6, 0x28($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X28);
            goto L_80205C18;
    }
    // 0x80205B98: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80205B9C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80205BA0: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80205BA4: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80205BA8: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80205BAC: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x80205BB0: lw          $t8, 0x0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X0);
    // 0x80205BB4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80205BB8: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80205BBC: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80205BC0: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x80205BC4: addiu       $a0, $v0, 0x88
    ctx->r4 = ADD32(ctx->r2, 0X88);
    // 0x80205BC8: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80205BCC: jal         0x80228DE0
    // 0x80205BD0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80228DE0(rdram, ctx);
        goto after_1;
    // 0x80205BD0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x80205BD4: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x80205BD8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80205BDC: jal         0x8020670C
    // 0x80205BE0: addiu       $a0, $v0, 0xC8
    ctx->r4 = ADD32(ctx->r2, 0XC8);
    static_3_8020670C(rdram, ctx);
        goto after_2;
    // 0x80205BE0: addiu       $a0, $v0, 0xC8
    ctx->r4 = ADD32(ctx->r2, 0XC8);
    after_2:
    // 0x80205BE4: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x80205BE8: lwc1        $f4, 0x30($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X30);
    // 0x80205BEC: swc1        $f4, 0x108($v0)
    MEM_W(0X108, ctx->r2) = ctx->f4.u32l;
    // 0x80205BF0: lwc1        $f6, 0x34($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X34);
    // 0x80205BF4: swc1        $f6, 0x10C($v0)
    MEM_W(0X10C, ctx->r2) = ctx->f6.u32l;
    // 0x80205BF8: lwc1        $f8, 0x38($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X38);
    // 0x80205BFC: swc1        $f8, 0x110($v0)
    MEM_W(0X110, ctx->r2) = ctx->f8.u32l;
    // 0x80205C00: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x80205C04: swc1        $f10, 0x114($v0)
    MEM_W(0X114, ctx->r2) = ctx->f10.u32l;
    // 0x80205C08: lwc1        $f16, 0x14($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X14);
    // 0x80205C0C: swc1        $f16, 0x118($v0)
    MEM_W(0X118, ctx->r2) = ctx->f16.u32l;
    // 0x80205C10: lwc1        $f18, 0x18($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X18);
    // 0x80205C14: swc1        $f18, 0x11C($v0)
    MEM_W(0X11C, ctx->r2) = ctx->f18.u32l;
L_80205C18:
    // 0x80205C18: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80205C1C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80205C20: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80205C24: jr          $ra
    // 0x80205C28: nop

    return;
    // 0x80205C28: nop

;}
RECOMP_FUNC void D_802DD0DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802DD15C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802DD160: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802DD164: beq         $a0, $zero, L_802DD1A0
    if (ctx->r4 == 0) {
        // 0x802DD168: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_802DD1A0;
    }
    // 0x802DD168: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802DD16C: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802DD170: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802DD174: sw          $t6, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r14;
    // 0x802DD178: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802DD17C: jal         0x803086D4
    // 0x802DD180: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_803086D4(rdram, ctx);
        goto after_0;
    // 0x802DD180: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x802DD184: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x802DD188: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802DD18C: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x802DD190: beql        $t8, $zero, L_802DD1A4
    if (ctx->r24 == 0) {
        // 0x802DD194: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802DD1A4;
    }
    goto skip_0;
    // 0x802DD194: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802DD198: jal         0x802C681C
    // 0x802DD19C: nop

    static_3_802C681C(rdram, ctx);
        goto after_1;
    // 0x802DD19C: nop

    after_1:
L_802DD1A0:
    // 0x802DD1A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802DD1A4:
    // 0x802DD1A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802DD1A8: jr          $ra
    // 0x802DD1AC: nop

    return;
    // 0x802DD1AC: nop

;}
RECOMP_FUNC void D_802F05D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802F0658: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802F065C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802F0660: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x802F0664: jr          $ra
    // 0x802F0668: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    return;
    // 0x802F0668: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
;}
RECOMP_FUNC void D_802BC3C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802BC448: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x802BC44C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802BC450: jal         0x802EE050
    // 0x802BC454: sw          $a0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r4;
    static_3_802EE050(rdram, ctx);
        goto after_0;
    // 0x802BC454: sw          $a0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r4;
    after_0:
    // 0x802BC458: jal         0x8022331C
    // 0x802BC45C: nop

    static_3_8022331C(rdram, ctx);
        goto after_1;
    // 0x802BC45C: nop

    after_1:
    // 0x802BC460: jal         0x8022970C
    // 0x802BC464: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    func_8022970C(rdram, ctx);
        goto after_2;
    // 0x802BC464: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_2:
    // 0x802BC468: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x802BC46C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802BC470: lui         $at, 0x4360
    ctx->r1 = S32(0X4360 << 16);
    // 0x802BC474: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802BC478: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802BC47C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x802BC480: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x802BC484: lui         $a2, 0x4398
    ctx->r6 = S32(0X4398 << 16);
    // 0x802BC488: jal         0x8022A848
    // 0x802BC48C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    static_3_8022A848(rdram, ctx);
        goto after_3;
    // 0x802BC48C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x802BC490: jal         0x80221B2C
    // 0x802BC494: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    static_3_80221B2C(rdram, ctx);
        goto after_4;
    // 0x802BC494: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_4:
    // 0x802BC498: jal         0x8022970C
    // 0x802BC49C: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    func_8022970C(rdram, ctx);
        goto after_5;
    // 0x802BC49C: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_5:
    // 0x802BC4A0: jal         0x8022149C
    // 0x802BC4A4: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    static_3_8022149C(rdram, ctx);
        goto after_6;
    // 0x802BC4A4: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_6:
    // 0x802BC4A8: jal         0x802233EC
    // 0x802BC4AC: lui         $a0, 0x2
    ctx->r4 = S32(0X2 << 16);
    static_3_802233EC(rdram, ctx);
        goto after_7;
    // 0x802BC4AC: lui         $a0, 0x2
    ctx->r4 = S32(0X2 << 16);
    after_7:
    // 0x802BC4B0: jal         0x8021F4E4
    // 0x802BC4B4: nop

    static_3_8021F4E4(rdram, ctx);
        goto after_8;
    // 0x802BC4B4: nop

    after_8:
    // 0x802BC4B8: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x802BC4BC: addiu       $t7, $zero, 0xCA
    ctx->r15 = ADD32(0, 0XCA);
    // 0x802BC4C0: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x802BC4C4: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x802BC4C8: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x802BC4CC: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x802BC4D0: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x802BC4D4: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x802BC4D8: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x802BC4DC: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    // 0x802BC4E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802BC4E4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802BC4E8: jal         0x8021F35C
    // 0x802BC4EC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_9;
    // 0x802BC4EC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_9:
    // 0x802BC4F0: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x802BC4F4: addiu       $t1, $zero, 0xCA
    ctx->r9 = ADD32(0, 0XCA);
    // 0x802BC4F8: addiu       $t2, $zero, 0x7
    ctx->r10 = ADD32(0, 0X7);
    // 0x802BC4FC: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x802BC500: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x802BC504: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x802BC508: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x802BC50C: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x802BC510: addiu       $a0, $zero, 0x124
    ctx->r4 = ADD32(0, 0X124);
    // 0x802BC514: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    // 0x802BC518: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802BC51C: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x802BC520: jal         0x8021F35C
    // 0x802BC524: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_10;
    // 0x802BC524: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_10:
    // 0x802BC528: addiu       $t4, $zero, 0x1E0
    ctx->r12 = ADD32(0, 0X1E0);
    // 0x802BC52C: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x802BC530: addiu       $t6, $zero, 0xCA
    ctx->r14 = ADD32(0, 0XCA);
    // 0x802BC534: addiu       $t7, $zero, 0x7
    ctx->r15 = ADD32(0, 0X7);
    // 0x802BC538: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x802BC53C: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x802BC540: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x802BC544: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x802BC548: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x802BC54C: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x802BC550: addiu       $a0, $zero, 0x124
    ctx->r4 = ADD32(0, 0X124);
    // 0x802BC554: addiu       $a1, $zero, 0xD7
    ctx->r5 = ADD32(0, 0XD7);
    // 0x802BC558: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802BC55C: jal         0x8021F35C
    // 0x802BC560: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    static_3_8021F35C(rdram, ctx);
        goto after_11;
    // 0x802BC560: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_11:
    // 0x802BC564: addiu       $t9, $zero, 0x1E0
    ctx->r25 = ADD32(0, 0X1E0);
    // 0x802BC568: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x802BC56C: addiu       $t1, $zero, 0xCA
    ctx->r9 = ADD32(0, 0XCA);
    // 0x802BC570: addiu       $t2, $zero, 0x7
    ctx->r10 = ADD32(0, 0X7);
    // 0x802BC574: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x802BC578: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x802BC57C: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x802BC580: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x802BC584: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x802BC588: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x802BC58C: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x802BC590: addiu       $a1, $zero, 0xD7
    ctx->r5 = ADD32(0, 0XD7);
    // 0x802BC594: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802BC598: jal         0x8021F35C
    // 0x802BC59C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_8021F35C(rdram, ctx);
        goto after_12;
    // 0x802BC59C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_12:
    // 0x802BC5A0: jal         0x8021FCD0
    // 0x802BC5A4: nop

    static_3_8021FCD0(rdram, ctx);
        goto after_13;
    // 0x802BC5A4: nop

    after_13:
    // 0x802BC5A8: jal         0x8021F4E4
    // 0x802BC5AC: nop

    static_3_8021F4E4(rdram, ctx);
        goto after_14;
    // 0x802BC5AC: nop

    after_14:
    // 0x802BC5B0: addiu       $t4, $zero, 0xA
    ctx->r12 = ADD32(0, 0XA);
    // 0x802BC5B4: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x802BC5B8: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x802BC5BC: addiu       $t7, $zero, 0x96
    ctx->r15 = ADD32(0, 0X96);
    // 0x802BC5C0: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x802BC5C4: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x802BC5C8: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x802BC5CC: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x802BC5D0: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    // 0x802BC5D4: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    // 0x802BC5D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802BC5DC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802BC5E0: jal         0x8021F35C
    // 0x802BC5E4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_15;
    // 0x802BC5E4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_15:
    // 0x802BC5E8: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x802BC5EC: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x802BC5F0: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
    // 0x802BC5F4: addiu       $t1, $zero, 0x96
    ctx->r9 = ADD32(0, 0X96);
    // 0x802BC5F8: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x802BC5FC: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x802BC600: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x802BC604: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x802BC608: addiu       $a0, $zero, 0x127
    ctx->r4 = ADD32(0, 0X127);
    // 0x802BC60C: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    // 0x802BC610: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802BC614: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802BC618: jal         0x8021F35C
    // 0x802BC61C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_16;
    // 0x802BC61C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_16:
    // 0x802BC620: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x802BC624: addiu       $t3, $zero, 0xA
    ctx->r11 = ADD32(0, 0XA);
    // 0x802BC628: addiu       $t4, $zero, 0xA
    ctx->r12 = ADD32(0, 0XA);
    // 0x802BC62C: addiu       $t5, $zero, 0x96
    ctx->r13 = ADD32(0, 0X96);
    // 0x802BC630: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x802BC634: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x802BC638: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x802BC63C: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x802BC640: addiu       $a0, $zero, 0x127
    ctx->r4 = ADD32(0, 0X127);
    // 0x802BC644: addiu       $a1, $zero, 0x92
    ctx->r5 = ADD32(0, 0X92);
    // 0x802BC648: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802BC64C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802BC650: jal         0x8021F35C
    // 0x802BC654: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_17;
    // 0x802BC654: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_17:
    // 0x802BC658: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x802BC65C: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x802BC660: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x802BC664: addiu       $t9, $zero, 0x96
    ctx->r25 = ADD32(0, 0X96);
    // 0x802BC668: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x802BC66C: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x802BC670: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x802BC674: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x802BC678: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    // 0x802BC67C: addiu       $a1, $zero, 0x92
    ctx->r5 = ADD32(0, 0X92);
    // 0x802BC680: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802BC684: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802BC688: jal         0x8021F35C
    // 0x802BC68C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_18;
    // 0x802BC68C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_18:
    // 0x802BC690: jal         0x8021FCD0
    // 0x802BC694: nop

    static_3_8021FCD0(rdram, ctx);
        goto after_19;
    // 0x802BC694: nop

    after_19:
    // 0x802BC698: jal         0x802230E4
    // 0x802BC69C: nop

    static_3_802230E4(rdram, ctx);
        goto after_20;
    // 0x802BC69C: nop

    after_20:
    // 0x802BC6A0: jal         0x8022337C
    // 0x802BC6A4: nop

    static_3_8022337C(rdram, ctx);
        goto after_21;
    // 0x802BC6A4: nop

    after_21:
    // 0x802BC6A8: jal         0x8021E66C
    // 0x802BC6AC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_8021E66C(rdram, ctx);
        goto after_22;
    // 0x802BC6AC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_22:
    // 0x802BC6B0: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x802BC6B4: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x802BC6B8: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x802BC6BC: jal         0x8021E708
    // 0x802BC6C0: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_23;
    // 0x802BC6C0: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_23:
    // 0x802BC6C4: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802BC6C8: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802BC6CC: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    // 0x802BC6D0: jal         0x8021E87C
    // 0x802BC6D4: addiu       $a1, $zero, 0x84
    ctx->r5 = ADD32(0, 0X84);
    static_3_8021E87C(rdram, ctx);
        goto after_24;
    // 0x802BC6D4: addiu       $a1, $zero, 0x84
    ctx->r5 = ADD32(0, 0X84);
    after_24:
    // 0x802BC6D8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802BC6DC: ldc1        $f12, 0x0($at)
    CHECK_FR(ctx, 12);
    ctx->f12.u64 = LD(ctx->r1, 0X0);
    // 0x802BC6E0: jal         0x8021E6EC
    // 0x802BC6E4: mov.d       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.d = ctx->f12.d;
    func_8021E6EC(rdram, ctx);
        goto after_25;
    // 0x802BC6E4: mov.d       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.d = ctx->f12.d;
    after_25:
    // 0x802BC6E8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802BC6EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802BC6F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802BC6F4: jal         0x8021E708
    // 0x802BC6F8: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_26;
    // 0x802BC6F8: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_26:
    // 0x802BC6FC: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802BC700: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802BC704: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    // 0x802BC708: jal         0x8021E87C
    // 0x802BC70C: addiu       $a1, $zero, 0xCC
    ctx->r5 = ADD32(0, 0XCC);
    static_3_8021E87C(rdram, ctx);
        goto after_27;
    // 0x802BC70C: addiu       $a1, $zero, 0xCC
    ctx->r5 = ADD32(0, 0XCC);
    after_27:
    // 0x802BC710: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802BC714: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802BC718: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    // 0x802BC71C: jal         0x8021E87C
    // 0x802BC720: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    static_3_8021E87C(rdram, ctx);
        goto after_28;
    // 0x802BC720: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    after_28:
    // 0x802BC724: jal         0x8021EC9C
    // 0x802BC728: nop

    static_3_8021EC9C(rdram, ctx);
        goto after_29;
    // 0x802BC728: nop

    after_29:
    // 0x802BC72C: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802BC730: sb          $zero, 0x73($sp)
    MEM_B(0X73, ctx->r29) = 0;
    // 0x802BC734: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802BC738: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    // 0x802BC73C: jal         0x8022B460
    // 0x802BC740: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8022B460(rdram, ctx);
        goto after_30;
    // 0x802BC740: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_30:
    // 0x802BC744: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x802BC748: lbu         $t0, 0x0($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X0);
    // 0x802BC74C: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x802BC750: blezl       $t0, L_802BC82C
    if (SIGNED(ctx->r8) <= 0) {
        // 0x802BC754: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_802BC82C;
    }
    goto skip_0;
    // 0x802BC754: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x802BC758: mtc1        $at, $f13
    ctx->f_odd[(13 - 1) * 2] = ctx->r1;
    // 0x802BC75C: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x802BC760: jal         0x8021E6EC
    // 0x802BC764: mov.d       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.d = ctx->f12.d;
    func_8021E6EC(rdram, ctx);
        goto after_31;
    // 0x802BC764: mov.d       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.d = ctx->f12.d;
    after_31:
    // 0x802BC768: jal         0x8021E66C
    // 0x802BC76C: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    static_3_8021E66C(rdram, ctx);
        goto after_32;
    // 0x802BC76C: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_32:
    // 0x802BC770: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x802BC774: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x802BC778: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x802BC77C: jal         0x8021E708
    // 0x802BC780: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_33;
    // 0x802BC780: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_33:
    // 0x802BC784: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802BC788: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802BC78C: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802BC790: lw          $a2, 0x0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X0);
    // 0x802BC794: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802BC798: jal         0x8023072C
    // 0x802BC79C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    static_3_8023072C(rdram, ctx);
        goto after_34;
    // 0x802BC79C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    after_34:
    // 0x802BC7A0: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802BC7A4: lw          $a2, 0x0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X0);
    // 0x802BC7A8: addiu       $a0, $zero, 0xD5
    ctx->r4 = ADD32(0, 0XD5);
    // 0x802BC7AC: jal         0x8021E87C
    // 0x802BC7B0: addiu       $a1, $zero, 0x70
    ctx->r5 = ADD32(0, 0X70);
    static_3_8021E87C(rdram, ctx);
        goto after_35;
    // 0x802BC7B0: addiu       $a1, $zero, 0x70
    ctx->r5 = ADD32(0, 0X70);
    after_35:
    // 0x802BC7B4: jal         0x8021E66C
    // 0x802BC7B8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_8021E66C(rdram, ctx);
        goto after_36;
    // 0x802BC7B8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_36:
    // 0x802BC7BC: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x802BC7C0: addiu       $a1, $zero, 0xCA
    ctx->r5 = ADD32(0, 0XCA);
    // 0x802BC7C4: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x802BC7C8: jal         0x8021E708
    // 0x802BC7CC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_37;
    // 0x802BC7CC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_37:
    // 0x802BC7D0: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x802BC7D4: addiu       $a1, $zero, 0xCA
    ctx->r5 = ADD32(0, 0XCA);
    // 0x802BC7D8: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x802BC7DC: jal         0x8021E708
    // 0x802BC7E0: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_38;
    // 0x802BC7E0: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_38:
    // 0x802BC7E4: addiu       $a0, $zero, 0xF0
    ctx->r4 = ADD32(0, 0XF0);
    // 0x802BC7E8: addiu       $a1, $zero, 0x81
    ctx->r5 = ADD32(0, 0X81);
    // 0x802BC7EC: jal         0x8021E87C
    // 0x802BC7F0: addiu       $a2, $sp, 0x70
    ctx->r6 = ADD32(ctx->r29, 0X70);
    static_3_8021E87C(rdram, ctx);
        goto after_39;
    // 0x802BC7F0: addiu       $a2, $sp, 0x70
    ctx->r6 = ADD32(ctx->r29, 0X70);
    after_39:
    // 0x802BC7F4: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x802BC7F8: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x802BC7FC: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x802BC800: jal         0x8021E708
    // 0x802BC804: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_40;
    // 0x802BC804: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_40:
    // 0x802BC808: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x802BC80C: addiu       $a1, $zero, 0x52
    ctx->r5 = ADD32(0, 0X52);
    // 0x802BC810: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    // 0x802BC814: jal         0x802F14C4
    // 0x802BC818: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_802F14C4(rdram, ctx);
        goto after_41;
    // 0x802BC818: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_41:
    // 0x802BC81C: lw          $t1, 0x78($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X78);
    // 0x802BC820: jal         0x8023413C
    // 0x802BC824: lw          $a0, 0x50($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X50);
    static_3_8023413C(rdram, ctx);
        goto after_42;
    // 0x802BC824: lw          $a0, 0x50($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X50);
    after_42:
    // 0x802BC828: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_802BC82C:
    // 0x802BC82C: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x802BC830: jr          $ra
    // 0x802BC834: nop

    return;
    // 0x802BC834: nop

;}
RECOMP_FUNC void D_802E9C18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E9C98: jr          $ra
    // 0x802E9C9C: lwc1        $f0, 0x6C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X6C);
    return;
    // 0x802E9C9C: lwc1        $f0, 0x6C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X6C);
;}
RECOMP_FUNC void D_802EA628(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EA6A8: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x802EA6AC: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x802EA6B0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802EA6B4: beq         $t7, $at, L_802EA6DC
    if (ctx->r15 == ctx->r1) {
        // 0x802EA6B8: sw          $a1, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r5;
            goto L_802EA6DC;
    }
    // 0x802EA6B8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802EA6BC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802EA6C0: beq         $t7, $at, L_802EA6E4
    if (ctx->r15 == ctx->r1) {
        // 0x802EA6C4: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_802EA6E4;
    }
    // 0x802EA6C4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802EA6C8: beq         $t7, $at, L_802EA6EC
    if (ctx->r15 == ctx->r1) {
        // 0x802EA6CC: nop
    
            goto L_802EA6EC;
    }
    // 0x802EA6CC: nop

    // 0x802EA6D0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802EA6D4: b           L_802EA6F4
    // 0x802EA6D8: nop

        goto L_802EA6F4;
    // 0x802EA6D8: nop

L_802EA6DC:
    // 0x802EA6DC: jr          $ra
    // 0x802EA6E0: lwc1        $f0, 0x5C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X5C);
    return;
    // 0x802EA6E0: lwc1        $f0, 0x5C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X5C);
L_802EA6E4:
    // 0x802EA6E4: jr          $ra
    // 0x802EA6E8: lwc1        $f0, 0x60($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X60);
    return;
    // 0x802EA6E8: lwc1        $f0, 0x60($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X60);
L_802EA6EC:
    // 0x802EA6EC: jr          $ra
    // 0x802EA6F0: lwc1        $f0, 0x64($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X64);
    return;
    // 0x802EA6F0: lwc1        $f0, 0x64($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X64);
L_802EA6F4:
    // 0x802EA6F4: jr          $ra
    // 0x802EA6F8: nop

    return;
    // 0x802EA6F8: nop

;}
RECOMP_FUNC void D_802EF2B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EF330: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802EF334: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802EF338: beq         $a0, $zero, L_802EF368
    if (ctx->r4 == 0) {
        // 0x802EF33C: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_802EF368;
    }
    // 0x802EF33C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802EF340: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802EF344: jal         0x8031F6B0
    // 0x802EF348: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_8031F6B0(rdram, ctx);
        goto after_0;
    // 0x802EF348: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802EF34C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x802EF350: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802EF354: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x802EF358: beql        $t7, $zero, L_802EF36C
    if (ctx->r15 == 0) {
        // 0x802EF35C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802EF36C;
    }
    goto skip_0;
    // 0x802EF35C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802EF360: jal         0x802C681C
    // 0x802EF364: nop

    static_3_802C681C(rdram, ctx);
        goto after_1;
    // 0x802EF364: nop

    after_1:
L_802EF368:
    // 0x802EF368: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802EF36C:
    // 0x802EF36C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802EF370: jr          $ra
    // 0x802EF374: nop

    return;
    // 0x802EF374: nop

;}
RECOMP_FUNC void D_802EF070(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EF0F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802EF0F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802EF0F8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802EF0FC: lw          $v0, 0xB0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XB0);
    // 0x802EF100: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802EF104: lh          $t6, 0x78($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X78);
    // 0x802EF108: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x802EF10C: lw          $t9, 0x7C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X7C);
    // 0x802EF110: addu        $a0, $t6, $a0
    ctx->r4 = ADD32(ctx->r14, ctx->r4);
    // 0x802EF114: jalr        $t9
    // 0x802EF118: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x802EF118: nop

    after_0:
    // 0x802EF11C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802EF120: jal         0x8031AD14
    // 0x802EF124: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    static_3_8031AD14(rdram, ctx);
        goto after_1;
    // 0x802EF124: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x802EF128: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802EF12C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802EF130: jr          $ra
    // 0x802EF134: nop

    return;
    // 0x802EF134: nop

;}
RECOMP_FUNC void D_80292D58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80292DD8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80292DDC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80292DE0: lw          $t6, 0xE8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XE8);
    // 0x80292DE4: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80292DE8: blezl       $t6, L_80292E3C
    if (SIGNED(ctx->r14) <= 0) {
        // 0x80292DEC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80292E3C;
    }
    goto skip_0;
    // 0x80292DEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80292DF0: lwc1        $f4, 0xF0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XF0);
    // 0x80292DF4: lwc1        $f6, 0x168($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X168);
    // 0x80292DF8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80292DFC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80292E00: c.le.s      $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f8.fl <= ctx->f12.fl;
    // 0x80292E04: nop

    // 0x80292E08: bc1fl       L_80292E3C
    if (!c1cs) {
        // 0x80292E0C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80292E3C;
    }
    goto skip_1;
    // 0x80292E0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x80292E10: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x80292E14: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80292E18: jal         0x802C2A2C
    // 0x80292E1C: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    static_3_802C2A2C(rdram, ctx);
        goto after_0;
    // 0x80292E1C: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x80292E20: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80292E24: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80292E28: lw          $t7, 0xE8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XE8);
    // 0x80292E2C: swc1        $f12, 0xF0($a0)
    MEM_W(0XF0, ctx->r4) = ctx->f12.u32l;
    // 0x80292E30: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x80292E34: sw          $t8, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->r24;
    // 0x80292E38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80292E3C:
    // 0x80292E3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80292E40: jr          $ra
    // 0x80292E44: nop

    return;
    // 0x80292E44: nop

;}
RECOMP_FUNC void D_8022FEF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022FEF0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8022FEF4: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x8022FEF8: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x8022FEFC: beq         $v0, $zero, L_8022FF24
    if (ctx->r2 == 0) {
        // 0x8022FF00: nop
    
            goto L_8022FF24;
    }
    // 0x8022FF00: nop

    // 0x8022FF04: beq         $t6, $v0, L_8022FF24
    if (ctx->r14 == ctx->r2) {
        // 0x8022FF08: or          $v1, $t6, $zero
        ctx->r3 = ctx->r14 | 0;
            goto L_8022FF24;
    }
    // 0x8022FF08: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x8022FF0C: lbu         $v0, 0x1($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X1);
L_8022FF10:
    // 0x8022FF10: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8022FF14: beq         $v0, $zero, L_8022FF24
    if (ctx->r2 == 0) {
        // 0x8022FF18: nop
    
            goto L_8022FF24;
    }
    // 0x8022FF18: nop

    // 0x8022FF1C: bnel        $v1, $v0, L_8022FF10
    if (ctx->r3 != ctx->r2) {
        // 0x8022FF20: lbu         $v0, 0x1($a0)
        ctx->r2 = MEM_BU(ctx->r4, 0X1);
            goto L_8022FF10;
    }
    goto skip_0;
    // 0x8022FF20: lbu         $v0, 0x1($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X1);
    skip_0:
L_8022FF24:
    // 0x8022FF24: beql        $v0, $zero, L_8022FF38
    if (ctx->r2 == 0) {
        // 0x8022FF28: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8022FF38;
    }
    goto skip_1;
    // 0x8022FF28: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_1:
    // 0x8022FF2C: jr          $ra
    // 0x8022FF30: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    return;
    // 0x8022FF30: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8022FF34: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8022FF38:
    // 0x8022FF38: jr          $ra
    // 0x8022FF3C: nop

    return;
    // 0x8022FF3C: nop

;}
