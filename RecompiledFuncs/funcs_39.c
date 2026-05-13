#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void D_80234C80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80234C80: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80234C84: lwc1        $f6, 0x0($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X0);
    // 0x80234C88: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80234C8C: swc1        $f8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f8.u32l;
    // 0x80234C90: lwc1        $f16, 0x4($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X4);
    // 0x80234C94: lwc1        $f10, 0x4($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X4);
    // 0x80234C98: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80234C9C: swc1        $f18, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f18.u32l;
    // 0x80234CA0: lwc1        $f6, 0x8($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X8);
    // 0x80234CA4: lwc1        $f4, 0x8($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80234CA8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80234CAC: jr          $ra
    // 0x80234CB0: swc1        $f8, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f8.u32l;
    return;
    // 0x80234CB0: swc1        $f8, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f8.u32l;
;}
RECOMP_FUNC void D_802D83F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D8474: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802D8478: jr          $ra
    // 0x802D847C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x802D847C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void D_802F28BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802F293C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802F2940: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802F2944: jr          $ra
    // 0x802F2948: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x802F2948: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void D_802D76C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D7740: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802D7744: jr          $ra
    // 0x802D7748: swc1        $f12, 0x37C($a0)
    MEM_W(0X37C, ctx->r4) = ctx->f12.u32l;
    return;
    // 0x802D7748: swc1        $f12, 0x37C($a0)
    MEM_W(0X37C, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void D_802B66BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B673C: jr          $ra
    // 0x802B6740: lwc1        $f0, 0x70($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X70);
    return;
    // 0x802B6740: lwc1        $f0, 0x70($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X70);
;}
RECOMP_FUNC void D_802EA6D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EA750: jr          $ra
    // 0x802EA754: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x802EA754: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void D_802DD600(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802DD680: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802DD684: jr          $ra
    // 0x802DD688: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x802DD688: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void D_802ED290(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802ED310: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x802ED314: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802ED318: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x802ED31C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802ED320: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x802ED324: addiu       $t6, $zero, 0x16
    ctx->r14 = ADD32(0, 0X16);
    // 0x802ED328: addiu       $t7, $zero, 0x18D
    ctx->r15 = ADD32(0, 0X18D);
    // 0x802ED32C: addiu       $t8, $zero, 0xC
    ctx->r24 = ADD32(0, 0XC);
    // 0x802ED330: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802ED334: sh          $t6, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r14;
    // 0x802ED338: sh          $t9, 0xA4($a0)
    MEM_H(0XA4, ctx->r4) = ctx->r25;
    // 0x802ED33C: sh          $t8, 0xA6($a0)
    MEM_H(0XA6, ctx->r4) = ctx->r24;
    // 0x802ED340: sh          $t7, 0x9C($a0)
    MEM_H(0X9C, ctx->r4) = ctx->r15;
    // 0x802ED344: sh          $v0, 0x98($a0)
    MEM_H(0X98, ctx->r4) = ctx->r2;
    // 0x802ED348: sh          $v0, 0x9A($a0)
    MEM_H(0X9A, ctx->r4) = ctx->r2;
    // 0x802ED34C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802ED350: swc1        $f0, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f0.u32l;
    // 0x802ED354: swc1        $f0, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f0.u32l;
    // 0x802ED358: swc1        $f0, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f0.u32l;
    // 0x802ED35C: swc1        $f4, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->f4.u32l;
    // 0x802ED360: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802ED364: jr          $ra
    // 0x802ED368: swc1        $f6, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f6.u32l;
    return;
    // 0x802ED368: swc1        $f6, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f6.u32l;
;}
RECOMP_FUNC void D_802E9BF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E9C78: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802E9C7C: jr          $ra
    // 0x802E9C80: sb          $a1, 0x199($a0)
    MEM_B(0X199, ctx->r4) = ctx->r5;
    return;
    // 0x802E9C80: sb          $a1, 0x199($a0)
    MEM_B(0X199, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void D_8028B71C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028B79C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8028B7A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8028B7A4: beq         $a0, $zero, L_8028B7D0
    if (ctx->r4 == 0) {
        // 0x8028B7A8: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_8028B7D0;
    }
    // 0x8028B7A8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8028B7AC: jal         0x802BCB28
    // 0x8028B7B0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_802BCB28(rdram, ctx);
        goto after_0;
    // 0x8028B7B0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8028B7B4: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8028B7B8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8028B7BC: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x8028B7C0: beql        $t7, $zero, L_8028B7D4
    if (ctx->r15 == 0) {
        // 0x8028B7C4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8028B7D4;
    }
    goto skip_0;
    // 0x8028B7C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8028B7C8: jal         0x802C681C
    // 0x8028B7CC: nop

    static_3_802C681C(rdram, ctx);
        goto after_1;
    // 0x8028B7CC: nop

    after_1:
L_8028B7D0:
    // 0x8028B7D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8028B7D4:
    // 0x8028B7D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8028B7D8: jr          $ra
    // 0x8028B7DC: nop

    return;
    // 0x8028B7DC: nop

;}
RECOMP_FUNC void D_802D7FCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D804C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802D8050: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802D8054: jr          $ra
    // 0x802D8058: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x802D8058: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void D_802A1E24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A1EA4: jr          $ra
    // 0x802A1EA8: lwc1        $f0, 0x64($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X64);
    return;
    // 0x802A1EA8: lwc1        $f0, 0x64($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X64);
;}
RECOMP_FUNC void D_80299B0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80299B8C: addiu       $t1, $zero, 0x8
    ctx->r9 = ADD32(0, 0X8);
    // 0x80299B90: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x80299B94: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x80299B98: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x80299B9C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80299BA0: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80299BA4: addiu       $t8, $t8, 0x0
    ctx->r24 = ADD32(ctx->r24, 0X0);
    // 0x80299BA8: addiu       $t9, $t9, 0x0
    ctx->r25 = ADD32(ctx->r25, 0X0);
    // 0x80299BAC: addiu       $t0, $t0, 0x0
    ctx->r8 = ADD32(ctx->r8, 0X0);
    // 0x80299BB0: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x80299BB4: sb          $t6, 0x18($a0)
    MEM_B(0X18, ctx->r4) = ctx->r14;
    // 0x80299BB8: sb          $t1, 0x19($a0)
    MEM_B(0X19, ctx->r4) = ctx->r9;
    // 0x80299BBC: sb          $zero, 0x1B($a0)
    MEM_B(0X1B, ctx->r4) = 0;
    // 0x80299BC0: sw          $t8, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r24;
    // 0x80299BC4: sw          $t9, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r25;
    // 0x80299BC8: sw          $t0, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r8;
    // 0x80299BCC: sb          $zero, 0x30($a0)
    MEM_B(0X30, ctx->r4) = 0;
    // 0x80299BD0: sb          $t2, 0x32($a0)
    MEM_B(0X32, ctx->r4) = ctx->r10;
    // 0x80299BD4: sb          $v1, 0x34($a0)
    MEM_B(0X34, ctx->r4) = ctx->r3;
    // 0x80299BD8: sb          $zero, 0x0($t9)
    MEM_B(0X0, ctx->r25) = 0;
    // 0x80299BDC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80299BE0: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
L_80299BE4:
    // 0x80299BE4: lw          $t4, 0x28($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X28);
    // 0x80299BE8: addu        $t5, $t4, $v0
    ctx->r13 = ADD32(ctx->r12, ctx->r2);
    // 0x80299BEC: sb          $zero, 0x0($t5)
    MEM_B(0X0, ctx->r13) = 0;
    // 0x80299BF0: lw          $t6, 0x28($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X28);
    // 0x80299BF4: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x80299BF8: sb          $zero, 0x1($t7)
    MEM_B(0X1, ctx->r15) = 0;
    // 0x80299BFC: lw          $t8, 0x28($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X28);
    // 0x80299C00: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x80299C04: sb          $zero, 0x2($t9)
    MEM_B(0X2, ctx->r25) = 0;
    // 0x80299C08: lw          $t0, 0x28($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X28);
    // 0x80299C0C: addu        $t1, $t0, $v0
    ctx->r9 = ADD32(ctx->r8, ctx->r2);
    // 0x80299C10: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80299C14: bne         $v0, $a1, L_80299BE4
    if (ctx->r2 != ctx->r5) {
        // 0x80299C18: sb          $zero, 0x3($t1)
        MEM_B(0X3, ctx->r9) = 0;
            goto L_80299BE4;
    }
    // 0x80299C18: sb          $zero, 0x3($t1)
    MEM_B(0X3, ctx->r9) = 0;
    // 0x80299C1C: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x80299C20: addiu       $v0, $v0, 0x0
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x80299C24: lbu         $t2, 0x4A($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X4A);
    // 0x80299C28: lw          $t4, 0x28($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X28);
    // 0x80299C2C: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x80299C30: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x80299C34: sb          $t3, 0x0($t4)
    MEM_B(0X0, ctx->r12) = ctx->r11;
    // 0x80299C38: lw          $t6, 0x28($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X28);
    // 0x80299C3C: lbu         $t5, 0x4B($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X4B);
    // 0x80299C40: sb          $t5, 0x1($t6)
    MEM_B(0X1, ctx->r14) = ctx->r13;
    // 0x80299C44: lw          $t8, 0x28($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X28);
    // 0x80299C48: lbu         $t7, 0x4E($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X4E);
    // 0x80299C4C: sb          $t7, 0x2($t8)
    MEM_B(0X2, ctx->r24) = ctx->r15;
    // 0x80299C50: lw          $t0, 0x28($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X28);
    // 0x80299C54: lbu         $t9, 0x4F($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X4F);
    // 0x80299C58: sb          $t9, 0x3($t0)
    MEM_B(0X3, ctx->r8) = ctx->r25;
    // 0x80299C5C: lw          $t2, 0x28($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X28);
    // 0x80299C60: lw          $t1, 0x0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X0);
    // 0x80299C64: sb          $t1, 0x4($t2)
    MEM_B(0X4, ctx->r10) = ctx->r9;
    // 0x80299C68: jr          $ra
    // 0x80299C6C: sb          $v1, 0x89($a0)
    MEM_B(0X89, ctx->r4) = ctx->r3;
    return;
    // 0x80299C6C: sb          $v1, 0x89($a0)
    MEM_B(0X89, ctx->r4) = ctx->r3;
;}
RECOMP_FUNC void D_802D846C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D84EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802D84F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802D84F4: beq         $a0, $zero, L_802D8524
    if (ctx->r4 == 0) {
        // 0x802D84F8: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_802D8524;
    }
    // 0x802D84F8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802D84FC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802D8500: jal         0x8031CE44
    // 0x802D8504: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_8031CE44(rdram, ctx);
        goto after_0;
    // 0x802D8504: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802D8508: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x802D850C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802D8510: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x802D8514: beql        $t7, $zero, L_802D8528
    if (ctx->r15 == 0) {
        // 0x802D8518: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802D8528;
    }
    goto skip_0;
    // 0x802D8518: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802D851C: jal         0x802C681C
    // 0x802D8520: nop

    static_3_802C681C(rdram, ctx);
        goto after_1;
    // 0x802D8520: nop

    after_1:
L_802D8524:
    // 0x802D8524: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802D8528:
    // 0x802D8528: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802D852C: jr          $ra
    // 0x802D8530: nop

    return;
    // 0x802D8530: nop

;}
RECOMP_FUNC void D_8029FEF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029FF70: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8029FF74: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8029FF78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8029FF7C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8029FF80: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x8029FF84: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x8029FF88: jal         0x802AA2E8
    // 0x8029FF8C: lui         $a3, 0x4040
    ctx->r7 = S32(0X4040 << 16);
    static_3_802AA2E8(rdram, ctx);
        goto after_0;
    // 0x8029FF8C: lui         $a3, 0x4040
    ctx->r7 = S32(0X4040 << 16);
    after_0:
    // 0x8029FF90: beq         $v0, $zero, L_8029FFBC
    if (ctx->r2 == 0) {
        // 0x8029FF94: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8029FFBC;
    }
    // 0x8029FF94: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8029FF98: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    // 0x8029FF9C: jal         0x80287E78
    // 0x8029FFA0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    static_3_80287E78(rdram, ctx);
        goto after_1;
    // 0x8029FFA0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x8029FFA4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8029FFA8: jal         0x80287DFC
    // 0x8029FFAC: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    static_3_80287DFC(rdram, ctx);
        goto after_2;
    // 0x8029FFAC: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    after_2:
    // 0x8029FFB0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8029FFB4: jal         0x80287D40
    // 0x8029FFB8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    static_3_80287D40(rdram, ctx);
        goto after_3;
    // 0x8029FFB8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_3:
L_8029FFBC:
    // 0x8029FFBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8029FFC0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8029FFC4: jr          $ra
    // 0x8029FFC8: nop

    return;
    // 0x8029FFC8: nop

;}
RECOMP_FUNC void D_802A8EF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A8F70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A8F74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A8F78: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802A8F7C: beq         $a0, $zero, L_802A8FC8
    if (ctx->r4 == 0) {
        // 0x802A8F80: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_802A8FC8;
    }
    // 0x802A8F80: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802A8F84: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802A8F88: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802A8F8C: sw          $t6, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r14;
    // 0x802A8F90: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x802A8F94: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    // 0x802A8F98: jal         0x8028D2B8
    // 0x802A8F9C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_8028D2B8(rdram, ctx);
        goto after_0;
    // 0x802A8F9C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x802A8FA0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802A8FA4: jal         0x803086D4
    // 0x802A8FA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_803086D4(rdram, ctx);
        goto after_1;
    // 0x802A8FA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x802A8FAC: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x802A8FB0: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x802A8FB4: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x802A8FB8: beql        $t8, $zero, L_802A8FCC
    if (ctx->r24 == 0) {
        // 0x802A8FBC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802A8FCC;
    }
    goto skip_0;
    // 0x802A8FBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802A8FC0: jal         0x802C681C
    // 0x802A8FC4: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    static_3_802C681C(rdram, ctx);
        goto after_2;
    // 0x802A8FC4: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_2:
L_802A8FC8:
    // 0x802A8FC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A8FCC:
    // 0x802A8FCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A8FD0: jr          $ra
    // 0x802A8FD4: nop

    return;
    // 0x802A8FD4: nop

