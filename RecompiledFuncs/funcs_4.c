#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void D_802A1E4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A1ECC: jr          $ra
    // 0x802A1ED0: lwc1        $f0, 0x70($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X70);
    return;
    // 0x802A1ED0: lwc1        $f0, 0x70($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X70);
;}
RECOMP_FUNC void D_802E0D4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E0DCC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802E0DD0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802E0DD4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802E0DD8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802E0DDC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x802E0DE0: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x802E0DE4: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    // 0x802E0DE8: addiu       $a1, $zero, 0x3B
    ctx->r5 = ADD32(0, 0X3B);
    // 0x802E0DEC: jal         0x80302DC8
    // 0x802E0DF0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302DC8(rdram, ctx);
        goto after_0;
    // 0x802E0DF0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_0:
    // 0x802E0DF4: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x802E0DF8: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802E0DFC: addiu       $a1, $zero, 0x79
    ctx->r5 = ADD32(0, 0X79);
    // 0x802E0E00: jal         0x80302DC8
    // 0x802E0E04: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302DC8(rdram, ctx);
        goto after_1;
    // 0x802E0E04: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_1:
    // 0x802E0E08: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802E0E0C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802E0E10: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x802E0E14: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x802E0E18: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    // 0x802E0E1C: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x802E0E20: jal         0x80290474
    // 0x802E0E24: nop

    static_3_80290474(rdram, ctx);
        goto after_2;
    // 0x802E0E24: nop

    after_2:
    // 0x802E0E28: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802E0E2C: jal         0x80302980
    // 0x802E0E30: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302980(rdram, ctx);
        goto after_3;
    // 0x802E0E30: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_3:
    // 0x802E0E34: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802E0E38: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802E0E3C: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802E0E40: addiu       $a1, $zero, 0x3B
    ctx->r5 = ADD32(0, 0X3B);
    // 0x802E0E44: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802E0E48: jal         0x80302988
    // 0x802E0E4C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_4;
    // 0x802E0E4C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_4:
    // 0x802E0E50: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802E0E54: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802E0E58: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802E0E5C: addiu       $a1, $zero, 0x79
    ctx->r5 = ADD32(0, 0X79);
    // 0x802E0E60: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802E0E64: jal         0x80302988
    // 0x802E0E68: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_5;
    // 0x802E0E68: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_5:
    // 0x802E0E6C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802E0E70: jal         0x80302A7C
    // 0x802E0E74: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302A7C(rdram, ctx);
        goto after_6;
    // 0x802E0E74: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_6:
    // 0x802E0E78: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802E0E7C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802E0E80: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802E0E84: jr          $ra
    // 0x802E0E88: nop

    return;
    // 0x802E0E88: nop

;}
RECOMP_FUNC void D_802178F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802178F0: addiu       $sp, $sp, -0x180
    ctx->r29 = ADD32(ctx->r29, -0X180);
    // 0x802178F4: sw          $s5, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r21;
    // 0x802178F8: lui         $s5, 0x0
    ctx->r21 = S32(0X0 << 16);
    // 0x802178FC: addiu       $s5, $s5, 0x0
    ctx->r21 = ADD32(ctx->r21, 0X0);
    // 0x80217900: sw          $s7, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r23;
    // 0x80217904: sdc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X48, ctx->r29);
    // 0x80217908: mtc1        $a2, $f20
    ctx->f20.u32l = ctx->r6;
    // 0x8021790C: lw          $s7, 0x190($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X190);
    // 0x80217910: lw          $t6, 0x0($s5)
    ctx->r14 = MEM_W(ctx->r21, 0X0);
    // 0x80217914: sw          $s0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r16;
    // 0x80217918: sdc1        $f24, 0x58($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X58, ctx->r29);
    // 0x8021791C: mtc1        $a3, $f24
    ctx->f24.u32l = ctx->r7;
    // 0x80217920: addiu       $s0, $sp, 0x140
    ctx->r16 = ADD32(ctx->r29, 0X140);
    // 0x80217924: sw          $ra, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r31;
    // 0x80217928: sw          $fp, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r30;
    // 0x8021792C: sw          $s6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r22;
    // 0x80217930: sw          $s4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r20;
    // 0x80217934: sw          $s3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r19;
    // 0x80217938: sw          $s2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r18;
    // 0x8021793C: sw          $s1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r17;
    // 0x80217940: sdc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X50, ctx->r29);
    // 0x80217944: swc1        $f12, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->f12.u32l;
    // 0x80217948: swc1        $f14, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->f14.u32l;
    // 0x8021794C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80217950: swc1        $f20, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->f20.u32l;
    // 0x80217954: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x80217958: jal         0x8022A2F0
    // 0x8021795C: sw          $t6, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->r14;
    static_3_8022A2F0(rdram, ctx);
        goto after_0;
    // 0x8021795C: sw          $t6, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->r14;
    after_0:
    // 0x80217960: addiu       $a1, $sp, 0x134
    ctx->r5 = ADD32(ctx->r29, 0X134);
    // 0x80217964: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80217968: jal         0x8022A4F4
    // 0x8021796C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_8022A4F4(rdram, ctx);
        goto after_1;
    // 0x8021796C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80217970: lw          $a2, 0x198($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X198);
    // 0x80217974: lw          $a1, 0x194($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X194);
    // 0x80217978: lwc1        $f6, 0x134($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X134);
    // 0x8021797C: lbu         $v1, 0x11($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X11);
    // 0x80217980: andi        $t7, $v1, 0x2
    ctx->r15 = ctx->r3 & 0X2;
    // 0x80217984: beq         $t7, $zero, L_80217A7C
    if (ctx->r15 == 0) {
        // 0x80217988: andi        $t8, $v1, 0x4
        ctx->r24 = ctx->r3 & 0X4;
            goto L_80217A7C;
    }
    // 0x80217988: andi        $t8, $v1, 0x4
    ctx->r24 = ctx->r3 & 0X4;
    // 0x8021798C: lwc1        $f4, 0x8($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80217990: addiu       $v0, $a1, 0x8
    ctx->r2 = ADD32(ctx->r5, 0X8);
    // 0x80217994: lwc1        $f8, 0x134($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X134);
    // 0x80217998: sub.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8021799C: c.lt.s      $f24, $f2
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f24.fl < ctx->f2.fl;
    // 0x802179A0: nop

    // 0x802179A4: bc1fl       L_802179B8
    if (!c1cs) {
        // 0x802179A8: lwc1        $f10, 0xC($v0)
        ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
            goto L_802179B8;
    }
    goto skip_0;
    // 0x802179A8: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    skip_0:
    // 0x802179AC: b           L_80218464
    // 0x802179B0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80218464;
    // 0x802179B0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802179B4: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
L_802179B8:
    // 0x802179B8: lwc1        $f18, 0x138($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X138);
    // 0x802179BC: sub.s       $f22, $f8, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f22.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x802179C0: c.lt.s      $f24, $f22
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f24.fl < ctx->f22.fl;
    // 0x802179C4: nop

    // 0x802179C8: bc1fl       L_802179DC
    if (!c1cs) {
        // 0x802179CC: lwc1        $f16, 0x4($v0)
        ctx->f16.u32l = MEM_W(ctx->r2, 0X4);
            goto L_802179DC;
    }
    goto skip_1;
    // 0x802179CC: lwc1        $f16, 0x4($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X4);
    skip_1:
    // 0x802179D0: b           L_80218464
    // 0x802179D4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80218464;
    // 0x802179D4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802179D8: lwc1        $f16, 0x4($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X4);
L_802179DC:
    // 0x802179DC: lwc1        $f8, 0x138($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X138);
    // 0x802179E0: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x802179E4: swc1        $f4, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f4.u32l;
    // 0x802179E8: lwc1        $f6, 0xF4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x802179EC: c.lt.s      $f24, $f6
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f24.fl < ctx->f6.fl;
    // 0x802179F0: nop

    // 0x802179F4: bc1fl       L_80217A08
    if (!c1cs) {
        // 0x802179F8: lwc1        $f10, 0x10($v0)
        ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
            goto L_80217A08;
    }
    goto skip_2;
    // 0x802179F8: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
    skip_2:
    // 0x802179FC: b           L_80218464
    // 0x80217A00: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80218464;
    // 0x80217A00: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80217A04: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
L_80217A08:
    // 0x80217A08: lwc1        $f4, 0x13C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X13C);
    // 0x80217A0C: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80217A10: c.lt.s      $f24, $f16
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f24.fl < ctx->f16.fl;
    // 0x80217A14: swc1        $f16, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f16.u32l;
    // 0x80217A18: bc1fl       L_80217A2C
    if (!c1cs) {
        // 0x80217A1C: lwc1        $f18, 0x8($v0)
        ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
            goto L_80217A2C;
    }
    goto skip_3;
    // 0x80217A1C: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    skip_3:
    // 0x80217A20: b           L_80218464
    // 0x80217A24: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80218464;
    // 0x80217A24: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80217A28: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
L_80217A2C:
    // 0x80217A2C: lwc1        $f10, 0x13C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X13C);
    // 0x80217A30: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80217A34: swc1        $f6, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f6.u32l;
    // 0x80217A38: lwc1        $f8, 0xEC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x80217A3C: c.lt.s      $f24, $f8
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f24.fl < ctx->f8.fl;
    // 0x80217A40: nop

    // 0x80217A44: bc1fl       L_80217A58
    if (!c1cs) {
        // 0x80217A48: lwc1        $f16, 0x14($v0)
        ctx->f16.u32l = MEM_W(ctx->r2, 0X14);
            goto L_80217A58;
    }
    goto skip_4;
    // 0x80217A48: lwc1        $f16, 0x14($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X14);
    skip_4:
    // 0x80217A4C: b           L_80218464
    // 0x80217A50: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80218464;
    // 0x80217A50: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80217A54: lwc1        $f16, 0x14($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X14);
L_80217A58:
    // 0x80217A58: swc1        $f22, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f22.u32l;
    // 0x80217A5C: swc1        $f2, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f2.u32l;
    // 0x80217A60: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80217A64: c.lt.s      $f24, $f18
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f24.fl < ctx->f18.fl;
    // 0x80217A68: swc1        $f18, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f18.u32l;
    // 0x80217A6C: bc1fl       L_80217A80
    if (!c1cs) {
        // 0x80217A70: lw          $a1, 0x194($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X194);
            goto L_80217A80;
    }
    goto skip_5;
    // 0x80217A70: lw          $a1, 0x194($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X194);
    skip_5:
    // 0x80217A74: b           L_80218464
    // 0x80217A78: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80218464;
    // 0x80217A78: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80217A7C:
    // 0x80217A7C: lw          $a1, 0x194($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X194);
L_80217A80:
    // 0x80217A80: lwc1        $f2, 0xFC($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XFC);
    // 0x80217A84: bne         $t8, $zero, L_802180BC
    if (ctx->r24 != 0) {
        // 0x80217A88: lwc1        $f22, 0xF8($sp)
        ctx->f22.u32l = MEM_W(ctx->r29, 0XF8);
            goto L_802180BC;
    }
    // 0x80217A88: lwc1        $f22, 0xF8($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0XF8);
    // 0x80217A8C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80217A90: nop

    // 0x80217A94: c.lt.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl < ctx->f2.fl;
    // 0x80217A98: nop

    // 0x80217A9C: bc1fl       L_80217AB0
    if (!c1cs) {
        // 0x80217AA0: neg.s       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
            goto L_80217AB0;
    }
    goto skip_6;
    // 0x80217AA0: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    skip_6:
    // 0x80217AA4: b           L_80217AB0
    // 0x80217AA8: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
        goto L_80217AB0;
    // 0x80217AA8: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x80217AAC: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
L_80217AB0:
    // 0x80217AB0: c.lt.s      $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f0.fl < ctx->f24.fl;
    // 0x80217AB4: nop

    // 0x80217AB8: bc1fl       L_80217B70
    if (!c1cs) {
        // 0x80217ABC: mtc1        $zero, $f8
        ctx->f8.u32l = 0;
            goto L_80217B70;
    }
    goto skip_7;
    // 0x80217ABC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    skip_7:
    // 0x80217AC0: lw          $t9, 0x0($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X0);
    // 0x80217AC4: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x80217AC8: lw          $t4, 0x0($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X0);
    // 0x80217ACC: sll         $t3, $t9, 2
    ctx->r11 = S32(ctx->r25 << 2);
    // 0x80217AD0: subu        $t3, $t3, $t9
    ctx->r11 = SUB32(ctx->r11, ctx->r25);
    // 0x80217AD4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80217AD8: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x80217ADC: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x80217AE0: neg.s       $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = -ctx->f2.fl;
    // 0x80217AE4: jal         0x8021A528
    // 0x80217AE8: addu        $a2, $t3, $t4
    ctx->r6 = ADD32(ctx->r11, ctx->r12);
    static_3_8021A528(rdram, ctx);
        goto after_2;
    // 0x80217AE8: addu        $a2, $t3, $t4
    ctx->r6 = ADD32(ctx->r11, ctx->r12);
    after_2:
    // 0x80217AEC: div.s       $f6, $f20, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = DIV_S(ctx->f20.fl, ctx->f24.fl);
    // 0x80217AF0: lw          $t7, 0x0($s5)
    ctx->r15 = MEM_W(ctx->r21, 0X0);
    // 0x80217AF4: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80217AF8: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x80217AFC: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x80217B00: lw          $t5, 0x0($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X0);
    // 0x80217B04: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80217B08: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x80217B0C: sw          $t5, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r13;
    // 0x80217B10: lw          $t4, 0x0($s5)
    ctx->r12 = MEM_W(ctx->r21, 0X0);
    // 0x80217B14: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x80217B18: lw          $t3, 0x0($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X0);
    // 0x80217B1C: sll         $t7, $t4, 2
    ctx->r15 = S32(ctx->r12 << 2);
    // 0x80217B20: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x80217B24: addu        $t6, $t3, $t7
    ctx->r14 = ADD32(ctx->r11, ctx->r15);
    // 0x80217B28: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80217B2C: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80217B30: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x80217B34: swc1        $f6, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f6.u32l;
    // 0x80217B38: lw          $t8, 0x0($s5)
    ctx->r24 = MEM_W(ctx->r21, 0X0);
    // 0x80217B3C: addiu       $t5, $t8, 0x1
    ctx->r13 = ADD32(ctx->r24, 0X1);
    // 0x80217B40: sw          $t5, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r13;
    // 0x80217B44: lhu         $t9, 0x0($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0X0);
    // 0x80217B48: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    // 0x80217B4C: slt         $at, $t5, $t9
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80217B50: bnel        $at, $zero, L_80217B70
    if (ctx->r1 != 0) {
        // 0x80217B54: mtc1        $zero, $f8
        ctx->f8.u32l = 0;
            goto L_80217B70;
    }
    goto skip_8;
    // 0x80217B54: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    skip_8:
    // 0x80217B58: jal         0x80231C58
    // 0x80217B5C: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    static_3_80231C58(rdram, ctx);
        goto after_3;
    // 0x80217B5C: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    after_3:
    // 0x80217B60: lw          $t4, 0x0($s5)
    ctx->r12 = MEM_W(ctx->r21, 0X0);
    // 0x80217B64: addiu       $t3, $t4, -0x1
    ctx->r11 = ADD32(ctx->r12, -0X1);
    // 0x80217B68: sw          $t3, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r11;
    // 0x80217B6C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
L_80217B70:
    // 0x80217B70: lw          $s4, 0x0($s5)
    ctx->r20 = MEM_W(ctx->r21, 0X0);
    // 0x80217B74: c.lt.s      $f8, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f8.fl < ctx->f22.fl;
    // 0x80217B78: nop

    // 0x80217B7C: bc1fl       L_80217B90
    if (!c1cs) {
        // 0x80217B80: neg.s       $f0, $f22
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = -ctx->f22.fl;
            goto L_80217B90;
    }
    goto skip_9;
    // 0x80217B80: neg.s       $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = -ctx->f22.fl;
    skip_9:
    // 0x80217B84: b           L_80217B90
    // 0x80217B88: mov.s       $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    ctx->f0.fl = ctx->f22.fl;
        goto L_80217B90;
    // 0x80217B88: mov.s       $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    ctx->f0.fl = ctx->f22.fl;
    // 0x80217B8C: neg.s       $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = -ctx->f22.fl;
L_80217B90:
    // 0x80217B90: c.lt.s      $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f0.fl < ctx->f24.fl;
    // 0x80217B94: sll         $t7, $s4, 2
    ctx->r15 = S32(ctx->r20 << 2);
    // 0x80217B98: subu        $t7, $t7, $s4
    ctx->r15 = SUB32(ctx->r15, ctx->r20);
    // 0x80217B9C: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x80217BA0: bc1f        L_80217C44
    if (!c1cs) {
        // 0x80217BA4: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_80217C44;
    }
    // 0x80217BA4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80217BA8: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80217BAC: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x80217BB0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80217BB4: neg.s       $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = -ctx->f22.fl;
    // 0x80217BB8: jal         0x8021A528
    // 0x80217BBC: addu        $a2, $t7, $t6
    ctx->r6 = ADD32(ctx->r15, ctx->r14);
    static_3_8021A528(rdram, ctx);
        goto after_4;
    // 0x80217BBC: addu        $a2, $t7, $t6
    ctx->r6 = ADD32(ctx->r15, ctx->r14);
    after_4:
    // 0x80217BC0: div.s       $f10, $f20, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = DIV_S(ctx->f20.fl, ctx->f24.fl);
    // 0x80217BC4: lw          $t9, 0x0($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X0);
    // 0x80217BC8: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x80217BCC: lw          $t5, 0x0($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X0);
    // 0x80217BD0: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x80217BD4: lw          $t8, 0x0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X0);
    // 0x80217BD8: sll         $t4, $t9, 2
    ctx->r12 = S32(ctx->r25 << 2);
    // 0x80217BDC: addu        $t3, $t5, $t4
    ctx->r11 = ADD32(ctx->r13, ctx->r12);
    // 0x80217BE0: sw          $t8, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r24;
    // 0x80217BE4: lw          $t6, 0x0($s5)
    ctx->r14 = MEM_W(ctx->r21, 0X0);
    // 0x80217BE8: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80217BEC: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x80217BF0: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x80217BF4: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x80217BF8: addu        $t5, $t7, $t9
    ctx->r13 = ADD32(ctx->r15, ctx->r25);
    // 0x80217BFC: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80217C00: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80217C04: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x80217C08: swc1        $f10, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->f10.u32l;
    // 0x80217C0C: lw          $t4, 0x0($s5)
    ctx->r12 = MEM_W(ctx->r21, 0X0);
    // 0x80217C10: addiu       $t8, $t4, 0x1
    ctx->r24 = ADD32(ctx->r12, 0X1);
    // 0x80217C14: sw          $t8, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r24;
    // 0x80217C18: lhu         $t3, 0x0($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0X0);
    // 0x80217C1C: or          $s4, $t8, $zero
    ctx->r20 = ctx->r24 | 0;
    // 0x80217C20: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x80217C24: slt         $at, $t8, $t3
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x80217C28: bnel        $at, $zero, L_80217C48
    if (ctx->r1 != 0) {
        // 0x80217C2C: mtc1        $zero, $f16
        ctx->f16.u32l = 0;
            goto L_80217C48;
    }
    goto skip_10;
    // 0x80217C2C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    skip_10:
    // 0x80217C30: jal         0x80231C58
    // 0x80217C34: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    static_3_80231C58(rdram, ctx);
        goto after_5;
    // 0x80217C34: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    after_5:
    // 0x80217C38: lw          $t6, 0x0($s5)
    ctx->r14 = MEM_W(ctx->r21, 0X0);
    // 0x80217C3C: addiu       $s4, $t6, -0x1
    ctx->r20 = ADD32(ctx->r14, -0X1);
    // 0x80217C40: sw          $s4, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r20;
L_80217C44:
    // 0x80217C44: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
L_80217C48:
    // 0x80217C48: lwc1        $f18, 0xF4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x80217C4C: lwc1        $f0, 0xF4($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x80217C50: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x80217C54: nop

    // 0x80217C58: bc1fl       L_80217C6C
    if (!c1cs) {
        // 0x80217C5C: neg.s       $f0, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
            goto L_80217C6C;
    }
    goto skip_11;
    // 0x80217C5C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    skip_11:
    // 0x80217C60: b           L_80217C6C
    // 0x80217C64: mov.s       $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = ctx->f18.fl;
        goto L_80217C6C;
    // 0x80217C64: mov.s       $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = ctx->f18.fl;
    // 0x80217C68: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_80217C6C:
    // 0x80217C6C: c.lt.s      $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f0.fl < ctx->f24.fl;
    // 0x80217C70: sll         $t9, $s4, 2
    ctx->r25 = S32(ctx->r20 << 2);
    // 0x80217C74: subu        $t9, $t9, $s4
    ctx->r25 = SUB32(ctx->r25, ctx->r20);
    // 0x80217C78: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x80217C7C: bc1f        L_80217D24
    if (!c1cs) {
        // 0x80217C80: addiu       $a1, $zero, -0x2
        ctx->r5 = ADD32(0, -0X2);
            goto L_80217D24;
    }
    // 0x80217C80: addiu       $a1, $zero, -0x2
    ctx->r5 = ADD32(0, -0X2);
    // 0x80217C84: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x80217C88: lw          $t5, 0x0($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X0);
    // 0x80217C8C: lwc1        $f20, 0xF4($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x80217C90: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80217C94: addu        $a2, $t9, $t5
    ctx->r6 = ADD32(ctx->r25, ctx->r13);
    // 0x80217C98: jal         0x8021A528
    // 0x80217C9C: neg.s       $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = -ctx->f20.fl;
    static_3_8021A528(rdram, ctx);
        goto after_6;
    // 0x80217C9C: neg.s       $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = -ctx->f20.fl;
    after_6:
    // 0x80217CA0: div.s       $f4, $f20, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = DIV_S(ctx->f20.fl, ctx->f24.fl);
    // 0x80217CA4: lw          $t3, 0x0($s5)
    ctx->r11 = MEM_W(ctx->r21, 0X0);
    // 0x80217CA8: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x80217CAC: lw          $t8, 0x0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X0);
    // 0x80217CB0: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x80217CB4: lw          $t4, 0x0($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X0);
    // 0x80217CB8: sll         $t6, $t3, 2
    ctx->r14 = S32(ctx->r11 << 2);
    // 0x80217CBC: addu        $t7, $t8, $t6
    ctx->r15 = ADD32(ctx->r24, ctx->r14);
    // 0x80217CC0: sw          $t4, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r12;
    // 0x80217CC4: lw          $t5, 0x0($s5)
    ctx->r13 = MEM_W(ctx->r21, 0X0);
    // 0x80217CC8: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x80217CCC: lw          $t9, 0x0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X0);
    // 0x80217CD0: sll         $t3, $t5, 2
    ctx->r11 = S32(ctx->r13 << 2);
    // 0x80217CD4: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80217CD8: addu        $t8, $t9, $t3
    ctx->r24 = ADD32(ctx->r25, ctx->r11);
    // 0x80217CDC: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80217CE0: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80217CE4: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x80217CE8: swc1        $f4, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f4.u32l;
    // 0x80217CEC: lw          $t6, 0x0($s5)
    ctx->r14 = MEM_W(ctx->r21, 0X0);
    // 0x80217CF0: addiu       $t4, $t6, 0x1
    ctx->r12 = ADD32(ctx->r14, 0X1);
    // 0x80217CF4: sw          $t4, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r12;
    // 0x80217CF8: lhu         $t7, 0x0($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X0);
    // 0x80217CFC: or          $s4, $t4, $zero
    ctx->r20 = ctx->r12 | 0;
    // 0x80217D00: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x80217D04: slt         $at, $t4, $t7
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80217D08: bnel        $at, $zero, L_80217D28
    if (ctx->r1 != 0) {
        // 0x80217D0C: mtc1        $zero, $f6
        ctx->f6.u32l = 0;
            goto L_80217D28;
    }
    goto skip_12;
    // 0x80217D0C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    skip_12:
    // 0x80217D10: jal         0x80231C58
    // 0x80217D14: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    static_3_80231C58(rdram, ctx);
        goto after_7;
    // 0x80217D14: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    after_7:
    // 0x80217D18: lw          $t5, 0x0($s5)
    ctx->r13 = MEM_W(ctx->r21, 0X0);
    // 0x80217D1C: addiu       $s4, $t5, -0x1
    ctx->r20 = ADD32(ctx->r13, -0X1);
    // 0x80217D20: sw          $s4, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r20;
L_80217D24:
    // 0x80217D24: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
L_80217D28:
    // 0x80217D28: lwc1        $f8, 0xF0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x80217D2C: sll         $t3, $s4, 2
    ctx->r11 = S32(ctx->r20 << 2);
    // 0x80217D30: lwc1        $f0, 0xF0($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x80217D34: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x80217D38: subu        $t3, $t3, $s4
    ctx->r11 = SUB32(ctx->r11, ctx->r20);
    // 0x80217D3C: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x80217D40: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80217D44: bc1f        L_80217D54
    if (!c1cs) {
        // 0x80217D48: lui         $t8, 0x0
        ctx->r24 = S32(0X0 << 16);
            goto L_80217D54;
    }
    // 0x80217D48: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x80217D4C: b           L_80217D58
    // 0x80217D50: mov.s       $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.fl = ctx->f8.fl;
        goto L_80217D58;
    // 0x80217D50: mov.s       $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.fl = ctx->f8.fl;
