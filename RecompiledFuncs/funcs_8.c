#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void D_802235B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802235B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802235B4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802235B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802235BC: beq         $a0, $zero, L_802235D4
    if (ctx->r4 == 0) {
        // 0x802235C0: sw          $a0, 0x0($at)
        MEM_W(0X0, ctx->r1) = ctx->r4;
            goto L_802235D4;
    }
    // 0x802235C0: sw          $a0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r4;
    // 0x802235C4: jal         0x8023CF00
    // 0x802235C8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    static_3_8023CF00(rdram, ctx);
        goto after_0;
    // 0x802235C8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x802235CC: b           L_802235E0
    // 0x802235D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802235E0;
    // 0x802235D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802235D4:
    // 0x802235D4: jal         0x8023CF00
    // 0x802235D8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    static_3_8023CF00(rdram, ctx);
        goto after_1;
    // 0x802235D8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_1:
    // 0x802235DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802235E0:
    // 0x802235E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802235E4: jr          $ra
    // 0x802235E8: nop

    return;
    // 0x802235E8: nop

;}
RECOMP_FUNC void D_8022813C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022813C: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x80228140: addiu       $v0, $v0, 0x0
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x80228144: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x80228148: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022814C: jr          $ra
    // 0x80228150: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
    return;
    // 0x80228150: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
;}
RECOMP_FUNC void D_80241EF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80241EF4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80241EF8: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x80241EFC: jr          $ra
    // 0x80241F00: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    return;
    // 0x80241F00: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
;}
RECOMP_FUNC void D_8027F8F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027F96C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8027F970: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8027F974: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8027F978: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x8027F97C: c.le.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl <= ctx->f12.fl;
    // 0x8027F980: nop

    // 0x8027F984: bc1fl       L_8027F9A0
    if (!c1cs) {
        // 0x8027F988: mtc1        $at, $f14
        ctx->f14.u32l = ctx->r1;
            goto L_8027F9A0;
    }
    goto skip_0;
    // 0x8027F988: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    skip_0:
    // 0x8027F98C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x8027F990: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8027F994: b           L_8027F9A8
    // 0x8027F998: add.s       $f0, $f12, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f12.fl + ctx->f14.fl;
        goto L_8027F9A8;
    // 0x8027F998: add.s       $f0, $f12, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f12.fl + ctx->f14.fl;
    // 0x8027F99C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
L_8027F9A0:
    // 0x8027F9A0: nop

    // 0x8027F9A4: sub.s       $f0, $f12, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f14.fl;
L_8027F9A8:
    // 0x8027F9A8: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x8027F9AC: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    // 0x8027F9B0: nop

    // 0x8027F9B4: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x8027F9B8: nop

    // 0x8027F9BC: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8027F9C0: c.lt.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl < ctx->f8.fl;
    // 0x8027F9C4: nop

    // 0x8027F9C8: bc1fl       L_8027FA0C
    if (!c1cs) {
        // 0x8027F9CC: c.le.s      $f2, $f12
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl <= ctx->f12.fl;
            goto L_8027FA0C;
    }
    goto skip_1;
    // 0x8027F9CC: c.le.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl <= ctx->f12.fl;
    skip_1:
    // 0x8027F9D0: c.le.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl <= ctx->f12.fl;
    // 0x8027F9D4: nop

    // 0x8027F9D8: bc1fl       L_8027F9F8
    if (!c1cs) {
        // 0x8027F9DC: sub.s       $f0, $f12, $f14
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f14.fl;
            goto L_8027F9F8;
    }
    goto skip_2;
    // 0x8027F9DC: sub.s       $f0, $f12, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f14.fl;
    skip_2:
    // 0x8027F9E0: add.s       $f0, $f12, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f12.fl + ctx->f14.fl;
    // 0x8027F9E4: trunc.w.s   $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x8027F9E8: mfc1        $v0, $f10
    ctx->r2 = (int32_t)ctx->f10.u32l;
    // 0x8027F9EC: b           L_8027FA38
    // 0x8027F9F0: mtc1        $v0, $f18
    ctx->f18.u32l = ctx->r2;
        goto L_8027FA38;
    // 0x8027F9F0: mtc1        $v0, $f18
    ctx->f18.u32l = ctx->r2;
    // 0x8027F9F4: sub.s       $f0, $f12, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f14.fl;
L_8027F9F8:
    // 0x8027F9F8: trunc.w.s   $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x8027F9FC: mfc1        $v0, $f10
    ctx->r2 = (int32_t)ctx->f10.u32l;
    // 0x8027FA00: b           L_8027FA38
    // 0x8027FA04: mtc1        $v0, $f18
    ctx->f18.u32l = ctx->r2;
        goto L_8027FA38;
    // 0x8027FA04: mtc1        $v0, $f18
    ctx->f18.u32l = ctx->r2;
    // 0x8027FA08: c.le.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl <= ctx->f12.fl;
L_8027FA0C:
    // 0x8027FA0C: nop

    // 0x8027FA10: bc1fl       L_8027FA24
    if (!c1cs) {
        // 0x8027FA14: sub.s       $f0, $f12, $f14
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f14.fl;
            goto L_8027FA24;
    }
    goto skip_3;
    // 0x8027FA14: sub.s       $f0, $f12, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f14.fl;
    skip_3:
    // 0x8027FA18: b           L_8027FA24
    // 0x8027FA1C: add.s       $f0, $f12, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f12.fl + ctx->f14.fl;
        goto L_8027FA24;
    // 0x8027FA1C: add.s       $f0, $f12, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f12.fl + ctx->f14.fl;
    // 0x8027FA20: sub.s       $f0, $f12, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f14.fl;
L_8027FA24:
    // 0x8027FA24: trunc.w.s   $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x8027FA28: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x8027FA2C: nop

    // 0x8027FA30: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8027FA34: mtc1        $v0, $f18
    ctx->f18.u32l = ctx->r2;
L_8027FA38:
    // 0x8027FA38: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8027FA3C: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8027FA40: cvt.s.w     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8027FA44: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8027FA48: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x8027FA4C: nop

    // 0x8027FA50: bc1f        L_8027FA74
    if (!c1cs) {
        // 0x8027FA54: nop
    
            goto L_8027FA74;
    }
    // 0x8027FA54: nop

    // 0x8027FA58: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8027FA5C: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x8027FA60: nop

    // 0x8027FA64: bc1f        L_8027FA74
    if (!c1cs) {
        // 0x8027FA68: nop
    
            goto L_8027FA74;
    }
    // 0x8027FA68: nop

    // 0x8027FA6C: jr          $ra
    // 0x8027FA70: addiu       $v0, $zero, 0xA3
    ctx->r2 = ADD32(0, 0XA3);
    return;
    // 0x8027FA70: addiu       $v0, $zero, 0xA3
    ctx->r2 = ADD32(0, 0XA3);
L_8027FA74:
    // 0x8027FA74: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8027FA78: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8027FA7C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8027FA80: c.le.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl <= ctx->f0.fl;
    // 0x8027FA84: nop

    // 0x8027FA88: bc1f        L_8027FAAC
    if (!c1cs) {
        // 0x8027FA8C: nop
    
            goto L_8027FAAC;
    }
    // 0x8027FA8C: nop

    // 0x8027FA90: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8027FA94: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x8027FA98: nop

    // 0x8027FA9C: bc1f        L_8027FAAC
    if (!c1cs) {
        // 0x8027FAA0: nop
    
            goto L_8027FAAC;
    }
    // 0x8027FAA0: nop

    // 0x8027FAA4: jr          $ra
    // 0x8027FAA8: addiu       $v0, $zero, 0xA5
    ctx->r2 = ADD32(0, 0XA5);
    return;
    // 0x8027FAA8: addiu       $v0, $zero, 0xA5
    ctx->r2 = ADD32(0, 0XA5);
L_8027FAAC:
    // 0x8027FAAC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8027FAB0: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8027FAB4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8027FAB8: c.le.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl <= ctx->f0.fl;
    // 0x8027FABC: nop

    // 0x8027FAC0: bc1f        L_8027FAE4
    if (!c1cs) {
        // 0x8027FAC4: nop
    
            goto L_8027FAE4;
    }
    // 0x8027FAC4: nop

    // 0x8027FAC8: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8027FACC: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x8027FAD0: nop

    // 0x8027FAD4: bc1f        L_8027FAE4
    if (!c1cs) {
        // 0x8027FAD8: nop
    
            goto L_8027FAE4;
    }
    // 0x8027FAD8: nop

    // 0x8027FADC: jr          $ra
    // 0x8027FAE0: addiu       $v0, $zero, 0xA9
    ctx->r2 = ADD32(0, 0XA9);
    return;
    // 0x8027FAE0: addiu       $v0, $zero, 0xA9
    ctx->r2 = ADD32(0, 0XA9);
L_8027FAE4:
    // 0x8027FAE4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8027FAE8: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8027FAEC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8027FAF0: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x8027FAF4: nop

    // 0x8027FAF8: bc1f        L_8027FB1C
    if (!c1cs) {
        // 0x8027FAFC: nop
    
            goto L_8027FB1C;
    }
    // 0x8027FAFC: nop

    // 0x8027FB00: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8027FB04: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x8027FB08: nop

    // 0x8027FB0C: bc1f        L_8027FB1C
    if (!c1cs) {
        // 0x8027FB10: nop
    
            goto L_8027FB1C;
    }
    // 0x8027FB10: nop

    // 0x8027FB14: jr          $ra
    // 0x8027FB18: addiu       $v0, $zero, 0xAC
    ctx->r2 = ADD32(0, 0XAC);
    return;
    // 0x8027FB18: addiu       $v0, $zero, 0xAC
    ctx->r2 = ADD32(0, 0XAC);
L_8027FB1C:
    // 0x8027FB1C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8027FB20: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8027FB24: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8027FB28: c.le.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl <= ctx->f0.fl;
    // 0x8027FB2C: nop

    // 0x8027FB30: bc1f        L_8027FB40
    if (!c1cs) {
        // 0x8027FB34: nop
    
            goto L_8027FB40;
    }
    // 0x8027FB34: nop

    // 0x8027FB38: jr          $ra
    // 0x8027FB3C: addiu       $v0, $zero, 0xAE
    ctx->r2 = ADD32(0, 0XAE);
    return;
    // 0x8027FB3C: addiu       $v0, $zero, 0xAE
    ctx->r2 = ADD32(0, 0XAE);
L_8027FB40:
    // 0x8027FB40: jr          $ra
    // 0x8027FB44: nop

    return;
    // 0x8027FB44: nop

;}
RECOMP_FUNC void D_80282C10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282C90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80282C94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80282C98: bne         $a0, $zero, L_80282CB0
    if (ctx->r4 != 0) {
        // 0x80282C9C: or          $a1, $a0, $zero
        ctx->r5 = ctx->r4 | 0;
            goto L_80282CB0;
    }
    // 0x80282C9C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80282CA0: jal         0x802C67EC
    // 0x80282CA4: addiu       $a0, $zero, 0x1E4
    ctx->r4 = ADD32(0, 0X1E4);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x80282CA4: addiu       $a0, $zero, 0x1E4
    ctx->r4 = ADD32(0, 0X1E4);
    after_0:
    // 0x80282CA8: beq         $v0, $zero, L_80282CCC
    if (ctx->r2 == 0) {
        // 0x80282CAC: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_80282CCC;
    }
    // 0x80282CAC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_80282CB0:
    // 0x80282CB0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80282CB4: jal         0x8031C5B0
    // 0x80282CB8: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    static_3_8031C5B0(rdram, ctx);
        goto after_1;
    // 0x80282CB8: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_1:
    // 0x80282CBC: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x80282CC0: jal         0x8031CB84
    // 0x80282CC4: addiu       $a0, $a1, 0xF0
    ctx->r4 = ADD32(ctx->r5, 0XF0);
    static_3_8031CB84(rdram, ctx);
        goto after_2;
    // 0x80282CC4: addiu       $a0, $a1, 0xF0
    ctx->r4 = ADD32(ctx->r5, 0XF0);
    after_2:
    // 0x80282CC8: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
L_80282CCC:
    // 0x80282CCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80282CD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80282CD4: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x80282CD8: jr          $ra
    // 0x80282CDC: nop

    return;
    // 0x80282CDC: nop

;}
RECOMP_FUNC void D_80247CC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80247CC0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80247CC4: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80247CC8: lbu         $t7, 0x3F($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X3F);
    // 0x80247CCC: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80247CD0: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x80247CD4: slti        $at, $t7, 0x41
    ctx->r1 = SIGNED(ctx->r15) < 0X41 ? 1 : 0;
    // 0x80247CD8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80247CDC: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80247CE0: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x80247CE4: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x80247CE8: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x80247CEC: bne         $at, $zero, L_80247CFC
    if (ctx->r1 != 0) {
        // 0x80247CF0: sw          $t6, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r14;
            goto L_80247CFC;
    }
    // 0x80247CF0: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x80247CF4: b           L_80247EA0
    // 0x80247CF8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80247EA0;
    // 0x80247CF8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80247CFC:
    // 0x80247CFC: jal         0x80245AD0
    // 0x80247D00: nop

    static_3_80245AD0(rdram, ctx);
        goto after_0;
    // 0x80247D00: nop

    after_0:
    // 0x80247D04: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80247D08: jal         0x80247AEC
    // 0x80247D0C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    static_3_80247AEC(rdram, ctx);
        goto after_1;
    // 0x80247D0C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_1:
    // 0x80247D10: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x80247D14: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80247D18: bne         $t8, $zero, L_80247D30
    if (ctx->r24 != 0) {
        // 0x80247D1C: nop
    
            goto L_80247D30;
    }
    // 0x80247D1C: nop

    // 0x80247D20: lhu         $t9, 0x28($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X28);
    // 0x80247D24: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x80247D28: beq         $t9, $at, L_80247D38
    if (ctx->r25 == ctx->r1) {
        // 0x80247D2C: nop
    
            goto L_80247D38;
    }
    // 0x80247D2C: nop

L_80247D30:
    // 0x80247D30: b           L_80247EA0
    // 0x80247D34: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_80247EA0;
    // 0x80247D34: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_80247D38:
    // 0x80247D38: lbu         $t0, 0x2A($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X2A);
    // 0x80247D3C: andi        $t1, $t0, 0x80
    ctx->r9 = ctx->r8 & 0X80;
    // 0x80247D40: beq         $t1, $zero, L_80247D64
    if (ctx->r9 == 0) {
        // 0x80247D44: nop
    
            goto L_80247D64;
    }
    // 0x80247D44: nop

L_80247D48:
    // 0x80247D48: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80247D4C: jal         0x80247AEC
    // 0x80247D50: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    static_3_80247AEC(rdram, ctx);
        goto after_2;
    // 0x80247D50: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_2:
    // 0x80247D54: lbu         $t2, 0x2A($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X2A);
    // 0x80247D58: andi        $t3, $t2, 0x80
    ctx->r11 = ctx->r10 & 0X80;
    // 0x80247D5C: bne         $t3, $zero, L_80247D48
    if (ctx->r11 != 0) {
        // 0x80247D60: nop
    
            goto L_80247D48;
    }
    // 0x80247D60: nop

L_80247D64:
    // 0x80247D64: jal         0x80247F00
    // 0x80247D68: lbu         $a0, 0x3F($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X3F);
    static_3_80247F00(rdram, ctx);
        goto after_3;
    // 0x80247D68: lbu         $a0, 0x3F($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X3F);
    after_3:
    // 0x80247D6C: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80247D70: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80247D74: jal         0x802465B0
    // 0x80247D78: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    static_3_802465B0(rdram, ctx);
        goto after_4;
    // 0x80247D78: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
    // 0x80247D7C: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x80247D80: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80247D84: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80247D88: jal         0x802374B0
    // 0x80247D8C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_802374B0(rdram, ctx);
        goto after_5;
    // 0x80247D8C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x80247D90: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
L_80247D94:
    // 0x80247D94: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x80247D98: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x80247D9C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80247DA0: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80247DA4: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80247DA8: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x80247DAC: sw          $t4, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r12;
    // 0x80247DB0: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80247DB4: slti        $at, $t8, 0x10
    ctx->r1 = SIGNED(ctx->r24) < 0X10 ? 1 : 0;
    // 0x80247DB8: bne         $at, $zero, L_80247D94
    if (ctx->r1 != 0) {
        // 0x80247DBC: sw          $t8, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r24;
            goto L_80247D94;
    }
    // 0x80247DBC: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x80247DC0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80247DC4: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80247DC8: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
    // 0x80247DCC: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80247DD0: jal         0x802465B0
    // 0x80247DD4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_802465B0(rdram, ctx);
        goto after_6;
    // 0x80247DD4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_6:
    // 0x80247DD8: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x80247DDC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80247DE0: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x80247DE4: sb          $t9, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r25;
    // 0x80247DE8: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80247DEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80247DF0: jal         0x802374B0
    // 0x80247DF4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_802374B0(rdram, ctx);
        goto after_7;
    // 0x80247DF4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_7:
    // 0x80247DF8: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
L_80247DFC:
    // 0x80247DFC: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x80247E00: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80247E04: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80247E08: slti        $at, $t3, 0x4
    ctx->r1 = SIGNED(ctx->r11) < 0X4 ? 1 : 0;
    // 0x80247E0C: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80247E10: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x80247E14: bne         $at, $zero, L_80247DFC
    if (ctx->r1 != 0) {
        // 0x80247E18: sw          $t1, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r9;
            goto L_80247DFC;
    }
    // 0x80247E18: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x80247E1C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80247E20: addiu       $t5, $sp, 0x1C
    ctx->r13 = ADD32(ctx->r29, 0X1C);
    // 0x80247E24: lwl         $at, 0x0($t4)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r12, 0X0);
    // 0x80247E28: lwr         $at, 0x3($t4)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r12, 0X3);
    // 0x80247E2C: sw          $at, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r1;
    // 0x80247E30: lwl         $t7, 0x4($t4)
    ctx->r15 = do_lwl(rdram, ctx->r15, ctx->r12, 0X4);
    // 0x80247E34: lwr         $t7, 0x7($t4)
    ctx->r15 = do_lwr(rdram, ctx->r15, ctx->r12, 0X7);
    // 0x80247E38: sw          $t7, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r15;
    // 0x80247E3C: lwl         $at, 0x8($t4)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r12, 0X8);
    // 0x80247E40: lwr         $at, 0xB($t4)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r12, 0XB);
    // 0x80247E44: sw          $at, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->r1;
    // 0x80247E48: lbu         $t8, 0x1D($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X1D);
    // 0x80247E4C: andi        $t9, $t8, 0xC0
    ctx->r25 = ctx->r24 & 0XC0;
    // 0x80247E50: sra         $t0, $t9, 4
    ctx->r8 = S32(SIGNED(ctx->r25) >> 4);
    // 0x80247E54: bne         $t0, $zero, L_80247E94
    if (ctx->r8 != 0) {
        // 0x80247E58: sw          $t0, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r8;
            goto L_80247E94;
    }
    // 0x80247E58: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x80247E5C: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
L_80247E60:
    // 0x80247E60: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x80247E64: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
    // 0x80247E68: addu        $t2, $sp, $t1
    ctx->r10 = ADD32(ctx->r29, ctx->r9);
    // 0x80247E6C: lbu         $t2, 0x20($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X20);
    // 0x80247E70: sb          $t2, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r10;
    // 0x80247E74: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x80247E78: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x80247E7C: addiu       $t7, $t4, 0x1
    ctx->r15 = ADD32(ctx->r12, 0X1);
    // 0x80247E80: slti        $at, $t7, 0x8
    ctx->r1 = SIGNED(ctx->r15) < 0X8 ? 1 : 0;
    // 0x80247E84: addiu       $t5, $t6, 0x1
    ctx->r13 = ADD32(ctx->r14, 0X1);
    // 0x80247E88: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x80247E8C: bne         $at, $zero, L_80247E60
    if (ctx->r1 != 0) {
        // 0x80247E90: sw          $t5, 0x40($sp)
        MEM_W(0X40, ctx->r29) = ctx->r13;
            goto L_80247E60;
    }
    // 0x80247E90: sw          $t5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r13;
L_80247E94:
    // 0x80247E94: jal         0x80245B14
    // 0x80247E98: nop

    static_3_80245B14(rdram, ctx);
        goto after_8;
    // 0x80247E98: nop

    after_8:
    // 0x80247E9C: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
L_80247EA0:
    // 0x80247EA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80247EA4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80247EA8: jr          $ra
    // 0x80247EAC: nop

    return;
    // 0x80247EAC: nop

;}
RECOMP_FUNC void D_802A21D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A2254: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802A2258: jr          $ra
    // 0x802A225C: sb          $a1, 0xA8($a0)
    MEM_B(0XA8, ctx->r4) = ctx->r5;
    return;
    // 0x802A225C: sb          $a1, 0xA8($a0)
    MEM_B(0XA8, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void D_8021FC80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021FC80: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8021FC84: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x8021FC88: lh          $v0, 0x0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X0);
    // 0x8021FC8C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8021FC90: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8021FC94: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8021FC98: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8021FC9C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8021FCA0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8021FCA4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8021FCA8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8021FCAC: bne         $v0, $at, L_8021FCE0
    if (ctx->r2 != ctx->r1) {
        // 0x8021FCB0: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_8021FCE0;
    }
    // 0x8021FCB0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8021FCB4: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x8021FCB8: lh          $v0, 0x0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X0);
    // 0x8021FCBC: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8021FCC0: lh          $t6, 0x0($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X0);
    // 0x8021FCC4: sll         $t5, $v0, 16
    ctx->r13 = S32(ctx->r2 << 16);
    // 0x8021FCC8: sra         $t9, $t5, 16
    ctx->r25 = S32(SIGNED(ctx->r13) >> 16);
    // 0x8021FCCC: subu        $t4, $t6, $v0
    ctx->r12 = SUB32(ctx->r14, ctx->r2);
    // 0x8021FCD0: sll         $t7, $t4, 16
    ctx->r15 = S32(ctx->r12 << 16);
    // 0x8021FCD4: sra         $t4, $t7, 16
    ctx->r12 = S32(SIGNED(ctx->r15) >> 16);
    // 0x8021FCD8: b           L_8021FD00
    // 0x8021FCDC: or          $t5, $t9, $zero
    ctx->r13 = ctx->r25 | 0;
        goto L_8021FD00;
    // 0x8021FCDC: or          $t5, $t9, $zero
    ctx->r13 = ctx->r25 | 0;
L_8021FCE0:
    // 0x8021FCE0: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8021FCE4: lh          $t6, 0x0($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X0);
    // 0x8021FCE8: sll         $t5, $v0, 16
    ctx->r13 = S32(ctx->r2 << 16);
    // 0x8021FCEC: sra         $t9, $t5, 16
    ctx->r25 = S32(SIGNED(ctx->r13) >> 16);
    // 0x8021FCF0: subu        $t4, $t6, $v0
    ctx->r12 = SUB32(ctx->r14, ctx->r2);
    // 0x8021FCF4: sll         $t7, $t4, 16
    ctx->r15 = S32(ctx->r12 << 16);
    // 0x8021FCF8: sra         $t4, $t7, 16
    ctx->r12 = S32(SIGNED(ctx->r15) >> 16);
    // 0x8021FCFC: or          $t5, $t9, $zero
    ctx->r13 = ctx->r25 | 0;
L_8021FD00:
    // 0x8021FD00: slti        $at, $t4, 0x3
    ctx->r1 = SIGNED(ctx->r12) < 0X3 ? 1 : 0;
    // 0x8021FD04: beq         $at, $zero, L_8021FD20
    if (ctx->r1 == 0) {
        // 0x8021FD08: addiu       $s1, $zero, 0x1
        ctx->r17 = ADD32(0, 0X1);
            goto L_8021FD20;
    }
    // 0x8021FD08: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x8021FD0C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8021FD10: jal         0x80231A24
    // 0x8021FD14: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x8021FD14: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x8021FD18: b           L_8021FF28
    // 0x8021FD1C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_8021FF28;
    // 0x8021FD1C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8021FD20:
    // 0x8021FD20: blez        $t4, L_8021FF24
    if (SIGNED(ctx->r12) <= 0) {
        // 0x8021FD24: lui         $s6, 0x8000
        ctx->r22 = S32(0X8000 << 16);
            goto L_8021FF24;
    }
    // 0x8021FD24: lui         $s6, 0x8000
    ctx->r22 = S32(0X8000 << 16);
    // 0x8021FD28: lui         $s5, 0x40F
    ctx->r21 = S32(0X40F << 16);
    // 0x8021FD2C: lui         $s4, 0x4D1
    ctx->r20 = S32(0X4D1 << 16);
    // 0x8021FD30: lui         $ra, 0x0
    ctx->r31 = S32(0X0 << 16);
    // 0x8021FD34: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x8021FD38: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x8021FD3C: addiu       $ra, $ra, 0x0
    ctx->r31 = ADD32(ctx->r31, 0X0);
    // 0x8021FD40: ori         $s4, $s4, 0xE0
    ctx->r20 = ctx->r20 | 0XE0;
    // 0x8021FD44: ori         $s5, $s5, 0x10
    ctx->r21 = ctx->r21 | 0X10;
    // 0x8021FD48: ori         $s6, $s6, 0xE0
    ctx->r22 = ctx->r22 | 0XE0;
    // 0x8021FD4C: ori         $s3, $zero, 0x960A
    ctx->r19 = 0 | 0X960A;
    // 0x8021FD50: lui         $s2, 0x400
    ctx->r18 = S32(0X400 << 16);
    // 0x8021FD54: lui         $s0, 0x8000
    ctx->r16 = S32(0X8000 << 16);
    // 0x8021FD58: addiu       $t3, $zero, 0xA
    ctx->r11 = ADD32(0, 0XA);
    // 0x8021FD5C: lui         $t2, 0xBF00
    ctx->r10 = S32(0XBF00 << 16);
L_8021FD60:
    // 0x8021FD60: beq         $s1, $zero, L_8021FDDC
    if (ctx->r17 == 0) {
        // 0x8021FD64: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_8021FDDC;
    }
    // 0x8021FD64: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8021FD68: slti        $at, $t4, 0x10
    ctx->r1 = SIGNED(ctx->r12) < 0X10 ? 1 : 0;
    // 0x8021FD6C: beq         $at, $zero, L_8021FD84
    if (ctx->r1 == 0) {
        // 0x8021FD70: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_8021FD84;
    }
    // 0x8021FD70: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8021FD74: sll         $v0, $t4, 16
    ctx->r2 = S32(ctx->r12 << 16);
    // 0x8021FD78: sra         $t6, $v0, 16
    ctx->r14 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8021FD7C: b           L_8021FD88
    // 0x8021FD80: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
        goto L_8021FD88;
    // 0x8021FD80: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
L_8021FD84:
    // 0x8021FD84: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
L_8021FD88:
    // 0x8021FD88: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x8021FD8C: addiu       $t8, $v0, -0x1
    ctx->r24 = ADD32(ctx->r2, -0X1);
    // 0x8021FD90: sll         $t9, $t8, 4
    ctx->r25 = S32(ctx->r24 << 4);
    // 0x8021FD94: addiu       $t7, $a0, 0x8
    ctx->r15 = ADD32(ctx->r4, 0X8);
    // 0x8021FD98: sw          $t7, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r15;
    // 0x8021FD9C: andi        $t6, $t9, 0xFF
    ctx->r14 = ctx->r25 & 0XFF;
    // 0x8021FDA0: sll         $t7, $t6, 16
    ctx->r15 = S32(ctx->r14 << 16);
    // 0x8021FDA4: sll         $t9, $v0, 4
    ctx->r25 = S32(ctx->r2 << 4);
    // 0x8021FDA8: andi        $t6, $t9, 0xFFFF
    ctx->r14 = ctx->r25 & 0XFFFF;
    // 0x8021FDAC: or          $t8, $t7, $s2
    ctx->r24 = ctx->r15 | ctx->r18;
    // 0x8021FDB0: or          $t7, $t8, $t6
    ctx->r15 = ctx->r24 | ctx->r14;
    // 0x8021FDB4: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x8021FDB8: lw          $t8, 0x0($ra)
    ctx->r24 = MEM_W(ctx->r31, 0X0);
    // 0x8021FDBC: sll         $t9, $t5, 4
    ctx->r25 = S32(ctx->r13 << 4);
    // 0x8021FDC0: addiu       $a2, $v0, -0x2
    ctx->r6 = ADD32(ctx->r2, -0X2);
    // 0x8021FDC4: addu        $t6, $t9, $t8
    ctx->r14 = ADD32(ctx->r25, ctx->r24);
    // 0x8021FDC8: addu        $t7, $t6, $s0
    ctx->r15 = ADD32(ctx->r14, ctx->r16);
    // 0x8021FDCC: sll         $t9, $a2, 16
    ctx->r25 = S32(ctx->r6 << 16);
    // 0x8021FDD0: sra         $a2, $t9, 16
    ctx->r6 = S32(SIGNED(ctx->r25) >> 16);
    // 0x8021FDD4: b           L_8021FEB8
    // 0x8021FDD8: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
        goto L_8021FEB8;
    // 0x8021FDD8: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
L_8021FDDC:
    // 0x8021FDDC: slti        $at, $t4, 0xF
    ctx->r1 = SIGNED(ctx->r12) < 0XF ? 1 : 0;
    // 0x8021FDE0: bne         $at, $zero, L_8021FE48
    if (ctx->r1 != 0) {
        // 0x8021FDE4: sll         $v0, $t4, 16
        ctx->r2 = S32(ctx->r12 << 16);
            goto L_8021FE48;
    }
    // 0x8021FDE4: sll         $v0, $t4, 16
    ctx->r2 = S32(ctx->r12 << 16);
    // 0x8021FDE8: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x8021FDEC: sll         $v1, $t5, 4
    ctx->r3 = S32(ctx->r13 << 4);
    // 0x8021FDF0: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x8021FDF4: addiu       $t6, $a0, 0x8
    ctx->r14 = ADD32(ctx->r4, 0X8);
    // 0x8021FDF8: sw          $t6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r14;
    // 0x8021FDFC: sw          $s4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r20;
    // 0x8021FE00: lw          $t7, 0x0($ra)
    ctx->r15 = MEM_W(ctx->r31, 0X0);
    // 0x8021FE04: addu        $t9, $v1, $t7
    ctx->r25 = ADD32(ctx->r3, ctx->r15);
    // 0x8021FE08: addu        $t8, $t9, $s0
    ctx->r24 = ADD32(ctx->r25, ctx->r16);
    // 0x8021FE0C: sw          $t8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r24;
    // 0x8021FE10: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x8021FE14: addiu       $t6, $a0, 0x8
    ctx->r14 = ADD32(ctx->r4, 0X8);
    // 0x8021FE18: sw          $t6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r14;
    // 0x8021FE1C: sw          $s3, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r19;
    // 0x8021FE20: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x8021FE24: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x8021FE28: addiu       $t7, $a0, 0x8
    ctx->r15 = ADD32(ctx->r4, 0X8);
    // 0x8021FE2C: sw          $t7, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r15;
    // 0x8021FE30: sw          $s5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r21;
    // 0x8021FE34: lw          $t9, 0x0($ra)
    ctx->r25 = MEM_W(ctx->r31, 0X0);
    // 0x8021FE38: addu        $t8, $v1, $t9
    ctx->r24 = ADD32(ctx->r3, ctx->r25);
    // 0x8021FE3C: addu        $t6, $t8, $s6
    ctx->r14 = ADD32(ctx->r24, ctx->r22);
    // 0x8021FE40: b           L_8021FEAC
    // 0x8021FE44: sw          $t6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r14;
        goto L_8021FEAC;
    // 0x8021FE44: sw          $t6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r14;