;}
RECOMP_FUNC void D_80292850(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802928D0: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x802928D4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802928D8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802928DC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802928E0: sw          $a1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r5;
    // 0x802928E4: sw          $a2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r6;
    // 0x802928E8: jal         0x8022970C
    // 0x802928EC: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    func_8022970C(rdram, ctx);
        goto after_0;
    // 0x802928EC: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_0:
    // 0x802928F0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802928F4: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x802928F8: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    // 0x802928FC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80292900: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80292904: jal         0x8022A0D0
    // 0x80292908: nop

    static_3_8022A0D0(rdram, ctx);
        goto after_1;
    // 0x80292908: nop

    after_1:
    // 0x8029290C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80292910: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80292914: jal         0x802AB0E4
    // 0x80292918: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    static_3_802AB0E4(rdram, ctx);
        goto after_2;
    // 0x80292918: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_2:
    // 0x8029291C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80292920: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80292924: lui         $at, 0x3F40
    ctx->r1 = S32(0X3F40 << 16);
    // 0x80292928: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8029292C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80292930: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80292934: sw          $v0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r2;
    // 0x80292938: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8029293C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80292940: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x80292944: jal         0x802D7CEC
    // 0x80292948: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    static_3_802D7CEC(rdram, ctx);
        goto after_3;
    // 0x80292948: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x8029294C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80292950: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80292954: lui         $at, 0x3F40
    ctx->r1 = S32(0X3F40 << 16);
    // 0x80292958: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8029295C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80292960: lw          $a0, 0x74($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X74);
    // 0x80292964: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80292968: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8029296C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x80292970: jal         0x802D7CEC
    // 0x80292974: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    static_3_802D7CEC(rdram, ctx);
        goto after_4;
    // 0x80292974: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_4:
    // 0x80292978: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8029297C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80292980: lui         $at, 0x3F40
    ctx->r1 = S32(0X3F40 << 16);
    // 0x80292984: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80292988: lw          $a0, 0x74($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X74);
    // 0x8029298C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80292990: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80292994: lui         $a3, 0x3F00
    ctx->r7 = S32(0X3F00 << 16);
    // 0x80292998: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x8029299C: jal         0x802D7CEC
    // 0x802929A0: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    static_3_802D7CEC(rdram, ctx);
        goto after_5;
    // 0x802929A0: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_5:
    // 0x802929A4: lw          $t6, 0x8C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X8C);
    // 0x802929A8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x802929AC: lbu         $a3, 0x90($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X90);
    // 0x802929B0: addiu       $t7, $zero, 0xB
    ctx->r15 = ADD32(0, 0XB);
    // 0x802929B4: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x802929B8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802929BC: lui         $a2, 0x43FA
    ctx->r6 = S32(0X43FA << 16);
    // 0x802929C0: jal         0x802AA36C
    // 0x802929C4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    static_3_802AA36C(rdram, ctx);
        goto after_6;
    // 0x802929C4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_6:
    // 0x802929C8: lw          $t8, 0x18C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X18C);
    // 0x802929CC: lwc1        $f10, 0x7C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x802929D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802929D4: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x802929D8: sw          $t9, 0x18C($s0)
    MEM_W(0X18C, ctx->r16) = ctx->r25;
    // 0x802929DC: swc1        $f10, 0xF4($s0)
    MEM_W(0XF4, ctx->r16) = ctx->f10.u32l;
    // 0x802929E0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802929E4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802929E8: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x802929EC: jr          $ra
    // 0x802929F0: nop

    return;
    // 0x802929F0: nop

;}
RECOMP_FUNC void D_802E9BF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E9C70: jr          $ra
    // 0x802E9C74: lbu         $v0, 0x199($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X199);
    return;
    // 0x802E9C74: lbu         $v0, 0x199($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X199);
;}
RECOMP_FUNC void D_802A1E6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A1EEC: jr          $ra
    // 0x802A1EF0: lwc1        $f0, 0x90($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X90);
    return;
    // 0x802A1EF0: lwc1        $f0, 0x90($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X90);
;}
RECOMP_FUNC void D_8029BE28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029BEA8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8029BEAC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8029BEB0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8029BEB4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8029BEB8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8029BEBC: sb          $t6, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r14;
    // 0x8029BEC0: jal         0x802CBA18
    // 0x8029BEC4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802CBA18(rdram, ctx);
        goto after_0;
    // 0x8029BEC4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x8029BEC8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8029BECC: jal         0x80223FC4
    // 0x8029BED0: addiu       $a1, $zero, 0x1000
    ctx->r5 = ADD32(0, 0X1000);
    static_3_80223FC4(rdram, ctx);
        goto after_1;
    // 0x8029BED0: addiu       $a1, $zero, 0x1000
    ctx->r5 = ADD32(0, 0X1000);
    after_1:
    // 0x8029BED4: bne         $v0, $zero, L_8029BF0C
    if (ctx->r2 != 0) {
        // 0x8029BED8: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_8029BF0C;
    }
    // 0x8029BED8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8029BEDC: jal         0x80223FC4
    // 0x8029BEE0: ori         $a1, $zero, 0x8000
    ctx->r5 = 0 | 0X8000;
    static_3_80223FC4(rdram, ctx);
        goto after_2;
    // 0x8029BEE0: ori         $a1, $zero, 0x8000
    ctx->r5 = 0 | 0X8000;
    after_2:
    // 0x8029BEE4: bne         $v0, $zero, L_8029BF0C
    if (ctx->r2 != 0) {
        // 0x8029BEE8: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_8029BF0C;
    }
    // 0x8029BEE8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8029BEEC: jal         0x80223FC4
    // 0x8029BEF0: addiu       $a1, $zero, 0x1000
    ctx->r5 = ADD32(0, 0X1000);
    static_3_80223FC4(rdram, ctx);
        goto after_3;
    // 0x8029BEF0: addiu       $a1, $zero, 0x1000
    ctx->r5 = ADD32(0, 0X1000);
    after_3:
    // 0x8029BEF4: bne         $v0, $zero, L_8029BF0C
    if (ctx->r2 != 0) {
        // 0x8029BEF8: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_8029BF0C;
    }
    // 0x8029BEF8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8029BEFC: jal         0x80223FC4
    // 0x8029BF00: ori         $a1, $zero, 0x8000
    ctx->r5 = 0 | 0X8000;
    static_3_80223FC4(rdram, ctx);
        goto after_4;
    // 0x8029BF00: ori         $a1, $zero, 0x8000
    ctx->r5 = 0 | 0X8000;
    after_4:
    // 0x8029BF04: beq         $v0, $zero, L_8029BF74
    if (ctx->r2 == 0) {
        // 0x8029BF08: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_8029BF74;
    }
    // 0x8029BF08: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_8029BF0C:
    // 0x8029BF0C: lw          $t7, 0x28($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X28);
    // 0x8029BF10: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8029BF14: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x8029BF18: lbu         $v0, 0x0($t7)
    ctx->r2 = MEM_BU(ctx->r15, 0X0);
    // 0x8029BF1C: addiu       $t1, $zero, 0xC
    ctx->r9 = ADD32(0, 0XC);
    // 0x8029BF20: beq         $v0, $zero, L_8029BF44
    if (ctx->r2 == 0) {
        // 0x8029BF24: nop
    
            goto L_8029BF44;
    }
    // 0x8029BF24: nop

    // 0x8029BF28: beq         $v0, $at, L_8029BF4C
    if (ctx->r2 == ctx->r1) {
        // 0x8029BF2C: addiu       $t9, $zero, 0x3
        ctx->r25 = ADD32(0, 0X3);
            goto L_8029BF4C;
    }
    // 0x8029BF2C: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x8029BF30: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8029BF34: beq         $v0, $at, L_8029BF54
    if (ctx->r2 == ctx->r1) {
        // 0x8029BF38: addiu       $t0, $zero, 0x1
        ctx->r8 = ADD32(0, 0X1);
            goto L_8029BF54;
    }
    // 0x8029BF38: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8029BF3C: b           L_8029BF58
    // 0x8029BF40: nop

        goto L_8029BF58;
    // 0x8029BF40: nop

L_8029BF44:
    // 0x8029BF44: b           L_8029BF58
    // 0x8029BF48: sb          $t8, 0x85($s0)
    MEM_B(0X85, ctx->r16) = ctx->r24;
        goto L_8029BF58;
    // 0x8029BF48: sb          $t8, 0x85($s0)
    MEM_B(0X85, ctx->r16) = ctx->r24;
L_8029BF4C:
    // 0x8029BF4C: b           L_8029BF58
    // 0x8029BF50: sb          $t9, 0x85($s0)
    MEM_B(0X85, ctx->r16) = ctx->r25;
        goto L_8029BF58;
    // 0x8029BF50: sb          $t9, 0x85($s0)
    MEM_B(0X85, ctx->r16) = ctx->r25;
L_8029BF54:
    // 0x8029BF54: sb          $t0, 0x85($s0)
    MEM_B(0X85, ctx->r16) = ctx->r8;
L_8029BF58:
    // 0x8029BF58: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8029BF5C: sb          $t1, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r9;
    // 0x8029BF60: lbu         $t2, 0x85($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X85);
    // 0x8029BF64: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8029BF68: sb          $zero, 0x27($sp)
    MEM_B(0X27, ctx->r29) = 0;
    // 0x8029BF6C: b           L_8029BF94
    // 0x8029BF70: sb          $t2, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r10;
        goto L_8029BF94;
    // 0x8029BF70: sb          $t2, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r10;
L_8029BF74:
    // 0x8029BF74: jal         0x80223FC4
    // 0x8029BF78: addiu       $a1, $zero, 0x4000
    ctx->r5 = ADD32(0, 0X4000);
    static_3_80223FC4(rdram, ctx);
        goto after_5;
    // 0x8029BF78: addiu       $a1, $zero, 0x4000
    ctx->r5 = ADD32(0, 0X4000);
    after_5:
    // 0x8029BF7C: beql        $v0, $zero, L_8029BF98
    if (ctx->r2 == 0) {
        // 0x8029BF80: lbu         $t3, 0x27($sp)
        ctx->r11 = MEM_BU(ctx->r29, 0X27);
            goto L_8029BF98;
    }
    goto skip_0;
    // 0x8029BF80: lbu         $t3, 0x27($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X27);
    skip_0:
    // 0x8029BF84: jal         0x802B18BC
    // 0x8029BF88: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    static_3_802B18BC(rdram, ctx);
        goto after_6;
    // 0x8029BF88: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    after_6:
    // 0x8029BF8C: jal         0x802CA14C
    // 0x8029BF90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802CA14C(rdram, ctx);
        goto after_7;
    // 0x8029BF90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
L_8029BF94:
    // 0x8029BF94: lbu         $t3, 0x27($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X27);
L_8029BF98:
    // 0x8029BF98: bnel        $t3, $zero, L_8029BFBC
    if (ctx->r11 != 0) {
        // 0x8029BF9C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8029BFBC;
    }
    goto skip_1;
    // 0x8029BF9C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x8029BFA0: jal         0x802B18BC
    // 0x8029BFA4: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    static_3_802B18BC(rdram, ctx);
        goto after_8;
    // 0x8029BFA4: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    after_8:
    // 0x8029BFA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8029BFAC: jal         0x802CD274
    // 0x8029BFB0: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    static_3_802CD274(rdram, ctx);
        goto after_9;
    // 0x8029BFB0: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_9:
    // 0x8029BFB4: sb          $v0, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r2;
    // 0x8029BFB8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8029BFBC:
    // 0x8029BFBC: lbu         $v0, 0x27($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X27);
    // 0x8029BFC0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8029BFC4: jr          $ra
    // 0x8029BFC8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8029BFC8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void D_80222E48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80222E48: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80222E4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80222E50: jal         0x80222CBC
    // 0x80222E54: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    static_3_80222CBC(rdram, ctx);
        goto after_0;
    // 0x80222E54: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x80222E58: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80222E5C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80222E60: beq         $t6, $zero, L_80222E70
    if (ctx->r14 == 0) {
        // 0x80222E64: nop
    
            goto L_80222E70;
    }
    // 0x80222E64: nop

    // 0x80222E68: b           L_80222E70
    // 0x80222E6C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
        goto L_80222E70;
    // 0x80222E6C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
L_80222E70:
    // 0x80222E70: jal         0x80222E24
    // 0x80222E74: sb          $a2, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r6;
    static_3_80222E24(rdram, ctx);
        goto after_1;
    // 0x80222E74: sb          $a2, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r6;
    after_1:
    // 0x80222E78: jal         0x802375F0
    // 0x80222E7C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    static_3_802375F0(rdram, ctx);
        goto after_2;
    // 0x80222E7C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x80222E80: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x80222E84: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x80222E88: lbu         $t8, 0x1F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X1F);
    // 0x80222E8C: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x80222E90: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x80222E94: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x80222E98: addiu       $t7, $a0, 0x8
    ctx->r15 = ADD32(ctx->r4, 0X8);
    // 0x80222E9C: sw          $t7, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r15;
    // 0x80222EA0: or          $t0, $t9, $at
    ctx->r8 = ctx->r25 | ctx->r1;
    // 0x80222EA4: ori         $t1, $t0, 0x40
    ctx->r9 = ctx->r8 | 0X40;
    // 0x80222EA8: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x80222EAC: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    // 0x80222EB0: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x80222EB4: lhu         $t2, 0x0($t2)
    ctx->r10 = MEM_HU(ctx->r10, 0X0);
    // 0x80222EB8: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x80222EBC: addiu       $t4, $t4, 0x0
    ctx->r12 = ADD32(ctx->r12, 0X0);
    // 0x80222EC0: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80222EC4: addu        $a1, $t3, $t4
    ctx->r5 = ADD32(ctx->r11, ctx->r12);
    // 0x80222EC8: lw          $t5, 0x0($a1)
    ctx->r13 = MEM_W(ctx->r5, 0X0);
    // 0x80222ECC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80222ED0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80222ED4: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80222ED8: jr          $ra
    // 0x80222EDC: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    return;
    // 0x80222EDC: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
;}
RECOMP_FUNC void D_802CEE4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802CEECC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802CEED0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802CEED4: jr          $ra
    // 0x802CEED8: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x802CEED8: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void D_8022A42C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022A42C: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8022A430: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022A434: bne         $a1, $a0, L_8022A440
    if (ctx->r5 != ctx->r4) {
        // 0x8022A438: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_8022A440;
    }
    // 0x8022A438: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8022A43C: addiu       $v0, $sp, 0x18
    ctx->r2 = ADD32(ctx->r29, 0X18);