L_80217D54:
    // 0x80217D54: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_80217D58:
    // 0x80217D58: c.lt.s      $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f0.fl < ctx->f24.fl;
    // 0x80217D5C: lwc1        $f20, 0xF0($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x80217D60: bc1fl       L_80217E04
    if (!c1cs) {
        // 0x80217D64: mtc1        $zero, $f16
        ctx->f16.u32l = 0;
            goto L_80217E04;
    }
    goto skip_13;
    // 0x80217D64: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    skip_13:
    // 0x80217D68: lw          $t8, 0x0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X0);
    // 0x80217D6C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80217D70: neg.s       $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = -ctx->f20.fl;
    // 0x80217D74: jal         0x8021A528
    // 0x80217D78: addu        $a2, $t3, $t8
    ctx->r6 = ADD32(ctx->r11, ctx->r24);
    static_3_8021A528(rdram, ctx);
        goto after_8;
    // 0x80217D78: addu        $a2, $t3, $t8
    ctx->r6 = ADD32(ctx->r11, ctx->r24);
    after_8:
    // 0x80217D7C: div.s       $f10, $f20, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = DIV_S(ctx->f20.fl, ctx->f24.fl);
    // 0x80217D80: lw          $t7, 0x0($s5)
    ctx->r15 = MEM_W(ctx->r21, 0X0);
    // 0x80217D84: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x80217D88: lw          $t4, 0x0($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X0);
    // 0x80217D8C: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80217D90: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x80217D94: sll         $t5, $t7, 2
    ctx->r13 = S32(ctx->r15 << 2);
    // 0x80217D98: addu        $t9, $t4, $t5
    ctx->r25 = ADD32(ctx->r12, ctx->r13);
    // 0x80217D9C: sw          $t6, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r14;
    // 0x80217DA0: lw          $t8, 0x0($s5)
    ctx->r24 = MEM_W(ctx->r21, 0X0);
    // 0x80217DA4: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x80217DA8: lw          $t3, 0x0($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X0);
    // 0x80217DAC: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x80217DB0: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x80217DB4: addu        $t4, $t3, $t7
    ctx->r12 = ADD32(ctx->r11, ctx->r15);
    // 0x80217DB8: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80217DBC: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80217DC0: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x80217DC4: swc1        $f10, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f10.u32l;
    // 0x80217DC8: lw          $t5, 0x0($s5)
    ctx->r13 = MEM_W(ctx->r21, 0X0);
    // 0x80217DCC: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80217DD0: sw          $t6, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r14;
    // 0x80217DD4: lhu         $t9, 0x0($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0X0);
    // 0x80217DD8: or          $s4, $t6, $zero
    ctx->r20 = ctx->r14 | 0;
    // 0x80217DDC: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80217DE0: slt         $at, $t6, $t9
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80217DE4: bnel        $at, $zero, L_80217E04
    if (ctx->r1 != 0) {
        // 0x80217DE8: mtc1        $zero, $f16
        ctx->f16.u32l = 0;
            goto L_80217E04;
    }
    goto skip_14;
    // 0x80217DE8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    skip_14:
    // 0x80217DEC: jal         0x80231C58
    // 0x80217DF0: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    static_3_80231C58(rdram, ctx);
        goto after_9;
    // 0x80217DF0: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    after_9:
    // 0x80217DF4: lw          $t8, 0x0($s5)
    ctx->r24 = MEM_W(ctx->r21, 0X0);
    // 0x80217DF8: addiu       $s4, $t8, -0x1
    ctx->r20 = ADD32(ctx->r24, -0X1);
    // 0x80217DFC: sw          $s4, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r20;
    // 0x80217E00: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
L_80217E04:
    // 0x80217E04: lwc1        $f18, 0xEC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x80217E08: sll         $t7, $s4, 2
    ctx->r15 = S32(ctx->r20 << 2);
    // 0x80217E0C: lwc1        $f0, 0xEC($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x80217E10: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x80217E14: subu        $t7, $t7, $s4
    ctx->r15 = SUB32(ctx->r15, ctx->r20);
    // 0x80217E18: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x80217E1C: addiu       $a1, $zero, -0x3
    ctx->r5 = ADD32(0, -0X3);
    // 0x80217E20: bc1f        L_80217E30
    if (!c1cs) {
        // 0x80217E24: lui         $t4, 0x0
        ctx->r12 = S32(0X0 << 16);
            goto L_80217E30;
    }
    // 0x80217E24: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x80217E28: b           L_80217E34
    // 0x80217E2C: mov.s       $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = ctx->f18.fl;
        goto L_80217E34;
    // 0x80217E2C: mov.s       $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = ctx->f18.fl;
L_80217E30:
    // 0x80217E30: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_80217E34:
    // 0x80217E34: c.lt.s      $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f0.fl < ctx->f24.fl;
    // 0x80217E38: lwc1        $f20, 0xEC($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x80217E3C: bc1fl       L_80217EE0
    if (!c1cs) {
        // 0x80217E40: mtc1        $zero, $f6
        ctx->f6.u32l = 0;
            goto L_80217EE0;
    }
    goto skip_15;
    // 0x80217E40: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    skip_15:
    // 0x80217E44: lw          $t4, 0x0($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X0);
    // 0x80217E48: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80217E4C: neg.s       $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = -ctx->f20.fl;
    // 0x80217E50: jal         0x8021A528
    // 0x80217E54: addu        $a2, $t7, $t4
    ctx->r6 = ADD32(ctx->r15, ctx->r12);
    static_3_8021A528(rdram, ctx);
        goto after_10;
    // 0x80217E54: addu        $a2, $t7, $t4
    ctx->r6 = ADD32(ctx->r15, ctx->r12);
    after_10:
    // 0x80217E58: div.s       $f4, $f20, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = DIV_S(ctx->f20.fl, ctx->f24.fl);
    // 0x80217E5C: lw          $t9, 0x0($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X0);
    // 0x80217E60: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80217E64: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x80217E68: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x80217E6C: lw          $t5, 0x0($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X0);
    // 0x80217E70: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x80217E74: addu        $t3, $t6, $t8
    ctx->r11 = ADD32(ctx->r14, ctx->r24);
    // 0x80217E78: sw          $t5, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r13;
    // 0x80217E7C: lw          $t4, 0x0($s5)
    ctx->r12 = MEM_W(ctx->r21, 0X0);
    // 0x80217E80: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80217E84: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x80217E88: sll         $t9, $t4, 2
    ctx->r25 = S32(ctx->r12 << 2);
    // 0x80217E8C: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x80217E90: addu        $t6, $t7, $t9
    ctx->r14 = ADD32(ctx->r15, ctx->r25);
    // 0x80217E94: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80217E98: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80217E9C: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x80217EA0: swc1        $f4, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f4.u32l;
    // 0x80217EA4: lw          $t8, 0x0($s5)
    ctx->r24 = MEM_W(ctx->r21, 0X0);
    // 0x80217EA8: addiu       $t5, $t8, 0x1
    ctx->r13 = ADD32(ctx->r24, 0X1);
    // 0x80217EAC: sw          $t5, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r13;
    // 0x80217EB0: lhu         $t3, 0x0($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0X0);
    // 0x80217EB4: or          $s4, $t5, $zero
    ctx->r20 = ctx->r13 | 0;
    // 0x80217EB8: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    // 0x80217EBC: slt         $at, $t5, $t3
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x80217EC0: bnel        $at, $zero, L_80217EE0
    if (ctx->r1 != 0) {
        // 0x80217EC4: mtc1        $zero, $f6
        ctx->f6.u32l = 0;
            goto L_80217EE0;
    }
    goto skip_16;
    // 0x80217EC4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    skip_16:
    // 0x80217EC8: jal         0x80231C58
    // 0x80217ECC: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    static_3_80231C58(rdram, ctx);
        goto after_11;
    // 0x80217ECC: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    after_11:
    // 0x80217ED0: lw          $t4, 0x0($s5)
    ctx->r12 = MEM_W(ctx->r21, 0X0);
    // 0x80217ED4: addiu       $s4, $t4, -0x1
    ctx->r20 = ADD32(ctx->r12, -0X1);
    // 0x80217ED8: sw          $s4, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r20;
    // 0x80217EDC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
L_80217EE0:
    // 0x80217EE0: lwc1        $f8, 0xE8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x80217EE4: sll         $t9, $s4, 2
    ctx->r25 = S32(ctx->r20 << 2);
    // 0x80217EE8: lwc1        $f0, 0xE8($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x80217EEC: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x80217EF0: subu        $t9, $t9, $s4
    ctx->r25 = SUB32(ctx->r25, ctx->r20);
    // 0x80217EF4: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x80217EF8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80217EFC: bc1f        L_80217F0C
    if (!c1cs) {
        // 0x80217F00: lui         $t6, 0x0
        ctx->r14 = S32(0X0 << 16);
            goto L_80217F0C;
    }
    // 0x80217F00: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80217F04: b           L_80217F10
    // 0x80217F08: mov.s       $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.fl = ctx->f8.fl;
        goto L_80217F10;
    // 0x80217F08: mov.s       $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.fl = ctx->f8.fl;
L_80217F0C:
    // 0x80217F0C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_80217F10:
    // 0x80217F10: c.lt.s      $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f0.fl < ctx->f24.fl;
    // 0x80217F14: lwc1        $f20, 0xE8($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x80217F18: bc1fl       L_80217FBC
    if (!c1cs) {
        // 0x80217F1C: lw          $t3, 0x124($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X124);
            goto L_80217FBC;
    }
    goto skip_17;
    // 0x80217F1C: lw          $t3, 0x124($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X124);
    skip_17:
    // 0x80217F20: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x80217F24: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80217F28: neg.s       $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = -ctx->f20.fl;
    // 0x80217F2C: jal         0x8021A528
    // 0x80217F30: addu        $a2, $t9, $t6
    ctx->r6 = ADD32(ctx->r25, ctx->r14);
    static_3_8021A528(rdram, ctx);
        goto after_12;
    // 0x80217F30: addu        $a2, $t9, $t6
    ctx->r6 = ADD32(ctx->r25, ctx->r14);
    after_12:
    // 0x80217F34: div.s       $f10, $f20, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = DIV_S(ctx->f20.fl, ctx->f24.fl);
    // 0x80217F38: lw          $t3, 0x0($s5)
    ctx->r11 = MEM_W(ctx->r21, 0X0);
    // 0x80217F3C: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x80217F40: lw          $t5, 0x0($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X0);
    // 0x80217F44: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x80217F48: lw          $t8, 0x0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X0);
    // 0x80217F4C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80217F50: addu        $t7, $t5, $t4
    ctx->r15 = ADD32(ctx->r13, ctx->r12);
    // 0x80217F54: sw          $t8, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r24;
    // 0x80217F58: lw          $t6, 0x0($s5)
    ctx->r14 = MEM_W(ctx->r21, 0X0);
    // 0x80217F5C: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x80217F60: lw          $t9, 0x0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X0);
    // 0x80217F64: sll         $t3, $t6, 2
    ctx->r11 = S32(ctx->r14 << 2);
    // 0x80217F68: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80217F6C: addu        $t5, $t9, $t3
    ctx->r13 = ADD32(ctx->r25, ctx->r11);
    // 0x80217F70: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80217F74: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80217F78: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x80217F7C: swc1        $f10, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->f10.u32l;
    // 0x80217F80: lw          $t4, 0x0($s5)
    ctx->r12 = MEM_W(ctx->r21, 0X0);
    // 0x80217F84: addiu       $t8, $t4, 0x1
    ctx->r24 = ADD32(ctx->r12, 0X1);
    // 0x80217F88: sw          $t8, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r24;
    // 0x80217F8C: lhu         $t7, 0x0($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X0);
    // 0x80217F90: or          $s4, $t8, $zero
    ctx->r20 = ctx->r24 | 0;
    // 0x80217F94: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x80217F98: slt         $at, $t8, $t7
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80217F9C: bnel        $at, $zero, L_80217FBC
    if (ctx->r1 != 0) {
        // 0x80217FA0: lw          $t3, 0x124($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X124);
            goto L_80217FBC;
    }
    goto skip_18;
    // 0x80217FA0: lw          $t3, 0x124($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X124);
    skip_18:
    // 0x80217FA4: jal         0x80231C58
    // 0x80217FA8: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    static_3_80231C58(rdram, ctx);
        goto after_13;
    // 0x80217FA8: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    after_13:
    // 0x80217FAC: lw          $t6, 0x0($s5)
    ctx->r14 = MEM_W(ctx->r21, 0X0);
    // 0x80217FB0: addiu       $s4, $t6, -0x1
    ctx->r20 = ADD32(ctx->r14, -0X1);
    // 0x80217FB4: sw          $s4, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r20;
    // 0x80217FB8: lw          $t3, 0x124($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X124);
L_80217FBC:
    // 0x80217FBC: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80217FC0: bnel        $t3, $s4, L_802180AC
    if (ctx->r11 != ctx->r20) {
        // 0x80217FC4: lw          $t3, 0x124($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X124);
            goto L_802180AC;
    }
    goto skip_19;
    // 0x80217FC4: lw          $t3, 0x124($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X124);
    skip_19:
    // 0x80217FC8: multu       $s4, $v0
    result = U64(U32(ctx->r20)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80217FCC: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x80217FD0: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x80217FD4: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x80217FD8: lwc1        $f16, 0x20($s7)
    ctx->f16.u32l = MEM_W(ctx->r23, 0X20);
    // 0x80217FDC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80217FE0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80217FE4: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80217FE8: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80217FEC: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x80217FF0: mflo        $t4
    ctx->r12 = lo;
    // 0x80217FF4: addu        $t8, $t5, $t4
    ctx->r24 = ADD32(ctx->r13, ctx->r12);
    // 0x80217FF8: swc1        $f16, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f16.u32l;
    // 0x80217FFC: lw          $t6, 0x0($s5)
    ctx->r14 = MEM_W(ctx->r21, 0X0);
    // 0x80218000: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x80218004: lwc1        $f18, 0x24($s7)
    ctx->f18.u32l = MEM_W(ctx->r23, 0X24);
    // 0x80218008: multu       $t6, $v0
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8021800C: mflo        $t9
    ctx->r25 = lo;
    // 0x80218010: addu        $t3, $t7, $t9
    ctx->r11 = ADD32(ctx->r15, ctx->r25);
    // 0x80218014: swc1        $f18, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->f18.u32l;
    // 0x80218018: lw          $t4, 0x0($s5)
    ctx->r12 = MEM_W(ctx->r21, 0X0);
    // 0x8021801C: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x80218020: lwc1        $f4, 0x28($s7)
    ctx->f4.u32l = MEM_W(ctx->r23, 0X28);
    // 0x80218024: multu       $t4, $v0
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80218028: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x8021802C: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80218030: mflo        $t8
    ctx->r24 = lo;
    // 0x80218034: addu        $t6, $t5, $t8
    ctx->r14 = ADD32(ctx->r13, ctx->r24);
    // 0x80218038: swc1        $f4, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f4.u32l;
    // 0x8021803C: lw          $t3, 0x0($s5)
    ctx->r11 = MEM_W(ctx->r21, 0X0);
    // 0x80218040: lw          $t9, 0x0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X0);
    // 0x80218044: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x80218048: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8021804C: addu        $t5, $t9, $t4
    ctx->r13 = ADD32(ctx->r25, ctx->r12);
    // 0x80218050: sw          $t7, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r15;
    // 0x80218054: lw          $t6, 0x0($s5)
    ctx->r14 = MEM_W(ctx->r21, 0X0);
    // 0x80218058: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x8021805C: lw          $t8, 0x0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X0);
    // 0x80218060: sll         $t3, $t6, 2
    ctx->r11 = S32(ctx->r14 << 2);
    // 0x80218064: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x80218068: addu        $t9, $t8, $t3
    ctx->r25 = ADD32(ctx->r24, ctx->r11);
    // 0x8021806C: swc1        $f6, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f6.u32l;
    // 0x80218070: lw          $t4, 0x0($s5)
    ctx->r12 = MEM_W(ctx->r21, 0X0);
    // 0x80218074: addiu       $t7, $t4, 0x1
    ctx->r15 = ADD32(ctx->r12, 0X1);
    // 0x80218078: sw          $t7, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r15;
    // 0x8021807C: lhu         $t5, 0x0($t5)
    ctx->r13 = MEM_HU(ctx->r13, 0X0);
    // 0x80218080: or          $s4, $t7, $zero
    ctx->r20 = ctx->r15 | 0;
    // 0x80218084: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x80218088: slt         $at, $t7, $t5
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x8021808C: bnel        $at, $zero, L_802180AC
    if (ctx->r1 != 0) {
        // 0x80218090: lw          $t3, 0x124($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X124);
            goto L_802180AC;
    }
    goto skip_20;
    // 0x80218090: lw          $t3, 0x124($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X124);
    skip_20:
    // 0x80218094: jal         0x80231C58
    // 0x80218098: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    static_3_80231C58(rdram, ctx);
        goto after_14;
    // 0x80218098: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    after_14:
    // 0x8021809C: lw          $t6, 0x0($s5)
    ctx->r14 = MEM_W(ctx->r21, 0X0);
    // 0x802180A0: addiu       $s4, $t6, -0x1
    ctx->r20 = ADD32(ctx->r14, -0X1);
    // 0x802180A4: sw          $s4, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r20;
    // 0x802180A8: lw          $t3, 0x124($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X124);
L_802180AC:
    // 0x802180AC: subu        $v0, $s4, $t3
    ctx->r2 = SUB32(ctx->r20, ctx->r11);
    // 0x802180B0: sll         $t9, $v0, 16
    ctx->r25 = S32(ctx->r2 << 16);
    // 0x802180B4: b           L_80218464
    // 0x802180B8: sra         $v0, $t9, 16
    ctx->r2 = S32(SIGNED(ctx->r25) >> 16);
        goto L_80218464;
    // 0x802180B8: sra         $v0, $t9, 16
    ctx->r2 = S32(SIGNED(ctx->r25) >> 16);
L_802180BC:
    // 0x802180BC: lwc1        $f8, 0x134($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X134);
    // 0x802180C0: lwc1        $f10, 0x20($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X20);
    // 0x802180C4: lw          $s3, 0x0($a2)
    ctx->r19 = MEM_W(ctx->r6, 0X0);
    // 0x802180C8: lwc1        $f18, 0x138($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X138);
    // 0x802180CC: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x802180D0: lwc1        $f8, 0x13C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X13C);
    // 0x802180D4: addiu       $v0, $sp, 0xA0
    ctx->r2 = ADD32(ctx->r29, 0XA0);
    // 0x802180D8: addiu       $a0, $sp, 0xE0
    ctx->r4 = ADD32(ctx->r29, 0XE0);
    // 0x802180DC: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x802180E0: lui         $fp, 0xB800
    ctx->r30 = S32(0XB800 << 16);
    // 0x802180E4: lui         $s6, 0x0
    ctx->r22 = S32(0X0 << 16);
    // 0x802180E8: swc1        $f16, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->f16.u32l;
    // 0x802180EC: lwc1        $f4, 0x20($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X20);
    // 0x802180F0: addiu       $s2, $zero, 0xA
    ctx->r18 = ADD32(0, 0XA);
    // 0x802180F4: addiu       $s1, $sp, 0xA0
    ctx->r17 = ADD32(ctx->r29, 0XA0);
    // 0x802180F8: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x802180FC: swc1        $f6, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->f6.u32l;
    // 0x80218100: lwc1        $f10, 0x20($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X20);
    // 0x80218104: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80218108: swc1        $f16, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->f16.u32l;
    // 0x8021810C: lwc1        $f18, 0x20($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X20);
    // 0x80218110: mul.s       $f24, $f24, $f18
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f24.fl = MUL_S(ctx->f24.fl, ctx->f18.fl);
    // 0x80218114: nop

L_80218118:
    // 0x80218118: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8021811C: sltu        $at, $v0, $a0
    ctx->r1 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x80218120: bne         $at, $zero, L_80218118
    if (ctx->r1 != 0) {
        // 0x80218124: sw          $v1, -0x4($v0)
        MEM_W(-0X4, ctx->r2) = ctx->r3;
            goto L_80218118;
    }
    // 0x80218124: sw          $v1, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->r3;
    // 0x80218128: lbu         $t7, 0x4($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X4);
    // 0x8021812C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80218130: blezl       $t7, L_80218454
    if (SIGNED(ctx->r15) <= 0) {
        // 0x80218134: lw          $t5, 0x0($s5)
        ctx->r13 = MEM_W(ctx->r21, 0X0);
            goto L_80218454;
    }
    goto skip_21;
    // 0x80218134: lw          $t5, 0x0($s5)
    ctx->r13 = MEM_W(ctx->r21, 0X0);
    skip_21:
    // 0x80218138: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x8021813C: sw          $zero, 0x94($sp)
    MEM_W(0X94, ctx->r29) = 0;
L_80218140:
    // 0x80218140: lw          $a1, 0x194($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X194);
    // 0x80218144: lw          $t6, 0x94($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X94);
    // 0x80218148: lw          $a2, 0x198($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X198);
    // 0x8021814C: lw          $t5, 0x0($a1)
    ctx->r13 = MEM_W(ctx->r5, 0X0);
    // 0x80218150: addu        $t8, $t5, $t6
    ctx->r24 = ADD32(ctx->r13, ctx->r14);
    // 0x80218154: lw          $s0, 0xC($t8)
    ctx->r16 = MEM_W(ctx->r24, 0XC);
    // 0x80218158: or          $s0, $s0, $s6
    ctx->r16 = ctx->r16 | ctx->r22;
L_8021815C:
    // 0x8021815C: lw          $a3, 0x0($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X0);
    // 0x80218160: lui         $at, 0xFF00
    ctx->r1 = S32(0XFF00 << 16);
    // 0x80218164: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x80218168: and         $v0, $a3, $at
    ctx->r2 = ctx->r7 & ctx->r1;
    // 0x8021816C: bne         $fp, $v0, L_8021818C
    if (ctx->r30 != ctx->r2) {
        // 0x80218170: lui         $at, 0x400
        ctx->r1 = S32(0X400 << 16);
            goto L_8021818C;
    }
    // 0x80218170: lui         $at, 0x400
    ctx->r1 = S32(0X400 << 16);
    // 0x80218174: lw          $t3, 0x194($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X194);
    // 0x80218178: lw          $t8, 0x94($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X94);
    // 0x8021817C: lbu         $v0, 0x4($t3)
    ctx->r2 = MEM_BU(ctx->r11, 0X4);
    // 0x80218180: addiu       $t6, $t8, 0x10
    ctx->r14 = ADD32(ctx->r24, 0X10);
    // 0x80218184: b           L_80218444
    // 0x80218188: sll         $v1, $v0, 4
    ctx->r3 = S32(ctx->r2 << 4);
        goto L_80218444;
    // 0x80218188: sll         $v1, $v0, 4
    ctx->r3 = S32(ctx->r2 << 4);
L_8021818C:
    // 0x8021818C: bne         $v0, $at, L_8021820C
    if (ctx->r2 != ctx->r1) {
        // 0x80218190: andi        $t4, $a1, 0xFF00
        ctx->r12 = ctx->r5 & 0XFF00;
            goto L_8021820C;
    }
    // 0x80218190: andi        $t4, $a1, 0xFF00
    ctx->r12 = ctx->r5 & 0XFF00;
    // 0x80218194: lw          $t9, 0x198($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X198);
    // 0x80218198: lui         $at, 0xF0
    ctx->r1 = S32(0XF0 << 16);
    // 0x8021819C: and         $v0, $a3, $at
    ctx->r2 = ctx->r7 & ctx->r1;
    // 0x802181A0: lw          $t4, 0x0($t9)
    ctx->r12 = MEM_W(ctx->r25, 0X0);
    // 0x802181A4: srl         $t6, $v0, 20
    ctx->r14 = S32(U32(ctx->r2) >> 20);
    // 0x802181A8: addiu       $a0, $t6, 0x1
    ctx->r4 = ADD32(ctx->r14, 0X1);
    // 0x802181AC: subu        $t7, $a1, $t4
    ctx->r15 = SUB32(ctx->r5, ctx->r12);
    // 0x802181B0: addu        $t0, $t7, $s6
    ctx->r8 = ADD32(ctx->r15, ctx->r22);
    // 0x802181B4: srl         $t5, $t0, 4
    ctx->r13 = S32(U32(ctx->r8) >> 4);
    // 0x802181B8: or          $t0, $t5, $zero
    ctx->r8 = ctx->r13 | 0;
    // 0x802181BC: blez        $a0, L_8021843C
    if (SIGNED(ctx->r4) <= 0) {
        // 0x802181C0: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_8021843C;
    }
    // 0x802181C0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x802181C4: lui         $at, 0xF
    ctx->r1 = S32(0XF << 16);
    // 0x802181C8: and         $a2, $a3, $at
    ctx->r6 = ctx->r7 & ctx->r1;
    // 0x802181CC: srl         $t9, $a2, 16
    ctx->r25 = S32(U32(ctx->r6) >> 16);
    // 0x802181D0: addiu       $t8, $sp, 0xA0
    ctx->r24 = ADD32(ctx->r29, 0XA0);
    // 0x802181D4: sll         $t4, $t9, 2
    ctx->r12 = S32(ctx->r25 << 2);
    // 0x802181D8: sll         $t3, $a0, 2
    ctx->r11 = S32(ctx->r4 << 2);
    // 0x802181DC: addu        $a1, $t3, $t8
    ctx->r5 = ADD32(ctx->r11, ctx->r24);
    // 0x802181E0: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    // 0x802181E4: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x802181E8: or          $v1, $t5, $zero
    ctx->r3 = ctx->r13 | 0;
L_802181EC:
    // 0x802181EC: addu        $t7, $v0, $a2
    ctx->r15 = ADD32(ctx->r2, ctx->r6);
    // 0x802181F0: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x802181F4: sltu        $at, $v0, $a1
    ctx->r1 = ctx->r2 < ctx->r5 ? 1 : 0;
    // 0x802181F8: sw          $v1, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r3;
    // 0x802181FC: bne         $at, $zero, L_802181EC
    if (ctx->r1 != 0) {
        // 0x80218200: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_802181EC;
    }
    // 0x80218200: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80218204: b           L_8021815C
    // 0x80218208: addiu       $s0, $s0, 0x0
    ctx->r16 = ADD32(ctx->r16, 0X0);
        goto L_8021815C;
    // 0x80218208: addiu       $s0, $s0, 0x0
    ctx->r16 = ADD32(ctx->r16, 0X0);
L_8021820C:
    // 0x8021820C: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x80218210: and         $t5, $a1, $at
    ctx->r13 = ctx->r5 & ctx->r1;
    // 0x80218214: divu        $zero, $t5, $s2
    lo = S32(U32(ctx->r13) / U32(ctx->r18)); hi = S32(U32(ctx->r13) % U32(ctx->r18));
    // 0x80218218: mflo        $t6
    ctx->r14 = lo;
    // 0x8021821C: srl         $t3, $t6, 16
    ctx->r11 = S32(U32(ctx->r14) >> 16);
    // 0x80218220: sll         $t8, $t3, 2
    ctx->r24 = S32(ctx->r11 << 2);
    // 0x80218224: divu        $zero, $t4, $s2
    lo = S32(U32(ctx->r12) / U32(ctx->r18)); hi = S32(U32(ctx->r12) % U32(ctx->r18));
    // 0x80218228: mflo        $t7
    ctx->r15 = lo;
    // 0x8021822C: addu        $t9, $s1, $t8
    ctx->r25 = ADD32(ctx->r17, ctx->r24);
    // 0x80218230: andi        $t8, $a1, 0xFF
    ctx->r24 = ctx->r5 & 0XFF;
    // 0x80218234: divu        $zero, $t8, $s2
    lo = S32(U32(ctx->r24) / U32(ctx->r18)); hi = S32(U32(ctx->r24) % U32(ctx->r18));
    // 0x80218238: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x8021823C: srl         $t5, $t7, 8
    ctx->r13 = S32(U32(ctx->r15) >> 8);
    // 0x80218240: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80218244: sll         $t5, $t0, 4
    ctx->r13 = S32(ctx->r8 << 4);
    // 0x80218248: addu        $t3, $s1, $t6
    ctx->r11 = ADD32(ctx->r17, ctx->r14);
    // 0x8021824C: addu        $v0, $s3, $t5
    ctx->r2 = ADD32(ctx->r19, ctx->r13);
    // 0x80218250: lh          $t6, 0x0($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X0);
    // 0x80218254: mflo        $t9
    ctx->r25 = lo;
    // 0x80218258: sll         $t4, $t9, 2
    ctx->r12 = S32(ctx->r25 << 2);
    // 0x8021825C: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80218260: addu        $t7, $s1, $t4
    ctx->r15 = ADD32(ctx->r17, ctx->r12);
    // 0x80218264: lw          $t1, 0x0($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X0);
    // 0x80218268: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8021826C: lw          $t2, 0x0($t7)
    ctx->r10 = MEM_W(ctx->r15, 0X0);
    // 0x80218270: sll         $t9, $t1, 4
    ctx->r25 = S32(ctx->r9 << 4);
    // 0x80218274: addu        $v1, $s3, $t9
    ctx->r3 = ADD32(ctx->r19, ctx->r25);
    // 0x80218278: sll         $t6, $t2, 4
    ctx->r14 = S32(ctx->r10 << 4);
    // 0x8021827C: addu        $a0, $s3, $t6
    ctx->r4 = ADD32(ctx->r19, ctx->r14);
    // 0x80218280: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80218284: lh          $t3, 0x2($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X2);
    // 0x80218288: lw          $s4, 0x0($s5)
    ctx->r20 = MEM_W(ctx->r21, 0X0);
    // 0x8021828C: bne         $s2, $zero, L_80218298
    if (ctx->r18 != 0) {
        // 0x80218290: nop
    
            goto L_80218298;
    }
    // 0x80218290: nop

    // 0x80218294: break       7
    do_break(2149679764);
L_80218298:
    // 0x80218298: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x8021829C: sll         $t6, $s4, 2
    ctx->r14 = S32(ctx->r20 << 2);
    // 0x802182A0: bne         $s2, $zero, L_802182AC
    if (ctx->r18 != 0) {
        // 0x802182A4: nop
    
            goto L_802182AC;
    }
    // 0x802182A4: nop

    // 0x802182A8: break       7
    do_break(2149679784);
L_802182AC:
    // 0x802182AC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802182B0: bne         $s2, $zero, L_802182BC
    if (ctx->r18 != 0) {
        // 0x802182B4: nop
    
            goto L_802182BC;
    }
    // 0x802182B4: nop

    // 0x802182B8: break       7
    do_break(2149679800);
L_802182BC:
    // 0x802182BC: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x802182C0: lh          $t8, 0x4($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X4);
    // 0x802182C4: mfc1        $a3, $f24
    ctx->r7 = (int32_t)ctx->f24.u32l;
    // 0x802182C8: lwc1        $f12, 0x134($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X134);
    // 0x802182CC: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x802182D0: lwc1        $f14, 0x138($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X138);
    // 0x802182D4: lw          $a2, 0x13C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X13C);
    // 0x802182D8: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x802182DC: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x802182E0: lh          $t4, 0x0($v1)
    ctx->r12 = MEM_H(ctx->r3, 0X0);
    // 0x802182E4: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x802182E8: sll         $t4, $s4, 2
    ctx->r12 = S32(ctx->r20 << 2);
    // 0x802182EC: subu        $t4, $t4, $s4
    ctx->r12 = SUB32(ctx->r12, ctx->r20);
    // 0x802182F0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802182F4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x802182F8: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x802182FC: lh          $t7, 0x2($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X2);
    // 0x80218300: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x80218304: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80218308: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x8021830C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80218310: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x80218314: lh          $t5, 0x4($v1)
    ctx->r13 = MEM_H(ctx->r3, 0X4);
    // 0x80218318: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x8021831C: addu        $t5, $t4, $t7
    ctx->r13 = ADD32(ctx->r12, ctx->r15);
    // 0x80218320: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80218324: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    // 0x80218328: lh          $t3, 0x0($a0)
    ctx->r11 = MEM_H(ctx->r4, 0X0);
    // 0x8021832C: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x80218330: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x80218334: lw          $t3, 0x0($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X0);
    // 0x80218338: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8021833C: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    // 0x80218340: lh          $t8, 0x2($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X2);
    // 0x80218344: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x80218348: addu        $t8, $t6, $t3
    ctx->r24 = ADD32(ctx->r14, ctx->r11);
    // 0x8021834C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80218350: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x80218354: lh          $t9, 0x4($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X4);
    // 0x80218358: sw          $t8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r24;
    // 0x8021835C: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
    // 0x80218360: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x80218364: nop

    // 0x80218368: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8021836C: jal         0x80213020
    // 0x80218370: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    static_3_80213020(rdram, ctx);
        goto after_15;
    // 0x80218370: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    after_15:
    // 0x80218374: beq         $v0, $zero, L_8021843C
    if (ctx->r2 == 0) {
        // 0x80218378: nop
    
            goto L_8021843C;
    }
    // 0x80218378: nop

    // 0x8021837C: swc1        $f22, 0x30($s7)
    MEM_W(0X30, ctx->r23) = ctx->f22.u32l;
    // 0x80218380: swc1        $f22, 0x34($s7)
    MEM_W(0X34, ctx->r23) = ctx->f22.u32l;
    // 0x80218384: swc1        $f22, 0x38($s7)
    MEM_W(0X38, ctx->r23) = ctx->f22.u32l;
    // 0x80218388: lw          $t9, 0x0($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X0);
    // 0x8021838C: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80218390: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x80218394: sll         $t4, $t9, 2
    ctx->r12 = S32(ctx->r25 << 2);
    // 0x80218398: subu        $t4, $t4, $t9
    ctx->r12 = SUB32(ctx->r12, ctx->r25);
    // 0x8021839C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x802183A0: addu        $a1, $t4, $t7
    ctx->r5 = ADD32(ctx->r12, ctx->r15);
    // 0x802183A4: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x802183A8: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x802183AC: jal         0x8022A4F4
    // 0x802183B0: neg.s       $f20, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f20.fl = -ctx->f24.fl;
    static_3_8022A4F4(rdram, ctx);
        goto after_16;
    // 0x802183B0: neg.s       $f20, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f20.fl = -ctx->f24.fl;
    after_16:
    // 0x802183B4: lw          $t6, 0x0($s5)
    ctx->r14 = MEM_W(ctx->r21, 0X0);
    // 0x802183B8: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x802183BC: lw          $t5, 0x0($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X0);
    // 0x802183C0: sll         $t3, $t6, 2
    ctx->r11 = S32(ctx->r14 << 2);
    // 0x802183C4: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x802183C8: addu        $v0, $t5, $t3
    ctx->r2 = ADD32(ctx->r13, ctx->r11);
    // 0x802183CC: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x802183D0: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x802183D4: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802183D8: div.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f20.fl);
    // 0x802183DC: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802183E0: swc1        $f6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f6.u32l;
    // 0x802183E4: lw          $t4, 0x0($s5)
    ctx->r12 = MEM_W(ctx->r21, 0X0);
    // 0x802183E8: lw          $t9, 0x0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X0);
    // 0x802183EC: lw          $t8, 0x0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X0);
    // 0x802183F0: sll         $t7, $t4, 2
    ctx->r15 = S32(ctx->r12 << 2);
    // 0x802183F4: addu        $t6, $t9, $t7
    ctx->r14 = ADD32(ctx->r25, ctx->r15);
    // 0x802183F8: sw          $t8, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r24;
    // 0x802183FC: lw          $t5, 0x0($s5)
    ctx->r13 = MEM_W(ctx->r21, 0X0);
    // 0x80218400: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x80218404: addiu       $t3, $t5, 0x1
    ctx->r11 = ADD32(ctx->r13, 0X1);
    // 0x80218408: sw          $t3, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r11;
    // 0x8021840C: lhu         $t4, 0x0($t4)
    ctx->r12 = MEM_HU(ctx->r12, 0X0);
    // 0x80218410: or          $s4, $t3, $zero
    ctx->r20 = ctx->r11 | 0;
    // 0x80218414: slt         $at, $t3, $t4
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x80218418: bne         $at, $zero, L_8021843C
    if (ctx->r1 != 0) {
        // 0x8021841C: nop
    
            goto L_8021843C;
    }
    // 0x8021841C: nop

    // 0x80218420: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x80218424: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x80218428: jal         0x80231C58
    // 0x8021842C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    static_3_80231C58(rdram, ctx);
        goto after_17;
    // 0x8021842C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_17:
    // 0x80218430: lw          $t9, 0x0($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X0);
    // 0x80218434: addiu       $t7, $t9, -0x1
    ctx->r15 = ADD32(ctx->r25, -0X1);
    // 0x80218438: sw          $t7, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r15;
L_8021843C:
    // 0x8021843C: b           L_8021815C
    // 0x80218440: addiu       $s0, $s0, 0x0
    ctx->r16 = ADD32(ctx->r16, 0X0);
        goto L_8021815C;
    // 0x80218440: addiu       $s0, $s0, 0x0
    ctx->r16 = ADD32(ctx->r16, 0X0);
L_80218444:
    // 0x80218444: slt         $at, $t6, $v1
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80218448: bne         $at, $zero, L_80218140
    if (ctx->r1 != 0) {
        // 0x8021844C: sw          $t6, 0x94($sp)
        MEM_W(0X94, ctx->r29) = ctx->r14;
            goto L_80218140;
    }
    // 0x8021844C: sw          $t6, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r14;
    // 0x80218450: lw          $t5, 0x0($s5)
    ctx->r13 = MEM_W(ctx->r21, 0X0);
L_80218454:
    // 0x80218454: lw          $t3, 0x124($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X124);
    // 0x80218458: subu        $v0, $t5, $t3
    ctx->r2 = SUB32(ctx->r13, ctx->r11);
    // 0x8021845C: sll         $t4, $v0, 16
    ctx->r12 = S32(ctx->r2 << 16);
    // 0x80218460: sra         $v0, $t4, 16
    ctx->r2 = S32(SIGNED(ctx->r12) >> 16);
L_80218464:
    // 0x80218464: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
    // 0x80218468: ldc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X48);
    // 0x8021846C: ldc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X50);
    // 0x80218470: ldc1        $f24, 0x58($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X58);
    // 0x80218474: lw          $s0, 0x60($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X60);
    // 0x80218478: lw          $s1, 0x64($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X64);
    // 0x8021847C: lw          $s2, 0x68($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X68);
    // 0x80218480: lw          $s3, 0x6C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X6C);
    // 0x80218484: lw          $s4, 0x70($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X70);
    // 0x80218488: lw          $s5, 0x74($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X74);
    // 0x8021848C: lw          $s6, 0x78($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X78);
    // 0x80218490: lw          $s7, 0x7C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X7C);
    // 0x80218494: lw          $fp, 0x80($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X80);
    // 0x80218498: jr          $ra
    // 0x8021849C: addiu       $sp, $sp, 0x180
    ctx->r29 = ADD32(ctx->r29, 0X180);
    return;
    // 0x8021849C: addiu       $sp, $sp, 0x180
    ctx->r29 = ADD32(ctx->r29, 0X180);
;}
RECOMP_FUNC void D_802376E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802376E0: jr          $ra
    // 0x802376E4: nop

    return;
    // 0x802376E4: nop