L_8021FE48:
    // 0x8021FE48: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x8021FE4C: sra         $t7, $v0, 16
    ctx->r15 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8021FE50: addiu       $t8, $t4, -0x1
    ctx->r24 = ADD32(ctx->r12, -0X1);
    // 0x8021FE54: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x8021FE58: sll         $t6, $t8, 4
    ctx->r14 = S32(ctx->r24 << 4);
    // 0x8021FE5C: addiu       $t9, $a0, 0x8
    ctx->r25 = ADD32(ctx->r4, 0X8);
    // 0x8021FE60: sw          $t9, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r25;
    // 0x8021FE64: ori         $t7, $t6, 0x1
    ctx->r15 = ctx->r14 | 0X1;
    // 0x8021FE68: andi        $t9, $t7, 0xFF
    ctx->r25 = ctx->r15 & 0XFF;
    // 0x8021FE6C: sll         $t8, $t9, 16
    ctx->r24 = S32(ctx->r25 << 16);
    // 0x8021FE70: sll         $t7, $t4, 4
    ctx->r15 = S32(ctx->r12 << 4);
    // 0x8021FE74: andi        $t9, $t7, 0xFFFF
    ctx->r25 = ctx->r15 & 0XFFFF;
    // 0x8021FE78: or          $t6, $t8, $s2
    ctx->r14 = ctx->r24 | ctx->r18;
    // 0x8021FE7C: or          $t8, $t6, $t9
    ctx->r24 = ctx->r14 | ctx->r25;
    // 0x8021FE80: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x8021FE84: lw          $t6, 0x0($ra)
    ctx->r14 = MEM_W(ctx->r31, 0X0);
    // 0x8021FE88: sll         $t7, $t5, 4
    ctx->r15 = S32(ctx->r13 << 4);
    // 0x8021FE8C: addu        $t9, $t7, $t6
    ctx->r25 = ADD32(ctx->r15, ctx->r14);
    // 0x8021FE90: addu        $t8, $t9, $s0
    ctx->r24 = ADD32(ctx->r25, ctx->r16);
    // 0x8021FE94: sw          $t8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r24;
    // 0x8021FE98: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x8021FE9C: addiu       $t7, $a0, 0x8
    ctx->r15 = ADD32(ctx->r4, 0X8);
    // 0x8021FEA0: sw          $t7, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r15;
    // 0x8021FEA4: sw          $s3, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r19;
    // 0x8021FEA8: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
L_8021FEAC:
    // 0x8021FEAC: addiu       $a2, $v0, -0x1
    ctx->r6 = ADD32(ctx->r2, -0X1);
    // 0x8021FEB0: sll         $t6, $a2, 16
    ctx->r14 = S32(ctx->r6 << 16);
    // 0x8021FEB4: sra         $a2, $t6, 16
    ctx->r6 = S32(SIGNED(ctx->r14) >> 16);
L_8021FEB8:
    // 0x8021FEB8: addu        $t5, $t5, $v0
    ctx->r13 = ADD32(ctx->r13, ctx->r2);
    // 0x8021FEBC: subu        $t4, $t4, $v0
    ctx->r12 = SUB32(ctx->r12, ctx->r2);
    // 0x8021FEC0: sll         $t8, $t5, 16
    ctx->r24 = S32(ctx->r13 << 16);
    // 0x8021FEC4: sll         $t6, $t4, 16
    ctx->r14 = S32(ctx->r12 << 16);
    // 0x8021FEC8: sra         $t5, $t8, 16
    ctx->r13 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8021FECC: blez        $a2, L_8021FF1C
    if (SIGNED(ctx->r6) <= 0) {
        // 0x8021FED0: sra         $t4, $t6, 16
        ctx->r12 = S32(SIGNED(ctx->r14) >> 16);
            goto L_8021FF1C;
    }
    // 0x8021FED0: sra         $t4, $t6, 16
    ctx->r12 = S32(SIGNED(ctx->r14) >> 16);
L_8021FED4:
    // 0x8021FED4: multu       $a1, $t3
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8021FED8: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x8021FEDC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8021FEE0: addiu       $t8, $a0, 0x8
    ctx->r24 = ADD32(ctx->r4, 0X8);
    // 0x8021FEE4: sw          $t8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r24;
    // 0x8021FEE8: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x8021FEEC: mflo        $v1
    ctx->r3 = lo;
    // 0x8021FEF0: addiu       $t7, $v1, 0xA
    ctx->r15 = ADD32(ctx->r3, 0XA);
    // 0x8021FEF4: andi        $t6, $t7, 0xFF
    ctx->r14 = ctx->r15 & 0XFF;
    // 0x8021FEF8: addiu       $t8, $v1, 0x14
    ctx->r24 = ADD32(ctx->r3, 0X14);
    // 0x8021FEFC: andi        $t7, $t8, 0xFF
    ctx->r15 = ctx->r24 & 0XFF;
    // 0x8021FF00: sll         $t8, $a1, 16
    ctx->r24 = S32(ctx->r5 << 16);
    // 0x8021FF04: sra         $a1, $t8, 16
    ctx->r5 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8021FF08: sll         $t9, $t6, 8
    ctx->r25 = S32(ctx->r14 << 8);
    // 0x8021FF0C: slt         $at, $a1, $a2
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8021FF10: or          $t6, $t9, $t7
    ctx->r14 = ctx->r25 | ctx->r15;
    // 0x8021FF14: bne         $at, $zero, L_8021FED4
    if (ctx->r1 != 0) {
        // 0x8021FF18: sw          $t6, 0x4($a0)
        MEM_W(0X4, ctx->r4) = ctx->r14;
            goto L_8021FED4;
    }
    // 0x8021FF18: sw          $t6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r14;
L_8021FF1C:
    // 0x8021FF1C: bgtz        $t4, L_8021FD60
    if (SIGNED(ctx->r12) > 0) {
        // 0x8021FF20: nop
    
            goto L_8021FD60;
    }
    // 0x8021FF20: nop

L_8021FF24:
    // 0x8021FF24: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8021FF28:
    // 0x8021FF28: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8021FF2C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8021FF30: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8021FF34: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8021FF38: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8021FF3C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8021FF40: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8021FF44: jr          $ra
    // 0x8021FF48: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8021FF48: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_802E8878(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E88F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802E88FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802E8900: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802E8904: lw          $a2, 0xC($a0)
    ctx->r6 = MEM_W(ctx->r4, 0XC);
    // 0x802E8908: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x802E890C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E8910: bne         $a2, $zero, L_802E8938
    if (ctx->r6 != 0) {
        // 0x802E8914: addiu       $a0, $a0, 0x0
        ctx->r4 = ADD32(ctx->r4, 0X0);
            goto L_802E8938;
    }
    // 0x802E8914: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802E8918: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802E891C: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802E8920: jal         0x80231A24
    // 0x802E8924: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x802E8924: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_0:
    // 0x802E8928: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x802E892C: addiu       $t6, $zero, 0x29A
    ctx->r14 = ADD32(0, 0X29A);
    // 0x802E8930: sw          $t6, 0x0($zero)
    MEM_W(0X0, 0) = ctx->r14;
    // 0x802E8934: lw          $a2, 0xC($a3)
    ctx->r6 = MEM_W(ctx->r7, 0XC);
L_802E8938:
    // 0x802E8938: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x802E893C: jal         0x802D2990
    // 0x802E8940: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    static_3_802D2990(rdram, ctx);
        goto after_1;
    // 0x802E8940: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x802E8944: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802E8948: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802E894C: jr          $ra
    // 0x802E8950: nop

    return;
    // 0x802E8950: nop

;}
RECOMP_FUNC void func_80241620(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80241620: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80241624: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80241628: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8024162C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80241630: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x80241634: lw          $t6, 0x8($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X8);
    // 0x80241638: beql        $t6, $zero, L_802416F8
    if (ctx->r14 == 0) {
        // 0x8024163C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802416F8;
    }
    goto skip_0;
    // 0x8024163C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80241640: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80241644: jal         0x80237840
    // 0x80241648: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    static_3_80237840(rdram, ctx);
        goto after_0;
    // 0x80241648: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x8024164C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80241650: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x80241654: beq         $v0, $zero, L_802416F4
    if (ctx->r2 == 0) {
        // 0x80241658: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_802416F4;
    }
    // 0x80241658: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8024165C: lbu         $v1, 0x3B($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X3B);
    // 0x80241660: bgez        $v1, L_80241674
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80241664: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_80241674;
    }
    // 0x80241664: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80241668: negu        $v1, $v0
    ctx->r3 = SUB32(0, ctx->r2);
    // 0x8024166C: andi        $t7, $v1, 0xFF
    ctx->r15 = ctx->r3 & 0XFF;
    // 0x80241670: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
L_80241674:
    // 0x80241674: lw          $t9, 0x8($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X8);
    // 0x80241678: lw          $t8, 0x1C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X1C);
    // 0x8024167C: addiu       $t2, $zero, 0xD
    ctx->r10 = ADD32(0, 0XD);
    // 0x80241680: lw          $t0, 0xD8($t9)
    ctx->r8 = MEM_W(ctx->r25, 0XD8);
    // 0x80241684: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    // 0x80241688: sh          $t2, 0x8($a2)
    MEM_H(0X8, ctx->r6) = ctx->r10;
    // 0x8024168C: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x80241690: sw          $t1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r9;
    // 0x80241694: lh          $t3, 0x1A($a3)
    ctx->r11 = MEM_H(ctx->r7, 0X1A);
    // 0x80241698: sh          $t3, 0xA($a2)
    MEM_H(0XA, ctx->r6) = ctx->r11;
    // 0x8024169C: lbu         $t4, 0x37($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X37);
    // 0x802416A0: sb          $t4, 0x12($a2)
    MEM_B(0X12, ctx->r6) = ctx->r12;
    // 0x802416A4: lh          $t5, 0x32($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X32);
    // 0x802416A8: sb          $v1, 0x13($a2)
    MEM_B(0X13, ctx->r6) = ctx->r3;
    // 0x802416AC: sh          $t5, 0x10($a2)
    MEM_H(0X10, ctx->r6) = ctx->r13;
    // 0x802416B0: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x802416B4: swc1        $f4, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f4.u32l;
    // 0x802416B8: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x802416BC: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x802416C0: jal         0x80237738
    // 0x802416C4: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    static_3_80237738(rdram, ctx);
        goto after_1;
    // 0x802416C4: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    after_1:
    // 0x802416C8: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x802416CC: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x802416D0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802416D4: sw          $v0, 0x14($a2)
    MEM_W(0X14, ctx->r6) = ctx->r2;
    // 0x802416D8: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x802416DC: sw          $t6, 0x18($a2)
    MEM_W(0X18, ctx->r6) = ctx->r14;
    // 0x802416E0: lw          $t7, 0x8($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X8);
    // 0x802416E4: lw          $a0, 0xC($t7)
    ctx->r4 = MEM_W(ctx->r15, 0XC);
    // 0x802416E8: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x802416EC: jalr        $t9
    // 0x802416F0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x802416F0: nop

    after_2:
L_802416F4:
    // 0x802416F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802416F8:
    // 0x802416F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802416FC: jr          $ra
    // 0x80241700: nop

    return;
    // 0x80241700: nop

;}
RECOMP_FUNC void D_802CE4C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802CE544: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x802CE548: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802CE54C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802CE550: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x802CE554: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802CE558: addiu       $t6, $zero, 0xB
    ctx->r14 = ADD32(0, 0XB);
    // 0x802CE55C: sw          $a1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r5;
    // 0x802CE560: sw          $t6, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r14;
    // 0x802CE564: addiu       $at, $a0, 0x7FFF
    ctx->r1 = ADD32(ctx->r4, 0X7FFF);
    // 0x802CE568: swc1        $f12, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f12.u32l;
    // 0x802CE56C: swc1        $f0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f0.u32l;
    // 0x802CE570: sb          $zero, 0x1B29($at)
    MEM_B(0X1B29, ctx->r1) = 0;
    // 0x802CE574: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x802CE578: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x802CE57C: swc1        $f0, -0x64F8($at)
    MEM_W(-0X64F8, ctx->r1) = ctx->f0.u32l;
    // 0x802CE580: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802CE584: addiu       $at, $a0, 0x7FFF
    ctx->r1 = ADD32(ctx->r4, 0X7FFF);
    // 0x802CE588: sb          $zero, 0x1B2A($at)
    MEM_B(0X1B2A, ctx->r1) = 0;
    // 0x802CE58C: jal         0x80224CA8
    // 0x802CE590: addiu       $a0, $zero, 0x46
    ctx->r4 = ADD32(0, 0X46);
    static_3_80224CA8(rdram, ctx);
        goto after_0;
    // 0x802CE590: addiu       $a0, $zero, 0x46
    ctx->r4 = ADD32(0, 0X46);
    after_0:
    // 0x802CE594: jal         0x80224CA8
    // 0x802CE598: addiu       $a0, $zero, 0x31
    ctx->r4 = ADD32(0, 0X31);
    static_3_80224CA8(rdram, ctx);
        goto after_1;
    // 0x802CE598: addiu       $a0, $zero, 0x31
    ctx->r4 = ADD32(0, 0X31);
    after_1:
    // 0x802CE59C: jal         0x8030A9AC
    // 0x802CE5A0: nop

    static_3_8030A9AC(rdram, ctx);
        goto after_2;
    // 0x802CE5A0: nop

    after_2:
    // 0x802CE5A4: jal         0x80224CA8
    // 0x802CE5A8: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    static_3_80224CA8(rdram, ctx);
        goto after_3;
    // 0x802CE5A8: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    after_3:
    // 0x802CE5AC: jal         0x80224CA8
    // 0x802CE5B0: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    static_3_80224CA8(rdram, ctx);
        goto after_4;
    // 0x802CE5B0: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    after_4:
    // 0x802CE5B4: jal         0x80224CA8
    // 0x802CE5B8: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    static_3_80224CA8(rdram, ctx);
        goto after_5;
    // 0x802CE5B8: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    after_5:
    // 0x802CE5BC: jal         0x80224CA8
    // 0x802CE5C0: addiu       $a0, $zero, 0x3F
    ctx->r4 = ADD32(0, 0X3F);
    static_3_80224CA8(rdram, ctx);
        goto after_6;
    // 0x802CE5C0: addiu       $a0, $zero, 0x3F
    ctx->r4 = ADD32(0, 0X3F);
    after_6:
    // 0x802CE5C4: jal         0x80224CA8
    // 0x802CE5C8: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    static_3_80224CA8(rdram, ctx);
        goto after_7;
    // 0x802CE5C8: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    after_7:
    // 0x802CE5CC: jal         0x80224CA8
    // 0x802CE5D0: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    static_3_80224CA8(rdram, ctx);
        goto after_8;
    // 0x802CE5D0: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    after_8:
    // 0x802CE5D4: jal         0x80224CA8
    // 0x802CE5D8: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    static_3_80224CA8(rdram, ctx);
        goto after_9;
    // 0x802CE5D8: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    after_9:
    // 0x802CE5DC: addiu       $at, $s0, 0x7FFF
    ctx->r1 = ADD32(ctx->r16, 0X7FFF);
    // 0x802CE5E0: sb          $zero, 0x1B2B($at)
    MEM_B(0X1B2B, ctx->r1) = 0;
    // 0x802CE5E4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802CE5E8: jal         0x80205AA0
    // 0x802CE5EC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_80205AA0(rdram, ctx);
        goto after_10;
    // 0x802CE5EC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_10:
    // 0x802CE5F0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802CE5F4: jal         0x80205EBC
    // 0x802CE5F8: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    static_3_80205EBC(rdram, ctx);
        goto after_11;
    // 0x802CE5F8: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    after_11:
    // 0x802CE5FC: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x802CE600: addiu       $t7, $zero, 0x7
    ctx->r15 = ADD32(0, 0X7);
    // 0x802CE604: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802CE608: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x802CE60C: jal         0x80205E0C
    // 0x802CE610: sw          $t7, 0x7168($v0)
    MEM_W(0X7168, ctx->r2) = ctx->r15;
    static_3_80205E0C(rdram, ctx);
        goto after_12;
    // 0x802CE610: sw          $t7, 0x7168($v0)
    MEM_W(0X7168, ctx->r2) = ctx->r15;
    after_12:
    // 0x802CE614: lui         $a1, 0x439D
    ctx->r5 = S32(0X439D << 16);
    // 0x802CE618: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x802CE61C: jal         0x802B0078
    // 0x802CE620: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    static_3_802B0078(rdram, ctx);
        goto after_13;
    // 0x802CE620: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    after_13:
    // 0x802CE624: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x802CE628: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802CE62C: addiu       $t9, $zero, 0x64
    ctx->r25 = ADD32(0, 0X64);
    // 0x802CE630: sb          $t8, 0x716C($v0)
    MEM_B(0X716C, ctx->r2) = ctx->r24;
    // 0x802CE634: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x802CE638: addiu       $at, $s0, 0x7FFF
    ctx->r1 = ADD32(ctx->r16, 0X7FFF);
    // 0x802CE63C: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x802CE640: sb          $t9, 0x716D($v0)
    MEM_B(0X716D, ctx->r2) = ctx->r25;
    // 0x802CE644: sb          $zero, 0x1AFD($at)
    MEM_B(0X1AFD, ctx->r1) = 0;
    // 0x802CE648: lui         $at, 0xC0E0
    ctx->r1 = S32(0XC0E0 << 16);
    // 0x802CE64C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802CE650: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802CE654: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802CE658: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x802CE65C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CE660: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802CE664: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802CE668: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802CE66C: jal         0x8030890C
    // 0x802CE670: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    static_3_8030890C(rdram, ctx);
        goto after_14;
    // 0x802CE670: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    after_14:
    // 0x802CE674: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x802CE678: addiu       $t1, $t1, 0x0
    ctx->r9 = ADD32(ctx->r9, 0X0);
    // 0x802CE67C: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x802CE680: addiu       $v0, $sp, 0x34
    ctx->r2 = ADD32(ctx->r29, 0X34);
    // 0x802CE684: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x802CE688: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x802CE68C: lw          $t3, 0x4($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X4);
    // 0x802CE690: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x802CE694: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x802CE698: lw          $at, 0x8($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X8);
    // 0x802CE69C: sw          $at, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r1;
    // 0x802CE6A0: lw          $t3, 0xC($t1)
    ctx->r11 = MEM_W(ctx->r9, 0XC);
    // 0x802CE6A4: sw          $t3, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r11;
    // 0x802CE6A8: lw          $at, 0x10($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X10);
    // 0x802CE6AC: sw          $at, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r1;
    // 0x802CE6B0: lw          $t3, 0x14($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X14);
    // 0x802CE6B4: sw          $t3, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r11;
    // 0x802CE6B8: lw          $at, 0x18($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X18);
    // 0x802CE6BC: sw          $at, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r1;
    // 0x802CE6C0: lbu         $t4, 0x0($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X0);
    // 0x802CE6C4: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802CE6C8: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x802CE6CC: addu        $t6, $v0, $t5
    ctx->r14 = ADD32(ctx->r2, ctx->r13);
    // 0x802CE6D0: lwc1        $f0, 0x0($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X0);
    // 0x802CE6D4: addiu       $a0, $a0, 0x6B8
    ctx->r4 = ADD32(ctx->r4, 0X6B8);
    // 0x802CE6D8: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x802CE6DC: jal         0x80303778
    // 0x802CE6E0: nop

    static_3_80303778(rdram, ctx);
        goto after_15;
    // 0x802CE6E0: nop

    after_15:
    // 0x802CE6E4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802CE6E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802CE6EC: jal         0x80309B88
    // 0x802CE6F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_80309B88(rdram, ctx);
        goto after_16;
    // 0x802CE6F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_16:
    // 0x802CE6F4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802CE6F8: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802CE6FC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x802CE700: jr          $ra
    // 0x802CE704: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x802CE704: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void D_8023715C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023715C: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x80237160: addiu       $v0, $v0, 0x0
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x80237164: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80237168: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023716C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80237170: bnel        $t6, $zero, L_80237184
    if (ctx->r14 != 0) {
        // 0x80237174: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80237184;
    }
    goto skip_0;
    // 0x80237174: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80237178: jal         0x80237B10
    // 0x8023717C: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    static_3_80237B10(rdram, ctx);
        goto after_0;
    // 0x8023717C: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    after_0:
    // 0x80237180: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80237184:
    // 0x80237184: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80237188: jr          $ra
    // 0x8023718C: nop

    return;
    // 0x8023718C: nop