L_8022A440:
    // 0x8022A440: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8022A444: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    // 0x8022A448: lwc1        $f6, 0x10($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X10);
    // 0x8022A44C: swc1        $f6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f6.u32l;
    // 0x8022A450: lwc1        $f8, 0x20($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X20);
    // 0x8022A454: swc1        $f8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f8.u32l;
    // 0x8022A458: lwc1        $f10, 0x4($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X4);
    // 0x8022A45C: swc1        $f10, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f10.u32l;
    // 0x8022A460: lwc1        $f16, 0x14($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X14);
    // 0x8022A464: swc1        $f16, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f16.u32l;
    // 0x8022A468: lwc1        $f18, 0x24($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X24);
    // 0x8022A46C: swc1        $f18, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f18.u32l;
    // 0x8022A470: lwc1        $f4, 0x8($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X8);
    // 0x8022A474: swc1        $f4, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f4.u32l;
    // 0x8022A478: lwc1        $f6, 0x18($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X18);
    // 0x8022A47C: swc1        $f6, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f6.u32l;
    // 0x8022A480: lwc1        $f8, 0x28($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X28);
    // 0x8022A484: bne         $a1, $v0, L_8022A494
    if (ctx->r5 != ctx->r2) {
        // 0x8022A488: swc1        $f8, 0x28($v0)
        MEM_W(0X28, ctx->r2) = ctx->f8.u32l;
            goto L_8022A494;
    }
    // 0x8022A488: swc1        $f8, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f8.u32l;
    // 0x8022A48C: jal         0x80228DE0
    // 0x8022A490: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    func_80228DE0(rdram, ctx);
        goto after_0;
    // 0x8022A490: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_0:
L_8022A494:
    // 0x8022A494: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022A498: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x8022A49C: jr          $ra
    // 0x8022A4A0: nop

    return;
    // 0x8022A4A0: nop

;}
RECOMP_FUNC void D_80239520(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80239520: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80239524: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80239528: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8023952C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80239530: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80239534: lbu         $t7, 0x0($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X0);
    // 0x80239538: lbu         $v0, 0x0($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X0);
    // 0x8023953C: or          $s0, $a3, $zero
    ctx->r16 = ctx->r7 | 0;
    // 0x80239540: beq         $v0, $t7, L_80239574
    if (ctx->r2 == ctx->r15) {
        // 0x80239544: or          $t6, $a1, $zero
        ctx->r14 = ctx->r5 | 0;
            goto L_80239574;
    }
    // 0x80239544: or          $t6, $a1, $zero
    ctx->r14 = ctx->r5 | 0;
    // 0x80239548: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x8023954C: lbu         $a3, 0x0($t6)
    ctx->r7 = MEM_BU(ctx->r14, 0X0);
    // 0x80239550: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x80239554: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80239558: jal         0x80245404
    // 0x8023955C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_80245404(rdram, ctx);
        goto after_0;
    // 0x8023955C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80239560: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80239564: beq         $v0, $zero, L_80239574
    if (ctx->r2 == 0) {
        // 0x80239568: nop
    
            goto L_80239574;
    }
    // 0x80239568: nop

    // 0x8023956C: b           L_802395F4
    // 0x80239570: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802395F4;
    // 0x80239570: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80239574:
    // 0x80239574: lbu         $t9, 0x1($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X1);
    // 0x80239578: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8023957C: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x80239580: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x80239584: lhu         $at, 0x0($t1)
    ctx->r1 = MEM_HU(ctx->r9, 0X0);
    // 0x80239588: nop

    // 0x8023958C: sh          $at, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r1;
    // 0x80239590: lw          $t4, 0x60($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X60);
    // 0x80239594: andi        $v1, $at, 0xFFFF
    ctx->r3 = ctx->r1 & 0XFFFF;
    // 0x80239598: slt         $at, $v1, $t4
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x8023959C: bne         $at, $zero, L_802395D8
    if (ctx->r1 != 0) {
        // 0x802395A0: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_802395D8;
    }
    // 0x802395A0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802395A4: lbu         $t5, 0x0($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X0);
    // 0x802395A8: lbu         $t7, 0x64($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X64);
    // 0x802395AC: nop

    // 0x802395B0: slt         $at, $t5, $t7
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x802395B4: beq         $at, $zero, L_802395D8
    if (ctx->r1 == 0) {
        // 0x802395B8: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_802395D8;
    }
    // 0x802395B8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802395BC: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x802395C0: nop

    // 0x802395C4: blez        $v0, L_802395D4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x802395C8: slti        $at, $v0, 0x80
        ctx->r1 = SIGNED(ctx->r2) < 0X80 ? 1 : 0;
            goto L_802395D4;
    }
    // 0x802395C8: slti        $at, $v0, 0x80
    ctx->r1 = SIGNED(ctx->r2) < 0X80 ? 1 : 0;
    // 0x802395CC: bne         $at, $zero, L_802395F0
    if (ctx->r1 != 0) {
        // 0x802395D0: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802395F0;
    }
    // 0x802395D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802395D4:
    // 0x802395D4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_802395D8:
    // 0x802395D8: bne         $v1, $at, L_802395E8
    if (ctx->r3 != ctx->r1) {
        // 0x802395DC: nop
    
            goto L_802395E8;
    }
    // 0x802395DC: nop

    // 0x802395E0: b           L_802395F0
    // 0x802395E4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_802395F0;
    // 0x802395E4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_802395E8:
    // 0x802395E8: b           L_802395F0
    // 0x802395EC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_802395F0;
    // 0x802395EC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_802395F0:
    // 0x802395F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802395F4:
    // 0x802395F4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802395F8: jr          $ra
    // 0x802395FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x802395FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void D_802B7158(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B71D8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802B71DC: jr          $ra
    // 0x802B71E0: sb          $t6, 0x77C($a0)
    MEM_B(0X77C, ctx->r4) = ctx->r14;
    return;
    // 0x802B71E0: sb          $t6, 0x77C($a0)
    MEM_B(0X77C, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void D_802DDC24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802DDCA4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802DDCA8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802DDCAC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802DDCB0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802DDCB4: beq         $a0, $zero, L_802DDD18
    if (ctx->r4 == 0) {
        // 0x802DDCB8: sw          $a1, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r5;
            goto L_802DDD18;
    }
    // 0x802DDCB8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x802DDCBC: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802DDCC0: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802DDCC4: sw          $t6, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r14;
    // 0x802DDCC8: addiu       $a0, $a0, 0x1B00
    ctx->r4 = ADD32(ctx->r4, 0X1B00);
    // 0x802DDCCC: jal         0x8031DD60
    // 0x802DDCD0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_8031DD60(rdram, ctx);
        goto after_0;
    // 0x802DDCD0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x802DDCD4: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x802DDCD8: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x802DDCDC: addiu       $a0, $s0, 0x80
    ctx->r4 = ADD32(ctx->r16, 0X80);
    // 0x802DDCE0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802DDCE4: addiu       $a2, $zero, 0x6A0
    ctx->r6 = ADD32(0, 0X6A0);
    // 0x802DDCE8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802DDCEC: jal         0x802C6A00
    // 0x802DDCF0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    static_3_802C6A00(rdram, ctx);
        goto after_1;
    // 0x802DDCF0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_1:
    // 0x802DDCF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DDCF8: jal         0x803086D4
    // 0x802DDCFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_803086D4(rdram, ctx);
        goto after_2;
    // 0x802DDCFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x802DDD00: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x802DDD04: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x802DDD08: beql        $t8, $zero, L_802DDD1C
    if (ctx->r24 == 0) {
        // 0x802DDD0C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_802DDD1C;
    }
    goto skip_0;
    // 0x802DDD0C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x802DDD10: jal         0x802C681C
    // 0x802DDD14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802C681C(rdram, ctx);
        goto after_3;
    // 0x802DDD14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
L_802DDD18:
    // 0x802DDD18: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802DDD1C:
    // 0x802DDD1C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802DDD20: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802DDD24: jr          $ra
    // 0x802DDD28: nop

    return;
    // 0x802DDD28: nop

;}
RECOMP_FUNC void D_8029E0D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029E150: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8029E154: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8029E158: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8029E15C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8029E160: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x8029E164: jal         0x8022331C
    // 0x8029E168: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    static_3_8022331C(rdram, ctx);
        goto after_0;
    // 0x8029E168: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    after_0:
    // 0x8029E16C: jal         0x8022342C
    // 0x8029E170: lui         $a0, 0x40
    ctx->r4 = S32(0X40 << 16);
    static_3_8022342C(rdram, ctx);
        goto after_1;
    // 0x8029E170: lui         $a0, 0x40
    ctx->r4 = S32(0X40 << 16);
    after_1:
    // 0x8029E174: jal         0x8021F4E4
    // 0x8029E178: nop

    static_3_8021F4E4(rdram, ctx);
        goto after_2;
    // 0x8029E178: nop

    after_2:
    // 0x8029E17C: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8029E180: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x8029E184: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8029E188: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8029E18C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8029E190: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8029E194: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8029E198: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8029E19C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8029E1A0: jal         0x8021F35C
    // 0x8029E1A4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_3;
    // 0x8029E1A4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_3:
    // 0x8029E1A8: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x8029E1AC: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x8029E1B0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8029E1B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8029E1B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8029E1BC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8029E1C0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8029E1C4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8029E1C8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8029E1CC: jal         0x8021F35C
    // 0x8029E1D0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_4;
    // 0x8029E1D0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_4:
    // 0x8029E1D4: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8029E1D8: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x8029E1DC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8029E1E0: addiu       $a1, $zero, 0xF0
    ctx->r5 = ADD32(0, 0XF0);
    // 0x8029E1E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8029E1E8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8029E1EC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8029E1F0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8029E1F4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8029E1F8: jal         0x8021F35C
    // 0x8029E1FC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_5;
    // 0x8029E1FC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_5:
    // 0x8029E200: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x8029E204: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x8029E208: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8029E20C: addiu       $a1, $zero, 0xF0
    ctx->r5 = ADD32(0, 0XF0);
    // 0x8029E210: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8029E214: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8029E218: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8029E21C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8029E220: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8029E224: jal         0x8021F35C
    // 0x8029E228: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_6;
    // 0x8029E228: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_6:
    // 0x8029E22C: jal         0x8021FCD0
    // 0x8029E230: nop

    static_3_8021FCD0(rdram, ctx);
        goto after_7;
    // 0x8029E230: nop

    after_7:
    // 0x8029E234: jal         0x8021F4E4
    // 0x8029E238: nop

    static_3_8021F4E4(rdram, ctx);
        goto after_8;
    // 0x8029E238: nop

    after_8:
    // 0x8029E23C: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8029E240: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x8029E244: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8029E248: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8029E24C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8029E250: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8029E254: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8029E258: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8029E25C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8029E260: jal         0x8021F35C
    // 0x8029E264: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_9;
    // 0x8029E264: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_9:
    // 0x8029E268: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8029E26C: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x8029E270: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8029E274: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8029E278: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8029E27C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8029E280: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8029E284: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8029E288: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8029E28C: jal         0x8021F35C
    // 0x8029E290: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_10;
    // 0x8029E290: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_10:
    // 0x8029E294: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8029E298: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x8029E29C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8029E2A0: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x8029E2A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8029E2A8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8029E2AC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8029E2B0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8029E2B4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8029E2B8: jal         0x8021F35C
    // 0x8029E2BC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_11;
    // 0x8029E2BC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_11:
    // 0x8029E2C0: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x8029E2C4: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x8029E2C8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8029E2CC: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x8029E2D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8029E2D4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8029E2D8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8029E2DC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8029E2E0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8029E2E4: jal         0x8021F35C
    // 0x8029E2E8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_12;
    // 0x8029E2E8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_12:
    // 0x8029E2EC: jal         0x8021FCD0
    // 0x8029E2F0: nop

    static_3_8021FCD0(rdram, ctx);
        goto after_13;
    // 0x8029E2F0: nop

    after_13:
    // 0x8029E2F4: jal         0x8021F4E4
    // 0x8029E2F8: nop

    static_3_8021F4E4(rdram, ctx);
        goto after_14;
    // 0x8029E2F8: nop

    after_14:
    // 0x8029E2FC: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8029E300: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x8029E304: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8029E308: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x8029E30C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8029E310: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8029E314: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8029E318: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8029E31C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8029E320: jal         0x8021F35C
    // 0x8029E324: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_15;
    // 0x8029E324: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_15:
    // 0x8029E328: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8029E32C: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x8029E330: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8029E334: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x8029E338: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8029E33C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8029E340: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8029E344: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8029E348: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8029E34C: jal         0x8021F35C
    // 0x8029E350: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_16;
    // 0x8029E350: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_16:
    // 0x8029E354: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8029E358: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x8029E35C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8029E360: addiu       $a1, $zero, 0xF0
    ctx->r5 = ADD32(0, 0XF0);
    // 0x8029E364: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8029E368: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8029E36C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8029E370: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8029E374: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8029E378: jal         0x8021F35C
    // 0x8029E37C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_17;
    // 0x8029E37C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_17:
    // 0x8029E380: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x8029E384: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x8029E388: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8029E38C: addiu       $a1, $zero, 0xF0
    ctx->r5 = ADD32(0, 0XF0);
    // 0x8029E390: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8029E394: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8029E398: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8029E39C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8029E3A0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8029E3A4: jal         0x8021F35C
    // 0x8029E3A8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_18;
    // 0x8029E3A8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_18:
    // 0x8029E3AC: jal         0x8021FCD0
    // 0x8029E3B0: nop

    static_3_8021FCD0(rdram, ctx);
        goto after_19;
    // 0x8029E3B0: nop

    after_19:
    // 0x8029E3B4: jal         0x8021F4E4
    // 0x8029E3B8: nop

    static_3_8021F4E4(rdram, ctx);
        goto after_20;
    // 0x8029E3B8: nop

    after_20:
    // 0x8029E3BC: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8029E3C0: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x8029E3C4: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8029E3C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8029E3CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8029E3D0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8029E3D4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8029E3D8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8029E3DC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8029E3E0: jal         0x8021F35C
    // 0x8029E3E4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_21;
    // 0x8029E3E4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_21:
    // 0x8029E3E8: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x8029E3EC: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x8029E3F0: addiu       $a0, $zero, 0x140
    ctx->r4 = ADD32(0, 0X140);
    // 0x8029E3F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8029E3F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8029E3FC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8029E400: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8029E404: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8029E408: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8029E40C: jal         0x8021F35C
    // 0x8029E410: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_22;
    // 0x8029E410: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_22:
    // 0x8029E414: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8029E418: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x8029E41C: addiu       $a0, $zero, 0x140
    ctx->r4 = ADD32(0, 0X140);
    // 0x8029E420: addiu       $a1, $zero, 0xF0
    ctx->r5 = ADD32(0, 0XF0);
    // 0x8029E424: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8029E428: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8029E42C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8029E430: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8029E434: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8029E438: jal         0x8021F35C
    // 0x8029E43C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_23;
    // 0x8029E43C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_23:
    // 0x8029E440: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8029E444: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x8029E448: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8029E44C: addiu       $a1, $zero, 0xF0
    ctx->r5 = ADD32(0, 0XF0);
    // 0x8029E450: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8029E454: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8029E458: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8029E45C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8029E460: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8029E464: jal         0x8021F35C
    // 0x8029E468: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_24;
    // 0x8029E468: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_24:
    // 0x8029E46C: jal         0x8021FCD0
    // 0x8029E470: nop

    static_3_8021FCD0(rdram, ctx);
        goto after_25;
    // 0x8029E470: nop

    after_25:
    // 0x8029E474: jal         0x8022337C
    // 0x8029E478: nop

    static_3_8022337C(rdram, ctx);
        goto after_26;
    // 0x8029E478: nop

    after_26:
    // 0x8029E47C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8029E480: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8029E484: jr          $ra
    // 0x8029E488: nop

    return;
    // 0x8029E488: nop