;}
RECOMP_FUNC void D_80207058(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80207058: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020705C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80207060: jal         0x80238B80
    // 0x80207064: nop

    static_3_80238B80(rdram, ctx);
        goto after_0;
    // 0x80207064: nop

    after_0:
    // 0x80207068: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020706C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80207070: sw          $v0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r2;
    // 0x80207074: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80207078: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
    // 0x8020707C: jr          $ra
    // 0x80207080: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80207080: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void D_802EA6F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EA770: jr          $ra
    // 0x802EA774: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x802EA774: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void D_802A4958(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A49D8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802A49DC: jr          $ra
    // 0x802A49E0: swc1        $f12, 0x1B0($a0)
    MEM_W(0X1B0, ctx->r4) = ctx->f12.u32l;
    return;
    // 0x802A49E0: swc1        $f12, 0x1B0($a0)
    MEM_W(0X1B0, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void D_802A1E08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A1E88: lwc1        $f4, 0x7C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X7C);
    // 0x802A1E8C: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x802A1E90: lwc1        $f6, 0x80($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X80);
    // 0x802A1E94: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
    // 0x802A1E98: lwc1        $f8, 0x84($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X84);
    // 0x802A1E9C: jr          $ra
    // 0x802A1EA0: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
    return;
    // 0x802A1EA0: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
;}
RECOMP_FUNC void D_802BAA5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802BAADC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802BAAE0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802BAAE4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802BAAE8: jal         0x80233CE8
    // 0x802BAAEC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    static_3_80233CE8(rdram, ctx);
        goto after_0;
    // 0x802BAAEC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x802BAAF0: jal         0x80233CE8
    // 0x802BAAF4: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    static_3_80233CE8(rdram, ctx);
        goto after_1;
    // 0x802BAAF4: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    after_1:
    // 0x802BAAF8: jal         0x80233CE8
    // 0x802BAAFC: sw          $v0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r2;
    static_3_80233CE8(rdram, ctx);
        goto after_2;
    // 0x802BAAFC: sw          $v0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r2;
    after_2:
    // 0x802BAB00: jal         0x80233CE8
    // 0x802BAB04: sw          $v0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r2;
    static_3_80233CE8(rdram, ctx);
        goto after_3;
    // 0x802BAB04: sw          $v0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r2;
    after_3:
    // 0x802BAB08: jal         0x80233CE8
    // 0x802BAB0C: sw          $v0, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r2;
    static_3_80233CE8(rdram, ctx);
        goto after_4;
    // 0x802BAB0C: sw          $v0, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r2;
    after_4:
    // 0x802BAB10: jal         0x80233CE8
    // 0x802BAB14: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
    static_3_80233CE8(rdram, ctx);
        goto after_5;
    // 0x802BAB14: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
    after_5:
    // 0x802BAB18: jal         0x80233CE8
    // 0x802BAB1C: sw          $v0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r2;
    static_3_80233CE8(rdram, ctx);
        goto after_6;
    // 0x802BAB1C: sw          $v0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r2;
    after_6:
    // 0x802BAB20: jal         0x80233CE8
    // 0x802BAB24: sw          $v0, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r2;
    static_3_80233CE8(rdram, ctx);
        goto after_7;
    // 0x802BAB24: sw          $v0, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r2;
    after_7:
    // 0x802BAB28: jal         0x80233CE8
    // 0x802BAB2C: sw          $v0, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->r2;
    static_3_80233CE8(rdram, ctx);
        goto after_8;
    // 0x802BAB2C: sw          $v0, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->r2;
    after_8:
    // 0x802BAB30: jal         0x80233CE8
    // 0x802BAB34: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    static_3_80233CE8(rdram, ctx);
        goto after_9;
    // 0x802BAB34: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    after_9:
    // 0x802BAB38: jal         0x80233CE8
    // 0x802BAB3C: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    static_3_80233CE8(rdram, ctx);
        goto after_10;
    // 0x802BAB3C: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    after_10:
    // 0x802BAB40: jal         0x80233CE8
    // 0x802BAB44: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    static_3_80233CE8(rdram, ctx);
        goto after_11;
    // 0x802BAB44: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    after_11:
    // 0x802BAB48: jal         0x80233CE8
    // 0x802BAB4C: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    static_3_80233CE8(rdram, ctx);
        goto after_12;
    // 0x802BAB4C: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    after_12:
    // 0x802BAB50: jal         0x80233CE8
    // 0x802BAB54: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    static_3_80233CE8(rdram, ctx);
        goto after_13;
    // 0x802BAB54: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    after_13:
    // 0x802BAB58: jal         0x80233CE8
    // 0x802BAB5C: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    static_3_80233CE8(rdram, ctx);
        goto after_14;
    // 0x802BAB5C: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    after_14:
    // 0x802BAB60: jal         0x80233CE8
    // 0x802BAB64: sw          $v0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r2;
    static_3_80233CE8(rdram, ctx);
        goto after_15;
    // 0x802BAB64: sw          $v0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r2;
    after_15:
    // 0x802BAB68: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x802BAB6C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802BAB70: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802BAB74: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802BAB78: jr          $ra
    // 0x802BAB7C: nop

    return;
    // 0x802BAB7C: nop

;}
RECOMP_FUNC void D_8029D0B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029D138: jr          $ra
    // 0x8029D13C: lbu         $v0, 0x85($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X85);
    return;
    // 0x8029D13C: lbu         $v0, 0x85($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X85);
;}
RECOMP_FUNC void D_80235900(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80235900: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80235904: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80235908: lw          $t6, 0x2C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X2C);
    // 0x8023590C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80235910: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80235914: bnel        $t6, $at, L_80235964
    if (ctx->r14 != ctx->r1) {
        // 0x80235918: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80235964;
    }
    goto skip_0;
    // 0x80235918: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8023591C: lw          $a0, 0x18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X18);
    // 0x80235920: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x80235924: beql        $a0, $zero, L_80235964
    if (ctx->r4 == 0) {
        // 0x80235928: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80235964;
    }
    goto skip_1;
    // 0x80235928: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x8023592C: jal         0x802388BC
    // 0x80235930: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    static_3_802388BC(rdram, ctx);
        goto after_0;
    // 0x80235930: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    after_0:
    // 0x80235934: beq         $v0, $zero, L_80235960
    if (ctx->r2 == 0) {
        // 0x80235938: lw          $a3, 0x30($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X30);
            goto L_80235960;
    }
    // 0x80235938: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x8023593C: sh          $zero, 0x20($sp)
    MEM_H(0X20, ctx->r29) = 0;
    // 0x80235940: lw          $t7, 0x24($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X24);
    // 0x80235944: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80235948: addiu       $a0, $a3, 0x48
    ctx->r4 = ADD32(ctx->r7, 0X48);
    // 0x8023594C: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80235950: multu       $t7, $t8
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80235954: mflo        $a2
    ctx->r6 = lo;
    // 0x80235958: jal         0x8023F37C
    // 0x8023595C: nop

    static_3_8023F37C(rdram, ctx);
        goto after_1;
    // 0x8023595C: nop

    after_1:
L_80235960:
    // 0x80235960: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80235964:
    // 0x80235964: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80235968: jr          $ra
    // 0x8023596C: nop

    return;
    // 0x8023596C: nop

;}
RECOMP_FUNC void D_802AA2B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AA334: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802AA338: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802AA33C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x802AA340: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x802AA344: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x802AA348: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x802AA34C: lbu         $t6, 0x0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X0);
    // 0x802AA350: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x802AA354: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x802AA358: blez        $t6, L_802AA390
    if (SIGNED(ctx->r14) <= 0) {
        // 0x802AA35C: sll         $t7, $s1, 3
        ctx->r15 = S32(ctx->r17 << 3);
            goto L_802AA390;
    }
L_802AA35C:
    // 0x802AA35C: sll         $t7, $s1, 3
    ctx->r15 = S32(ctx->r17 << 3);
    // 0x802AA360: addu        $t7, $t7, $s1
    ctx->r15 = ADD32(ctx->r15, ctx->r17);
    // 0x802AA364: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x802AA368: addu        $s0, $s2, $t7
    ctx->r16 = ADD32(ctx->r18, ctx->r15);
    // 0x802AA36C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802AA370: jal         0x802DA1EC
    // 0x802AA374: sb          $zero, 0x24($a0)
    MEM_B(0X24, ctx->r4) = 0;
    static_3_802DA1EC(rdram, ctx);
        goto after_0;
    // 0x802AA374: sb          $zero, 0x24($a0)
    MEM_B(0X24, ctx->r4) = 0;
    after_0:
    // 0x802AA378: lbu         $t9, 0x0($s2)
    ctx->r25 = MEM_BU(ctx->r18, 0X0);
    // 0x802AA37C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x802AA380: andi        $t8, $s1, 0xFF
    ctx->r24 = ctx->r17 & 0XFF;
    // 0x802AA384: slt         $at, $t8, $t9
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x802AA388: bne         $at, $zero, L_802AA35C
    if (ctx->r1 != 0) {
        // 0x802AA38C: or          $s1, $t8, $zero
        ctx->r17 = ctx->r24 | 0;
            goto L_802AA35C;
    }
    // 0x802AA38C: or          $s1, $t8, $zero
    ctx->r17 = ctx->r24 | 0;
L_802AA390:
    // 0x802AA390: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802AA394: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x802AA398: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x802AA39C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x802AA3A0: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x802AA3A4: jr          $ra
    // 0x802AA3A8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x802AA3A8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void D_802CF578(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802CF5F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802CF5FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802CF600: bne         $a0, $zero, L_802CF618
    if (ctx->r4 != 0) {
        // 0x802CF604: or          $a1, $a0, $zero
        ctx->r5 = ctx->r4 | 0;
            goto L_802CF618;
    }
    // 0x802CF604: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x802CF608: jal         0x802C67EC
    // 0x802CF60C: addiu       $a0, $zero, 0x3A4
    ctx->r4 = ADD32(0, 0X3A4);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802CF60C: addiu       $a0, $zero, 0x3A4
    ctx->r4 = ADD32(0, 0X3A4);
    after_0:
    // 0x802CF610: beq         $v0, $zero, L_802CF640
    if (ctx->r2 == 0) {
        // 0x802CF614: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_802CF640;
    }
    // 0x802CF614: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_802CF618:
    // 0x802CF618: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x802CF61C: jal         0x80317344
    // 0x802CF620: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    static_3_80317344(rdram, ctx);
        goto after_1;
    // 0x802CF620: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_1:
    // 0x802CF624: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x802CF628: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802CF62C: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802CF630: sw          $t6, 0x1A0($a1)
    MEM_W(0X1A0, ctx->r5) = ctx->r14;
    // 0x802CF634: jal         0x802D4800
    // 0x802CF638: addiu       $a0, $a1, 0x1A4
    ctx->r4 = ADD32(ctx->r5, 0X1A4);
    static_3_802D4800(rdram, ctx);
        goto after_2;
    // 0x802CF638: addiu       $a0, $a1, 0x1A4
    ctx->r4 = ADD32(ctx->r5, 0X1A4);
    after_2:
    // 0x802CF63C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
L_802CF640:
    // 0x802CF640: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802CF644: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802CF648: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x802CF64C: jr          $ra
    // 0x802CF650: nop

    return;
    // 0x802CF650: nop