;}
RECOMP_FUNC void D_802E8914(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E8994: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802E8998: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802E899C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802E89A0: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x802E89A4: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x802E89A8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802E89AC: lwc1        $f4, 0x50($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X50);
    // 0x802E89B0: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802E89B4: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x802E89B8: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x802E89BC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802E89C0: bc1fl       L_802E8B44
    if (!c1cs) {
        // 0x802E89C4: lwc1        $f18, 0x4C($s0)
        ctx->f18.u32l = MEM_W(ctx->r16, 0X4C);
            goto L_802E8B44;
    }
    goto skip_0;
    // 0x802E89C4: lwc1        $f18, 0x4C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X4C);
    skip_0:
    // 0x802E89C8: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x802E89CC: nop

    // 0x802E89D0: bc1fl       L_802E8B44
    if (!c1cs) {
        // 0x802E89D4: lwc1        $f18, 0x4C($s0)
        ctx->f18.u32l = MEM_W(ctx->r16, 0X4C);
            goto L_802E8B44;
    }
    goto skip_1;
    // 0x802E89D4: lwc1        $f18, 0x4C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X4C);
    skip_1:
    // 0x802E89D8: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x802E89DC: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x802E89E0: jal         0x80316B90
    // 0x802E89E4: lw          $a1, 0x44($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X44);
    static_3_80316B90(rdram, ctx);
        goto after_0;
    // 0x802E89E4: lw          $a1, 0x44($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X44);
    after_0:
    // 0x802E89E8: lw          $t6, 0x14($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X14);
    // 0x802E89EC: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x802E89F0: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x802E89F4: beq         $t6, $at, L_802E8A28
    if (ctx->r14 == ctx->r1) {
        // 0x802E89F8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_802E8A28;
    }
    // 0x802E89F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802E89FC: lwc1        $f6, 0x48($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X48);
    // 0x802E8A00: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802E8A04: ldc1        $f10, 0x0($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, 0X0);
    // 0x802E8A08: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x802E8A0C: cvt.d.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.d = CVT_D_S(ctx->f0.fl);
    // 0x802E8A10: mul.d       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f2.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x802E8A14: c.lt.d      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.d < ctx->f16.d;
    // 0x802E8A18: nop

    // 0x802E8A1C: bc1f        L_802E8A28
    if (!c1cs) {
        // 0x802E8A20: nop
    
            goto L_802E8A28;
    }
    // 0x802E8A20: nop

    // 0x802E8A24: cvt.s.d     $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f12.fl = CVT_S_D(ctx->f2.d);
L_802E8A28:
    // 0x802E8A28: jal         0x80318490
    // 0x802E8A2C: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    static_3_80318490(rdram, ctx);
        goto after_1;
    // 0x802E8A2C: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    after_1:
    // 0x802E8A30: beql        $v0, $zero, L_802E8A4C
    if (ctx->r2 == 0) {
        // 0x802E8A34: lwc1        $f18, 0x4C($s0)
        ctx->f18.u32l = MEM_W(ctx->r16, 0X4C);
            goto L_802E8A4C;
    }
    goto skip_2;
    // 0x802E8A34: lwc1        $f18, 0x4C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X4C);
    skip_2:
    // 0x802E8A38: jal         0x803192E0
    // 0x802E8A3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_803192E0(rdram, ctx);
        goto after_2;
    // 0x802E8A3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x802E8A40: bnel        $v0, $zero, L_802E8A5C
    if (ctx->r2 != 0) {
        // 0x802E8A44: lbu         $t7, 0x3B($sp)
        ctx->r15 = MEM_BU(ctx->r29, 0X3B);
            goto L_802E8A5C;
    }
    goto skip_3;
    // 0x802E8A44: lbu         $t7, 0x3B($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X3B);
    skip_3:
    // 0x802E8A48: lwc1        $f18, 0x4C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X4C);
L_802E8A4C:
    // 0x802E8A4C: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x802E8A50: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x802E8A54: swc1        $f6, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f6.u32l;
    // 0x802E8A58: lbu         $t7, 0x3B($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X3B);
L_802E8A5C:
    // 0x802E8A5C: beql        $t7, $zero, L_802E8A80
    if (ctx->r15 == 0) {
        // 0x802E8A60: mtc1        $zero, $f16
        ctx->f16.u32l = 0;
            goto L_802E8A80;
    }
    goto skip_4;
    // 0x802E8A60: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    skip_4:
    // 0x802E8A64: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x802E8A68: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802E8A6C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802E8A70: swc1        $f18, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->f18.u32l;
    // 0x802E8A74: b           L_802E8A8C
    // 0x802E8A78: swc1        $f16, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f16.u32l;
        goto L_802E8A8C;
    // 0x802E8A78: swc1        $f16, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f16.u32l;
    // 0x802E8A7C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
L_802E8A80:
    // 0x802E8A80: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x802E8A84: swc1        $f16, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->f16.u32l;
    // 0x802E8A88: swc1        $f18, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f18.u32l;
L_802E8A8C:
    // 0x802E8A8C: jal         0x80318490
    // 0x802E8A90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80318490(rdram, ctx);
        goto after_3;
    // 0x802E8A90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x802E8A94: beql        $v0, $zero, L_802E8AEC
    if (ctx->r2 == 0) {
        // 0x802E8A98: lw          $v0, 0x1A0($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X1A0);
            goto L_802E8AEC;
    }
    goto skip_5;
    // 0x802E8A98: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    skip_5:
    // 0x802E8A9C: jal         0x803099E4
    // 0x802E8AA0: nop

    static_3_803099E4(rdram, ctx);
        goto after_4;
    // 0x802E8AA0: nop

    after_4:
    // 0x802E8AA4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E8AA8: lui         $a2, 0x3DA3
    ctx->r6 = S32(0X3DA3 << 16);
    // 0x802E8AAC: ori         $a2, $a2, 0xD70A
    ctx->r6 = ctx->r6 | 0XD70A;
    // 0x802E8AB0: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802E8AB4: jal         0x802AB604
    // 0x802E8AB8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    static_3_802AB604(rdram, ctx);
        goto after_5;
    // 0x802E8AB8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_5:
    // 0x802E8ABC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802E8AC0: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802E8AC4: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x802E8AC8: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x802E8ACC: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802E8AD0: lw          $v0, 0xD8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XD8);
    // 0x802E8AD4: lw          $t9, 0xC4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XC4);
    // 0x802E8AD8: lh          $t8, 0xC0($v0)
    ctx->r24 = MEM_H(ctx->r2, 0XC0);
    // 0x802E8ADC: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x802E8AE0: jalr        $t9
    // 0x802E8AE4: addu        $a0, $t8, $v1
    ctx->r4 = ADD32(ctx->r24, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x802E8AE4: addu        $a0, $t8, $v1
    ctx->r4 = ADD32(ctx->r24, ctx->r3);
    after_6:
    // 0x802E8AE8: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
L_802E8AEC:
    // 0x802E8AEC: lw          $t9, 0x94($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X94);
    // 0x802E8AF0: lh          $t0, 0x90($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X90);
    // 0x802E8AF4: jalr        $t9
    // 0x802E8AF8: addu        $a0, $t0, $s0
    ctx->r4 = ADD32(ctx->r8, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x802E8AF8: addu        $a0, $t0, $s0
    ctx->r4 = ADD32(ctx->r8, ctx->r16);
    after_7:
    // 0x802E8AFC: beql        $v0, $zero, L_802E8B3C
    if (ctx->r2 == 0) {
        // 0x802E8B00: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_802E8B3C;
    }
    goto skip_6;
    // 0x802E8B00: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_6:
    // 0x802E8B04: lbu         $t1, 0x24($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X24);
    // 0x802E8B08: bnel        $t1, $zero, L_802E8B3C
    if (ctx->r9 != 0) {
        // 0x802E8B0C: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_802E8B3C;
    }
    goto skip_7;
    // 0x802E8B0C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_7:
    // 0x802E8B10: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802E8B14: lwc1        $f16, 0x4C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x802E8B18: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E8B1C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802E8B20: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x802E8B24: nop

    // 0x802E8B28: bc1fl       L_802E8B3C
    if (!c1cs) {
        // 0x802E8B2C: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_802E8B3C;
    }
    goto skip_8;
    // 0x802E8B2C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_8:
    // 0x802E8B30: jal         0x802AB1D0
    // 0x802E8B34: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    static_3_802AB1D0(rdram, ctx);
        goto after_8;
    // 0x802E8B34: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    after_8:
    // 0x802E8B38: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_802E8B3C:
    // 0x802E8B3C: nop

    // 0x802E8B40: lwc1        $f18, 0x4C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X4C);
L_802E8B44:
    // 0x802E8B44: c.le.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl <= ctx->f0.fl;
    // 0x802E8B48: nop

    // 0x802E8B4C: bc1fl       L_802E8B64
    if (!c1cs) {
        // 0x802E8B50: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802E8B64;
    }
    goto skip_9;
    // 0x802E8B50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_9:
    // 0x802E8B54: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x802E8B58: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x802E8B5C: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x802E8B60: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802E8B64:
    // 0x802E8B64: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x802E8B68: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802E8B6C: jr          $ra
    // 0x802E8B70: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x802E8B70: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void D_802D76B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D7734: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802D7738: jr          $ra
    // 0x802D773C: swc1        $f12, 0x378($a0)
    MEM_W(0X378, ctx->r4) = ctx->f12.u32l;
    return;
    // 0x802D773C: swc1        $f12, 0x378($a0)
    MEM_W(0X378, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void D_802A8E6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A8EEC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802A8EF0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802A8EF4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802A8EF8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802A8EFC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802A8F00: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x802A8F04: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    // 0x802A8F08: addiu       $a1, $zero, 0x7D
    ctx->r5 = ADD32(0, 0X7D);
    // 0x802A8F0C: jal         0x80302DC8
    // 0x802A8F10: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302DC8(rdram, ctx);
        goto after_0;
    // 0x802A8F10: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_0:
    // 0x802A8F14: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802A8F18: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x802A8F1C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x802A8F20: jal         0x80290474
    // 0x802A8F24: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    static_3_80290474(rdram, ctx);
        goto after_1;
    // 0x802A8F24: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    after_1:
    // 0x802A8F28: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802A8F2C: jal         0x80302980
    // 0x802A8F30: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302980(rdram, ctx);
        goto after_2;
    // 0x802A8F30: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_2:
    // 0x802A8F34: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802A8F38: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802A8F3C: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802A8F40: addiu       $a1, $zero, 0x7D
    ctx->r5 = ADD32(0, 0X7D);
    // 0x802A8F44: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802A8F48: jal         0x80302988
    // 0x802A8F4C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_3;
    // 0x802A8F4C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_3:
    // 0x802A8F50: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802A8F54: jal         0x80302A7C
    // 0x802A8F58: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302A7C(rdram, ctx);
        goto after_4;
    // 0x802A8F58: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_4:
    // 0x802A8F5C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802A8F60: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802A8F64: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802A8F68: jr          $ra
    // 0x802A8F6C: nop

    return;
    // 0x802A8F6C: nop

;}
RECOMP_FUNC void D_8029DBD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029DC50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8029DC54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8029DC58: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8029DC5C: jal         0x8021E83C
    // 0x8029DC60: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    static_3_8021E83C(rdram, ctx);
        goto after_0;
    // 0x8029DC60: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x8029DC64: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x8029DC68: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8029DC6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8029DC70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8029DC74: subu        $t7, $t6, $v1
    ctx->r15 = SUB32(ctx->r14, ctx->r3);
    // 0x8029DC78: subu        $t8, $t7, $v0
    ctx->r24 = SUB32(ctx->r15, ctx->r2);
    // 0x8029DC7C: bgez        $t8, L_8029DC8C
    if (SIGNED(ctx->r24) >= 0) {
        // 0x8029DC80: sra         $t9, $t8, 1
        ctx->r25 = S32(SIGNED(ctx->r24) >> 1);
            goto L_8029DC8C;
    }
    // 0x8029DC80: sra         $t9, $t8, 1
    ctx->r25 = S32(SIGNED(ctx->r24) >> 1);
    // 0x8029DC84: addiu       $at, $t8, 0x1
    ctx->r1 = ADD32(ctx->r24, 0X1);
    // 0x8029DC88: sra         $t9, $at, 1
    ctx->r25 = S32(SIGNED(ctx->r1) >> 1);
L_8029DC8C:
    // 0x8029DC8C: jr          $ra
    // 0x8029DC90: addu        $v0, $t9, $v1
    ctx->r2 = ADD32(ctx->r25, ctx->r3);
    return;
    // 0x8029DC90: addu        $v0, $t9, $v1
    ctx->r2 = ADD32(ctx->r25, ctx->r3);
;}
RECOMP_FUNC void D_8023D3F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023D3F4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023D3F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023D3FC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8023D400: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8023D404: jal         0x8023EBF8
    // 0x8023D408: addiu       $a0, $sp, 0x1F
    ctx->r4 = ADD32(ctx->r29, 0X1F);
    static_3_8023EBF8(rdram, ctx);
        goto after_0;
    // 0x8023D408: addiu       $a0, $sp, 0x1F
    ctx->r4 = ADD32(ctx->r29, 0X1F);
    after_0:
    // 0x8023D40C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023D410: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8023D414: jr          $ra
    // 0x8023D418: nop

    return;
    // 0x8023D418: nop

;}
RECOMP_FUNC void D_80226740(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80226740: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x80226744: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80226748: sw          $a0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r4;
    // 0x8022674C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80226750: addiu       $a0, $sp, 0x52
    ctx->r4 = ADD32(ctx->r29, 0X52);
    // 0x80226754: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x80226758: jal         0x80225424
    // 0x8022675C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_0;
    // 0x8022675C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_0:
    // 0x80226760: lhu         $a1, 0x52($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X52);
    // 0x80226764: slti        $at, $a1, 0x1001
    ctx->r1 = SIGNED(ctx->r5) < 0X1001 ? 1 : 0;
    // 0x80226768: bne         $at, $zero, L_80226780
    if (ctx->r1 != 0) {
        // 0x8022676C: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_80226780;
    }
    // 0x8022676C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80226770: jal         0x80231A24
    // 0x80226774: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_1;
    // 0x80226774: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_1:
    // 0x80226778: addiu       $t6, $zero, 0x1000
    ctx->r14 = ADD32(0, 0X1000);
    // 0x8022677C: sh          $t6, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r14;
L_80226780:
    // 0x80226780: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    // 0x80226784: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x80226788: jal         0x80225424
    // 0x8022678C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_2;
    // 0x8022678C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_2:
    // 0x80226790: addiu       $s0, $sp, 0x44
    ctx->r16 = ADD32(ctx->r29, 0X44);
    // 0x80226794: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80226798: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x8022679C: jal         0x80225424
    // 0x802267A0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80225424(rdram, ctx);
        goto after_3;
    // 0x802267A0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_3:
    // 0x802267A4: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x802267A8: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x802267AC: jal         0x80225424
    // 0x802267B0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80225424(rdram, ctx);
        goto after_4;
    // 0x802267B0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_4:
    // 0x802267B4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802267B8: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x802267BC: c.eq.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl == ctx->f0.fl;
    // 0x802267C0: nop

    // 0x802267C4: bc1fl       L_802267E0
    if (!c1cs) {
        // 0x802267C8: addiu       $a0, $zero, 0x1C
        ctx->r4 = ADD32(0, 0X1C);
            goto L_802267E0;
    }
    goto skip_0;
    // 0x802267C8: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    skip_0:
    // 0x802267CC: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x802267D0: c.eq.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl == ctx->f0.fl;
    // 0x802267D4: nop

    // 0x802267D8: bc1t        L_80226828
    if (c1cs) {
        // 0x802267DC: addiu       $a0, $zero, 0x1C
        ctx->r4 = ADD32(0, 0X1C);
            goto L_80226828;
    }
    // 0x802267DC: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
L_802267E0:
    // 0x802267E0: jal         0x8022B948
    // 0x802267E4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8022B948(rdram, ctx);
        goto after_5;
    // 0x802267E4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_5:
    // 0x802267E8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802267EC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802267F0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802267F4: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    // 0x802267F8: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
    // 0x802267FC: swc1        $f10, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f10.u32l;
    // 0x80226800: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80226804: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80226808: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8022680C: swc1        $f16, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f16.u32l;
    // 0x80226810: lwc1        $f18, 0x40($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80226814: sb          $t7, 0x1A($v0)
    MEM_B(0X1A, ctx->r2) = ctx->r15;
    // 0x80226818: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
    // 0x8022681C: swc1        $f0, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f0.u32l;
    // 0x80226820: b           L_8022682C
    // 0x80226824: swc1        $f18, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f18.u32l;
        goto L_8022682C;
    // 0x80226824: swc1        $f18, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f18.u32l;
L_80226828:
    // 0x80226828: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
L_8022682C:
    // 0x8022682C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80226830: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x80226834: jal         0x80225424
    // 0x80226838: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80225424(rdram, ctx);
        goto after_6;
    // 0x80226838: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_6:
    // 0x8022683C: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x80226840: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x80226844: jal         0x80225424
    // 0x80226848: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80225424(rdram, ctx);
        goto after_7;
    // 0x80226848: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_7:
    // 0x8022684C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80226850: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80226854: c.eq.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl == ctx->f0.fl;
    // 0x80226858: nop

    // 0x8022685C: bc1fl       L_80226878
    if (!c1cs) {
        // 0x80226860: addiu       $a0, $zero, 0x1C
        ctx->r4 = ADD32(0, 0X1C);
            goto L_80226878;
    }
    goto skip_1;
    // 0x80226860: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    skip_1:
    // 0x80226864: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80226868: c.eq.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl == ctx->f0.fl;
    // 0x8022686C: nop

    // 0x80226870: bc1t        L_802268BC
    if (c1cs) {
        // 0x80226874: addiu       $a0, $zero, 0x1C
        ctx->r4 = ADD32(0, 0X1C);
            goto L_802268BC;
    }
    // 0x80226874: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
L_80226878:
    // 0x80226878: jal         0x8022B948
    // 0x8022687C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8022B948(rdram, ctx);
        goto after_8;
    // 0x8022687C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_8:
    // 0x80226880: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80226884: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80226888: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x8022688C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80226890: swc1        $f2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f2.u32l;
    // 0x80226894: swc1        $f2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f2.u32l;
    // 0x80226898: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8022689C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802268A0: swc1        $f8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f8.u32l;
    // 0x802268A4: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
    // 0x802268A8: sb          $t8, 0x1A($v0)
    MEM_B(0X1A, ctx->r2) = ctx->r24;
    // 0x802268AC: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
    // 0x802268B0: swc1        $f0, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f0.u32l;
    // 0x802268B4: b           L_802268C0
    // 0x802268B8: swc1        $f10, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f10.u32l;
        goto L_802268C0;
    // 0x802268B8: swc1        $f10, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f10.u32l;
L_802268BC:
    // 0x802268BC: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
L_802268C0:
    // 0x802268C0: lw          $t9, 0x70($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X70);
    // 0x802268C4: lhu         $t4, 0x52($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X52);
    // 0x802268C8: lhu         $a0, 0x54($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X54);
    // 0x802268CC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x802268D0: addu        $t5, $t9, $t4
    ctx->r13 = ADD32(ctx->r25, ctx->r12);
    // 0x802268D4: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x802268D8: sw          $t5, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r13;
    // 0x802268DC: jal         0x8022B948
    // 0x802268E0: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_8022B948(rdram, ctx);
        goto after_9;
    // 0x802268E0: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_9:
    // 0x802268E4: lhu         $a2, 0x54($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X54);
    // 0x802268E8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802268EC: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x802268F0: sll         $t7, $a2, 3
    ctx->r15 = S32(ctx->r6 << 3);
    // 0x802268F4: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x802268F8: jal         0x80225424
    // 0x802268FC: sw          $v0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r2;
    func_80225424(rdram, ctx);
        goto after_10;
    // 0x802268FC: sw          $v0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r2;
    after_10:
    // 0x80226900: addiu       $a0, $zero, 0x2C
    ctx->r4 = ADD32(0, 0X2C);
    // 0x80226904: jal         0x8022B948
    // 0x80226908: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8022B948(rdram, ctx);
        goto after_11;
    // 0x80226908: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_11:
    // 0x8022690C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80226910: addiu       $a0, $v0, 0xA
    ctx->r4 = ADD32(ctx->r2, 0XA);
    // 0x80226914: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x80226918: jal         0x80225424
    // 0x8022691C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_12;
    // 0x8022691C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_12:
    // 0x80226920: addiu       $a0, $s0, 0xC
    ctx->r4 = ADD32(ctx->r16, 0XC);
    // 0x80226924: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x80226928: jal         0x80225424
    // 0x8022692C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_13;
    // 0x8022692C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_13:
    // 0x80226930: addiu       $a0, $s0, 0xE
    ctx->r4 = ADD32(ctx->r16, 0XE);
    // 0x80226934: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x80226938: jal         0x80225424
    // 0x8022693C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80225424(rdram, ctx);
        goto after_14;
    // 0x8022693C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_14:
    // 0x80226940: addiu       $a0, $s0, 0xF
    ctx->r4 = ADD32(ctx->r16, 0XF);
    // 0x80226944: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x80226948: jal         0x80225424
    // 0x8022694C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80225424(rdram, ctx);
        goto after_15;
    // 0x8022694C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_15:
    // 0x80226950: addiu       $a0, $s0, 0x10
    ctx->r4 = ADD32(ctx->r16, 0X10);
    // 0x80226954: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x80226958: jal         0x80225424
    // 0x8022695C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80225424(rdram, ctx);
        goto after_16;
    // 0x8022695C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_16:
    // 0x80226960: addiu       $a0, $s0, 0x12
    ctx->r4 = ADD32(ctx->r16, 0X12);
    // 0x80226964: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x80226968: jal         0x80225424
    // 0x8022696C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_17;
    // 0x8022696C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_17:
    // 0x80226970: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80226974: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x80226978: jal         0x80225424
    // 0x8022697C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_18;
    // 0x8022697C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_18:
    // 0x80226980: addiu       $a0, $s0, 0x20
    ctx->r4 = ADD32(ctx->r16, 0X20);
    // 0x80226984: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x80226988: jal         0x80225424
    // 0x8022698C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_19;
    // 0x8022698C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_19:
    // 0x80226990: addiu       $a0, $s0, 0x22
    ctx->r4 = ADD32(ctx->r16, 0X22);
    // 0x80226994: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x80226998: jal         0x80225424
    // 0x8022699C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80225424(rdram, ctx);
        goto after_20;
    // 0x8022699C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_20:
    // 0x802269A0: addiu       $a0, $s0, 0x23
    ctx->r4 = ADD32(ctx->r16, 0X23);
    // 0x802269A4: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x802269A8: jal         0x80225424
    // 0x802269AC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80225424(rdram, ctx);
        goto after_21;
    // 0x802269AC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_21:
    // 0x802269B0: addiu       $a0, $s0, 0x24
    ctx->r4 = ADD32(ctx->r16, 0X24);
    // 0x802269B4: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x802269B8: jal         0x80225424
    // 0x802269BC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80225424(rdram, ctx);
        goto after_22;
    // 0x802269BC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_22:
    // 0x802269C0: addiu       $a0, $s0, 0x25
    ctx->r4 = ADD32(ctx->r16, 0X25);
    // 0x802269C4: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x802269C8: jal         0x80225424
    // 0x802269CC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80225424(rdram, ctx);
        goto after_23;
    // 0x802269CC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_23:
    // 0x802269D0: addiu       $a0, $s0, 0x26
    ctx->r4 = ADD32(ctx->r16, 0X26);
    // 0x802269D4: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x802269D8: jal         0x80225424
    // 0x802269DC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80225424(rdram, ctx);
        goto after_24;
    // 0x802269DC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_24:
    // 0x802269E0: addiu       $a0, $s0, 0x28
    ctx->r4 = ADD32(ctx->r16, 0X28);
    // 0x802269E4: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x802269E8: jal         0x80225424
    // 0x802269EC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80225424(rdram, ctx);
        goto after_25;
    // 0x802269EC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_25:
    // 0x802269F0: addiu       $a0, $s0, 0x27
    ctx->r4 = ADD32(ctx->r16, 0X27);
    // 0x802269F4: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x802269F8: jal         0x80225424
    // 0x802269FC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80225424(rdram, ctx);
        goto after_26;
    // 0x802269FC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_26:
    // 0x80226A00: lhu         $t8, 0x52($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X52);
    // 0x80226A04: lw          $t3, 0x68($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X68);
    // 0x80226A08: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x80226A0C: sh          $t8, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r24;
    // 0x80226A10: lw          $a2, 0x0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X0);
    // 0x80226A14: lhu         $t2, 0x12($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X12);
    // 0x80226A18: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x80226A1C: beq         $a2, $zero, L_80226A68
    if (ctx->r6 == 0) {
        // 0x80226A20: andi        $a1, $t2, 0xFFF
        ctx->r5 = ctx->r10 & 0XFFF;
            goto L_80226A68;
    }
    // 0x80226A20: andi        $a1, $t2, 0xFFF
    ctx->r5 = ctx->r10 & 0XFFF;
    // 0x80226A24: lhu         $a0, 0x0($a2)
    ctx->r4 = MEM_HU(ctx->r6, 0X0);
    // 0x80226A28: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80226A2C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80226A30: blez        $a0, L_80226A68
    if (SIGNED(ctx->r4) <= 0) {
        // 0x80226A34: nop
    
            goto L_80226A68;
    }
    // 0x80226A34: nop

    // 0x80226A38: lw          $v0, 0x8($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X8);
L_80226A3C:
    // 0x80226A3C: lhu         $t9, 0x0($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X0);
    // 0x80226A40: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x80226A44: slt         $at, $a3, $a0
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80226A48: bne         $a1, $t9, L_80226A60
    if (ctx->r5 != ctx->r25) {
        // 0x80226A4C: addiu       $v0, $v0, 0x2
        ctx->r2 = ADD32(ctx->r2, 0X2);
            goto L_80226A60;
    }
    // 0x80226A4C: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80226A50: lw          $t4, 0x4($a2)
    ctx->r12 = MEM_W(ctx->r6, 0X4);
    // 0x80226A54: addu        $t5, $t4, $v1
    ctx->r13 = ADD32(ctx->r12, ctx->r3);
    // 0x80226A58: b           L_80226A68
    // 0x80226A5C: lhu         $a1, 0x0($t5)
    ctx->r5 = MEM_HU(ctx->r13, 0X0);
        goto L_80226A68;
    // 0x80226A5C: lhu         $a1, 0x0($t5)
    ctx->r5 = MEM_HU(ctx->r13, 0X0);
L_80226A60:
    // 0x80226A60: bne         $at, $zero, L_80226A3C
    if (ctx->r1 != 0) {
        // 0x80226A64: addiu       $v1, $v1, 0x2
        ctx->r3 = ADD32(ctx->r3, 0X2);
            goto L_80226A3C;
    }
    // 0x80226A64: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
L_80226A68:
    // 0x80226A68: addiu       $t1, $t1, 0x0
    ctx->r9 = ADD32(ctx->r9, 0X0);
    // 0x80226A6C: lw          $t6, 0x0($t1)
    ctx->r14 = MEM_W(ctx->r9, 0X0);
    // 0x80226A70: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x80226A74: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80226A78: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80226A7C: lw          $t0, 0x0($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X0);
    // 0x80226A80: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80226A84: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80226A88: bne         $t0, $zero, L_80226AB4
    if (ctx->r8 != 0) {
        // 0x80226A8C: or          $a2, $t2, $zero
        ctx->r6 = ctx->r10 | 0;
            goto L_80226AB4;
    }
    // 0x80226A8C: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    // 0x80226A90: sw          $zero, 0x60($sp)
    MEM_W(0X60, ctx->r29) = 0;
    // 0x80226A94: sw          $t0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r8;
    // 0x80226A98: jal         0x80231A24
    // 0x80226A9C: sw          $t3, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r11;
    static_3_80231A24(rdram, ctx);
        goto after_27;
    // 0x80226A9C: sw          $t3, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r11;
    after_27:
    // 0x80226AA0: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x80226AA4: addiu       $t1, $t1, 0x0
    ctx->r9 = ADD32(ctx->r9, 0X0);
    // 0x80226AA8: lw          $a3, 0x60($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X60);
    // 0x80226AAC: lw          $t0, 0x6C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X6C);
    // 0x80226AB0: lw          $t3, 0x68($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X68);
L_80226AB4:
    // 0x80226AB4: sw          $t3, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r11;
    // 0x80226AB8: sw          $t0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r8;
    // 0x80226ABC: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x80226AC0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80226AC4: sw          $t9, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r25;
    // 0x80226AC8: lw          $t4, 0x48($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X48);
    // 0x80226ACC: sw          $t4, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r12;
    // 0x80226AD0: lhu         $a2, 0x54($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X54);
    // 0x80226AD4: blez        $a2, L_80226BE4
    if (SIGNED(ctx->r6) <= 0) {
        // 0x80226AD8: andi        $v0, $a2, 0x1
        ctx->r2 = ctx->r6 & 0X1;
            goto L_80226BE4;
    }
    // 0x80226AD8: andi        $v0, $a2, 0x1
    ctx->r2 = ctx->r6 & 0X1;
    // 0x80226ADC: beql        $v0, $zero, L_80226B1C
    if (ctx->r2 == 0) {
        // 0x80226AE0: lui         $a1, 0x8000
        ctx->r5 = S32(0X8000 << 16);
            goto L_80226B1C;
    }
    goto skip_2;
    // 0x80226AE0: lui         $a1, 0x8000
    ctx->r5 = S32(0X8000 << 16);
    skip_2:
    // 0x80226AE4: lbu         $v0, 0x0($t3)
    ctx->r2 = MEM_BU(ctx->r11, 0X0);
    // 0x80226AE8: addiu       $t2, $zero, 0xFD
    ctx->r10 = ADD32(0, 0XFD);
    // 0x80226AEC: or          $v1, $t3, $zero
    ctx->r3 = ctx->r11 | 0;
    // 0x80226AF0: bne         $t2, $v0, L_80226B14
    if (ctx->r10 != ctx->r2) {
        // 0x80226AF4: addiu       $a3, $zero, 0x1
        ctx->r7 = ADD32(0, 0X1);
            goto L_80226B14;
    }
    // 0x80226AF4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80226AF8: lw          $t5, 0x4($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X4);
    // 0x80226AFC: lui         $a1, 0x8000
    ctx->r5 = S32(0X8000 << 16);
    // 0x80226B00: addu        $t6, $t0, $a1
    ctx->r14 = ADD32(ctx->r8, ctx->r5);
    // 0x80226B04: or          $t7, $t5, $t6
    ctx->r15 = ctx->r13 | ctx->r14;
    // 0x80226B08: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x80226B0C: lhu         $a2, 0x54($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X54);
    // 0x80226B10: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_80226B14:
    // 0x80226B14: beq         $a3, $a2, L_80226BE4
    if (ctx->r7 == ctx->r6) {
        // 0x80226B18: lui         $a1, 0x8000
        ctx->r5 = S32(0X8000 << 16);
            goto L_80226BE4;
    }
    // 0x80226B18: lui         $a1, 0x8000
    ctx->r5 = S32(0X8000 << 16);
L_80226B1C:
    // 0x80226B1C: addiu       $t2, $zero, 0xFD
    ctx->r10 = ADD32(0, 0XFD);
    // 0x80226B20: sll         $t8, $a3, 3
    ctx->r24 = S32(ctx->r7 << 3);
L_80226B24:
    // 0x80226B24: addu        $v1, $t8, $t3
    ctx->r3 = ADD32(ctx->r24, ctx->r11);
    // 0x80226B28: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80226B2C: bnel        $t2, $v0, L_80226B7C
    if (ctx->r10 != ctx->r2) {
        // 0x80226B30: addiu       $t8, $a3, 0x1
        ctx->r24 = ADD32(ctx->r7, 0X1);
            goto L_80226B7C;
    }
    goto skip_3;
    // 0x80226B30: addiu       $t8, $a3, 0x1
    ctx->r24 = ADD32(ctx->r7, 0X1);
    skip_3:
    // 0x80226B34: bnel        $a0, $zero, L_80226B54
    if (ctx->r4 != 0) {
        // 0x80226B38: lhu         $t7, 0x14($s0)
        ctx->r15 = MEM_HU(ctx->r16, 0X14);
            goto L_80226B54;
    }
    goto skip_4;
    // 0x80226B38: lhu         $t7, 0x14($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X14);
    skip_4:
    // 0x80226B3C: lw          $t9, 0x4($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X4);
    // 0x80226B40: addu        $t4, $t0, $a1
    ctx->r12 = ADD32(ctx->r8, ctx->r5);
    // 0x80226B44: or          $t5, $t9, $t4
    ctx->r13 = ctx->r25 | ctx->r12;
    // 0x80226B48: b           L_80226B74
    // 0x80226B4C: sw          $t5, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r13;
        goto L_80226B74;
    // 0x80226B4C: sw          $t5, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r13;
    // 0x80226B50: lhu         $t7, 0x14($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X14);
L_80226B54:
    // 0x80226B54: lw          $t6, 0x0($t1)
    ctx->r14 = MEM_W(ctx->r9, 0X0);
    // 0x80226B58: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80226B5C: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x80226B60: lw          $t4, 0x0($t9)
    ctx->r12 = MEM_W(ctx->r25, 0X0);
    // 0x80226B64: lw          $t7, 0x4($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X4);
    // 0x80226B68: addu        $t5, $t4, $a1
    ctx->r13 = ADD32(ctx->r12, ctx->r5);
    // 0x80226B6C: or          $t6, $t7, $t5
    ctx->r14 = ctx->r15 | ctx->r13;
    // 0x80226B70: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
L_80226B74:
    // 0x80226B74: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80226B78: addiu       $t8, $a3, 0x1
    ctx->r24 = ADD32(ctx->r7, 0X1);
L_80226B7C:
    // 0x80226B7C: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x80226B80: addu        $v1, $t9, $t3
    ctx->r3 = ADD32(ctx->r25, ctx->r11);
    // 0x80226B84: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80226B88: bnel        $t2, $v0, L_80226BD8
    if (ctx->r10 != ctx->r2) {
        // 0x80226B8C: lhu         $t9, 0x54($sp)
        ctx->r25 = MEM_HU(ctx->r29, 0X54);
            goto L_80226BD8;
    }
    goto skip_5;
    // 0x80226B8C: lhu         $t9, 0x54($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X54);
    skip_5:
    // 0x80226B90: bnel        $a0, $zero, L_80226BB0
    if (ctx->r4 != 0) {
        // 0x80226B94: lhu         $t8, 0x14($s0)
        ctx->r24 = MEM_HU(ctx->r16, 0X14);
            goto L_80226BB0;
    }
    goto skip_6;
    // 0x80226B94: lhu         $t8, 0x14($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X14);
    skip_6:
    // 0x80226B98: lw          $t4, 0x4($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X4);
    // 0x80226B9C: addu        $t7, $t0, $a1
    ctx->r15 = ADD32(ctx->r8, ctx->r5);
    // 0x80226BA0: or          $t5, $t4, $t7
    ctx->r13 = ctx->r12 | ctx->r15;
    // 0x80226BA4: b           L_80226BD0
    // 0x80226BA8: sw          $t5, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r13;
        goto L_80226BD0;
    // 0x80226BA8: sw          $t5, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r13;
    // 0x80226BAC: lhu         $t8, 0x14($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X14);
L_80226BB0:
    // 0x80226BB0: lw          $t6, 0x0($t1)
    ctx->r14 = MEM_W(ctx->r9, 0X0);
    // 0x80226BB4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80226BB8: addu        $t4, $t6, $t9
    ctx->r12 = ADD32(ctx->r14, ctx->r25);
    // 0x80226BBC: lw          $t7, 0x0($t4)
    ctx->r15 = MEM_W(ctx->r12, 0X0);
    // 0x80226BC0: lw          $t8, 0x4($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X4);
    // 0x80226BC4: addu        $t5, $t7, $a1
    ctx->r13 = ADD32(ctx->r15, ctx->r5);
    // 0x80226BC8: or          $t6, $t8, $t5
    ctx->r14 = ctx->r24 | ctx->r13;
    // 0x80226BCC: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
L_80226BD0:
    // 0x80226BD0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80226BD4: lhu         $t9, 0x54($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X54);
L_80226BD8:
    // 0x80226BD8: addiu       $a3, $a3, 0x2
    ctx->r7 = ADD32(ctx->r7, 0X2);
    // 0x80226BDC: bnel        $a3, $t9, L_80226B24
    if (ctx->r7 != ctx->r25) {
        // 0x80226BE0: sll         $t8, $a3, 3
        ctx->r24 = S32(ctx->r7 << 3);
            goto L_80226B24;
    }
    goto skip_7;
    // 0x80226BE0: sll         $t8, $a3, 3
    ctx->r24 = S32(ctx->r7 << 3);
    skip_7:
L_80226BE4:
    // 0x80226BE4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80226BE8: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80226BEC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80226BF0: jr          $ra
    // 0x80226BF4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x80226BF4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void D_802E0CDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E0D5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802E0D60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802E0D64: jal         0x8028D994
    // 0x802E0D68: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    static_3_8028D994(rdram, ctx);
        goto after_0;
    // 0x802E0D68: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    after_0:
    // 0x802E0D6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802E0D70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802E0D74: jr          $ra
    // 0x802E0D78: nop

    return;
    // 0x802E0D78: nop

;}
RECOMP_FUNC void D_802CCD14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802CCD94: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802CCD98: jr          $ra
    // 0x802CCD9C: swc1        $f12, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->f12.u32l;
    return;
    // 0x802CCD9C: swc1        $f12, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void D_8029D098(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029D118: lw          $t6, 0x28($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X28);
    // 0x8029D11C: addu        $t7, $t6, $a1
    ctx->r15 = ADD32(ctx->r14, ctx->r5);
    // 0x8029D120: jr          $ra
    // 0x8029D124: lbu         $v0, 0x0($t7)
    ctx->r2 = MEM_BU(ctx->r15, 0X0);
    return;
    // 0x8029D124: lbu         $v0, 0x0($t7)
    ctx->r2 = MEM_BU(ctx->r15, 0X0);
;}
RECOMP_FUNC void D_802C84A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802C8528: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802C852C: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802C8530: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x802C8534: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802C8538: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x802C853C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802C8540: jal         0x80207130
    // 0x802C8544: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    static_3_80207130(rdram, ctx);
        goto after_0;
    // 0x802C8544: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    after_0:
    // 0x802C8548: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x802C854C: lwc1        $f4, 0x5C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X5C);
    // 0x802C8550: lwc1        $f10, 0x3C($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X3C);
    // 0x802C8554: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x802C8558: sub.d       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f0.d - ctx->f6.d;
    // 0x802C855C: cvt.s.d     $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f2.fl = CVT_S_D(ctx->f8.d);
    // 0x802C8560: c.le.s      $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f10.fl <= ctx->f2.fl;
    // 0x802C8564: nop

    // 0x802C8568: bc1fl       L_802C8594
    if (!c1cs) {
        // 0x802C856C: lw          $a0, 0x1C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X1C);
            goto L_802C8594;
    }
    goto skip_0;
    // 0x802C856C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x802C8570: jal         0x80207130
    // 0x802C8574: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_80207130(rdram, ctx);
        goto after_1;
    // 0x802C8574: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x802C8578: cvt.s.d     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f16.fl = CVT_S_D(ctx->f0.d);
    // 0x802C857C: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x802C8580: swc1        $f16, 0x5C($v0)
    MEM_W(0X5C, ctx->r2) = ctx->f16.u32l;
    // 0x802C8584: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x802C8588: jal         0x802906D0
    // 0x802C858C: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    static_3_802906D0(rdram, ctx);
        goto after_2;
    // 0x802C858C: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    after_2:
    // 0x802C8590: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
L_802C8594:
    // 0x802C8594: jal         0x8028EFA4
    // 0x802C8598: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    static_3_8028EFA4(rdram, ctx);
        goto after_3;
    // 0x802C8598: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    after_3:
    // 0x802C859C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802C85A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802C85A4: jr          $ra
    // 0x802C85A8: nop

    return;
    // 0x802C85A8: nop

;}
RECOMP_FUNC void D_802D1D08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D1D88: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802D1D8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802D1D90: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x802D1D94: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802D1D98: jal         0x802021EC
    // 0x802D1D9C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    static_3_802021EC(rdram, ctx);
        goto after_0;
    // 0x802D1D9C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    after_0:
    // 0x802D1DA0: lhu         $a0, 0x26($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X26);
    // 0x802D1DA4: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x802D1DA8: jal         0x80200144
    // 0x802D1DAC: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    static_3_80200144(rdram, ctx);
        goto after_1;
    // 0x802D1DAC: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_1:
    // 0x802D1DB0: jal         0x80200354
    // 0x802D1DB4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    static_3_80200354(rdram, ctx);
        goto after_2;
    // 0x802D1DB4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_2:
    // 0x802D1DB8: jal         0x8020225C
    // 0x802D1DBC: nop

    static_3_8020225C(rdram, ctx);
        goto after_3;
    // 0x802D1DBC: nop

    after_3:
    // 0x802D1DC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802D1DC4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802D1DC8: jr          $ra
    // 0x802D1DCC: nop

    return;
    // 0x802D1DCC: nop

;}
RECOMP_FUNC void D_802A9FD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AA058: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802AA05C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802AA060: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x802AA064: beq         $a0, $zero, L_802AA0A4
    if (ctx->r4 == 0) {
        // 0x802AA068: sw          $a1, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r5;
            goto L_802AA0A4;
    }
    // 0x802AA068: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802AA06C: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x802AA070: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x802AA074: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x802AA078: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x802AA07C: addiu       $a2, $zero, 0x90
    ctx->r6 = ADD32(0, 0X90);
    // 0x802AA080: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802AA084: jal         0x802C6A00
    // 0x802AA088: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    static_3_802C6A00(rdram, ctx);
        goto after_0;
    // 0x802AA088: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_0:
    // 0x802AA08C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x802AA090: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x802AA094: beql        $t8, $zero, L_802AA0A8
    if (ctx->r24 == 0) {
        // 0x802AA098: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802AA0A8;
    }
    goto skip_0;
    // 0x802AA098: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x802AA09C: jal         0x802C681C
    // 0x802AA0A0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    static_3_802C681C(rdram, ctx);
        goto after_1;
    // 0x802AA0A0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