;}
RECOMP_FUNC void D_80233190(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80233190: addiu       $at, $zero, 0xFFF
    ctx->r1 = ADD32(0, 0XFFF);
    // 0x80233194: bne         $a0, $at, L_802331A4
    if (ctx->r4 != ctx->r1) {
        // 0x80233198: lui         $t6, 0x0
        ctx->r14 = S32(0X0 << 16);
            goto L_802331A4;
    }
    // 0x80233198: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8023319C: jr          $ra
    // 0x802331A0: addiu       $v0, $zero, 0xFFF
    ctx->r2 = ADD32(0, 0XFFF);
    return;
    // 0x802331A0: addiu       $v0, $zero, 0xFFF
    ctx->r2 = ADD32(0, 0XFFF);
L_802331A4:
    // 0x802331A4: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x802331A8: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x802331AC: addiu       $v0, $zero, 0xFFF
    ctx->r2 = ADD32(0, 0XFFF);
    // 0x802331B0: lw          $t7, 0x2C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X2C);
    // 0x802331B4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x802331B8: lw          $v1, 0x0($t9)
    ctx->r3 = MEM_W(ctx->r25, 0X0);
    // 0x802331BC: beq         $v1, $zero, L_802331CC
    if (ctx->r3 == 0) {
        // 0x802331C0: nop
    
            goto L_802331CC;
    }
    // 0x802331C0: nop

    // 0x802331C4: jr          $ra
    // 0x802331C8: lhu         $v0, 0x20($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X20);
    return;
    // 0x802331C8: lhu         $v0, 0x20($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X20);
L_802331CC:
    // 0x802331CC: jr          $ra
    // 0x802331D0: nop

    return;
    // 0x802331D0: nop

;}
RECOMP_FUNC void func_80237F20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80237F20: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x80237F24: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80237F28: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x80237F2C: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x80237F30: lw          $t7, 0xC($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XC);
    // 0x80237F34: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80237F38: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x80237F3C: sw          $t7, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r15;
    // 0x80237F40: lw          $t8, 0x10($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X10);
    // 0x80237F44: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x80237F48: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x80237F4C: sw          $t8, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r24;
L_80237F50:
    // 0x80237F50: lw          $t9, 0x18($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X18);
    // 0x80237F54: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80237F58: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x80237F5C: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x80237F60: lw          $t1, 0x58($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X58);
    // 0x80237F64: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x80237F68: addiu       $a3, $a3, 0x2
    ctx->r7 = ADD32(ctx->r7, 0X2);
    // 0x80237F6C: sw          $t1, 0x44($v1)
    MEM_W(0X44, ctx->r3) = ctx->r9;
    // 0x80237F70: lbu         $t2, 0x98($t0)
    ctx->r10 = MEM_BU(ctx->r8, 0X98);
    // 0x80237F74: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
    // 0x80237F78: sb          $t2, 0x8A($a3)
    MEM_B(0X8A, ctx->r7) = ctx->r10;
    // 0x80237F7C: lbu         $t3, 0xA6($t0)
    ctx->r11 = MEM_BU(ctx->r8, 0XA6);
    // 0x80237F80: sb          $t3, 0x9A($a3)
    MEM_B(0X9A, ctx->r7) = ctx->r11;
    // 0x80237F84: lw          $t4, 0xB0($a2)
    ctx->r12 = MEM_W(ctx->r6, 0XB0);
    // 0x80237F88: sw          $t4, 0xA4($v1)
    MEM_W(0XA4, ctx->r3) = ctx->r12;
    // 0x80237F8C: lw          $t5, 0x14($a2)
    ctx->r13 = MEM_W(ctx->r6, 0X14);
    // 0x80237F90: sw          $t5, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r13;
    // 0x80237F94: lw          $t6, 0x54($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X54);
    // 0x80237F98: sw          $t6, 0x48($v1)
    MEM_W(0X48, ctx->r3) = ctx->r14;
    // 0x80237F9C: lbu         $t7, 0x97($t0)
    ctx->r15 = MEM_BU(ctx->r8, 0X97);
    // 0x80237FA0: sb          $t7, 0x8B($a3)
    MEM_B(0X8B, ctx->r7) = ctx->r15;
    // 0x80237FA4: lbu         $t8, 0xA7($t0)
    ctx->r24 = MEM_BU(ctx->r8, 0XA7);
    // 0x80237FA8: sb          $t8, 0x9B($a3)
    MEM_B(0X9B, ctx->r7) = ctx->r24;
    // 0x80237FAC: lw          $t9, 0xB4($a2)
    ctx->r25 = MEM_W(ctx->r6, 0XB4);
    // 0x80237FB0: bne         $v0, $a0, L_80237F50
    if (ctx->r2 != ctx->r4) {
        // 0x80237FB4: sw          $t9, 0xA8($v1)
        MEM_W(0XA8, ctx->r3) = ctx->r25;
            goto L_80237F50;
    }
    // 0x80237FB4: sw          $t9, 0xA8($v1)
    MEM_W(0XA8, ctx->r3) = ctx->r25;
    // 0x80237FB8: jr          $ra
    // 0x80237FBC: nop

    return;
    // 0x80237FBC: nop

;}
RECOMP_FUNC void D_802A74EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A756C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802A7570: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x802A7574: lwc1        $f4, 0x64($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X64);
    // 0x802A7578: lbu         $t6, 0x58($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X58);
    // 0x802A757C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802A7580: add.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f12.fl;
    // 0x802A7584: beq         $t6, $zero, L_802A75B8
    if (ctx->r14 == 0) {
        // 0x802A7588: swc1        $f6, 0x64($a0)
        MEM_W(0X64, ctx->r4) = ctx->f6.u32l;
            goto L_802A75B8;
    }
    // 0x802A7588: swc1        $f6, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f6.u32l;
    // 0x802A758C: lwc1        $f8, 0x64($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X64);
    // 0x802A7590: lwc1        $f10, 0x5C($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X5C);
    // 0x802A7594: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x802A7598: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x802A759C: nop

    // 0x802A75A0: bc1f        L_802A75D4
    if (!c1cs) {
        // 0x802A75A4: nop
    
            goto L_802A75D4;
    }
    // 0x802A75A4: nop

    // 0x802A75A8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x802A75AC: sb          $zero, 0x58($a0)
    MEM_B(0X58, ctx->r4) = 0;
    // 0x802A75B0: jr          $ra
    // 0x802A75B4: swc1        $f16, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f16.u32l;
    return;
    // 0x802A75B4: swc1        $f16, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f16.u32l;
L_802A75B8:
    // 0x802A75B8: lwc1        $f18, 0x64($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X64);
    // 0x802A75BC: lwc1        $f4, 0x60($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X60);
    // 0x802A75C0: c.le.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl <= ctx->f18.fl;
    // 0x802A75C4: nop

    // 0x802A75C8: bc1f        L_802A75D4
    if (!c1cs) {
        // 0x802A75CC: nop
    
            goto L_802A75D4;
    }
    // 0x802A75CC: nop

    // 0x802A75D0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_802A75D4:
    // 0x802A75D4: jr          $ra
    // 0x802A75D8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x802A75D8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void D_802B3B8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B3C0C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802B3C10: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802B3C14: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802B3C18: bne         $a0, $zero, L_802B3C30
    if (ctx->r4 != 0) {
        // 0x802B3C1C: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_802B3C30;
    }
    // 0x802B3C1C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802B3C20: jal         0x802C67EC
    // 0x802B3C24: addiu       $a0, $zero, 0x152C
    ctx->r4 = ADD32(0, 0X152C);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802B3C24: addiu       $a0, $zero, 0x152C
    ctx->r4 = ADD32(0, 0X152C);
    after_0:
    // 0x802B3C28: beq         $v0, $zero, L_802B3CF0
    if (ctx->r2 == 0) {
        // 0x802B3C2C: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_802B3CF0;
    }
    // 0x802B3C2C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_802B3C30:
    // 0x802B3C30: jal         0x80317344
    // 0x802B3C34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80317344(rdram, ctx);
        goto after_1;
    // 0x802B3C34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x802B3C38: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802B3C3C: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802B3C40: sw          $t6, 0x1A0($s0)
    MEM_W(0X1A0, ctx->r16) = ctx->r14;
    // 0x802B3C44: jal         0x802D5140
    // 0x802B3C48: addiu       $a0, $s0, 0x1A4
    ctx->r4 = ADD32(ctx->r16, 0X1A4);
    static_3_802D5140(rdram, ctx);
        goto after_2;
    // 0x802B3C48: addiu       $a0, $s0, 0x1A4
    ctx->r4 = ADD32(ctx->r16, 0X1A4);
    after_2:
    // 0x802B3C4C: jal         0x8031C6D8
    // 0x802B3C50: addiu       $a0, $s0, 0x2B8
    ctx->r4 = ADD32(ctx->r16, 0X2B8);
    static_3_8031C6D8(rdram, ctx);
        goto after_3;
    // 0x802B3C50: addiu       $a0, $s0, 0x2B8
    ctx->r4 = ADD32(ctx->r16, 0X2B8);
    after_3:
    // 0x802B3C54: jal         0x8031C6D8
    // 0x802B3C58: addiu       $a0, $s0, 0x3A8
    ctx->r4 = ADD32(ctx->r16, 0X3A8);
    static_3_8031C6D8(rdram, ctx);
        goto after_4;
    // 0x802B3C58: addiu       $a0, $s0, 0x3A8
    ctx->r4 = ADD32(ctx->r16, 0X3A8);
    after_4:
    // 0x802B3C5C: jal         0x802FD0D4
    // 0x802B3C60: addiu       $a0, $s0, 0x498
    ctx->r4 = ADD32(ctx->r16, 0X498);
    static_3_802FD0D4(rdram, ctx);
        goto after_5;
    // 0x802B3C60: addiu       $a0, $s0, 0x498
    ctx->r4 = ADD32(ctx->r16, 0X498);
    after_5:
    // 0x802B3C64: jal         0x8030340C
    // 0x802B3C68: addiu       $a0, $s0, 0x96C
    ctx->r4 = ADD32(ctx->r16, 0X96C);
    static_3_8030340C(rdram, ctx);
        goto after_6;
    // 0x802B3C68: addiu       $a0, $s0, 0x96C
    ctx->r4 = ADD32(ctx->r16, 0X96C);
    after_6:
    // 0x802B3C6C: jal         0x8030340C
    // 0x802B3C70: addiu       $a0, $s0, 0x9E0
    ctx->r4 = ADD32(ctx->r16, 0X9E0);
    static_3_8030340C(rdram, ctx);
        goto after_7;
    // 0x802B3C70: addiu       $a0, $s0, 0x9E0
    ctx->r4 = ADD32(ctx->r16, 0X9E0);
    after_7:
    // 0x802B3C74: jal         0x8030340C
    // 0x802B3C78: addiu       $a0, $s0, 0xA54
    ctx->r4 = ADD32(ctx->r16, 0XA54);
    static_3_8030340C(rdram, ctx);
        goto after_8;
    // 0x802B3C78: addiu       $a0, $s0, 0xA54
    ctx->r4 = ADD32(ctx->r16, 0XA54);
    after_8:
    // 0x802B3C7C: jal         0x8030340C
    // 0x802B3C80: addiu       $a0, $s0, 0xAC8
    ctx->r4 = ADD32(ctx->r16, 0XAC8);
    static_3_8030340C(rdram, ctx);
        goto after_9;
    // 0x802B3C80: addiu       $a0, $s0, 0xAC8
    ctx->r4 = ADD32(ctx->r16, 0XAC8);
    after_9:
    // 0x802B3C84: jal         0x8030340C
    // 0x802B3C88: addiu       $a0, $s0, 0xB3C
    ctx->r4 = ADD32(ctx->r16, 0XB3C);
    static_3_8030340C(rdram, ctx);
        goto after_10;
    // 0x802B3C88: addiu       $a0, $s0, 0xB3C
    ctx->r4 = ADD32(ctx->r16, 0XB3C);
    after_10:
    // 0x802B3C8C: jal         0x8030340C
    // 0x802B3C90: addiu       $a0, $s0, 0xBB0
    ctx->r4 = ADD32(ctx->r16, 0XBB0);
    static_3_8030340C(rdram, ctx);
        goto after_11;
    // 0x802B3C90: addiu       $a0, $s0, 0xBB0
    ctx->r4 = ADD32(ctx->r16, 0XBB0);
    after_11:
    // 0x802B3C94: jal         0x8030340C
    // 0x802B3C98: addiu       $a0, $s0, 0xC24
    ctx->r4 = ADD32(ctx->r16, 0XC24);
    static_3_8030340C(rdram, ctx);
        goto after_12;
    // 0x802B3C98: addiu       $a0, $s0, 0xC24
    ctx->r4 = ADD32(ctx->r16, 0XC24);
    after_12:
    // 0x802B3C9C: jal         0x8030340C
    // 0x802B3CA0: addiu       $a0, $s0, 0xC98
    ctx->r4 = ADD32(ctx->r16, 0XC98);
    static_3_8030340C(rdram, ctx);
        goto after_13;
    // 0x802B3CA0: addiu       $a0, $s0, 0xC98
    ctx->r4 = ADD32(ctx->r16, 0XC98);
    after_13:
    // 0x802B3CA4: jal         0x8030340C
    // 0x802B3CA8: addiu       $a0, $s0, 0xD0C
    ctx->r4 = ADD32(ctx->r16, 0XD0C);
    static_3_8030340C(rdram, ctx);
        goto after_14;
    // 0x802B3CA8: addiu       $a0, $s0, 0xD0C
    ctx->r4 = ADD32(ctx->r16, 0XD0C);
    after_14:
    // 0x802B3CAC: jal         0x8030340C
    // 0x802B3CB0: addiu       $a0, $s0, 0xD80
    ctx->r4 = ADD32(ctx->r16, 0XD80);
    static_3_8030340C(rdram, ctx);
        goto after_15;
    // 0x802B3CB0: addiu       $a0, $s0, 0xD80
    ctx->r4 = ADD32(ctx->r16, 0XD80);
    after_15:
    // 0x802B3CB4: jal         0x8030340C
    // 0x802B3CB8: addiu       $a0, $s0, 0xDF4
    ctx->r4 = ADD32(ctx->r16, 0XDF4);
    static_3_8030340C(rdram, ctx);
        goto after_16;
    // 0x802B3CB8: addiu       $a0, $s0, 0xDF4
    ctx->r4 = ADD32(ctx->r16, 0XDF4);
    after_16:
    // 0x802B3CBC: jal         0x8030340C
    // 0x802B3CC0: addiu       $a0, $s0, 0xE68
    ctx->r4 = ADD32(ctx->r16, 0XE68);
    static_3_8030340C(rdram, ctx);
        goto after_17;
    // 0x802B3CC0: addiu       $a0, $s0, 0xE68
    ctx->r4 = ADD32(ctx->r16, 0XE68);
    after_17:
    // 0x802B3CC4: jal         0x802C498C
    // 0x802B3CC8: addiu       $a0, $s0, 0xEDC
    ctx->r4 = ADD32(ctx->r16, 0XEDC);
    static_3_802C498C(rdram, ctx);
        goto after_18;
    // 0x802B3CC8: addiu       $a0, $s0, 0xEDC
    ctx->r4 = ADD32(ctx->r16, 0XEDC);
    after_18:
    // 0x802B3CCC: jal         0x802C498C
    // 0x802B3CD0: addiu       $a0, $s0, 0x1070
    ctx->r4 = ADD32(ctx->r16, 0X1070);
    static_3_802C498C(rdram, ctx);
        goto after_19;
    // 0x802B3CD0: addiu       $a0, $s0, 0x1070
    ctx->r4 = ADD32(ctx->r16, 0X1070);
    after_19:
    // 0x802B3CD4: jal         0x802C498C
    // 0x802B3CD8: addiu       $a0, $s0, 0x1204
    ctx->r4 = ADD32(ctx->r16, 0X1204);
    static_3_802C498C(rdram, ctx);
        goto after_20;
    // 0x802B3CD8: addiu       $a0, $s0, 0x1204
    ctx->r4 = ADD32(ctx->r16, 0X1204);
    after_20:
    // 0x802B3CDC: jal         0x802C498C
    // 0x802B3CE0: addiu       $a0, $s0, 0x1398
    ctx->r4 = ADD32(ctx->r16, 0X1398);
    static_3_802C498C(rdram, ctx);
        goto after_21;
    // 0x802B3CE0: addiu       $a0, $s0, 0x1398
    ctx->r4 = ADD32(ctx->r16, 0X1398);
    after_21:
    // 0x802B3CE4: ori         $t7, $zero, 0xFFFF
    ctx->r15 = 0 | 0XFFFF;
    // 0x802B3CE8: sw          $t7, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r15;
    // 0x802B3CEC: sb          $zero, 0x790($s0)
    MEM_B(0X790, ctx->r16) = 0;