;}
RECOMP_FUNC void D_8029DCA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029DD24: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8029DD28: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8029DD2C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8029DD30: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8029DD34: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x8029DD38: jal         0x8022331C
    // 0x8029DD3C: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    static_3_8022331C(rdram, ctx);
        goto after_0;
    // 0x8029DD3C: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    after_0:
    // 0x8029DD40: jal         0x8022342C
    // 0x8029DD44: lui         $a0, 0x40
    ctx->r4 = S32(0X40 << 16);
    static_3_8022342C(rdram, ctx);
        goto after_1;
    // 0x8029DD44: lui         $a0, 0x40
    ctx->r4 = S32(0X40 << 16);
    after_1:
    // 0x8029DD48: jal         0x8021F4E4
    // 0x8029DD4C: nop

    static_3_8021F4E4(rdram, ctx);
        goto after_2;
    // 0x8029DD4C: nop

    after_2:
    // 0x8029DD50: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x8029DD54: lw          $t7, 0x68($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X68);
    // 0x8029DD58: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x8029DD5C: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x8029DD60: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x8029DD64: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x8029DD68: subu        $a1, $t6, $t7
    ctx->r5 = SUB32(ctx->r14, ctx->r15);
    // 0x8029DD6C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8029DD70: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8029DD74: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8029DD78: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8029DD7C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8029DD80: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x8029DD84: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x8029DD88: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x8029DD8C: jal         0x8021F35C
    // 0x8029DD90: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    static_3_8021F35C(rdram, ctx);
        goto after_3;
    // 0x8029DD90: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    after_3:
    // 0x8029DD94: lw          $t2, 0x48($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X48);
    // 0x8029DD98: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x8029DD9C: lw          $t4, 0x50($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X50);
    // 0x8029DDA0: lw          $t5, 0x54($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X54);
    // 0x8029DDA4: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x8029DDA8: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x8029DDAC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8029DDB0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8029DDB4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8029DDB8: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x8029DDBC: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x8029DDC0: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x8029DDC4: jal         0x8021F35C
    // 0x8029DDC8: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    static_3_8021F35C(rdram, ctx);
        goto after_4;
    // 0x8029DDC8: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    after_4:
    // 0x8029DDCC: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x8029DDD0: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x8029DDD4: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x8029DDD8: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x8029DDDC: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x8029DDE0: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x8029DDE4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8029DDE8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8029DDEC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8029DDF0: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x8029DDF4: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x8029DDF8: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x8029DDFC: jal         0x8021F35C
    // 0x8029DE00: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    static_3_8021F35C(rdram, ctx);
        goto after_5;
    // 0x8029DE00: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    after_5:
    // 0x8029DE04: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x8029DE08: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x8029DE0C: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x8029DE10: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
    // 0x8029DE14: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8029DE18: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x8029DE1C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8029DE20: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8029DE24: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8029DE28: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x8029DE2C: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x8029DE30: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x8029DE34: jal         0x8021F35C
    // 0x8029DE38: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    static_3_8021F35C(rdram, ctx);
        goto after_6;
    // 0x8029DE38: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    after_6:
    // 0x8029DE3C: jal         0x8021FCD0
    // 0x8029DE40: nop

    static_3_8021FCD0(rdram, ctx);
        goto after_7;
    // 0x8029DE40: nop

    after_7:
    // 0x8029DE44: jal         0x8021F4E4
    // 0x8029DE48: nop

    static_3_8021F4E4(rdram, ctx);
        goto after_8;
    // 0x8029DE48: nop

    after_8:
    // 0x8029DE4C: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x8029DE50: lw          $t5, 0x68($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X68);
    // 0x8029DE54: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x8029DE58: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x8029DE5C: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x8029DE60: lw          $t9, 0x64($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X64);
    // 0x8029DE64: subu        $a0, $t4, $t5
    ctx->r4 = SUB32(ctx->r12, ctx->r13);
    // 0x8029DE68: sw          $a0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r4;
    // 0x8029DE6C: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x8029DE70: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8029DE74: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8029DE78: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8029DE7C: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x8029DE80: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x8029DE84: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x8029DE88: jal         0x8021F35C
    // 0x8029DE8C: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    static_3_8021F35C(rdram, ctx);
        goto after_9;
    // 0x8029DE8C: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    after_9:
    // 0x8029DE90: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x8029DE94: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x8029DE98: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
    // 0x8029DE9C: lw          $t3, 0x64($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X64);
    // 0x8029DEA0: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x8029DEA4: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x8029DEA8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8029DEAC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8029DEB0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8029DEB4: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x8029DEB8: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x8029DEBC: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x8029DEC0: jal         0x8021F35C
    // 0x8029DEC4: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    static_3_8021F35C(rdram, ctx);
        goto after_10;
    // 0x8029DEC4: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    after_10:
    // 0x8029DEC8: lw          $t4, 0x58($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X58);
    // 0x8029DECC: lw          $t5, 0x5C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X5C);
    // 0x8029DED0: lw          $t6, 0x60($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X60);
    // 0x8029DED4: lw          $t7, 0x64($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X64);
    // 0x8029DED8: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x8029DEDC: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x8029DEE0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8029DEE4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8029DEE8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8029DEEC: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x8029DEF0: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x8029DEF4: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x8029DEF8: jal         0x8021F35C
    // 0x8029DEFC: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    static_3_8021F35C(rdram, ctx);
        goto after_11;
    // 0x8029DEFC: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    after_11:
    // 0x8029DF00: lw          $t8, 0x58($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X58);
    // 0x8029DF04: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x8029DF08: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x8029DF0C: lw          $t1, 0x64($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X64);
    // 0x8029DF10: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8029DF14: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x8029DF18: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8029DF1C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8029DF20: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8029DF24: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x8029DF28: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x8029DF2C: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x8029DF30: jal         0x8021F35C
    // 0x8029DF34: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    static_3_8021F35C(rdram, ctx);
        goto after_12;
    // 0x8029DF34: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    after_12:
    // 0x8029DF38: jal         0x8021FCD0
    // 0x8029DF3C: nop

    static_3_8021FCD0(rdram, ctx);
        goto after_13;
    // 0x8029DF3C: nop

    after_13:
    // 0x8029DF40: jal         0x8021F4E4
    // 0x8029DF44: nop

    static_3_8021F4E4(rdram, ctx);
        goto after_14;
    // 0x8029DF44: nop

    after_14:
    // 0x8029DF48: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x8029DF4C: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x8029DF50: lw          $t4, 0x60($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X60);
    // 0x8029DF54: lw          $t5, 0x64($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X64);
    // 0x8029DF58: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8029DF5C: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x8029DF60: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8029DF64: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8029DF68: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8029DF6C: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x8029DF70: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x8029DF74: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x8029DF78: jal         0x8021F35C
    // 0x8029DF7C: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    static_3_8021F35C(rdram, ctx);
        goto after_15;
    // 0x8029DF7C: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    after_15:
    // 0x8029DF80: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x8029DF84: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x8029DF88: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x8029DF8C: lw          $t9, 0x64($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X64);
    // 0x8029DF90: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x8029DF94: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x8029DF98: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8029DF9C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8029DFA0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8029DFA4: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x8029DFA8: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x8029DFAC: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x8029DFB0: jal         0x8021F35C
    // 0x8029DFB4: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    static_3_8021F35C(rdram, ctx);
        goto after_16;
    // 0x8029DFB4: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    after_16:
    // 0x8029DFB8: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x8029DFBC: lw          $t1, 0x68($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X68);
    // 0x8029DFC0: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x8029DFC4: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x8029DFC8: lw          $t4, 0x60($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X60);
    // 0x8029DFCC: lw          $t5, 0x64($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X64);
    // 0x8029DFD0: addu        $a1, $t0, $t1
    ctx->r5 = ADD32(ctx->r8, ctx->r9);
    // 0x8029DFD4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8029DFD8: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x8029DFDC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8029DFE0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8029DFE4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8029DFE8: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x8029DFEC: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x8029DFF0: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x8029DFF4: jal         0x8021F35C
    // 0x8029DFF8: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    static_3_8021F35C(rdram, ctx);
        goto after_17;
    // 0x8029DFF8: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    after_17:
    // 0x8029DFFC: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x8029E000: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x8029E004: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x8029E008: lw          $t9, 0x64($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X64);
    // 0x8029E00C: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x8029E010: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8029E014: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8029E018: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8029E01C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8029E020: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x8029E024: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x8029E028: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x8029E02C: jal         0x8021F35C
    // 0x8029E030: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    static_3_8021F35C(rdram, ctx);
        goto after_18;
    // 0x8029E030: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    after_18:
    // 0x8029E034: jal         0x8021FCD0
    // 0x8029E038: nop

    static_3_8021FCD0(rdram, ctx);
        goto after_19;
    // 0x8029E038: nop

    after_19:
    // 0x8029E03C: jal         0x8021F4E4
    // 0x8029E040: nop

    static_3_8021F4E4(rdram, ctx);
        goto after_20;
    // 0x8029E040: nop

    after_20:
    // 0x8029E044: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x8029E048: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x8029E04C: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x8029E050: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
    // 0x8029E054: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8029E058: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x8029E05C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8029E060: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8029E064: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8029E068: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x8029E06C: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x8029E070: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x8029E074: jal         0x8021F35C
    // 0x8029E078: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    static_3_8021F35C(rdram, ctx);
        goto after_21;
    // 0x8029E078: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    after_21:
    // 0x8029E07C: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x8029E080: lw          $t5, 0x68($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X68);
    // 0x8029E084: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x8029E088: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x8029E08C: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x8029E090: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x8029E094: addu        $a0, $t4, $t5
    ctx->r4 = ADD32(ctx->r12, ctx->r13);
    // 0x8029E098: sw          $a0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r4;
    // 0x8029E09C: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x8029E0A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8029E0A4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8029E0A8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8029E0AC: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x8029E0B0: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x8029E0B4: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x8029E0B8: jal         0x8021F35C
    // 0x8029E0BC: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    static_3_8021F35C(rdram, ctx);
        goto after_22;
    // 0x8029E0BC: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    after_22:
    // 0x8029E0C0: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x8029E0C4: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x8029E0C8: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x8029E0CC: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
    // 0x8029E0D0: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8029E0D4: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x8029E0D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8029E0DC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8029E0E0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8029E0E4: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x8029E0E8: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x8029E0EC: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x8029E0F0: jal         0x8021F35C
    // 0x8029E0F4: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    static_3_8021F35C(rdram, ctx);
        goto after_23;
    // 0x8029E0F4: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    after_23:
    // 0x8029E0F8: lw          $t4, 0x48($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X48);
    // 0x8029E0FC: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x8029E100: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x8029E104: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x8029E108: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8029E10C: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x8029E110: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8029E114: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8029E118: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8029E11C: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x8029E120: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x8029E124: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x8029E128: jal         0x8021F35C
    // 0x8029E12C: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    static_3_8021F35C(rdram, ctx);
        goto after_24;
    // 0x8029E12C: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    after_24:
    // 0x8029E130: jal         0x8021FCD0
    // 0x8029E134: nop

    static_3_8021FCD0(rdram, ctx);
        goto after_25;
    // 0x8029E134: nop

    after_25:
    // 0x8029E138: jal         0x8022337C
    // 0x8029E13C: nop

    static_3_8022337C(rdram, ctx);
        goto after_26;
    // 0x8029E13C: nop

    after_26:
    // 0x8029E140: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8029E144: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8029E148: jr          $ra
    // 0x8029E14C: nop

    return;
    // 0x8029E14C: nop