L_802AA0A4:
    // 0x802AA0A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802AA0A8:
    // 0x802AA0A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802AA0AC: jr          $ra
    // 0x802AA0B0: nop

    return;
    // 0x802AA0B0: nop

;}
RECOMP_FUNC void D_8021A5D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021A5D8: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x8021A5DC: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8021A5E0: sw          $s5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r21;
    // 0x8021A5E4: sw          $s4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r20;
    // 0x8021A5E8: sw          $s3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r19;
    // 0x8021A5EC: sw          $s2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r18;
    // 0x8021A5F0: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x8021A5F4: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x8021A5F8: jal         0x8022331C
    // 0x8021A5FC: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    static_3_8022331C(rdram, ctx);
        goto after_0;
    // 0x8021A5FC: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    after_0:
    // 0x8021A600: jal         0x8022342C
    // 0x8021A604: lui         $a0, 0x160
    ctx->r4 = S32(0X160 << 16);
    static_3_8022342C(rdram, ctx);
        goto after_1;
    // 0x8021A604: lui         $a0, 0x160
    ctx->r4 = S32(0X160 << 16);
    after_1:
    // 0x8021A608: lui         $a0, 0x82
    ctx->r4 = S32(0X82 << 16);
    // 0x8021A60C: jal         0x802233EC
    // 0x8021A610: ori         $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 | 0XFFF;
    static_3_802233EC(rdram, ctx);
        goto after_2;
    // 0x8021A610: ori         $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 | 0XFFF;
    after_2:
    // 0x8021A614: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    // 0x8021A618: lwc1        $f4, 0x8($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X8);
    // 0x8021A61C: swc1        $f4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f4.u32l;
    // 0x8021A620: lwc1        $f6, 0xC($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0XC);
    // 0x8021A624: swc1        $f6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f6.u32l;
    // 0x8021A628: lwc1        $f8, 0x10($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X10);
    // 0x8021A62C: swc1        $f8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f8.u32l;
    // 0x8021A630: lwc1        $f10, 0x14($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X14);
    // 0x8021A634: swc1        $f10, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f10.u32l;
    // 0x8021A638: lwc1        $f16, 0x18($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X18);
    // 0x8021A63C: swc1        $f16, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f16.u32l;
    // 0x8021A640: lwc1        $f18, 0x1C($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x8021A644: jal         0x8021F4E4
    // 0x8021A648: swc1        $f18, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f18.u32l;
    static_3_8021F4E4(rdram, ctx);
        goto after_3;
    // 0x8021A648: swc1        $f18, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f18.u32l;
    after_3:
    // 0x8021A64C: lwc1        $f4, 0x60($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X60);
    // 0x8021A650: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8021A654: lwc1        $f16, 0x50($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8021A658: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x8021A65C: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x8021A660: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8021A664: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x8021A668: mfc1        $s2, $f6
    ctx->r18 = (int32_t)ctx->f6.u32l;
    // 0x8021A66C: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8021A670: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8021A674: mfc1        $s0, $f10
    ctx->r16 = (int32_t)ctx->f10.u32l;
    // 0x8021A678: addiu       $t2, $zero, 0x78
    ctx->r10 = ADD32(0, 0X78);
    // 0x8021A67C: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x8021A680: mfc1        $s5, $f18
    ctx->r21 = (int32_t)ctx->f18.u32l;
    // 0x8021A684: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x8021A688: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x8021A68C: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x8021A690: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8021A694: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8021A698: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8021A69C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8021A6A0: jal         0x8021F35C
    // 0x8021A6A4: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    static_3_8021F35C(rdram, ctx);
        goto after_4;
    // 0x8021A6A4: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    after_4:
    // 0x8021A6A8: lwc1        $f4, 0x54($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8021A6AC: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8021A6B0: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8021A6B4: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x8021A6B8: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8021A6BC: addiu       $t7, $zero, 0x78
    ctx->r15 = ADD32(0, 0X78);
    // 0x8021A6C0: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x8021A6C4: mfc1        $s3, $f6
    ctx->r19 = (int32_t)ctx->f6.u32l;
    // 0x8021A6C8: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x8021A6CC: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x8021A6D0: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x8021A6D4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8021A6D8: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x8021A6DC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8021A6E0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8021A6E4: jal         0x8021F35C
    // 0x8021A6E8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    static_3_8021F35C(rdram, ctx);
        goto after_5;
    // 0x8021A6E8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_5:
    // 0x8021A6EC: lwc1        $f8, 0x5C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8021A6F0: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x8021A6F4: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8021A6F8: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x8021A6FC: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8021A700: addiu       $t2, $zero, 0x78
    ctx->r10 = ADD32(0, 0X78);
    // 0x8021A704: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x8021A708: mfc1        $s4, $f10
    ctx->r20 = (int32_t)ctx->f10.u32l;
    // 0x8021A70C: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x8021A710: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x8021A714: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x8021A718: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8021A71C: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x8021A720: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8021A724: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8021A728: jal         0x8021F35C
    // 0x8021A72C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    static_3_8021F35C(rdram, ctx);
        goto after_6;
    // 0x8021A72C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_6:
    // 0x8021A730: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x8021A734: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8021A738: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8021A73C: addiu       $t6, $zero, 0x78
    ctx->r14 = ADD32(0, 0X78);
    // 0x8021A740: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x8021A744: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x8021A748: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x8021A74C: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x8021A750: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8021A754: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8021A758: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x8021A75C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8021A760: jal         0x8021F35C
    // 0x8021A764: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_7;
    // 0x8021A764: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_7:
    // 0x8021A768: jal         0x8021FCD0
    // 0x8021A76C: nop

    static_3_8021FCD0(rdram, ctx);
        goto after_8;
    // 0x8021A76C: nop

    after_8:
    // 0x8021A770: jal         0x8021F4E4
    // 0x8021A774: nop

    static_3_8021F4E4(rdram, ctx);
        goto after_9;
    // 0x8021A774: nop

    after_9:
    // 0x8021A778: lwc1        $f16, 0x4C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8021A77C: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8021A780: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x8021A784: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8021A788: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8021A78C: addiu       $t1, $zero, 0x78
    ctx->r9 = ADD32(0, 0X78);
    // 0x8021A790: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x8021A794: mfc1        $s1, $f18
    ctx->r17 = (int32_t)ctx->f18.u32l;
    // 0x8021A798: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x8021A79C: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x8021A7A0: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x8021A7A4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8021A7A8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8021A7AC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8021A7B0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8021A7B4: jal         0x8021F35C
    // 0x8021A7B8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    static_3_8021F35C(rdram, ctx);
        goto after_10;
    // 0x8021A7B8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_10:
    // 0x8021A7BC: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8021A7C0: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x8021A7C4: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8021A7C8: addiu       $t5, $zero, 0x78
    ctx->r13 = ADD32(0, 0X78);
    // 0x8021A7CC: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x8021A7D0: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x8021A7D4: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x8021A7D8: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x8021A7DC: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8021A7E0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8021A7E4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x8021A7E8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8021A7EC: jal         0x8021F35C
    // 0x8021A7F0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_11;
    // 0x8021A7F0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_11:
    // 0x8021A7F4: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8021A7F8: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x8021A7FC: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8021A800: addiu       $t9, $zero, 0x78
    ctx->r25 = ADD32(0, 0X78);
    // 0x8021A804: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x8021A808: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x8021A80C: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x8021A810: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x8021A814: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8021A818: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8021A81C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x8021A820: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8021A824: jal         0x8021F35C
    // 0x8021A828: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_12;
    // 0x8021A828: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_12:
    // 0x8021A82C: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8021A830: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8021A834: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8021A838: addiu       $t3, $zero, 0x78
    ctx->r11 = ADD32(0, 0X78);
    // 0x8021A83C: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x8021A840: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x8021A844: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x8021A848: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x8021A84C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8021A850: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8021A854: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x8021A858: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8021A85C: jal         0x8021F35C
    // 0x8021A860: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_13;
    // 0x8021A860: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_13:
    // 0x8021A864: jal         0x8021FCD0
    // 0x8021A868: nop

    static_3_8021FCD0(rdram, ctx);
        goto after_14;
    // 0x8021A868: nop

    after_14:
    // 0x8021A86C: jal         0x8021F4E4
    // 0x8021A870: nop

    static_3_8021F4E4(rdram, ctx);
        goto after_15;
    // 0x8021A870: nop

    after_15:
    // 0x8021A874: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8021A878: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8021A87C: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8021A880: addiu       $t7, $zero, 0x78
    ctx->r15 = ADD32(0, 0X78);
    // 0x8021A884: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x8021A888: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x8021A88C: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x8021A890: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x8021A894: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8021A898: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8021A89C: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x8021A8A0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8021A8A4: jal         0x8021F35C
    // 0x8021A8A8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_16;
    // 0x8021A8A8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_16:
    // 0x8021A8AC: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8021A8B0: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x8021A8B4: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8021A8B8: addiu       $t1, $zero, 0x78
    ctx->r9 = ADD32(0, 0X78);
    // 0x8021A8BC: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x8021A8C0: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x8021A8C4: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x8021A8C8: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x8021A8CC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8021A8D0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8021A8D4: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x8021A8D8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8021A8DC: jal         0x8021F35C
    // 0x8021A8E0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_17;
    // 0x8021A8E0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_17:
    // 0x8021A8E4: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8021A8E8: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x8021A8EC: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8021A8F0: addiu       $t5, $zero, 0x78
    ctx->r13 = ADD32(0, 0X78);
    // 0x8021A8F4: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x8021A8F8: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x8021A8FC: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x8021A900: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x8021A904: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8021A908: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8021A90C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x8021A910: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8021A914: jal         0x8021F35C
    // 0x8021A918: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_18;
    // 0x8021A918: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_18:
    // 0x8021A91C: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8021A920: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x8021A924: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8021A928: addiu       $t9, $zero, 0x78
    ctx->r25 = ADD32(0, 0X78);
    // 0x8021A92C: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x8021A930: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x8021A934: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x8021A938: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x8021A93C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8021A940: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8021A944: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x8021A948: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8021A94C: jal         0x8021F35C
    // 0x8021A950: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_19;
    // 0x8021A950: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_19:
    // 0x8021A954: jal         0x8021FCD0
    // 0x8021A958: nop

    static_3_8021FCD0(rdram, ctx);
        goto after_20;
    // 0x8021A958: nop

    after_20:
    // 0x8021A95C: jal         0x8021F4E4
    // 0x8021A960: nop

    static_3_8021F4E4(rdram, ctx);
        goto after_21;
    // 0x8021A960: nop

    after_21:
    // 0x8021A964: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8021A968: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8021A96C: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8021A970: addiu       $t3, $zero, 0x78
    ctx->r11 = ADD32(0, 0X78);
    // 0x8021A974: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x8021A978: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x8021A97C: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x8021A980: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x8021A984: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8021A988: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8021A98C: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x8021A990: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8021A994: jal         0x8021F35C
    // 0x8021A998: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_22;
    // 0x8021A998: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_22:
    // 0x8021A99C: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8021A9A0: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8021A9A4: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8021A9A8: addiu       $t7, $zero, 0x78
    ctx->r15 = ADD32(0, 0X78);
    // 0x8021A9AC: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x8021A9B0: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x8021A9B4: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x8021A9B8: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x8021A9BC: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8021A9C0: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8021A9C4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x8021A9C8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8021A9CC: jal         0x8021F35C
    // 0x8021A9D0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_23;
    // 0x8021A9D0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_23:
    // 0x8021A9D4: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8021A9D8: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x8021A9DC: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8021A9E0: addiu       $t1, $zero, 0x78
    ctx->r9 = ADD32(0, 0X78);
    // 0x8021A9E4: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x8021A9E8: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x8021A9EC: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x8021A9F0: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x8021A9F4: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8021A9F8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8021A9FC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x8021AA00: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8021AA04: jal         0x8021F35C
    // 0x8021AA08: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_24;
    // 0x8021AA08: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_24:
    // 0x8021AA0C: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8021AA10: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x8021AA14: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8021AA18: addiu       $t5, $zero, 0x78
    ctx->r13 = ADD32(0, 0X78);
    // 0x8021AA1C: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x8021AA20: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x8021AA24: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x8021AA28: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x8021AA2C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8021AA30: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8021AA34: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x8021AA38: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8021AA3C: jal         0x8021F35C
    // 0x8021AA40: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_25;
    // 0x8021AA40: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_25:
    // 0x8021AA44: jal         0x8021FCD0
    // 0x8021AA48: nop

    static_3_8021FCD0(rdram, ctx);
        goto after_26;
    // 0x8021AA48: nop

    after_26:
    // 0x8021AA4C: jal         0x8021F4E4
    // 0x8021AA50: nop

    static_3_8021F4E4(rdram, ctx);
        goto after_27;
    // 0x8021AA50: nop

    after_27:
    // 0x8021AA54: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8021AA58: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x8021AA5C: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8021AA60: addiu       $t9, $zero, 0x78
    ctx->r25 = ADD32(0, 0X78);
    // 0x8021AA64: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x8021AA68: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x8021AA6C: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x8021AA70: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x8021AA74: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8021AA78: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8021AA7C: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x8021AA80: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8021AA84: jal         0x8021F35C
    // 0x8021AA88: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_28;
    // 0x8021AA88: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_28:
    // 0x8021AA8C: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8021AA90: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8021AA94: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8021AA98: addiu       $t3, $zero, 0x78
    ctx->r11 = ADD32(0, 0X78);
    // 0x8021AA9C: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x8021AAA0: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x8021AAA4: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x8021AAA8: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x8021AAAC: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8021AAB0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8021AAB4: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x8021AAB8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8021AABC: jal         0x8021F35C
    // 0x8021AAC0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_29;
    // 0x8021AAC0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_29:
    // 0x8021AAC4: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8021AAC8: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8021AACC: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8021AAD0: addiu       $t7, $zero, 0x78
    ctx->r15 = ADD32(0, 0X78);
    // 0x8021AAD4: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x8021AAD8: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x8021AADC: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x8021AAE0: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x8021AAE4: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8021AAE8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8021AAEC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x8021AAF0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8021AAF4: jal         0x8021F35C
    // 0x8021AAF8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_30;
    // 0x8021AAF8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_30:
    // 0x8021AAFC: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8021AB00: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x8021AB04: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8021AB08: addiu       $t1, $zero, 0x78
    ctx->r9 = ADD32(0, 0X78);
    // 0x8021AB0C: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x8021AB10: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x8021AB14: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x8021AB18: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x8021AB1C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8021AB20: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8021AB24: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x8021AB28: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8021AB2C: jal         0x8021F35C
    // 0x8021AB30: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_31;
    // 0x8021AB30: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_31:
    // 0x8021AB34: jal         0x8021FCD0
    // 0x8021AB38: nop

    static_3_8021FCD0(rdram, ctx);
        goto after_32;
    // 0x8021AB38: nop

    after_32:
    // 0x8021AB3C: jal         0x8021F4E4
    // 0x8021AB40: nop

    static_3_8021F4E4(rdram, ctx);
        goto after_33;
    // 0x8021AB40: nop

    after_33:
    // 0x8021AB44: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8021AB48: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x8021AB4C: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8021AB50: addiu       $t5, $zero, 0x78
    ctx->r13 = ADD32(0, 0X78);
    // 0x8021AB54: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x8021AB58: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x8021AB5C: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x8021AB60: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x8021AB64: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8021AB68: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8021AB6C: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x8021AB70: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8021AB74: jal         0x8021F35C
    // 0x8021AB78: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_34;
    // 0x8021AB78: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_34:
    // 0x8021AB7C: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8021AB80: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x8021AB84: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8021AB88: addiu       $t9, $zero, 0x78
    ctx->r25 = ADD32(0, 0X78);
    // 0x8021AB8C: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x8021AB90: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x8021AB94: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x8021AB98: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x8021AB9C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8021ABA0: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8021ABA4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x8021ABA8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8021ABAC: jal         0x8021F35C
    // 0x8021ABB0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_35;
    // 0x8021ABB0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_35:
    // 0x8021ABB4: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8021ABB8: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8021ABBC: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8021ABC0: addiu       $t3, $zero, 0x78
    ctx->r11 = ADD32(0, 0X78);
    // 0x8021ABC4: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x8021ABC8: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x8021ABCC: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x8021ABD0: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x8021ABD4: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8021ABD8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8021ABDC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x8021ABE0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8021ABE4: jal         0x8021F35C
    // 0x8021ABE8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_36;
    // 0x8021ABE8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_36:
    // 0x8021ABEC: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8021ABF0: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8021ABF4: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8021ABF8: addiu       $t7, $zero, 0x78
    ctx->r15 = ADD32(0, 0X78);
    // 0x8021ABFC: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x8021AC00: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x8021AC04: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x8021AC08: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x8021AC0C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8021AC10: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8021AC14: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x8021AC18: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8021AC1C: jal         0x8021F35C
    // 0x8021AC20: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_37;
    // 0x8021AC20: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_37:
    // 0x8021AC24: jal         0x8021FCD0
    // 0x8021AC28: nop

    static_3_8021FCD0(rdram, ctx);
        goto after_38;
    // 0x8021AC28: nop

    after_38:
    // 0x8021AC2C: jal         0x8022337C
    // 0x8021AC30: nop

    static_3_8022337C(rdram, ctx);
        goto after_39;
    // 0x8021AC30: nop

    after_39:
    // 0x8021AC34: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8021AC38: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x8021AC3C: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x8021AC40: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x8021AC44: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x8021AC48: lw          $s4, 0x3C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X3C);
    // 0x8021AC4C: lw          $s5, 0x40($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X40);
    // 0x8021AC50: jr          $ra
    // 0x8021AC54: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x8021AC54: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void D_80237190(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80237190: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80237194: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80237198: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x8023719C: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x802371A0: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x802371A4: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
    // 0x802371A8: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
    // 0x802371AC: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x802371B0: sw          $a2, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r6;
    // 0x802371B4: jr          $ra
    // 0x802371B8: sw          $a1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r5;
    return;
    // 0x802371B8: sw          $a1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void D_802CF6B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802CF730: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802CF734: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802CF738: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x802CF73C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802CF740: jal         0x8021BA90
    // 0x802CF744: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    func_8021BA90(rdram, ctx);
        goto after_0;
    // 0x802CF744: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    after_0:
    // 0x802CF748: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x802CF74C: bne         $v0, $at, L_802CF774
    if (ctx->r2 != ctx->r1) {
        // 0x802CF750: sw          $v0, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r2;
            goto L_802CF774;
    }
    // 0x802CF750: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x802CF754: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802CF758: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802CF75C: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802CF760: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802CF764: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802CF768: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802CF76C: jal         0x80231A24
    // 0x802CF770: addiu       $a3, $zero, 0x47
    ctx->r7 = ADD32(0, 0X47);
    static_3_80231A24(rdram, ctx);
        goto after_1;
    // 0x802CF770: addiu       $a3, $zero, 0x47
    ctx->r7 = ADD32(0, 0X47);
    after_1:
L_802CF774:
    // 0x802CF774: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802CF778: jal         0x8021ACB0
    // 0x802CF77C: addiu       $a1, $zero, 0xD9
    ctx->r5 = ADD32(0, 0XD9);
    static_3_8021ACB0(rdram, ctx);
        goto after_2;
    // 0x802CF77C: addiu       $a1, $zero, 0xD9
    ctx->r5 = ADD32(0, 0XD9);
    after_2:
    // 0x802CF780: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802CF784: jal         0x8021B838
    // 0x802CF788: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_8021B838(rdram, ctx);
        goto after_3;
    // 0x802CF788: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_3:
    // 0x802CF78C: lw          $v0, 0x27C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X27C);
    // 0x802CF790: addiu       $s1, $s0, 0x1A4
    ctx->r17 = ADD32(ctx->r16, 0X1A4);
    // 0x802CF794: sw          $s1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r17;
    // 0x802CF798: lh          $t6, 0x20($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X20);
    // 0x802CF79C: lw          $t9, 0x24($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X24);
    // 0x802CF7A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802CF7A4: addu        $a0, $t6, $s0
    ctx->r4 = ADD32(ctx->r14, ctx->r16);
    // 0x802CF7A8: jalr        $t9
    // 0x802CF7AC: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x802CF7AC: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    after_4:
    // 0x802CF7B0: lw          $v0, 0x27C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X27C);
    // 0x802CF7B4: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x802CF7B8: lh          $t7, 0xA0($v0)
    ctx->r15 = MEM_H(ctx->r2, 0XA0);
    // 0x802CF7BC: lw          $t9, 0xA4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XA4);
    // 0x802CF7C0: addu        $a0, $t7, $s0
    ctx->r4 = ADD32(ctx->r15, ctx->r16);
    // 0x802CF7C4: jalr        $t9
    // 0x802CF7C8: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x802CF7C8: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    after_5:
    // 0x802CF7CC: lw          $v0, 0x27C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X27C);
    // 0x802CF7D0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802CF7D4: lh          $t8, 0x98($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X98);
    // 0x802CF7D8: lw          $t9, 0x9C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X9C);
    // 0x802CF7DC: addu        $a0, $t8, $s0
    ctx->r4 = ADD32(ctx->r24, ctx->r16);
    // 0x802CF7E0: jalr        $t9
    // 0x802CF7E4: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x802CF7E4: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    after_6:
    // 0x802CF7E8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802CF7EC: jal         0x802D2910
    // 0x802CF7F0: lui         $a1, 0x447A
    ctx->r5 = S32(0X447A << 16);
    static_3_802D2910(rdram, ctx);
        goto after_7;
    // 0x802CF7F0: lui         $a1, 0x447A
    ctx->r5 = S32(0X447A << 16);
    after_7:
    // 0x802CF7F4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802CF7F8: jal         0x802D27F4
    // 0x802CF7FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_802D27F4(rdram, ctx);
        goto after_8;
    // 0x802CF7FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x802CF800: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x802CF804: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802CF808: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802CF80C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802CF810: lui         $a2, 0xC348
    ctx->r6 = S32(0XC348 << 16);
    // 0x802CF814: lui         $a3, 0xC387
    ctx->r7 = S32(0XC387 << 16);
    // 0x802CF818: jal         0x802D5010
    // 0x802CF81C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    static_3_802D5010(rdram, ctx);
        goto after_9;
    // 0x802CF81C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_9:
    // 0x802CF820: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802CF824: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802CF828: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802CF82C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802CF830: lui         $a2, 0xC348
    ctx->r6 = S32(0XC348 << 16);
    // 0x802CF834: lui         $a3, 0xC387
    ctx->r7 = S32(0XC387 << 16);
    // 0x802CF838: jal         0x802D5010
    // 0x802CF83C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    static_3_802D5010(rdram, ctx);
        goto after_10;
    // 0x802CF83C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_10:
    // 0x802CF840: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    // 0x802CF844: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802CF848: lw          $t9, 0xB4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XB4);
    // 0x802CF84C: lh          $t0, 0xB0($v0)
    ctx->r8 = MEM_H(ctx->r2, 0XB0);
    // 0x802CF850: jalr        $t9
    // 0x802CF854: addu        $a0, $t0, $s0
    ctx->r4 = ADD32(ctx->r8, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x802CF854: addu        $a0, $t0, $s0
    ctx->r4 = ADD32(ctx->r8, ctx->r16);
    after_11:
    // 0x802CF858: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802CF85C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802CF860: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x802CF864: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802CF868: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802CF86C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x802CF870: jal         0x80309758
    // 0x802CF874: swc1        $f8, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f8.u32l;
    static_3_80309758(rdram, ctx);
        goto after_12;
    // 0x802CF874: swc1        $f8, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f8.u32l;
    after_12:
    // 0x802CF878: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802CF87C: jal         0x80318E80
    // 0x802CF880: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80318E80(rdram, ctx);
        goto after_13;
    // 0x802CF880: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x802CF884: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x802CF888: sb          $zero, 0x36C($s0)
    MEM_B(0X36C, ctx->r16) = 0;
    // 0x802CF88C: sb          $zero, 0x3A0($s0)
    MEM_B(0X3A0, ctx->r16) = 0;
    // 0x802CF890: sw          $t1, 0x364($s0)
    MEM_W(0X364, ctx->r16) = ctx->r9;
    // 0x802CF894: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802CF898: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x802CF89C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x802CF8A0: jr          $ra
    // 0x802CF8A4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x802CF8A4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void D_80247040(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80247040: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80247044: addiu       $t6, $zero, 0x0
    ctx->r14 = ADD32(0, 0X0);
    // 0x80247048: addiu       $t7, $zero, 0x0
    ctx->r15 = ADD32(0, 0X0);
    // 0x8024704C: sw          $t7, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r15;
    // 0x80247050: sw          $t6, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r14;
    // 0x80247054: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80247058: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x8024705C: lw          $t8, 0x0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X0);
    // 0x80247060: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
    // 0x80247064: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80247068: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
    // 0x8024706C: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x80247070: sw          $t8, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r24;
    // 0x80247074: lw          $t9, 0x0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X0);
    // 0x80247078: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x8024707C: addiu       $t2, $zero, 0x0
    ctx->r10 = ADD32(0, 0X0);
    // 0x80247080: lw          $t0, 0x4($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X4);
    // 0x80247084: addiu       $t3, $zero, 0x0
    ctx->r11 = ADD32(0, 0X0);
    // 0x80247088: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x8024708C: sw          $t0, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r8;
    // 0x80247090: lw          $t1, 0x0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X0);
    // 0x80247094: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x80247098: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x8024709C: sw          $t2, 0x10($t1)
    MEM_W(0X10, ctx->r9) = ctx->r10;
    // 0x802470A0: sw          $t3, 0x14($t1)
    MEM_W(0X14, ctx->r9) = ctx->r11;
    // 0x802470A4: lw          $t4, 0x0($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X0);
    // 0x802470A8: lw          $t6, 0x10($t4)
    ctx->r14 = MEM_W(ctx->r12, 0X10);
    // 0x802470AC: lw          $t7, 0x14($t4)
    ctx->r15 = MEM_W(ctx->r12, 0X14);
    // 0x802470B0: sw          $t6, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->r14;
    // 0x802470B4: sw          $t7, 0xC($t4)
    MEM_W(0XC, ctx->r12) = ctx->r15;
    // 0x802470B8: lw          $t5, 0x0($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X0);
    // 0x802470BC: sw          $zero, 0x18($t5)
    MEM_W(0X18, ctx->r13) = 0;
    // 0x802470C0: lw          $t8, 0x0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X0);
    // 0x802470C4: jr          $ra
    // 0x802470C8: sw          $zero, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = 0;
    return;
    // 0x802470C8: sw          $zero, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = 0;
;}
RECOMP_FUNC void D_802991F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80299274: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x80299278: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8029927C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80299280: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80299284: jal         0x8021E66C
    // 0x80299288: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    static_3_8021E66C(rdram, ctx);
        goto after_0;
    // 0x80299288: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_0:
    // 0x8029928C: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x80299290: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80299294: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80299298: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8029929C: lwc1        $f4, 0x74($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X74);
    // 0x802992A0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802992A4: swc1        $f8, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f8.u32l;
    // 0x802992A8: lwc1        $f10, 0x74($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X74);
    // 0x802992AC: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x802992B0: nop

    // 0x802992B4: bc1f        L_802992C0
    if (!c1cs) {
        // 0x802992B8: nop
    
            goto L_802992C0;
    }
    // 0x802992B8: nop

    // 0x802992BC: swc1        $f0, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f0.u32l;
L_802992C0:
    // 0x802992C0: jal         0x8022331C
    // 0x802992C4: nop

    static_3_8022331C(rdram, ctx);
        goto after_1;
    // 0x802992C4: nop

    after_1:
    // 0x802992C8: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x802992CC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802992D0: lui         $at, 0x4360
    ctx->r1 = S32(0X4360 << 16);
    // 0x802992D4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802992D8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802992DC: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x802992E0: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x802992E4: lui         $a2, 0x4398
    ctx->r6 = S32(0X4398 << 16);
    // 0x802992E8: jal         0x8022A848
    // 0x802992EC: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    static_3_8022A848(rdram, ctx);
        goto after_2;
    // 0x802992EC: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x802992F0: jal         0x80221B2C
    // 0x802992F4: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    static_3_80221B2C(rdram, ctx);
        goto after_3;
    // 0x802992F4: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_3:
    // 0x802992F8: jal         0x8022970C
    // 0x802992FC: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    func_8022970C(rdram, ctx);
        goto after_4;
    // 0x802992FC: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_4:
    // 0x80299300: jal         0x8022149C
    // 0x80299304: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    static_3_8022149C(rdram, ctx);
        goto after_5;
    // 0x80299304: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_5:
    // 0x80299308: jal         0x802233EC
    // 0x8029930C: lui         $a0, 0x4C2
    ctx->r4 = S32(0X4C2 << 16);
    static_3_802233EC(rdram, ctx);
        goto after_6;
    // 0x8029930C: lui         $a0, 0x4C2
    ctx->r4 = S32(0X4C2 << 16);
    after_6:
    // 0x80299310: jal         0x8021E66C
    // 0x80299314: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_8021E66C(rdram, ctx);
        goto after_7;
    // 0x80299314: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_7:
    // 0x80299318: lwc1        $f18, 0x74($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X74);
    // 0x8029931C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80299320: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80299324: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x80299328: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8029932C: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x80299330: jal         0x80309DEC
    // 0x80299334: nop

    static_3_80309DEC(rdram, ctx);
        goto after_8;
    // 0x80299334: nop

    after_8:
    // 0x80299338: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8029933C: jal         0x8021E83C
    // 0x80299340: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_8021E83C(rdram, ctx);
        goto after_9;
    // 0x80299340: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_9:
    // 0x80299344: addiu       $t7, $zero, 0x140
    ctx->r15 = ADD32(0, 0X140);
    // 0x80299348: subu        $s0, $t7, $v0
    ctx->r16 = SUB32(ctx->r15, ctx->r2);
    // 0x8029934C: sra         $t8, $s0, 1
    ctx->r24 = S32(SIGNED(ctx->r16) >> 1);
    // 0x80299350: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    // 0x80299354: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80299358: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x8029935C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80299360: jal         0x8021E708
    // 0x80299364: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_10;
    // 0x80299364: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_10:
    // 0x80299368: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x8029936C: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x80299370: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80299374: jal         0x8021E87C
    // 0x80299378: addiu       $a1, $zero, 0x74
    ctx->r5 = ADD32(0, 0X74);
    static_3_8021E87C(rdram, ctx);
        goto after_11;
    // 0x80299378: addiu       $a1, $zero, 0x74
    ctx->r5 = ADD32(0, 0X74);
    after_11:
    // 0x8029937C: jal         0x8021EC9C
    // 0x80299380: nop

    static_3_8021EC9C(rdram, ctx);
        goto after_12;
    // 0x80299380: nop

    after_12:
    // 0x80299384: jal         0x8022337C
    // 0x80299388: nop

    static_3_8022337C(rdram, ctx);
        goto after_13;
    // 0x80299388: nop

    after_13:
    // 0x8029938C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80299390: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80299394: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x80299398: jr          $ra
    // 0x8029939C: nop

    return;
    // 0x8029939C: nop