L_802B3CF0:
    // 0x802B3CF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802B3CF4: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x802B3CF8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802B3CFC: jr          $ra
    // 0x802B3D00: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x802B3D00: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void D_80298D5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80298DDC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80298DE0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80298DE4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80298DE8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80298DEC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80298DF0: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80298DF4: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    // 0x80298DF8: addiu       $a1, $zero, 0x3B
    ctx->r5 = ADD32(0, 0X3B);
    // 0x80298DFC: jal         0x80302DC8
    // 0x80298E00: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302DC8(rdram, ctx);
        goto after_0;
    // 0x80298E00: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_0:
    // 0x80298E04: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80298E08: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x80298E0C: addiu       $a1, $zero, 0x79
    ctx->r5 = ADD32(0, 0X79);
    // 0x80298E10: jal         0x80302DC8
    // 0x80298E14: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302DC8(rdram, ctx);
        goto after_1;
    // 0x80298E14: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_1:
    // 0x80298E18: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80298E1C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x80298E20: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80298E24: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x80298E28: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    // 0x80298E2C: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x80298E30: jal         0x80290474
    // 0x80298E34: nop

    static_3_80290474(rdram, ctx);
        goto after_2;
    // 0x80298E34: nop

    after_2:
    // 0x80298E38: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x80298E3C: jal         0x80302980
    // 0x80298E40: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302980(rdram, ctx);
        goto after_3;
    // 0x80298E40: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_3:
    // 0x80298E44: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x80298E48: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x80298E4C: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x80298E50: addiu       $a1, $zero, 0x3B
    ctx->r5 = ADD32(0, 0X3B);
    // 0x80298E54: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x80298E58: jal         0x80302988
    // 0x80298E5C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_4;
    // 0x80298E5C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_4:
    // 0x80298E60: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x80298E64: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x80298E68: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x80298E6C: addiu       $a1, $zero, 0x79
    ctx->r5 = ADD32(0, 0X79);
    // 0x80298E70: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x80298E74: jal         0x80302988
    // 0x80298E78: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_5;
    // 0x80298E78: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_5:
    // 0x80298E7C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x80298E80: jal         0x80302A7C
    // 0x80298E84: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302A7C(rdram, ctx);
        goto after_6;
    // 0x80298E84: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_6:
    // 0x80298E88: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80298E8C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80298E90: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80298E94: jr          $ra
    // 0x80298E98: nop

    return;
    // 0x80298E98: nop