;}
RECOMP_FUNC void D_802958AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029592C: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x80295930: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80295934: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80295938: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8029593C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80295940: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x80295944: sw          $a1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r5;
    // 0x80295948: lw          $s1, 0xB4($a0)
    ctx->r17 = MEM_W(ctx->r4, 0XB4);
    // 0x8029594C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80295950: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80295954: lh          $t6, 0x18($s1)
    ctx->r14 = MEM_H(ctx->r17, 0X18);
    // 0x80295958: lw          $t9, 0x1C($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X1C);
    // 0x8029595C: addu        $a0, $t6, $a0
    ctx->r4 = ADD32(ctx->r14, ctx->r4);
    // 0x80295960: jalr        $t9
    // 0x80295964: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80295964: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_0:
    // 0x80295968: lw          $s1, 0xB4($s0)
    ctx->r17 = MEM_W(ctx->r16, 0XB4);
    // 0x8029596C: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x80295970: sh          $t7, 0x74($s0)
    MEM_H(0X74, ctx->r16) = ctx->r15;
    // 0x80295974: lh          $t8, 0x50($s1)
    ctx->r24 = MEM_H(ctx->r17, 0X50);
    // 0x80295978: lw          $t9, 0x54($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X54);
    // 0x8029597C: lui         $a1, 0x4316
    ctx->r5 = S32(0X4316 << 16);
    // 0x80295980: addu        $a0, $t8, $s0
    ctx->r4 = ADD32(ctx->r24, ctx->r16);
    // 0x80295984: jalr        $t9
    // 0x80295988: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x80295988: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_1:
    // 0x8029598C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80295990: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80295994: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x80295998: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8029599C: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x802959A0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802959A4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802959A8: swc1        $f0, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->f0.u32l;
    // 0x802959AC: swc1        $f0, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f0.u32l;
    // 0x802959B0: swc1        $f4, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f4.u32l;
    // 0x802959B4: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802959B8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802959BC: lw          $s1, 0xB4($s0)
    ctx->r17 = MEM_W(ctx->r16, 0XB4);
    // 0x802959C0: swc1        $f6, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f6.u32l;
    // 0x802959C4: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802959C8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802959CC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802959D0: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x802959D4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x802959D8: sh          $t2, 0x8E($s0)
    MEM_H(0X8E, ctx->r16) = ctx->r10;
    // 0x802959DC: mul.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x802959E0: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x802959E4: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x802959E8: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x802959EC: mfc1        $s2, $f16
    ctx->r18 = (int32_t)ctx->f16.u32l;
    // 0x802959F0: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x802959F4: sh          $s2, 0x7A($s0)
    MEM_H(0X7A, ctx->r16) = ctx->r18;
    // 0x802959F8: sh          $s2, 0x7C($s0)
    MEM_H(0X7C, ctx->r16) = ctx->r18;
    // 0x802959FC: sh          $s2, 0x7E($s0)
    MEM_H(0X7E, ctx->r16) = ctx->r18;
    // 0x80295A00: sh          $s2, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r18;
    // 0x80295A04: sh          $s2, 0xE6($s0)
    MEM_H(0XE6, ctx->r16) = ctx->r18;
    // 0x80295A08: sh          $s2, 0xE8($s0)
    MEM_H(0XE8, ctx->r16) = ctx->r18;
    // 0x80295A0C: sh          $v0, 0x80($s0)
    MEM_H(0X80, ctx->r16) = ctx->r2;
    // 0x80295A10: sh          $v0, 0xEA($s0)
    MEM_H(0XEA, ctx->r16) = ctx->r2;
    // 0x80295A14: lh          $t3, 0x70($s1)
    ctx->r11 = MEM_H(ctx->r17, 0X70);
    // 0x80295A18: lw          $t9, 0x74($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X74);
    // 0x80295A1C: addu        $a0, $t3, $s0
    ctx->r4 = ADD32(ctx->r11, ctx->r16);
    // 0x80295A20: jalr        $t9
    // 0x80295A24: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x80295A24: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_2:
    // 0x80295A28: lw          $s1, 0xB4($s0)
    ctx->r17 = MEM_W(ctx->r16, 0XB4);
    // 0x80295A2C: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    // 0x80295A30: lh          $t4, 0x48($s1)
    ctx->r12 = MEM_H(ctx->r17, 0X48);
    // 0x80295A34: lw          $t9, 0x4C($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X4C);
    // 0x80295A38: addu        $a0, $t4, $s0
    ctx->r4 = ADD32(ctx->r12, ctx->r16);
    // 0x80295A3C: jalr        $t9
    // 0x80295A40: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x80295A40: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_3:
    // 0x80295A44: lw          $s1, 0xB4($s0)
    ctx->r17 = MEM_W(ctx->r16, 0XB4);
    // 0x80295A48: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    // 0x80295A4C: lh          $t5, 0x68($s1)
    ctx->r13 = MEM_H(ctx->r17, 0X68);
    // 0x80295A50: lw          $t9, 0x6C($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X6C);
    // 0x80295A54: addu        $a0, $t5, $s0
    ctx->r4 = ADD32(ctx->r13, ctx->r16);
    // 0x80295A58: jalr        $t9
    // 0x80295A5C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x80295A5C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_4:
    // 0x80295A60: lw          $s1, 0xB4($s0)
    ctx->r17 = MEM_W(ctx->r16, 0XB4);
    // 0x80295A64: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    // 0x80295A68: lh          $t6, 0x58($s1)
    ctx->r14 = MEM_H(ctx->r17, 0X58);
    // 0x80295A6C: lw          $t9, 0x5C($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X5C);
    // 0x80295A70: addu        $a0, $t6, $s0
    ctx->r4 = ADD32(ctx->r14, ctx->r16);
    // 0x80295A74: jalr        $t9
    // 0x80295A78: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x80295A78: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_5:
    // 0x80295A7C: lw          $s1, 0xB4($s0)
    ctx->r17 = MEM_W(ctx->r16, 0XB4);
    // 0x80295A80: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80295A84: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80295A88: lh          $t7, 0x20($s1)
    ctx->r15 = MEM_H(ctx->r17, 0X20);
    // 0x80295A8C: lw          $t9, 0x24($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X24);
    // 0x80295A90: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x80295A94: addu        $a0, $t7, $s0
    ctx->r4 = ADD32(ctx->r15, ctx->r16);
    // 0x80295A98: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80295A9C: jalr        $t9
    // 0x80295AA0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x80295AA0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_6:
    // 0x80295AA4: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80295AA8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80295AAC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80295AB0: lui         $at, 0xC282
    ctx->r1 = S32(0XC282 << 16);
    // 0x80295AB4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80295AB8: lw          $s1, 0xB4($s0)
    ctx->r17 = MEM_W(ctx->r16, 0XB4);
    // 0x80295ABC: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80295AC0: addiu       $t8, $zero, 0x18D
    ctx->r24 = ADD32(0, 0X18D);
    // 0x80295AC4: addiu       $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
    // 0x80295AC8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80295ACC: sh          $t1, 0xA8($s0)
    MEM_H(0XA8, ctx->r16) = ctx->r9;
    // 0x80295AD0: sh          $t0, 0xAA($s0)
    MEM_H(0XAA, ctx->r16) = ctx->r8;
    // 0x80295AD4: sh          $t8, 0xA0($s0)
    MEM_H(0XA0, ctx->r16) = ctx->r24;
    // 0x80295AD8: sh          $v0, 0x9C($s0)
    MEM_H(0X9C, ctx->r16) = ctx->r2;
    // 0x80295ADC: sh          $v0, 0x9E($s0)
    MEM_H(0X9E, ctx->r16) = ctx->r2;
    // 0x80295AE0: swc1        $f8, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->f8.u32l;
    // 0x80295AE4: swc1        $f0, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->f0.u32l;
    // 0x80295AE8: swc1        $f0, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->f0.u32l;
    // 0x80295AEC: swc1        $f10, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->f10.u32l;
    // 0x80295AF0: lh          $t2, 0x60($s1)
    ctx->r10 = MEM_H(ctx->r17, 0X60);
    // 0x80295AF4: lw          $t9, 0x64($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X64);
    // 0x80295AF8: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80295AFC: addu        $a0, $t2, $s0
    ctx->r4 = ADD32(ctx->r10, ctx->r16);
    // 0x80295B00: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80295B04: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80295B08: jalr        $t9
    // 0x80295B0C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x80295B0C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_7:
    // 0x80295B10: lw          $s1, 0x290($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X290);
    // 0x80295B14: lui         $a1, 0x3E80
    ctx->r5 = S32(0X3E80 << 16);
    // 0x80295B18: lh          $t3, 0x18($s1)
    ctx->r11 = MEM_H(ctx->r17, 0X18);
    // 0x80295B1C: lw          $t9, 0x1C($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X1C);
    // 0x80295B20: addu        $a0, $t3, $s0
    ctx->r4 = ADD32(ctx->r11, ctx->r16);
    // 0x80295B24: jalr        $t9
    // 0x80295B28: addiu       $a0, $a0, 0x1E0
    ctx->r4 = ADD32(ctx->r4, 0X1E0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x80295B28: addiu       $a0, $a0, 0x1E0
    ctx->r4 = ADD32(ctx->r4, 0X1E0);
    after_8:
    // 0x80295B2C: swc1        $f20, 0x224($s0)
    MEM_W(0X224, ctx->r16) = ctx->f20.u32l;
    // 0x80295B30: swc1        $f20, 0x228($s0)
    MEM_W(0X228, ctx->r16) = ctx->f20.u32l;
    // 0x80295B34: swc1        $f20, 0x22C($s0)
    MEM_W(0X22C, ctx->r16) = ctx->f20.u32l;
    // 0x80295B38: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80295B3C: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80295B40: lw          $s1, 0x290($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X290);
    // 0x80295B44: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x80295B48: swc1        $f16, 0x24C($s0)
    MEM_W(0X24C, ctx->r16) = ctx->f16.u32l;
    // 0x80295B4C: lh          $t4, 0x20($s1)
    ctx->r12 = MEM_H(ctx->r17, 0X20);
    // 0x80295B50: lw          $t9, 0x24($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X24);
    // 0x80295B54: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80295B58: addu        $a0, $t4, $s0
    ctx->r4 = ADD32(ctx->r12, ctx->r16);
    // 0x80295B5C: jalr        $t9
    // 0x80295B60: addiu       $a0, $a0, 0x1E0
    ctx->r4 = ADD32(ctx->r4, 0X1E0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x80295B60: addiu       $a0, $a0, 0x1E0
    ctx->r4 = ADD32(ctx->r4, 0X1E0);
    after_9:
    // 0x80295B64: lui         $at, 0xC170
    ctx->r1 = S32(0XC170 << 16);
    // 0x80295B68: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80295B6C: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80295B70: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80295B74: lui         $at, 0xC248
    ctx->r1 = S32(0XC248 << 16);
    // 0x80295B78: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80295B7C: lw          $s1, 0x470($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X470);
    // 0x80295B80: swc1        $f18, 0x230($s0)
    MEM_W(0X230, ctx->r16) = ctx->f18.u32l;
    // 0x80295B84: swc1        $f4, 0x234($s0)
    MEM_W(0X234, ctx->r16) = ctx->f4.u32l;
    // 0x80295B88: swc1        $f6, 0x238($s0)
    MEM_W(0X238, ctx->r16) = ctx->f6.u32l;
    // 0x80295B8C: lh          $t5, 0x18($s1)
    ctx->r13 = MEM_H(ctx->r17, 0X18);
    // 0x80295B90: lw          $t9, 0x1C($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X1C);
    // 0x80295B94: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80295B98: addu        $a0, $t5, $s0
    ctx->r4 = ADD32(ctx->r13, ctx->r16);
    // 0x80295B9C: jalr        $t9
    // 0x80295BA0: addiu       $a0, $a0, 0x3C0
    ctx->r4 = ADD32(ctx->r4, 0X3C0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x80295BA0: addiu       $a0, $a0, 0x3C0
    ctx->r4 = ADD32(ctx->r4, 0X3C0);
    after_10:
    // 0x80295BA4: swc1        $f20, 0x404($s0)
    MEM_W(0X404, ctx->r16) = ctx->f20.u32l;
    // 0x80295BA8: swc1        $f20, 0x408($s0)
    MEM_W(0X408, ctx->r16) = ctx->f20.u32l;
    // 0x80295BAC: swc1        $f20, 0x40C($s0)
    MEM_W(0X40C, ctx->r16) = ctx->f20.u32l;
    // 0x80295BB0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80295BB4: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80295BB8: lw          $s1, 0x470($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X470);
    // 0x80295BBC: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x80295BC0: swc1        $f8, 0x42C($s0)
    MEM_W(0X42C, ctx->r16) = ctx->f8.u32l;
    // 0x80295BC4: lh          $t6, 0x20($s1)
    ctx->r14 = MEM_H(ctx->r17, 0X20);
    // 0x80295BC8: lw          $t9, 0x24($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X24);
    // 0x80295BCC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80295BD0: addu        $a0, $t6, $s0
    ctx->r4 = ADD32(ctx->r14, ctx->r16);
    // 0x80295BD4: jalr        $t9
    // 0x80295BD8: addiu       $a0, $a0, 0x3C0
    ctx->r4 = ADD32(ctx->r4, 0X3C0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x80295BD8: addiu       $a0, $a0, 0x3C0
    ctx->r4 = ADD32(ctx->r4, 0X3C0);
    after_11:
    // 0x80295BDC: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x80295BE0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80295BE4: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80295BE8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80295BEC: lui         $at, 0xC248
    ctx->r1 = S32(0XC248 << 16);
    // 0x80295BF0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80295BF4: swc1        $f10, 0x410($s0)
    MEM_W(0X410, ctx->r16) = ctx->f10.u32l;
    // 0x80295BF8: swc1        $f16, 0x414($s0)
    MEM_W(0X414, ctx->r16) = ctx->f16.u32l;
    // 0x80295BFC: swc1        $f18, 0x418($s0)
    MEM_W(0X418, ctx->r16) = ctx->f18.u32l;
    // 0x80295C00: lw          $a1, 0x94($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X94);
    // 0x80295C04: jal         0x80228DE0
    // 0x80295C08: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    func_80228DE0(rdram, ctx);
        goto after_12;
    // 0x80295C08: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    after_12:
    // 0x80295C0C: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80295C10: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80295C14: lwc1        $f4, 0x88($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X88);
    // 0x80295C18: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80295C1C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80295C20: swc1        $f8, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f8.u32l;
    // 0x80295C24: lw          $s1, 0x650($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X650);
    // 0x80295C28: lh          $t7, 0x18($s1)
    ctx->r15 = MEM_H(ctx->r17, 0X18);
    // 0x80295C2C: lw          $t9, 0x1C($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X1C);
    // 0x80295C30: addu        $a0, $t7, $s0
    ctx->r4 = ADD32(ctx->r15, ctx->r16);
    // 0x80295C34: jalr        $t9
    // 0x80295C38: addiu       $a0, $a0, 0x5A0
    ctx->r4 = ADD32(ctx->r4, 0X5A0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x80295C38: addiu       $a0, $a0, 0x5A0
    ctx->r4 = ADD32(ctx->r4, 0X5A0);
    after_13:
    // 0x80295C3C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80295C40: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80295C44: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80295C48: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80295C4C: lw          $s1, 0x650($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X650);
    // 0x80295C50: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80295C54: sh          $t8, 0x62A($s0)
    MEM_H(0X62A, ctx->r16) = ctx->r24;
    // 0x80295C58: sh          $s2, 0x616($s0)
    MEM_H(0X616, ctx->r16) = ctx->r18;
    // 0x80295C5C: sh          $s2, 0x618($s0)
    MEM_H(0X618, ctx->r16) = ctx->r18;
    // 0x80295C60: sh          $s2, 0x61A($s0)
    MEM_H(0X61A, ctx->r16) = ctx->r18;
    // 0x80295C64: swc1        $f0, 0x5E4($s0)
    MEM_W(0X5E4, ctx->r16) = ctx->f0.u32l;
    // 0x80295C68: swc1        $f0, 0x5E8($s0)
    MEM_W(0X5E8, ctx->r16) = ctx->f0.u32l;
    // 0x80295C6C: swc1        $f0, 0x5EC($s0)
    MEM_W(0X5EC, ctx->r16) = ctx->f0.u32l;
    // 0x80295C70: swc1        $f10, 0x62C($s0)
    MEM_W(0X62C, ctx->r16) = ctx->f10.u32l;
    // 0x80295C74: lh          $t0, 0x20($s1)
    ctx->r8 = MEM_H(ctx->r17, 0X20);
    // 0x80295C78: lw          $t9, 0x24($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X24);
    // 0x80295C7C: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x80295C80: addu        $a0, $t0, $s0
    ctx->r4 = ADD32(ctx->r8, ctx->r16);
    // 0x80295C84: addiu       $a0, $a0, 0x5A0
    ctx->r4 = ADD32(ctx->r4, 0X5A0);
    // 0x80295C88: jalr        $t9
    // 0x80295C8C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x80295C8C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_14:
    // 0x80295C90: addiu       $a0, $s0, 0x5A4
    ctx->r4 = ADD32(ctx->r16, 0X5A4);
    // 0x80295C94: jal         0x80228DE0
    // 0x80295C98: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    func_80228DE0(rdram, ctx);
        goto after_15;
    // 0x80295C98: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    after_15:
    // 0x80295C9C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80295CA0: sb          $t1, 0x64C($s0)
    MEM_B(0X64C, ctx->r16) = ctx->r9;
    // 0x80295CA4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80295CA8: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80295CAC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80295CB0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80295CB4: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x80295CB8: jr          $ra
    // 0x80295CBC: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    return;
    // 0x80295CBC: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void D_802DA21C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802DA29C: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802DA2A0: lbu         $t6, 0x0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X0);
    // 0x802DA2A4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802DA2A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802DA2AC: bne         $t6, $zero, L_802DA2C4
    if (ctx->r14 != 0) {
        // 0x802DA2B0: nop
    
            goto L_802DA2C4;
    }
    // 0x802DA2B0: nop

    // 0x802DA2B4: jal         0x80224CA8
    // 0x802DA2B8: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    static_3_80224CA8(rdram, ctx);
        goto after_0;
    // 0x802DA2B8: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    after_0:
    // 0x802DA2BC: b           L_802DA2CC
    // 0x802DA2C0: nop

        goto L_802DA2CC;
    // 0x802DA2C0: nop

L_802DA2C4:
    // 0x802DA2C4: jal         0x80224CA8
    // 0x802DA2C8: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    static_3_80224CA8(rdram, ctx);
        goto after_1;
    // 0x802DA2C8: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_1:
L_802DA2CC:
    // 0x802DA2CC: jal         0x8030A894
    // 0x802DA2D0: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    static_3_8030A894(rdram, ctx);
        goto after_2;
    // 0x802DA2D0: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_2:
    // 0x802DA2D4: sb          $v0, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r2;
    // 0x802DA2D8: jal         0x8030A894
    // 0x802DA2DC: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    static_3_8030A894(rdram, ctx);
        goto after_3;
    // 0x802DA2DC: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_3:
    // 0x802DA2E0: lbu         $t7, 0x1F($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X1F);
    // 0x802DA2E4: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x802DA2E8: addiu       $a0, $zero, 0x2C
    ctx->r4 = ADD32(0, 0X2C);
    // 0x802DA2EC: beq         $t7, $zero, L_802DA300
    if (ctx->r15 == 0) {
        // 0x802DA2F0: nop
    
            goto L_802DA300;
    }
    // 0x802DA2F0: nop

    // 0x802DA2F4: jal         0x80224CA8
    // 0x802DA2F8: sb          $v1, 0x1E($sp)
    MEM_B(0X1E, ctx->r29) = ctx->r3;
    static_3_80224CA8(rdram, ctx);
        goto after_4;
    // 0x802DA2F8: sb          $v1, 0x1E($sp)
    MEM_B(0X1E, ctx->r29) = ctx->r3;
    after_4:
    // 0x802DA2FC: lbu         $v1, 0x1E($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X1E);
L_802DA300:
    // 0x802DA300: beql        $v1, $zero, L_802DA314
    if (ctx->r3 == 0) {
        // 0x802DA304: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802DA314;
    }
    goto skip_0;
    // 0x802DA304: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802DA308: jal         0x80224CA8
    // 0x802DA30C: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    static_3_80224CA8(rdram, ctx);
        goto after_5;
    // 0x802DA30C: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    after_5:
    // 0x802DA310: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802DA314:
    // 0x802DA314: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802DA318: jr          $ra
    // 0x802DA31C: nop

    return;
    // 0x802DA31C: nop

;}
RECOMP_FUNC void D_802EC190(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EC210: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802EC214: bne         $a0, $zero, L_802EC22C
    if (ctx->r4 != 0) {
        // 0x802EC218: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802EC22C;
    }
    // 0x802EC218: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802EC21C: jal         0x802C67EC
    // 0x802EC220: addiu       $a0, $zero, 0xF0
    ctx->r4 = ADD32(0, 0XF0);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802EC220: addiu       $a0, $zero, 0xF0
    ctx->r4 = ADD32(0, 0XF0);
    after_0:
    // 0x802EC224: beq         $v0, $zero, L_802EC280
    if (ctx->r2 == 0) {
        // 0x802EC228: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802EC280;
    }
    // 0x802EC228: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_802EC22C:
    // 0x802EC22C: jal         0x8031C47C
    // 0x802EC230: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_8031C47C(rdram, ctx);
        goto after_1;
    // 0x802EC230: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x802EC234: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802EC238: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x802EC23C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802EC240: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802EC244: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802EC248: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802EC24C: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x802EC250: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x802EC254: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x802EC258: sw          $zero, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = 0;
    // 0x802EC25C: sh          $t6, 0xBC($a0)
    MEM_H(0XBC, ctx->r4) = ctx->r14;
    // 0x802EC260: sw          $t7, 0xB8($a0)
    MEM_W(0XB8, ctx->r4) = ctx->r15;
    // 0x802EC264: sh          $zero, 0xE4($a0)
    MEM_H(0XE4, ctx->r4) = 0;
    // 0x802EC268: sh          $t8, 0xE6($a0)
    MEM_H(0XE6, ctx->r4) = ctx->r24;
    // 0x802EC26C: swc1        $f0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->f0.u32l;
    // 0x802EC270: swc1        $f0, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f0.u32l;
    // 0x802EC274: jal         0x8031C9EC
    // 0x802EC278: swc1        $f4, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->f4.u32l;
    static_3_8031C9EC(rdram, ctx);
        goto after_2;
    // 0x802EC278: swc1        $f4, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->f4.u32l;
    after_2:
    // 0x802EC27C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_802EC280:
    // 0x802EC280: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802EC284: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802EC288: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x802EC28C: jr          $ra
    // 0x802EC290: nop

    return;
    // 0x802EC290: nop

;}
RECOMP_FUNC void func_802496B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802496B8: lw          $a1, 0x8($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X8);
    // 0x802496BC: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x802496C0: addiu       $t9, $a1, 0x1
    ctx->r25 = ADD32(ctx->r5, 0X1);
    // 0x802496C4: sw          $t9, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r25;
    // 0x802496C8: lbu         $t6, 0x0($t9)
    ctx->r14 = MEM_BU(ctx->r25, 0X0);
    // 0x802496CC: sll         $t8, $v1, 8
    ctx->r24 = S32(ctx->r3 << 8);
    // 0x802496D0: addiu       $t9, $t9, 0x1
    ctx->r25 = ADD32(ctx->r25, 0X1);
    // 0x802496D4: or          $v1, $t8, $t6
    ctx->r3 = ctx->r24 | ctx->r14;
    // 0x802496D8: sll         $t7, $v1, 16
    ctx->r15 = S32(ctx->r3 << 16);
    // 0x802496DC: sra         $v0, $t7, 16
    ctx->r2 = S32(SIGNED(ctx->r15) >> 16);
    // 0x802496E0: jr          $ra
    // 0x802496E4: sw          $t9, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r25;
    return;
    // 0x802496E4: sw          $t9, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r25;
;}
RECOMP_FUNC void D_8023D8DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023D8DC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8023D8E0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8023D8E4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8023D8E8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8023D8EC: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8023D8F0: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8023D8F4: jal         0x8023D820
    // 0x8023D8F8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    static_3_8023D820(rdram, ctx);
        goto after_0;
    // 0x8023D8F8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    after_0:
    // 0x8023D8FC: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x8023D900: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8023D904: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8023D908: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x8023D90C: beq         $t7, $zero, L_8023D95C
    if (ctx->r15 == 0) {
        // 0x8023D910: nop
    
            goto L_8023D95C;
    }
    // 0x8023D910: nop

    // 0x8023D914: lw          $t8, 0x38($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X38);
    // 0x8023D918: lw          $t9, 0x3C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X3C);
    // 0x8023D91C: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x8023D920: sw          $t8, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r24;
    // 0x8023D924: sw          $t9, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r25;
    // 0x8023D928: lw          $t0, 0x4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X4);
    // 0x8023D92C: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x8023D930: sw          $t1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r9;
    // 0x8023D934: lw          $t2, 0x4($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X4);
    // 0x8023D938: andi        $t3, $t2, 0x4
    ctx->r11 = ctx->r10 & 0X4;
    // 0x8023D93C: beq         $t3, $zero, L_8023D95C
    if (ctx->r11 == 0) {
        // 0x8023D940: nop
    
            goto L_8023D95C;
    }
    // 0x8023D940: nop

    // 0x8023D944: lw          $t4, 0x38($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X38);
    // 0x8023D948: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8023D94C: addiu       $t5, $t4, 0xBFC
    ctx->r13 = ADD32(ctx->r12, 0XBFC);
    // 0x8023D950: or          $t6, $t5, $at
    ctx->r14 = ctx->r13 | ctx->r1;
    // 0x8023D954: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x8023D958: sw          $t7, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r15;
L_8023D95C:
    // 0x8023D95C: jal         0x8023CE80
    // 0x8023D960: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    func_8023CE80(rdram, ctx);
        goto after_1;
    // 0x8023D960: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_1:
    // 0x8023D964: jal         0x80246F80
    // 0x8023D968: addiu       $a0, $zero, 0x2B00
    ctx->r4 = ADD32(0, 0X2B00);
    func_80246F80(rdram, ctx);
        goto after_2;
    // 0x8023D968: addiu       $a0, $zero, 0x2B00
    ctx->r4 = ADD32(0, 0X2B00);
    after_2:
    // 0x8023D96C: lui         $s3, 0x400
    ctx->r19 = S32(0X400 << 16);
    // 0x8023D970: ori         $s3, $s3, 0x1000
    ctx->r19 = ctx->r19 | 0X1000;
    // 0x8023D974: jal         0x80246F90
    // 0x8023D978: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    static_3_80246F90(rdram, ctx);
        goto after_3;
    // 0x8023D978: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_3:
    // 0x8023D97C: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
    // 0x8023D980: bnel        $v0, $s1, L_8023D99C
    if (ctx->r2 != ctx->r17) {
        // 0x8023D984: lui         $s0, 0x400
        ctx->r16 = S32(0X400 << 16);
            goto L_8023D99C;
    }
    goto skip_0;
    // 0x8023D984: lui         $s0, 0x400
    ctx->r16 = S32(0X400 << 16);
    skip_0:
L_8023D988:
    // 0x8023D988: jal         0x80246F90
    // 0x8023D98C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    static_3_80246F90(rdram, ctx);
        goto after_4;
    // 0x8023D98C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_4:
    // 0x8023D990: beq         $v0, $s1, L_8023D988
    if (ctx->r2 == ctx->r17) {
        // 0x8023D994: nop
    
            goto L_8023D988;
    }
    // 0x8023D994: nop

    // 0x8023D998: lui         $s0, 0x400
    ctx->r16 = S32(0X400 << 16);
L_8023D99C:
    // 0x8023D99C: ori         $s0, $s0, 0xFC0
    ctx->r16 = ctx->r16 | 0XFC0;
    // 0x8023D9A0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8023D9A4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8023D9A8: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x8023D9AC: jal         0x80246FD0
    // 0x8023D9B0: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    static_3_80246FD0(rdram, ctx);
        goto after_5;
    // 0x8023D9B0: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    after_5:
    // 0x8023D9B4: bne         $v0, $s1, L_8023D9D4
    if (ctx->r2 != ctx->r17) {
        // 0x8023D9B8: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_8023D9D4;
    }
    // 0x8023D9B8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_8023D9BC:
    // 0x8023D9BC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8023D9C0: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x8023D9C4: jal         0x80246FD0
    // 0x8023D9C8: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    static_3_80246FD0(rdram, ctx);
        goto after_6;
    // 0x8023D9C8: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    after_6:
    // 0x8023D9CC: beql        $v0, $s1, L_8023D9BC
    if (ctx->r2 == ctx->r17) {
        // 0x8023D9D0: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_8023D9BC;
    }
    goto skip_1;
    // 0x8023D9D0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    skip_1:
L_8023D9D4:
    // 0x8023D9D4: jal         0x80247060
    // 0x8023D9D8: nop

    static_3_80247060(rdram, ctx);
        goto after_7;
    // 0x8023D9D8: nop

    after_7:
    // 0x8023D9DC: beql        $v0, $zero, L_8023D9F8
    if (ctx->r2 == 0) {
        // 0x8023D9E0: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_8023D9F8;
    }
    goto skip_2;
    // 0x8023D9E0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    skip_2:
L_8023D9E4:
    // 0x8023D9E4: jal         0x80247060
    // 0x8023D9E8: nop

    static_3_80247060(rdram, ctx);
        goto after_8;
    // 0x8023D9E8: nop

    after_8:
    // 0x8023D9EC: bne         $v0, $zero, L_8023D9E4
    if (ctx->r2 != 0) {
        // 0x8023D9F0: nop
    
            goto L_8023D9E4;
    }
    // 0x8023D9F0: nop

    // 0x8023D9F4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_8023D9F8:
    // 0x8023D9F8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8023D9FC: lw          $a2, 0x8($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X8);
    // 0x8023DA00: jal         0x80246FD0
    // 0x8023DA04: lw          $a3, 0xC($s2)
    ctx->r7 = MEM_W(ctx->r18, 0XC);
    static_3_80246FD0(rdram, ctx);
        goto after_9;
    // 0x8023DA04: lw          $a3, 0xC($s2)
    ctx->r7 = MEM_W(ctx->r18, 0XC);
    after_9:
    // 0x8023DA08: bne         $v0, $s1, L_8023DA28
    if (ctx->r2 != ctx->r17) {
        // 0x8023DA0C: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_8023DA28;
    }
    // 0x8023DA0C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_8023DA10:
    // 0x8023DA10: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8023DA14: lw          $a2, 0x8($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X8);
    // 0x8023DA18: jal         0x80246FD0
    // 0x8023DA1C: lw          $a3, 0xC($s2)
    ctx->r7 = MEM_W(ctx->r18, 0XC);
    static_3_80246FD0(rdram, ctx);
        goto after_10;
    // 0x8023DA1C: lw          $a3, 0xC($s2)
    ctx->r7 = MEM_W(ctx->r18, 0XC);
    after_10:
    // 0x8023DA20: beql        $v0, $s1, L_8023DA10
    if (ctx->r2 == ctx->r17) {
        // 0x8023DA24: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_8023DA10;
    }
    goto skip_3;
    // 0x8023DA24: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    skip_3:
L_8023DA28:
    // 0x8023DA28: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8023DA2C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8023DA30: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8023DA34: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8023DA38: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8023DA3C: jr          $ra
    // 0x8023DA40: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8023DA40: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void D_8024ACF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024ACF4: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8024ACF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8024ACFC: jal         0x80245AD0
    // 0x8024AD00: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    static_3_80245AD0(rdram, ctx);
        goto after_0;
    // 0x8024AD00: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    after_0:
    // 0x8024AD04: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x8024AD08: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x8024AD0C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8024AD10: sb          $t6, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r14;
    // 0x8024AD14: lw          $t8, 0x8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X8);
    // 0x8024AD18: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x8024AD1C: addiu       $t0, $t0, 0x0
    ctx->r8 = ADD32(ctx->r8, 0X0);
    // 0x8024AD20: sll         $t9, $t8, 6
    ctx->r25 = S32(ctx->r24 << 6);
    // 0x8024AD24: addu        $a1, $t9, $t0
    ctx->r5 = ADD32(ctx->r25, ctx->r8);
    // 0x8024AD28: jal         0x802465B0
    // 0x8024AD2C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    static_3_802465B0(rdram, ctx);
        goto after_1;
    // 0x8024AD2C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x8024AD30: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x8024AD34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8024AD38: lw          $a0, 0x4($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X4);
    // 0x8024AD3C: jal         0x802374B0
    // 0x8024AD40: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_802374B0(rdram, ctx);
        goto after_2;
    // 0x8024AD40: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x8024AD44: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8024AD48: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x8024AD4C: jal         0x802465B0
    // 0x8024AD50: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_802465B0(rdram, ctx);
        goto after_3;
    // 0x8024AD50: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x8024AD54: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x8024AD58: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8024AD5C: lw          $a0, 0x4($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X4);
    // 0x8024AD60: jal         0x802374B0
    // 0x8024AD64: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_802374B0(rdram, ctx);
        goto after_4;
    // 0x8024AD64: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x8024AD68: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x8024AD6C: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x8024AD70: lw          $a0, 0x8($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X8);
    // 0x8024AD74: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x8024AD78: beq         $a0, $zero, L_8024AD98
    if (ctx->r4 == 0) {
        // 0x8024AD7C: addiu       $t4, $sp, 0x1C
        ctx->r12 = ADD32(ctx->r29, 0X1C);
            goto L_8024AD98;
    }
    // 0x8024AD7C: addiu       $t4, $sp, 0x1C
    ctx->r12 = ADD32(ctx->r29, 0X1C);
    // 0x8024AD80: blez        $a0, L_8024AD98
    if (SIGNED(ctx->r4) <= 0) {
        // 0x8024AD84: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8024AD98;
    }
    // 0x8024AD84: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8024AD88:
    // 0x8024AD88: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024AD8C: slt         $at, $v0, $a0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8024AD90: bne         $at, $zero, L_8024AD88
    if (ctx->r1 != 0) {
        // 0x8024AD94: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_8024AD88;
    }
    // 0x8024AD94: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_8024AD98:
    // 0x8024AD98: or          $t7, $v1, $zero
    ctx->r15 = ctx->r3 | 0;
    // 0x8024AD9C: addiu       $t6, $v1, 0x24
    ctx->r14 = ADD32(ctx->r3, 0X24);
L_8024ADA0:
    // 0x8024ADA0: lwl         $at, 0x0($t7)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r15, 0X0);
    // 0x8024ADA4: lwr         $at, 0x3($t7)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r15, 0X3);
    // 0x8024ADA8: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x8024ADAC: sw          $at, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r1;
    // 0x8024ADB0: lwl         $at, -0x8($t7)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r15, -0X8);
    // 0x8024ADB4: lwr         $at, -0x5($t7)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r15, -0X5);
    // 0x8024ADB8: addiu       $t4, $t4, 0xC
    ctx->r12 = ADD32(ctx->r12, 0XC);
    // 0x8024ADBC: sw          $at, -0x8($t4)
    MEM_W(-0X8, ctx->r12) = ctx->r1;
    // 0x8024ADC0: lwl         $at, -0x4($t7)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r15, -0X4);
    // 0x8024ADC4: lwr         $at, -0x1($t7)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r15, -0X1);
    // 0x8024ADC8: bne         $t7, $t6, L_8024ADA0
    if (ctx->r15 != ctx->r14) {
        // 0x8024ADCC: sw          $at, -0x4($t4)
        MEM_W(-0X4, ctx->r12) = ctx->r1;
            goto L_8024ADA0;
    }
    // 0x8024ADCC: sw          $at, -0x4($t4)
    MEM_W(-0X4, ctx->r12) = ctx->r1;
    // 0x8024ADD0: lwl         $at, 0x0($t7)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r15, 0X0);
    // 0x8024ADD4: lwr         $at, 0x3($t7)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r15, 0X3);
    // 0x8024ADD8: nop

    // 0x8024ADDC: sw          $at, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r1;
    // 0x8024ADE0: lbu         $v0, 0x1E($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X1E);
    // 0x8024ADE4: lbu         $t0, 0x42($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X42);
    // 0x8024ADE8: andi        $t8, $v0, 0xC0
    ctx->r24 = ctx->r2 & 0XC0;
    // 0x8024ADEC: sra         $a0, $t8, 4
    ctx->r4 = S32(SIGNED(ctx->r24) >> 4);
    // 0x8024ADF0: bne         $a0, $zero, L_8024AE04
    if (ctx->r4 != 0) {
        // 0x8024ADF4: nop
    
            goto L_8024AE04;
    }
    // 0x8024ADF4: nop

    // 0x8024ADF8: beq         $t0, $zero, L_8024AE04
    if (ctx->r8 == 0) {
        // 0x8024ADFC: nop
    
            goto L_8024AE04;
    }
    // 0x8024ADFC: nop

    // 0x8024AE00: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
L_8024AE04:
    // 0x8024AE04: jal         0x80245B14
    // 0x8024AE08: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    static_3_80245B14(rdram, ctx);
        goto after_5;
    // 0x8024AE08: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    after_5:
    // 0x8024AE0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8024AE10: lw          $v0, 0x48($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X48);
    // 0x8024AE14: jr          $ra
    // 0x8024AE18: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x8024AE18: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void D_80280174(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802801EC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802801F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802801F4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x802801F8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x802801FC: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80280200: jal         0x803183C0
    // 0x80280204: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    static_3_803183C0(rdram, ctx);
        goto after_0;
    // 0x80280204: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x80280208: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8028020C: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x80280210: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80280214: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x80280218: nop

    // 0x8028021C: bc1fl       L_802802B0
    if (!c1cs) {
        // 0x80280220: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802802B0;
    }
    goto skip_0;
    // 0x80280220: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80280224: bne         $v0, $at, L_8028026C
    if (ctx->r2 != ctx->r1) {
        // 0x80280228: lw          $a0, 0x28($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X28);
            goto L_8028026C;
    }
    // 0x80280228: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8028022C: addiu       $a0, $a0, 0x365C
    ctx->r4 = ADD32(ctx->r4, 0X365C);
    // 0x80280230: jal         0x80317E10
    // 0x80280234: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    static_3_80317E10(rdram, ctx);
        goto after_1;
    // 0x80280234: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_1:
    // 0x80280238: beql        $v0, $zero, L_802802B0
    if (ctx->r2 == 0) {
        // 0x8028023C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802802B0;
    }
    goto skip_1;
    // 0x8028023C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x80280240: jal         0x8031A36C
    // 0x80280244: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    static_3_8031A36C(rdram, ctx);
        goto after_2;
    // 0x80280244: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_2:
    // 0x80280248: bnel        $v0, $zero, L_802802B0
    if (ctx->r2 != 0) {
        // 0x8028024C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802802B0;
    }
    goto skip_2;
    // 0x8028024C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x80280250: jal         0x802E846C
    // 0x80280254: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    static_3_802E846C(rdram, ctx);
        goto after_3;
    // 0x80280254: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_3:
    // 0x80280258: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x8028025C: jal         0x8031A374
    // 0x80280260: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_8031A374(rdram, ctx);
        goto after_4;
    // 0x80280260: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x80280264: b           L_802802B0
    // 0x80280268: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802802B0;
    // 0x80280268: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8028026C:
    // 0x8028026C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80280270: bnel        $v0, $at, L_802802B0
    if (ctx->r2 != ctx->r1) {
        // 0x80280274: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802802B0;
    }
    goto skip_3;
    // 0x80280274: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_3:
    // 0x80280278: jal         0x803187E4
    // 0x8028027C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    static_3_803187E4(rdram, ctx);
        goto after_5;
    // 0x8028027C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_5:
    // 0x80280280: beq         $v0, $zero, L_802802AC
    if (ctx->r2 == 0) {
        // 0x80280284: lw          $a0, 0x2C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X2C);
            goto L_802802AC;
    }
    // 0x80280284: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80280288: jal         0x8031A36C
    // 0x8028028C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    static_3_8031A36C(rdram, ctx);
        goto after_6;
    // 0x8028028C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_6:
    // 0x80280290: bne         $v0, $zero, L_802802AC
    if (ctx->r2 != 0) {
        // 0x80280294: lw          $a1, 0x24($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X24);
            goto L_802802AC;
    }
    // 0x80280294: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80280298: jal         0x802E846C
    // 0x8028029C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    static_3_802E846C(rdram, ctx);
        goto after_7;
    // 0x8028029C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_7:
    // 0x802802A0: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802802A4: jal         0x8031A374
    // 0x802802A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_8031A374(rdram, ctx);
        goto after_8;
    // 0x802802A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
L_802802AC:
    // 0x802802AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802802B0:
    // 0x802802B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802802B4: jr          $ra
    // 0x802802B8: nop

    return;
    // 0x802802B8: nop

;}
RECOMP_FUNC void D_802CCDD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802CCE54: addiu       $sp, $sp, -0xC0
    ctx->r29 = ADD32(ctx->r29, -0XC0);
    // 0x802CCE58: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x802CCE5C: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x802CCE60: addu        $s2, $a0, $at
    ctx->r18 = ADD32(ctx->r4, ctx->r1);
    // 0x802CCE64: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x802CCE68: lui         $at, 0x42FA
    ctx->r1 = S32(0X42FA << 16);
    // 0x802CCE6C: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x802CCE70: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x802CCE74: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x802CCE78: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x802CCE7C: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x802CCE80: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    // 0x802CCE84: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x802CCE88: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x802CCE8C: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x802CCE90: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x802CCE94: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802CCE98: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x802CCE9C: addiu       $s7, $sp, 0x7C
    ctx->r23 = ADD32(ctx->r29, 0X7C);
    // 0x802CCEA0: ori         $fp, $zero, 0x8000
    ctx->r30 = 0 | 0X8000;
L_802CCEA4:
    // 0x802CCEA4: lbu         $t6, 0x1B1C($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X1B1C);
    // 0x802CCEA8: sll         $s0, $s1, 2
    ctx->r16 = S32(ctx->r17 << 2);
    // 0x802CCEAC: addu        $t7, $s6, $s0
    ctx->r15 = ADD32(ctx->r22, ctx->r16);
    // 0x802CCEB0: bne         $t6, $zero, L_802CCF80
    if (ctx->r14 != 0) {
        // 0x802CCEB4: addu        $t8, $t7, $fp
        ctx->r24 = ADD32(ctx->r15, ctx->r30);
            goto L_802CCF80;
    }
    // 0x802CCEB4: addu        $t8, $t7, $fp
    ctx->r24 = ADD32(ctx->r15, ctx->r30);
    // 0x802CCEB8: lw          $v1, 0x1B0C($t8)
    ctx->r3 = MEM_W(ctx->r24, 0X1B0C);
    // 0x802CCEBC: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x802CCEC0: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x802CCEC4: lw          $v0, 0x1A0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1A0);
    // 0x802CCEC8: addiu       $t1, $t1, 0x0
    ctx->r9 = ADD32(ctx->r9, 0X0);
    // 0x802CCECC: addiu       $t0, $t0, 0x0
    ctx->r8 = ADD32(ctx->r8, 0X0);
    // 0x802CCED0: lh          $t9, 0x60($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X60);
    // 0x802CCED4: addu        $s3, $s0, $t0
    ctx->r19 = ADD32(ctx->r16, ctx->r8);
    // 0x802CCED8: addu        $s4, $s0, $t1
    ctx->r20 = ADD32(ctx->r16, ctx->r9);
    // 0x802CCEDC: addu        $a0, $t9, $v1
    ctx->r4 = ADD32(ctx->r25, ctx->r3);
    // 0x802CCEE0: lw          $t9, 0x64($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X64);
    // 0x802CCEE4: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x802CCEE8: jalr        $t9
    // 0x802CCEEC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x802CCEEC: nop

    after_0:
    // 0x802CCEF0: lwc1        $f4, 0x0($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X0);
    // 0x802CCEF4: lwc1        $f6, 0xAC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x802CCEF8: lwc1        $f8, 0x0($s4)
    ctx->f8.u32l = MEM_W(ctx->r20, 0X0);
    // 0x802CCEFC: lwc1        $f10, 0xB0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x802CCF00: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x802CCF04: jal         0x8022ADA8
    // 0x802CCF08: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    static_3_8022ADA8(rdram, ctx);
        goto after_1;
    // 0x802CCF08: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    after_1:
    // 0x802CCF0C: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x802CCF10: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x802CCF14: addiu       $t3, $t3, 0x0
    ctx->r11 = ADD32(ctx->r11, 0X0);
    // 0x802CCF18: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x802CCF1C: bc1f        L_802CCF80
    if (!c1cs) {
        // 0x802CCF20: addu        $s5, $s0, $t3
        ctx->r21 = ADD32(ctx->r16, ctx->r11);
            goto L_802CCF80;
    }
    // 0x802CCF20: addu        $s5, $s0, $t3
    ctx->r21 = ADD32(ctx->r16, ctx->r11);
    // 0x802CCF24: sb          $t2, 0x1B1C($s2)
    MEM_B(0X1B1C, ctx->r18) = ctx->r10;
    // 0x802CCF28: jal         0x802AF028
    // 0x802CCF2C: lw          $a0, 0x14($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X14);
    static_3_802AF028(rdram, ctx);
        goto after_2;
    // 0x802CCF2C: lw          $a0, 0x14($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X14);
    after_2:
    // 0x802CCF30: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802CCF34: lw          $a1, 0x0($s5)
    ctx->r5 = MEM_W(ctx->r21, 0X0);
    // 0x802CCF38: jal         0x8022EE60
    // 0x802CCF3C: addiu       $a2, $sp, 0x68
    ctx->r6 = ADD32(ctx->r29, 0X68);
    static_3_8022EE60(rdram, ctx);
        goto after_3;
    // 0x802CCF3C: addiu       $a2, $sp, 0x68
    ctx->r6 = ADD32(ctx->r29, 0X68);
    after_3:
    // 0x802CCF40: jal         0x8022970C
    // 0x802CCF44: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    func_8022970C(rdram, ctx);
        goto after_4;
    // 0x802CCF44: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    after_4:
    // 0x802CCF48: lwc1        $f16, 0x0($s3)
    ctx->f16.u32l = MEM_W(ctx->r19, 0X0);
    // 0x802CCF4C: lwc1        $f18, 0x0($s4)
    ctx->f18.u32l = MEM_W(ctx->r20, 0X0);
    // 0x802CCF50: lw          $t4, 0x68($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X68);
    // 0x802CCF54: swc1        $f16, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f16.u32l;
    // 0x802CCF58: swc1        $f18, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f18.u32l;
    // 0x802CCF5C: lw          $a0, 0x14($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X14);
    // 0x802CCF60: addiu       $t5, $zero, 0x5
    ctx->r13 = ADD32(0, 0X5);
    // 0x802CCF64: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802CCF68: lw          $a1, 0x0($t4)
    ctx->r5 = MEM_W(ctx->r12, 0X0);
    // 0x802CCF6C: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x802CCF70: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x802CCF74: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802CCF78: jal         0x802AF254
    // 0x802CCF7C: or          $a3, $s7, $zero
    ctx->r7 = ctx->r23 | 0;
    static_3_802AF254(rdram, ctx);
        goto after_5;
    // 0x802CCF7C: or          $a3, $s7, $zero
    ctx->r7 = ctx->r23 | 0;
    after_5:
L_802CCF80:
    // 0x802CCF80: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x802CCF84: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x802CCF88: bne         $s1, $at, L_802CCEA4
    if (ctx->r17 != ctx->r1) {
        // 0x802CCF8C: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_802CCEA4;
    }
    // 0x802CCF8C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x802CCF90: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x802CCF94: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x802CCF98: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802CCF9C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x802CCFA0: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x802CCFA4: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x802CCFA8: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x802CCFAC: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x802CCFB0: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x802CCFB4: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x802CCFB8: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x802CCFBC: jr          $ra
    // 0x802CCFC0: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
    return;
    // 0x802CCFC0: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
;}
RECOMP_FUNC void D_802D27D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D2850: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802D2854: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802D2858: bne         $a0, $zero, L_802D2870
    if (ctx->r4 != 0) {
        // 0x802D285C: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_802D2870;
    }
    // 0x802D285C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802D2860: jal         0x802C67EC
    // 0x802D2864: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802D2864: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    after_0:
    // 0x802D2868: beq         $v0, $zero, L_802D2880
    if (ctx->r2 == 0) {
        // 0x802D286C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802D2880;
    }
    // 0x802D286C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_802D2870:
    // 0x802D2870: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x802D2874: jal         0x80302FE8
    // 0x802D2878: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_80302FE8(rdram, ctx);
        goto after_1;
    // 0x802D2878: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x802D287C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_802D2880:
    // 0x802D2880: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802D2884: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802D2888: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x802D288C: jr          $ra
    // 0x802D2890: nop

    return;
    // 0x802D2890: nop

;}
RECOMP_FUNC void D_802340EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802340EC: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802340F0: lhu         $t6, 0x0($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X0);
    // 0x802340F4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802340F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802340FC: slt         $at, $a0, $t6
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80234100: bne         $at, $zero, L_8023411C
    if (ctx->r1 != 0) {
        // 0x80234104: or          $a1, $a0, $zero
        ctx->r5 = ctx->r4 | 0;
            goto L_8023411C;
    }
    // 0x80234104: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80234108: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8023410C: jal         0x80231A24
    // 0x80234110: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x80234110: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x80234114: b           L_80234184
    // 0x80234118: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80234184;
    // 0x80234118: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8023411C:
    // 0x8023411C: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x80234120: subu        $t7, $t7, $a1
    ctx->r15 = SUB32(ctx->r15, ctx->r5);
    // 0x80234124: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x80234128: lw          $t8, 0x0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X0);
    // 0x8023412C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80234130: addu        $t7, $t7, $a1
    ctx->r15 = ADD32(ctx->r15, ctx->r5);
    // 0x80234134: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80234138: addu        $a2, $t7, $t8
    ctx->r6 = ADD32(ctx->r15, ctx->r24);
    // 0x8023413C: lhu         $t9, 0xC($a2)
    ctx->r25 = MEM_HU(ctx->r6, 0XC);
    // 0x80234140: addiu       $at, $zero, 0xFFF
    ctx->r1 = ADD32(0, 0XFFF);
    // 0x80234144: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80234148: beq         $t9, $at, L_80234180
    if (ctx->r25 == ctx->r1) {
        // 0x8023414C: addiu       $a0, $a0, 0x0
        ctx->r4 = ADD32(ctx->r4, 0X0);
            goto L_80234180;
    }
    // 0x8023414C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80234150: jal         0x8023CBF0
    // 0x80234154: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    static_3_8023CBF0(rdram, ctx);
        goto after_1;
    // 0x80234154: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_1:
    // 0x80234158: jal         0x80233EA0
    // 0x8023415C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    static_3_80233EA0(rdram, ctx);
        goto after_2;
    // 0x8023415C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_2:
    // 0x80234160: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80234164: jal         0x8023A700
    // 0x80234168: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_8023A700(rdram, ctx);
        goto after_3;
    // 0x80234168: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_3:
    // 0x8023416C: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x80234170: lw          $t0, 0x0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X0);
    // 0x80234174: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80234178: addiu       $t1, $t0, -0x8
    ctx->r9 = ADD32(ctx->r8, -0X8);
    // 0x8023417C: sw          $t1, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r9;