;}
RECOMP_FUNC void D_8027A194(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027A20C: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x8027A210: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8027A214: sw          $s5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r21;
    // 0x8027A218: sw          $s4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r20;
    // 0x8027A21C: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x8027A220: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x8027A224: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x8027A228: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x8027A22C: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x8027A230: lbu         $v1, 0x67A8($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X67A8);
    // 0x8027A234: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x8027A238: or          $s4, $a1, $zero
    ctx->r20 = ctx->r5 | 0;
    // 0x8027A23C: blez        $v1, L_8027A2B0
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8027A240: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_8027A2B0;
    }
    // 0x8027A240: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8027A244: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8027A248: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x8027A24C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8027A250: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x8027A254: addiu       $s2, $sp, 0x54
    ctx->r18 = ADD32(ctx->r29, 0X54);
L_8027A258:
    // 0x8027A258: lw          $a0, 0x6794($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X6794);
    // 0x8027A25C: beql        $a0, $zero, L_8027A2A4
    if (ctx->r4 == 0) {
        // 0x8027A260: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_8027A2A4;
    }
    goto skip_0;
    // 0x8027A260: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x8027A264: lbu         $t6, 0x1E1($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X1E1);
    // 0x8027A268: bnel        $s5, $t6, L_8027A2A4
    if (ctx->r21 != ctx->r14) {
        // 0x8027A26C: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_8027A2A4;
    }
    goto skip_1;
    // 0x8027A26C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_1:
    // 0x8027A270: jal         0x802B34CC
    // 0x8027A274: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    static_3_802B34CC(rdram, ctx);
        goto after_0;
    // 0x8027A274: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_0:
    // 0x8027A278: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8027A27C: jal         0x802CF954
    // 0x8027A280: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    static_3_802CF954(rdram, ctx);
        goto after_1;
    // 0x8027A280: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_1:
    // 0x8027A284: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x8027A288: nop

    // 0x8027A28C: bc1fl       L_8027A2A0
    if (!c1cs) {
        // 0x8027A290: lbu         $v1, 0x67A8($s3)
        ctx->r3 = MEM_BU(ctx->r19, 0X67A8);
            goto L_8027A2A0;
    }
    goto skip_2;
    // 0x8027A290: lbu         $v1, 0x67A8($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X67A8);
    skip_2:
    // 0x8027A294: b           L_8027A2F0
    // 0x8027A298: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8027A2F0;
    // 0x8027A298: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8027A29C: lbu         $v1, 0x67A8($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X67A8);
L_8027A2A0:
    // 0x8027A2A0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8027A2A4:
    // 0x8027A2A4: slt         $at, $s0, $v1
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8027A2A8: bne         $at, $zero, L_8027A258
    if (ctx->r1 != 0) {
        // 0x8027A2AC: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_8027A258;
    }
    // 0x8027A2AC: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_8027A2B0:
    // 0x8027A2B0: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x8027A2B4: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x8027A2B8: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x8027A2BC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8027A2C0: addiu       $a0, $s3, 0x6794
    ctx->r4 = ADD32(ctx->r19, 0X6794);
    // 0x8027A2C4: addiu       $a1, $s3, 0x67A8
    ctx->r5 = ADD32(ctx->r19, 0X67A8);
    // 0x8027A2C8: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x8027A2CC: jal         0x802A3070
    // 0x8027A2D0: addiu       $a3, $s3, 0x67A9
    ctx->r7 = ADD32(ctx->r19, 0X67A9);
    static_3_802A3070(rdram, ctx);
        goto after_2;
    // 0x8027A2D0: addiu       $a3, $s3, 0x67A9
    ctx->r7 = ADD32(ctx->r19, 0X67A9);
    after_2:
    // 0x8027A2D4: beq         $v0, $zero, L_8027A2EC
    if (ctx->r2 == 0) {
        // 0x8027A2D8: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_8027A2EC;
    }
    // 0x8027A2D8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8027A2DC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8027A2E0: jal         0x802B3448
    // 0x8027A2E4: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    static_3_802B3448(rdram, ctx);
        goto after_3;
    // 0x8027A2E4: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_3:
    // 0x8027A2E8: sh          $s5, 0x1E0($s0)
    MEM_H(0X1E0, ctx->r16) = ctx->r21;
L_8027A2EC:
    // 0x8027A2EC: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_8027A2F0:
    // 0x8027A2F0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8027A2F4: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x8027A2F8: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x8027A2FC: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x8027A300: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x8027A304: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x8027A308: lw          $s4, 0x34($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X34);
    // 0x8027A30C: lw          $s5, 0x38($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X38);
    // 0x8027A310: jr          $ra
    // 0x8027A314: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    // 0x8027A314: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void D_802B95B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B9630: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802B9634: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802B9638: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802B963C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802B9640: beq         $a0, $zero, L_802B9684
    if (ctx->r4 == 0) {
        // 0x802B9644: sw          $a1, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r5;
            goto L_802B9684;
    }
    // 0x802B9644: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802B9648: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802B964C: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802B9650: jal         0x80320D30
    // 0x802B9654: sw          $t6, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r14;
    static_3_80320D30(rdram, ctx);
        goto after_0;
    // 0x802B9654: sw          $t6, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r14;
    after_0:
    // 0x802B9658: jal         0x802E9E94
    // 0x802B965C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802E9E94(rdram, ctx);
        goto after_1;
    // 0x802B965C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x802B9660: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802B9664: jal         0x80320C88
    // 0x802B9668: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_80320C88(rdram, ctx);
        goto after_2;
    // 0x802B9668: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x802B966C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x802B9670: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x802B9674: beql        $t8, $zero, L_802B9688
    if (ctx->r24 == 0) {
        // 0x802B9678: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802B9688;
    }
    goto skip_0;
    // 0x802B9678: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x802B967C: jal         0x802C681C
    // 0x802B9680: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802C681C(rdram, ctx);
        goto after_3;
    // 0x802B9680: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
L_802B9684:
    // 0x802B9684: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802B9688:
    // 0x802B9688: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802B968C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802B9690: jr          $ra
    // 0x802B9694: nop

    return;
    // 0x802B9694: nop

;}
RECOMP_FUNC void D_802D42D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D4354: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x802D4358: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x802D435C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x802D4360: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x802D4364: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x802D4368: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x802D436C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x802D4370: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x802D4374: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802D4378: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x802D437C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x802D4380: addu        $a2, $t6, $t7
    ctx->r6 = ADD32(ctx->r14, ctx->r15);
    // 0x802D4384: lw          $v1, 0x348($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X348);
    // 0x802D4388: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802D438C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802D4390: sll         $t8, $v1, 3
    ctx->r24 = S32(ctx->r3 << 3);
    // 0x802D4394: subu        $t8, $t8, $v1
    ctx->r24 = SUB32(ctx->r24, ctx->r3);
    // 0x802D4398: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x802D439C: sltiu       $at, $v1, 0x1E
    ctx->r1 = ctx->r3 < 0X1E ? 1 : 0;
    // 0x802D43A0: bne         $at, $zero, L_802D43BC
    if (ctx->r1 != 0) {
        // 0x802D43A4: addu        $v0, $a2, $t8
        ctx->r2 = ADD32(ctx->r6, ctx->r24);
            goto L_802D43BC;
    }
    // 0x802D43A4: addu        $v0, $a2, $t8
    ctx->r2 = ADD32(ctx->r6, ctx->r24);
    // 0x802D43A8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802D43AC: jal         0x80231A24
    // 0x802D43B0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x802D43B0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x802D43B4: b           L_802D43FC
    // 0x802D43B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802D43FC;
    // 0x802D43B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802D43BC:
    // 0x802D43BC: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x802D43C0: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    // 0x802D43C4: lwc1        $f6, 0x4($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X4);
    // 0x802D43C8: swc1        $f6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f6.u32l;
    // 0x802D43CC: lwc1        $f8, 0x8($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X8);
    // 0x802D43D0: swc1        $f8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f8.u32l;
    // 0x802D43D4: lwc1        $f10, 0xC($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0XC);
    // 0x802D43D8: swc1        $f10, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f10.u32l;
    // 0x802D43DC: lwc1        $f16, 0x10($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X10);
    // 0x802D43E0: swc1        $f16, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f16.u32l;
    // 0x802D43E4: lwc1        $f18, 0x14($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X14);
    // 0x802D43E8: swc1        $f18, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f18.u32l;
    // 0x802D43EC: lw          $t9, 0x348($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X348);
    // 0x802D43F0: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x802D43F4: sw          $t0, 0x348($a2)
    MEM_W(0X348, ctx->r6) = ctx->r8;
    // 0x802D43F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802D43FC:
    // 0x802D43FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802D4400: jr          $ra
    // 0x802D4404: nop

    return;
    // 0x802D4404: nop

;}
RECOMP_FUNC void func_80237E10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80237E10: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80237E14: addiu       $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
    // 0x80237E18: sh          $t0, 0x0($t1)
    MEM_H(0X0, ctx->r9) = ctx->r8;
    // 0x80237E1C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80237E20: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80237E24: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80237E28: sb          $t2, 0x2($t3)
    MEM_B(0X2, ctx->r11) = ctx->r10;
    // 0x80237E2C: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80237E30: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x80237E34: sw          $t4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r12;
    // 0x80237E38: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80237E3C: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x80237E40: sw          $t6, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r14;
    // 0x80237E44: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80237E48: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80237E4C: sw          $t8, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->r24;
    // 0x80237E50: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80237E54: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80237E58: sw          $t0, 0x10($t1)
    MEM_W(0X10, ctx->r9) = ctx->r8;
    // 0x80237E5C: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80237E60: sw          $zero, 0x14($t2)
    MEM_W(0X14, ctx->r10) = 0;
    // 0x80237E64: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80237E68: bne         $t3, $at, L_80237E94
    if (ctx->r11 != ctx->r1) {
        // 0x80237E6C: nop
    
            goto L_80237E94;
    }
    // 0x80237E6C: nop

    // 0x80237E70: jal         0x80244A90
    // 0x80237E74: nop

    static_3_80244A90(rdram, ctx);
        goto after_0;
    // 0x80237E74: nop

    after_0:
    // 0x80237E78: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80237E7C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80237E80: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x80237E84: jal         0x80244940
    // 0x80237E88: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_80244940(rdram, ctx);
        goto after_1;
    // 0x80237E88: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80237E8C: b           L_80237EB4
    // 0x80237E90: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
        goto L_80237EB4;
    // 0x80237E90: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_80237E94:
    // 0x80237E94: jal         0x80244A90
    // 0x80237E98: nop

    static_3_80244A90(rdram, ctx);
        goto after_2;
    // 0x80237E98: nop

    after_2:
    // 0x80237E9C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80237EA0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80237EA4: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x80237EA8: jal         0x80236B80
    // 0x80237EAC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_80236B80(rdram, ctx);
        goto after_3;
    // 0x80237EAC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x80237EB0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_80237EB4:
    // 0x80237EB4: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80237EB8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80237EBC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80237EC0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80237EC4: jr          $ra
    // 0x80237EC8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80237EC8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80237ECC: nop

    // 0x80237ED0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80237ED4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80237ED8: addiu       $t6, $zero, 0xE
    ctx->r14 = ADD32(0, 0XE);
    // 0x80237EDC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80237EE0: sh          $t6, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r14;
    // 0x80237EE4: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x80237EE8: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    // 0x80237EEC: jal         0x8023F37C
    // 0x80237EF0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_8023F37C(rdram, ctx);
        goto after_4;
    // 0x80237EF0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x80237EF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80237EF8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80237EFC: jr          $ra
    // 0x80237F00: nop

    return;
    // 0x80237F00: nop

    // 0x80237F04: nop

    // 0x80237F08: nop

    // 0x80237F0C: nop

    // 0x80237F10: jr          $ra
    // 0x80237F14: lw          $v0, 0x2C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2C);
    return;
    // 0x80237F14: lw          $v0, 0x2C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2C);
    // 0x80237F18: nop

    // 0x80237F1C: nop

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
    // 0x80237F50: lw          $t9, 0x18($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X18);
    // 0x80237F54: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80237F58: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x80237F5C: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
;}
RECOMP_FUNC void D_8024D6C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024D700: lui         $t9, 0x8400
    ctx->r25 = S32(0X8400 << 16);
    // 0x8024D704: ori         $t9, $t9, 0x17A8
    ctx->r25 = ctx->r25 | 0X17A8;
    // 0x8024D708: jr          $t9
    // 0x8024D70C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
    return;
    // 0x8024D70C: nop

;}
RECOMP_FUNC void D_802AA580(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AA600: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802AA604: lbu         $t6, 0x0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X0);
    // 0x802AA608: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x802AA60C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802AA610: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802AA614: bne         $t6, $zero, L_802AA624
    if (ctx->r14 != 0) {
        // 0x802AA618: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_802AA624;
    }
    // 0x802AA618: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802AA61C: b           L_802AA628
    // 0x802AA620: addiu       $a1, $zero, 0x70
    ctx->r5 = ADD32(0, 0X70);
        goto L_802AA628;
    // 0x802AA620: addiu       $a1, $zero, 0x70
    ctx->r5 = ADD32(0, 0X70);
L_802AA624:
    // 0x802AA624: addiu       $a1, $zero, 0x73
    ctx->r5 = ADD32(0, 0X73);
L_802AA628:
    // 0x802AA628: jal         0x8021ACB0
    // 0x802AA62C: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    static_3_8021ACB0(rdram, ctx);
        goto after_0;
    // 0x802AA62C: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_0:
    // 0x802AA630: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802AA634: jal         0x8021B838
    // 0x802AA638: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_8021B838(rdram, ctx);
        goto after_1;
    // 0x802AA638: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x802AA63C: lui         $at, 0x4110
    ctx->r1 = S32(0X4110 << 16);
    // 0x802AA640: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802AA644: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    // 0x802AA648: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x802AA64C: sw          $t7, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r15;
    // 0x802AA650: swc1        $f4, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f4.u32l;
    // 0x802AA654: lw          $t9, 0xBC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XBC);
    // 0x802AA658: lh          $t8, 0xB8($v0)
    ctx->r24 = MEM_H(ctx->r2, 0XB8);
    // 0x802AA65C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802AA660: jalr        $t9
    // 0x802AA664: addu        $a0, $t8, $s0
    ctx->r4 = ADD32(ctx->r24, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x802AA664: addu        $a0, $t8, $s0
    ctx->r4 = ADD32(ctx->r24, ctx->r16);
    after_2:
    // 0x802AA668: addiu       $a0, $s0, 0x498
    ctx->r4 = ADD32(ctx->r16, 0X498);
    // 0x802AA66C: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    // 0x802AA670: jal         0x802FD4B0
    // 0x802AA674: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    static_3_802FD4B0(rdram, ctx);
        goto after_3;
    // 0x802AA674: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_3:
    // 0x802AA678: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802AA67C: jal         0x802FD498
    // 0x802AA680: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    static_3_802FD498(rdram, ctx);
        goto after_4;
    // 0x802AA680: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    after_4:
    // 0x802AA684: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802AA688: jal         0x802FD4A4
    // 0x802AA68C: lui         $a1, 0x40E0
    ctx->r5 = S32(0X40E0 << 16);
    static_3_802FD4A4(rdram, ctx);
        goto after_5;
    // 0x802AA68C: lui         $a1, 0x40E0
    ctx->r5 = S32(0X40E0 << 16);
    after_5:
    // 0x802AA690: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802AA694: jal         0x802FD480
    // 0x802AA698: lui         $a1, 0x4110
    ctx->r5 = S32(0X4110 << 16);
    static_3_802FD480(rdram, ctx);
        goto after_6;
    // 0x802AA698: lui         $a1, 0x4110
    ctx->r5 = S32(0X4110 << 16);
    after_6:
    // 0x802AA69C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802AA6A0: jal         0x802FD48C
    // 0x802AA6A4: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    static_3_802FD48C(rdram, ctx);
        goto after_7;
    // 0x802AA6A4: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    after_7:
    // 0x802AA6A8: addiu       $t0, $zero, 0x22
    ctx->r8 = ADD32(0, 0X22);
    // 0x802AA6AC: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x802AA6B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802AA6B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802AA6B8: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x802AA6BC: jal         0x80317194
    // 0x802AA6C0: addiu       $a3, $zero, 0x21
    ctx->r7 = ADD32(0, 0X21);
    static_3_80317194(rdram, ctx);
        goto after_8;
    // 0x802AA6C0: addiu       $a3, $zero, 0x21
    ctx->r7 = ADD32(0, 0X21);
    after_8:
    // 0x802AA6C4: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
    // 0x802AA6C8: addiu       $t1, $zero, 0x20
    ctx->r9 = ADD32(0, 0X20);
    // 0x802AA6CC: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x802AA6D0: addiu       $t3, $zero, 0x21
    ctx->r11 = ADD32(0, 0X21);
    // 0x802AA6D4: sw          $t1, 0x2A0($s0)
    MEM_W(0X2A0, ctx->r16) = ctx->r9;
    // 0x802AA6D8: sw          $v0, 0x2A4($s0)
    MEM_W(0X2A4, ctx->r16) = ctx->r2;
    // 0x802AA6DC: sw          $v0, 0x2A8($s0)
    MEM_W(0X2A8, ctx->r16) = ctx->r2;
    // 0x802AA6E0: sw          $t2, 0x2AC($s0)
    MEM_W(0X2AC, ctx->r16) = ctx->r10;
    // 0x802AA6E4: sw          $t3, 0x2B0($s0)
    MEM_W(0X2B0, ctx->r16) = ctx->r11;
    // 0x802AA6E8: sb          $zero, 0x5E8($s0)
    MEM_B(0X5E8, ctx->r16) = 0;
    // 0x802AA6EC: addiu       $a0, $s0, 0x1A4
    ctx->r4 = ADD32(ctx->r16, 0X1A4);
    // 0x802AA6F0: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    // 0x802AA6F4: jal         0x802D51DC
    // 0x802AA6F8: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    static_3_802D51DC(rdram, ctx);
        goto after_9;
    // 0x802AA6F8: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    after_9:
    // 0x802AA6FC: addiu       $a0, $s0, 0xEDC
    ctx->r4 = ADD32(ctx->r16, 0XEDC);
    // 0x802AA700: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802AA704: addiu       $a2, $s0, 0x668
    ctx->r6 = ADD32(ctx->r16, 0X668);
    // 0x802AA708: jal         0x802C4A20
    // 0x802AA70C: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    static_3_802C4A20(rdram, ctx);
        goto after_10;
    // 0x802AA70C: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    after_10:
    // 0x802AA710: addiu       $a0, $s0, 0x1070
    ctx->r4 = ADD32(ctx->r16, 0X1070);
    // 0x802AA714: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x802AA718: addiu       $a2, $s0, 0x6A8
    ctx->r6 = ADD32(ctx->r16, 0X6A8);
    // 0x802AA71C: jal         0x802C4A20
    // 0x802AA720: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    static_3_802C4A20(rdram, ctx);
        goto after_11;
    // 0x802AA720: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    after_11:
    // 0x802AA724: addiu       $a0, $s0, 0x1204
    ctx->r4 = ADD32(ctx->r16, 0X1204);
    // 0x802AA728: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x802AA72C: addiu       $a2, $s0, 0x6E8
    ctx->r6 = ADD32(ctx->r16, 0X6E8);
    // 0x802AA730: jal         0x802C4A20
    // 0x802AA734: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    static_3_802C4A20(rdram, ctx);
        goto after_12;
    // 0x802AA734: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    after_12:
    // 0x802AA738: addiu       $a0, $s0, 0x1398
    ctx->r4 = ADD32(ctx->r16, 0X1398);
    // 0x802AA73C: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    // 0x802AA740: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    // 0x802AA744: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x802AA748: jal         0x802C4A20
    // 0x802AA74C: addiu       $a2, $s0, 0x728
    ctx->r6 = ADD32(ctx->r16, 0X728);
    static_3_802C4A20(rdram, ctx);
        goto after_13;
    // 0x802AA74C: addiu       $a2, $s0, 0x728
    ctx->r6 = ADD32(ctx->r16, 0X728);
    after_13:
    // 0x802AA750: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802AA754: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802AA758: jal         0x802C5858
    // 0x802AA75C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    static_3_802C5858(rdram, ctx);
        goto after_14;
    // 0x802AA75C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    after_14:
    // 0x802AA760: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x802AA764: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802AA768: lui         $at, 0x43F0
    ctx->r1 = S32(0X43F0 << 16);
    // 0x802AA76C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802AA770: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x802AA774: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802AA778: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x802AA77C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802AA780: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x802AA784: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802AA788: addiu       $a0, $s0, 0x548
    ctx->r4 = ADD32(ctx->r16, 0X548);
    // 0x802AA78C: swc1        $f0, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f0.u32l;
    // 0x802AA790: swc1        $f0, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f0.u32l;
    // 0x802AA794: swc1        $f6, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f6.u32l;
    // 0x802AA798: swc1        $f8, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f8.u32l;
    // 0x802AA79C: swc1        $f10, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f10.u32l;
    // 0x802AA7A0: swc1        $f16, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->f16.u32l;
    // 0x802AA7A4: jal         0x8022970C
    // 0x802AA7A8: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    func_8022970C(rdram, ctx);
        goto after_15;
    // 0x802AA7A8: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    after_15:
    // 0x802AA7AC: addiu       $a0, $s0, 0x588
    ctx->r4 = ADD32(ctx->r16, 0X588);
    // 0x802AA7B0: jal         0x8022970C
    // 0x802AA7B4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    func_8022970C(rdram, ctx);
        goto after_16;
    // 0x802AA7B4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_16:
    // 0x802AA7B8: lui         $a1, 0xC10C
    ctx->r5 = S32(0XC10C << 16);
    // 0x802AA7BC: lui         $a2, 0x4012
    ctx->r6 = S32(0X4012 << 16);
    // 0x802AA7C0: lui         $a3, 0xBD85
    ctx->r7 = S32(0XBD85 << 16);
    // 0x802AA7C4: ori         $a3, $a3, 0x1EB8
    ctx->r7 = ctx->r7 | 0X1EB8;
    // 0x802AA7C8: ori         $a2, $a2, 0xC083
    ctx->r6 = ctx->r6 | 0XC083;
    // 0x802AA7CC: ori         $a1, $a1, 0xED91
    ctx->r5 = ctx->r5 | 0XED91;
    // 0x802AA7D0: jal         0x8022A0D0
    // 0x802AA7D4: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    static_3_8022A0D0(rdram, ctx);
        goto after_17;
    // 0x802AA7D4: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_17:
    // 0x802AA7D8: lui         $a1, 0x410C
    ctx->r5 = S32(0X410C << 16);
    // 0x802AA7DC: lui         $a2, 0x4012
    ctx->r6 = S32(0X4012 << 16);
    // 0x802AA7E0: lui         $a3, 0xBD85
    ctx->r7 = S32(0XBD85 << 16);
    // 0x802AA7E4: ori         $a3, $a3, 0x1EB8
    ctx->r7 = ctx->r7 | 0X1EB8;
    // 0x802AA7E8: ori         $a2, $a2, 0xC083
    ctx->r6 = ctx->r6 | 0XC083;
    // 0x802AA7EC: ori         $a1, $a1, 0xED91
    ctx->r5 = ctx->r5 | 0XED91;
    // 0x802AA7F0: jal         0x8022A0D0
    // 0x802AA7F4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    static_3_8022A0D0(rdram, ctx);
        goto after_18;
    // 0x802AA7F4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_18:
    // 0x802AA7F8: lw          $a0, 0x770($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X770);
    // 0x802AA7FC: jal         0x803169A0
    // 0x802AA800: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    static_3_803169A0(rdram, ctx);
        goto after_19;
    // 0x802AA800: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_19:
    // 0x802AA804: lw          $a0, 0x774($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X774);
    // 0x802AA808: jal         0x803169A0
    // 0x802AA80C: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    static_3_803169A0(rdram, ctx);
        goto after_20;
    // 0x802AA80C: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_20:
    // 0x802AA810: jal         0x802DCF6C
    // 0x802AA814: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802DCF6C(rdram, ctx);
        goto after_21;
    // 0x802AA814: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_21:
    // 0x802AA818: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802AA81C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802AA820: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x802AA824: jr          $ra
    // 0x802AA828: nop

    return;
    // 0x802AA828: nop

;}
RECOMP_FUNC void D_802D7FBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D803C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802D8040: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802D8044: jr          $ra
    // 0x802D8048: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    return;
    // 0x802D8048: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
;}
RECOMP_FUNC void D_802EFF04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EFF84: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802EFF88: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x802EFF8C: lh          $t6, 0x158($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X158);
    // 0x802EFF90: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802EFF94: bgez        $t6, L_802EFFA4
    if (SIGNED(ctx->r14) >= 0) {
        // 0x802EFF98: nop
    
            goto L_802EFFA4;
    }
    // 0x802EFF98: nop

    // 0x802EFF9C: jr          $ra
    // 0x802EFFA0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x802EFFA0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802EFFA4:
    // 0x802EFFA4: jr          $ra
    // 0x802EFFA8: nop

    return;
    // 0x802EFFA8: nop

;}
RECOMP_FUNC void D_80238B40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80238B40: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x80238B44: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80238B48: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80238B4C: lbu         $t6, 0x65($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X65);
    // 0x80238B50: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80238B54: beq         $t6, $zero, L_80238B74
    if (ctx->r14 == 0) {
        // 0x80238B58: nop
    
            goto L_80238B74;
    }
    // 0x80238B58: nop

    // 0x80238B5C: jal         0x802456A0
    // 0x80238B60: sb          $zero, 0x65($a0)
    MEM_B(0X65, ctx->r4) = 0;
    static_3_802456A0(rdram, ctx);
        goto after_0;
    // 0x80238B60: sb          $zero, 0x65($a0)
    MEM_B(0X65, ctx->r4) = 0;
    after_0:
    // 0x80238B64: beq         $v0, $zero, L_80238B74
    if (ctx->r2 == 0) {
        // 0x80238B68: nop
    
            goto L_80238B74;
    }
    // 0x80238B68: nop

    // 0x80238B6C: b           L_80238D38
    // 0x80238B70: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80238D38;
    // 0x80238B70: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80238B74:
    // 0x80238B74: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x80238B78: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x80238B7C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80238B80: jal         0x80245710
    // 0x80238B84: addiu       $a3, $sp, 0x60
    ctx->r7 = ADD32(ctx->r29, 0X60);
    static_3_80245710(rdram, ctx);
        goto after_1;
    // 0x80238B84: addiu       $a3, $sp, 0x60
    ctx->r7 = ADD32(ctx->r29, 0X60);
    after_1:
    // 0x80238B88: beq         $v0, $zero, L_80238B98
    if (ctx->r2 == 0) {
        // 0x80238B8C: addiu       $a0, $sp, 0x60
        ctx->r4 = ADD32(ctx->r29, 0X60);
            goto L_80238B98;
    }
    // 0x80238B8C: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x80238B90: b           L_80238D38
    // 0x80238B94: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80238D38;
    // 0x80238B94: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80238B98:
    // 0x80238B98: addiu       $a1, $sp, 0x82
    ctx->r5 = ADD32(ctx->r29, 0X82);
    // 0x80238B9C: jal         0x80244B3C
    // 0x80238BA0: addiu       $a2, $sp, 0x80
    ctx->r6 = ADD32(ctx->r29, 0X80);
    static_3_80244B3C(rdram, ctx);
        goto after_2;
    // 0x80238BA0: addiu       $a2, $sp, 0x80
    ctx->r6 = ADD32(ctx->r29, 0X80);
    after_2:
    // 0x80238BA4: lhu         $t7, 0x82($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X82);
    // 0x80238BA8: lhu         $t8, 0x7C($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X7C);
    // 0x80238BAC: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x80238BB0: bne         $t7, $t8, L_80238BCC
    if (ctx->r15 != ctx->r24) {
        // 0x80238BB4: sw          $a1, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r5;
            goto L_80238BCC;
    }
    // 0x80238BB4: sw          $a1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r5;
    // 0x80238BB8: lhu         $t9, 0x80($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X80);
    // 0x80238BBC: lhu         $t1, 0x7E($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X7E);
    // 0x80238BC0: nop

    // 0x80238BC4: beq         $t9, $t1, L_80238C1C
    if (ctx->r25 == ctx->r9) {
        // 0x80238BC8: lw          $t3, 0x38($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X38);
            goto L_80238C1C;
    }
    // 0x80238BC8: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
L_80238BCC:
    // 0x80238BCC: jal         0x80244F84
    // 0x80238BD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80244F84(rdram, ctx);
        goto after_3;
    // 0x80238BD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80238BD4: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80238BD8: bne         $v0, $at, L_80238C08
    if (ctx->r2 != ctx->r1) {
        // 0x80238BDC: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80238C08;
    }
    // 0x80238BDC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80238BE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80238BE4: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x80238BE8: jal         0x80244C38
    // 0x80238BEC: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    static_3_80244C38(rdram, ctx);
        goto after_4;
    // 0x80238BEC: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    after_4:
    // 0x80238BF0: beq         $v0, $zero, L_80238C00
    if (ctx->r2 == 0) {
        // 0x80238BF4: addiu       $t2, $sp, 0x40
        ctx->r10 = ADD32(ctx->r29, 0X40);
            goto L_80238C00;
    }
    // 0x80238BF4: addiu       $t2, $sp, 0x40
    ctx->r10 = ADD32(ctx->r29, 0X40);
    // 0x80238BF8: b           L_80238D38
    // 0x80238BFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80238D38;
    // 0x80238BFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80238C00:
    // 0x80238C00: b           L_80238C18
    // 0x80238C04: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
        goto L_80238C18;
    // 0x80238C04: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
L_80238C08:
    // 0x80238C08: beq         $v0, $zero, L_80238C1C
    if (ctx->r2 == 0) {
        // 0x80238C0C: lw          $t3, 0x38($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X38);
            goto L_80238C1C;
    }
    // 0x80238C0C: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x80238C10: b           L_80238D34
    // 0x80238C14: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_80238D34;
    // 0x80238C14: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80238C18:
    // 0x80238C18: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
L_80238C1C:
    // 0x80238C1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80238C20: lhu         $t4, 0x18($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X18);
    // 0x80238C24: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    // 0x80238C28: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x80238C2C: bne         $t5, $zero, L_80238C6C
    if (ctx->r13 != 0) {
        // 0x80238C30: lw          $v1, 0x38($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X38);
            goto L_80238C6C;
    }
    // 0x80238C30: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x80238C34: jal         0x80244C38
    // 0x80238C38: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    static_3_80244C38(rdram, ctx);
        goto after_5;
    // 0x80238C38: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    after_5:
    // 0x80238C3C: beq         $v0, $zero, L_80238C50
    if (ctx->r2 == 0) {
        // 0x80238C40: lhu         $t7, 0x58($sp)
        ctx->r15 = MEM_HU(ctx->r29, 0X58);
            goto L_80238C50;
    }
    // 0x80238C40: lhu         $t7, 0x58($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X58);
    // 0x80238C44: b           L_80238D38
    // 0x80238C48: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80238D38;
    // 0x80238C48: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80238C4C: lhu         $t7, 0x58($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X58);
L_80238C50:
    // 0x80238C50: addiu       $t6, $sp, 0x40
    ctx->r14 = ADD32(ctx->r29, 0X40);
    // 0x80238C54: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x80238C58: bne         $t8, $zero, L_80238C68
    if (ctx->r24 != 0) {
        // 0x80238C5C: sw          $t6, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r14;
            goto L_80238C68;
    }
    // 0x80238C5C: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    // 0x80238C60: b           L_80238D34
    // 0x80238C64: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
        goto L_80238D34;
    // 0x80238C64: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_80238C68:
    // 0x80238C68: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