;}
RECOMP_FUNC void D_802EF10C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EF18C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802EF190: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802EF194: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802EF198: bne         $a0, $zero, L_802EF1B0
    if (ctx->r4 != 0) {
        // 0x802EF19C: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_802EF1B0;
    }
    // 0x802EF19C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802EF1A0: jal         0x802C67EC
    // 0x802EF1A4: addiu       $a0, $zero, 0x1DC
    ctx->r4 = ADD32(0, 0X1DC);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802EF1A4: addiu       $a0, $zero, 0x1DC
    ctx->r4 = ADD32(0, 0X1DC);
    after_0:
    // 0x802EF1A8: beq         $v0, $zero, L_802EF31C
    if (ctx->r2 == 0) {
        // 0x802EF1AC: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_802EF31C;
    }
    // 0x802EF1AC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_802EF1B0:
    // 0x802EF1B0: jal         0x8031F5A0
    // 0x802EF1B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_8031F5A0(rdram, ctx);
        goto after_1;
    // 0x802EF1B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x802EF1B8: addiu       $a0, $s0, 0xEC
    ctx->r4 = ADD32(ctx->r16, 0XEC);
    // 0x802EF1BC: lui         $a3, 0x8029
    ctx->r7 = S32(0X8029 << 16);
    // 0x802EF1C0: addiu       $a3, $a3, -0x5B40
    ctx->r7 = ADD32(ctx->r7, -0X5B40);
    // 0x802EF1C4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x802EF1C8: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x802EF1CC: jal         0x802C6930
    // 0x802EF1D0: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    static_3_802C6930(rdram, ctx);
        goto after_2;
    // 0x802EF1D0: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_2:
    // 0x802EF1D4: addiu       $t6, $zero, 0x1D
    ctx->r14 = ADD32(0, 0X1D);
    // 0x802EF1D8: sh          $t6, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r14;
    // 0x802EF1DC: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x802EF1E0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802EF1E4: lw          $v1, 0xB0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XB0);
    // 0x802EF1E8: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    // 0x802EF1EC: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x802EF1F0: addiu       $t8, $zero, 0x18D
    ctx->r24 = ADD32(0, 0X18D);
    // 0x802EF1F4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802EF1F8: sh          $a2, 0xB4($s0)
    MEM_H(0XB4, ctx->r16) = ctx->r6;
    // 0x802EF1FC: sh          $a2, 0xD6($s0)
    MEM_H(0XD6, ctx->r16) = ctx->r6;
    // 0x802EF200: sh          $t9, 0xA6($s0)
    MEM_H(0XA6, ctx->r16) = ctx->r25;
    // 0x802EF204: sh          $t8, 0x9C($s0)
    MEM_H(0X9C, ctx->r16) = ctx->r24;
    // 0x802EF208: sh          $a3, 0x98($s0)
    MEM_H(0X98, ctx->r16) = ctx->r7;
    // 0x802EF20C: sh          $a3, 0x9A($s0)
    MEM_H(0X9A, ctx->r16) = ctx->r7;
    // 0x802EF210: sh          $zero, 0xA4($s0)
    MEM_H(0XA4, ctx->r16) = 0;
    // 0x802EF214: sw          $t7, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->r15;
    // 0x802EF218: swc1        $f4, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f4.u32l;
    // 0x802EF21C: lw          $t9, 0x54($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X54);
    // 0x802EF220: lh          $t1, 0x50($v1)
    ctx->r9 = MEM_H(ctx->r3, 0X50);
    // 0x802EF224: lui         $a1, 0x40E0
    ctx->r5 = S32(0X40E0 << 16);
    // 0x802EF228: jalr        $t9
    // 0x802EF22C: addu        $a0, $t1, $s0
    ctx->r4 = ADD32(ctx->r9, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x802EF22C: addu        $a0, $t1, $s0
    ctx->r4 = ADD32(ctx->r9, ctx->r16);
    after_3:
    // 0x802EF230: lw          $v1, 0xB0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XB0);
    // 0x802EF234: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    // 0x802EF238: lw          $t9, 0x5C($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X5C);
    // 0x802EF23C: lh          $t2, 0x58($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X58);
    // 0x802EF240: jalr        $t9
    // 0x802EF244: addu        $a0, $t2, $s0
    ctx->r4 = ADD32(ctx->r10, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x802EF244: addu        $a0, $t2, $s0
    ctx->r4 = ADD32(ctx->r10, ctx->r16);
    after_4:
    // 0x802EF248: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x802EF24C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802EF250: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802EF254: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802EF258: lui         $at, 0x3E00
    ctx->r1 = S32(0X3E00 << 16);
    // 0x802EF25C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802EF260: lui         $at, 0x3D80
    ctx->r1 = S32(0X3D80 << 16);
    // 0x802EF264: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802EF268: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x802EF26C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802EF270: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802EF274: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x802EF278: lw          $v1, 0xB0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XB0);
    // 0x802EF27C: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x802EF280: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x802EF284: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x802EF288: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x802EF28C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x802EF290: sh          $t4, 0x76($s0)
    MEM_H(0X76, ctx->r16) = ctx->r12;
    // 0x802EF294: sh          $a2, 0x78($s0)
    MEM_H(0X78, ctx->r16) = ctx->r6;
    // 0x802EF298: sh          $a2, 0x7A($s0)
    MEM_H(0X7A, ctx->r16) = ctx->r6;
    // 0x802EF29C: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802EF2A0: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x802EF2A4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802EF2A8: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x802EF2AC: sh          $t7, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r15;
    // 0x802EF2B0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802EF2B4: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x802EF2B8: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x802EF2BC: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x802EF2C0: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x802EF2C4: mfc1        $t1, $f4
    ctx->r9 = (int32_t)ctx->f4.u32l;
    // 0x802EF2C8: sh          $a3, 0x7C($s0)
    MEM_H(0X7C, ctx->r16) = ctx->r7;
    // 0x802EF2CC: sh          $t1, 0xE0($s0)
    MEM_H(0XE0, ctx->r16) = ctx->r9;
    // 0x802EF2D0: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802EF2D4: sh          $a3, 0xE6($s0)
    MEM_H(0XE6, ctx->r16) = ctx->r7;
    // 0x802EF2D8: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x802EF2DC: nop

    // 0x802EF2E0: mul.s       $f16, $f2, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x802EF2E4: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x802EF2E8: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x802EF2EC: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    // 0x802EF2F0: mfc1        $v0, $f18
    ctx->r2 = (int32_t)ctx->f18.u32l;
    // 0x802EF2F4: sh          $t0, 0xE2($s0)
    MEM_H(0XE2, ctx->r16) = ctx->r8;
    // 0x802EF2F8: sh          $t0, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r8;
    // 0x802EF2FC: sh          $v0, 0x7E($s0)
    MEM_H(0X7E, ctx->r16) = ctx->r2;
    // 0x802EF300: sh          $v0, 0x80($s0)
    MEM_H(0X80, ctx->r16) = ctx->r2;
    // 0x802EF304: sh          $v0, 0x82($s0)
    MEM_H(0X82, ctx->r16) = ctx->r2;
    // 0x802EF308: sh          $v0, 0x84($s0)
    MEM_H(0X84, ctx->r16) = ctx->r2;
    // 0x802EF30C: lw          $t9, 0x6C($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X6C);
    // 0x802EF310: lh          $t3, 0x68($v1)
    ctx->r11 = MEM_H(ctx->r3, 0X68);
    // 0x802EF314: jalr        $t9
    // 0x802EF318: addu        $a0, $t3, $s0
    ctx->r4 = ADD32(ctx->r11, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x802EF318: addu        $a0, $t3, $s0
    ctx->r4 = ADD32(ctx->r11, ctx->r16);
    after_5:
L_802EF31C:
    // 0x802EF31C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802EF320: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x802EF324: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802EF328: jr          $ra
    // 0x802EF32C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x802EF32C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void D_802D8420(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D84A0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802D84A4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802D84A8: jr          $ra
    // 0x802D84AC: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x802D84AC: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void D_802BD5F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802BD674: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x802BD678: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802BD67C: jal         0x8022331C
    // 0x802BD680: sw          $a0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r4;
    static_3_8022331C(rdram, ctx);
        goto after_0;
    // 0x802BD680: sw          $a0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r4;
    after_0:
    // 0x802BD684: jal         0x8022970C
    // 0x802BD688: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    func_8022970C(rdram, ctx);
        goto after_1;
    // 0x802BD688: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_1:
    // 0x802BD68C: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x802BD690: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802BD694: lui         $at, 0x4360
    ctx->r1 = S32(0X4360 << 16);
    // 0x802BD698: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802BD69C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802BD6A0: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x802BD6A4: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x802BD6A8: lui         $a2, 0x4398
    ctx->r6 = S32(0X4398 << 16);
    // 0x802BD6AC: jal         0x8022A848
    // 0x802BD6B0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    static_3_8022A848(rdram, ctx);
        goto after_2;
    // 0x802BD6B0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x802BD6B4: jal         0x80221B2C
    // 0x802BD6B8: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    static_3_80221B2C(rdram, ctx);
        goto after_3;
    // 0x802BD6B8: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_3:
    // 0x802BD6BC: jal         0x8022970C
    // 0x802BD6C0: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    func_8022970C(rdram, ctx);
        goto after_4;
    // 0x802BD6C0: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_4:
    // 0x802BD6C4: jal         0x8022149C
    // 0x802BD6C8: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    static_3_8022149C(rdram, ctx);
        goto after_5;
    // 0x802BD6C8: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_5:
    // 0x802BD6CC: jal         0x802233EC
    // 0x802BD6D0: lui         $a0, 0x2
    ctx->r4 = S32(0X2 << 16);
    static_3_802233EC(rdram, ctx);
        goto after_6;
    // 0x802BD6D0: lui         $a0, 0x2
    ctx->r4 = S32(0X2 << 16);
    after_6:
    // 0x802BD6D4: jal         0x8021F4E4
    // 0x802BD6D8: nop

    static_3_8021F4E4(rdram, ctx);
        goto after_7;
    // 0x802BD6D8: nop

    after_7:
    // 0x802BD6DC: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x802BD6E0: addiu       $t7, $zero, 0xCA
    ctx->r15 = ADD32(0, 0XCA);
    // 0x802BD6E4: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x802BD6E8: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x802BD6EC: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x802BD6F0: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x802BD6F4: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x802BD6F8: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x802BD6FC: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    // 0x802BD700: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    // 0x802BD704: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802BD708: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802BD70C: jal         0x8021F35C
    // 0x802BD710: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_8;
    // 0x802BD710: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_8:
    // 0x802BD714: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x802BD718: addiu       $t1, $zero, 0xCA
    ctx->r9 = ADD32(0, 0XCA);
    // 0x802BD71C: addiu       $t2, $zero, 0x7
    ctx->r10 = ADD32(0, 0X7);
    // 0x802BD720: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x802BD724: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x802BD728: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x802BD72C: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x802BD730: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x802BD734: addiu       $a0, $zero, 0x127
    ctx->r4 = ADD32(0, 0X127);
    // 0x802BD738: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    // 0x802BD73C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802BD740: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x802BD744: jal         0x8021F35C
    // 0x802BD748: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_9;
    // 0x802BD748: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_9:
    // 0x802BD74C: addiu       $t4, $zero, 0x1E0
    ctx->r12 = ADD32(0, 0X1E0);
    // 0x802BD750: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x802BD754: addiu       $t6, $zero, 0xCA
    ctx->r14 = ADD32(0, 0XCA);
    // 0x802BD758: addiu       $t7, $zero, 0x7
    ctx->r15 = ADD32(0, 0X7);
    // 0x802BD75C: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x802BD760: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x802BD764: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x802BD768: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x802BD76C: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x802BD770: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x802BD774: addiu       $a0, $zero, 0x127
    ctx->r4 = ADD32(0, 0X127);
    // 0x802BD778: addiu       $a1, $zero, 0xD7
    ctx->r5 = ADD32(0, 0XD7);
    // 0x802BD77C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802BD780: jal         0x8021F35C
    // 0x802BD784: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    static_3_8021F35C(rdram, ctx);
        goto after_10;
    // 0x802BD784: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_10:
    // 0x802BD788: addiu       $t9, $zero, 0x1E0
    ctx->r25 = ADD32(0, 0X1E0);
    // 0x802BD78C: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x802BD790: addiu       $t1, $zero, 0xCA
    ctx->r9 = ADD32(0, 0XCA);
    // 0x802BD794: addiu       $t2, $zero, 0x7
    ctx->r10 = ADD32(0, 0X7);
    // 0x802BD798: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x802BD79C: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x802BD7A0: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x802BD7A4: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x802BD7A8: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x802BD7AC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x802BD7B0: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    // 0x802BD7B4: addiu       $a1, $zero, 0xD7
    ctx->r5 = ADD32(0, 0XD7);
    // 0x802BD7B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802BD7BC: jal         0x8021F35C
    // 0x802BD7C0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_8021F35C(rdram, ctx);
        goto after_11;
    // 0x802BD7C0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_11:
    // 0x802BD7C4: jal         0x8021FCD0
    // 0x802BD7C8: nop

    static_3_8021FCD0(rdram, ctx);
        goto after_12;
    // 0x802BD7C8: nop

    after_12:
    // 0x802BD7CC: jal         0x8021F4E4
    // 0x802BD7D0: nop

    static_3_8021F4E4(rdram, ctx);
        goto after_13;
    // 0x802BD7D0: nop

    after_13:
    // 0x802BD7D4: addiu       $t4, $zero, 0xA
    ctx->r12 = ADD32(0, 0XA);
    // 0x802BD7D8: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x802BD7DC: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x802BD7E0: addiu       $t7, $zero, 0x96
    ctx->r15 = ADD32(0, 0X96);
    // 0x802BD7E4: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x802BD7E8: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x802BD7EC: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x802BD7F0: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x802BD7F4: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    // 0x802BD7F8: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    // 0x802BD7FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802BD800: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802BD804: jal         0x8021F35C
    // 0x802BD808: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_14;
    // 0x802BD808: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_14:
    // 0x802BD80C: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x802BD810: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x802BD814: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
    // 0x802BD818: addiu       $t1, $zero, 0x96
    ctx->r9 = ADD32(0, 0X96);
    // 0x802BD81C: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x802BD820: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x802BD824: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x802BD828: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x802BD82C: addiu       $a0, $zero, 0x127
    ctx->r4 = ADD32(0, 0X127);
    // 0x802BD830: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    // 0x802BD834: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802BD838: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802BD83C: jal         0x8021F35C
    // 0x802BD840: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_15;
    // 0x802BD840: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_15:
    // 0x802BD844: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x802BD848: addiu       $t3, $zero, 0xA
    ctx->r11 = ADD32(0, 0XA);
    // 0x802BD84C: addiu       $t4, $zero, 0xA
    ctx->r12 = ADD32(0, 0XA);
    // 0x802BD850: addiu       $t5, $zero, 0x96
    ctx->r13 = ADD32(0, 0X96);
    // 0x802BD854: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x802BD858: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x802BD85C: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x802BD860: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x802BD864: addiu       $a0, $zero, 0x127
    ctx->r4 = ADD32(0, 0X127);
    // 0x802BD868: addiu       $a1, $zero, 0xBE
    ctx->r5 = ADD32(0, 0XBE);
    // 0x802BD86C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802BD870: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802BD874: jal         0x8021F35C
    // 0x802BD878: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_16;
    // 0x802BD878: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_16:
    // 0x802BD87C: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x802BD880: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x802BD884: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x802BD888: addiu       $t9, $zero, 0x96
    ctx->r25 = ADD32(0, 0X96);
    // 0x802BD88C: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x802BD890: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x802BD894: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x802BD898: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x802BD89C: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    // 0x802BD8A0: addiu       $a1, $zero, 0xBE
    ctx->r5 = ADD32(0, 0XBE);
    // 0x802BD8A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802BD8A8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802BD8AC: jal         0x8021F35C
    // 0x802BD8B0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_17;
    // 0x802BD8B0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_17:
    // 0x802BD8B4: jal         0x8021FCD0
    // 0x802BD8B8: nop

    static_3_8021FCD0(rdram, ctx);
        goto after_18;
    // 0x802BD8B8: nop

    after_18:
    // 0x802BD8BC: jal         0x802230E4
    // 0x802BD8C0: nop

    static_3_802230E4(rdram, ctx);
        goto after_19;
    // 0x802BD8C0: nop

    after_19:
    // 0x802BD8C4: jal         0x8022337C
    // 0x802BD8C8: nop

    static_3_8022337C(rdram, ctx);
        goto after_20;
    // 0x802BD8C8: nop

    after_20:
    // 0x802BD8CC: jal         0x8021E66C
    // 0x802BD8D0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_8021E66C(rdram, ctx);
        goto after_21;
    // 0x802BD8D0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_21:
    // 0x802BD8D4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802BD8D8: ldc1        $f12, 0x0($at)
    CHECK_FR(ctx, 12);
    ctx->f12.u64 = LD(ctx->r1, 0X0);
    // 0x802BD8DC: jal         0x8021E6EC
    // 0x802BD8E0: mov.d       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.d = ctx->f12.d;
    func_8021E6EC(rdram, ctx);
        goto after_22;
    // 0x802BD8E0: mov.d       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.d = ctx->f12.d;
    after_22:
    // 0x802BD8E4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802BD8E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802BD8EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802BD8F0: jal         0x8021E708
    // 0x802BD8F4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_23;
    // 0x802BD8F4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_23:
    // 0x802BD8F8: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802BD8FC: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802BD900: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x802BD904: jal         0x8021E87C
    // 0x802BD908: addiu       $a1, $zero, 0xCC
    ctx->r5 = ADD32(0, 0XCC);
    static_3_8021E87C(rdram, ctx);
        goto after_24;
    // 0x802BD908: addiu       $a1, $zero, 0xCC
    ctx->r5 = ADD32(0, 0XCC);
    after_24:
    // 0x802BD90C: jal         0x8021EC9C
    // 0x802BD910: nop

    static_3_8021EC9C(rdram, ctx);
        goto after_25;
    // 0x802BD910: nop

    after_25:
    // 0x802BD914: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x802BD918: mtc1        $at, $f13
    ctx->f_odd[(13 - 1) * 2] = ctx->r1;
    // 0x802BD91C: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x802BD920: jal         0x8021E6EC
    // 0x802BD924: mov.d       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.d = ctx->f12.d;
    func_8021E6EC(rdram, ctx);
        goto after_26;
    // 0x802BD924: mov.d       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.d = ctx->f12.d;
    after_26:
    // 0x802BD928: jal         0x8021E66C
    // 0x802BD92C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    static_3_8021E66C(rdram, ctx);
        goto after_27;
    // 0x802BD92C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_27:
    // 0x802BD930: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802BD934: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x802BD938: jr          $ra
    // 0x802BD93C: nop

    return;
    // 0x802BD93C: nop

;}
RECOMP_FUNC void D_802B66F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B6774: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B6778: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B677C: jal         0x80318774
    // 0x802B6780: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_80318774(rdram, ctx);
        goto after_0;
    // 0x802B6780: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802B6784: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x802B6788: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B678C: lwc1        $f4, 0x5E4($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X5E4);
    // 0x802B6790: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B6794: jr          $ra
    // 0x802B6798: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
    return;
    // 0x802B6798: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
;}
RECOMP_FUNC void D_80279B58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80279BD0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80279BD4: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x80279BD8: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80279BDC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80279BE0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80279BE4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80279BE8: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80279BEC: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x80279BF0: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x80279BF4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80279BF8: addiu       $a3, $t6, 0x6769
    ctx->r7 = ADD32(ctx->r14, 0X6769);
    // 0x80279BFC: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    // 0x80279C00: addiu       $a1, $t6, 0x6768
    ctx->r5 = ADD32(ctx->r14, 0X6768);
    // 0x80279C04: jal         0x802A1AB0
    // 0x80279C08: addiu       $a0, $a0, 0x6678
    ctx->r4 = ADD32(ctx->r4, 0X6678);
    static_3_802A1AB0(rdram, ctx);
        goto after_0;
    // 0x80279C08: addiu       $a0, $a0, 0x6678
    ctx->r4 = ADD32(ctx->r4, 0X6678);
    after_0:
    // 0x80279C0C: beq         $v0, $zero, L_80279C40
    if (ctx->r2 == 0) {
        // 0x80279C10: sw          $v0, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r2;
            goto L_80279C40;
    }
    // 0x80279C10: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80279C14: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80279C18: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80279C1C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80279C20: lw          $a2, 0x32A8($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X32A8);
    // 0x80279C24: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80279C28: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x80279C2C: jal         0x802878A4
    // 0x80279C30: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    static_3_802878A4(rdram, ctx);
        goto after_1;
    // 0x80279C30: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x80279C34: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80279C38: jal         0x80287CD4
    // 0x80279C3C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_80287CD4(rdram, ctx);
        goto after_2;
    // 0x80279C3C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
L_80279C40:
    // 0x80279C40: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80279C44: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x80279C48: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80279C4C: jr          $ra
    // 0x80279C50: nop

    return;
    // 0x80279C50: nop

;}
RECOMP_FUNC void D_802D8058(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D80D8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802D80DC: jr          $ra
    // 0x802D80E0: sb          $t6, 0x28($a0)
    MEM_B(0X28, ctx->r4) = ctx->r14;
    return;
    // 0x802D80E0: sb          $t6, 0x28($a0)
    MEM_B(0X28, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void D_802D84FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D857C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802D8580: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802D8584: lw          $v0, 0xB0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XB0);
    // 0x802D8588: sh          $zero, 0xF0($a0)
    MEM_H(0XF0, ctx->r4) = 0;
    // 0x802D858C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802D8590: lw          $t9, 0x54($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X54);
    // 0x802D8594: lh          $t6, 0x50($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X50);
    // 0x802D8598: jalr        $t9
    // 0x802D859C: addu        $a0, $t6, $a0
    ctx->r4 = ADD32(ctx->r14, ctx->r4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x802D859C: addu        $a0, $t6, $a0
    ctx->r4 = ADD32(ctx->r14, ctx->r4);
    after_0:
    // 0x802D85A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802D85A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802D85A8: jr          $ra
    // 0x802D85AC: nop

    return;
    // 0x802D85AC: nop

;}
RECOMP_FUNC void D_80237124(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80237124: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80237128: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x8023712C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80237130: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80237134: beql        $t6, $zero, L_80237150
    if (ctx->r14 == 0) {
        // 0x80237138: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80237150;
    }
    goto skip_0;
    // 0x80237138: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8023713C: jal         0x80242230
    // 0x80237140: nop

    static_3_80242230(rdram, ctx);
        goto after_0;
    // 0x80237140: nop

    after_0:
    // 0x80237144: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80237148: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
    // 0x8023714C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80237150:
    // 0x80237150: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80237154: jr          $ra
    // 0x80237158: nop

    return;
    // 0x80237158: nop

;}
RECOMP_FUNC void D_802CF110(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802CF190: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802CF194: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802CF198: jal         0x8028D994
    // 0x802CF19C: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    static_3_8028D994(rdram, ctx);
        goto after_0;
    // 0x802CF19C: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    after_0:
    // 0x802CF1A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802CF1A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802CF1A8: jr          $ra
    // 0x802CF1AC: nop

    return;
    // 0x802CF1AC: nop

;}
RECOMP_FUNC void func_8021BA90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021BA90: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8021BA94: lhu         $t6, 0x0($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X0);
    // 0x8021BA98: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8021BA9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021BAA0: slt         $at, $a0, $t6
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8021BAA4: bne         $at, $zero, L_8021BAC4
    if (ctx->r1 != 0) {
        // 0x8021BAA8: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_8021BAC4;
    }
    // 0x8021BAA8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8021BAAC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8021BAB0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8021BAB4: jal         0x80231A24
    // 0x8021BAB8: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x8021BAB8: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_0:
    // 0x8021BABC: b           L_8021BB28
    // 0x8021BAC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8021BB28;
    // 0x8021BAC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8021BAC4:
    // 0x8021BAC4: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x8021BAC8: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x8021BACC: sll         $v0, $a2, 3
    ctx->r2 = S32(ctx->r6 << 3);
    // 0x8021BAD0: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8021BAD4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8021BAD8: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x8021BADC: lbu         $t9, 0x9($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X9);
    // 0x8021BAE0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x8021BAE4: ori         $a1, $zero, 0xFFFF
    ctx->r5 = 0 | 0XFFFF;
    // 0x8021BAE8: bne         $t9, $zero, L_8021BB08
    if (ctx->r25 != 0) {
        // 0x8021BAEC: nop
    
            goto L_8021BB08;
    }
    // 0x8021BAEC: nop

    // 0x8021BAF0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8021BAF4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8021BAF8: jal         0x80231A24
    // 0x8021BAFC: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    static_3_80231A24(rdram, ctx);
        goto after_1;
    // 0x8021BAFC: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_1:
    // 0x8021BB00: b           L_8021BB28
    // 0x8021BB04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8021BB28;
    // 0x8021BB04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8021BB08:
    // 0x8021BB08: jal         0x8021ACB0
    // 0x8021BB0C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    static_3_8021ACB0(rdram, ctx);
        goto after_2;
    // 0x8021BB0C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_2:
    // 0x8021BB10: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x8021BB14: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x8021BB18: lw          $t0, 0x0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X0);
    // 0x8021BB1C: addu        $t1, $t0, $v0
    ctx->r9 = ADD32(ctx->r8, ctx->r2);
    // 0x8021BB20: sb          $zero, 0x9($t1)
    MEM_B(0X9, ctx->r9) = 0;
    // 0x8021BB24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8021BB28:
    // 0x8021BB28: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8021BB2C: jr          $ra
    // 0x8021BB30: nop

    return;
    // 0x8021BB30: nop

;}
RECOMP_FUNC void D_80234454(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80234454: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x80234458: subu        $t7, $t7, $a0
    ctx->r15 = SUB32(ctx->r15, ctx->r4);
    // 0x8023445C: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80234460: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x80234464: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80234468: addu        $t7, $t7, $a0
    ctx->r15 = ADD32(ctx->r15, ctx->r4);
    // 0x8023446C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80234470: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80234474: jr          $ra
    // 0x80234478: lh          $v0, 0x4($t8)
    ctx->r2 = MEM_H(ctx->r24, 0X4);
    return;
    // 0x80234478: lh          $v0, 0x4($t8)
    ctx->r2 = MEM_H(ctx->r24, 0X4);
;}
RECOMP_FUNC void D_8027A670(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027A6E8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8027A6EC: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x8027A6F0: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x8027A6F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8027A6F8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8027A6FC: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x8027A700: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8027A704: addiu       $a0, $a0, 0x68AC
    ctx->r4 = ADD32(ctx->r4, 0X68AC);
    // 0x8027A708: addiu       $a1, $t6, 0x68B0
    ctx->r5 = ADD32(ctx->r14, 0X68B0);
    // 0x8027A70C: addiu       $a3, $t6, 0x68B1
    ctx->r7 = ADD32(ctx->r14, 0X68B1);
    // 0x8027A710: jal         0x802A2310
    // 0x8027A714: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_802A2310(rdram, ctx);
        goto after_0;
    // 0x8027A714: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x8027A718: beq         $v0, $zero, L_8027A734
    if (ctx->r2 == 0) {
        // 0x8027A71C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8027A734;
    }
    // 0x8027A71C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8027A720: jal         0x8029DBB4
    // 0x8027A724: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    func_8029DB34(rdram, ctx);
        goto after_1;
    // 0x8027A724: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_1:
    // 0x8027A728: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8027A72C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8027A730: sh          $t8, 0xF0($a0)
    MEM_H(0XF0, ctx->r4) = ctx->r24;
L_8027A734:
    // 0x8027A734: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8027A738: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8027A73C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8027A740: jr          $ra
    // 0x8027A744: nop

    return;
    // 0x8027A744: nop

;}
RECOMP_FUNC void D_8021BB34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021BB34: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8021BB38: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8021BB3C: lui         $s2, 0x0
    ctx->r18 = S32(0X0 << 16);
    // 0x8021BB40: addiu       $s2, $s2, 0x0
    ctx->r18 = ADD32(ctx->r18, 0X0);
    // 0x8021BB44: lhu         $t6, 0x26($s2)
    ctx->r14 = MEM_HU(ctx->r18, 0X26);
    // 0x8021BB48: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8021BB4C: addiu       $s0, $zero, 0x24
    ctx->r16 = ADD32(0, 0X24);
    // 0x8021BB50: multu       $t6, $s0
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8021BB54: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8021BB58: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x8021BB5C: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x8021BB60: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x8021BB64: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x8021BB68: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8021BB6C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8021BB70: mflo        $a0
    ctx->r4 = lo;
    // 0x8021BB74: jal         0x8022BA58
    // 0x8021BB78: nop

    static_3_8022BA58(rdram, ctx);
        goto after_0;
    // 0x8021BB78: nop

    after_0:
    // 0x8021BB7C: lhu         $a0, 0x2A($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X2A);
    // 0x8021BB80: lui         $s4, 0x0
    ctx->r20 = S32(0X0 << 16);
    // 0x8021BB84: addiu       $s4, $s4, 0x0
    ctx->r20 = ADD32(ctx->r20, 0X0);
    // 0x8021BB88: sll         $t7, $a0, 6
    ctx->r15 = S32(ctx->r4 << 6);
    // 0x8021BB8C: sw          $v0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r2;
    // 0x8021BB90: jal         0x8022BA58
    // 0x8021BB94: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    static_3_8022BA58(rdram, ctx);
        goto after_1;
    // 0x8021BB94: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_1:
    // 0x8021BB98: lui         $s7, 0x0
    ctx->r23 = S32(0X0 << 16);
    // 0x8021BB9C: addiu       $s7, $s7, 0x0
    ctx->r23 = ADD32(ctx->r23, 0X0);
    // 0x8021BBA0: sw          $v0, 0x0($s7)
    MEM_W(0X0, ctx->r23) = ctx->r2;
    // 0x8021BBA4: jal         0x8022BA58
    // 0x8021BBA8: lhu         $a0, 0x2A($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X2A);
    static_3_8022BA58(rdram, ctx);
        goto after_2;
    // 0x8021BBA8: lhu         $a0, 0x2A($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X2A);
    after_2:
    // 0x8021BBAC: lhu         $a0, 0x26($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X26);
    // 0x8021BBB0: lui         $s6, 0x0
    ctx->r22 = S32(0X0 << 16);
    // 0x8021BBB4: addiu       $s6, $s6, 0x0
    ctx->r22 = ADD32(ctx->r22, 0X0);
    // 0x8021BBB8: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x8021BBBC: sw          $v0, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r2;
    // 0x8021BBC0: jal         0x8022BA58
    // 0x8021BBC4: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    static_3_8022BA58(rdram, ctx);
        goto after_3;
    // 0x8021BBC4: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_3:
    // 0x8021BBC8: lhu         $a0, 0x26($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X26);
    // 0x8021BBCC: lui         $s1, 0x0
    ctx->r17 = S32(0X0 << 16);
    // 0x8021BBD0: addiu       $s1, $s1, 0x0
    ctx->r17 = ADD32(ctx->r17, 0X0);
    // 0x8021BBD4: sll         $t9, $a0, 1
    ctx->r25 = S32(ctx->r4 << 1);
    // 0x8021BBD8: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x8021BBDC: jal         0x8022BA58
    // 0x8021BBE0: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    static_3_8022BA58(rdram, ctx);
        goto after_4;
    // 0x8021BBE0: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    after_4:
    // 0x8021BBE4: lhu         $a0, 0x2A($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X2A);
    // 0x8021BBE8: lui         $s5, 0x0
    ctx->r21 = S32(0X0 << 16);
    // 0x8021BBEC: addiu       $s5, $s5, 0x0
    ctx->r21 = ADD32(ctx->r21, 0X0);
    // 0x8021BBF0: sll         $t0, $a0, 2
    ctx->r8 = S32(ctx->r4 << 2);
    // 0x8021BBF4: sw          $v0, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r2;
    // 0x8021BBF8: jal         0x8022BA58
    // 0x8021BBFC: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    static_3_8022BA58(rdram, ctx);
        goto after_5;
    // 0x8021BBFC: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_5:
    // 0x8021BC00: lhu         $t1, 0x26($s2)
    ctx->r9 = MEM_HU(ctx->r18, 0X26);
    // 0x8021BC04: lui         $s3, 0x0
    ctx->r19 = S32(0X0 << 16);
    // 0x8021BC08: addiu       $s3, $s3, 0x0
    ctx->r19 = ADD32(ctx->r19, 0X0);
    // 0x8021BC0C: multu       $t1, $s0
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8021BC10: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    // 0x8021BC14: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    // 0x8021BC18: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8021BC1C: mflo        $a2
    ctx->r6 = lo;
    // 0x8021BC20: jal         0x8022B780
    // 0x8021BC24: nop

    static_3_8022B780(rdram, ctx);
        goto after_6;
    // 0x8021BC24: nop

    after_6:
    // 0x8021BC28: lhu         $a2, 0x2A($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X2A);
    // 0x8021BC2C: lw          $a0, 0x0($s7)
    ctx->r4 = MEM_W(ctx->r23, 0X0);
    // 0x8021BC30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8021BC34: sll         $t2, $a2, 6
    ctx->r10 = S32(ctx->r6 << 6);
    // 0x8021BC38: jal         0x8022B780
    // 0x8021BC3C: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    static_3_8022B780(rdram, ctx);
        goto after_7;
    // 0x8021BC3C: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    after_7:
    // 0x8021BC40: lw          $a0, 0x0($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X0);
    // 0x8021BC44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8021BC48: jal         0x8022B780
    // 0x8021BC4C: lhu         $a2, 0x2A($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X2A);
    static_3_8022B780(rdram, ctx);
        goto after_8;
    // 0x8021BC4C: lhu         $a2, 0x2A($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X2A);
    after_8:
    // 0x8021BC50: lhu         $a2, 0x26($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X26);
    // 0x8021BC54: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8021BC58: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8021BC5C: sll         $t3, $a2, 2
    ctx->r11 = S32(ctx->r6 << 2);
    // 0x8021BC60: jal         0x8022B780
    // 0x8021BC64: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    static_3_8022B780(rdram, ctx);
        goto after_9;
    // 0x8021BC64: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    after_9:
    // 0x8021BC68: lhu         $a2, 0x26($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X26);
    // 0x8021BC6C: lw          $a0, 0x0($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X0);
    // 0x8021BC70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8021BC74: sll         $t4, $a2, 1
    ctx->r12 = S32(ctx->r6 << 1);
    // 0x8021BC78: jal         0x8022B780
    // 0x8021BC7C: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    static_3_8022B780(rdram, ctx);
        goto after_10;
    // 0x8021BC7C: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    after_10:
    // 0x8021BC80: lhu         $a2, 0x2A($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X2A);
    // 0x8021BC84: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x8021BC88: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8021BC8C: sll         $t5, $a2, 2
    ctx->r13 = S32(ctx->r6 << 2);
    // 0x8021BC90: jal         0x8022B780
    // 0x8021BC94: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    static_3_8022B780(rdram, ctx);
        goto after_11;
    // 0x8021BC94: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    after_11:
    // 0x8021BC98: lhu         $v0, 0x26($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X26);
    // 0x8021BC9C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8021BCA0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8021BCA4: blez        $v0, L_8021BD10
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8021BCA8: ori         $s3, $zero, 0xFFFF
        ctx->r19 = 0 | 0XFFFF;
            goto L_8021BD10;
    }
    // 0x8021BCA8: ori         $s3, $zero, 0xFFFF
    ctx->r19 = 0 | 0XFFFF;
    // 0x8021BCAC: lw          $t6, 0x0($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X0);