L_80234180:
    // 0x80234180: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80234184:
    // 0x80234184: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80234188: jr          $ra
    // 0x8023418C: nop

    return;
    // 0x8023418C: nop

;}
RECOMP_FUNC void D_802820C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282144: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80282148: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8028214C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80282150: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80282154: addiu       $v0, $a0, 0x7FFF
    ctx->r2 = ADD32(ctx->r4, 0X7FFF);
    // 0x80282158: lbu         $v0, 0x6DB7($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X6DB7);
    // 0x8028215C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80282160: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80282164: bne         $v0, $at, L_802821BC
    if (ctx->r2 != ctx->r1) {
        // 0x80282168: lui         $at, 0x1
        ctx->r1 = S32(0X1 << 16);
            goto L_802821BC;
    }
    // 0x80282168: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x8028216C: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x80282170: lwc1        $f0, -0x1248($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X1248);
    // 0x80282174: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x80282178: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8028217C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80282180: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80282184: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80282188: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8028218C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80282190: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x80282194: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80282198: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    // 0x8028219C: addiu       $a1, $s0, 0x70
    ctx->r5 = ADD32(ctx->r16, 0X70);
    // 0x802821A0: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x802821A4: lui         $a3, 0x43AF
    ctx->r7 = S32(0X43AF << 16);
    // 0x802821A8: sub.s       $f2, $f4, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x802821AC: sub.s       $f12, $f10, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x802821B0: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x802821B4: jal         0x802AFF70
    // 0x802821B8: swc1        $f12, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f12.u32l;
    static_3_802AFF70(rdram, ctx);
        goto after_0;
    // 0x802821B8: swc1        $f12, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f12.u32l;
    after_0:
L_802821BC:
    // 0x802821BC: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x802821C0: addu        $v0, $s0, $at
    ctx->r2 = ADD32(ctx->r16, ctx->r1);
    // 0x802821C4: lwc1        $f6, 0x6DB8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X6DB8);
    // 0x802821C8: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x802821CC: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x802821D0: swc1        $f8, 0x6DB8($v0)
    MEM_W(0X6DB8, ctx->r2) = ctx->f8.u32l;
    // 0x802821D4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802821D8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802821DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802821E0: jr          $ra
    // 0x802821E4: nop

    return;
    // 0x802821E4: nop

;}
RECOMP_FUNC void D_802375A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802375A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802375A4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802375A8: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x802375AC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802375B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802375B4: sltu        $at, $t6, $at
    ctx->r1 = ctx->r14 < ctx->r1 ? 1 : 0;
    // 0x802375B8: bne         $at, $zero, L_802375D8
    if (ctx->r1 != 0) {
        // 0x802375BC: lui         $at, 0xA000
        ctx->r1 = S32(0XA000 << 16);
            goto L_802375D8;
    }
    // 0x802375BC: lui         $at, 0xA000
    ctx->r1 = S32(0XA000 << 16);
    // 0x802375C0: sltu        $at, $t6, $at
    ctx->r1 = ctx->r14 < ctx->r1 ? 1 : 0;
    // 0x802375C4: beq         $at, $zero, L_802375D8
    if (ctx->r1 == 0) {
        // 0x802375C8: lui         $at, 0x1FFF
        ctx->r1 = S32(0X1FFF << 16);
            goto L_802375D8;
    }
    // 0x802375C8: lui         $at, 0x1FFF
    ctx->r1 = S32(0X1FFF << 16);
    // 0x802375CC: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x802375D0: b           L_8023760C
    // 0x802375D4: and         $v0, $t6, $at
    ctx->r2 = ctx->r14 & ctx->r1;
        goto L_8023760C;
    // 0x802375D4: and         $v0, $t6, $at
    ctx->r2 = ctx->r14 & ctx->r1;
L_802375D8:
    // 0x802375D8: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x802375DC: lui         $at, 0xA000
    ctx->r1 = S32(0XA000 << 16);
    // 0x802375E0: sltu        $at, $t7, $at
    ctx->r1 = ctx->r15 < ctx->r1 ? 1 : 0;
    // 0x802375E4: bne         $at, $zero, L_80237604
    if (ctx->r1 != 0) {
        // 0x802375E8: lui         $at, 0xC000
        ctx->r1 = S32(0XC000 << 16);
            goto L_80237604;
    }
    // 0x802375E8: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
    // 0x802375EC: sltu        $at, $t7, $at
    ctx->r1 = ctx->r15 < ctx->r1 ? 1 : 0;
    // 0x802375F0: beq         $at, $zero, L_80237604
    if (ctx->r1 == 0) {
        // 0x802375F4: lui         $at, 0x1FFF
        ctx->r1 = S32(0X1FFF << 16);
            goto L_80237604;
    }
    // 0x802375F4: lui         $at, 0x1FFF
    ctx->r1 = S32(0X1FFF << 16);
    // 0x802375F8: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x802375FC: b           L_8023760C
    // 0x80237600: and         $v0, $t7, $at
    ctx->r2 = ctx->r15 & ctx->r1;
        goto L_8023760C;
    // 0x80237600: and         $v0, $t7, $at
    ctx->r2 = ctx->r15 & ctx->r1;
L_80237604:
    // 0x80237604: jal         0x80242240
    // 0x80237608: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    static_3_80242240(rdram, ctx);
        goto after_0;
    // 0x80237608: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
L_8023760C:
    // 0x8023760C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80237610: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80237614: jr          $ra
    // 0x80237618: nop

    return;
    // 0x80237618: nop

;}
RECOMP_FUNC void D_802156AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802156AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802156B0: lhu         $t0, 0x2A($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X2A);
    // 0x802156B4: sdc1        $f22, 0x10($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X10, ctx->r29);
    // 0x802156B8: sdc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X8, ctx->r29);
    // 0x802156BC: sll         $t1, $t0, 4
    ctx->r9 = S32(ctx->r8 << 4);
    // 0x802156C0: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    // 0x802156C4: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x802156C8: addu        $v1, $a2, $t1
    ctx->r3 = ADD32(ctx->r6, ctx->r9);
    // 0x802156CC: lh          $t2, 0x0($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X0);
    // 0x802156D0: lh          $t3, 0x2($v1)
    ctx->r11 = MEM_H(ctx->r3, 0X2);
    // 0x802156D4: andi        $t6, $a3, 0xFFFF
    ctx->r14 = ctx->r7 & 0XFFFF;
    // 0x802156D8: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x802156DC: lhu         $t4, 0x2E($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X2E);
    // 0x802156E0: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x802156E4: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x802156E8: addu        $v0, $a2, $t7
    ctx->r2 = ADD32(ctx->r6, ctx->r15);
    // 0x802156EC: lh          $t8, 0x0($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X0);
    // 0x802156F0: lh          $t9, 0x2($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X2);
    // 0x802156F4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802156F8: sll         $t5, $t4, 4
    ctx->r13 = S32(ctx->r12 << 4);
    // 0x802156FC: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80215700: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80215704: addu        $a0, $a2, $t5
    ctx->r4 = ADD32(ctx->r6, ctx->r13);
    // 0x80215708: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x8021570C: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x80215710: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80215714: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80215718: lh          $t6, 0x0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X0);
    // 0x8021571C: lh          $t7, 0x2($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X2);
    // 0x80215720: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80215724: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x80215728: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8021572C: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80215730: cvt.s.w     $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    ctx->f2.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80215734: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x80215738: cvt.s.w     $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    ctx->f20.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8021573C: bc1t        L_80215780
    if (c1cs) {
        // 0x80215740: cvt.s.w     $f22, $f6
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    ctx->f22.fl = CVT_S_W(ctx->f6.u32l);
            goto L_80215780;
    }
    // 0x80215740: cvt.s.w     $f22, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    ctx->f22.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80215744: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80215748: nop

    // 0x8021574C: div.s       $f12, $f4, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    // 0x80215750: mul.s       $f0, $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x80215754: nop

    // 0x80215758: mul.s       $f2, $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x8021575C: nop

    // 0x80215760: mul.s       $f16, $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x80215764: nop

    // 0x80215768: mul.s       $f18, $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f18.fl, ctx->f12.fl);
    // 0x8021576C: nop

    // 0x80215770: mul.s       $f20, $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f12.fl);
    // 0x80215774: nop

    // 0x80215778: mul.s       $f22, $f22, $f12
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f22.fl = MUL_S(ctx->f22.fl, ctx->f12.fl);
    // 0x8021577C: nop

L_80215780:
    // 0x80215780: lwc1        $f6, 0x18($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80215784: sub.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f2.fl;
    // 0x80215788: sub.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x8021578C: sub.s       $f6, $f14, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f14.fl - ctx->f2.fl;
    // 0x80215790: mul.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x80215794: sub.s       $f10, $f16, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f16.fl - ctx->f0.fl;
    // 0x80215798: mul.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x8021579C: lwc1        $f6, 0x18($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X18);
    // 0x802157A0: c.lt.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl < ctx->f4.fl;
    // 0x802157A4: nop

    // 0x802157A8: bc1fl       L_802157BC
    if (!c1cs) {
        // 0x802157AC: sub.s       $f10, $f6, $f16
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f16.fl;
            goto L_802157BC;
    }
    goto skip_0;
    // 0x802157AC: sub.s       $f10, $f6, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f16.fl;
    skip_0:
    // 0x802157B0: b           L_80215820
    // 0x802157B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80215820;
    // 0x802157B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802157B8: sub.s       $f10, $f6, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f16.fl;
L_802157BC:
    // 0x802157BC: sub.s       $f8, $f22, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f22.fl - ctx->f18.fl;
    // 0x802157C0: sub.s       $f6, $f14, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f14.fl - ctx->f18.fl;
    // 0x802157C4: mul.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x802157C8: sub.s       $f10, $f20, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f20.fl - ctx->f16.fl;
    // 0x802157CC: mul.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x802157D0: lwc1        $f6, 0x18($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X18);
    // 0x802157D4: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x802157D8: nop

    // 0x802157DC: bc1fl       L_802157F0
    if (!c1cs) {
        // 0x802157E0: sub.s       $f10, $f6, $f20
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f20.fl;
            goto L_802157F0;
    }
    goto skip_1;
    // 0x802157E0: sub.s       $f10, $f6, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f20.fl;
    skip_1:
    // 0x802157E4: b           L_80215820
    // 0x802157E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80215820;
    // 0x802157E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802157EC: sub.s       $f10, $f6, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f20.fl;
L_802157F0:
    // 0x802157F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802157F4: sub.s       $f4, $f2, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f22.fl;
    // 0x802157F8: sub.s       $f6, $f14, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = ctx->f14.fl - ctx->f22.fl;
    // 0x802157FC: mul.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x80215800: sub.s       $f10, $f0, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f20.fl;
    // 0x80215804: mul.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80215808: c.lt.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl < ctx->f4.fl;
    // 0x8021580C: nop

    // 0x80215810: bc1f        L_80215820
    if (!c1cs) {
        // 0x80215814: nop
    
            goto L_80215820;
    }
    // 0x80215814: nop

    // 0x80215818: b           L_80215820
    // 0x8021581C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80215820;
    // 0x8021581C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80215820:
    // 0x80215820: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
    // 0x80215824: ldc1        $f22, 0x10($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X10);
    // 0x80215828: jr          $ra
    // 0x8021582C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8021582C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void D_802376E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802376E8: lw          $t6, 0x44($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X44);
    // 0x802376EC: mtc1        $a1, $f4
    ctx->f4.u32l = ctx->r5;
    // 0x802376F0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802376F4: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x802376F8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802376FC: ldc1        $f4, 0x0($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, 0X0);
    // 0x80237700: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80237704: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80237708: addiu       $at, $zero, -0x10
    ctx->r1 = ADD32(0, -0X10);
    // 0x8023770C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80237710: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80237714: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80237718: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x8023771C: div.d       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = DIV_D(ctx->f18.d, ctx->f4.d);
    // 0x80237720: add.d       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = ctx->f8.d + ctx->f6.d;
    // 0x80237724: cvt.s.d     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f0.fl = CVT_S_D(ctx->f10.d);
    // 0x80237728: trunc.w.s   $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x8023772C: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x80237730: nop

    // 0x80237734: and         $t8, $v0, $at
    ctx->r24 = ctx->r2 & ctx->r1;
    // 0x80237738: jr          $ra
    // 0x8023773C: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    return;
    // 0x8023773C: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
;}
RECOMP_FUNC void D_8021E61C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021E61C: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x8021E620: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8021E624: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8021E628: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021E62C: lw          $t6, 0x44($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X44);
    // 0x8021E630: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x8021E634: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8021E638: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8021E63C: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x8021E640: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8021E644: beq         $t9, $zero, L_8021E654
    if (ctx->r25 == 0) {
        // 0x8021E648: nop
    
            goto L_8021E654;
    }
    // 0x8021E648: nop

    // 0x8021E64C: b           L_8021E668
    // 0x8021E650: sw          $a0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r4;
        goto L_8021E668;
    // 0x8021E650: sw          $a0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r4;
L_8021E654:
    // 0x8021E654: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8021E658: jal         0x80231A24
    // 0x8021E65C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x8021E65C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x8021E660: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x8021E664: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
L_8021E668:
    // 0x8021E668: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x8021E66C: lw          $t1, 0x0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X0);
    // 0x8021E670: lw          $t0, 0x44($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X44);
    // 0x8021E674: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021E678: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8021E67C: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x8021E680: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x8021E684: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8021E688: lw          $t5, 0xC($t4)
    ctx->r13 = MEM_W(ctx->r12, 0XC);
    // 0x8021E68C: lh          $t6, 0x0($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X0);
    // 0x8021E690: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8021E694: jr          $ra
    // 0x8021E698: sw          $t6, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r14;
    return;
    // 0x8021E698: sw          $t6, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r14;
;}
RECOMP_FUNC void D_802906F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80290774: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x80290778: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x8029077C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80290780: and         $a2, $a1, $at
    ctx->r6 = ctx->r5 & ctx->r1;
    // 0x80290784: bne         $v0, $a2, L_80290794
    if (ctx->r2 != ctx->r6) {
        // 0x80290788: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_80290794;
    }
    // 0x80290788: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8029078C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80290790: sw          $v0, 0xE08($a0)
    MEM_W(0XE08, ctx->r4) = ctx->r2;
L_80290794:
    // 0x80290794: lw          $v0, 0xE0C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XE0C);
    // 0x80290798: bnel        $v0, $a2, L_802907AC
    if (ctx->r2 != ctx->r6) {
        // 0x8029079C: lw          $v0, 0xE10($a0)
        ctx->r2 = MEM_W(ctx->r4, 0XE10);
            goto L_802907AC;
    }
    goto skip_0;
    // 0x8029079C: lw          $v0, 0xE10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XE10);
    skip_0:
    // 0x802907A0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802907A4: sw          $v0, 0xE08($a0)
    MEM_W(0XE08, ctx->r4) = ctx->r2;
    // 0x802907A8: lw          $v0, 0xE10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XE10);
L_802907AC:
    // 0x802907AC: bnel        $v0, $a2, L_802907C0
    if (ctx->r2 != ctx->r6) {
        // 0x802907B0: lw          $v0, 0xE14($a0)
        ctx->r2 = MEM_W(ctx->r4, 0XE14);
            goto L_802907C0;
    }
    goto skip_1;
    // 0x802907B0: lw          $v0, 0xE14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XE14);
    skip_1:
    // 0x802907B4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802907B8: sw          $v0, 0xE08($a0)
    MEM_W(0XE08, ctx->r4) = ctx->r2;
    // 0x802907BC: lw          $v0, 0xE14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XE14);
L_802907C0:
    // 0x802907C0: bnel        $v0, $a2, L_802907D4
    if (ctx->r2 != ctx->r6) {
        // 0x802907C4: lw          $v0, 0xE18($a0)
        ctx->r2 = MEM_W(ctx->r4, 0XE18);
            goto L_802907D4;
    }
    goto skip_2;
    // 0x802907C4: lw          $v0, 0xE18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XE18);
    skip_2:
    // 0x802907C8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802907CC: sw          $v0, 0xE08($a0)
    MEM_W(0XE08, ctx->r4) = ctx->r2;
    // 0x802907D0: lw          $v0, 0xE18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XE18);
L_802907D4:
    // 0x802907D4: bnel        $v0, $a2, L_802907E8
    if (ctx->r2 != ctx->r6) {
        // 0x802907D8: lw          $v0, 0xE1C($a0)
        ctx->r2 = MEM_W(ctx->r4, 0XE1C);
            goto L_802907E8;
    }
    goto skip_3;
    // 0x802907D8: lw          $v0, 0xE1C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XE1C);
    skip_3:
    // 0x802907DC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802907E0: sw          $v0, 0xE08($a0)
    MEM_W(0XE08, ctx->r4) = ctx->r2;
    // 0x802907E4: lw          $v0, 0xE1C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XE1C);
L_802907E8:
    // 0x802907E8: bnel        $v0, $a2, L_802907FC
    if (ctx->r2 != ctx->r6) {
        // 0x802907EC: lw          $v0, 0xF20($a0)
        ctx->r2 = MEM_W(ctx->r4, 0XF20);
            goto L_802907FC;
    }
    goto skip_4;
    // 0x802907EC: lw          $v0, 0xF20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XF20);
    skip_4:
    // 0x802907F0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802907F4: sw          $v0, 0xE08($a0)
    MEM_W(0XE08, ctx->r4) = ctx->r2;
    // 0x802907F8: lw          $v0, 0xF20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XF20);
L_802907FC:
    // 0x802907FC: bnel        $v0, $a2, L_80290810
    if (ctx->r2 != ctx->r6) {
        // 0x80290800: lw          $v0, 0xF24($a0)
        ctx->r2 = MEM_W(ctx->r4, 0XF24);
            goto L_80290810;
    }
    goto skip_5;
    // 0x80290800: lw          $v0, 0xF24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XF24);
    skip_5:
    // 0x80290804: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80290808: sw          $v0, 0xE08($a0)
    MEM_W(0XE08, ctx->r4) = ctx->r2;
    // 0x8029080C: lw          $v0, 0xF24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XF24);
L_80290810:
    // 0x80290810: bne         $v0, $a2, L_80290820
    if (ctx->r2 != ctx->r6) {
        // 0x80290814: nop
    
            goto L_80290820;
    }
    // 0x80290814: nop

    // 0x80290818: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8029081C: sw          $v0, 0xE08($a0)
    MEM_W(0XE08, ctx->r4) = ctx->r2;
L_80290820:
    // 0x80290820: jr          $ra
    // 0x80290824: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    return;
    // 0x80290824: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
;}
RECOMP_FUNC void D_802ECEDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802ECF5C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802ECF60: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802ECF64: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x802ECF68: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802ECF6C: lui         $at, 0x457A
    ctx->r1 = S32(0X457A << 16);
    // 0x802ECF70: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802ECF74: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x802ECF78: addiu       $t6, $zero, 0x11
    ctx->r14 = ADD32(0, 0X11);
    // 0x802ECF7C: addiu       $t7, $zero, 0x18D
    ctx->r15 = ADD32(0, 0X18D);
    // 0x802ECF80: addiu       $t8, $zero, 0xC
    ctx->r24 = ADD32(0, 0XC);
    // 0x802ECF84: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802ECF88: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x802ECF8C: sh          $t6, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r14;
    // 0x802ECF90: sh          $t9, 0xA4($a0)
    MEM_H(0XA4, ctx->r4) = ctx->r25;
    // 0x802ECF94: sh          $t8, 0xA6($a0)
    MEM_H(0XA6, ctx->r4) = ctx->r24;
    // 0x802ECF98: sh          $t7, 0x9C($a0)
    MEM_H(0X9C, ctx->r4) = ctx->r15;
    // 0x802ECF9C: sh          $v0, 0x98($a0)
    MEM_H(0X98, ctx->r4) = ctx->r2;
    // 0x802ECFA0: sh          $v0, 0x9A($a0)
    MEM_H(0X9A, ctx->r4) = ctx->r2;
    // 0x802ECFA4: sb          $t0, 0x74($a0)
    MEM_B(0X74, ctx->r4) = ctx->r8;
    // 0x802ECFA8: swc1        $f0, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f0.u32l;
    // 0x802ECFAC: swc1        $f0, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f0.u32l;
    // 0x802ECFB0: swc1        $f0, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f0.u32l;
    // 0x802ECFB4: swc1        $f4, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->f4.u32l;
    // 0x802ECFB8: jr          $ra
    // 0x802ECFBC: swc1        $f6, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f6.u32l;
    return;
    // 0x802ECFBC: swc1        $f6, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f6.u32l;
;}
RECOMP_FUNC void D_802E5CE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E5D68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802E5D6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802E5D70: bne         $a0, $zero, L_802E5D88
    if (ctx->r4 != 0) {
        // 0x802E5D74: or          $a1, $a0, $zero
        ctx->r5 = ctx->r4 | 0;
            goto L_802E5D88;
    }
    // 0x802E5D74: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x802E5D78: jal         0x802C67EC
    // 0x802E5D7C: addiu       $a0, $zero, 0x1C4
    ctx->r4 = ADD32(0, 0X1C4);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802E5D7C: addiu       $a0, $zero, 0x1C4
    ctx->r4 = ADD32(0, 0X1C4);
    after_0:
    // 0x802E5D80: beq         $v0, $zero, L_802E5D98
    if (ctx->r2 == 0) {
        // 0x802E5D84: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_802E5D98;
    }
    // 0x802E5D84: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_802E5D88:
    // 0x802E5D88: addiu       $a0, $a1, 0x50
    ctx->r4 = ADD32(ctx->r5, 0X50);
    // 0x802E5D8C: jal         0x8031FC14
    // 0x802E5D90: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    static_3_8031FC14(rdram, ctx);
        goto after_1;
    // 0x802E5D90: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_1:
    // 0x802E5D94: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
L_802E5D98:
    // 0x802E5D98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802E5D9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802E5DA0: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x802E5DA4: jr          $ra
    // 0x802E5DA8: nop

    return;
    // 0x802E5DA8: nop

;}
RECOMP_FUNC void D_802C9AC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802C9B44: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x802C9B48: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x802C9B4C: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x802C9B50: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802C9B54: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
L_802C9B58:
    // 0x802C9B58: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x802C9B5C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802C9B60: sh          $a0, 0x8($a1)
    MEM_H(0X8, ctx->r5) = ctx->r4;
    // 0x802C9B64: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x802C9B68: bne         $v0, $a2, L_802C9B58
    if (ctx->r2 != ctx->r6) {
        // 0x802C9B6C: addiu       $a1, $a1, 0x2
        ctx->r5 = ADD32(ctx->r5, 0X2);
            goto L_802C9B58;
    }
    // 0x802C9B6C: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x802C9B70: jr          $ra
    // 0x802C9B74: nop

    return;
    // 0x802C9B74: nop