L_80238C6C:
    // 0x80238C6C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80238C70: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80238C74: addiu       $t0, $zero, 0x20
    ctx->r8 = ADD32(0, 0X20);
    // 0x80238C78: addiu       $a1, $v1, 0x1
    ctx->r5 = ADD32(ctx->r3, 0X1);
    // 0x80238C7C: addiu       $a2, $v1, 0x2
    ctx->r6 = ADD32(ctx->r3, 0X2);
    // 0x80238C80: addiu       $a3, $v1, 0x3
    ctx->r7 = ADD32(ctx->r3, 0X3);
L_80238C84:
    // 0x80238C84: lbu         $t9, 0x0($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X0);
    // 0x80238C88: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80238C8C: sb          $t9, 0xC($v0)
    MEM_B(0XC, ctx->r2) = ctx->r25;
    // 0x80238C90: lbu         $t1, 0x0($a1)
    ctx->r9 = MEM_BU(ctx->r5, 0X0);
    // 0x80238C94: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80238C98: sb          $t1, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r9;
    // 0x80238C9C: lbu         $t2, 0x0($a2)
    ctx->r10 = MEM_BU(ctx->r6, 0X0);
    // 0x80238CA0: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80238CA4: sb          $t2, 0xA($v0)
    MEM_B(0XA, ctx->r2) = ctx->r10;
    // 0x80238CA8: lbu         $t4, 0x0($a3)
    ctx->r12 = MEM_BU(ctx->r7, 0X0);
    // 0x80238CAC: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x80238CB0: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x80238CB4: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x80238CB8: bne         $a0, $t0, L_80238C84
    if (ctx->r4 != ctx->r8) {
        // 0x80238CBC: sb          $t4, 0xB($v0)
        MEM_B(0XB, ctx->r2) = ctx->r12;
            goto L_80238C84;
    }
    // 0x80238CBC: sb          $t4, 0xB($v0)
    MEM_B(0XB, ctx->r2) = ctx->r12;
    // 0x80238CC0: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x80238CC4: addiu       $t1, $zero, 0x10
    ctx->r9 = ADD32(0, 0X10);
    // 0x80238CC8: lbu         $t3, 0x1B($t5)
    ctx->r11 = MEM_BU(ctx->r13, 0X1B);
    // 0x80238CCC: addiu       $t2, $zero, 0x8
    ctx->r10 = ADD32(0, 0X8);
    // 0x80238CD0: sw          $t3, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->r11;
    // 0x80238CD4: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x80238CD8: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x80238CDC: lbu         $t7, 0x1A($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X1A);
    // 0x80238CE0: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x80238CE4: andi        $v0, $t7, 0xFF
    ctx->r2 = ctx->r15 & 0XFF;
    // 0x80238CE8: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x80238CEC: sll         $t8, $v0, 1
    ctx->r24 = S32(ctx->r2 << 1);
    // 0x80238CF0: addiu       $t0, $v1, 0x8
    ctx->r8 = ADD32(ctx->r3, 0X8);
    // 0x80238CF4: addiu       $t9, $t8, 0x3
    ctx->r25 = ADD32(ctx->r24, 0X3);
    // 0x80238CF8: addu        $t4, $t0, $v1
    ctx->r12 = ADD32(ctx->r8, ctx->r3);
    // 0x80238CFC: sw          $t9, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r25;
    // 0x80238D00: sw          $t1, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->r9;
    // 0x80238D04: sw          $t2, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r10;
    // 0x80238D08: sw          $t0, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->r8;
    // 0x80238D0C: sw          $t4, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->r12;
    // 0x80238D10: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x80238D14: addiu       $a3, $s0, 0x2C
    ctx->r7 = ADD32(ctx->r16, 0X2C);
    // 0x80238D18: jal         0x80245710
    // 0x80238D1C: sb          $t7, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r15;
    static_3_80245710(rdram, ctx);
        goto after_6;
    // 0x80238D1C: sb          $t7, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r15;
    after_6:
    // 0x80238D20: beq         $v0, $zero, L_80238D30
    if (ctx->r2 == 0) {
        // 0x80238D24: nop
    
            goto L_80238D30;
    }
    // 0x80238D24: nop

    // 0x80238D28: b           L_80238D38
    // 0x80238D2C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80238D38;
    // 0x80238D2C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80238D30:
    // 0x80238D30: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80238D34:
    // 0x80238D34: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80238D38:
    // 0x80238D38: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80238D3C: jr          $ra
    // 0x80238D40: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    return;
    // 0x80238D40: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void D_80224A6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80224A6C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80224A70: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80224A74: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80224A78: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80224A7C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80224A80: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80224A84: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x80224A88: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80224A8C: jal         0x8022B374
    // 0x80224A90: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_8022B374(rdram, ctx);
        goto after_0;
    // 0x80224A90: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_0:
    // 0x80224A94: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
L_80224A98:
    // 0x80224A98: lui         $at, 0x5556
    ctx->r1 = S32(0X5556 << 16);
    // 0x80224A9C: ori         $at, $at, 0x4C57
    ctx->r1 = ctx->r1 | 0X4C57;
    // 0x80224AA0: sltu        $at, $s0, $at
    ctx->r1 = ctx->r16 < ctx->r1 ? 1 : 0;
    // 0x80224AA4: bne         $at, $zero, L_80224AFC
    if (ctx->r1 != 0) {
        // 0x80224AA8: lui         $at, 0x5556
        ctx->r1 = S32(0X5556 << 16);
            goto L_80224AFC;
    }
    // 0x80224AA8: lui         $at, 0x5556
    ctx->r1 = S32(0X5556 << 16);
    // 0x80224AAC: ori         $at, $at, 0x4D44
    ctx->r1 = ctx->r1 | 0X4D44;
    // 0x80224AB0: beq         $s0, $at, L_80224BAC
    if (ctx->r16 == ctx->r1) {
        // 0x80224AB4: lui         $at, 0x5556
        ctx->r1 = S32(0X5556 << 16);
            goto L_80224BAC;
    }
    // 0x80224AB4: lui         $at, 0x5556
    ctx->r1 = S32(0X5556 << 16);
    // 0x80224AB8: ori         $at, $at, 0x5351
    ctx->r1 = ctx->r1 | 0X5351;
    // 0x80224ABC: beq         $s0, $at, L_80224B5C
    if (ctx->r16 == ctx->r1) {
        // 0x80224AC0: lui         $at, 0x5556
        ctx->r1 = S32(0X5556 << 16);
            goto L_80224B5C;
    }
    // 0x80224AC0: lui         $at, 0x5556
    ctx->r1 = S32(0X5556 << 16);
    // 0x80224AC4: ori         $at, $at, 0x5449
    ctx->r1 = ctx->r1 | 0X5449;
    // 0x80224AC8: beq         $s0, $at, L_80224BCC
    if (ctx->r16 == ctx->r1) {
        // 0x80224ACC: lui         $at, 0x5556
        ctx->r1 = S32(0X5556 << 16);
            goto L_80224BCC;
    }
    // 0x80224ACC: lui         $at, 0x5556
    ctx->r1 = S32(0X5556 << 16);
    // 0x80224AD0: ori         $at, $at, 0x5450
    ctx->r1 = ctx->r1 | 0X5450;
    // 0x80224AD4: beq         $s0, $at, L_80224C1C
    if (ctx->r16 == ctx->r1) {
        // 0x80224AD8: lui         $at, 0x5556
        ctx->r1 = S32(0X5556 << 16);
            goto L_80224C1C;
    }
    // 0x80224AD8: lui         $at, 0x5556
    ctx->r1 = S32(0X5556 << 16);
    // 0x80224ADC: ori         $at, $at, 0x5452
    ctx->r1 = ctx->r1 | 0X5452;
    // 0x80224AE0: beq         $s0, $at, L_80224B7C
    if (ctx->r16 == ctx->r1) {
        // 0x80224AE4: lui         $at, 0x5556
        ctx->r1 = S32(0X5556 << 16);
            goto L_80224B7C;
    }
    // 0x80224AE4: lui         $at, 0x5556
    ctx->r1 = S32(0X5556 << 16);
    // 0x80224AE8: ori         $at, $at, 0x5458
    ctx->r1 = ctx->r1 | 0X5458;
    // 0x80224AEC: beq         $s0, $at, L_80224BBC
    if (ctx->r16 == ctx->r1) {
        // 0x80224AF0: nop
    
            goto L_80224BBC;
    }
    // 0x80224AF0: nop

    // 0x80224AF4: b           L_80224C28
    // 0x80224AF8: nop

        goto L_80224C28;
    // 0x80224AF8: nop

L_80224AFC:
    // 0x80224AFC: lui         $at, 0x5556
    ctx->r1 = S32(0X5556 << 16);
    // 0x80224B00: ori         $at, $at, 0x414E
    ctx->r1 = ctx->r1 | 0X414E;
    // 0x80224B04: beq         $s0, $at, L_80224BEC
    if (ctx->r16 == ctx->r1) {
        // 0x80224B08: lui         $at, 0x5556
        ctx->r1 = S32(0X5556 << 16);
            goto L_80224BEC;
    }
    // 0x80224B08: lui         $at, 0x5556
    ctx->r1 = S32(0X5556 << 16);
    // 0x80224B0C: ori         $at, $at, 0x4254
    ctx->r1 = ctx->r1 | 0X4254;
    // 0x80224B10: beq         $s0, $at, L_80224C0C
    if (ctx->r16 == ctx->r1) {
        // 0x80224B14: lui         $at, 0x5556
        ctx->r1 = S32(0X5556 << 16);
            goto L_80224C0C;
    }
    // 0x80224B14: lui         $at, 0x5556
    ctx->r1 = S32(0X5556 << 16);
    // 0x80224B18: ori         $at, $at, 0x4354
    ctx->r1 = ctx->r1 | 0X4354;
    // 0x80224B1C: beq         $s0, $at, L_80224B8C
    if (ctx->r16 == ctx->r1) {
        // 0x80224B20: lui         $at, 0x5556
        ctx->r1 = S32(0X5556 << 16);
            goto L_80224B8C;
    }
    // 0x80224B20: lui         $at, 0x5556
    ctx->r1 = S32(0X5556 << 16);
    // 0x80224B24: ori         $at, $at, 0x454E
    ctx->r1 = ctx->r1 | 0X454E;
    // 0x80224B28: beq         $s0, $at, L_80224B6C
    if (ctx->r16 == ctx->r1) {
        // 0x80224B2C: lui         $at, 0x5556
        ctx->r1 = S32(0X5556 << 16);
            goto L_80224B6C;
    }
    // 0x80224B2C: lui         $at, 0x5556
    ctx->r1 = S32(0X5556 << 16);
    // 0x80224B30: ori         $at, $at, 0x4654
    ctx->r1 = ctx->r1 | 0X4654;
    // 0x80224B34: beq         $s0, $at, L_80224BFC
    if (ctx->r16 == ctx->r1) {
        // 0x80224B38: lui         $at, 0x5556
        ctx->r1 = S32(0X5556 << 16);
            goto L_80224BFC;
    }
    // 0x80224B38: lui         $at, 0x5556
    ctx->r1 = S32(0X5556 << 16);
    // 0x80224B3C: ori         $at, $at, 0x4C54
    ctx->r1 = ctx->r1 | 0X4C54;
    // 0x80224B40: beq         $s0, $at, L_80224BDC
    if (ctx->r16 == ctx->r1) {
        // 0x80224B44: lui         $at, 0x5556
        ctx->r1 = S32(0X5556 << 16);
            goto L_80224BDC;
    }
    // 0x80224B44: lui         $at, 0x5556
    ctx->r1 = S32(0X5556 << 16);
    // 0x80224B48: ori         $at, $at, 0x4C56
    ctx->r1 = ctx->r1 | 0X4C56;
    // 0x80224B4C: beq         $s0, $at, L_80224B9C
    if (ctx->r16 == ctx->r1) {
        // 0x80224B50: nop
    
            goto L_80224B9C;
    }
    // 0x80224B50: nop

    // 0x80224B54: b           L_80224C28
    // 0x80224B58: nop

        goto L_80224C28;
    // 0x80224B58: nop

L_80224B5C:
    // 0x80224B5C: jal         0x80228004
    // 0x80224B60: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    static_3_80228004(rdram, ctx);
        goto after_1;
    // 0x80224B60: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x80224B64: b           L_80224C28
    // 0x80224B68: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_80224C28;
    // 0x80224B68: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_80224B6C:
    // 0x80224B6C: jal         0x80227ABC
    // 0x80224B70: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    static_3_80227ABC(rdram, ctx);
        goto after_2;
    // 0x80224B70: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x80224B74: b           L_80224C28
    // 0x80224B78: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_80224C28;
    // 0x80224B78: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_80224B7C:
    // 0x80224B7C: jal         0x80227D6C
    // 0x80224B80: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    static_3_80227D6C(rdram, ctx);
        goto after_3;
    // 0x80224B80: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_3:
    // 0x80224B84: b           L_80224C28
    // 0x80224B88: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_80224C28;
    // 0x80224B88: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_80224B8C:
    // 0x80224B8C: jal         0x802279FC
    // 0x80224B90: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    static_3_802279FC(rdram, ctx);
        goto after_4;
    // 0x80224B90: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_4:
    // 0x80224B94: b           L_80224C28
    // 0x80224B98: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_80224C28;
    // 0x80224B98: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_80224B9C:
    // 0x80224B9C: jal         0x80227B38
    // 0x80224BA0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    static_3_80227B38(rdram, ctx);
        goto after_5;
    // 0x80224BA0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_5:
    // 0x80224BA4: b           L_80224C28
    // 0x80224BA8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_80224C28;
    // 0x80224BA8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_80224BAC:
    // 0x80224BAC: jal         0x80227CAC
    // 0x80224BB0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    static_3_80227CAC(rdram, ctx);
        goto after_6;
    // 0x80224BB0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_6:
    // 0x80224BB4: b           L_80224C28
    // 0x80224BB8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_80224C28;
    // 0x80224BB8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_80224BBC:
    // 0x80224BBC: jal         0x80227DE8
    // 0x80224BC0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    static_3_80227DE8(rdram, ctx);
        goto after_7;
    // 0x80224BC0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_7:
    // 0x80224BC4: b           L_80224C28
    // 0x80224BC8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_80224C28;
    // 0x80224BC8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_80224BCC:
    // 0x80224BCC: jal         0x80227E9C
    // 0x80224BD0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    static_3_80227E9C(rdram, ctx);
        goto after_8;
    // 0x80224BD0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_8:
    // 0x80224BD4: b           L_80224C28
    // 0x80224BD8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_80224C28;
    // 0x80224BD8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_80224BDC:
    // 0x80224BDC: jal         0x80227C30
    // 0x80224BE0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    static_3_80227C30(rdram, ctx);
        goto after_9;
    // 0x80224BE0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_9:
    // 0x80224BE4: b           L_80224C28
    // 0x80224BE8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_80224C28;
    // 0x80224BE8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_80224BEC:
    // 0x80224BEC: jal         0x802003C0
    // 0x80224BF0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    static_3_802003C0(rdram, ctx);
        goto after_10;
    // 0x80224BF0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_10:
    // 0x80224BF4: b           L_80224C28
    // 0x80224BF8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_80224C28;
    // 0x80224BF8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_80224BFC:
    // 0x80224BFC: jal         0x8021E400
    // 0x80224C00: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    static_3_8021E400(rdram, ctx);
        goto after_11;
    // 0x80224C00: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_11:
    // 0x80224C04: b           L_80224C28
    // 0x80224C08: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_80224C28;
    // 0x80224C08: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_80224C0C:
    // 0x80224C0C: jal         0x80227F50
    // 0x80224C10: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    static_3_80227F50(rdram, ctx);
        goto after_12;
    // 0x80224C10: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_12:
    // 0x80224C14: b           L_80224C28
    // 0x80224C18: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_80224C28;
    // 0x80224C18: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_80224C1C:
    // 0x80224C1C: jal         0x80227BB4
    // 0x80224C20: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    static_3_80227BB4(rdram, ctx);
        goto after_13;
    // 0x80224C20: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_13:
    // 0x80224C24: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_80224C28:
    // 0x80224C28: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80224C2C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80224C30: jal         0x8022B374
    // 0x80224C34: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    func_8022B374(rdram, ctx);
        goto after_14;
    // 0x80224C34: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_14:
    // 0x80224C38: beq         $v0, $zero, L_80224A98
    if (ctx->r2 == 0) {
        // 0x80224C3C: lw          $v1, 0x24($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X24);
            goto L_80224A98;
    }
    // 0x80224C3C: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x80224C40: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80224C44: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80224C48: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80224C4C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80224C50: jr          $ra
    // 0x80224C54: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80224C54: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void D_802A1144(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A11C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A11C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A11CC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802A11D0: andi        $t7, $a1, 0xFF
    ctx->r15 = ctx->r5 & 0XFF;
    // 0x802A11D4: beq         $t7, $zero, L_802A123C
    if (ctx->r15 == 0) {
        // 0x802A11D8: sb          $a1, 0x1B0($a0)
        MEM_B(0X1B0, ctx->r4) = ctx->r5;
            goto L_802A123C;
    }
    // 0x802A11D8: sb          $a1, 0x1B0($a0)
    MEM_B(0X1B0, ctx->r4) = ctx->r5;
    // 0x802A11DC: sw          $zero, 0x1B4($a0)
    MEM_W(0X1B4, ctx->r4) = 0;
    // 0x802A11E0: sw          $zero, 0x1B8($a0)
    MEM_W(0X1B8, ctx->r4) = 0;
    // 0x802A11E4: jal         0x8023499C
    // 0x802A11E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_8023499C(rdram, ctx);
        goto after_0;
    // 0x802A11E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802A11EC: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x802A11F0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802A11F4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802A11F8: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x802A11FC: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x802A1200: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x802A1204: nop

    // 0x802A1208: addiu       $t0, $t9, 0x5
    ctx->r8 = ADD32(ctx->r25, 0X5);
    // 0x802A120C: jal         0x8023499C
    // 0x802A1210: sw          $t0, 0x1BC($a0)
    MEM_W(0X1BC, ctx->r4) = ctx->r8;
    static_3_8023499C(rdram, ctx);
        goto after_1;
    // 0x802A1210: sw          $t0, 0x1BC($a0)
    MEM_W(0X1BC, ctx->r4) = ctx->r8;
    after_1:
    // 0x802A1214: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802A1218: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802A121C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802A1220: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x802A1224: nop

    // 0x802A1228: bc1fl       L_802A1240
    if (!c1cs) {
        // 0x802A122C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802A1240;
    }
    goto skip_0;
    // 0x802A122C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802A1230: lw          $t1, 0x1BC($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X1BC);
    // 0x802A1234: negu        $t2, $t1
    ctx->r10 = SUB32(0, ctx->r9);
    // 0x802A1238: sw          $t2, 0x1BC($a0)
    MEM_W(0X1BC, ctx->r4) = ctx->r10;
L_802A123C:
    // 0x802A123C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A1240:
    // 0x802A1240: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A1244: jr          $ra
    // 0x802A1248: nop

    return;
    // 0x802A1248: nop

;}
RECOMP_FUNC void D_802A5D44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A5DC4: jr          $ra
    // 0x802A5DC8: lw          $v0, 0xF0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XF0);
    return;
    // 0x802A5DC8: lw          $v0, 0xF0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XF0);