L_8021BCB0:
    // 0x8021BCB0: addu        $t7, $t6, $s0
    ctx->r15 = ADD32(ctx->r14, ctx->r16);
    // 0x8021BCB4: sh          $s3, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r19;
    // 0x8021BCB8: lhu         $a0, 0x28($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X28);
    // 0x8021BCBC: sll         $t8, $a0, 1
    ctx->r24 = S32(ctx->r4 << 1);
    // 0x8021BCC0: jal         0x8022BA58
    // 0x8021BCC4: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    static_3_8022BA58(rdram, ctx);
        goto after_12;
    // 0x8021BCC4: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_12:
    // 0x8021BCC8: lw          $t9, 0x0($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X0);
    // 0x8021BCCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8021BCD0: addu        $t0, $t9, $s0
    ctx->r8 = ADD32(ctx->r25, ctx->r16);
    // 0x8021BCD4: sw          $v0, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r2;
    // 0x8021BCD8: lhu         $a2, 0x28($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X28);
    // 0x8021BCDC: lw          $t1, 0x0($s4)
    ctx->r9 = MEM_W(ctx->r20, 0X0);
    // 0x8021BCE0: sll         $t3, $a2, 1
    ctx->r11 = S32(ctx->r6 << 1);
    // 0x8021BCE4: addu        $t2, $t1, $s0
    ctx->r10 = ADD32(ctx->r9, ctx->r16);
    // 0x8021BCE8: lw          $a0, 0x4($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X4);
    // 0x8021BCEC: jal         0x8022B780
    // 0x8021BCF0: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    static_3_8022B780(rdram, ctx);
        goto after_13;
    // 0x8021BCF0: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    after_13:
    // 0x8021BCF4: lhu         $v0, 0x26($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X26);
    // 0x8021BCF8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8021BCFC: addiu       $s0, $s0, 0x24
    ctx->r16 = ADD32(ctx->r16, 0X24);
    // 0x8021BD00: slt         $at, $s1, $v0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8021BD04: bnel        $at, $zero, L_8021BCB0
    if (ctx->r1 != 0) {
        // 0x8021BD08: lw          $t6, 0x0($s4)
        ctx->r14 = MEM_W(ctx->r20, 0X0);
            goto L_8021BCB0;
    }
    goto skip_0;
    // 0x8021BD08: lw          $t6, 0x0($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X0);
    skip_0:
    // 0x8021BD0C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8021BD10:
    // 0x8021BD10: blez        $v0, L_8021BD44
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8021BD14: ori         $s3, $zero, 0xFFFF
        ctx->r19 = 0 | 0XFFFF;
            goto L_8021BD44;
    }
    // 0x8021BD14: ori         $s3, $zero, 0xFFFF
    ctx->r19 = 0 | 0XFFFF;
    // 0x8021BD18: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8021BD1C: lw          $t4, 0x0($s5)
    ctx->r12 = MEM_W(ctx->r21, 0X0);