;}
RECOMP_FUNC void D_802238C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802238C4: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x802238C8: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802238CC: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x802238D0: jr          $ra
    // 0x802238D4: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    return;
    // 0x802238D4: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
;}
RECOMP_FUNC void D_8028B5A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028B624: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8028B628: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8028B62C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8028B630: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    // 0x8028B634: lw          $v1, 0x220($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X220);
    // 0x8028B638: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x8028B63C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8028B640: lw          $v0, 0x4C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4C);
    // 0x8028B644: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    // 0x8028B648: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    // 0x8028B64C: beq         $v0, $v1, L_8028B698
    if (ctx->r2 == ctx->r3) {
        // 0x8028B650: addiu       $a3, $sp, 0x40
        ctx->r7 = ADD32(ctx->r29, 0X40);
            goto L_8028B698;
    }
    // 0x8028B650: addiu       $a3, $sp, 0x40
    ctx->r7 = ADD32(ctx->r29, 0X40);
    // 0x8028B654: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8028B658: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8028B65C: sub.s       $f8, $f12, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f12.fl - ctx->f6.fl;
    // 0x8028B660: c.le.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl <= ctx->f4.fl;
    // 0x8028B664: nop

    // 0x8028B668: bc1fl       L_8028B69C
    if (!c1cs) {
        // 0x8028B66C: addiu       $t6, $sp, 0x3C
        ctx->r14 = ADD32(ctx->r29, 0X3C);
            goto L_8028B69C;
    }
    goto skip_0;
    // 0x8028B66C: addiu       $t6, $sp, 0x3C
    ctx->r14 = ADD32(ctx->r29, 0X3C);
    skip_0:
    // 0x8028B670: lw          $v0, 0x4C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4C);
L_8028B674:
    // 0x8028B674: beql        $v0, $v1, L_8028B69C
    if (ctx->r2 == ctx->r3) {
        // 0x8028B678: addiu       $t6, $sp, 0x3C
        ctx->r14 = ADD32(ctx->r29, 0X3C);
            goto L_8028B69C;
    }
    goto skip_1;
    // 0x8028B678: addiu       $t6, $sp, 0x3C
    ctx->r14 = ADD32(ctx->r29, 0X3C);
    skip_1:
    // 0x8028B67C: lwc1        $f16, 0x0($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8028B680: lwc1        $f10, 0x4($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8028B684: sub.s       $f18, $f12, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f12.fl - ctx->f16.fl;
    // 0x8028B688: c.le.s      $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f18.fl <= ctx->f10.fl;
    // 0x8028B68C: nop

    // 0x8028B690: bc1tl       L_8028B674
    if (c1cs) {
        // 0x8028B694: lw          $v0, 0x4C($v0)
        ctx->r2 = MEM_W(ctx->r2, 0X4C);
            goto L_8028B674;
    }
    goto skip_2;
    // 0x8028B694: lw          $v0, 0x4C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4C);
    skip_2:
L_8028B698:
    // 0x8028B698: addiu       $t6, $sp, 0x3C
    ctx->r14 = ADD32(ctx->r29, 0X3C);
L_8028B69C:
    // 0x8028B69C: addiu       $t7, $sp, 0x38
    ctx->r15 = ADD32(ctx->r29, 0X38);
    // 0x8028B6A0: addiu       $t8, $sp, 0x34
    ctx->r24 = ADD32(ctx->r29, 0X34);
    // 0x8028B6A4: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x8028B6A8: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8028B6AC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8028B6B0: jal         0x802CF1C8
    // 0x8028B6B4: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
    static_3_802CF1C8(rdram, ctx);
        goto after_0;
    // 0x8028B6B4: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
    after_0:
    // 0x8028B6B8: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8028B6BC: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x8028B6C0: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8028B6C4: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x8028B6C8: mul.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x8028B6CC: lw          $t9, 0x6C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X6C);
    // 0x8028B6D0: mul.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f10.fl);
    // 0x8028B6D4: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8028B6D8: add.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x8028B6DC: lwc1        $f8, 0x20($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X20);
    // 0x8028B6E0: mul.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x8028B6E4: add.s       $f8, $f4, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x8028B6E8: lwc1        $f4, 0x30($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X30);
    // 0x8028B6EC: lwc1        $f18, 0x4($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X4);
    // 0x8028B6F0: add.s       $f2, $f8, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x8028B6F4: mul.s       $f8, $f6, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f18.fl);
    // 0x8028B6F8: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x8028B6FC: mul.s       $f18, $f16, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x8028B700: add.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x8028B704: lwc1        $f8, 0x24($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X24);
    // 0x8028B708: mul.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x8028B70C: add.s       $f8, $f4, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x8028B710: lwc1        $f4, 0x34($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X34);
    // 0x8028B714: lwc1        $f18, 0xC($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XC);
    // 0x8028B718: add.s       $f12, $f8, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x8028B71C: mul.s       $f8, $f6, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f18.fl);
    // 0x8028B720: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x8028B724: mul.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x8028B728: lwc1        $f16, 0x2C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x8028B72C: mul.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x8028B730: add.s       $f18, $f8, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x8028B734: lwc1        $f6, 0x3C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x8028B738: add.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x8028B73C: add.s       $f0, $f8, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x8028B740: div.s       $f10, $f2, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
    // 0x8028B744: div.s       $f16, $f12, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = DIV_S(ctx->f12.fl, ctx->f0.fl);
    // 0x8028B748: swc1        $f10, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f10.u32l;
    // 0x8028B74C: lw          $t0, 0x70($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X70);
    // 0x8028B750: swc1        $f16, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f16.u32l;
    // 0x8028B754: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8028B758: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8028B75C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x8028B760: jr          $ra
    // 0x8028B764: nop

    return;
    // 0x8028B764: nop

;}
RECOMP_FUNC void D_80239600(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80239600: addiu       $sp, $sp, -0x178
    ctx->r29 = ADD32(ctx->r29, -0X178);
    // 0x80239604: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80239608: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x8023960C: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80239610: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80239614: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80239618: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8023961C: sw          $a2, 0x180($sp)
    MEM_W(0X180, ctx->r29) = ctx->r6;
    // 0x80239620: lw          $t6, 0x50($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X50);
    // 0x80239624: andi        $s0, $a2, 0xFF
    ctx->r16 = ctx->r6 & 0XFF;
    // 0x80239628: slt         $at, $a1, $t6
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8023962C: or          $s1, $a3, $zero
    ctx->r17 = ctx->r7 | 0;
    // 0x80239630: beq         $at, $zero, L_80239640
    if (ctx->r1 == 0) {
        // 0x80239634: or          $s2, $a0, $zero
        ctx->r18 = ctx->r4 | 0;
            goto L_80239640;
    }
    // 0x80239634: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x80239638: bgez        $a1, L_8023964C
    if (SIGNED(ctx->r5) >= 0) {
        // 0x8023963C: lw          $v0, 0x188($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X188);
            goto L_8023964C;
    }
    // 0x8023963C: lw          $v0, 0x188($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X188);
L_80239640:
    // 0x80239640: b           L_80239950
    // 0x80239644: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_80239950;
    // 0x80239644: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80239648: lw          $v0, 0x188($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X188);
L_8023964C:
    // 0x8023964C: nop

    // 0x80239650: blez        $v0, L_80239660
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80239654: andi        $t7, $v0, 0x1F
        ctx->r15 = ctx->r2 & 0X1F;
            goto L_80239660;
    }
    // 0x80239654: andi        $t7, $v0, 0x1F
    ctx->r15 = ctx->r2 & 0X1F;
    // 0x80239658: beq         $t7, $zero, L_80239668
    if (ctx->r15 == 0) {
        // 0x8023965C: nop
    
            goto L_80239668;
    }
    // 0x8023965C: nop

L_80239660:
    // 0x80239660: b           L_80239950
    // 0x80239664: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_80239950;
    // 0x80239664: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_80239668:
    // 0x80239668: bltz        $s1, L_80239678
    if (SIGNED(ctx->r17) < 0) {
        // 0x8023966C: andi        $t8, $s1, 0x1F
        ctx->r24 = ctx->r17 & 0X1F;
            goto L_80239678;
    }
    // 0x8023966C: andi        $t8, $s1, 0x1F
    ctx->r24 = ctx->r17 & 0X1F;
    // 0x80239670: beq         $t8, $zero, L_80239680
    if (ctx->r24 == 0) {
        // 0x80239674: nop
    
            goto L_80239680;
    }
    // 0x80239674: nop

L_80239678:
    // 0x80239678: b           L_80239950
    // 0x8023967C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_80239950;
    // 0x8023967C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_80239680:
    // 0x80239680: lw          $t9, 0x0($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X0);
    // 0x80239684: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80239688: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x8023968C: bne         $t0, $zero, L_8023969C
    if (ctx->r8 != 0) {
        // 0x80239690: nop
    
            goto L_8023969C;
    }
    // 0x80239690: nop

    // 0x80239694: b           L_80239950
    // 0x80239698: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_80239950;
    // 0x80239698: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_8023969C:
    // 0x8023969C: jal         0x802452EC
    // 0x802396A0: sw          $a1, 0x17C($sp)
    MEM_W(0X17C, ctx->r29) = ctx->r5;
    static_3_802452EC(rdram, ctx);
        goto after_0;
    // 0x802396A0: sw          $a1, 0x17C($sp)
    MEM_W(0X17C, ctx->r29) = ctx->r5;
    after_0:
    // 0x802396A4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802396A8: bne         $v0, $at, L_802396B8
    if (ctx->r2 != ctx->r1) {
        // 0x802396AC: nop
    
            goto L_802396B8;
    }
    // 0x802396AC: nop

    // 0x802396B0: b           L_80239950
    // 0x802396B4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80239950;
    // 0x802396B4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_802396B8:
    // 0x802396B8: lbu         $t1, 0x65($s2)
    ctx->r9 = MEM_BU(ctx->r18, 0X65);
    // 0x802396BC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802396C0: beq         $t1, $zero, L_802396E0
    if (ctx->r9 == 0) {
        // 0x802396C4: nop
    
            goto L_802396E0;
    }
    // 0x802396C4: nop

    // 0x802396C8: jal         0x802456A0
    // 0x802396CC: sb          $zero, 0x65($s2)
    MEM_B(0X65, ctx->r18) = 0;
    static_3_802456A0(rdram, ctx);
        goto after_1;
    // 0x802396CC: sb          $zero, 0x65($s2)
    MEM_B(0X65, ctx->r18) = 0;
    after_1:
    // 0x802396D0: beq         $v0, $zero, L_802396E0
    if (ctx->r2 == 0) {
        // 0x802396D4: nop
    
            goto L_802396E0;
    }
    // 0x802396D4: nop

    // 0x802396D8: b           L_80239954
    // 0x802396DC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_80239954;
    // 0x802396DC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_802396E0:
    // 0x802396E0: lw          $t2, 0x5C($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X5C);
    // 0x802396E4: lw          $t3, 0x17C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X17C);
    // 0x802396E8: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x802396EC: addu        $a2, $t2, $t3
    ctx->r6 = ADD32(ctx->r10, ctx->r11);
    // 0x802396F0: andi        $t4, $a2, 0xFFFF
    ctx->r12 = ctx->r6 & 0XFFFF;
    // 0x802396F4: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x802396F8: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    // 0x802396FC: jal         0x80245710
    // 0x80239700: addiu       $a3, $sp, 0x154
    ctx->r7 = ADD32(ctx->r29, 0X154);
    static_3_80245710(rdram, ctx);
        goto after_2;
    // 0x80239700: addiu       $a3, $sp, 0x154
    ctx->r7 = ADD32(ctx->r29, 0X154);
    after_2:
    // 0x80239704: beq         $v0, $zero, L_80239718
    if (ctx->r2 == 0) {
        // 0x80239708: lhu         $t5, 0x15A($sp)
        ctx->r13 = MEM_HU(ctx->r29, 0X15A);
            goto L_80239718;
    }
    // 0x80239708: lhu         $t5, 0x15A($sp)
    ctx->r13 = MEM_HU(ctx->r29, 0X15A);
    // 0x8023970C: b           L_80239954
    // 0x80239710: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_80239954;
    // 0x80239710: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80239714: lhu         $t5, 0x15A($sp)
    ctx->r13 = MEM_HU(ctx->r29, 0X15A);
L_80239718:
    // 0x80239718: lw          $t6, 0x60($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X60);
    // 0x8023971C: lbu         $t7, 0x15A($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X15A);
    // 0x80239720: slt         $at, $t5, $t6
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80239724: bne         $at, $zero, L_80239754
    if (ctx->r1 != 0) {
        // 0x80239728: lhu         $t0, 0x15A($sp)
        ctx->r8 = MEM_HU(ctx->r29, 0X15A);
            goto L_80239754;
    }
    // 0x80239728: lhu         $t0, 0x15A($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X15A);
    // 0x8023972C: lbu         $t8, 0x64($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0X64);
    // 0x80239730: lbu         $t9, 0x15B($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X15B);
    // 0x80239734: slt         $at, $t7, $t8
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80239738: beq         $at, $zero, L_80239754
    if (ctx->r1 == 0) {
        // 0x8023973C: lhu         $t0, 0x15A($sp)
        ctx->r8 = MEM_HU(ctx->r29, 0X15A);
            goto L_80239754;
    }
    // 0x8023973C: lhu         $t0, 0x15A($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X15A);
    // 0x80239740: blez        $t9, L_80239750
    if (SIGNED(ctx->r25) <= 0) {
        // 0x80239744: slti        $at, $t9, 0x80
        ctx->r1 = SIGNED(ctx->r25) < 0X80 ? 1 : 0;
            goto L_80239750;
    }
    // 0x80239744: slti        $at, $t9, 0x80
    ctx->r1 = SIGNED(ctx->r25) < 0X80 ? 1 : 0;
    // 0x80239748: bne         $at, $zero, L_80239770
    if (ctx->r1 != 0) {
        // 0x8023974C: nop
    
            goto L_80239770;
    }
    // 0x8023974C: nop

L_80239750:
    // 0x80239750: lhu         $t0, 0x15A($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X15A);
L_80239754:
    // 0x80239754: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80239758: bne         $t0, $at, L_80239768
    if (ctx->r8 != ctx->r1) {
        // 0x8023975C: nop
    
            goto L_80239768;
    }
    // 0x8023975C: nop

    // 0x80239760: b           L_80239950
    // 0x80239764: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_80239950;
    // 0x80239764: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_80239768:
    // 0x80239768: b           L_80239950
    // 0x8023976C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_80239950;
    // 0x8023976C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80239770:
    // 0x80239770: bne         $s0, $zero, L_80239794
    if (ctx->r16 != 0) {
        // 0x80239774: sw          $s0, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r16;
            goto L_80239794;
    }
    // 0x80239774: sw          $s0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r16;
    // 0x80239778: lbu         $t2, 0x15C($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X15C);
    // 0x8023977C: nop

    // 0x80239780: andi        $t3, $t2, 0x2
    ctx->r11 = ctx->r10 & 0X2;
    // 0x80239784: bne         $t3, $zero, L_80239798
    if (ctx->r11 != 0) {
        // 0x80239788: addiu       $t4, $zero, 0xFF
        ctx->r12 = ADD32(0, 0XFF);
            goto L_80239798;
    }
    // 0x80239788: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8023978C: b           L_80239950
    // 0x80239790: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
        goto L_80239950;
    // 0x80239790: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_80239794:
    // 0x80239794: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
L_80239798:
    // 0x80239798: sb          $t4, 0x43($sp)
    MEM_B(0X43, ctx->r29) = ctx->r12;
    // 0x8023979C: addiu       $t5, $sp, 0x15A
    ctx->r13 = ADD32(ctx->r29, 0X15A);
    // 0x802397A0: addiu       $s4, $sp, 0x50
    ctx->r20 = ADD32(ctx->r29, 0X50);
    // 0x802397A4: bgez        $s1, L_802397B4
    if (SIGNED(ctx->r17) >= 0) {
        // 0x802397A8: sra         $v0, $s1, 5
        ctx->r2 = S32(SIGNED(ctx->r17) >> 5);
            goto L_802397B4;
    }
    // 0x802397A8: sra         $v0, $s1, 5
    ctx->r2 = S32(SIGNED(ctx->r17) >> 5);
    // 0x802397AC: addiu       $at, $s1, 0x1F
    ctx->r1 = ADD32(ctx->r17, 0X1F);
    // 0x802397B0: sra         $v0, $at, 5
    ctx->r2 = S32(SIGNED(ctx->r1) >> 5);
L_802397B4:
    // 0x802397B4: lhu         $at, 0x0($t5)
    ctx->r1 = MEM_HU(ctx->r13, 0X0);
    // 0x802397B8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x802397BC: sh          $at, 0x0($s4)
    MEM_H(0X0, ctx->r20) = ctx->r1;
    // 0x802397C0: slti        $at, $v0, 0x8
    ctx->r1 = SIGNED(ctx->r2) < 0X8 ? 1 : 0;
    // 0x802397C4: bne         $at, $zero, L_802397F8
    if (ctx->r1 != 0) {
        // 0x802397C8: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_802397F8;
    }
    // 0x802397C8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_802397CC:
    // 0x802397CC: addiu       $a1, $sp, 0x43
    ctx->r5 = ADD32(ctx->r29, 0X43);
    // 0x802397D0: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    // 0x802397D4: jal         0x80239570
    // 0x802397D8: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    static_3_80239570(rdram, ctx);
        goto after_3;
    // 0x802397D8: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    after_3:
    // 0x802397DC: beq         $v0, $zero, L_802397EC
    if (ctx->r2 == 0) {
        // 0x802397E0: addiu       $s0, $s0, -0x8
        ctx->r16 = ADD32(ctx->r16, -0X8);
            goto L_802397EC;
    }
    // 0x802397E0: addiu       $s0, $s0, -0x8
    ctx->r16 = ADD32(ctx->r16, -0X8);
    // 0x802397E4: b           L_80239954
    // 0x802397E8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_80239954;
    // 0x802397E8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_802397EC:
    // 0x802397EC: slti        $at, $s0, 0x8
    ctx->r1 = SIGNED(ctx->r16) < 0X8 ? 1 : 0;
    // 0x802397F0: beq         $at, $zero, L_802397CC
    if (ctx->r1 == 0) {
        // 0x802397F4: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_802397CC;
    }
    // 0x802397F4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_802397F8:
    // 0x802397F8: lw          $v0, 0x188($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X188);
    // 0x802397FC: lw          $s1, 0x18C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18C);
    // 0x80239800: bgez        $v0, L_80239810
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80239804: sra         $t9, $v0, 5
        ctx->r25 = S32(SIGNED(ctx->r2) >> 5);
            goto L_80239810;
    }
    // 0x80239804: sra         $t9, $v0, 5
    ctx->r25 = S32(SIGNED(ctx->r2) >> 5);
    // 0x80239808: addiu       $at, $v0, 0x1F
    ctx->r1 = ADD32(ctx->r2, 0X1F);
    // 0x8023980C: sra         $t9, $at, 5
    ctx->r25 = S32(SIGNED(ctx->r1) >> 5);
L_80239810:
    // 0x80239810: blez        $t9, L_802398D8
    if (SIGNED(ctx->r25) <= 0) {
        // 0x80239814: or          $s3, $t9, $zero
        ctx->r19 = ctx->r25 | 0;
            goto L_802398D8;
    }
    // 0x80239814: or          $s3, $t9, $zero
    ctx->r19 = ctx->r25 | 0;
L_80239818:
    // 0x80239818: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x8023981C: bne         $s0, $at, L_80239844
    if (ctx->r16 != ctx->r1) {
        // 0x80239820: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_80239844;
    }
    // 0x80239820: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80239824: addiu       $a1, $sp, 0x43
    ctx->r5 = ADD32(ctx->r29, 0X43);
    // 0x80239828: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    // 0x8023982C: jal         0x80239570
    // 0x80239830: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    static_3_80239570(rdram, ctx);
        goto after_4;
    // 0x80239830: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    after_4:
    // 0x80239834: beq         $v0, $zero, L_80239844
    if (ctx->r2 == 0) {
        // 0x80239838: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_80239844;
    }
    // 0x80239838: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8023983C: b           L_80239954
    // 0x80239840: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_80239954;
    // 0x80239840: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_80239844:
    // 0x80239844: lbu         $t0, 0x50($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X50);
    // 0x80239848: lbu         $t1, 0x65($s2)
    ctx->r9 = MEM_BU(ctx->r18, 0X65);
    // 0x8023984C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80239850: beq         $t0, $t1, L_80239874
    if (ctx->r8 == ctx->r9) {
        // 0x80239854: lbu         $t2, 0x51($sp)
        ctx->r10 = MEM_BU(ctx->r29, 0X51);
            goto L_80239874;
    }
    // 0x80239854: lbu         $t2, 0x51($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X51);
    // 0x80239858: jal         0x802456A0
    // 0x8023985C: sb          $t0, 0x65($s2)
    MEM_B(0X65, ctx->r18) = ctx->r8;
    static_3_802456A0(rdram, ctx);
        goto after_5;
    // 0x8023985C: sb          $t0, 0x65($s2)
    MEM_B(0X65, ctx->r18) = ctx->r8;
    after_5:
    // 0x80239860: beq         $v0, $zero, L_80239874
    if (ctx->r2 == 0) {
        // 0x80239864: lbu         $t2, 0x51($sp)
        ctx->r10 = MEM_BU(ctx->r29, 0X51);
            goto L_80239874;
    }
    // 0x80239864: lbu         $t2, 0x51($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X51);
    // 0x80239868: b           L_80239954
    // 0x8023986C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_80239954;
    // 0x8023986C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80239870: lbu         $t2, 0x51($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X51);
L_80239874:
    // 0x80239874: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80239878: sll         $t3, $t2, 3
    ctx->r11 = S32(ctx->r10 << 3);
    // 0x8023987C: addu        $a2, $t3, $s0
    ctx->r6 = ADD32(ctx->r11, ctx->r16);
    // 0x80239880: andi        $t4, $a2, 0xFFFF
    ctx->r12 = ctx->r6 & 0XFFFF;
    // 0x80239884: bne         $t7, $zero, L_802398A4
    if (ctx->r15 != 0) {
        // 0x80239888: or          $a2, $t4, $zero
        ctx->r6 = ctx->r12 | 0;
            goto L_802398A4;
    }
    // 0x80239888: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    // 0x8023988C: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x80239890: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x80239894: jal         0x80245710
    // 0x80239898: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    static_3_80245710(rdram, ctx);
        goto after_6;
    // 0x80239898: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    after_6:
    // 0x8023989C: b           L_802398BC
    // 0x802398A0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_802398BC;
    // 0x802398A0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_802398A4:
    // 0x802398A4: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x802398A8: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x802398AC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802398B0: jal         0x80246660
    // 0x802398B4: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    static_3_80246660(rdram, ctx);
        goto after_7;
    // 0x802398B4: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    after_7:
    // 0x802398B8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_802398BC:
    // 0x802398BC: beq         $v0, $zero, L_802398CC
    if (ctx->r2 == 0) {
        // 0x802398C0: addiu       $s1, $s1, 0x20
        ctx->r17 = ADD32(ctx->r17, 0X20);
            goto L_802398CC;
    }
    // 0x802398C0: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    // 0x802398C4: b           L_80239950
    // 0x802398C8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_80239950;
    // 0x802398C8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_802398CC:
    // 0x802398CC: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x802398D0: bne         $s3, $zero, L_80239818
    if (ctx->r19 != 0) {
        // 0x802398D4: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_80239818;
    }
    // 0x802398D4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_802398D8:
    // 0x802398D8: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x802398DC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802398E0: bne         $t6, $at, L_80239950
    if (ctx->r14 != ctx->r1) {
        // 0x802398E4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80239950;
    }
    // 0x802398E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802398E8: lbu         $v0, 0x15C($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X15C);
    // 0x802398EC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802398F0: andi        $t5, $v0, 0x2
    ctx->r13 = ctx->r2 & 0X2;
    // 0x802398F4: bne         $t5, $zero, L_8023994C
    if (ctx->r13 != 0) {
        // 0x802398F8: ori         $t8, $v0, 0x2
        ctx->r24 = ctx->r2 | 0X2;
            goto L_8023994C;
    }
    // 0x802398F8: ori         $t8, $v0, 0x2
    ctx->r24 = ctx->r2 | 0X2;
    // 0x802398FC: sb          $t8, 0x15C($sp)
    MEM_B(0X15C, ctx->r29) = ctx->r24;
    // 0x80239900: jal         0x802456A0
    // 0x80239904: sb          $zero, 0x65($s2)
    MEM_B(0X65, ctx->r18) = 0;
    static_3_802456A0(rdram, ctx);
        goto after_8;
    // 0x80239904: sb          $zero, 0x65($s2)
    MEM_B(0X65, ctx->r18) = 0;
    after_8:
    // 0x80239908: beq         $v0, $zero, L_80239918
    if (ctx->r2 == 0) {
        // 0x8023990C: addiu       $a3, $sp, 0x154
        ctx->r7 = ADD32(ctx->r29, 0X154);
            goto L_80239918;
    }
    // 0x8023990C: addiu       $a3, $sp, 0x154
    ctx->r7 = ADD32(ctx->r29, 0X154);
    // 0x80239910: b           L_80239954
    // 0x80239914: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_80239954;
    // 0x80239914: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_80239918:
    // 0x80239918: lw          $t9, 0x5C($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X5C);
    // 0x8023991C: lw          $t1, 0x17C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X17C);
    // 0x80239920: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x80239924: addu        $a2, $t9, $t1
    ctx->r6 = ADD32(ctx->r25, ctx->r9);
    // 0x80239928: andi        $t0, $a2, 0xFFFF
    ctx->r8 = ctx->r6 & 0XFFFF;
    // 0x8023992C: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x80239930: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80239934: jal         0x80246660
    // 0x80239938: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    static_3_80246660(rdram, ctx);
        goto after_9;
    // 0x80239938: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    after_9:
    // 0x8023993C: beq         $v0, $zero, L_8023994C
    if (ctx->r2 == 0) {
        // 0x80239940: nop
    
            goto L_8023994C;
    }
    // 0x80239940: nop

    // 0x80239944: b           L_80239954
    // 0x80239948: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_80239954;
    // 0x80239948: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8023994C:
    // 0x8023994C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80239950:
    // 0x80239950: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_80239954:
    // 0x80239954: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80239958: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8023995C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80239960: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80239964: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80239968: jr          $ra
    // 0x8023996C: addiu       $sp, $sp, 0x178
    ctx->r29 = ADD32(ctx->r29, 0X178);
    return;
    // 0x8023996C: addiu       $sp, $sp, 0x178
    ctx->r29 = ADD32(ctx->r29, 0X178);