;}
RECOMP_FUNC void D_80220650(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80220650: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80220654: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80220658: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8022065C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80220660: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x80220664: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80220668: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022066C: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x80220670: lui         $t0, 0xFE00
    ctx->r8 = S32(0XFE00 << 16);
    // 0x80220674: bc1f        L_802206A8
    if (!c1cs) {
        // 0x80220678: lui         $t5, 0x600
        ctx->r13 = S32(0X600 << 16);
            goto L_802206A8;
    }
    // 0x80220678: lui         $t5, 0x600
    ctx->r13 = S32(0X600 << 16);
    // 0x8022067C: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x80220680: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x80220684: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80220688: lui         $t8, 0x1
    ctx->r24 = S32(0X1 << 16);
    // 0x8022068C: ori         $t8, $t8, 0x2205
    ctx->r24 = ctx->r24 | 0X2205;
    // 0x80220690: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80220694: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80220698: lui         $t7, 0xB700
    ctx->r15 = S32(0XB700 << 16);
    // 0x8022069C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x802206A0: b           L_802206C4
    // 0x802206A4: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
        goto L_802206C4;
    // 0x802206A4: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
L_802206A8:
    // 0x802206A8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x802206AC: lui         $t2, 0xB700
    ctx->r10 = S32(0XB700 << 16);
    // 0x802206B0: addiu       $t3, $zero, 0x2205
    ctx->r11 = ADD32(0, 0X2205);
    // 0x802206B4: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x802206B8: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x802206BC: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x802206C0: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
L_802206C4:
    // 0x802206C4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x802206C8: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802206CC: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802206D0: addiu       $t4, $v0, 0x8
    ctx->r12 = ADD32(ctx->r2, 0X8);
    // 0x802206D4: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x802206D8: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x802206DC: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x802206E0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x802206E4: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x802206E8: addiu       $t1, $t1, 0x0
    ctx->r9 = ADD32(ctx->r9, 0X0);
    // 0x802206EC: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x802206F0: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x802206F4: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x802206F8: lw          $t8, 0x0($t1)
    ctx->r24 = MEM_W(ctx->r9, 0X0);
    // 0x802206FC: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x80220700: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80220704: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x80220708: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8022070C: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x80220710: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    // 0x80220714: jal         0x802375F0
    // 0x80220718: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    static_3_802375F0(rdram, ctx);
        goto after_0;
    // 0x80220718: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x8022071C: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x80220720: lui         $t2, 0x52
    ctx->r10 = S32(0X52 << 16);
    // 0x80220724: ori         $t2, $t2, 0xFFF
    ctx->r10 = ctx->r10 | 0XFFF;
    // 0x80220728: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022072C: sw          $v0, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r2;
    // 0x80220730: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x80220734: sw          $t2, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r10;
    // 0x80220738: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x8022073C: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x80220740: lui         $t6, 0xFF
    ctx->r14 = S32(0XFF << 16);
    // 0x80220744: sw          $t3, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r11;
    // 0x80220748: sw          $t3, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r11;
    // 0x8022074C: sw          $t3, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r11;
    // 0x80220750: ori         $t6, $t6, 0xFFF
    ctx->r14 = ctx->r14 | 0XFFF;
    // 0x80220754: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80220758: sw          $t6, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r14;
    // 0x8022075C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80220760: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
    // 0x80220764: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80220768: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x8022076C: sw          $t7, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r15;
    // 0x80220770: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80220774: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x80220778: sb          $t8, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r24;
    // 0x8022077C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80220780: jal         0x80220534
    // 0x80220784: lwc1        $f12, 0x0($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X0);
    static_3_80220534(rdram, ctx);
        goto after_1;
    // 0x80220784: lwc1        $f12, 0x0($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X0);
    after_1:
    // 0x80220788: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022078C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80220790: jr          $ra
    // 0x80220794: nop

    return;
    // 0x80220794: nop

;}
RECOMP_FUNC void D_802C3090(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802C3110: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x802C3114: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802C3118: sw          $a0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r4;
    // 0x802C311C: jal         0x802F6348
    // 0x802C3120: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_802F6348(rdram, ctx);
        goto after_0;
    // 0x802C3120: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x802C3124: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802C3128: sb          $zero, 0x7F($sp)
    MEM_B(0X7F, ctx->r29) = 0;
    // 0x802C312C: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
    // 0x802C3130: jal         0x802EE050
    // 0x802C3134: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    static_3_802EE050(rdram, ctx);
        goto after_1;
    // 0x802C3134: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    after_1:
    // 0x802C3138: jal         0x8022331C
    // 0x802C313C: nop

    static_3_8022331C(rdram, ctx);
        goto after_2;
    // 0x802C313C: nop

    after_2:
    // 0x802C3140: jal         0x8022970C
    // 0x802C3144: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    func_8022970C(rdram, ctx);
        goto after_3;
    // 0x802C3144: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    after_3:
    // 0x802C3148: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x802C314C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802C3150: lui         $at, 0x4360
    ctx->r1 = S32(0X4360 << 16);
    // 0x802C3154: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802C3158: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802C315C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x802C3160: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x802C3164: lui         $a2, 0x4398
    ctx->r6 = S32(0X4398 << 16);
    // 0x802C3168: jal         0x8022A848
    // 0x802C316C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    static_3_8022A848(rdram, ctx);
        goto after_4;
    // 0x802C316C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_4:
    // 0x802C3170: jal         0x80221B2C
    // 0x802C3174: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    static_3_80221B2C(rdram, ctx);
        goto after_5;
    // 0x802C3174: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    after_5:
    // 0x802C3178: jal         0x8022970C
    // 0x802C317C: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    func_8022970C(rdram, ctx);
        goto after_6;
    // 0x802C317C: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    after_6:
    // 0x802C3180: jal         0x8022149C
    // 0x802C3184: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    static_3_8022149C(rdram, ctx);
        goto after_7;
    // 0x802C3184: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    after_7:
    // 0x802C3188: jal         0x802233EC
    // 0x802C318C: lui         $a0, 0x2
    ctx->r4 = S32(0X2 << 16);
    static_3_802233EC(rdram, ctx);
        goto after_8;
    // 0x802C318C: lui         $a0, 0x2
    ctx->r4 = S32(0X2 << 16);
    after_8:
    // 0x802C3190: jal         0x8021F4E4
    // 0x802C3194: nop

    static_3_8021F4E4(rdram, ctx);
        goto after_9;
    // 0x802C3194: nop

    after_9:
    // 0x802C3198: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x802C319C: addiu       $t7, $zero, 0xCA
    ctx->r15 = ADD32(0, 0XCA);
    // 0x802C31A0: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x802C31A4: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x802C31A8: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x802C31AC: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x802C31B0: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x802C31B4: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x802C31B8: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    // 0x802C31BC: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    // 0x802C31C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802C31C4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802C31C8: jal         0x8021F35C
    // 0x802C31CC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_10;
    // 0x802C31CC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_10:
    // 0x802C31D0: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x802C31D4: addiu       $t1, $zero, 0xCA
    ctx->r9 = ADD32(0, 0XCA);
    // 0x802C31D8: addiu       $t2, $zero, 0x7
    ctx->r10 = ADD32(0, 0X7);
    // 0x802C31DC: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x802C31E0: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x802C31E4: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x802C31E8: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x802C31EC: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x802C31F0: addiu       $a0, $zero, 0x127
    ctx->r4 = ADD32(0, 0X127);
    // 0x802C31F4: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    // 0x802C31F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802C31FC: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x802C3200: jal         0x8021F35C
    // 0x802C3204: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_11;
    // 0x802C3204: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_11:
    // 0x802C3208: addiu       $t4, $zero, 0x1E0
    ctx->r12 = ADD32(0, 0X1E0);
    // 0x802C320C: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x802C3210: addiu       $t6, $zero, 0xCA
    ctx->r14 = ADD32(0, 0XCA);
    // 0x802C3214: addiu       $t7, $zero, 0x7
    ctx->r15 = ADD32(0, 0X7);
    // 0x802C3218: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x802C321C: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x802C3220: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x802C3224: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x802C3228: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x802C322C: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x802C3230: addiu       $a0, $zero, 0x127
    ctx->r4 = ADD32(0, 0X127);
    // 0x802C3234: addiu       $a1, $zero, 0xD7
    ctx->r5 = ADD32(0, 0XD7);
    // 0x802C3238: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802C323C: jal         0x8021F35C
    // 0x802C3240: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    static_3_8021F35C(rdram, ctx);
        goto after_12;
    // 0x802C3240: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_12:
    // 0x802C3244: addiu       $t9, $zero, 0x1E0
    ctx->r25 = ADD32(0, 0X1E0);
    // 0x802C3248: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x802C324C: addiu       $t1, $zero, 0xCA
    ctx->r9 = ADD32(0, 0XCA);
    // 0x802C3250: addiu       $t2, $zero, 0x7
    ctx->r10 = ADD32(0, 0X7);
    // 0x802C3254: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x802C3258: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x802C325C: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x802C3260: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x802C3264: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x802C3268: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x802C326C: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    // 0x802C3270: addiu       $a1, $zero, 0xD7
    ctx->r5 = ADD32(0, 0XD7);
    // 0x802C3274: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802C3278: jal         0x8021F35C
    // 0x802C327C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_8021F35C(rdram, ctx);
        goto after_13;
    // 0x802C327C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_13:
    // 0x802C3280: jal         0x8021FCD0
    // 0x802C3284: nop

    static_3_8021FCD0(rdram, ctx);
        goto after_14;
    // 0x802C3284: nop

    after_14:
    // 0x802C3288: jal         0x8021F4E4
    // 0x802C328C: nop

    static_3_8021F4E4(rdram, ctx);
        goto after_15;
    // 0x802C328C: nop

    after_15:
    // 0x802C3290: addiu       $t4, $zero, 0xA
    ctx->r12 = ADD32(0, 0XA);
    // 0x802C3294: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x802C3298: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x802C329C: addiu       $t7, $zero, 0x96
    ctx->r15 = ADD32(0, 0X96);
    // 0x802C32A0: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x802C32A4: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x802C32A8: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x802C32AC: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x802C32B0: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    // 0x802C32B4: addiu       $a1, $zero, 0x98
    ctx->r5 = ADD32(0, 0X98);
    // 0x802C32B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802C32BC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802C32C0: jal         0x8021F35C
    // 0x802C32C4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_16;
    // 0x802C32C4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_16:
    // 0x802C32C8: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x802C32CC: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x802C32D0: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
    // 0x802C32D4: addiu       $t1, $zero, 0x96
    ctx->r9 = ADD32(0, 0X96);
    // 0x802C32D8: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x802C32DC: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x802C32E0: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x802C32E4: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x802C32E8: addiu       $a0, $zero, 0x127
    ctx->r4 = ADD32(0, 0X127);
    // 0x802C32EC: addiu       $a1, $zero, 0x98
    ctx->r5 = ADD32(0, 0X98);
    // 0x802C32F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802C32F4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802C32F8: jal         0x8021F35C
    // 0x802C32FC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_17;
    // 0x802C32FC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_17:
    // 0x802C3300: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x802C3304: addiu       $t3, $zero, 0xA
    ctx->r11 = ADD32(0, 0XA);
    // 0x802C3308: addiu       $t4, $zero, 0xA
    ctx->r12 = ADD32(0, 0XA);
    // 0x802C330C: addiu       $t5, $zero, 0x96
    ctx->r13 = ADD32(0, 0X96);
    // 0x802C3310: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x802C3314: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x802C3318: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x802C331C: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x802C3320: addiu       $a0, $zero, 0x127
    ctx->r4 = ADD32(0, 0X127);
    // 0x802C3324: addiu       $a1, $zero, 0xC2
    ctx->r5 = ADD32(0, 0XC2);
    // 0x802C3328: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802C332C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802C3330: jal         0x8021F35C
    // 0x802C3334: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_18;
    // 0x802C3334: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_18:
    // 0x802C3338: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x802C333C: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x802C3340: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x802C3344: addiu       $t9, $zero, 0x96
    ctx->r25 = ADD32(0, 0X96);
    // 0x802C3348: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x802C334C: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x802C3350: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x802C3354: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x802C3358: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    // 0x802C335C: addiu       $a1, $zero, 0xC2
    ctx->r5 = ADD32(0, 0XC2);
    // 0x802C3360: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802C3364: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802C3368: jal         0x8021F35C
    // 0x802C336C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_19;
    // 0x802C336C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_19:
    // 0x802C3370: jal         0x8021FCD0
    // 0x802C3374: nop

    static_3_8021FCD0(rdram, ctx);
        goto after_20;
    // 0x802C3374: nop

    after_20:
    // 0x802C3378: jal         0x8021F4E4
    // 0x802C337C: nop

    static_3_8021F4E4(rdram, ctx);
        goto after_21;
    // 0x802C337C: nop

    after_21:
    // 0x802C3380: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
    // 0x802C3384: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
    // 0x802C3388: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x802C338C: addiu       $t3, $zero, 0x96
    ctx->r11 = ADD32(0, 0X96);
    // 0x802C3390: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x802C3394: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x802C3398: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x802C339C: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x802C33A0: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    // 0x802C33A4: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    // 0x802C33A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802C33AC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802C33B0: jal         0x8021F35C
    // 0x802C33B4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_22;
    // 0x802C33B4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_22:
    // 0x802C33B8: addiu       $t4, $zero, 0xA
    ctx->r12 = ADD32(0, 0XA);
    // 0x802C33BC: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x802C33C0: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x802C33C4: addiu       $t7, $zero, 0x96
    ctx->r15 = ADD32(0, 0X96);
    // 0x802C33C8: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x802C33CC: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x802C33D0: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x802C33D4: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x802C33D8: addiu       $a0, $zero, 0x127
    ctx->r4 = ADD32(0, 0X127);
    // 0x802C33DC: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    // 0x802C33E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802C33E4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802C33E8: jal         0x8021F35C
    // 0x802C33EC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_23;
    // 0x802C33EC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_23:
    // 0x802C33F0: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x802C33F4: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x802C33F8: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
    // 0x802C33FC: addiu       $t1, $zero, 0x96
    ctx->r9 = ADD32(0, 0X96);
    // 0x802C3400: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x802C3404: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x802C3408: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x802C340C: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x802C3410: addiu       $a0, $zero, 0x127
    ctx->r4 = ADD32(0, 0X127);
    // 0x802C3414: addiu       $a1, $zero, 0x92
    ctx->r5 = ADD32(0, 0X92);
    // 0x802C3418: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802C341C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802C3420: jal         0x8021F35C
    // 0x802C3424: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_24;
    // 0x802C3424: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_24:
    // 0x802C3428: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x802C342C: addiu       $t3, $zero, 0xA
    ctx->r11 = ADD32(0, 0XA);
    // 0x802C3430: addiu       $t4, $zero, 0xA
    ctx->r12 = ADD32(0, 0XA);
    // 0x802C3434: addiu       $t5, $zero, 0x96
    ctx->r13 = ADD32(0, 0X96);
    // 0x802C3438: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x802C343C: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x802C3440: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x802C3444: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x802C3448: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    // 0x802C344C: addiu       $a1, $zero, 0x92
    ctx->r5 = ADD32(0, 0X92);
    // 0x802C3450: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802C3454: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802C3458: jal         0x8021F35C
    // 0x802C345C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_25;
    // 0x802C345C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_25:
    // 0x802C3460: jal         0x8021FCD0
    // 0x802C3464: nop

    static_3_8021FCD0(rdram, ctx);
        goto after_26;
    // 0x802C3464: nop

    after_26:
    // 0x802C3468: jal         0x8021F4E4
    // 0x802C346C: nop

    static_3_8021F4E4(rdram, ctx);
        goto after_27;
    // 0x802C346C: nop

    after_27:
    // 0x802C3470: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x802C3474: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x802C3478: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x802C347C: addiu       $t9, $zero, 0x96
    ctx->r25 = ADD32(0, 0X96);
    // 0x802C3480: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x802C3484: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x802C3488: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x802C348C: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x802C3490: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    // 0x802C3494: addiu       $a1, $zero, 0x38
    ctx->r5 = ADD32(0, 0X38);
    // 0x802C3498: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802C349C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802C34A0: jal         0x8021F35C
    // 0x802C34A4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_28;
    // 0x802C34A4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_28:
    // 0x802C34A8: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
    // 0x802C34AC: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
    // 0x802C34B0: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x802C34B4: addiu       $t3, $zero, 0x96
    ctx->r11 = ADD32(0, 0X96);
    // 0x802C34B8: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x802C34BC: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x802C34C0: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x802C34C4: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x802C34C8: addiu       $a0, $zero, 0x127
    ctx->r4 = ADD32(0, 0X127);
    // 0x802C34CC: addiu       $a1, $zero, 0x38
    ctx->r5 = ADD32(0, 0X38);
    // 0x802C34D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802C34D4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802C34D8: jal         0x8021F35C
    // 0x802C34DC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_29;
    // 0x802C34DC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_29:
    // 0x802C34E0: addiu       $t4, $zero, 0xA
    ctx->r12 = ADD32(0, 0XA);
    // 0x802C34E4: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x802C34E8: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x802C34EC: addiu       $t7, $zero, 0x96
    ctx->r15 = ADD32(0, 0X96);
    // 0x802C34F0: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x802C34F4: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x802C34F8: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x802C34FC: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x802C3500: addiu       $a0, $zero, 0x127
    ctx->r4 = ADD32(0, 0X127);
    // 0x802C3504: addiu       $a1, $zero, 0x62
    ctx->r5 = ADD32(0, 0X62);
    // 0x802C3508: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802C350C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802C3510: jal         0x8021F35C
    // 0x802C3514: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_30;
    // 0x802C3514: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_30:
    // 0x802C3518: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x802C351C: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x802C3520: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
    // 0x802C3524: addiu       $t1, $zero, 0x96
    ctx->r9 = ADD32(0, 0X96);
    // 0x802C3528: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x802C352C: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x802C3530: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x802C3534: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x802C3538: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    // 0x802C353C: addiu       $a1, $zero, 0x62
    ctx->r5 = ADD32(0, 0X62);
    // 0x802C3540: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802C3544: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802C3548: jal         0x8021F35C
    // 0x802C354C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_31;
    // 0x802C354C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_31:
    // 0x802C3550: jal         0x8021FCD0
    // 0x802C3554: nop

    static_3_8021FCD0(rdram, ctx);
        goto after_32;
    // 0x802C3554: nop

    after_32:
    // 0x802C3558: jal         0x802230E4
    // 0x802C355C: nop

    static_3_802230E4(rdram, ctx);
        goto after_33;
    // 0x802C355C: nop

    after_33:
    // 0x802C3560: jal         0x8022337C
    // 0x802C3564: nop

    static_3_8022337C(rdram, ctx);
        goto after_34;
    // 0x802C3564: nop

    after_34:
    // 0x802C3568: jal         0x8021E66C
    // 0x802C356C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_8021E66C(rdram, ctx);
        goto after_35;
    // 0x802C356C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_35:
    // 0x802C3570: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802C3574: ldc1        $f12, 0x0($at)
    CHECK_FR(ctx, 12);
    ctx->f12.u64 = LD(ctx->r1, 0X0);
    // 0x802C3578: jal         0x8021E6EC
    // 0x802C357C: mov.d       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.d = ctx->f12.d;
    func_8021E6EC(rdram, ctx);
        goto after_36;
    // 0x802C357C: mov.d       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.d = ctx->f12.d;
    after_36:
    // 0x802C3580: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802C3584: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802C3588: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802C358C: jal         0x8021E708
    // 0x802C3590: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_37;
    // 0x802C3590: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_37:
    // 0x802C3594: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802C3598: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802C359C: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    // 0x802C35A0: jal         0x8021E87C
    // 0x802C35A4: addiu       $a1, $zero, 0xCC
    ctx->r5 = ADD32(0, 0XCC);
    static_3_8021E87C(rdram, ctx);
        goto after_38;
    // 0x802C35A4: addiu       $a1, $zero, 0xCC
    ctx->r5 = ADD32(0, 0XCC);
    after_38:
    // 0x802C35A8: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802C35AC: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802C35B0: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    // 0x802C35B4: jal         0x8021E87C
    // 0x802C35B8: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    static_3_8021E87C(rdram, ctx);
        goto after_39;
    // 0x802C35B8: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    after_39:
    // 0x802C35BC: jal         0x8021EC9C
    // 0x802C35C0: nop

    static_3_8021EC9C(rdram, ctx);
        goto after_40;
    // 0x802C35C0: nop

    after_40:
    // 0x802C35C4: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x802C35C8: mtc1        $at, $f13
    ctx->f_odd[(13 - 1) * 2] = ctx->r1;
    // 0x802C35CC: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x802C35D0: jal         0x8021E6EC
    // 0x802C35D4: mov.d       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.d = ctx->f12.d;
    func_8021E6EC(rdram, ctx);
        goto after_41;
    // 0x802C35D4: mov.d       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.d = ctx->f12.d;
    after_41:
    // 0x802C35D8: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x802C35DC: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x802C35E0: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x802C35E4: jal         0x8021E708
    // 0x802C35E8: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_42;
    // 0x802C35E8: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_42:
    // 0x802C35EC: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802C35F0: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802C35F4: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    // 0x802C35F8: jal         0x8021E87C
    // 0x802C35FC: addiu       $a1, $zero, 0xB4
    ctx->r5 = ADD32(0, 0XB4);
    static_3_8021E87C(rdram, ctx);
        goto after_43;
    // 0x802C35FC: addiu       $a1, $zero, 0xB4
    ctx->r5 = ADD32(0, 0XB4);
    after_43:
    // 0x802C3600: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802C3604: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802C3608: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    // 0x802C360C: jal         0x8021E87C
    // 0x802C3610: addiu       $a1, $zero, 0x84
    ctx->r5 = ADD32(0, 0X84);
    static_3_8021E87C(rdram, ctx);
        goto after_44;
    // 0x802C3610: addiu       $a1, $zero, 0x84
    ctx->r5 = ADD32(0, 0X84);
    after_44:
    // 0x802C3614: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802C3618: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802C361C: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    // 0x802C3620: jal         0x8021E87C
    // 0x802C3624: addiu       $a1, $zero, 0x54
    ctx->r5 = ADD32(0, 0X54);
    static_3_8021E87C(rdram, ctx);
        goto after_45;
    // 0x802C3624: addiu       $a1, $zero, 0x54
    ctx->r5 = ADD32(0, 0X54);
    after_45:
    // 0x802C3628: jal         0x8021E66C
    // 0x802C362C: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    static_3_8021E66C(rdram, ctx);
        goto after_46;
    // 0x802C362C: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_46:
    // 0x802C3630: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802C3634: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802C3638: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802C363C: lw          $a2, 0x0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X0);
    // 0x802C3640: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802C3644: jal         0x8023072C
    // 0x802C3648: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_8023072C(rdram, ctx);
        goto after_47;
    // 0x802C3648: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_47:
    // 0x802C364C: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802C3650: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802C3654: addiu       $a0, $zero, 0xD5
    ctx->r4 = ADD32(0, 0XD5);
    // 0x802C3658: jal         0x8021E87C
    // 0x802C365C: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    static_3_8021E87C(rdram, ctx);
        goto after_48;
    // 0x802C365C: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    after_48:
    // 0x802C3660: jal         0x8021E66C
    // 0x802C3664: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_8021E66C(rdram, ctx);
        goto after_49;
    // 0x802C3664: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_49:
    // 0x802C3668: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x802C366C: addiu       $a1, $zero, 0xCA
    ctx->r5 = ADD32(0, 0XCA);
    // 0x802C3670: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x802C3674: jal         0x8021E708
    // 0x802C3678: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_50;
    // 0x802C3678: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_50:
    // 0x802C367C: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802C3680: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802C3684: addiu       $a0, $sp, 0x7C
    ctx->r4 = ADD32(ctx->r29, 0X7C);
    // 0x802C3688: jal         0x8022B460
    // 0x802C368C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8022B460(rdram, ctx);
        goto after_51;
    // 0x802C368C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_51:
    // 0x802C3690: addiu       $a0, $zero, 0xF0
    ctx->r4 = ADD32(0, 0XF0);
    // 0x802C3694: addiu       $a1, $zero, 0xB1
    ctx->r5 = ADD32(0, 0XB1);
    // 0x802C3698: jal         0x8021E87C
    // 0x802C369C: addiu       $a2, $sp, 0x7C
    ctx->r6 = ADD32(ctx->r29, 0X7C);
    static_3_8021E87C(rdram, ctx);
        goto after_52;
    // 0x802C369C: addiu       $a2, $sp, 0x7C
    ctx->r6 = ADD32(ctx->r29, 0X7C);
    after_52:
    // 0x802C36A0: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x802C36A4: addiu       $a1, $zero, 0x52
    ctx->r5 = ADD32(0, 0X52);
    // 0x802C36A8: addiu       $a2, $zero, 0xA8
    ctx->r6 = ADD32(0, 0XA8);
    // 0x802C36AC: jal         0x802F14C4
    // 0x802C36B0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_802F14C4(rdram, ctx);
        goto after_53;
    // 0x802C36B0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_53:
    // 0x802C36B4: lw          $t2, 0x80($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X80);
    // 0x802C36B8: jal         0x8023413C
    // 0x802C36BC: lw          $a0, 0x50($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X50);
    static_3_8023413C(rdram, ctx);
        goto after_54;
    // 0x802C36BC: lw          $a0, 0x50($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X50);
    after_54:
    // 0x802C36C0: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802C36C4: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x802C36C8: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x802C36CC: bnel        $at, $zero, L_802C37A0
    if (ctx->r1 != 0) {
        // 0x802C36D0: slti        $at, $v0, 0x3
        ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
            goto L_802C37A0;
    }
    goto skip_0;
    // 0x802C36D0: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    skip_0:
    // 0x802C36D4: jal         0x8021E66C
    // 0x802C36D8: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    static_3_8021E66C(rdram, ctx);
        goto after_55;
    // 0x802C36D8: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_55:
    // 0x802C36DC: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x802C36E0: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x802C36E4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x802C36E8: jal         0x8021E708
    // 0x802C36EC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_56;
    // 0x802C36EC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_56:
    // 0x802C36F0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802C36F4: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802C36F8: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802C36FC: lw          $a2, 0x0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X0);
    // 0x802C3700: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802C3704: jal         0x8023072C
    // 0x802C3708: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_8023072C(rdram, ctx);
        goto after_57;
    // 0x802C3708: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_57:
    // 0x802C370C: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802C3710: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802C3714: addiu       $a0, $zero, 0xD5
    ctx->r4 = ADD32(0, 0XD5);
    // 0x802C3718: jal         0x8021E87C
    // 0x802C371C: addiu       $a1, $zero, 0x70
    ctx->r5 = ADD32(0, 0X70);
    static_3_8021E87C(rdram, ctx);
        goto after_58;
    // 0x802C371C: addiu       $a1, $zero, 0x70
    ctx->r5 = ADD32(0, 0X70);
    after_58:
    // 0x802C3720: jal         0x8021E66C
    // 0x802C3724: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_8021E66C(rdram, ctx);
        goto after_59;
    // 0x802C3724: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_59:
    // 0x802C3728: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x802C372C: addiu       $a1, $zero, 0xCA
    ctx->r5 = ADD32(0, 0XCA);
    // 0x802C3730: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x802C3734: jal         0x8021E708
    // 0x802C3738: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_60;
    // 0x802C3738: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_60:
    // 0x802C373C: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802C3740: addiu       $a1, $a1, 0x3
    ctx->r5 = ADD32(ctx->r5, 0X3);
    // 0x802C3744: addiu       $a0, $sp, 0x7C
    ctx->r4 = ADD32(ctx->r29, 0X7C);
    // 0x802C3748: jal         0x8022B460
    // 0x802C374C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8022B460(rdram, ctx);
        goto after_61;
    // 0x802C374C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_61:
    // 0x802C3750: addiu       $a0, $zero, 0xF0
    ctx->r4 = ADD32(0, 0XF0);
    // 0x802C3754: addiu       $a1, $zero, 0x81
    ctx->r5 = ADD32(0, 0X81);
    // 0x802C3758: jal         0x8021E87C
    // 0x802C375C: addiu       $a2, $sp, 0x7C
    ctx->r6 = ADD32(ctx->r29, 0X7C);
    static_3_8021E87C(rdram, ctx);
        goto after_62;
    // 0x802C375C: addiu       $a2, $sp, 0x7C
    ctx->r6 = ADD32(ctx->r29, 0X7C);
    after_62:
    // 0x802C3760: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x802C3764: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x802C3768: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x802C376C: jal         0x8021E708
    // 0x802C3770: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_63;
    // 0x802C3770: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_63:
    // 0x802C3774: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x802C3778: addiu       $a1, $zero, 0x52
    ctx->r5 = ADD32(0, 0X52);
    // 0x802C377C: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    // 0x802C3780: jal         0x802F14C4
    // 0x802C3784: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    static_3_802F14C4(rdram, ctx);
        goto after_64;
    // 0x802C3784: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_64:
    // 0x802C3788: lw          $t3, 0x80($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X80);
    // 0x802C378C: jal         0x8023413C
    // 0x802C3790: lw          $a0, 0x54($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X54);
    static_3_8023413C(rdram, ctx);
        goto after_65;
    // 0x802C3790: lw          $a0, 0x54($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X54);
    after_65:
    // 0x802C3794: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802C3798: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x802C379C: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
L_802C37A0:
    // 0x802C37A0: bnel        $at, $zero, L_802C386C
    if (ctx->r1 != 0) {
        // 0x802C37A4: lw          $t5, 0x80($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X80);
            goto L_802C386C;
    }
    goto skip_1;
    // 0x802C37A4: lw          $t5, 0x80($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X80);
    skip_1:
    // 0x802C37A8: jal         0x8021E66C
    // 0x802C37AC: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    static_3_8021E66C(rdram, ctx);
        goto after_66;
    // 0x802C37AC: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_66:
    // 0x802C37B0: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x802C37B4: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x802C37B8: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x802C37BC: jal         0x8021E708
    // 0x802C37C0: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_67;
    // 0x802C37C0: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_67:
    // 0x802C37C4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802C37C8: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802C37CC: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802C37D0: lw          $a2, 0x0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X0);
    // 0x802C37D4: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802C37D8: jal         0x8023072C
    // 0x802C37DC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_8023072C(rdram, ctx);
        goto after_68;
    // 0x802C37DC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_68:
    // 0x802C37E0: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802C37E4: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802C37E8: addiu       $a0, $zero, 0xD5
    ctx->r4 = ADD32(0, 0XD5);
    // 0x802C37EC: jal         0x8021E87C
    // 0x802C37F0: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    static_3_8021E87C(rdram, ctx);
        goto after_69;
    // 0x802C37F0: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_69:
    // 0x802C37F4: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x802C37F8: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x802C37FC: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x802C3800: jal         0x8021E708
    // 0x802C3804: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_70;
    // 0x802C3804: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_70:
    // 0x802C3808: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x802C380C: addiu       $a1, $zero, 0x52
    ctx->r5 = ADD32(0, 0X52);
    // 0x802C3810: addiu       $a2, $zero, 0x48
    ctx->r6 = ADD32(0, 0X48);
    // 0x802C3814: jal         0x802F14C4
    // 0x802C3818: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    static_3_802F14C4(rdram, ctx);
        goto after_71;
    // 0x802C3818: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_71:
    // 0x802C381C: jal         0x8021E66C
    // 0x802C3820: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_8021E66C(rdram, ctx);
        goto after_72;
    // 0x802C3820: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_72:
    // 0x802C3824: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x802C3828: addiu       $a1, $zero, 0xCA
    ctx->r5 = ADD32(0, 0XCA);
    // 0x802C382C: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x802C3830: jal         0x8021E708
    // 0x802C3834: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_73;
    // 0x802C3834: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_73:
    // 0x802C3838: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802C383C: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802C3840: addiu       $a0, $sp, 0x7C
    ctx->r4 = ADD32(ctx->r29, 0X7C);
    // 0x802C3844: jal         0x8022B460
    // 0x802C3848: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8022B460(rdram, ctx);
        goto after_74;
    // 0x802C3848: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_74:
    // 0x802C384C: addiu       $a0, $zero, 0xF0
    ctx->r4 = ADD32(0, 0XF0);
    // 0x802C3850: addiu       $a1, $zero, 0x51
    ctx->r5 = ADD32(0, 0X51);
    // 0x802C3854: jal         0x8021E87C
    // 0x802C3858: addiu       $a2, $sp, 0x7C
    ctx->r6 = ADD32(ctx->r29, 0X7C);
    static_3_8021E87C(rdram, ctx);
        goto after_75;
    // 0x802C3858: addiu       $a2, $sp, 0x7C
    ctx->r6 = ADD32(ctx->r29, 0X7C);
    after_75:
    // 0x802C385C: lw          $t4, 0x80($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X80);
    // 0x802C3860: jal         0x8023413C
    // 0x802C3864: lw          $a0, 0x58($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X58);
    static_3_8023413C(rdram, ctx);
        goto after_76;
    // 0x802C3864: lw          $a0, 0x58($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X58);
    after_76:
    // 0x802C3868: lw          $t5, 0x80($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X80);
L_802C386C:
    // 0x802C386C: jal         0x80233D58
    // 0x802C3870: lw          $a0, 0x50($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X50);
    static_3_80233D58(rdram, ctx);
        goto after_77;
    // 0x802C3870: lw          $a0, 0x50($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X50);
    after_77:
    // 0x802C3874: lw          $t6, 0x80($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X80);
    // 0x802C3878: jal         0x80233D58
    // 0x802C387C: lw          $a0, 0x54($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X54);
    static_3_80233D58(rdram, ctx);
        goto after_78;
    // 0x802C387C: lw          $a0, 0x54($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X54);
    after_78:
    // 0x802C3880: lw          $t7, 0x80($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X80);
    // 0x802C3884: jal         0x80233D58
    // 0x802C3888: lw          $a0, 0x58($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X58);
    static_3_80233D58(rdram, ctx);
        goto after_79;
    // 0x802C3888: lw          $a0, 0x58($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X58);
    after_79:
    // 0x802C388C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802C3890: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    // 0x802C3894: jr          $ra
    // 0x802C3898: nop

    return;
    // 0x802C3898: nop

;}
RECOMP_FUNC void D_802A0530(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A05B0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802A05B4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802A05B8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802A05BC: lh          $t7, 0x1A8($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X1A8);
    // 0x802A05C0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802A05C4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802A05C8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802A05CC: sw          $a1, 0x19C($a0)
    MEM_W(0X19C, ctx->r4) = ctx->r5;
    // 0x802A05D0: sw          $t6, 0x1A0($a0)
    MEM_W(0X1A0, ctx->r4) = ctx->r14;
    // 0x802A05D4: bne         $t7, $at, L_802A0634
    if (ctx->r15 != ctx->r1) {
        // 0x802A05D8: sw          $zero, 0x1A4($a0)
        MEM_W(0X1A4, ctx->r4) = 0;
            goto L_802A0634;
    }
    // 0x802A05D8: sw          $zero, 0x1A4($a0)
    MEM_W(0X1A4, ctx->r4) = 0;
    // 0x802A05DC: beq         $a1, $zero, L_802A0634
    if (ctx->r5 == 0) {
        // 0x802A05E0: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_802A0634;
    }
    // 0x802A05E0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x802A05E4: jal         0x803183D0
    // 0x802A05E8: nop

    static_3_803183D0(rdram, ctx);
        goto after_0;
    // 0x802A05E8: nop

    after_0:
    // 0x802A05EC: addiu       $a0, $s0, 0x80
    ctx->r4 = ADD32(ctx->r16, 0X80);
    // 0x802A05F0: jal         0x802D40B4
    // 0x802A05F4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    static_3_802D40B4(rdram, ctx);
        goto after_1;
    // 0x802A05F4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_1:
    // 0x802A05F8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802A05FC: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802A0600: jal         0x802AEE54
    // 0x802A0604: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802AEE54(rdram, ctx);
        goto after_2;
    // 0x802A0604: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x802A0608: jal         0x80318804
    // 0x802A060C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    static_3_80318804(rdram, ctx);
        goto after_3;
    // 0x802A060C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_3:
    // 0x802A0610: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x802A0614: jal         0x80318804
    // 0x802A0618: lw          $a0, 0x19C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X19C);
    static_3_80318804(rdram, ctx);
        goto after_4;
    // 0x802A0618: lw          $a0, 0x19C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X19C);
    after_4:
    // 0x802A061C: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x802A0620: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802A0624: bnel        $v0, $t8, L_802A0638
    if (ctx->r2 != ctx->r24) {
        // 0x802A0628: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802A0638;
    }
    goto skip_0;
    // 0x802A0628: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x802A062C: jal         0x80318D04
    // 0x802A0630: lw          $a0, 0x19C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X19C);
    static_3_80318D04(rdram, ctx);
        goto after_5;
    // 0x802A0630: lw          $a0, 0x19C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X19C);
    after_5:
L_802A0634:
    // 0x802A0634: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802A0638:
    // 0x802A0638: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802A063C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802A0640: jr          $ra
    // 0x802A0644: nop

    return;
    // 0x802A0644: nop

;}
RECOMP_FUNC void D_8021E0B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021E0B4: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x8021E0B8: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x8021E0BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8021E0C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021E0C4: blez        $v0, L_8021E114
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8021E0C8: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_8021E114;
    }
    // 0x8021E0C8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8021E0CC: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x8021E0D0: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x8021E0D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_8021E0D8:
    // 0x8021E0D8: lbu         $t6, 0x1($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X1);
    // 0x8021E0DC: bne         $t6, $zero, L_8021E100
    if (ctx->r14 != 0) {
        // 0x8021E0E0: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_8021E100;
    }
    // 0x8021E0E0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8021E0E4: sb          $a2, 0x1($v1)
    MEM_B(0X1, ctx->r3) = ctx->r6;
    // 0x8021E0E8: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x8021E0EC: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x8021E0F0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8021E0F4: addu        $t8, $t7, $a1
    ctx->r24 = ADD32(ctx->r15, ctx->r5);
    // 0x8021E0F8: b           L_8021E12C
    // 0x8021E0FC: sb          $a2, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r6;
        goto L_8021E12C;
    // 0x8021E0FC: sb          $a2, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r6;
L_8021E100:
    // 0x8021E100: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8021E104: slt         $at, $a0, $v0
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8021E108: addiu       $a1, $a1, 0x18
    ctx->r5 = ADD32(ctx->r5, 0X18);
    // 0x8021E10C: bne         $at, $zero, L_8021E0D8
    if (ctx->r1 != 0) {
        // 0x8021E110: addiu       $v1, $v1, 0x18
        ctx->r3 = ADD32(ctx->r3, 0X18);
            goto L_8021E0D8;
    }
    // 0x8021E110: addiu       $v1, $v1, 0x18
    ctx->r3 = ADD32(ctx->r3, 0X18);
L_8021E114:
    // 0x8021E114: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8021E118: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x8021E11C: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x8021E120: jal         0x80231C58
    // 0x8021E124: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    static_3_80231C58(rdram, ctx);
        goto after_0;
    // 0x8021E124: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    after_0:
    // 0x8021E128: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_8021E12C:
    // 0x8021E12C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021E130: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8021E134: jr          $ra
    // 0x8021E138: nop

    return;
    // 0x8021E138: nop

;}
RECOMP_FUNC void D_802A943C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A94BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A94C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A94C4: lw          $a2, 0x4($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X4);
    // 0x802A94C8: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x802A94CC: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x802A94D0: beq         $a2, $at, L_802A94FC
    if (ctx->r6 == ctx->r1) {
        // 0x802A94D4: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_802A94FC;
    }
    // 0x802A94D4: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x802A94D8: jal         0x8021BAE0
    // 0x802A94DC: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    static_3_8021BAE0(rdram, ctx);
        goto after_0;
    // 0x802A94DC: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x802A94E0: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x802A94E4: jal         0x8021BAE0
    // 0x802A94E8: lw          $a0, 0x280($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X280);
    static_3_8021BAE0(rdram, ctx);
        goto after_1;
    // 0x802A94E8: lw          $a0, 0x280($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X280);
    after_1:
    // 0x802A94EC: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x802A94F0: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x802A94F4: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x802A94F8: sw          $v0, 0x280($a1)
    MEM_W(0X280, ctx->r5) = ctx->r2;
L_802A94FC:
    // 0x802A94FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A9500: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A9504: jr          $ra
    // 0x802A9508: nop

    return;
    // 0x802A9508: nop

;}
RECOMP_FUNC void D_8029D0C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029D140: jr          $ra
    // 0x8029D144: lbu         $v0, 0x86($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X86);
    return;
    // 0x8029D144: lbu         $v0, 0x86($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X86);
;}
RECOMP_FUNC void D_80279F64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80279FDC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80279FE0: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x80279FE4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80279FE8: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80279FEC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80279FF0: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x80279FF4: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80279FF8: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x80279FFC: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x8027A000: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x8027A004: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8027A008: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8027A00C: addiu       $a3, $s0, 0x6769
    ctx->r7 = ADD32(ctx->r16, 0X6769);
    // 0x8027A010: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    // 0x8027A014: addiu       $a1, $s0, 0x6768
    ctx->r5 = ADD32(ctx->r16, 0X6768);
    // 0x8027A018: jal         0x802A1AB0
    // 0x8027A01C: addiu       $a0, $a0, 0x6678
    ctx->r4 = ADD32(ctx->r4, 0X6678);
    static_3_802A1AB0(rdram, ctx);
        goto after_0;
    // 0x8027A01C: addiu       $a0, $a0, 0x6678
    ctx->r4 = ADD32(ctx->r4, 0X6678);
    after_0:
    // 0x8027A020: beq         $v0, $zero, L_8027A0AC
    if (ctx->r2 == 0) {
        // 0x8027A024: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8027A0AC;
    }
    // 0x8027A024: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8027A028: jal         0x80287A08
    // 0x8027A02C: nop

    static_3_80287A08(rdram, ctx);
        goto after_1;
    // 0x8027A02C: nop

    after_1:
    // 0x8027A030: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x8027A034: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x8027A038: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8027A03C: addiu       $a0, $s0, 0x6E64
    ctx->r4 = ADD32(ctx->r16, 0X6E64);
    // 0x8027A040: addiu       $a1, $s0, 0x6EDC
    ctx->r5 = ADD32(ctx->r16, 0X6EDC);
    // 0x8027A044: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    // 0x8027A048: jal         0x802A2CB0
    // 0x8027A04C: addiu       $a3, $s0, 0x6EDD
    ctx->r7 = ADD32(ctx->r16, 0X6EDD);
    static_3_802A2CB0(rdram, ctx);
        goto after_2;
    // 0x8027A04C: addiu       $a3, $s0, 0x6EDD
    ctx->r7 = ADD32(ctx->r16, 0X6EDD);
    after_2:
    // 0x8027A050: beq         $v0, $zero, L_8027A0AC
    if (ctx->r2 == 0) {
        // 0x8027A054: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_8027A0AC;
    }
    // 0x8027A054: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x8027A058: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8027A05C: lwc1        $f6, 0x4C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8027A060: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x8027A064: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x8027A068: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x8027A06C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8027A070: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x8027A074: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x8027A078: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x8027A07C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8027A080: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x8027A084: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x8027A088: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8027A08C: jal         0x80295010
    // 0x8027A090: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    static_3_80295010(rdram, ctx);
        goto after_3;
    // 0x8027A090: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    after_3:
    // 0x8027A094: lw          $v0, 0x7C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X7C);
    // 0x8027A098: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8027A09C: lw          $t9, 0x2C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X2C);
    // 0x8027A0A0: lh          $t1, 0x28($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X28);
    // 0x8027A0A4: jalr        $t9
    // 0x8027A0A8: addu        $a0, $t1, $s1
    ctx->r4 = ADD32(ctx->r9, ctx->r17);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x8027A0A8: addu        $a0, $t1, $s1
    ctx->r4 = ADD32(ctx->r9, ctx->r17);
    after_4:
L_8027A0AC:
    // 0x8027A0AC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8027A0B0: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x8027A0B4: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x8027A0B8: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x8027A0BC: jr          $ra
    // 0x8027A0C0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8027A0C0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void D_802961A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80296220: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80296224: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x80296228: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x8029622C: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x80296230: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x80296234: or          $s3, $a3, $zero
    ctx->r19 = ctx->r7 | 0;
    // 0x80296238: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x8029623C: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80296240: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80296244: bne         $a0, $zero, L_80296268
    if (ctx->r4 != 0) {
        // 0x80296248: sw          $s0, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r16;
            goto L_80296268;
    }
    // 0x80296248: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8029624C: multu       $a1, $a2
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80296250: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x80296254: mflo        $a0
    ctx->r4 = lo;
    // 0x80296258: jal         0x802C67EC
    // 0x8029625C: nop

    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x8029625C: nop

    after_0:
    // 0x80296260: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x80296264: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
L_80296268:
    // 0x80296268: beql        $s4, $zero, L_802962D0
    if (ctx->r20 == 0) {
        // 0x8029626C: lw          $ra, 0x44($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X44);
            goto L_802962D0;
    }
    goto skip_0;
    // 0x8029626C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    skip_0:
    // 0x80296270: beql        $s3, $zero, L_802962D0
    if (ctx->r19 == 0) {
        // 0x80296274: lw          $ra, 0x44($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X44);
            goto L_802962D0;
    }
    goto skip_1;
    // 0x80296274: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    skip_1:
    // 0x80296278: multu       $s2, $a2
    result = U64(U32(ctx->r18)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8029627C: or          $s0, $s4, $zero
    ctx->r16 = ctx->r20 | 0;
    // 0x80296280: or          $s2, $a2, $zero
    ctx->r18 = ctx->r6 | 0;
    // 0x80296284: mflo        $t6
    ctx->r14 = lo;
    // 0x80296288: addu        $s1, $s4, $t6
    ctx->r17 = ADD32(ctx->r20, ctx->r14);
    // 0x8029628C: sltu        $at, $s4, $s1
    ctx->r1 = ctx->r20 < ctx->r17 ? 1 : 0;
    // 0x80296290: beq         $at, $zero, L_802962CC
    if (ctx->r1 == 0) {
        // 0x80296294: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_802962CC;
    }
    // 0x80296294: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80296298:
    // 0x80296298: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8029629C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802962A0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802962A4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802962A8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802962AC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802962B0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802962B4: jalr        $s3
    // 0x802962B8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r19)(rdram, ctx);
        goto after_1;
    // 0x802962B8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    after_1:
    // 0x802962BC: addu        $s0, $s0, $s2
    ctx->r16 = ADD32(ctx->r16, ctx->r18);
    // 0x802962C0: sltu        $at, $s0, $s1
    ctx->r1 = ctx->r16 < ctx->r17 ? 1 : 0;
    // 0x802962C4: bnel        $at, $zero, L_80296298
    if (ctx->r1 != 0) {
        // 0x802962C8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80296298;
    }
    goto skip_2;
    // 0x802962C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_2:
L_802962CC:
    // 0x802962CC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_802962D0:
    // 0x802962D0: or          $v0, $s4, $zero
    ctx->r2 = ctx->r20 | 0;
    // 0x802962D4: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x802962D8: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x802962DC: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x802962E0: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x802962E4: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x802962E8: jr          $ra
    // 0x802962EC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x802962EC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void D_80215A58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80215A58: addiu       $sp, $sp, -0xE8
    ctx->r29 = ADD32(ctx->r29, -0XE8);
    // 0x80215A5C: lhu         $t1, 0x106($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X106);
    // 0x80215A60: sw          $a3, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r7;
    // 0x80215A64: lw          $a3, 0x100($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X100);
    // 0x80215A68: lhu         $t6, 0x10A($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X10A);
    // 0x80215A6C: sll         $t2, $t1, 4
    ctx->r10 = S32(ctx->r9 << 4);
    // 0x80215A70: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80215A74: swc1        $f12, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f12.u32l;
    // 0x80215A78: swc1        $f14, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f14.u32l;
    // 0x80215A7C: sw          $a2, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->r6;
    // 0x80215A80: addu        $v0, $a3, $t2
    ctx->r2 = ADD32(ctx->r7, ctx->r10);
    // 0x80215A84: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x80215A88: lh          $t3, 0x0($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X0);
    // 0x80215A8C: addu        $v1, $a3, $t7
    ctx->r3 = ADD32(ctx->r7, ctx->r15);
    // 0x80215A90: lh          $t8, 0x0($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X0);
    // 0x80215A94: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x80215A98: lh          $t4, 0x2($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X2);
    // 0x80215A9C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80215AA0: cvt.s.w     $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    ctx->f2.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80215AA4: lh          $t5, 0x4($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X4);
    // 0x80215AA8: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x80215AAC: lhu         $t1, 0x10E($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X10E);
    // 0x80215AB0: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x80215AB4: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80215AB8: sll         $t2, $t1, 4
    ctx->r10 = S32(ctx->r9 << 4);
    // 0x80215ABC: addu        $a0, $a3, $t2
    ctx->r4 = ADD32(ctx->r7, ctx->r10);
    // 0x80215AC0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80215AC4: cvt.s.w     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    ctx->f16.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80215AC8: swc1        $f10, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f10.u32l;
    // 0x80215ACC: lh          $t9, 0x2($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X2);
    // 0x80215AD0: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x80215AD4: cvt.s.w     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80215AD8: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80215ADC: swc1        $f8, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f8.u32l;
    // 0x80215AE0: lh          $t0, 0x4($v1)
    ctx->r8 = MEM_H(ctx->r3, 0X4);
    // 0x80215AE4: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x80215AE8: nop

    // 0x80215AEC: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80215AF0: swc1        $f10, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f10.u32l;
    // 0x80215AF4: lh          $t3, 0x0($a0)
    ctx->r11 = MEM_H(ctx->r4, 0X0);
    // 0x80215AF8: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x80215AFC: nop

    // 0x80215B00: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80215B04: swc1        $f8, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f8.u32l;
    // 0x80215B08: lh          $t4, 0x2($a0)
    ctx->r12 = MEM_H(ctx->r4, 0X2);
    // 0x80215B0C: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x80215B10: nop

    // 0x80215B14: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80215B18: lwc1        $f6, 0x110($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X110);
    // 0x80215B1C: swc1        $f10, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f10.u32l;
    // 0x80215B20: lh          $t5, 0x4($a0)
    ctx->r13 = MEM_H(ctx->r4, 0X4);
    // 0x80215B24: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80215B28: swc1        $f18, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f18.u32l;
    // 0x80215B2C: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x80215B30: c.eq.s      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.fl == ctx->f10.fl;
    // 0x80215B34: swc1        $f16, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f16.u32l;
    // 0x80215B38: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80215B3C: swc1        $f2, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f2.u32l;
    // 0x80215B40: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80215B44: bc1t        L_80215BBC
    if (c1cs) {
        // 0x80215B48: swc1        $f8, 0xAC($sp)
        MEM_W(0XAC, ctx->r29) = ctx->f8.u32l;
            goto L_80215BBC;
    }
    // 0x80215B48: swc1        $f8, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f8.u32l;
    // 0x80215B4C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80215B50: lwc1        $f8, 0xC0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x80215B54: div.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80215B58: lwc1        $f4, 0xBC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x80215B5C: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x80215B60: nop

    // 0x80215B64: mul.s       $f16, $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x80215B68: nop

    // 0x80215B6C: mul.s       $f18, $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x80215B70: swc1        $f2, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f2.u32l;
    // 0x80215B74: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x80215B78: lwc1        $f8, 0xB8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x80215B7C: swc1        $f16, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f16.u32l;
    // 0x80215B80: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80215B84: lwc1        $f4, 0xB4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x80215B88: swc1        $f18, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f18.u32l;
    // 0x80215B8C: swc1        $f10, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f10.u32l;
    // 0x80215B90: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x80215B94: lwc1        $f8, 0xB0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x80215B98: swc1        $f6, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f6.u32l;
    // 0x80215B9C: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80215BA0: lwc1        $f4, 0xAC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x80215BA4: swc1        $f10, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f10.u32l;
    // 0x80215BA8: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x80215BAC: swc1        $f6, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f6.u32l;
    // 0x80215BB0: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80215BB4: swc1        $f10, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f10.u32l;
    // 0x80215BB8: swc1        $f6, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f6.u32l;
L_80215BBC:
    // 0x80215BBC: lwc1        $f16, 0xE8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x80215BC0: lwc1        $f4, 0xF4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x80215BC4: lwc1        $f12, 0xEC($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x80215BC8: lwc1        $f0, 0xF0($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x80215BCC: c.lt.s      $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f4.fl < ctx->f16.fl;
    // 0x80215BD0: lwc1        $f6, 0xF8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XF8);
    // 0x80215BD4: swc1        $f16, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f16.u32l;
    // 0x80215BD8: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    // 0x80215BDC: bc1f        L_80215BF0
    if (!c1cs) {
        // 0x80215BE0: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_80215BF0;
    }
    // 0x80215BE0: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x80215BE4: lwc1        $f18, 0x78($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X78);
    // 0x80215BE8: b           L_80215BF4
    // 0x80215BEC: mov.s       $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    ctx->f16.fl = ctx->f4.fl;
        goto L_80215BF4;
    // 0x80215BEC: mov.s       $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    ctx->f16.fl = ctx->f4.fl;
L_80215BF0:
    // 0x80215BF0: lwc1        $f18, 0xF4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XF4);
L_80215BF4:
    // 0x80215BF4: lwc1        $f8, 0xEC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x80215BF8: lwc1        $f10, 0xFC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XFC);
    // 0x80215BFC: lwc1        $f4, 0xF0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x80215C00: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x80215C04: lwc1        $f8, 0xC4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x80215C08: bc1fl       L_80215C1C
    if (!c1cs) {
        // 0x80215C0C: lwc1        $f14, 0xF8($sp)
        ctx->f14.u32l = MEM_W(ctx->r29, 0XF8);
            goto L_80215C1C;
    }
    goto skip_0;
    // 0x80215C0C: lwc1        $f14, 0xF8($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XF8);
    skip_0:
    // 0x80215C10: b           L_80215C1C
    // 0x80215C14: mov.s       $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = ctx->f6.fl;
        goto L_80215C1C;
    // 0x80215C14: mov.s       $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = ctx->f6.fl;
    // 0x80215C18: lwc1        $f14, 0xF8($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XF8);
L_80215C1C:
    // 0x80215C1C: c.lt.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl < ctx->f4.fl;
    // 0x80215C20: lwc1        $f6, 0xB8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x80215C24: bc1fl       L_80215C38
    if (!c1cs) {
        // 0x80215C28: lwc1        $f2, 0xFC($sp)
        ctx->f2.u32l = MEM_W(ctx->r29, 0XFC);
            goto L_80215C38;
    }
    goto skip_1;
    // 0x80215C28: lwc1        $f2, 0xFC($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XFC);
    skip_1:
    // 0x80215C2C: b           L_80215C38
    // 0x80215C30: mov.s       $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = ctx->f10.fl;
        goto L_80215C38;
    // 0x80215C30: mov.s       $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = ctx->f10.fl;
    // 0x80215C34: lwc1        $f2, 0xFC($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XFC);
L_80215C38:
    // 0x80215C38: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x80215C3C: lwc1        $f10, 0xC4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x80215C40: bc1fl       L_80215C6C
    if (!c1cs) {
        // 0x80215C44: c.lt.s      $f2, $f10
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl < ctx->f10.fl;
            goto L_80215C6C;
    }
    goto skip_2;
    // 0x80215C44: c.lt.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl < ctx->f10.fl;
    skip_2:
    // 0x80215C48: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x80215C4C: lwc1        $f4, 0xAC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x80215C50: bc1fl       L_80215C6C
    if (!c1cs) {
        // 0x80215C54: c.lt.s      $f2, $f10
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl < ctx->f10.fl;
            goto L_80215C6C;
    }
    goto skip_3;
    // 0x80215C54: c.lt.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl < ctx->f10.fl;
    skip_3:
    // 0x80215C58: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x80215C5C: nop

    // 0x80215C60: bc1t        L_80215D6C
    if (c1cs) {
        // 0x80215C64: nop
    
            goto L_80215D6C;
    }
    // 0x80215C64: nop

    // 0x80215C68: c.lt.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl < ctx->f10.fl;
L_80215C6C:
    // 0x80215C6C: lwc1        $f8, 0xB8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x80215C70: lwc1        $f4, 0xC8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x80215C74: bc1fl       L_80215CA0
    if (!c1cs) {
        // 0x80215C78: c.lt.s      $f4, $f12
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl < ctx->f12.fl;
            goto L_80215CA0;
    }
    goto skip_4;
    // 0x80215C78: c.lt.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl < ctx->f12.fl;
    skip_4:
    // 0x80215C7C: c.lt.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl < ctx->f8.fl;
    // 0x80215C80: lwc1        $f6, 0xAC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x80215C84: bc1fl       L_80215CA0
    if (!c1cs) {
        // 0x80215C88: c.lt.s      $f4, $f12
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl < ctx->f12.fl;
            goto L_80215CA0;
    }
    goto skip_5;
    // 0x80215C88: c.lt.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl < ctx->f12.fl;
    skip_5:
    // 0x80215C8C: c.lt.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl < ctx->f6.fl;
    // 0x80215C90: nop

    // 0x80215C94: bc1t        L_80215D6C
    if (c1cs) {
        // 0x80215C98: nop
    
            goto L_80215D6C;
    }
    // 0x80215C98: nop

    // 0x80215C9C: c.lt.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl < ctx->f12.fl;
L_80215CA0:
    // 0x80215CA0: lwc1        $f10, 0xBC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x80215CA4: lwc1        $f6, 0xC8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x80215CA8: bc1fl       L_80215CD4
    if (!c1cs) {
        // 0x80215CAC: c.lt.s      $f14, $f6
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f14.fl < ctx->f6.fl;
            goto L_80215CD4;
    }
    goto skip_6;
    // 0x80215CAC: c.lt.s      $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f14.fl < ctx->f6.fl;
    skip_6:
    // 0x80215CB0: c.lt.s      $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f10.fl < ctx->f12.fl;
    // 0x80215CB4: lwc1        $f8, 0xB0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x80215CB8: bc1fl       L_80215CD4
    if (!c1cs) {
        // 0x80215CBC: c.lt.s      $f14, $f6
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f14.fl < ctx->f6.fl;
            goto L_80215CD4;
    }
    goto skip_7;
    // 0x80215CBC: c.lt.s      $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f14.fl < ctx->f6.fl;
    skip_7:
    // 0x80215CC0: c.lt.s      $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f8.fl < ctx->f12.fl;
    // 0x80215CC4: nop

    // 0x80215CC8: bc1t        L_80215D6C
    if (c1cs) {
        // 0x80215CCC: nop
    
            goto L_80215D6C;
    }
    // 0x80215CCC: nop

    // 0x80215CD0: c.lt.s      $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f14.fl < ctx->f6.fl;
L_80215CD4:
    // 0x80215CD4: lwc1        $f4, 0xBC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x80215CD8: lwc1        $f0, 0xCC($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x80215CDC: bc1fl       L_80215D08
    if (!c1cs) {
        // 0x80215CE0: c.lt.s      $f0, $f16
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
            goto L_80215D08;
    }
    goto skip_8;
    // 0x80215CE0: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    skip_8:
    // 0x80215CE4: c.lt.s      $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f14.fl < ctx->f4.fl;
    // 0x80215CE8: lwc1        $f10, 0xB0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x80215CEC: bc1fl       L_80215D08
    if (!c1cs) {
        // 0x80215CF0: c.lt.s      $f0, $f16
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
            goto L_80215D08;
    }
    goto skip_9;
    // 0x80215CF0: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    skip_9:
    // 0x80215CF4: c.lt.s      $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f14.fl < ctx->f10.fl;
    // 0x80215CF8: nop

    // 0x80215CFC: bc1t        L_80215D6C
    if (c1cs) {
        // 0x80215D00: nop
    
            goto L_80215D6C;
    }
    // 0x80215D00: nop

    // 0x80215D04: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
L_80215D08:
    // 0x80215D08: lwc1        $f2, 0xC0($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x80215D0C: bc1fl       L_80215D38
    if (!c1cs) {
        // 0x80215D10: c.lt.s      $f18, $f0
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
            goto L_80215D38;
    }
    goto skip_10;
    // 0x80215D10: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    skip_10:
    // 0x80215D14: c.lt.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl < ctx->f16.fl;
    // 0x80215D18: lwc1        $f12, 0xB4($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x80215D1C: bc1fl       L_80215D38
    if (!c1cs) {
        // 0x80215D20: c.lt.s      $f18, $f0
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
            goto L_80215D38;
    }
    goto skip_11;
    // 0x80215D20: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    skip_11:
    // 0x80215D24: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    // 0x80215D28: nop

    // 0x80215D2C: bc1t        L_80215D6C
    if (c1cs) {
        // 0x80215D30: nop
    
            goto L_80215D6C;
    }
    // 0x80215D30: nop

    // 0x80215D34: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
L_80215D38:
    // 0x80215D38: lwc1        $f2, 0xC0($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x80215D3C: lwc1        $f12, 0xB4($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x80215D40: addiu       $a0, $sp, 0x88
    ctx->r4 = ADD32(ctx->r29, 0X88);
    // 0x80215D44: bc1fl       L_80215D78
    if (!c1cs) {
        // 0x80215D48: sub.s       $f18, $f2, $f0
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f2.fl - ctx->f0.fl;
            goto L_80215D78;
    }
    goto skip_12;
    // 0x80215D48: sub.s       $f18, $f2, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f2.fl - ctx->f0.fl;
    skip_12:
    // 0x80215D4C: c.lt.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl < ctx->f2.fl;
    // 0x80215D50: nop

    // 0x80215D54: bc1fl       L_80215D78
    if (!c1cs) {
        // 0x80215D58: sub.s       $f18, $f2, $f0
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f2.fl - ctx->f0.fl;
            goto L_80215D78;
    }
    goto skip_13;
    // 0x80215D58: sub.s       $f18, $f2, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f2.fl - ctx->f0.fl;
    skip_13:
    // 0x80215D5C: c.lt.s      $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f18.fl < ctx->f12.fl;
    // 0x80215D60: nop

    // 0x80215D64: bc1fl       L_80215D78
    if (!c1cs) {
        // 0x80215D68: sub.s       $f18, $f2, $f0
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f2.fl - ctx->f0.fl;
            goto L_80215D78;
    }
    goto skip_14;
    // 0x80215D68: sub.s       $f18, $f2, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f2.fl - ctx->f0.fl;
    skip_14:
L_80215D6C:
    // 0x80215D6C: b           L_8021608C
    // 0x80215D70: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021608C;
    // 0x80215D70: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80215D74: sub.s       $f18, $f2, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f2.fl - ctx->f0.fl;
L_80215D78:
    // 0x80215D78: lwc1        $f16, 0xC4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x80215D7C: lwc1        $f14, 0xC8($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x80215D80: sub.s       $f10, $f12, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x80215D84: lwc1        $f8, 0xBC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x80215D88: lwc1        $f6, 0xB0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x80215D8C: lwc1        $f4, 0xB8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x80215D90: sub.s       $f8, $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f8.fl - ctx->f14.fl;
    // 0x80215D94: swc1        $f18, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f18.u32l;
    // 0x80215D98: lwc1        $f18, 0xAC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x80215D9C: sub.s       $f14, $f6, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f14.fl;
    // 0x80215DA0: swc1        $f10, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f10.u32l;
    // 0x80215DA4: swc1        $f8, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f8.u32l;
    // 0x80215DA8: sub.s       $f4, $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f4.fl - ctx->f16.fl;
    // 0x80215DAC: swc1        $f14, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f14.u32l;
    // 0x80215DB0: addiu       $a1, $sp, 0xA0
    ctx->r5 = ADD32(ctx->r29, 0XA0);
    // 0x80215DB4: sub.s       $f16, $f18, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x80215DB8: swc1        $f4, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f4.u32l;
    // 0x80215DBC: addiu       $a2, $sp, 0x94
    ctx->r6 = ADD32(ctx->r29, 0X94);
    // 0x80215DC0: jal         0x80234C78
    // 0x80215DC4: swc1        $f16, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f16.u32l;
    static_3_80234C78(rdram, ctx);
        goto after_0;
    // 0x80215DC4: swc1        $f16, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f16.u32l;
    after_0:
    // 0x80215DC8: addiu       $a0, $sp, 0x88
    ctx->r4 = ADD32(ctx->r29, 0X88);
    // 0x80215DCC: jal         0x80234D30
    // 0x80215DD0: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    static_3_80234D30(rdram, ctx);
        goto after_1;
    // 0x80215DD0: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    after_1:
    // 0x80215DD4: lwc1        $f8, 0xCC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x80215DD8: lwc1        $f6, 0xE8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x80215DDC: lwc1        $f4, 0x88($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X88);
    // 0x80215DE0: lwc1        $f0, 0x90($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X90);
    // 0x80215DE4: sub.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x80215DE8: swc1        $f6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f6.u32l;
    // 0x80215DEC: lwc1        $f6, 0xEC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x80215DF0: swc1        $f4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
    // 0x80215DF4: mul.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x80215DF8: lwc1        $f10, 0xC8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x80215DFC: lwc1        $f4, 0x8C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x80215E00: swc1        $f6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f6.u32l;
    // 0x80215E04: sub.s       $f10, $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x80215E08: lwc1        $f6, 0xF0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x80215E0C: mul.s       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x80215E10: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80215E14: lwc1        $f10, 0xC4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x80215E18: sub.s       $f10, $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x80215E1C: mul.s       $f10, $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x80215E20: add.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80215E24: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80215E28: lwc1        $f8, 0xF4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x80215E2C: swc1        $f14, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f14.u32l;
    // 0x80215E30: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80215E34: lwc1        $f10, 0x50($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80215E38: lwc1        $f8, 0xF8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XF8);
    // 0x80215E3C: sub.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80215E40: lwc1        $f8, 0xFC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XFC);
    // 0x80215E44: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80215E48: sub.s       $f12, $f8, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x80215E4C: mul.s       $f8, $f16, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f10.fl);
    // 0x80215E50: nop

    // 0x80215E54: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x80215E58: swc1        $f12, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f12.u32l;
    // 0x80215E5C: mul.s       $f4, $f12, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x80215E60: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x80215E64: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80215E68: add.s       $f2, $f10, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80215E6C: c.eq.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl == ctx->f2.fl;
    // 0x80215E70: swc1        $f2, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f2.u32l;
    // 0x80215E74: bc1t        L_80215E90
    if (c1cs) {
        // 0x80215E78: nop
    
            goto L_80215E90;
    }
    // 0x80215E78: nop

    // 0x80215E7C: div.s       $f12, $f14, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = DIV_S(ctx->f14.fl, ctx->f2.fl);
    // 0x80215E80: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80215E84: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80215E88: b           L_80215E98
    // 0x80215E8C: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
        goto L_80215E98;
    // 0x80215E8C: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
L_80215E90:
    // 0x80215E90: b           L_8021608C
    // 0x80215E94: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021608C;
    // 0x80215E94: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80215E98:
    // 0x80215E98: c.lt.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl < ctx->f6.fl;
    // 0x80215E9C: nop

    // 0x80215EA0: bc1t        L_80215EC0
    if (c1cs) {
        // 0x80215EA4: nop
    
            goto L_80215EC0;
    }
    // 0x80215EA4: nop

    // 0x80215EA8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80215EAC: lwc1        $f4, 0x90($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X90);
    // 0x80215EB0: c.lt.s      $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f10.fl < ctx->f12.fl;
    // 0x80215EB4: nop

    // 0x80215EB8: bc1fl       L_80215ECC
    if (!c1cs) {
        // 0x80215EBC: mtc1        $zero, $f8
        ctx->f8.u32l = 0;
            goto L_80215ECC;
    }
    goto skip_15;
    // 0x80215EBC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    skip_15:
L_80215EC0:
    // 0x80215EC0: b           L_8021608C
    // 0x80215EC4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021608C;
    // 0x80215EC4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80215EC8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
L_80215ECC:
    // 0x80215ECC: mov.s       $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = ctx->f4.fl;
    // 0x80215ED0: c.eq.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl == ctx->f8.fl;
    // 0x80215ED4: nop

    // 0x80215ED8: bc1fl       L_80215FA0
    if (!c1cs) {
        // 0x80215EDC: mtc1        $zero, $f10
        ctx->f10.u32l = 0;
            goto L_80215FA0;
    }
    goto skip_16;
    // 0x80215EDC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    skip_16:
    // 0x80215EE0: mul.s       $f6, $f16, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x80215EE4: lwc1        $f10, 0xE8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x80215EE8: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x80215EEC: mul.s       $f8, $f18, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x80215EF0: lwc1        $f4, 0xC0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x80215EF4: lw          $a3, 0x88($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X88);
    // 0x80215EF8: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x80215EFC: add.s       $f12, $f6, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x80215F00: lwc1        $f6, 0xEC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x80215F04: lwc1        $f10, 0x60($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X60);
    // 0x80215F08: lwc1        $f4, 0xB0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x80215F0C: add.s       $f14, $f8, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x80215F10: mul.s       $f8, $f10, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x80215F14: lwc1        $f6, 0xF0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x80215F18: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    // 0x80215F1C: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x80215F20: lwc1        $f6, 0xCC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x80215F24: lwc1        $f8, 0x8C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x80215F28: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x80215F2C: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x80215F30: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80215F34: lwc1        $f8, 0xC4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x80215F38: lwc1        $f6, 0xBC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x80215F3C: lwc1        $f10, 0xC8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x80215F40: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x80215F44: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    // 0x80215F48: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x80215F4C: lwc1        $f10, 0xB8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x80215F50: lwc1        $f6, 0xAC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x80215F54: lwc1        $f8, 0xB4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x80215F58: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x80215F5C: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
    // 0x80215F60: jal         0x80215880
    // 0x80215F64: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    static_3_80215880(rdram, ctx);
        goto after_2;
    // 0x80215F64: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x80215F68: beq         $v0, $zero, L_80215F8C
    if (ctx->r2 == 0) {
        // 0x80215F6C: lw          $t7, 0x114($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X114);
            goto L_80215F8C;
    }
    // 0x80215F6C: lw          $t7, 0x114($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X114);
    // 0x80215F70: lwc1        $f10, 0xDC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x80215F74: lwc1        $f8, 0xE0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x80215F78: lw          $t6, 0x114($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X114);
    // 0x80215F7C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80215F80: div.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f8.fl);
    // 0x80215F84: b           L_8021608C
    // 0x80215F88: swc1        $f4, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f4.u32l;
        goto L_8021608C;
    // 0x80215F88: swc1        $f4, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f4.u32l;
L_80215F8C:
    // 0x80215F8C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80215F90: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80215F94: b           L_8021608C
    // 0x80215F98: swc1        $f6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f6.u32l;
        goto L_8021608C;
    // 0x80215F98: swc1        $f6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f6.u32l;
    // 0x80215F9C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
L_80215FA0:
    // 0x80215FA0: lwc1        $f4, 0xE8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x80215FA4: lwc1        $f6, 0xE8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x80215FA8: c.lt.s      $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f10.fl < ctx->f2.fl;
    // 0x80215FAC: nop

    // 0x80215FB0: bc1f        L_80216024
    if (!c1cs) {
        // 0x80215FB4: nop
    
            goto L_80216024;
    }
    // 0x80215FB4: nop

    // 0x80215FB8: mul.s       $f8, $f16, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x80215FBC: lwc1        $f10, 0xEC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x80215FC0: lhu         $t8, 0x10A($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X10A);
    // 0x80215FC4: mul.s       $f6, $f18, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x80215FC8: lhu         $t9, 0x10E($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X10E);
    // 0x80215FCC: lw          $a2, 0x100($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X100);
    // 0x80215FD0: lhu         $a3, 0x106($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X106);
    // 0x80215FD4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80215FD8: add.s       $f12, $f8, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x80215FDC: lwc1        $f8, 0x110($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X110);
    // 0x80215FE0: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x80215FE4: add.s       $f14, $f6, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x80215FE8: jal         0x80215578
    // 0x80215FEC: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    static_3_80215578(rdram, ctx);
        goto after_3;
    // 0x80215FEC: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x80215FF0: beq         $v0, $zero, L_80216014
    if (ctx->r2 == 0) {
        // 0x80215FF4: lw          $t1, 0x114($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X114);
            goto L_80216014;
    }
    // 0x80215FF4: lw          $t1, 0x114($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X114);
    // 0x80215FF8: lwc1        $f4, 0xDC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x80215FFC: lwc1        $f6, 0xE0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x80216000: lw          $t0, 0x114($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X114);
    // 0x80216004: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80216008: div.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8021600C: b           L_8021608C
    // 0x80216010: swc1        $f10, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f10.u32l;
        goto L_8021608C;
    // 0x80216010: swc1        $f10, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f10.u32l;
L_80216014:
    // 0x80216014: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80216018: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8021601C: b           L_8021608C
    // 0x80216020: swc1        $f8, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f8.u32l;
        goto L_8021608C;
    // 0x80216020: swc1        $f8, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f8.u32l;
L_80216024:
    // 0x80216024: mul.s       $f4, $f16, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x80216028: lwc1        $f8, 0xEC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x8021602C: lhu         $t2, 0x10A($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X10A);
    // 0x80216030: mul.s       $f10, $f18, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x80216034: lhu         $t3, 0x10E($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X10E);
    // 0x80216038: lw          $a2, 0x100($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X100);
    // 0x8021603C: lhu         $a3, 0x106($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X106);
    // 0x80216040: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80216044: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80216048: lwc1        $f4, 0x110($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X110);
    // 0x8021604C: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x80216050: add.s       $f14, $f10, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x80216054: jal         0x802156FC
    // 0x80216058: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    static_3_802156FC(rdram, ctx);
        goto after_4;
    // 0x80216058: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    after_4:
    // 0x8021605C: beq         $v0, $zero, L_80216080
    if (ctx->r2 == 0) {
        // 0x80216060: lw          $t5, 0x114($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X114);
            goto L_80216080;
    }
    // 0x80216060: lw          $t5, 0x114($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X114);
    // 0x80216064: lwc1        $f6, 0xDC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x80216068: lwc1        $f10, 0xE0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x8021606C: lw          $t4, 0x114($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X114);
    // 0x80216070: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80216074: div.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80216078: b           L_8021608C
    // 0x8021607C: swc1        $f8, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f8.u32l;
        goto L_8021608C;
    // 0x8021607C: swc1        $f8, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f8.u32l;
L_80216080:
    // 0x80216080: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80216084: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80216088: swc1        $f4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->f4.u32l;
L_8021608C:
    // 0x8021608C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80216090: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
    // 0x80216094: jr          $ra
    // 0x80216098: nop

    return;
    // 0x80216098: nop

;}