L_8021BD20:
    // 0x8021BD20: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8021BD24: addu        $t5, $t4, $v0
    ctx->r13 = ADD32(ctx->r12, ctx->r2);
    // 0x8021BD28: sh          $s3, 0x0($t5)
    MEM_H(0X0, ctx->r13) = ctx->r19;
    // 0x8021BD2C: lhu         $t6, 0x26($s2)
    ctx->r14 = MEM_HU(ctx->r18, 0X26);
    // 0x8021BD30: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x8021BD34: slt         $at, $s1, $t6
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8021BD38: bnel        $at, $zero, L_8021BD20
    if (ctx->r1 != 0) {
        // 0x8021BD3C: lw          $t4, 0x0($s5)
        ctx->r12 = MEM_W(ctx->r21, 0X0);
            goto L_8021BD20;
    }
    goto skip_1;
    // 0x8021BD3C: lw          $t4, 0x0($s5)
    ctx->r12 = MEM_W(ctx->r21, 0X0);
    skip_1:
    // 0x8021BD40: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8021BD44:
    // 0x8021BD44: lhu         $v0, 0x2A($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X2A);
    // 0x8021BD48: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8021BD4C: blez        $v0, L_8021BD78
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8021BD50: nop
    
            goto L_8021BD78;
    }
    // 0x8021BD50: nop

    // 0x8021BD54: lw          $t7, 0x0($s6)
    ctx->r15 = MEM_W(ctx->r22, 0X0);
L_8021BD58:
    // 0x8021BD58: addu        $t8, $t7, $s1
    ctx->r24 = ADD32(ctx->r15, ctx->r17);
    // 0x8021BD5C: sb          $zero, 0x0($t8)
    MEM_B(0X0, ctx->r24) = 0;
    // 0x8021BD60: lhu         $v0, 0x2A($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X2A);
    // 0x8021BD64: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8021BD68: slt         $at, $s1, $v0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8021BD6C: bnel        $at, $zero, L_8021BD58
    if (ctx->r1 != 0) {
        // 0x8021BD70: lw          $t7, 0x0($s6)
        ctx->r15 = MEM_W(ctx->r22, 0X0);
            goto L_8021BD58;
    }
    goto skip_2;
    // 0x8021BD70: lw          $t7, 0x0($s6)
    ctx->r15 = MEM_W(ctx->r22, 0X0);
    skip_2:
    // 0x8021BD74: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8021BD78:
    // 0x8021BD78: blezl       $v0, L_8021BDA8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8021BD7C: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_8021BDA8;
    }
    goto skip_3;
    // 0x8021BD7C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_3:
    // 0x8021BD80: lw          $t9, 0x0($s7)
    ctx->r25 = MEM_W(ctx->r23, 0X0);
L_8021BD84:
    // 0x8021BD84: jal         0x8022970C
    // 0x8021BD88: addu        $a0, $t9, $s0
    ctx->r4 = ADD32(ctx->r25, ctx->r16);
    func_8022970C(rdram, ctx);
        goto after_14;
    // 0x8021BD88: addu        $a0, $t9, $s0
    ctx->r4 = ADD32(ctx->r25, ctx->r16);
    after_14:
    // 0x8021BD8C: lhu         $t0, 0x2A($s2)
    ctx->r8 = MEM_HU(ctx->r18, 0X2A);
    // 0x8021BD90: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8021BD94: addiu       $s0, $s0, 0x40
    ctx->r16 = ADD32(ctx->r16, 0X40);
    // 0x8021BD98: slt         $at, $s1, $t0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8021BD9C: bnel        $at, $zero, L_8021BD84
    if (ctx->r1 != 0) {
        // 0x8021BDA0: lw          $t9, 0x0($s7)
        ctx->r25 = MEM_W(ctx->r23, 0X0);
            goto L_8021BD84;
    }
    goto skip_4;
    // 0x8021BDA0: lw          $t9, 0x0($s7)
    ctx->r25 = MEM_W(ctx->r23, 0X0);
    skip_4:
    // 0x8021BDA4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8021BDA8:
    // 0x8021BDA8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8021BDAC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8021BDB0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8021BDB4: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8021BDB8: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8021BDBC: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x8021BDC0: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x8021BDC4: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x8021BDC8: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x8021BDCC: sh          $zero, 0x0($at)
    MEM_H(0X0, ctx->r1) = 0;
    // 0x8021BDD0: jr          $ra
    // 0x8021BDD4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8021BDD4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void D_802EBE20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EBEA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802EBEA4: bne         $a0, $zero, L_802EBEBC
    if (ctx->r4 != 0) {
        // 0x802EBEA8: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802EBEBC;
    }
    // 0x802EBEA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802EBEAC: jal         0x802C67EC
    // 0x802EBEB0: addiu       $a0, $zero, 0xF0
    ctx->r4 = ADD32(0, 0XF0);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802EBEB0: addiu       $a0, $zero, 0xF0
    ctx->r4 = ADD32(0, 0XF0);
    after_0:
    // 0x802EBEB4: beq         $v0, $zero, L_802EBF14
    if (ctx->r2 == 0) {
        // 0x802EBEB8: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802EBF14;
    }
    // 0x802EBEB8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_802EBEBC:
    // 0x802EBEBC: jal         0x8031C47C
    // 0x802EBEC0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_8031C47C(rdram, ctx);
        goto after_1;
    // 0x802EBEC0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x802EBEC4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802EBEC8: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x802EBECC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802EBED0: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802EBED4: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x802EBED8: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x802EBEDC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802EBEE0: addiu       $t9, $zero, 0x14
    ctx->r25 = ADD32(0, 0X14);
    // 0x802EBEE4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802EBEE8: sw          $zero, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = 0;
    // 0x802EBEEC: sh          $t6, 0xBC($a0)
    MEM_H(0XBC, ctx->r4) = ctx->r14;
    // 0x802EBEF0: sw          $t7, 0xB8($a0)
    MEM_W(0XB8, ctx->r4) = ctx->r15;
    // 0x802EBEF4: sh          $t8, 0xE4($a0)
    MEM_H(0XE4, ctx->r4) = ctx->r24;
    // 0x802EBEF8: sh          $t9, 0xE6($a0)
    MEM_H(0XE6, ctx->r4) = ctx->r25;
    // 0x802EBEFC: swc1        $f0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->f0.u32l;
    // 0x802EBF00: swc1        $f0, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f0.u32l;
    // 0x802EBF04: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802EBF08: jal         0x8031C680
    // 0x802EBF0C: swc1        $f4, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->f4.u32l;
    static_3_8031C680(rdram, ctx);
        goto after_2;
    // 0x802EBF0C: swc1        $f4, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->f4.u32l;
    after_2:
    // 0x802EBF10: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_802EBF14:
    // 0x802EBF14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802EBF18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802EBF1C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x802EBF20: jr          $ra
    // 0x802EBF24: nop

    return;
    // 0x802EBF24: nop

;}
RECOMP_FUNC void D_802EC5D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EC658: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802EC65C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802EC660: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x802EC664: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802EC668: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802EC66C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802EC670: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x802EC674: addiu       $t6, $zero, 0x9
    ctx->r14 = ADD32(0, 0X9);
    // 0x802EC678: addiu       $t7, $zero, 0x18D
    ctx->r15 = ADD32(0, 0X18D);
    // 0x802EC67C: addiu       $t8, $zero, 0xC
    ctx->r24 = ADD32(0, 0XC);
    // 0x802EC680: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802EC684: sh          $t6, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r14;
    // 0x802EC688: sh          $t9, 0xA4($a0)
    MEM_H(0XA4, ctx->r4) = ctx->r25;
    // 0x802EC68C: sh          $t8, 0xA6($a0)
    MEM_H(0XA6, ctx->r4) = ctx->r24;
    // 0x802EC690: sh          $t7, 0x9C($a0)
    MEM_H(0X9C, ctx->r4) = ctx->r15;
    // 0x802EC694: sh          $v0, 0x98($a0)
    MEM_H(0X98, ctx->r4) = ctx->r2;
    // 0x802EC698: sh          $v0, 0x9A($a0)
    MEM_H(0X9A, ctx->r4) = ctx->r2;
    // 0x802EC69C: swc1        $f0, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f0.u32l;
    // 0x802EC6A0: swc1        $f0, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f0.u32l;
    // 0x802EC6A4: swc1        $f4, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->f4.u32l;
    // 0x802EC6A8: jr          $ra
    // 0x802EC6AC: swc1        $f6, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f6.u32l;
    return;
    // 0x802EC6AC: swc1        $f6, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f6.u32l;
;}
RECOMP_FUNC void D_802ECA98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802ECB18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802ECB1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802ECB20: beq         $a0, $zero, L_802ECB50
    if (ctx->r4 == 0) {
        // 0x802ECB24: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_802ECB50;
    }
    // 0x802ECB24: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802ECB28: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802ECB2C: jal         0x8031C514
    // 0x802ECB30: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_8031C514(rdram, ctx);
        goto after_0;
    // 0x802ECB30: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802ECB34: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x802ECB38: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802ECB3C: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x802ECB40: beql        $t7, $zero, L_802ECB54
    if (ctx->r15 == 0) {
        // 0x802ECB44: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802ECB54;
    }
    goto skip_0;
    // 0x802ECB44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802ECB48: jal         0x802C681C
    // 0x802ECB4C: nop

    static_3_802C681C(rdram, ctx);
        goto after_1;
    // 0x802ECB4C: nop

    after_1:
L_802ECB50:
    // 0x802ECB50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802ECB54:
    // 0x802ECB54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802ECB58: jr          $ra
    // 0x802ECB5C: nop

    return;
    // 0x802ECB5C: nop

;}
RECOMP_FUNC void D_80294190(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80294210: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x80294214: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80294218: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8029421C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80294220: jal         0x802C51D0
    // 0x80294224: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    static_3_802C51D0(rdram, ctx);
        goto after_0;
    // 0x80294224: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_0:
    // 0x80294228: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8029422C: addiu       $t6, $s0, 0x13C
    ctx->r14 = ADD32(ctx->r16, 0X13C);
    // 0x80294230: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x80294234: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80294238: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8029423C: lwc1        $f4, 0x154($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X154);
    // 0x80294240: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x80294244: addiu       $a2, $s0, 0x128
    ctx->r6 = ADD32(ctx->r16, 0X128);
    // 0x80294248: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x8029424C: lwc1        $f6, 0x158($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X158);
    // 0x80294250: addiu       $a3, $s0, 0x114
    ctx->r7 = ADD32(ctx->r16, 0X114);
    // 0x80294254: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x80294258: lw          $t8, 0x8C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8C);
    // 0x8029425C: jal         0x802ADA50
    // 0x80294260: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    static_3_802ADA50(rdram, ctx);
        goto after_1;
    // 0x80294260: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    after_1:
    // 0x80294264: sh          $v0, 0x10E($s0)
    MEM_H(0X10E, ctx->r16) = ctx->r2;
    // 0x80294268: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8029426C: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80294270: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x80294274: jr          $ra
    // 0x80294278: nop

    return;
    // 0x80294278: nop

;}
RECOMP_FUNC void D_802A2000(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A2080: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802A2084: jr          $ra
    // 0x802A2088: swc1        $f12, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f12.u32l;
    return;
    // 0x802A2088: swc1        $f12, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f12.u32l;
;}