;}
RECOMP_FUNC void D_802D1F94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D2014: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802D2018: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802D201C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802D2020: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802D2024: jal         0x80301EA0
    // 0x802D2028: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    static_3_80301EA0(rdram, ctx);
        goto after_0;
    // 0x802D2028: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x802D202C: beq         $v0, $zero, L_802D204C
    if (ctx->r2 == 0) {
        // 0x802D2030: lw          $t7, 0x1C($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X1C);
            goto L_802D204C;
    }
    // 0x802D2030: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x802D2034: lbu         $t8, 0x4($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X4);
    // 0x802D2038: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x802D203C: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x802D2040: sll         $t9, $t8, 5
    ctx->r25 = S32(ctx->r24 << 5);
    // 0x802D2044: addu        $t0, $t6, $t9
    ctx->r8 = ADD32(ctx->r14, ctx->r25);
    // 0x802D2048: swc1        $f4, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f4.u32l;
L_802D204C:
    // 0x802D204C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802D2050: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802D2054: jr          $ra
    // 0x802D2058: nop

    return;
    // 0x802D2058: nop

;}
RECOMP_FUNC void D_802CF130(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802CF1B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802CF1B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802CF1B8: jal         0x8028D9B4
    // 0x802CF1BC: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    static_3_8028D9B4(rdram, ctx);
        goto after_0;
    // 0x802CF1BC: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    after_0:
    // 0x802CF1C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802CF1C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802CF1C8: jr          $ra
    // 0x802CF1CC: nop

    return;
    // 0x802CF1CC: nop

;}
RECOMP_FUNC void D_802A2020(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A20A0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802A20A4: jr          $ra
    // 0x802A20A8: sh          $a1, 0xAA($a0)
    MEM_H(0XAA, ctx->r4) = ctx->r5;
    return;
    // 0x802A20A8: sh          $a1, 0xAA($a0)
    MEM_H(0XAA, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void D_802E7680(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E7700: jr          $ra
    // 0x802E7704: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    return;
    // 0x802E7704: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
;}
RECOMP_FUNC void D_8020220C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8020220C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80202210: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80202214: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80202218: jal         0x802011D0
    // 0x8020221C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_802011D0(rdram, ctx);
        goto after_0;
    // 0x8020221C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x80202220: jal         0x80202F38
    // 0x80202224: nop

    static_3_80202F38(rdram, ctx);
        goto after_1;
    // 0x80202224: nop

    after_1:
    // 0x80202228: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020222C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80202230: jr          $ra
    // 0x80202234: nop

    return;
    // 0x80202234: nop

;}
RECOMP_FUNC void D_802A8D5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A8DDC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A8DE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A8DE4: jal         0x8028D9B4
    // 0x802A8DE8: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    static_3_8028D9B4(rdram, ctx);
        goto after_0;
    // 0x802A8DE8: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    after_0:
    // 0x802A8DEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A8DF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A8DF4: jr          $ra
    // 0x802A8DF8: nop

    return;
    // 0x802A8DF8: nop

;}
RECOMP_FUNC void D_802D7F9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D801C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802D8020: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802D8024: jr          $ra
    // 0x802D8028: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    return;
    // 0x802D8028: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
;}
RECOMP_FUNC void D_802D1650(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D16D0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802D16D4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802D16D8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802D16DC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802D16E0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802D16E4: jal         0x8020372C
    // 0x802D16E8: lbu         $a0, 0x27($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X27);
    func_8020372C(rdram, ctx);
        goto after_0;
    // 0x802D16E8: lbu         $a0, 0x27($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X27);
    after_0:
    // 0x802D16EC: beql        $v0, $zero, L_802D1708
    if (ctx->r2 == 0) {
        // 0x802D16F0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_802D1708;
    }
    goto skip_0;
    // 0x802D16F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x802D16F4: jal         0x80201FB8
    // 0x802D16F8: lbu         $a0, 0x27($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X27);
    static_3_80201FB8(rdram, ctx);
        goto after_1;
    // 0x802D16F8: lbu         $a0, 0x27($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X27);
    after_1:
    // 0x802D16FC: jal         0x80201448
    // 0x802D1700: lbu         $a0, 0x27($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X27);
    static_3_80201448(rdram, ctx);
        goto after_2;
    // 0x802D1700: lbu         $a0, 0x27($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X27);
    after_2:
    // 0x802D1704: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_802D1708:
    // 0x802D1708: jal         0x80301CA0
    // 0x802D170C: lbu         $a1, 0x27($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X27);
    static_3_80301CA0(rdram, ctx);
        goto after_3;
    // 0x802D170C: lbu         $a1, 0x27($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X27);
    after_3:
    // 0x802D1710: lbu         $t6, 0x2020($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X2020);
    // 0x802D1714: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x802D1718: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x802D171C: beq         $t6, $at, L_802D177C
    if (ctx->r14 == ctx->r1) {
        // 0x802D1720: lui         $at, 0x0
        ctx->r1 = S32(0X0 << 16);
            goto L_802D177C;
    }
    // 0x802D1720: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D1724: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
L_802D1728:
    // 0x802D1728: sll         $t7, $v1, 5
    ctx->r15 = S32(ctx->r3 << 5);
    // 0x802D172C: addu        $t8, $s0, $t7
    ctx->r24 = ADD32(ctx->r16, ctx->r15);
    // 0x802D1730: lw          $v0, 0x18($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X18);
    // 0x802D1734: bltzl       $v0, L_802D1764
    if (SIGNED(ctx->r2) < 0) {
        // 0x802D1738: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_802D1764;
    }
    goto skip_1;
    // 0x802D1738: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_1:
    // 0x802D173C: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x802D1740: nop

    // 0x802D1744: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802D1748: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x802D174C: nop

    // 0x802D1750: bc1fl       L_802D1764
    if (!c1cs) {
        // 0x802D1754: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_802D1764;
    }
    goto skip_2;
    // 0x802D1754: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_2:
    // 0x802D1758: b           L_802D177C
    // 0x802D175C: sb          $v1, 0x2020($s0)
    MEM_B(0X2020, ctx->r16) = ctx->r3;
        goto L_802D177C;
    // 0x802D175C: sb          $v1, 0x2020($s0)
    MEM_B(0X2020, ctx->r16) = ctx->r3;
    // 0x802D1760: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_802D1764:
    // 0x802D1764: andi        $t9, $v1, 0xFF
    ctx->r25 = ctx->r3 & 0XFF;
    // 0x802D1768: slti        $at, $t9, 0xFF
    ctx->r1 = SIGNED(ctx->r25) < 0XFF ? 1 : 0;
    // 0x802D176C: bne         $at, $zero, L_802D1728
    if (ctx->r1 != 0) {
        // 0x802D1770: or          $v1, $t9, $zero
        ctx->r3 = ctx->r25 | 0;
            goto L_802D1728;
    }
    // 0x802D1770: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
    // 0x802D1774: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x802D1778: sb          $t0, 0x2020($s0)
    MEM_B(0X2020, ctx->r16) = ctx->r8;
L_802D177C:
    // 0x802D177C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802D1780: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802D1784: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802D1788: jr          $ra
    // 0x802D178C: nop

    return;
    // 0x802D178C: nop

;}
RECOMP_FUNC void D_802A048C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A050C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A0510: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A0514: lw          $a1, 0x4($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X4);
    // 0x802A0518: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802A051C: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x802A0520: beq         $a1, $at, L_802A053C
    if (ctx->r5 == ctx->r1) {
        // 0x802A0524: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_802A053C;
    }
    // 0x802A0524: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x802A0528: jal         0x8021BAE0
    // 0x802A052C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    static_3_8021BAE0(rdram, ctx);
        goto after_0;
    // 0x802A052C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x802A0530: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x802A0534: ori         $t6, $zero, 0xFFFF
    ctx->r14 = 0 | 0XFFFF;
    // 0x802A0538: sw          $t6, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r14;
L_802A053C:
    // 0x802A053C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x802A0540: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802A0544: jal         0x80320D7C
    // 0x802A0548: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    static_3_80320D7C(rdram, ctx);
        goto after_1;
    // 0x802A0548: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_1:
    // 0x802A054C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x802A0550: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802A0554: jal         0x8031F800
    // 0x802A0558: addiu       $a0, $a2, 0x1C0
    ctx->r4 = ADD32(ctx->r6, 0X1C0);
    static_3_8031F800(rdram, ctx);
        goto after_2;
    // 0x802A0558: addiu       $a0, $a2, 0x1C0
    ctx->r4 = ADD32(ctx->r6, 0X1C0);
    after_2:
    // 0x802A055C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A0560: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A0564: jr          $ra
    // 0x802A0568: nop

    return;
    // 0x802A0568: nop

;}
RECOMP_FUNC void D_802E7688(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E7708: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x802E770C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802E7710: sw          $a1, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r5;
    // 0x802E7714: lw          $v1, 0xC($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC);
    // 0x802E7718: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802E771C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E7720: bne         $v1, $zero, L_802E7748
    if (ctx->r3 != 0) {
        // 0x802E7724: addiu       $a0, $a0, 0x0
        ctx->r4 = ADD32(ctx->r4, 0X0);
            goto L_802E7748;
    }
    // 0x802E7724: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802E7728: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802E772C: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802E7730: jal         0x80231A24
    // 0x802E7734: sw          $a2, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r6;
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x802E7734: sw          $a2, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r6;
    after_0:
    // 0x802E7738: lw          $a2, 0xB0($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XB0);
    // 0x802E773C: addiu       $t6, $zero, 0x29A
    ctx->r14 = ADD32(0, 0X29A);
    // 0x802E7740: sw          $t6, 0x0($zero)
    MEM_W(0X0, 0) = ctx->r14;
    // 0x802E7744: lw          $v1, 0xC($a2)
    ctx->r3 = MEM_W(ctx->r6, 0XC);
L_802E7748:
    // 0x802E7748: lw          $v0, 0xD8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XD8);
    // 0x802E774C: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x802E7750: lw          $t9, 0x14($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X14);
    // 0x802E7754: lh          $t7, 0x10($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X10);
    // 0x802E7758: jalr        $t9
    // 0x802E775C: addu        $a0, $t7, $v1
    ctx->r4 = ADD32(ctx->r15, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x802E775C: addu        $a0, $t7, $v1
    ctx->r4 = ADD32(ctx->r15, ctx->r3);
    after_1:
    // 0x802E7760: lw          $a0, 0xB4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XB4);
    // 0x802E7764: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x802E7768: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x802E776C: jal         0x8028C2C0
    // 0x802E7770: addiu       $a3, $sp, 0x24
    ctx->r7 = ADD32(ctx->r29, 0X24);
    static_3_8028C2C0(rdram, ctx);
        goto after_2;
    // 0x802E7770: addiu       $a3, $sp, 0x24
    ctx->r7 = ADD32(ctx->r29, 0X24);
    after_2:
    // 0x802E7774: jal         0x8022970C
    // 0x802E7778: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    func_8022970C(rdram, ctx);
        goto after_3;
    // 0x802E7778: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_3:
    // 0x802E777C: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x802E7780: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x802E7784: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802E7788: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    // 0x802E778C: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x802E7790: swc1        $f4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f4.u32l;
    // 0x802E7794: swc1        $f6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f6.u32l;
    // 0x802E7798: jal         0x802CF7E8
    // 0x802E779C: swc1        $f8, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f8.u32l;
    static_3_802CF7E8(rdram, ctx);
        goto after_4;
    // 0x802E779C: swc1        $f8, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f8.u32l;
    after_4:
    // 0x802E77A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802E77A4: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    // 0x802E77A8: jr          $ra
    // 0x802E77AC: nop

    return;
    // 0x802E77AC: nop

;}
RECOMP_FUNC void D_802A13AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A142C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802A1430: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802A1434: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x802A1438: jr          $ra
    // 0x802A143C: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    return;
    // 0x802A143C: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
;}
RECOMP_FUNC void D_80222EE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80222EE0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80222EE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80222EE8: jal         0x80222CBC
    // 0x80222EEC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    static_3_80222CBC(rdram, ctx);
        goto after_0;
    // 0x80222EEC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x80222EF0: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80222EF4: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x80222EF8: beq         $t6, $zero, L_80222F08
    if (ctx->r14 == 0) {
        // 0x80222EFC: nop
    
            goto L_80222F08;
    }
    // 0x80222EFC: nop

    // 0x80222F00: b           L_80222F08
    // 0x80222F04: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
        goto L_80222F08;
    // 0x80222F04: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
L_80222F08:
    // 0x80222F08: jal         0x80222E24
    // 0x80222F0C: sb          $t0, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r8;
    static_3_80222E24(rdram, ctx);
        goto after_1;
    // 0x80222F0C: sb          $t0, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r8;
    after_1:
    // 0x80222F10: jal         0x802375F0
    // 0x80222F14: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    static_3_802375F0(rdram, ctx);
        goto after_2;
    // 0x80222F14: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x80222F18: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x80222F1C: addiu       $t1, $t1, 0x0
    ctx->r9 = ADD32(ctx->r9, 0X0);
    // 0x80222F20: lbu         $t8, 0x1F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X1F);
    // 0x80222F24: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    // 0x80222F28: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x80222F2C: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x80222F30: addiu       $t7, $a0, 0x8
    ctx->r15 = ADD32(ctx->r4, 0X8);
    // 0x80222F34: sw          $t7, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r15;
    // 0x80222F38: or          $t2, $t9, $at
    ctx->r10 = ctx->r25 | ctx->r1;
    // 0x80222F3C: ori         $t3, $t2, 0x40
    ctx->r11 = ctx->r10 | 0X40;
    // 0x80222F40: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80222F44: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x80222F48: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x80222F4C: lhu         $a1, 0x0($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X0);
    // 0x80222F50: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x80222F54: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x80222F58: sll         $t4, $a1, 2
    ctx->r12 = S32(ctx->r5 << 2);
    // 0x80222F5C: addiu       $t5, $t5, 0x0
    ctx->r13 = ADD32(ctx->r13, 0X0);
    // 0x80222F60: addiu       $t8, $t8, 0x0
    ctx->r24 = ADD32(ctx->r24, 0X0);
    // 0x80222F64: addu        $a2, $t4, $t5
    ctx->r6 = ADD32(ctx->r12, ctx->r13);
    // 0x80222F68: addu        $a3, $t4, $t8
    ctx->r7 = ADD32(ctx->r12, ctx->r24);
    // 0x80222F6C: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x80222F70: lw          $t9, 0x0($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X0);
    // 0x80222F74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80222F78: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80222F7C: addiu       $t2, $t9, 0x1
    ctx->r10 = ADD32(ctx->r25, 0X1);
    // 0x80222F80: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    // 0x80222F84: sw          $t2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r10;
    // 0x80222F88: jr          $ra
    // 0x80222F8C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80222F8C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void D_802A35E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A3668: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A366C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A3670: beq         $a0, $zero, L_802A36AC
    if (ctx->r4 == 0) {
        // 0x802A3674: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_802A36AC;
    }
    // 0x802A3674: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802A3678: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802A367C: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802A3680: sw          $t6, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = ctx->r14;
    // 0x802A3684: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802A3688: jal         0x802D1A34
    // 0x802A368C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_802D1A34(rdram, ctx);
        goto after_0;
    // 0x802A368C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x802A3690: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x802A3694: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802A3698: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x802A369C: beql        $t8, $zero, L_802A36B0
    if (ctx->r24 == 0) {
        // 0x802A36A0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802A36B0;
    }
    goto skip_0;
    // 0x802A36A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802A36A4: jal         0x802C681C
    // 0x802A36A8: nop

    static_3_802C681C(rdram, ctx);
        goto after_1;
    // 0x802A36A8: nop

    after_1:
L_802A36AC:
    // 0x802A36AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A36B0:
    // 0x802A36B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A36B4: jr          $ra
    // 0x802A36B8: nop

    return;
    // 0x802A36B8: nop

;}
RECOMP_FUNC void D_802C8B5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802C8BDC: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x802C8BE0: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802C8BE4: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x802C8BE8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802C8BEC: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802C8BF0: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x802C8BF4: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x802C8BF8: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x802C8BFC: sw          $t6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r14;
    // 0x802C8C00: lh          $t7, 0x58($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X58);
    // 0x802C8C04: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802C8C08: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802C8C0C: bne         $t7, $zero, L_802C8C24
    if (ctx->r15 != 0) {
        // 0x802C8C10: nop
    
            goto L_802C8C24;
    }
    // 0x802C8C10: nop

    // 0x802C8C14: jal         0x80231A24
    // 0x802C8C18: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x802C8C18: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x802C8C1C: b           L_802C8DCC
    // 0x802C8C20: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_802C8DCC;
    // 0x802C8C20: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_802C8C24:
    // 0x802C8C24: jal         0x80207130
    // 0x802C8C28: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_80207130(rdram, ctx);
        goto after_1;
    // 0x802C8C28: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x802C8C2C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x802C8C30: cvt.s.d     $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f22.fl = CVT_S_D(ctx->f0.d);
    // 0x802C8C34: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x802C8C38: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    // 0x802C8C3C: sw          $a0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r4;
    // 0x802C8C40: jal         0x802916E4
    // 0x802C8C44: sub.s       $f20, $f22, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = ctx->f22.fl - ctx->f4.fl;
    static_3_802916E4(rdram, ctx);
        goto after_2;
    // 0x802C8C44: sub.s       $f20, $f22, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = ctx->f22.fl - ctx->f4.fl;
    after_2:
    // 0x802C8C48: bne         $v0, $zero, L_802C8C60
    if (ctx->r2 != 0) {
        // 0x802C8C4C: nop
    
            goto L_802C8C60;
    }
    // 0x802C8C4C: nop

    // 0x802C8C50: jal         0x80291898
    // 0x802C8C54: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    static_3_80291898(rdram, ctx);
        goto after_3;
    // 0x802C8C54: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_3:
    // 0x802C8C58: beq         $v0, $zero, L_802C8C68
    if (ctx->r2 == 0) {
        // 0x802C8C5C: nop
    
            goto L_802C8C68;
    }
    // 0x802C8C5C: nop

L_802C8C60:
    // 0x802C8C60: jal         0x802917C4
    // 0x802C8C64: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    static_3_802917C4(rdram, ctx);
        goto after_4;
    // 0x802C8C64: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_4:
L_802C8C68:
    // 0x802C8C68: jal         0x802AED98
    // 0x802C8C6C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    static_3_802AED98(rdram, ctx);
        goto after_5;
    // 0x802C8C6C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    after_5:
    // 0x802C8C70: beq         $v0, $zero, L_802C8CCC
    if (ctx->r2 == 0) {
        // 0x802C8C74: lw          $a0, 0x40($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X40);
            goto L_802C8CCC;
    }
    // 0x802C8C74: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x802C8C78: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    // 0x802C8C7C: jal         0x8028FB7C
    // 0x802C8C80: sw          $a0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r4;
    static_3_8028FB7C(rdram, ctx);
        goto after_6;
    // 0x802C8C80: sw          $a0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r4;
    after_6:
    // 0x802C8C84: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802C8C88: bne         $v0, $at, L_802C8CA8
    if (ctx->r2 != ctx->r1) {
        // 0x802C8C8C: lw          $a0, 0x34($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X34);
            goto L_802C8CA8;
    }
    // 0x802C8C8C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x802C8C90: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x802C8C94: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x802C8C98: jal         0x8028FC98
    // 0x802C8C9C: nop

    static_3_8028FC98(rdram, ctx);
        goto after_7;
    // 0x802C8C9C: nop

    after_7:
    // 0x802C8CA0: b           L_802C8CD0
    // 0x802C8CA4: lbu         $t0, 0x2D($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X2D);
        goto L_802C8CD0;
    // 0x802C8CA4: lbu         $t0, 0x2D($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X2D);
L_802C8CA8:
    // 0x802C8CA8: jal         0x802AED98
    // 0x802C8CAC: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    static_3_802AED98(rdram, ctx);
        goto after_8;
    // 0x802C8CAC: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    after_8:
    // 0x802C8CB0: lw          $v1, 0x6C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X6C);
    // 0x802C8CB4: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x802C8CB8: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x802C8CBC: lw          $t9, 0x94($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X94);
    // 0x802C8CC0: lh          $t8, 0x90($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X90);
    // 0x802C8CC4: jalr        $t9
    // 0x802C8CC8: addu        $a0, $t8, $v0
    ctx->r4 = ADD32(ctx->r24, ctx->r2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x802C8CC8: addu        $a0, $t8, $v0
    ctx->r4 = ADD32(ctx->r24, ctx->r2);
    after_9:
L_802C8CCC:
    // 0x802C8CCC: lbu         $t0, 0x2D($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X2D);
L_802C8CD0:
    // 0x802C8CD0: beql        $t0, $zero, L_802C8CE4
    if (ctx->r8 == 0) {
        // 0x802C8CD4: lhu         $t2, 0x8($s0)
        ctx->r10 = MEM_HU(ctx->r16, 0X8);
            goto L_802C8CE4;
    }
    goto skip_0;
    // 0x802C8CD4: lhu         $t2, 0x8($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X8);
    skip_0:
    // 0x802C8CD8: jal         0x802F8BE0
    // 0x802C8CDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802F8BE0(rdram, ctx);
        goto after_10;
    // 0x802C8CDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x802C8CE0: lhu         $t2, 0x8($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X8);
L_802C8CE4:
    // 0x802C8CE4: addiu       $a3, $zero, 0x24
    ctx->r7 = ADD32(0, 0X24);
    // 0x802C8CE8: lw          $t1, 0x54($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X54);
    // 0x802C8CEC: multu       $t2, $a3
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802C8CF0: mflo        $t3
    ctx->r11 = lo;
    // 0x802C8CF4: addu        $a2, $t1, $t3
    ctx->r6 = ADD32(ctx->r9, ctx->r11);
    // 0x802C8CF8: lwc1        $f6, 0x0($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X0);
    // 0x802C8CFC: c.le.s      $f6, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f6.fl <= ctx->f20.fl;
    // 0x802C8D00: nop

    // 0x802C8D04: bc1f        L_802C8D70
    if (!c1cs) {
        // 0x802C8D08: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_802C8D70;
    }
    // 0x802C8D08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_802C8D0C:
    // 0x802C8D0C: jal         0x802F8D50
    // 0x802C8D10: addiu       $a1, $a2, 0x4
    ctx->r5 = ADD32(ctx->r6, 0X4);
    static_3_802F8D50(rdram, ctx);
        goto after_11;
    // 0x802C8D10: addiu       $a1, $a2, 0x4
    ctx->r5 = ADD32(ctx->r6, 0X4);
    after_11:
    // 0x802C8D14: bne         $v0, $zero, L_802C8D24
    if (ctx->r2 != 0) {
        // 0x802C8D18: addiu       $a3, $zero, 0x24
        ctx->r7 = ADD32(0, 0X24);
            goto L_802C8D24;
    }
    // 0x802C8D18: addiu       $a3, $zero, 0x24
    ctx->r7 = ADD32(0, 0X24);
    // 0x802C8D1C: b           L_802C8DC8
    // 0x802C8D20: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
        goto L_802C8DC8;
    // 0x802C8D20: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_802C8D24:
    // 0x802C8D24: lhu         $v1, 0x8($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X8);
    // 0x802C8D28: lw          $v0, 0x54($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X54);
    // 0x802C8D2C: multu       $v1, $a3
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802C8D30: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
    // 0x802C8D34: andi        $t7, $t6, 0xFFFF
    ctx->r15 = ctx->r14 & 0XFFFF;
    // 0x802C8D38: mflo        $t4
    ctx->r12 = lo;
    // 0x802C8D3C: addu        $t5, $v0, $t4
    ctx->r13 = ADD32(ctx->r2, ctx->r12);
    // 0x802C8D40: lwc1        $f8, 0x0($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X0);
    // 0x802C8D44: multu       $t7, $a3
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802C8D48: sh          $t6, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r14;
    // 0x802C8D4C: sub.s       $f20, $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f8.fl;
    // 0x802C8D50: swc1        $f22, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f22.u32l;
    // 0x802C8D54: mflo        $t8
    ctx->r24 = lo;
    // 0x802C8D58: addu        $a2, $v0, $t8
    ctx->r6 = ADD32(ctx->r2, ctx->r24);
    // 0x802C8D5C: lwc1        $f10, 0x0($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X0);
    // 0x802C8D60: c.le.s      $f10, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f10.fl <= ctx->f20.fl;
    // 0x802C8D64: nop

    // 0x802C8D68: bc1tl       L_802C8D0C
    if (c1cs) {
        // 0x802C8D6C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_802C8D0C;
    }
    goto skip_1;
    // 0x802C8D6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
L_802C8D70:
    // 0x802C8D70: lbu         $t9, 0x34($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X34);
    // 0x802C8D74: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x802C8D78: beql        $t9, $zero, L_802C8D9C
    if (ctx->r25 == 0) {
        // 0x802C8D7C: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_802C8D9C;
    }
    goto skip_2;
    // 0x802C8D7C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    skip_2:
    // 0x802C8D80: jal         0x8028E204
    // 0x802C8D84: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    static_3_8028E204(rdram, ctx);
        goto after_12;
    // 0x802C8D84: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    after_12:
    // 0x802C8D88: beq         $v0, $zero, L_802C8D98
    if (ctx->r2 == 0) {
        // 0x802C8D8C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_802C8D98;
    }
    // 0x802C8D8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802C8D90: jal         0x802F8CBC
    // 0x802C8D94: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    static_3_802F8CBC(rdram, ctx);
        goto after_13;
    // 0x802C8D94: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    after_13:
L_802C8D98:
    // 0x802C8D98: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_802C8D9C:
    // 0x802C8D9C: jal         0x80223F70
    // 0x802C8DA0: ori         $a1, $zero, 0xD000
    ctx->r5 = 0 | 0XD000;
    static_3_80223F70(rdram, ctx);
        goto after_14;
    // 0x802C8DA0: ori         $a1, $zero, 0xD000
    ctx->r5 = 0 | 0XD000;
    after_14:
    // 0x802C8DA4: beq         $v0, $zero, L_802C8DC8
    if (ctx->r2 == 0) {
        // 0x802C8DA8: lui         $v0, 0x0
        ctx->r2 = S32(0X0 << 16);
            goto L_802C8DC8;
    }
    // 0x802C8DA8: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802C8DAC: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x802C8DB0: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x802C8DB4: bne         $v0, $at, L_802C8DC8
    if (ctx->r2 != ctx->r1) {
        // 0x802C8DB8: addiu       $at, $zero, 0xF
        ctx->r1 = ADD32(0, 0XF);
            goto L_802C8DC8;
    }
    // 0x802C8DB8: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x802C8DBC: beql        $v0, $at, L_802C8DCC
    if (ctx->r2 == ctx->r1) {
        // 0x802C8DC0: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_802C8DCC;
    }
    goto skip_3;
    // 0x802C8DC0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_3:
    // 0x802C8DC4: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_802C8DC8:
    // 0x802C8DC8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_802C8DCC:
    // 0x802C8DCC: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x802C8DD0: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x802C8DD4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802C8DD8: jr          $ra
    // 0x802C8DDC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x802C8DDC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
