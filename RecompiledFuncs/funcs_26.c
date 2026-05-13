#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void D_802D10FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D117C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802D1180: jr          $ra
    // 0x802D1184: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x802D1184: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void D_802B7838(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B78B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B78BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B78C0: lbu         $v1, 0x968($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X968);
    // 0x802B78C4: sltu        $t6, $zero, $v1
    ctx->r14 = 0 < ctx->r3 ? 1 : 0;
    // 0x802B78C8: beq         $t6, $zero, L_802B78DC
    if (ctx->r14 == 0) {
        // 0x802B78CC: or          $v1, $t6, $zero
        ctx->r3 = ctx->r14 | 0;
            goto L_802B78DC;
    }
    // 0x802B78CC: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x802B78D0: jal         0x80303578
    // 0x802B78D4: addiu       $a0, $a0, 0xC24
    ctx->r4 = ADD32(ctx->r4, 0XC24);
    static_3_80303578(rdram, ctx);
        goto after_0;
    // 0x802B78D4: addiu       $a0, $a0, 0xC24
    ctx->r4 = ADD32(ctx->r4, 0XC24);
    after_0:
    // 0x802B78D8: sltu        $v1, $zero, $v0
    ctx->r3 = 0 < ctx->r2 ? 1 : 0;
L_802B78DC:
    // 0x802B78DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B78E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B78E4: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x802B78E8: jr          $ra
    // 0x802B78EC: nop

    return;
    // 0x802B78EC: nop

;}
RECOMP_FUNC void D_802E2498(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E2518: addiu       $sp, $sp, -0x100
    ctx->r29 = ADD32(ctx->r29, -0X100);
    // 0x802E251C: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x802E2520: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x802E2524: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x802E2528: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x802E252C: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x802E2530: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x802E2534: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x802E2538: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x802E253C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x802E2540: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x802E2544: sw          $a0, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->r4;
    // 0x802E2548: sw          $a2, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r6;
    // 0x802E254C: blez        $a1, L_802E2764
    if (SIGNED(ctx->r5) <= 0) {
        // 0x802E2550: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_802E2764;
    }
    // 0x802E2550: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x802E2554: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x802E2558: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x802E255C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802E2560: addiu       $s6, $sp, 0xB0
    ctx->r22 = ADD32(ctx->r29, 0XB0);
    // 0x802E2564: addiu       $s5, $sp, 0xB4
    ctx->r21 = ADD32(ctx->r29, 0XB4);
    // 0x802E2568: addiu       $s4, $sp, 0xB8
    ctx->r20 = ADD32(ctx->r29, 0XB8);
    // 0x802E256C: addiu       $s3, $sp, 0xC0
    ctx->r19 = ADD32(ctx->r29, 0XC0);
L_802E2570:
    // 0x802E2570: lw          $v0, 0x550($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X550);
    // 0x802E2574: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802E2578: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x802E257C: lw          $t6, 0x20($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X20);
    // 0x802E2580: bnel        $t6, $zero, L_802E275C
    if (ctx->r14 != 0) {
        // 0x802E2584: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_802E275C;
    }
    goto skip_0;
    // 0x802E2584: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
    // 0x802E2588: jal         0x8021B6D4
    // 0x802E258C: lw          $a0, 0x1C($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X1C);
    static_3_8021B6D4(rdram, ctx);
        goto after_0;
    // 0x802E258C: lw          $a0, 0x1C($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X1C);
    after_0:
    // 0x802E2590: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802E2594: lwc1        $f12, 0xF0($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x802E2598: lwc1        $f14, 0xF4($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x802E259C: lw          $a2, 0xF8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XF8);
    // 0x802E25A0: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    // 0x802E25A4: sw          $s5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r21;
    // 0x802E25A8: jal         0x80214E7C
    // 0x802E25AC: sw          $s6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r22;
    static_3_80214E7C(rdram, ctx);
        goto after_1;
    // 0x802E25AC: sw          $s6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r22;
    after_1:
    // 0x802E25B0: andi        $t7, $v0, 0xFF
    ctx->r15 = ctx->r2 & 0XFF;
    // 0x802E25B4: beql        $t7, $zero, L_802E275C
    if (ctx->r15 == 0) {
        // 0x802E25B8: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_802E275C;
    }
    goto skip_1;
    // 0x802E25B8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_1:
    // 0x802E25BC: lw          $t8, 0x550($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X550);
    // 0x802E25C0: jal         0x8021BAE0
    // 0x802E25C4: lw          $a0, 0x1C($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X1C);
    static_3_8021BAE0(rdram, ctx);
        goto after_2;
    // 0x802E25C4: lw          $a0, 0x1C($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X1C);
    after_2:
    // 0x802E25C8: lw          $t0, 0x550($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X550);
    // 0x802E25CC: ori         $t9, $zero, 0xFFFF
    ctx->r25 = 0 | 0XFFFF;
    // 0x802E25D0: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x802E25D4: sw          $t9, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->r25;
    // 0x802E25D8: lw          $t2, 0x550($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X550);
    // 0x802E25DC: addiu       $a0, $zero, 0x1388
    ctx->r4 = ADD32(0, 0X1388);
    // 0x802E25E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802E25E4: sw          $t1, 0x20($t2)
    MEM_W(0X20, ctx->r10) = ctx->r9;
    // 0x802E25E8: lw          $t3, 0x550($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X550);
    // 0x802E25EC: lw          $t4, 0x20($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X20);
    // 0x802E25F0: beql        $t4, $zero, L_802E2708
    if (ctx->r12 == 0) {
        // 0x802E25F4: lbu         $t5, 0x10B($sp)
        ctx->r13 = MEM_BU(ctx->r29, 0X10B);
            goto L_802E2708;
    }
    goto skip_2;
    // 0x802E25F4: lbu         $t5, 0x10B($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X10B);
    skip_2:
    // 0x802E25F8: jal         0x80305E90
    // 0x802E25FC: addiu       $s2, $s1, 0x1
    ctx->r18 = ADD32(ctx->r17, 0X1);
    static_3_80305E90(rdram, ctx);
        goto after_3;
    // 0x802E25FC: addiu       $s2, $s1, 0x1
    ctx->r18 = ADD32(ctx->r17, 0X1);
    after_3:
    // 0x802E2600: lw          $t5, 0x100($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X100);
    // 0x802E2604: addiu       $t6, $zero, 0x38
    ctx->r14 = ADD32(0, 0X38);
    // 0x802E2608: addiu       $a2, $zero, 0x2F
    ctx->r6 = ADD32(0, 0X2F);
    // 0x802E260C: lw          $a0, 0x14($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X14);
    // 0x802E2610: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x802E2614: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x802E2618: addiu       $a1, $t5, 0x470
    ctx->r5 = ADD32(ctx->r13, 0X470);
    // 0x802E261C: jal         0x80302238
    // 0x802E2620: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302238(rdram, ctx);
        goto after_4;
    // 0x802E2620: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_4:
    // 0x802E2624: slti        $at, $s2, 0x32
    ctx->r1 = SIGNED(ctx->r18) < 0X32 ? 1 : 0;
    // 0x802E2628: beq         $at, $zero, L_802E2704
    if (ctx->r1 == 0) {
        // 0x802E262C: lw          $t7, 0x100($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X100);
            goto L_802E2704;
    }
    // 0x802E262C: lw          $t7, 0x100($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X100);
    // 0x802E2630: sll         $t8, $s2, 2
    ctx->r24 = S32(ctx->r18 << 2);
    // 0x802E2634: addu        $s0, $t7, $t8
    ctx->r16 = ADD32(ctx->r15, ctx->r24);
    // 0x802E2638: lw          $v0, 0x550($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X550);
    // 0x802E263C: addiu       $a1, $zero, 0xBE
    ctx->r5 = ADD32(0, 0XBE);
    // 0x802E2640: lw          $t9, 0x20($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X20);
    // 0x802E2644: bnel        $t9, $zero, L_802E2708
    if (ctx->r25 != 0) {
        // 0x802E2648: lbu         $t5, 0x10B($sp)
        ctx->r13 = MEM_BU(ctx->r29, 0X10B);
            goto L_802E2708;
    }
    goto skip_3;
    // 0x802E2648: lbu         $t5, 0x10B($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X10B);
    skip_3:
    // 0x802E264C: jal         0x8021ACB0
    // 0x802E2650: lw          $a0, 0x1C($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X1C);
    static_3_8021ACB0(rdram, ctx);
        goto after_5;
    // 0x802E2650: lw          $a0, 0x1C($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X1C);
    after_5:
    // 0x802E2654: addiu       $s2, $sp, 0x68
    ctx->r18 = ADD32(ctx->r29, 0X68);
    // 0x802E2658: jal         0x8022970C
    // 0x802E265C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_8022970C(rdram, ctx);
        goto after_6;
    // 0x802E265C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_6:
    // 0x802E2660: lw          $v0, 0x550($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X550);
    // 0x802E2664: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802E2668: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x802E266C: lw          $a2, 0x4($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4);
    // 0x802E2670: jal         0x8022A0D0
    // 0x802E2674: lw          $a3, 0x8($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X8);
    static_3_8022A0D0(rdram, ctx);
        goto after_7;
    // 0x802E2674: lw          $a3, 0x8($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X8);
    after_7:
    // 0x802E2678: lw          $t0, 0x550($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X550);
    // 0x802E267C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802E2680: lwc1        $f20, 0x0($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802E2684: lwc1        $f4, 0xC($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0XC);
    // 0x802E2688: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802E268C: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    // 0x802E2690: mul.s       $f6, $f20, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f20.fl, ctx->f4.fl);
    // 0x802E2694: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x802E2698: jal         0x802D01D4
    // 0x802E269C: nop

    static_3_802D01D4(rdram, ctx);
        goto after_8;
    // 0x802E269C: nop

    after_8:
    // 0x802E26A0: lw          $t1, 0x550($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X550);
    // 0x802E26A4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802E26A8: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    // 0x802E26AC: lwc1        $f8, 0x10($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X10);
    // 0x802E26B0: mul.s       $f10, $f20, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f8.fl);
    // 0x802E26B4: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x802E26B8: jal         0x802D01D4
    // 0x802E26BC: nop

    static_3_802D01D4(rdram, ctx);
        goto after_9;
    // 0x802E26BC: nop

    after_9:
    // 0x802E26C0: lw          $t2, 0x550($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X550);
    // 0x802E26C4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802E26C8: addiu       $a2, $zero, 0x79
    ctx->r6 = ADD32(0, 0X79);
    // 0x802E26CC: lwc1        $f16, 0x14($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X14);
    // 0x802E26D0: mul.s       $f18, $f20, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x802E26D4: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x802E26D8: jal         0x802D01D4
    // 0x802E26DC: nop

    static_3_802D01D4(rdram, ctx);
        goto after_10;
    // 0x802E26DC: nop

    after_10:
    // 0x802E26E0: lw          $t3, 0x550($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X550);
    // 0x802E26E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802E26E8: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x802E26EC: jal         0x8021B4B0
    // 0x802E26F0: lw          $a0, 0x1C($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X1C);
    static_3_8021B4B0(rdram, ctx);
        goto after_11;
    // 0x802E26F0: lw          $a0, 0x1C($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X1C);
    after_11:
    // 0x802E26F4: lw          $t4, 0x550($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X550);
    // 0x802E26F8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802E26FC: jal         0x8021B838
    // 0x802E2700: lw          $a0, 0x1C($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X1C);
    static_3_8021B838(rdram, ctx);
        goto after_12;
    // 0x802E2700: lw          $a0, 0x1C($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X1C);
    after_12:
L_802E2704:
    // 0x802E2704: lbu         $t5, 0x10B($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X10B);
L_802E2708:
    // 0x802E2708: lw          $a0, 0x100($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X100);
    // 0x802E270C: beql        $t5, $zero, L_802E2740
    if (ctx->r13 == 0) {
        // 0x802E2710: lw          $t0, 0x100($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X100);
            goto L_802E2740;
    }
    goto skip_4;
    // 0x802E2710: lw          $t0, 0x100($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X100);
    skip_4:
    // 0x802E2714: jal         0x80313934
    // 0x802E2718: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    static_3_80313934(rdram, ctx);
        goto after_13;
    // 0x802E2718: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_13:
    // 0x802E271C: beq         $v0, $zero, L_802E2734
    if (ctx->r2 == 0) {
        // 0x802E2720: lw          $t6, 0x100($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X100);
            goto L_802E2734;
    }
    // 0x802E2720: lw          $t6, 0x100($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X100);
    // 0x802E2724: lw          $v1, 0x14($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X14);
    // 0x802E2728: lw          $t7, 0x890($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X890);
    // 0x802E272C: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x802E2730: sw          $t8, 0x890($v1)
    MEM_W(0X890, ctx->r3) = ctx->r24;
L_802E2734:
    // 0x802E2734: lw          $t9, 0x100($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X100);
    // 0x802E2738: sh          $s1, 0x3FC($t9)
    MEM_H(0X3FC, ctx->r25) = ctx->r17;
    // 0x802E273C: lw          $t0, 0x100($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X100);
L_802E2740:
    // 0x802E2740: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x802E2744: lw          $v1, 0x14($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X14);
    // 0x802E2748: lbu         $t1, 0x898($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X898);
    // 0x802E274C: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x802E2750: b           L_802E2768
    // 0x802E2754: sb          $t2, 0x898($v1)
    MEM_B(0X898, ctx->r3) = ctx->r10;
        goto L_802E2768;
    // 0x802E2754: sb          $t2, 0x898($v1)
    MEM_B(0X898, ctx->r3) = ctx->r10;
    // 0x802E2758: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_802E275C:
    // 0x802E275C: bne         $s1, $s2, L_802E2570
    if (ctx->r17 != ctx->r18) {
        // 0x802E2760: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_802E2570;
    }
    // 0x802E2760: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_802E2764:
    // 0x802E2764: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802E2768:
    // 0x802E2768: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x802E276C: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x802E2770: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x802E2774: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x802E2778: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x802E277C: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x802E2780: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x802E2784: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x802E2788: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x802E278C: jr          $ra
    // 0x802E2790: addiu       $sp, $sp, 0x100
    ctx->r29 = ADD32(ctx->r29, 0X100);
    return;
    // 0x802E2790: addiu       $sp, $sp, 0x100
    ctx->r29 = ADD32(ctx->r29, 0X100);
;}
RECOMP_FUNC void D_80290A2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80290AAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80290AB0: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80290AB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80290AB8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80290ABC: jal         0x80228DE0
    // 0x80290AC0: addiu       $a1, $a2, 0x4
    ctx->r5 = ADD32(ctx->r6, 0X4);
    func_80228DE0(rdram, ctx);
        goto after_0;
    // 0x80290AC0: addiu       $a1, $a2, 0x4
    ctx->r5 = ADD32(ctx->r6, 0X4);
    after_0:
    // 0x80290AC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80290AC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80290ACC: jr          $ra
    // 0x80290AD0: nop

    return;
    // 0x80290AD0: nop

;}
RECOMP_FUNC void D_80294C18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80294C98: jr          $ra
    // 0x80294C9C: lw          $v0, 0x8C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8C);
    return;
    // 0x80294C9C: lw          $v0, 0x8C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8C);
;}
RECOMP_FUNC void D_802A2FD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A3050: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802A3054: jr          $ra
    // 0x802A3058: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x802A3058: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void D_802AFD28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AFDA8: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x802AFDAC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802AFDB0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802AFDB4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802AFDB8: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x802AFDBC: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x802AFDC0: jal         0x802D25CC
    // 0x802AFDC4: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    static_3_802D25CC(rdram, ctx);
        goto after_0;
    // 0x802AFDC4: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    after_0:
    // 0x802AFDC8: swc1        $f0, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->f0.u32l;
    // 0x802AFDCC: jal         0x802D2660
    // 0x802AFDD0: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    static_3_802D2660(rdram, ctx);
        goto after_1;
    // 0x802AFDD0: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    after_1:
    // 0x802AFDD4: swc1        $f0, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->f0.u32l;
    // 0x802AFDD8: jal         0x802D25F4
    // 0x802AFDDC: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    static_3_802D25F4(rdram, ctx);
        goto after_2;
    // 0x802AFDDC: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    after_2:
    // 0x802AFDE0: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x802AFDE4: swc1        $f0, 0xA8($s0)
    MEM_W(0XA8, ctx->r16) = ctx->f0.u32l;
    // 0x802AFDE8: lw          $v1, 0xD8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XD8);
    // 0x802AFDEC: lw          $t9, 0x5C($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X5C);
    // 0x802AFDF0: lh          $t6, 0x58($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X58);
    // 0x802AFDF4: jalr        $t9
    // 0x802AFDF8: addu        $a0, $t6, $v0
    ctx->r4 = ADD32(ctx->r14, ctx->r2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x802AFDF8: addu        $a0, $t6, $v0
    ctx->r4 = ADD32(ctx->r14, ctx->r2);
    after_3:
    // 0x802AFDFC: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x802AFE00: swc1        $f0, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->f0.u32l;
    // 0x802AFE04: lw          $v1, 0xD8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XD8);
    // 0x802AFE08: lw          $t9, 0x3C($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X3C);
    // 0x802AFE0C: lh          $t7, 0x38($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X38);
    // 0x802AFE10: jalr        $t9
    // 0x802AFE14: addu        $a0, $t7, $v0
    ctx->r4 = ADD32(ctx->r15, ctx->r2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x802AFE14: addu        $a0, $t7, $v0
    ctx->r4 = ADD32(ctx->r15, ctx->r2);
    after_4:
    // 0x802AFE18: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x802AFE1C: swc1        $f0, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f0.u32l;
    // 0x802AFE20: lw          $v1, 0xD8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XD8);
    // 0x802AFE24: lw          $t9, 0x4C($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X4C);
    // 0x802AFE28: lh          $t8, 0x48($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X48);
    // 0x802AFE2C: jalr        $t9
    // 0x802AFE30: addu        $a0, $t8, $v0
    ctx->r4 = ADD32(ctx->r24, ctx->r2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x802AFE30: addu        $a0, $t8, $v0
    ctx->r4 = ADD32(ctx->r24, ctx->r2);
    after_5:
    // 0x802AFE34: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x802AFE38: swc1        $f0, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->f0.u32l;
    // 0x802AFE3C: lw          $v1, 0xD8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XD8);
    // 0x802AFE40: lw          $t9, 0x44($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X44);
    // 0x802AFE44: lh          $t0, 0x40($v1)
    ctx->r8 = MEM_H(ctx->r3, 0X40);
    // 0x802AFE48: jalr        $t9
    // 0x802AFE4C: addu        $a0, $t0, $v0
    ctx->r4 = ADD32(ctx->r8, ctx->r2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x802AFE4C: addu        $a0, $t0, $v0
    ctx->r4 = ADD32(ctx->r8, ctx->r2);
    after_6:
    // 0x802AFE50: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x802AFE54: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x802AFE58: lwc1        $f4, 0x98($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X98);
    // 0x802AFE5C: swc1        $f0, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->f0.u32l;
    // 0x802AFE60: c.eq.s      $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f14.fl == ctx->f4.fl;
    // 0x802AFE64: nop

    // 0x802AFE68: bc1f        L_802AFE84
    if (!c1cs) {
        // 0x802AFE6C: lui         $at, 0x0
        ctx->r1 = S32(0X0 << 16);
            goto L_802AFE84;
    }
    // 0x802AFE6C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802AFE70: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802AFE74: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x802AFE78: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802AFE7C: swc1        $f6, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->f6.u32l;
    // 0x802AFE80: swc1        $f8, 0x5CC($s0)
    MEM_W(0X5CC, ctx->r16) = ctx->f8.u32l;
L_802AFE84:
    // 0x802AFE84: lbu         $t1, 0x24($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X24);
    // 0x802AFE88: bnel        $t1, $zero, L_802AFEE0
    if (ctx->r9 != 0) {
        // 0x802AFE8C: lw          $t2, 0x40($s0)
        ctx->r10 = MEM_W(ctx->r16, 0X40);
            goto L_802AFEE0;
    }
    goto skip_0;
    // 0x802AFE8C: lw          $t2, 0x40($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X40);
    skip_0:
    // 0x802AFE90: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802AFE94: lwc1        $f4, 0xA8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XA8);
    // 0x802AFE98: c.lt.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl < ctx->f4.fl;
    // 0x802AFE9C: nop

    // 0x802AFEA0: bc1fl       L_802AFEE0
    if (!c1cs) {
        // 0x802AFEA4: lw          $t2, 0x40($s0)
        ctx->r10 = MEM_W(ctx->r16, 0X40);
            goto L_802AFEE0;
    }
    goto skip_1;
    // 0x802AFEA4: lw          $t2, 0x40($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X40);
    skip_1:
    // 0x802AFEA8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802AFEAC: lwc1        $f8, 0x4C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x802AFEB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802AFEB4: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x802AFEB8: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x802AFEBC: nop

    // 0x802AFEC0: bc1fl       L_802AFEE0
    if (!c1cs) {
        // 0x802AFEC4: lw          $t2, 0x40($s0)
        ctx->r10 = MEM_W(ctx->r16, 0X40);
            goto L_802AFEE0;
    }
    goto skip_2;
    // 0x802AFEC4: lw          $t2, 0x40($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X40);
    skip_2:
    // 0x802AFEC8: jal         0x802E0820
    // 0x802AFECC: lw          $a2, 0x60($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X60);
    static_3_802E0820(rdram, ctx);
        goto after_7;
    // 0x802AFECC: lw          $a2, 0x60($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X60);
    after_7:
    // 0x802AFED0: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x802AFED4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x802AFED8: nop

    // 0x802AFEDC: lw          $t2, 0x40($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X40);
L_802AFEE0:
    // 0x802AFEE0: bnel        $t2, $zero, L_802AFF20
    if (ctx->r10 != 0) {
        // 0x802AFEE4: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_802AFF20;
    }
    goto skip_3;
    // 0x802AFEE4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_3:
    // 0x802AFEE8: lwc1        $f10, 0x5CC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X5CC);
    // 0x802AFEEC: lwc1        $f4, 0xAC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XAC);
    // 0x802AFEF0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802AFEF4: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802AFEF8: sub.s       $f0, $f10, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x802AFEFC: lw          $t3, 0x28($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X28);
    // 0x802AFF00: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x802AFF04: bne         $t3, $zero, L_802AFF1C
    if (ctx->r11 != 0) {
        // 0x802AFF08: swc1        $f8, 0xA0($s0)
        MEM_W(0XA0, ctx->r16) = ctx->f8.u32l;
            goto L_802AFF1C;
    }
    // 0x802AFF08: swc1        $f8, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f8.u32l;
    // 0x802AFF0C: lwc1        $f10, 0xA0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x802AFF10: lwc1        $f4, 0x8E8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8E8);
    // 0x802AFF14: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x802AFF18: swc1        $f6, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f6.u32l;
L_802AFF1C:
    // 0x802AFF1C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_802AFF20:
    // 0x802AFF20: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802AFF24: lwc1        $f0, 0x9C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X9C);
    // 0x802AFF28: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x802AFF2C: nop

    // 0x802AFF30: bc1fl       L_802AFF44
    if (!c1cs) {
        // 0x802AFF34: c.lt.s      $f0, $f14
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
            goto L_802AFF44;
    }
    goto skip_4;
    // 0x802AFF34: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    skip_4:
    // 0x802AFF38: swc1        $f18, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->f18.u32l;
    // 0x802AFF3C: lwc1        $f0, 0x9C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X9C);
    // 0x802AFF40: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
L_802AFF44:
    // 0x802AFF44: nop

    // 0x802AFF48: bc1fl       L_802AFF58
    if (!c1cs) {
        // 0x802AFF4C: lwc1        $f12, 0xA0($s0)
        ctx->f12.u32l = MEM_W(ctx->r16, 0XA0);
            goto L_802AFF58;
    }
    goto skip_5;
    // 0x802AFF4C: lwc1        $f12, 0xA0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XA0);
    skip_5:
    // 0x802AFF50: swc1        $f14, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->f14.u32l;
    // 0x802AFF54: lwc1        $f12, 0xA0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XA0);
L_802AFF58:
    // 0x802AFF58: c.lt.s      $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f18.fl < ctx->f12.fl;
    // 0x802AFF5C: nop

    // 0x802AFF60: bc1fl       L_802AFF74
    if (!c1cs) {
        // 0x802AFF64: c.lt.s      $f12, $f14
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
            goto L_802AFF74;
    }
    goto skip_6;
    // 0x802AFF64: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    skip_6:
    // 0x802AFF68: swc1        $f18, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f18.u32l;
    // 0x802AFF6C: lwc1        $f12, 0xA0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x802AFF70: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
L_802AFF74:
    // 0x802AFF74: nop

    // 0x802AFF78: bc1fl       L_802AFF8C
    if (!c1cs) {
        // 0x802AFF7C: lwc1        $f8, 0xB4($s0)
        ctx->f8.u32l = MEM_W(ctx->r16, 0XB4);
            goto L_802AFF8C;
    }
    goto skip_7;
    // 0x802AFF7C: lwc1        $f8, 0xB4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XB4);
    skip_7:
    // 0x802AFF80: swc1        $f14, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f14.u32l;
    // 0x802AFF84: lwc1        $f12, 0xA0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x802AFF88: lwc1        $f8, 0xB4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XB4);
L_802AFF8C:
    // 0x802AFF8C: sub.s       $f2, $f8, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f12.fl;
    // 0x802AFF90: mul.s       $f16, $f2, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f18.fl);
    // 0x802AFF94: c.lt.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl < ctx->f16.fl;
    // 0x802AFF98: nop

    // 0x802AFF9C: bc1fl       L_802AFFAC
    if (!c1cs) {
        // 0x802AFFA0: c.lt.s      $f16, $f14
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.fl < ctx->f14.fl;
            goto L_802AFFAC;
    }
    goto skip_8;
    // 0x802AFFA0: c.lt.s      $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.fl < ctx->f14.fl;
    skip_8:
    // 0x802AFFA4: mov.s       $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.fl = ctx->f18.fl;
    // 0x802AFFA8: c.lt.s      $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.fl < ctx->f14.fl;
L_802AFFAC:
    // 0x802AFFAC: nop

    // 0x802AFFB0: bc1fl       L_802AFFC0
    if (!c1cs) {
        // 0x802AFFB4: lbu         $t4, 0x5F8($s0)
        ctx->r12 = MEM_BU(ctx->r16, 0X5F8);
            goto L_802AFFC0;
    }
    goto skip_9;
    // 0x802AFFB4: lbu         $t4, 0x5F8($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X5F8);
    skip_9:
    // 0x802AFFB8: mov.s       $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    ctx->f16.fl = ctx->f14.fl;
    // 0x802AFFBC: lbu         $t4, 0x5F8($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X5F8);
L_802AFFC0:
    // 0x802AFFC0: bnel        $t4, $zero, L_802AFFE8
    if (ctx->r12 != 0) {
        // 0x802AFFC4: lw          $a0, 0xC($s0)
        ctx->r4 = MEM_W(ctx->r16, 0XC);
            goto L_802AFFE8;
    }
    goto skip_10;
    // 0x802AFFC4: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    skip_10:
    // 0x802AFFC8: lwc1        $f0, 0x3C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x802AFFCC: lwc1        $f4, 0x9C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X9C);
    // 0x802AFFD0: mul.s       $f10, $f12, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x802AFFD4: nop

    // 0x802AFFD8: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x802AFFDC: swc1        $f10, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f10.u32l;
    // 0x802AFFE0: swc1        $f6, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->f6.u32l;
    // 0x802AFFE4: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
L_802AFFE8:
    // 0x802AFFE8: jal         0x802D2668
    // 0x802AFFEC: swc1        $f16, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f16.u32l;
    static_3_802D2668(rdram, ctx);
        goto after_8;
    // 0x802AFFEC: swc1        $f16, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f16.u32l;
    after_8:
    // 0x802AFFF0: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x802AFFF4: jal         0x802D2660
    // 0x802AFFF8: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    static_3_802D2660(rdram, ctx);
        goto after_9;
    // 0x802AFFF8: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    after_9:
    // 0x802AFFFC: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x802B0000: lw          $t5, 0x28($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X28);
    // 0x802B0004: beql        $t5, $zero, L_802B00B0
    if (ctx->r13 == 0) {
        // 0x802B0008: lw          $v0, 0x18($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X18);
            goto L_802B00B0;
    }
    goto skip_11;
    // 0x802B0008: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    skip_11:
    // 0x802B000C: lbu         $t6, 0x934($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X934);
    // 0x802B0010: bnel        $t6, $zero, L_802B00B0
    if (ctx->r14 != 0) {
        // 0x802B0014: lw          $v0, 0x18($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X18);
            goto L_802B00B0;
    }
    goto skip_12;
    // 0x802B0014: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    skip_12:
    // 0x802B0018: jal         0x802D2668
    // 0x802B001C: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    static_3_802D2668(rdram, ctx);
        goto after_10;
    // 0x802B001C: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    after_10:
    // 0x802B0020: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x802B0024: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x802B0028: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802B002C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802B0030: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x802B0034: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802B0038: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802B003C: lwc1        $f8, 0x38($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X38);
    // 0x802B0040: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x802B0044: mul.s       $f16, $f4, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802B0048: sub.s       $f10, $f18, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f18.fl - ctx->f8.fl;
    // 0x802B004C: mul.s       $f4, $f16, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f10.fl);
    // 0x802B0050: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
    // 0x802B0054: add.s       $f12, $f0, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x802B0058: jal         0x802D2660
    // 0x802B005C: swc1        $f12, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f12.u32l;
    static_3_802D2660(rdram, ctx);
        goto after_11;
    // 0x802B005C: swc1        $f12, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f12.u32l;
    after_11:
    // 0x802B0060: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802B0064: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802B0068: lwc1        $f6, 0x38($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X38);
    // 0x802B006C: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802B0070: lwc1        $f12, 0x40($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X40);
    // 0x802B0074: sub.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x802B0078: lwc1        $f2, 0x98($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X98);
    // 0x802B007C: mul.s       $f10, $f16, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f8.fl);
    // 0x802B0080: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x802B0084: nop

    // 0x802B0088: bc1f        L_802B0098
    if (!c1cs) {
        // 0x802B008C: sub.s       $f14, $f0, $f10
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f0.fl - ctx->f10.fl;
            goto L_802B0098;
    }
    // 0x802B008C: sub.s       $f14, $f0, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x802B0090: swc1        $f12, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->f12.u32l;
    // 0x802B0094: lwc1        $f2, 0x98($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X98);
L_802B0098:
    // 0x802B0098: c.lt.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl < ctx->f2.fl;
    // 0x802B009C: nop

    // 0x802B00A0: bc1fl       L_802B00B0
    if (!c1cs) {
        // 0x802B00A4: lw          $v0, 0x18($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X18);
            goto L_802B00B0;
    }
    goto skip_13;
    // 0x802B00A4: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    skip_13:
    // 0x802B00A8: swc1        $f14, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->f14.u32l;
    // 0x802B00AC: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
L_802B00B0:
    // 0x802B00B0: lwc1        $f4, 0x98($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X98);
    // 0x802B00B4: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x802B00B8: lwc1        $f0, 0x9C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X9C);
    // 0x802B00BC: bne         $v0, $at, L_802B00DC
    if (ctx->r2 != ctx->r1) {
        // 0x802B00C0: swc1        $f4, 0x94($s0)
        MEM_W(0X94, ctx->r16) = ctx->f4.u32l;
            goto L_802B00DC;
    }
    // 0x802B00C0: swc1        $f4, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->f4.u32l;
    // 0x802B00C4: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x802B00C8: bne         $v0, $at, L_802B00DC
    if (ctx->r2 != ctx->r1) {
        // 0x802B00CC: addiu       $at, $zero, 0x10
        ctx->r1 = ADD32(0, 0X10);
            goto L_802B00DC;
    }
    // 0x802B00CC: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x802B00D0: bne         $v0, $at, L_802B00DC
    if (ctx->r2 != ctx->r1) {
        // 0x802B00D4: lwc1        $f6, 0x34($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
            goto L_802B00DC;
    }
    // 0x802B00D4: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x802B00D8: swc1        $f6, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->f6.u32l;
L_802B00DC:
    // 0x802B00DC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802B00E0: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x802B00E4: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x802B00E8: jal         0x802D27BC
    // 0x802B00EC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_802D273C(rdram, ctx);
        goto after_12;
    // 0x802B00EC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_12:
    // 0x802B00F0: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x802B00F4: jal         0x802D2990
    // 0x802B00F8: lw          $a1, 0x94($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X94);
    static_3_802D2990(rdram, ctx);
        goto after_13;
    // 0x802B00F8: lw          $a1, 0x94($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X94);
    after_13:
    // 0x802B00FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802B0100: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802B0104: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x802B0108: jr          $ra
    // 0x802B010C: nop

    return;
    // 0x802B010C: nop

;}
RECOMP_FUNC void D_802B3E34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B3EB4: lbu         $v0, 0x77C($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X77C);
    // 0x802B3EB8: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x802B3EBC: sltiu       $v0, $t6, 0x1
    ctx->r2 = ctx->r14 < 0X1 ? 1 : 0;
    // 0x802B3EC0: andi        $t7, $v0, 0xFF
    ctx->r15 = ctx->r2 & 0XFF;
    // 0x802B3EC4: jr          $ra
    // 0x802B3EC8: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    return;
    // 0x802B3EC8: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
;}
RECOMP_FUNC void D_802E3BA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E3C24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802E3C28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802E3C2C: jal         0x802C4A20
    // 0x802E3C30: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_802C4A20(rdram, ctx);
        goto after_0;
    // 0x802E3C30: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802E3C34: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802E3C38: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x802E3C3C: sw          $t6, 0x194($a0)
    MEM_W(0X194, ctx->r4) = ctx->r14;
    // 0x802E3C40: lh          $t7, 0x2E($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X2E);
    // 0x802E3C44: sh          $t7, 0x198($a0)
    MEM_H(0X198, ctx->r4) = ctx->r15;
    // 0x802E3C48: lh          $t8, 0x32($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X32);
    // 0x802E3C4C: sh          $t8, 0x19A($a0)
    MEM_H(0X19A, ctx->r4) = ctx->r24;
    // 0x802E3C50: lh          $t9, 0x36($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X36);
    // 0x802E3C54: sh          $t9, 0x19C($a0)
    MEM_H(0X19C, ctx->r4) = ctx->r25;
    // 0x802E3C58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802E3C5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802E3C60: jr          $ra
    // 0x802E3C64: nop

    return;
    // 0x802E3C64: nop

;}
RECOMP_FUNC void D_80234B94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80234B94: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x80234B98: lwc1        $f6, 0x0($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80234B9C: lwc1        $f10, 0x4($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X4);
    // 0x80234BA0: lwc1        $f16, 0x4($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X4);
    // 0x80234BA4: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80234BA8: lwc1        $f6, 0x8($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X8);
    // 0x80234BAC: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80234BB0: lwc1        $f10, 0x8($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80234BB4: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80234BB8: add.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x80234BBC: jr          $ra
    // 0x80234BC0: add.s       $f0, $f4, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f16.fl;
    return;
    // 0x80234BC0: add.s       $f0, $f4, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f16.fl;
;}
RECOMP_FUNC void D_8023283C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023283C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232840: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80232844: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80232848: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8023284C: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x80232850: lwc1        $f0, 0x34($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80232854: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x80232858: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8023285C: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80232860: bc1fl       L_80232928
    if (!c1cs) {
        // 0x80232864: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_80232928;
    }
    goto skip_0;
    // 0x80232864: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_0:
    // 0x80232868: c.le.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl <= ctx->f8.fl;
    // 0x8023286C: lbu         $t6, 0x43($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X43);
    // 0x80232870: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x80232874: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80232878: bc1fl       L_80232898
    if (!c1cs) {
        // 0x8023287C: c.le.s      $f10, $f0
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl <= ctx->f0.fl;
            goto L_80232898;
    }
    goto skip_1;
    // 0x8023287C: c.le.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl <= ctx->f0.fl;
    skip_1:
    // 0x80232880: beq         $t6, $zero, L_8023288C
    if (ctx->r14 == 0) {
        // 0x80232884: nop
    
            goto L_8023288C;
    }
    // 0x80232884: nop

    // 0x80232888: sh          $zero, 0x0($a2)
    MEM_H(0X0, ctx->r6) = 0;
L_8023288C:
    // 0x8023288C: b           L_80232E88
    // 0x80232890: sh          $t7, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r15;
        goto L_80232E88;
    // 0x80232890: sh          $t7, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r15;
    // 0x80232894: c.le.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl <= ctx->f0.fl;
L_80232898:
    // 0x80232898: lbu         $t8, 0x43($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X43);
    // 0x8023289C: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x802328A0: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802328A4: bc1fl       L_802328C4
    if (!c1cs) {
        // 0x802328A8: sub.s       $f6, $f0, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f4.fl;
            goto L_802328C4;
    }
    goto skip_2;
    // 0x802328A8: sub.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f4.fl;
    skip_2:
    // 0x802328AC: bne         $t8, $zero, L_802328B8
    if (ctx->r24 != 0) {
        // 0x802328B0: nop
    
            goto L_802328B8;
    }
    // 0x802328B0: nop

    // 0x802328B4: sh          $zero, 0x0($a2)
    MEM_H(0X0, ctx->r6) = 0;
L_802328B8:
    // 0x802328B8: b           L_80232E88
    // 0x802328BC: sh          $t9, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r25;
        goto L_80232E88;
    // 0x802328BC: sh          $t9, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r25;
    // 0x802328C0: sub.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f4.fl;
L_802328C4:
    // 0x802328C4: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x802328C8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802328CC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802328D0: mul.s       $f2, $f6, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x802328D4: c.le.s      $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f10.fl <= ctx->f2.fl;
    // 0x802328D8: nop

    // 0x802328DC: bc1fl       L_802328F8
    if (!c1cs) {
        // 0x802328E0: mtc1        $at, $f18
        ctx->f18.u32l = ctx->r1;
            goto L_802328F8;
    }
    goto skip_3;
    // 0x802328E0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    skip_3:
    // 0x802328E4: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802328E8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802328EC: b           L_80232900
    // 0x802328F0: add.s       $f0, $f2, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f18.fl;
        goto L_80232900;
    // 0x802328F0: add.s       $f0, $f2, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f18.fl;
    // 0x802328F4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
L_802328F8:
    // 0x802328F8: nop

    // 0x802328FC: sub.s       $f0, $f2, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f18.fl;
L_80232900:
    // 0x80232900: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80232904: addiu       $t3, $zero, 0x2F
    ctx->r11 = ADD32(0, 0X2F);
    // 0x80232908: mfc1        $t1, $f4
    ctx->r9 = (int32_t)ctx->f4.u32l;
    // 0x8023290C: nop

    // 0x80232910: sh          $t1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r9;
    // 0x80232914: lh          $t2, 0x0($a0)
    ctx->r10 = MEM_H(ctx->r4, 0X0);
    // 0x80232918: subu        $t4, $t3, $t2
    ctx->r12 = SUB32(ctx->r11, ctx->r10);
    // 0x8023291C: b           L_80232E88
    // 0x80232920: sh          $t4, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r12;
        goto L_80232E88;
    // 0x80232920: sh          $t4, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r12;
    // 0x80232924: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_80232928:
    // 0x80232928: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8023292C: c.eq.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl == ctx->f0.fl;
    // 0x80232930: nop

    // 0x80232934: bc1fl       L_80232A3C
    if (!c1cs) {
        // 0x80232938: lwc1        $f6, 0x38($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
            goto L_80232A3C;
    }
    goto skip_4;
    // 0x80232938: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    skip_4:
    // 0x8023293C: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80232940: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80232944: lwc1        $f14, 0x30($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80232948: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8023294C: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80232950: lbu         $t5, 0x43($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X43);
    // 0x80232954: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x80232958: add.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x8023295C: c.le.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl <= ctx->f14.fl;
    // 0x80232960: nop

    // 0x80232964: bc1fl       L_80232984
    if (!c1cs) {
        // 0x80232968: c.le.s      $f16, $f12
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl <= ctx->f12.fl;
            goto L_80232984;
    }
    goto skip_5;
    // 0x80232968: c.le.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl <= ctx->f12.fl;
    skip_5:
    // 0x8023296C: bne         $t5, $zero, L_80232978
    if (ctx->r13 != 0) {
        // 0x80232970: nop
    
            goto L_80232978;
    }
    // 0x80232970: nop

    // 0x80232974: sh          $zero, 0x0($a2)
    MEM_H(0X0, ctx->r6) = 0;
L_80232978:
    // 0x80232978: b           L_80232E88
    // 0x8023297C: sh          $t6, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r14;
        goto L_80232E88;
    // 0x8023297C: sh          $t6, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r14;
    // 0x80232980: c.le.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl <= ctx->f12.fl;
L_80232984:
    // 0x80232984: lbu         $t7, 0x43($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X43);
    // 0x80232988: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x8023298C: bc1fl       L_802329AC
    if (!c1cs) {
        // 0x80232990: sub.s       $f6, $f12, $f14
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f12.fl - ctx->f14.fl;
            goto L_802329AC;
    }
    goto skip_6;
    // 0x80232990: sub.s       $f6, $f12, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f12.fl - ctx->f14.fl;
    skip_6:
    // 0x80232994: beq         $t7, $zero, L_802329A0
    if (ctx->r15 == 0) {
        // 0x80232998: nop
    
            goto L_802329A0;
    }
    // 0x80232998: nop

    // 0x8023299C: sh          $zero, 0x0($a2)
    MEM_H(0X0, ctx->r6) = 0;
L_802329A0:
    // 0x802329A0: b           L_80232E88
    // 0x802329A4: sh          $t8, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r24;
        goto L_80232E88;
    // 0x802329A4: sh          $t8, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r24;
    // 0x802329A8: sub.s       $f6, $f12, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f12.fl - ctx->f14.fl;
L_802329AC:
    // 0x802329AC: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x802329B0: lui         $at, 0x427C
    ctx->r1 = S32(0X427C << 16);
    // 0x802329B4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802329B8: mul.s       $f2, $f6, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x802329BC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802329C0: c.le.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl <= ctx->f16.fl;
    // 0x802329C4: nop

    // 0x802329C8: bc1fl       L_802329E8
    if (!c1cs) {
        // 0x802329CC: sub.s       $f4, $f16, $f2
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f2.fl;
            goto L_802329E8;
    }
    goto skip_7;
    // 0x802329CC: sub.s       $f4, $f16, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f2.fl;
    skip_7:
    // 0x802329D0: sub.s       $f10, $f16, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f16.fl - ctx->f2.fl;
    // 0x802329D4: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802329D8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802329DC: b           L_802329F4
    // 0x802329E0: add.s       $f0, $f10, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f18.fl;
        goto L_802329F4;
    // 0x802329E0: add.s       $f0, $f10, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x802329E4: sub.s       $f4, $f16, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f2.fl;
L_802329E8:
    // 0x802329E8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802329EC: nop

    // 0x802329F0: sub.s       $f0, $f4, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f18.fl;
L_802329F4:
    // 0x802329F4: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x802329F8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802329FC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80232A00: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80232A04: add.s       $f12, $f2, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f8.fl;
    // 0x80232A08: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
    // 0x80232A0C: c.le.s      $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f10.fl <= ctx->f12.fl;
    // 0x80232A10: sh          $t0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r8;
    // 0x80232A14: bc1fl       L_80232A28
    if (!c1cs) {
        // 0x80232A18: sub.s       $f0, $f12, $f18
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f18.fl;
            goto L_80232A28;
    }
    goto skip_8;
    // 0x80232A18: sub.s       $f0, $f12, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f18.fl;
    skip_8:
    // 0x80232A1C: b           L_80232A28
    // 0x80232A20: add.s       $f0, $f12, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f12.fl + ctx->f18.fl;
        goto L_80232A28;
    // 0x80232A20: add.s       $f0, $f12, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f12.fl + ctx->f18.fl;
    // 0x80232A24: sub.s       $f0, $f12, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f18.fl;
L_80232A28:
    // 0x80232A28: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80232A2C: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
    // 0x80232A30: b           L_80232E88
    // 0x80232A34: sh          $t3, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r11;
        goto L_80232E88;
    // 0x80232A34: sh          $t3, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r11;
    // 0x80232A38: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
L_80232A3C:
    // 0x80232A3C: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80232A40: lwc1        $f14, 0x30($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80232A44: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80232A48: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80232A4C: add.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80232A50: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x80232A54: nop

    // 0x80232A58: bc1fl       L_80232BA0
    if (!c1cs) {
        // 0x80232A5C: c.le.s      $f14, $f12
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl <= ctx->f12.fl;
            goto L_80232BA0;
    }
    goto skip_9;
    // 0x80232A5C: c.le.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl <= ctx->f12.fl;
    skip_9:
    // 0x80232A60: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80232A64: lbu         $t2, 0x43($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X43);
    // 0x80232A68: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x80232A6C: add.s       $f2, $f10, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80232A70: c.le.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl <= ctx->f14.fl;
    // 0x80232A74: nop

    // 0x80232A78: bc1fl       L_80232A98
    if (!c1cs) {
        // 0x80232A7C: sub.s       $f6, $f14, $f12
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f14.fl - ctx->f12.fl;
            goto L_80232A98;
    }
    goto skip_10;
    // 0x80232A7C: sub.s       $f6, $f14, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f14.fl - ctx->f12.fl;
    skip_10:
    // 0x80232A80: bne         $t2, $zero, L_80232A8C
    if (ctx->r10 != 0) {
        // 0x80232A84: nop
    
            goto L_80232A8C;
    }
    // 0x80232A84: nop

    // 0x80232A88: sh          $zero, 0x0($a2)
    MEM_H(0X0, ctx->r6) = 0;
L_80232A8C:
    // 0x80232A8C: b           L_80232E88
    // 0x80232A90: sh          $t4, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r12;
        goto L_80232E88;
    // 0x80232A90: sh          $t4, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r12;
    // 0x80232A94: sub.s       $f6, $f14, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f14.fl - ctx->f12.fl;
L_80232A98:
    // 0x80232A98: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80232A9C: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80232AA0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80232AA4: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80232AA8: nop

    // 0x80232AAC: mul.s       $f16, $f10, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x80232AB0: c.le.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl <= ctx->f16.fl;
    // 0x80232AB4: nop

    // 0x80232AB8: bc1f        L_80232AD0
    if (!c1cs) {
        // 0x80232ABC: nop
    
            goto L_80232AD0;
    }
    // 0x80232ABC: nop

    // 0x80232AC0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80232AC4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80232AC8: b           L_80232ADC
    // 0x80232ACC: add.s       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f16.fl + ctx->f18.fl;
        goto L_80232ADC;
    // 0x80232ACC: add.s       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f16.fl + ctx->f18.fl;
L_80232AD0:
    // 0x80232AD0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80232AD4: nop

    // 0x80232AD8: sub.s       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f16.fl - ctx->f18.fl;
L_80232ADC:
    // 0x80232ADC: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80232AE0: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80232AE4: c.le.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl <= ctx->f16.fl;
    // 0x80232AE8: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x80232AEC: bc1f        L_80232B38
    if (!c1cs) {
        // 0x80232AF0: sh          $t6, 0x0($a0)
        MEM_H(0X0, ctx->r4) = ctx->r14;
            goto L_80232B38;
    }
    // 0x80232AF0: sh          $t6, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r14;
    // 0x80232AF4: sub.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x80232AF8: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80232AFC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80232B00: mul.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80232B04: c.le.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl <= ctx->f12.fl;
    // 0x80232B08: nop

    // 0x80232B0C: bc1fl       L_80232B20
    if (!c1cs) {
        // 0x80232B10: sub.s       $f0, $f12, $f18
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f18.fl;
            goto L_80232B20;
    }
    goto skip_11;
    // 0x80232B10: sub.s       $f0, $f12, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f18.fl;
    skip_11:
    // 0x80232B14: b           L_80232B20
    // 0x80232B18: add.s       $f0, $f12, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f12.fl + ctx->f18.fl;
        goto L_80232B20;
    // 0x80232B18: add.s       $f0, $f12, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f12.fl + ctx->f18.fl;
    // 0x80232B1C: sub.s       $f0, $f12, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f18.fl;
L_80232B20:
    // 0x80232B20: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80232B24: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x80232B28: nop

    // 0x80232B2C: addiu       $t9, $t8, 0x10
    ctx->r25 = ADD32(ctx->r24, 0X10);
    // 0x80232B30: b           L_80232E88
    // 0x80232B34: sh          $t9, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r25;
        goto L_80232E88;
    // 0x80232B34: sh          $t9, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r25;
L_80232B38:
    // 0x80232B38: c.lt.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl < ctx->f2.fl;
    // 0x80232B3C: nop

    // 0x80232B40: bc1f        L_80232E88
    if (!c1cs) {
        // 0x80232B44: nop
    
            goto L_80232E88;
    }
    // 0x80232B44: nop

    // 0x80232B48: sub.s       $f8, $f16, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f16.fl - ctx->f12.fl;
    // 0x80232B4C: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80232B50: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80232B54: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80232B58: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80232B5C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80232B60: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x80232B64: swc1        $f8, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f8.u32l;
    // 0x80232B68: lwc1        $f4, 0x0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X0);
    // 0x80232B6C: bc1fl       L_80232B80
    if (!c1cs) {
        // 0x80232B70: sub.s       $f0, $f4, $f18
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f18.fl;
            goto L_80232B80;
    }
    goto skip_12;
    // 0x80232B70: sub.s       $f0, $f4, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f18.fl;
    skip_12:
    // 0x80232B74: b           L_80232B80
    // 0x80232B78: add.s       $f0, $f8, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f18.fl;
        goto L_80232B80;
    // 0x80232B78: add.s       $f0, $f8, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x80232B7C: sub.s       $f0, $f4, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f18.fl;
L_80232B80:
    // 0x80232B80: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80232B84: addiu       $t3, $zero, 0x2F
    ctx->r11 = ADD32(0, 0X2F);
    // 0x80232B88: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x80232B8C: nop

    // 0x80232B90: subu        $t2, $t3, $t1
    ctx->r10 = SUB32(ctx->r11, ctx->r9);
    // 0x80232B94: b           L_80232E88
    // 0x80232B98: sh          $t2, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r10;
        goto L_80232E88;
    // 0x80232B98: sh          $t2, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r10;
    // 0x80232B9C: c.le.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl <= ctx->f12.fl;
L_80232BA0:
    // 0x80232BA0: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80232BA4: bc1fl       L_80232D34
    if (!c1cs) {
        // 0x80232BA8: lwc1        $f16, 0x2C($sp)
        ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
            goto L_80232D34;
    }
    goto skip_13;
    // 0x80232BA8: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    skip_13:
    // 0x80232BAC: c.le.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl <= ctx->f16.fl;
    // 0x80232BB0: nop

    // 0x80232BB4: bc1fl       L_80232D34
    if (!c1cs) {
        // 0x80232BB8: lwc1        $f16, 0x2C($sp)
        ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
            goto L_80232D34;
    }
    goto skip_14;
    // 0x80232BB8: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    skip_14:
    // 0x80232BBC: sub.s       $f10, $f12, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f12.fl - ctx->f14.fl;
    // 0x80232BC0: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80232BC4: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80232BC8: mul.s       $f2, $f10, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x80232BCC: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x80232BD0: nop

    // 0x80232BD4: bc1fl       L_80232BF0
    if (!c1cs) {
        // 0x80232BD8: mtc1        $at, $f18
        ctx->f18.u32l = ctx->r1;
            goto L_80232BF0;
    }
    goto skip_15;
    // 0x80232BD8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    skip_15:
    // 0x80232BDC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80232BE0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80232BE4: b           L_80232BF8
    // 0x80232BE8: add.s       $f0, $f2, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f18.fl;
        goto L_80232BF8;
    // 0x80232BE8: add.s       $f0, $f2, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f18.fl;
    // 0x80232BEC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
L_80232BF0:
    // 0x80232BF0: nop

    // 0x80232BF4: sub.s       $f0, $f2, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f18.fl;
L_80232BF8:
    // 0x80232BF8: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80232BFC: addiu       $t6, $zero, 0x3F
    ctx->r14 = ADD32(0, 0X3F);
    // 0x80232C00: mfc1        $t5, $f4
    ctx->r13 = (int32_t)ctx->f4.u32l;
    // 0x80232C04: nop

    // 0x80232C08: subu        $t7, $t6, $t5
    ctx->r15 = SUB32(ctx->r14, ctx->r13);
    // 0x80232C0C: sh          $t7, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r15;
    // 0x80232C10: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80232C14: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80232C18: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80232C1C: mul.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80232C20: add.s       $f2, $f8, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x80232C24: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
    // 0x80232C28: nop

    // 0x80232C2C: bc1fl       L_80232C7C
    if (!c1cs) {
        // 0x80232C30: c.le.s      $f2, $f16
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl <= ctx->f16.fl;
            goto L_80232C7C;
    }
    goto skip_16;
    // 0x80232C30: c.le.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl <= ctx->f16.fl;
    skip_16:
    // 0x80232C34: sub.s       $f6, $f14, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f14.fl - ctx->f12.fl;
    // 0x80232C38: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80232C3C: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80232C40: mul.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80232C44: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80232C48: mul.s       $f16, $f8, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x80232C4C: c.le.s      $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f6.fl <= ctx->f16.fl;
    // 0x80232C50: nop

    // 0x80232C54: bc1fl       L_80232C68
    if (!c1cs) {
        // 0x80232C58: sub.s       $f0, $f16, $f18
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f16.fl - ctx->f18.fl;
            goto L_80232C68;
    }
    goto skip_17;
    // 0x80232C58: sub.s       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f16.fl - ctx->f18.fl;
    skip_17:
    // 0x80232C5C: b           L_80232C68
    // 0x80232C60: add.s       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f16.fl + ctx->f18.fl;
        goto L_80232C68;
    // 0x80232C60: add.s       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80232C64: sub.s       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f16.fl - ctx->f18.fl;
L_80232C68:
    // 0x80232C68: trunc.w.s   $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80232C6C: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x80232C70: b           L_80232E88
    // 0x80232C74: sh          $t9, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r25;
        goto L_80232E88;
    // 0x80232C74: sh          $t9, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r25;
    // 0x80232C78: c.le.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl <= ctx->f16.fl;
L_80232C7C:
    // 0x80232C7C: nop

    // 0x80232C80: bc1fl       L_80232CD0
    if (!c1cs) {
        // 0x80232C84: c.lt.s      $f16, $f2
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl < ctx->f2.fl;
            goto L_80232CD0;
    }
    goto skip_18;
    // 0x80232C84: c.lt.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl < ctx->f2.fl;
    skip_18:
    // 0x80232C88: sub.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x80232C8C: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80232C90: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80232C94: mul.s       $f12, $f8, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x80232C98: c.le.s      $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f6.fl <= ctx->f12.fl;
    // 0x80232C9C: nop

    // 0x80232CA0: bc1fl       L_80232CB4
    if (!c1cs) {
        // 0x80232CA4: sub.s       $f0, $f12, $f18
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f18.fl;
            goto L_80232CB4;
    }
    goto skip_19;
    // 0x80232CA4: sub.s       $f0, $f12, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f18.fl;
    skip_19:
    // 0x80232CA8: b           L_80232CB4
    // 0x80232CAC: add.s       $f0, $f12, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f12.fl + ctx->f18.fl;
        goto L_80232CB4;
    // 0x80232CAC: add.s       $f0, $f12, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f12.fl + ctx->f18.fl;
    // 0x80232CB0: sub.s       $f0, $f12, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f18.fl;
L_80232CB4:
    // 0x80232CB4: trunc.w.s   $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80232CB8: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x80232CBC: nop

    // 0x80232CC0: addiu       $t1, $t3, 0x10
    ctx->r9 = ADD32(ctx->r11, 0X10);
    // 0x80232CC4: b           L_80232E88
    // 0x80232CC8: sh          $t1, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r9;
        goto L_80232E88;
    // 0x80232CC8: sh          $t1, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r9;
    // 0x80232CCC: c.lt.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl < ctx->f2.fl;
L_80232CD0:
    // 0x80232CD0: nop

    // 0x80232CD4: bc1f        L_80232E88
    if (!c1cs) {
        // 0x80232CD8: nop
    
            goto L_80232E88;
    }
    // 0x80232CD8: nop

    // 0x80232CDC: sub.s       $f8, $f16, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f16.fl - ctx->f12.fl;
    // 0x80232CE0: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80232CE4: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80232CE8: mul.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x80232CEC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80232CF0: mul.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80232CF4: c.le.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl <= ctx->f8.fl;
    // 0x80232CF8: swc1        $f8, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f8.u32l;
    // 0x80232CFC: lwc1        $f6, 0x0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X0);
    // 0x80232D00: bc1fl       L_80232D14
    if (!c1cs) {
        // 0x80232D04: sub.s       $f0, $f6, $f18
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f18.fl;
            goto L_80232D14;
    }
    goto skip_20;
    // 0x80232D04: sub.s       $f0, $f6, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f18.fl;
    skip_20:
    // 0x80232D08: b           L_80232D14
    // 0x80232D0C: add.s       $f0, $f8, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f18.fl;
        goto L_80232D14;
    // 0x80232D0C: add.s       $f0, $f8, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x80232D10: sub.s       $f0, $f6, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f18.fl;
L_80232D14:
    // 0x80232D14: trunc.w.s   $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80232D18: addiu       $t6, $zero, 0x2F
    ctx->r14 = ADD32(0, 0X2F);
    // 0x80232D1C: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x80232D20: nop

    // 0x80232D24: subu        $t5, $t6, $t4
    ctx->r13 = SUB32(ctx->r14, ctx->r12);
    // 0x80232D28: b           L_80232E88
    // 0x80232D2C: sh          $t5, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r13;
        goto L_80232E88;
    // 0x80232D2C: sh          $t5, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r13;
    // 0x80232D30: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
L_80232D34:
    // 0x80232D34: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80232D38: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80232D3C: c.le.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl <= ctx->f12.fl;
    // 0x80232D40: nop

    // 0x80232D44: bc1f        L_80232E88
    if (!c1cs) {
        // 0x80232D48: nop
    
            goto L_80232E88;
    }
    // 0x80232D48: nop

    // 0x80232D4C: mul.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x80232D50: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80232D54: lbu         $t7, 0x43($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X43);
    // 0x80232D58: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x80232D5C: add.s       $f2, $f6, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x80232D60: c.le.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl <= ctx->f2.fl;
    // 0x80232D64: nop

    // 0x80232D68: bc1fl       L_80232D88
    if (!c1cs) {
        // 0x80232D6C: sub.s       $f4, $f16, $f12
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f12.fl;
            goto L_80232D88;
    }
    goto skip_21;
    // 0x80232D6C: sub.s       $f4, $f16, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f12.fl;
    skip_21:
    // 0x80232D70: beq         $t7, $zero, L_80232D7C
    if (ctx->r15 == 0) {
        // 0x80232D74: nop
    
            goto L_80232D7C;
    }
    // 0x80232D74: nop

    // 0x80232D78: sh          $zero, 0x0($a2)
    MEM_H(0X0, ctx->r6) = 0;
L_80232D7C:
    // 0x80232D7C: b           L_80232E88
    // 0x80232D80: sh          $t8, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r24;
        goto L_80232E88;
    // 0x80232D80: sh          $t8, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r24;
    // 0x80232D84: sub.s       $f4, $f16, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f12.fl;
L_80232D88:
    // 0x80232D88: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80232D8C: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80232D90: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80232D94: mul.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x80232D98: nop

    // 0x80232D9C: mul.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80232DA0: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x80232DA4: swc1        $f4, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f4.u32l;
    // 0x80232DA8: lwc1        $f8, 0x0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X0);
    // 0x80232DAC: bc1f        L_80232DC4
    if (!c1cs) {
        // 0x80232DB0: nop
    
            goto L_80232DC4;
    }
    // 0x80232DB0: nop

    // 0x80232DB4: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80232DB8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80232DBC: b           L_80232DD0
    // 0x80232DC0: add.s       $f0, $f4, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f18.fl;
        goto L_80232DD0;
    // 0x80232DC0: add.s       $f0, $f4, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f18.fl;
L_80232DC4:
    // 0x80232DC4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80232DC8: nop

    // 0x80232DCC: sub.s       $f0, $f8, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f8.fl - ctx->f18.fl;
L_80232DD0:
    // 0x80232DD0: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80232DD4: addiu       $t3, $zero, 0x2F
    ctx->r11 = ADD32(0, 0X2F);
    // 0x80232DD8: c.le.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl <= ctx->f2.fl;
    // 0x80232DDC: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
    // 0x80232DE0: nop

    // 0x80232DE4: subu        $t1, $t3, $t0
    ctx->r9 = SUB32(ctx->r11, ctx->r8);
    // 0x80232DE8: bc1f        L_80232E34
    if (!c1cs) {
        // 0x80232DEC: sh          $t1, 0x0($a0)
        MEM_H(0X0, ctx->r4) = ctx->r9;
            goto L_80232E34;
    }
    // 0x80232DEC: sh          $t1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r9;
    // 0x80232DF0: sub.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x80232DF4: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80232DF8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80232DFC: mul.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x80232E00: c.le.s      $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f8.fl <= ctx->f12.fl;
    // 0x80232E04: nop

    // 0x80232E08: bc1fl       L_80232E1C
    if (!c1cs) {
        // 0x80232E0C: sub.s       $f0, $f12, $f18
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f18.fl;
            goto L_80232E1C;
    }
    goto skip_22;
    // 0x80232E0C: sub.s       $f0, $f12, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f18.fl;
    skip_22:
    // 0x80232E10: b           L_80232E1C
    // 0x80232E14: add.s       $f0, $f12, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f12.fl + ctx->f18.fl;
        goto L_80232E1C;
    // 0x80232E14: add.s       $f0, $f12, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f12.fl + ctx->f18.fl;
    // 0x80232E18: sub.s       $f0, $f12, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f18.fl;
L_80232E1C:
    // 0x80232E1C: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80232E20: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x80232E24: nop

    // 0x80232E28: addiu       $t4, $t6, 0x10
    ctx->r12 = ADD32(ctx->r14, 0X10);
    // 0x80232E2C: b           L_80232E88
    // 0x80232E30: sh          $t4, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r12;
        goto L_80232E88;
    // 0x80232E30: sh          $t4, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r12;
L_80232E34:
    // 0x80232E34: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
    // 0x80232E38: nop

    // 0x80232E3C: bc1f        L_80232E88
    if (!c1cs) {
        // 0x80232E40: nop
    
            goto L_80232E88;
    }
    // 0x80232E40: nop

    // 0x80232E44: sub.s       $f10, $f14, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f14.fl - ctx->f12.fl;
    // 0x80232E48: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80232E4C: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80232E50: mul.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x80232E54: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80232E58: mul.s       $f16, $f8, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x80232E5C: c.le.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl <= ctx->f16.fl;
    // 0x80232E60: nop

    // 0x80232E64: bc1fl       L_80232E78
    if (!c1cs) {
        // 0x80232E68: sub.s       $f0, $f16, $f18
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f16.fl - ctx->f18.fl;
            goto L_80232E78;
    }
    goto skip_23;
    // 0x80232E68: sub.s       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f16.fl - ctx->f18.fl;
    skip_23:
    // 0x80232E6C: b           L_80232E78
    // 0x80232E70: add.s       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f16.fl + ctx->f18.fl;
        goto L_80232E78;
    // 0x80232E70: add.s       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80232E74: sub.s       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f16.fl - ctx->f18.fl;
L_80232E78:
    // 0x80232E78: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80232E7C: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    // 0x80232E80: nop

    // 0x80232E84: sh          $t7, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r15;
L_80232E88:
    // 0x80232E88: jr          $ra
    // 0x80232E8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80232E8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void D_802D37DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D385C: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x802D3860: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x802D3864: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802D3868: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x802D386C: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    // 0x802D3870: sdc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X38, ctx->r29);
    // 0x802D3874: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x802D3878: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x802D387C: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x802D3880: jal         0x80315E5C
    // 0x802D3884: sw          $a0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r4;
    static_3_80315E5C(rdram, ctx);
        goto after_0;
    // 0x802D3884: sw          $a0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r4;
    after_0:
    // 0x802D3888: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x802D388C: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x802D3890: lui         $a1, 0x42FA
    ctx->r5 = S32(0X42FA << 16);
    // 0x802D3894: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x802D3898: jal         0x80318E04
    // 0x802D389C: lui         $a3, 0x4416
    ctx->r7 = S32(0X4416 << 16);
    static_3_80318E04(rdram, ctx);
        goto after_1;
    // 0x802D389C: lui         $a3, 0x4416
    ctx->r7 = S32(0X4416 << 16);
    after_1:
    // 0x802D38A0: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802D38A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802D38A8: jal         0x802AA498
    // 0x802D38AC: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
    static_3_802AA498(rdram, ctx);
        goto after_2;
    // 0x802D38AC: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
    after_2:
    // 0x802D38B0: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x802D38B4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802D38B8: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x802D38BC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802D38C0: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x802D38C4: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x802D38C8: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x802D38CC: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x802D38D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D38D4: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x802D38D8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x802D38DC: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x802D38E0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802D38E4: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x802D38E8: swc1        $f20, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f20.u32l;
    // 0x802D38EC: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x802D38F0: jal         0x80308530
    // 0x802D38F4: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    static_3_80308530(rdram, ctx);
        goto after_3;
    // 0x802D38F4: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x802D38F8: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    // 0x802D38FC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802D3900: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x802D3904: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802D3908: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x802D390C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802D3910: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x802D3914: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x802D3918: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x802D391C: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x802D3920: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D3924: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x802D3928: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x802D392C: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x802D3930: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802D3934: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x802D3938: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x802D393C: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x802D3940: jal         0x80308530
    // 0x802D3944: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
    static_3_80308530(rdram, ctx);
        goto after_4;
    // 0x802D3944: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
    after_4:
    // 0x802D3948: lui         $at, 0xC4FA
    ctx->r1 = S32(0XC4FA << 16);
    // 0x802D394C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802D3950: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x802D3954: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802D3958: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x802D395C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802D3960: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x802D3964: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x802D3968: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x802D396C: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x802D3970: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D3974: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x802D3978: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x802D397C: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x802D3980: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802D3984: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x802D3988: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
    // 0x802D398C: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x802D3990: jal         0x80308530
    // 0x802D3994: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    static_3_80308530(rdram, ctx);
        goto after_5;
    // 0x802D3994: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    after_5:
    // 0x802D3998: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x802D399C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802D39A0: lw          $v1, 0x1A0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X1A0);
    // 0x802D39A4: lw          $t9, 0xB4($v1)
    ctx->r25 = MEM_W(ctx->r3, 0XB4);
    // 0x802D39A8: lh          $t2, 0xB0($v1)
    ctx->r10 = MEM_H(ctx->r3, 0XB0);
    // 0x802D39AC: jalr        $t9
    // 0x802D39B0: addu        $a0, $t2, $a2
    ctx->r4 = ADD32(ctx->r10, ctx->r6);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x802D39B0: addu        $a0, $t2, $a2
    ctx->r4 = ADD32(ctx->r10, ctx->r6);
    after_6:
    // 0x802D39B4: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x802D39B8: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x802D39BC: lui         $a1, 0xC4FA
    ctx->r5 = S32(0XC4FA << 16);
    // 0x802D39C0: jal         0x80318E04
    // 0x802D39C4: lui         $a3, 0x4416
    ctx->r7 = S32(0X4416 << 16);
    static_3_80318E04(rdram, ctx);
        goto after_7;
    // 0x802D39C4: lui         $a3, 0x4416
    ctx->r7 = S32(0X4416 << 16);
    after_7:
    // 0x802D39C8: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x802D39CC: jal         0x80318C9C
    // 0x802D39D0: lui         $a1, 0x4387
    ctx->r5 = S32(0X4387 << 16);
    static_3_80318C9C(rdram, ctx);
        goto after_8;
    // 0x802D39D0: lui         $a1, 0x4387
    ctx->r5 = S32(0X4387 << 16);
    after_8:
    // 0x802D39D4: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x802D39D8: jal         0x802AEDEC
    // 0x802D39DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802AEDEC(rdram, ctx);
        goto after_9;
    // 0x802D39DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_9:
    // 0x802D39E0: lw          $t3, 0x78($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X78);
    // 0x802D39E4: addiu       $at, $zero, -0x2001
    ctx->r1 = ADD32(0, -0X2001);
    // 0x802D39E8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802D39EC: and         $t4, $t3, $at
    ctx->r12 = ctx->r11 & ctx->r1;
    // 0x802D39F0: jal         0x802BCF20
    // 0x802D39F4: sw          $t4, 0x78($v0)
    MEM_W(0X78, ctx->r2) = ctx->r12;
    static_3_802BCF20(rdram, ctx);
        goto after_10;
    // 0x802D39F4: sw          $t4, 0x78($v0)
    MEM_W(0X78, ctx->r2) = ctx->r12;
    after_10:
    // 0x802D39F8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x802D39FC: ldc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X38);
    // 0x802D3A00: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x802D3A04: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x802D3A08: jr          $ra
    // 0x802D3A0C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x802D3A0C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void D_802B1990(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B1A10: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802B1A14: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802B1A18: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802B1A1C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802B1A20: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x802B1A24: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x802B1A28: jal         0x802D2660
    // 0x802B1A2C: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    static_3_802D2660(rdram, ctx);
        goto after_0;
    // 0x802B1A2C: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    after_0:
    // 0x802B1A30: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802B1A34: swc1        $f0, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->f0.u32l;
    // 0x802B1A38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802B1A3C: lw          $a1, 0xD8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XD8);
    // 0x802B1A40: jal         0x80317580
    // 0x802B1A44: swc1        $f4, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->f4.u32l;
    static_3_80317580(rdram, ctx);
        goto after_1;
    // 0x802B1A44: swc1        $f4, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->f4.u32l;
    after_1:
    // 0x802B1A48: lw          $a1, 0xD8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XD8);
    // 0x802B1A4C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x802B1A50: jal         0x80318510
    // 0x802B1A54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80318510(rdram, ctx);
        goto after_2;
    // 0x802B1A54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x802B1A58: lwc1        $f2, 0x24($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802B1A5C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802B1A60: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B1A64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802B1A68: c.lt.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl < ctx->f2.fl;
    // 0x802B1A6C: nop

    // 0x802B1A70: bc1fl       L_802B1A84
    if (!c1cs) {
        // 0x802B1A74: neg.s       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
            goto L_802B1A84;
    }
    goto skip_0;
    // 0x802B1A74: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    skip_0:
    // 0x802B1A78: b           L_802B1A84
    // 0x802B1A7C: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
        goto L_802B1A84;
    // 0x802B1A7C: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x802B1A80: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
L_802B1A84:
    // 0x802B1A84: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B1A88: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x802B1A8C: nop

    // 0x802B1A90: bc1tl       L_802B1AB8
    if (c1cs) {
        // 0x802B1A94: addiu       $t6, $zero, 0x6
        ctx->r14 = ADD32(0, 0X6);
            goto L_802B1AB8;
    }
    goto skip_1;
    // 0x802B1A94: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    skip_1:
    // 0x802B1A98: jal         0x80318510
    // 0x802B1A9C: lw          $a1, 0xD8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XD8);
    static_3_80318510(rdram, ctx);
        goto after_3;
    // 0x802B1A9C: lw          $a1, 0xD8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XD8);
    after_3:
    // 0x802B1AA0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B1AA4: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B1AA8: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x802B1AAC: nop

    // 0x802B1AB0: bc1f        L_802B1AC0
    if (!c1cs) {
        // 0x802B1AB4: addiu       $t6, $zero, 0x6
        ctx->r14 = ADD32(0, 0X6);
            goto L_802B1AC0;
    }
    // 0x802B1AB4: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
L_802B1AB8:
    // 0x802B1AB8: sw          $t6, 0x29C($s0)
    MEM_W(0X29C, ctx->r16) = ctx->r14;
    // 0x802B1ABC: sb          $zero, 0x934($s0)
    MEM_B(0X934, ctx->r16) = 0;
L_802B1AC0:
    // 0x802B1AC0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802B1AC4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802B1AC8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802B1ACC: jr          $ra
    // 0x802B1AD0: nop

    return;
    // 0x802B1AD0: nop

;}
RECOMP_FUNC void D_8029E724(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029E7A4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8029E7A8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8029E7AC: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8029E7B0: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8029E7B4: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x8029E7B8: jal         0x8021F4E4
    // 0x8029E7BC: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    static_3_8021F4E4(rdram, ctx);
        goto after_0;
    // 0x8029E7BC: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    after_0:
    // 0x8029E7C0: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x8029E7C4: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x8029E7C8: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x8029E7CC: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x8029E7D0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8029E7D4: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x8029E7D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8029E7DC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8029E7E0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8029E7E4: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x8029E7E8: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x8029E7EC: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x8029E7F0: jal         0x8021F35C
    // 0x8029E7F4: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    static_3_8021F35C(rdram, ctx);
        goto after_1;
    // 0x8029E7F4: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    after_1:
    // 0x8029E7F8: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x8029E7FC: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x8029E800: lw          $t2, 0x48($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X48);
    // 0x8029E804: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x8029E808: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8029E80C: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x8029E810: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8029E814: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8029E818: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8029E81C: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x8029E820: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x8029E824: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x8029E828: jal         0x8021F35C
    // 0x8029E82C: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    static_3_8021F35C(rdram, ctx);
        goto after_2;
    // 0x8029E82C: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    after_2:
    // 0x8029E830: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x8029E834: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x8029E838: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x8029E83C: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x8029E840: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8029E844: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x8029E848: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8029E84C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8029E850: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8029E854: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x8029E858: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x8029E85C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x8029E860: jal         0x8021F35C
    // 0x8029E864: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    static_3_8021F35C(rdram, ctx);
        goto after_3;
    // 0x8029E864: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    after_3:
    // 0x8029E868: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x8029E86C: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x8029E870: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x8029E874: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x8029E878: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8029E87C: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x8029E880: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8029E884: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8029E888: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8029E88C: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x8029E890: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x8029E894: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x8029E898: jal         0x8021F35C
    // 0x8029E89C: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    static_3_8021F35C(rdram, ctx);
        goto after_4;
    // 0x8029E89C: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    after_4:
    // 0x8029E8A0: jal         0x8021FCD0
    // 0x8029E8A4: nop

    static_3_8021FCD0(rdram, ctx);
        goto after_5;
    // 0x8029E8A4: nop

    after_5:
    // 0x8029E8A8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8029E8AC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8029E8B0: jr          $ra
    // 0x8029E8B4: nop

    return;
    // 0x8029E8B4: nop

;}
RECOMP_FUNC void D_802E8674(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E86F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802E86F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802E86FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802E8700: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802E8704: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x802E8708: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x802E870C: lw          $v1, 0xC($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC);
    // 0x802E8710: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802E8714: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E8718: bne         $v1, $zero, L_802E8740
    if (ctx->r3 != 0) {
        // 0x802E871C: addiu       $a0, $a0, 0x0
        ctx->r4 = ADD32(ctx->r4, 0X0);
            goto L_802E8740;
    }
    // 0x802E871C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802E8720: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802E8724: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802E8728: jal         0x80231A24
    // 0x802E872C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x802E872C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x802E8730: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x802E8734: addiu       $t6, $zero, 0x29A
    ctx->r14 = ADD32(0, 0X29A);
    // 0x802E8738: sw          $t6, 0x0($zero)
    MEM_W(0X0, 0) = ctx->r14;
    // 0x802E873C: lw          $v1, 0xC($a2)
    ctx->r3 = MEM_W(ctx->r6, 0XC);
L_802E8740:
    // 0x802E8740: lw          $v0, 0xD8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XD8);
    // 0x802E8744: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x802E8748: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x802E874C: lw          $t9, 0x94($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X94);
    // 0x802E8750: lh          $t7, 0x90($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X90);
    // 0x802E8754: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x802E8758: jalr        $t9
    // 0x802E875C: addu        $a0, $t7, $v1
    ctx->r4 = ADD32(ctx->r15, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x802E875C: addu        $a0, $t7, $v1
    ctx->r4 = ADD32(ctx->r15, ctx->r3);
    after_1:
    // 0x802E8760: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802E8764: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802E8768: jr          $ra
    // 0x802E876C: nop

    return;
    // 0x802E876C: nop

;}
RECOMP_FUNC void D_8027AECC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027AF44: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8027AF48: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x8027AF4C: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x8027AF50: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8027AF54: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8027AF58: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8027AF5C: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x8027AF60: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8027AF64: addiu       $a1, $t6, 0x6648
    ctx->r5 = ADD32(ctx->r14, 0X6648);
    // 0x8027AF68: addiu       $a0, $a0, 0x6600
    ctx->r4 = ADD32(ctx->r4, 0X6600);
    // 0x8027AF6C: addiu       $a3, $t6, 0x6649
    ctx->r7 = ADD32(ctx->r14, 0X6649);
    // 0x8027AF70: jal         0x802A3B70
    // 0x8027AF74: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    static_3_802A3B70(rdram, ctx);
        goto after_0;
    // 0x8027AF74: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    after_0:
    // 0x8027AF78: beq         $v0, $zero, L_8027AFBC
    if (ctx->r2 == 0) {
        // 0x8027AF7C: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_8027AFBC;
    }
    // 0x8027AF7C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8027AF80: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8027AF84: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8027AF88: jal         0x8031650C
    // 0x8027AF8C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    static_3_8031650C(rdram, ctx);
        goto after_1;
    // 0x8027AF8C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_1:
    // 0x8027AF90: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x8027AF94: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8027AF98: lw          $v0, 0x100($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X100);
    // 0x8027AF9C: sh          $t8, 0x1B4($a2)
    MEM_H(0X1B4, ctx->r6) = ctx->r24;
    // 0x8027AFA0: lh          $t9, 0x78($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X78);
    // 0x8027AFA4: addu        $a0, $t9, $a2
    ctx->r4 = ADD32(ctx->r25, ctx->r6);
    // 0x8027AFA8: lw          $t9, 0x7C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X7C);
    // 0x8027AFAC: addiu       $a0, $a0, 0x50
    ctx->r4 = ADD32(ctx->r4, 0X50);
    // 0x8027AFB0: jalr        $t9
    // 0x8027AFB4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x8027AFB4: nop

    after_2:
    // 0x8027AFB8: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
L_8027AFBC:
    // 0x8027AFBC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8027AFC0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8027AFC4: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x8027AFC8: jr          $ra
    // 0x8027AFCC: nop

    return;
    // 0x8027AFCC: nop

;}
RECOMP_FUNC void D_8023FE18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023FE18: jr          $ra
    // 0x8023FE1C: nop

    return;
    // 0x8023FE1C: nop

;}
RECOMP_FUNC void D_802456C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802456C0: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x802456C4: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x802456C8: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x802456CC: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x802456D0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x802456D4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802456D8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802456DC: andi        $s0, $a2, 0xFFFF
    ctx->r16 = ctx->r6 & 0XFFFF;
    // 0x802456E0: or          $s1, $a3, $zero
    ctx->r17 = ctx->r7 | 0;
    // 0x802456E4: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x802456E8: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    // 0x802456EC: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x802456F0: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x802456F4: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x802456F8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x802456FC: sw          $a2, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r6;
    // 0x80245700: jal         0x80245AD0
    // 0x80245704: addiu       $s5, $zero, 0x2
    ctx->r21 = ADD32(0, 0X2);
    static_3_80245AD0(rdram, ctx);
        goto after_0;
    // 0x80245704: addiu       $s5, $zero, 0x2
    ctx->r21 = ADD32(0, 0X2);
    after_0:
    // 0x80245708: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x8024570C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80245710: sb          $t6, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r14;
    // 0x80245714: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80245718: jal         0x80245924
    // 0x8024571C: andi        $a1, $s0, 0xFFFF
    ctx->r5 = ctx->r16 & 0XFFFF;
    static_3_80245924(rdram, ctx);
        goto after_1;
    // 0x8024571C: andi        $a1, $s0, 0xFFFF
    ctx->r5 = ctx->r16 & 0XFFFF;
    after_1:
    // 0x80245720: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80245724: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80245728: jal         0x802465B0
    // 0x8024572C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    static_3_802465B0(rdram, ctx);
        goto after_2;
    // 0x8024572C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x80245730: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x80245734: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80245738: jal         0x802374B0
    // 0x8024573C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_802374B0(rdram, ctx);
        goto after_3;
    // 0x8024573C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x80245740: addiu       $fp, $zero, 0x4
    ctx->r30 = ADD32(0, 0X4);
    // 0x80245744: addiu       $s7, $sp, 0x54
    ctx->r23 = ADD32(ctx->r29, 0X54);
    // 0x80245748: addiu       $s3, $sp, 0x74
    ctx->r19 = ADD32(ctx->r29, 0X74);
L_8024574C:
    // 0x8024574C: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80245750: addiu       $s0, $t7, 0x0
    ctx->r16 = ADD32(ctx->r15, 0X0);
    // 0x80245754: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80245758: jal         0x802465B0
    // 0x8024575C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_802465B0(rdram, ctx);
        goto after_4;
    // 0x8024575C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_4:
    // 0x80245760: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x80245764: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80245768: jal         0x802374B0
    // 0x8024576C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_802374B0(rdram, ctx);
        goto after_5;
    // 0x8024576C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x80245770: beq         $s2, $zero, L_802457A8
    if (ctx->r18 == 0) {
        // 0x80245774: or          $t1, $s7, $zero
        ctx->r9 = ctx->r23 | 0;
            goto L_802457A8;
    }
    // 0x80245774: or          $t1, $s7, $zero
    ctx->r9 = ctx->r23 | 0;
    // 0x80245778: blez        $s2, L_802457A8
    if (SIGNED(ctx->r18) <= 0) {
        // 0x8024577C: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_802457A8;
    }
    // 0x8024577C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80245780: andi        $a0, $s2, 0x3
    ctx->r4 = ctx->r18 & 0X3;
    // 0x80245784: beq         $a0, $zero, L_8024579C
    if (ctx->r4 == 0) {
        // 0x80245788: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_8024579C;
    }
    // 0x80245788: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_8024578C:
    // 0x8024578C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80245790: bne         $v0, $v1, L_8024578C
    if (ctx->r2 != ctx->r3) {
        // 0x80245794: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_8024578C;
    }
    // 0x80245794: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80245798: beq         $v1, $s2, L_802457A8
    if (ctx->r3 == ctx->r18) {
        // 0x8024579C: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_802457A8;
    }
L_8024579C:
    // 0x8024579C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x802457A0: bne         $v1, $s2, L_8024579C
    if (ctx->r3 != ctx->r18) {
        // 0x802457A4: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_8024579C;
    }
    // 0x802457A4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_802457A8:
    // 0x802457A8: or          $t0, $s0, $zero
    ctx->r8 = ctx->r16 | 0;
    // 0x802457AC: addiu       $t9, $s0, 0x24
    ctx->r25 = ADD32(ctx->r16, 0X24);
L_802457B0:
    // 0x802457B0: lwl         $at, 0x0($t0)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r8, 0X0);
    // 0x802457B4: lwr         $at, 0x3($t0)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r8, 0X3);
    // 0x802457B8: addiu       $t0, $t0, 0xC
    ctx->r8 = ADD32(ctx->r8, 0XC);
    // 0x802457BC: sw          $at, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r1;
    // 0x802457C0: lwl         $at, -0x8($t0)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r8, -0X8);
    // 0x802457C4: lwr         $at, -0x5($t0)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r8, -0X5);
    // 0x802457C8: addiu       $t1, $t1, 0xC
    ctx->r9 = ADD32(ctx->r9, 0XC);
    // 0x802457CC: sw          $at, -0x8($t1)
    MEM_W(-0X8, ctx->r9) = ctx->r1;
    // 0x802457D0: lwl         $at, -0x4($t0)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r8, -0X4);
    // 0x802457D4: lwr         $at, -0x1($t0)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r8, -0X1);
    // 0x802457D8: bne         $t0, $t9, L_802457B0
    if (ctx->r8 != ctx->r25) {
        // 0x802457DC: sw          $at, -0x4($t1)
        MEM_W(-0X4, ctx->r9) = ctx->r1;
            goto L_802457B0;
    }
    // 0x802457DC: sw          $at, -0x4($t1)
    MEM_W(-0X4, ctx->r9) = ctx->r1;
    // 0x802457E0: lwl         $at, 0x0($t0)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r8, 0X0);
    // 0x802457E4: lwr         $at, 0x3($t0)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r8, 0X3);
    // 0x802457E8: nop

    // 0x802457EC: sw          $at, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r1;
    // 0x802457F0: lbu         $v0, 0x56($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X56);
    // 0x802457F4: nop

    // 0x802457F8: andi        $t2, $v0, 0xC0
    ctx->r10 = ctx->r2 & 0XC0;
    // 0x802457FC: sra         $s4, $t2, 4
    ctx->r20 = S32(SIGNED(ctx->r10) >> 4);
    // 0x80245800: bne         $s4, $zero, L_80245884
    if (ctx->r20 != 0) {
        // 0x80245804: nop
    
            goto L_80245884;
    }
    // 0x80245804: nop

    // 0x80245808: jal         0x8024A640
    // 0x8024580C: addiu       $a0, $sp, 0x5A
    ctx->r4 = ADD32(ctx->r29, 0X5A);
    static_3_8024A640(rdram, ctx);
        goto after_6;
    // 0x8024580C: addiu       $a0, $sp, 0x5A
    ctx->r4 = ADD32(ctx->r29, 0X5A);
    after_6:
    // 0x80245810: lbu         $t4, 0x7A($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X7A);
    // 0x80245814: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x80245818: beq         $t4, $v0, L_8024584C
    if (ctx->r12 == ctx->r2) {
        // 0x8024581C: addiu       $v0, $sp, 0x54
        ctx->r2 = ADD32(ctx->r29, 0X54);
            goto L_8024584C;
    }
    // 0x8024581C: addiu       $v0, $sp, 0x54
    ctx->r2 = ADD32(ctx->r29, 0X54);
    // 0x80245820: jal         0x80238E34
    // 0x80245824: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    static_3_80238E34(rdram, ctx);
        goto after_7;
    // 0x80245824: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_7:
    // 0x80245828: beq         $v0, $zero, L_80245840
    if (ctx->r2 == 0) {
        // 0x8024582C: or          $s4, $v0, $zero
        ctx->r20 = ctx->r2 | 0;
            goto L_80245840;
    }
    // 0x8024582C: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x80245830: jal         0x80245B14
    // 0x80245834: nop

    static_3_80245B14(rdram, ctx);
        goto after_8;
    // 0x80245834: nop

    after_8:
    // 0x80245838: b           L_802458A4
    // 0x8024583C: or          $v0, $s4, $zero
    ctx->r2 = ctx->r20 | 0;
        goto L_802458A4;
    // 0x8024583C: or          $v0, $s4, $zero
    ctx->r2 = ctx->r20 | 0;
L_80245840:
    // 0x80245840: b           L_80245888
    // 0x80245844: or          $s4, $fp, $zero
    ctx->r20 = ctx->r30 | 0;
        goto L_80245888;
    // 0x80245844: or          $s4, $fp, $zero
    ctx->r20 = ctx->r30 | 0;
    // 0x80245848: addiu       $v0, $sp, 0x54
    ctx->r2 = ADD32(ctx->r29, 0X54);
L_8024584C:
    // 0x8024584C: lbu         $t5, 0x6($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X6);
    // 0x80245850: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80245854: sb          $t5, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r13;
    // 0x80245858: lbu         $t6, 0x3($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X3);
    // 0x8024585C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80245860: sb          $t6, -0x3($s1)
    MEM_B(-0X3, ctx->r17) = ctx->r14;
    // 0x80245864: lbu         $t7, 0x4($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X4);
    // 0x80245868: nop

    // 0x8024586C: sb          $t7, -0x2($s1)
    MEM_B(-0X2, ctx->r17) = ctx->r15;
    // 0x80245870: lbu         $t8, 0x5($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X5);
    // 0x80245874: bne         $v0, $s3, L_8024584C
    if (ctx->r2 != ctx->r19) {
        // 0x80245878: sb          $t8, -0x1($s1)
        MEM_B(-0X1, ctx->r17) = ctx->r24;
            goto L_8024584C;
    }
    // 0x80245878: sb          $t8, -0x1($s1)
    MEM_B(-0X1, ctx->r17) = ctx->r24;
    // 0x8024587C: b           L_80245888
    // 0x80245880: nop

        goto L_80245888;
    // 0x80245880: nop

L_80245884:
    // 0x80245884: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
L_80245888:
    // 0x80245888: bne         $s4, $fp, L_80245898
    if (ctx->r20 != ctx->r30) {
        // 0x8024588C: slti        $v0, $s5, 0x0
        ctx->r2 = SIGNED(ctx->r21) < 0X0 ? 1 : 0;
            goto L_80245898;
    }
    // 0x8024588C: slti        $v0, $s5, 0x0
    ctx->r2 = SIGNED(ctx->r21) < 0X0 ? 1 : 0;
    // 0x80245890: beq         $v0, $zero, L_8024574C
    if (ctx->r2 == 0) {
        // 0x80245894: addiu       $s5, $s5, -0x1
        ctx->r21 = ADD32(ctx->r21, -0X1);
            goto L_8024574C;
    }
    // 0x80245894: addiu       $s5, $s5, -0x1
    ctx->r21 = ADD32(ctx->r21, -0X1);
L_80245898:
    // 0x80245898: jal         0x80245B14
    // 0x8024589C: nop

    static_3_80245B14(rdram, ctx);
        goto after_9;
    // 0x8024589C: nop

    after_9:
    // 0x802458A0: or          $v0, $s4, $zero
    ctx->r2 = ctx->r20 | 0;
L_802458A4:
    // 0x802458A4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x802458A8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802458AC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802458B0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x802458B4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x802458B8: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x802458BC: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x802458C0: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x802458C4: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x802458C8: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x802458CC: jr          $ra
    // 0x802458D0: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    return;
    // 0x802458D0: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void D_802CCD20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802CCDA0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802CCDA4: jr          $ra
    // 0x802CCDA8: sh          $a1, 0x84($a0)
    MEM_H(0X84, ctx->r4) = ctx->r5;
    return;
    // 0x802CCDA8: sh          $a1, 0x84($a0)
    MEM_H(0X84, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void D_80227AE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80227AE8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80227AEC: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80227AF0: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x80227AF4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80227AF8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80227AFC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80227B00: jal         0x80223840
    // 0x80227B04: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    func_80223840(rdram, ctx);
        goto after_0;
    // 0x80227B04: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    after_0:
    // 0x80227B08: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x80227B0C: lui         $a3, 0x434F
    ctx->r7 = S32(0X434F << 16);
    // 0x80227B10: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80227B14: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80227B18: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x80227B1C: ori         $a3, $a3, 0x4D4D
    ctx->r7 = ctx->r7 | 0X4D4D;
    // 0x80227B20: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80227B24: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x80227B28: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x80227B2C: jal         0x80223B30
    // 0x80227B30: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    static_3_80223B30(rdram, ctx);
        goto after_1;
    // 0x80227B30: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_1:
    // 0x80227B34: beq         $v0, $zero, L_80227B48
    if (ctx->r2 == 0) {
        // 0x80227B38: nop
    
            goto L_80227B48;
    }
    // 0x80227B38: nop

    // 0x80227B3C: jal         0x80226D14
    // 0x80227B40: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    static_3_80226D14(rdram, ctx);
        goto after_2;
    // 0x80227B40: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_2:
    // 0x80227B44: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
L_80227B48:
    // 0x80227B48: jal         0x802238F0
    // 0x80227B4C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    static_3_802238F0(rdram, ctx);
        goto after_3;
    // 0x80227B4C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_3:
    // 0x80227B50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80227B54: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x80227B58: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80227B5C: jr          $ra
    // 0x80227B60: nop

    return;
    // 0x80227B60: nop

;}
RECOMP_FUNC void D_8024529C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024529C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x802452A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802452A4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802452A8: lbu         $t6, 0x65($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X65);
    // 0x802452AC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802452B0: beq         $t6, $zero, L_802452D0
    if (ctx->r14 == 0) {
        // 0x802452B4: nop
    
            goto L_802452D0;
    }
    // 0x802452B4: nop

    // 0x802452B8: jal         0x802456A0
    // 0x802452BC: sb          $zero, 0x65($a0)
    MEM_B(0X65, ctx->r4) = 0;
    static_3_802456A0(rdram, ctx);
        goto after_0;
    // 0x802452BC: sb          $zero, 0x65($a0)
    MEM_B(0X65, ctx->r4) = 0;
    after_0:
    // 0x802452C0: beq         $v0, $zero, L_802452D0
    if (ctx->r2 == 0) {
        // 0x802452C4: nop
    
            goto L_802452D0;
    }
    // 0x802452C4: nop

    // 0x802452C8: b           L_802453A8
    // 0x802452CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802453A8;
    // 0x802452CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802452D0:
    // 0x802452D0: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802452D4: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x802452D8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x802452DC: jal         0x80245710
    // 0x802452E0: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    static_3_80245710(rdram, ctx);
        goto after_1;
    // 0x802452E0: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    after_1:
    // 0x802452E4: beq         $v0, $zero, L_8024531C
    if (ctx->r2 == 0) {
        // 0x802452E8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8024531C;
    }
    // 0x802452E8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802452EC: beq         $v0, $at, L_802452FC
    if (ctx->r2 == ctx->r1) {
        // 0x802452F0: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_802452FC;
    }
    // 0x802452F0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x802452F4: b           L_802453A8
    // 0x802452F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802453A8;
    // 0x802452F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802452FC:
    // 0x802452FC: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x80245300: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x80245304: jal         0x80245710
    // 0x80245308: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    static_3_80245710(rdram, ctx);
        goto after_2;
    // 0x80245308: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    after_2:
    // 0x8024530C: beq         $v0, $zero, L_80245320
    if (ctx->r2 == 0) {
        // 0x80245310: or          $v1, $s0, $zero
        ctx->r3 = ctx->r16 | 0;
            goto L_80245320;
    }
    // 0x80245310: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x80245314: b           L_802453A8
    // 0x80245318: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802453A8;
    // 0x80245318: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8024531C:
    // 0x8024531C: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
L_80245320:
    // 0x80245320: addiu       $v0, $sp, 0x2C
    ctx->r2 = ADD32(ctx->r29, 0X2C);
    // 0x80245324: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
L_80245328:
    // 0x80245328: lbu         $t7, 0xC($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0XC);
    // 0x8024532C: lbu         $t8, 0x0($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X0);
    // 0x80245330: nop

    // 0x80245334: beq         $t7, $t8, L_80245344
    if (ctx->r15 == ctx->r24) {
        // 0x80245338: nop
    
            goto L_80245344;
    }
    // 0x80245338: nop

    // 0x8024533C: b           L_802453A4
    // 0x80245340: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_802453A4;
    // 0x80245340: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80245344:
    // 0x80245344: lbu         $t9, 0xD($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0XD);
    // 0x80245348: lbu         $t0, 0x1($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X1);
    // 0x8024534C: nop

    // 0x80245350: beq         $t9, $t0, L_80245360
    if (ctx->r25 == ctx->r8) {
        // 0x80245354: nop
    
            goto L_80245360;
    }
    // 0x80245354: nop

    // 0x80245358: b           L_802453A4
    // 0x8024535C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_802453A4;
    // 0x8024535C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80245360:
    // 0x80245360: lbu         $t1, 0xE($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0XE);
    // 0x80245364: lbu         $t2, 0x2($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X2);
    // 0x80245368: nop

    // 0x8024536C: beq         $t1, $t2, L_8024537C
    if (ctx->r9 == ctx->r10) {
        // 0x80245370: nop
    
            goto L_8024537C;
    }
    // 0x80245370: nop

    // 0x80245374: b           L_802453A4
    // 0x80245378: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_802453A4;
    // 0x80245378: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8024537C:
    // 0x8024537C: lbu         $t3, 0xF($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0XF);
    // 0x80245380: lbu         $t4, 0x3($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X3);
    // 0x80245384: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80245388: beq         $t3, $t4, L_80245398
    if (ctx->r11 == ctx->r12) {
        // 0x8024538C: nop
    
            goto L_80245398;
    }
    // 0x8024538C: nop

    // 0x80245390: b           L_802453A4
    // 0x80245394: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_802453A4;
    // 0x80245394: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80245398:
    // 0x80245398: bne         $v0, $a0, L_80245328
    if (ctx->r2 != ctx->r4) {
        // 0x8024539C: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_80245328;
    }
    // 0x8024539C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x802453A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802453A4:
    // 0x802453A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802453A8:
    // 0x802453A8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802453AC: jr          $ra
    // 0x802453B0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x802453B0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void D_802044E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802044E0: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x802044E4: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x802044E8: lhu         $t7, 0x38($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X38);
    // 0x802044EC: lhu         $t9, 0x3C($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X3C);
    // 0x802044F0: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x802044F4: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x802044F8: sll         $t0, $t9, 11
    ctx->r8 = S32(ctx->r25 << 11);
    // 0x802044FC: addu        $v0, $t8, $t0
    ctx->r2 = ADD32(ctx->r24, ctx->r8);
    // 0x80204500: ori         $at, $at, 0xFDDC
    ctx->r1 = ctx->r1 | 0XFDDC;
    // 0x80204504: jr          $ra
    // 0x80204508: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    return;
    // 0x80204508: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
;}
RECOMP_FUNC void D_802DD474(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802DD4F4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802DD4F8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802DD4FC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802DD500: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802DD504: jal         0x8021E66C
    // 0x802DD508: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    static_3_8021E66C(rdram, ctx);
        goto after_0;
    // 0x802DD508: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x802DD50C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802DD510: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x802DD514: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802DD518: jal         0x8021E708
    // 0x802DD51C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_1;
    // 0x802DD51C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_1:
    // 0x802DD520: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802DD524: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802DD528: addiu       $a0, $zero, 0xFA
    ctx->r4 = ADD32(0, 0XFA);
    // 0x802DD52C: jal         0x8021E87C
    // 0x802DD530: addiu       $a1, $zero, 0xB4
    ctx->r5 = ADD32(0, 0XB4);
    static_3_8021E87C(rdram, ctx);
        goto after_2;
    // 0x802DD530: addiu       $a1, $zero, 0xB4
    ctx->r5 = ADD32(0, 0XB4);
    after_2:
    // 0x802DD534: jal         0x8021E66C
    // 0x802DD538: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    static_3_8021E66C(rdram, ctx);
        goto after_3;
    // 0x802DD538: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
    // 0x802DD53C: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x802DD540: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802DD544: lwc1        $f4, 0xB4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XB4);
    // 0x802DD548: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802DD54C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x802DD550: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802DD554: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802DD558: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x802DD55C: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x802DD560: nop

    // 0x802DD564: andi        $t7, $a3, 0xFF
    ctx->r15 = ctx->r7 & 0XFF;
    // 0x802DD568: jal         0x8021E708
    // 0x802DD56C: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    static_3_8021E708(rdram, ctx);
        goto after_4;
    // 0x802DD56C: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    after_4:
    // 0x802DD570: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802DD574: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802DD578: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802DD57C: jal         0x802CE360
    // 0x802DD580: addiu       $a2, $zero, 0x140
    ctx->r6 = ADD32(0, 0X140);
    static_3_802CE360(rdram, ctx);
        goto after_5;
    // 0x802DD580: addiu       $a2, $zero, 0x140
    ctx->r6 = ADD32(0, 0X140);
    after_5:
    // 0x802DD584: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802DD588: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802DD58C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802DD590: jal         0x8021E87C
    // 0x802DD594: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    static_3_8021E87C(rdram, ctx);
        goto after_6;
    // 0x802DD594: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    after_6:
    // 0x802DD598: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x802DD59C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802DD5A0: lwc1        $f0, 0xBC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XBC);
    // 0x802DD5A4: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x802DD5A8: nop

    // 0x802DD5AC: bc1fl       L_802DD5C4
    if (!c1cs) {
        // 0x802DD5B0: sb          $zero, 0xD4($s0)
        MEM_B(0XD4, ctx->r16) = 0;
            goto L_802DD5C4;
    }
    goto skip_0;
    // 0x802DD5B0: sb          $zero, 0xD4($s0)
    MEM_B(0XD4, ctx->r16) = 0;
    skip_0:
    // 0x802DD5B4: sub.s       $f16, $f0, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x802DD5B8: b           L_802DD5C4
    // 0x802DD5BC: swc1        $f16, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f16.u32l;
        goto L_802DD5C4;
    // 0x802DD5BC: swc1        $f16, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f16.u32l;
    // 0x802DD5C0: sb          $zero, 0xD4($s0)
    MEM_B(0XD4, ctx->r16) = 0;
L_802DD5C4:
    // 0x802DD5C4: lbu         $t8, 0xD4($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XD4);
    // 0x802DD5C8: beq         $t8, $zero, L_802DD5F0
    if (ctx->r24 == 0) {
        // 0x802DD5CC: nop
    
            goto L_802DD5F0;
    }
    // 0x802DD5CC: nop

    // 0x802DD5D0: lwc1        $f18, 0xBC($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XBC);
    // 0x802DD5D4: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x802DD5D8: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x802DD5DC: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x802DD5E0: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x802DD5E4: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x802DD5E8: jal         0x80309DEC
    // 0x802DD5EC: nop

    static_3_80309DEC(rdram, ctx);
        goto after_7;
    // 0x802DD5EC: nop

    after_7:
L_802DD5F0:
    // 0x802DD5F0: jal         0x8021EC9C
    // 0x802DD5F4: nop

    static_3_8021EC9C(rdram, ctx);
        goto after_8;
    // 0x802DD5F4: nop

    after_8:
    // 0x802DD5F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802DD5FC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802DD600: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802DD604: jr          $ra
    // 0x802DD608: nop

    return;
    // 0x802DD608: nop

;}
RECOMP_FUNC void D_802A416C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A41EC: addiu       $sp, $sp, -0xD8
    ctx->r29 = ADD32(ctx->r29, -0XD8);
    // 0x802A41F0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802A41F4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802A41F8: sw          $a1, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r5;
    // 0x802A41FC: sw          $a2, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r6;
    // 0x802A4200: lbu         $t6, 0x194($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X194);
    // 0x802A4204: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802A4208: bnel        $t6, $zero, L_802A48F0
    if (ctx->r14 != 0) {
        // 0x802A420C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802A48F0;
    }
    goto skip_0;
    // 0x802A420C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x802A4210: jal         0x802D1A6C
    // 0x802A4214: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    static_3_802D1A6C(rdram, ctx);
        goto after_0;
    // 0x802A4214: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_0:
    // 0x802A4218: lwc1        $f4, 0x5C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X5C);
    // 0x802A421C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802A4220: addiu       $a0, $sp, 0x6C
    ctx->r4 = ADD32(ctx->r29, 0X6C);
    // 0x802A4224: swc1        $f4, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f4.u32l;
    // 0x802A4228: lwc1        $f6, 0x60($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X60);
    // 0x802A422C: swc1        $f6, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f6.u32l;
    // 0x802A4230: lwc1        $f8, 0x64($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X64);
    // 0x802A4234: swc1        $f10, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f10.u32l;
    // 0x802A4238: jal         0x8022970C
    // 0x802A423C: swc1        $f8, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f8.u32l;
    func_8022970C(rdram, ctx);
        goto after_1;
    // 0x802A423C: swc1        $f8, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x802A4240: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802A4244: lbu         $t7, 0x0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X0);
    // 0x802A4248: slti        $at, $t7, 0xF
    ctx->r1 = SIGNED(ctx->r15) < 0XF ? 1 : 0;
    // 0x802A424C: beq         $at, $zero, L_802A4288
    if (ctx->r1 == 0) {
        // 0x802A4250: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_802A4288;
    }
    // 0x802A4250: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802A4254: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802A4258: jal         0x802AEE54
    // 0x802A425C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802AEE54(rdram, ctx);
        goto after_2;
    // 0x802A425C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x802A4260: lw          $v1, 0x1A0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X1A0);
    // 0x802A4264: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    // 0x802A4268: lw          $t9, 0x64($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X64);
    // 0x802A426C: lh          $t8, 0x60($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X60);
    // 0x802A4270: jalr        $t9
    // 0x802A4274: addu        $a0, $t8, $v0
    ctx->r4 = ADD32(ctx->r24, ctx->r2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x802A4274: addu        $a0, $t8, $v0
    ctx->r4 = ADD32(ctx->r24, ctx->r2);
    after_3:
    // 0x802A4278: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x802A427C: jal         0x802CF954
    // 0x802A4280: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    static_3_802CF954(rdram, ctx);
        goto after_4;
    // 0x802A4280: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    after_4:
    // 0x802A4284: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
L_802A4288:
    // 0x802A4288: addiu       $t0, $s0, 0x2C
    ctx->r8 = ADD32(ctx->r16, 0X2C);
    // 0x802A428C: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x802A4290: lbu         $t1, 0x195($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X195);
    // 0x802A4294: beq         $t1, $zero, L_802A42B4
    if (ctx->r9 == 0) {
        // 0x802A4298: lui         $at, 0x447A
        ctx->r1 = S32(0X447A << 16);
            goto L_802A42B4;
    }
    // 0x802A4298: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x802A429C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802A42A0: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x802A42A4: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x802A42A8: nop

    // 0x802A42AC: bc1tl       L_802A42E4
    if (c1cs) {
        // 0x802A42B0: lw          $a0, 0x34($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X34);
            goto L_802A42E4;
    }
    goto skip_1;
    // 0x802A42B0: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    skip_1:
L_802A42B4:
    // 0x802A42B4: lbu         $v0, 0x196($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X196);
    // 0x802A42B8: lwc1        $f8, 0x68($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X68);
    // 0x802A42BC: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x802A42C0: beq         $v0, $zero, L_802A43C8
    if (ctx->r2 == 0) {
        // 0x802A42C4: nop
    
            goto L_802A43C8;
    }
    // 0x802A42C4: nop

    // 0x802A42C8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802A42CC: nop

    // 0x802A42D0: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x802A42D4: nop

    // 0x802A42D8: bc1f        L_802A43C8
    if (!c1cs) {
        // 0x802A42DC: nop
    
            goto L_802A43C8;
    }
    // 0x802A42DC: nop

    // 0x802A42E0: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
L_802A42E4:
    // 0x802A42E4: jal         0x802CF7E8
    // 0x802A42E8: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    static_3_802CF7E8(rdram, ctx);
        goto after_5;
    // 0x802A42E8: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    after_5:
    // 0x802A42EC: lbu         $t2, 0x196($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X196);
    // 0x802A42F0: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    // 0x802A42F4: beql        $t2, $zero, L_802A4330
    if (ctx->r10 == 0) {
        // 0x802A42F8: lwc1        $f10, 0x10($s0)
        ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
            goto L_802A4330;
    }
    goto skip_2;
    // 0x802A42F8: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    skip_2:
    // 0x802A42FC: lbu         $t3, 0x197($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X197);
    // 0x802A4300: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x802A4304: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x802A4308: bnel        $t3, $zero, L_802A4330
    if (ctx->r11 != 0) {
        // 0x802A430C: lwc1        $f10, 0x10($s0)
        ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
            goto L_802A4330;
    }
    goto skip_3;
    // 0x802A430C: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    skip_3:
    // 0x802A4310: lwc1        $f4, 0x20($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X20);
    // 0x802A4314: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802A4318: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802A431C: sb          $t4, 0x197($s0)
    MEM_B(0X197, ctx->r16) = ctx->r12;
    // 0x802A4320: swc1        $f4, 0x1B4($s0)
    MEM_W(0X1B4, ctx->r16) = ctx->f4.u32l;
    // 0x802A4324: swc1        $f6, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f6.u32l;
    // 0x802A4328: swc1        $f8, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f8.u32l;
    // 0x802A432C: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
L_802A4330:
    // 0x802A4330: lwc1        $f4, 0xE0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x802A4334: lwc1        $f2, 0xA4($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x802A4338: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x802A433C: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x802A4340: swc1        $f6, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f6.u32l;
    // 0x802A4344: lbu         $t5, 0x195($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X195);
    // 0x802A4348: lwc1        $f12, 0x20($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X20);
    // 0x802A434C: lwc1        $f6, 0x68($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X68);
    // 0x802A4350: beql        $t5, $zero, L_802A43C0
    if (ctx->r13 == 0) {
        // 0x802A4354: mtc1        $zero, $f8
        ctx->f8.u32l = 0;
            goto L_802A43C0;
    }
    goto skip_4;
    // 0x802A4354: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    skip_4:
    // 0x802A4358: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802A435C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A4360: c.lt.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl < ctx->f16.fl;
    // 0x802A4364: nop

    // 0x802A4368: bc1fl       L_802A4378
    if (!c1cs) {
        // 0x802A436C: lwc1        $f8, 0x64($s0)
        ctx->f8.u32l = MEM_W(ctx->r16, 0X64);
            goto L_802A4378;
    }
    goto skip_5;
    // 0x802A436C: lwc1        $f8, 0x64($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X64);
    skip_5:
    // 0x802A4370: mov.s       $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = ctx->f16.fl;
    // 0x802A4374: lwc1        $f8, 0x64($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X64);
L_802A4378:
    // 0x802A4378: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802A437C: sub.s       $f0, $f2, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f8.fl;
    // 0x802A4380: c.eq.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl == ctx->f10.fl;
    // 0x802A4384: nop

    // 0x802A4388: bc1fl       L_802A4398
    if (!c1cs) {
        // 0x802A438C: lui         $at, 0x42C8
        ctx->r1 = S32(0X42C8 << 16);
            goto L_802A4398;
    }
    goto skip_6;
    // 0x802A438C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    skip_6:
    // 0x802A4390: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A4394: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
L_802A4398:
    // 0x802A4398: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802A439C: nop

    // 0x802A43A0: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802A43A4: lwc1        $f4, 0xE0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x802A43A8: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x802A43AC: nop

    // 0x802A43B0: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x802A43B4: b           L_802A4534
    // 0x802A43B8: swc1        $f6, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f6.u32l;
        goto L_802A4534;
    // 0x802A43B8: swc1        $f6, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f6.u32l;
    // 0x802A43BC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
L_802A43C0:
    // 0x802A43C0: b           L_802A4534
    // 0x802A43C4: swc1        $f8, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f8.u32l;
        goto L_802A4534;
    // 0x802A43C4: swc1        $f8, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f8.u32l;
L_802A43C8:
    // 0x802A43C8: beql        $v0, $zero, L_802A43F8
    if (ctx->r2 == 0) {
        // 0x802A43CC: lwc1        $f18, 0x1AC($s0)
        ctx->f18.u32l = MEM_W(ctx->r16, 0X1AC);
            goto L_802A43F8;
    }
    goto skip_7;
    // 0x802A43CC: lwc1        $f18, 0x1AC($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X1AC);
    skip_7:
    // 0x802A43D0: lbu         $t6, 0x197($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X197);
    // 0x802A43D4: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x802A43D8: beql        $t6, $zero, L_802A43F8
    if (ctx->r14 == 0) {
        // 0x802A43DC: lwc1        $f18, 0x1AC($s0)
        ctx->f18.u32l = MEM_W(ctx->r16, 0X1AC);
            goto L_802A43F8;
    }
    goto skip_8;
    // 0x802A43DC: lwc1        $f18, 0x1AC($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X1AC);
    skip_8:
    // 0x802A43E0: lwc1        $f10, 0xC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XC);
    // 0x802A43E4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802A43E8: sb          $zero, 0x197($s0)
    MEM_B(0X197, ctx->r16) = 0;
    // 0x802A43EC: swc1        $f10, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f10.u32l;
    // 0x802A43F0: swc1        $f4, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f4.u32l;
    // 0x802A43F4: lwc1        $f18, 0x1AC($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X1AC);
L_802A43F8:
    // 0x802A43F8: lwc1        $f16, 0xB8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x802A43FC: lwc1        $f10, 0x1A4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X1A4);
    // 0x802A4400: lwc1        $f8, 0xC0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x802A4404: sub.s       $f16, $f18, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x802A4408: lwc1        $f18, 0x1A8($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X1A8);
    // 0x802A440C: lwc1        $f6, 0xBC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x802A4410: sub.s       $f12, $f10, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x802A4414: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x802A4418: jal         0x802D05CC
    // 0x802A441C: sub.s       $f14, $f18, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f18.fl - ctx->f6.fl;
    static_3_802D05CC(rdram, ctx);
        goto after_6;
    // 0x802A441C: sub.s       $f14, $f18, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f18.fl - ctx->f6.fl;
    after_6:
    // 0x802A4420: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802A4424: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x802A4428: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A442C: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x802A4430: nop

    // 0x802A4434: bc1fl       L_802A4444
    if (!c1cs) {
        // 0x802A4438: lwc1        $f18, 0x1A4($s0)
        ctx->f18.u32l = MEM_W(ctx->r16, 0X1A4);
            goto L_802A4444;
    }
    goto skip_9;
    // 0x802A4438: lwc1        $f18, 0x1A4($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X1A4);
    skip_9:
    // 0x802A443C: lwc1        $f2, 0x0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A4440: lwc1        $f18, 0x1A4($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X1A4);
L_802A4444:
    // 0x802A4444: lwc1        $f16, 0xC0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x802A4448: lwc1        $f10, 0x1A8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X1A8);
    // 0x802A444C: lwc1        $f8, 0xBC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x802A4450: sub.s       $f12, $f18, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x802A4454: swc1        $f2, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f2.u32l;
    // 0x802A4458: jal         0x8022ADA8
    // 0x802A445C: sub.s       $f14, $f10, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f8.fl;
    static_3_8022ADA8(rdram, ctx);
        goto after_7;
    // 0x802A445C: sub.s       $f14, $f10, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f8.fl;
    after_7:
    // 0x802A4460: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802A4464: mov.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.fl = ctx->f0.fl;
    // 0x802A4468: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A446C: c.le.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl <= ctx->f6.fl;
    // 0x802A4470: lwc1        $f10, 0xB8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x802A4474: bc1fl       L_802A4484
    if (!c1cs) {
        // 0x802A4478: lwc1        $f8, 0x1AC($s0)
        ctx->f8.u32l = MEM_W(ctx->r16, 0X1AC);
            goto L_802A4484;
    }
    goto skip_10;
    // 0x802A4478: lwc1        $f8, 0x1AC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X1AC);
    skip_10:
    // 0x802A447C: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A4480: lwc1        $f8, 0x1AC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X1AC);
L_802A4484:
    // 0x802A4484: lwc1        $f4, 0xC0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x802A4488: lwc1        $f6, 0x1A4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X1A4);
    // 0x802A448C: sub.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x802A4490: lwc1        $f10, 0x1A8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X1A8);
    // 0x802A4494: lwc1        $f8, 0xBC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x802A4498: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x802A449C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802A44A0: sub.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x802A44A4: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x802A44A8: c.eq.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl == ctx->f4.fl;
    // 0x802A44AC: nop

    // 0x802A44B0: bc1fl       L_802A44E8
    if (!c1cs) {
        // 0x802A44B4: div.s       $f12, $f0, $f16
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = DIV_S(ctx->f0.fl, ctx->f16.fl);
            goto L_802A44E8;
    }
    goto skip_11;
    // 0x802A44B4: div.s       $f12, $f0, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = DIV_S(ctx->f0.fl, ctx->f16.fl);
    skip_11:
    // 0x802A44B8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802A44BC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A44C0: c.le.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl <= ctx->f0.fl;
    // 0x802A44C4: nop

    // 0x802A44C8: bc1f        L_802A44DC
    if (!c1cs) {
        // 0x802A44CC: nop
    
            goto L_802A44DC;
    }
    // 0x802A44CC: nop

    // 0x802A44D0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x802A44D4: b           L_802A4508
    // 0x802A44D8: lwc1        $f4, 0xB4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB4);
        goto L_802A4508;
    // 0x802A44D8: lwc1        $f4, 0xB4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB4);
L_802A44DC:
    // 0x802A44DC: b           L_802A4504
    // 0x802A44E0: lwc1        $f2, 0x0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X0);
        goto L_802A4504;
    // 0x802A44E0: lwc1        $f2, 0x0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A44E4: div.s       $f12, $f0, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = DIV_S(ctx->f0.fl, ctx->f16.fl);
L_802A44E8:
    // 0x802A44E8: swc1        $f16, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f16.u32l;
    // 0x802A44EC: swc1        $f18, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f18.u32l;
    // 0x802A44F0: jal         0x8022AE1C
    // 0x802A44F4: div.s       $f14, $f2, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = DIV_S(ctx->f2.fl, ctx->f16.fl);
    static_3_8022AE1C(rdram, ctx);
        goto after_8;
    // 0x802A44F4: div.s       $f14, $f2, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = DIV_S(ctx->f2.fl, ctx->f16.fl);
    after_8:
    // 0x802A44F8: lwc1        $f16, 0xB0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x802A44FC: lwc1        $f18, 0xAC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x802A4500: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_802A4504:
    // 0x802A4504: lwc1        $f4, 0xB4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB4);
L_802A4508:
    // 0x802A4508: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
    // 0x802A450C: lwc1        $f10, 0xE0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x802A4510: div.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f16.fl, ctx->f4.fl);
    // 0x802A4514: mov.s       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    ctx->f14.fl = ctx->f2.fl;
    // 0x802A4518: mul.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x802A451C: div.s       $f10, $f18, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
    // 0x802A4520: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x802A4524: swc1        $f8, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f8.u32l;
    // 0x802A4528: mul.s       $f6, $f0, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x802A452C: swc1        $f6, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f6.u32l;
    // 0x802A4530: lwc1        $f12, 0x20($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X20);
L_802A4534:
    // 0x802A4534: jal         0x802CF4D0
    // 0x802A4538: nop

    static_3_802CF4D0(rdram, ctx);
        goto after_9;
    // 0x802A4538: nop

    after_9:
    // 0x802A453C: lwc1        $f16, 0x10($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X10);
    // 0x802A4540: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x802A4544: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802A4548: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802A454C: div.s       $f18, $f16, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = DIV_S(ctx->f16.fl, ctx->f4.fl);
    // 0x802A4550: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802A4554: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802A4558: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802A455C: mul.s       $f2, $f0, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x802A4560: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802A4564: lbu         $t7, 0x195($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X195);
    // 0x802A4568: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
    // 0x802A456C: mul.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x802A4570: bne         $t7, $zero, L_802A4588
    if (ctx->r15 != 0) {
        // 0x802A4574: sub.s       $f14, $f10, $f8
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f8.fl;
            goto L_802A4588;
    }
    // 0x802A4574: sub.s       $f14, $f10, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x802A4578: lbu         $v0, 0x196($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X196);
    // 0x802A457C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A4580: beq         $v0, $zero, L_802A45B8
    if (ctx->r2 == 0) {
        // 0x802A4584: nop
    
            goto L_802A45B8;
    }
    // 0x802A4584: nop

L_802A4588:
    // 0x802A4588: c.lt.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl < ctx->f2.fl;
    // 0x802A458C: lbu         $v0, 0x196($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X196);
    // 0x802A4590: neg.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
    // 0x802A4594: bc1fl       L_802A45A4
    if (!c1cs) {
        // 0x802A4598: c.lt.s      $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
            goto L_802A45A4;
    }
    goto skip_12;
    // 0x802A4598: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    skip_12:
    // 0x802A459C: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    // 0x802A45A0: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
L_802A45A4:
    // 0x802A45A4: nop

    // 0x802A45A8: bc1f        L_802A45EC
    if (!c1cs) {
        // 0x802A45AC: nop
    
            goto L_802A45EC;
    }
    // 0x802A45AC: nop

    // 0x802A45B0: b           L_802A45EC
    // 0x802A45B4: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
        goto L_802A45EC;
    // 0x802A45B4: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_802A45B8:
    // 0x802A45B8: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A45BC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A45C0: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x802A45C4: nop

    // 0x802A45C8: bc1f        L_802A45D4
    if (!c1cs) {
        // 0x802A45CC: nop
    
            goto L_802A45D4;
    }
    // 0x802A45CC: nop

    // 0x802A45D0: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_802A45D4:
    // 0x802A45D4: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A45D8: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x802A45DC: nop

    // 0x802A45E0: bc1f        L_802A45EC
    if (!c1cs) {
        // 0x802A45E4: nop
    
            goto L_802A45EC;
    }
    // 0x802A45E4: nop

    // 0x802A45E8: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_802A45EC:
    // 0x802A45EC: beq         $v0, $zero, L_802A4630
    if (ctx->r2 == 0) {
        // 0x802A45F0: lwc1        $f4, 0x68($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
            goto L_802A4630;
    }
    // 0x802A45F0: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x802A45F4: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x802A45F8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802A45FC: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x802A4600: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x802A4604: nop

    // 0x802A4608: bc1fl       L_802A4634
    if (!c1cs) {
        // 0x802A460C: lui         $at, 0x4000
        ctx->r1 = S32(0X4000 << 16);
            goto L_802A4634;
    }
    goto skip_13;
    // 0x802A460C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    skip_13:
    // 0x802A4610: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802A4614: nop

    // 0x802A4618: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x802A461C: nop

    // 0x802A4620: bc1fl       L_802A4634
    if (!c1cs) {
        // 0x802A4624: lui         $at, 0x4000
        ctx->r1 = S32(0X4000 << 16);
            goto L_802A4634;
    }
    goto skip_14;
    // 0x802A4624: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    skip_14:
    // 0x802A4628: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x802A462C: nop

L_802A4630:
    // 0x802A4630: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
L_802A4634:
    // 0x802A4634: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802A4638: lwc1        $f4, 0x1BC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1BC);
    // 0x802A463C: lwc1        $f2, 0x1B8($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X1B8);
    // 0x802A4640: sub.s       $f0, $f8, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f8.fl - ctx->f18.fl;
    // 0x802A4644: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x802A4648: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x802A464C: lwc1        $f4, 0xE0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x802A4650: mul.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x802A4654: nop

    // 0x802A4658: mul.s       $f8, $f10, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x802A465C: nop

    // 0x802A4660: mul.s       $f14, $f8, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x802A4664: bc1f        L_802A468C
    if (!c1cs) {
        // 0x802A4668: nop
    
            goto L_802A468C;
    }
    // 0x802A4668: nop

    // 0x802A466C: mul.s       $f0, $f14, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = MUL_S(ctx->f14.fl, ctx->f4.fl);
    // 0x802A4670: sub.s       $f6, $f12, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x802A4674: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x802A4678: nop

    // 0x802A467C: bc1fl       L_802A46BC
    if (!c1cs) {
        // 0x802A4680: swc1        $f12, 0x1B8($s0)
        MEM_W(0X1B8, ctx->r16) = ctx->f12.u32l;
            goto L_802A46BC;
    }
    goto skip_15;
    // 0x802A4680: swc1        $f12, 0x1B8($s0)
    MEM_W(0X1B8, ctx->r16) = ctx->f12.u32l;
    skip_15:
    // 0x802A4684: b           L_802A46B8
    // 0x802A4688: add.s       $f12, $f2, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f0.fl;
        goto L_802A46B8;
    // 0x802A4688: add.s       $f12, $f2, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f0.fl;
L_802A468C:
    // 0x802A468C: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x802A4690: lwc1        $f10, 0xE0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x802A4694: bc1fl       L_802A46BC
    if (!c1cs) {
        // 0x802A4698: swc1        $f12, 0x1B8($s0)
        MEM_W(0X1B8, ctx->r16) = ctx->f12.u32l;
            goto L_802A46BC;
    }
    goto skip_16;
    // 0x802A4698: swc1        $f12, 0x1B8($s0)
    MEM_W(0X1B8, ctx->r16) = ctx->f12.u32l;
    skip_16:
    // 0x802A469C: mul.s       $f0, $f14, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = MUL_S(ctx->f14.fl, ctx->f10.fl);
    // 0x802A46A0: sub.s       $f8, $f2, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x802A46A4: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x802A46A8: nop

    // 0x802A46AC: bc1fl       L_802A46BC
    if (!c1cs) {
        // 0x802A46B0: swc1        $f12, 0x1B8($s0)
        MEM_W(0X1B8, ctx->r16) = ctx->f12.u32l;
            goto L_802A46BC;
    }
    goto skip_17;
    // 0x802A46B0: swc1        $f12, 0x1B8($s0)
    MEM_W(0X1B8, ctx->r16) = ctx->f12.u32l;
    skip_17:
    // 0x802A46B4: sub.s       $f12, $f2, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f2.fl - ctx->f0.fl;
L_802A46B8:
    // 0x802A46B8: swc1        $f12, 0x1B8($s0)
    MEM_W(0X1B8, ctx->r16) = ctx->f12.u32l;
L_802A46BC:
    // 0x802A46BC: lwc1        $f6, 0xE0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x802A46C0: lwc1        $f4, 0x20($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X20);
    // 0x802A46C4: mul.s       $f10, $f12, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f6.fl);
    // 0x802A46C8: add.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x802A46CC: swc1        $f8, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f8.u32l;
    // 0x802A46D0: swc1        $f12, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f12.u32l;
    // 0x802A46D4: jal         0x8022970C
    // 0x802A46D8: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_8022970C(rdram, ctx);
        goto after_10;
    // 0x802A46D8: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_10:
    // 0x802A46DC: lwc1        $f6, 0xC0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x802A46E0: lw          $a1, 0x20($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X20);
    // 0x802A46E4: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    // 0x802A46E8: swc1        $f6, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->f6.u32l;
    // 0x802A46EC: lwc1        $f4, 0xBC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x802A46F0: swc1        $f4, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->f4.u32l;
    // 0x802A46F4: lwc1        $f10, 0xB8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x802A46F8: swc1        $f10, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f10.u32l;
    // 0x802A46FC: jal         0x802D01D4
    // 0x802A4700: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    static_3_802D01D4(rdram, ctx);
        goto after_11;
    // 0x802A4700: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_11:
    // 0x802A4704: lbu         $t8, 0x198($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X198);
    // 0x802A4708: lwc1        $f12, 0x60($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X60);
    // 0x802A470C: bne         $t8, $zero, L_802A479C
    if (ctx->r24 != 0) {
        // 0x802A4710: nop
    
            goto L_802A479C;
    }
    // 0x802A4710: nop

    // 0x802A4714: lbu         $t9, 0x1C($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X1C);
    // 0x802A4718: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x802A471C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802A4720: beq         $t9, $zero, L_802A4758
    if (ctx->r25 == 0) {
        // 0x802A4724: lw          $a2, 0xC8($sp)
        ctx->r6 = MEM_W(ctx->r29, 0XC8);
            goto L_802A4758;
    }
    // 0x802A4724: lw          $a2, 0xC8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XC8);
    // 0x802A4728: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
    // 0x802A472C: lwc1        $f6, 0xE0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x802A4730: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802A4734: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x802A4738: mul.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x802A473C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802A4740: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x802A4744: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x802A4748: jal         0x8022A0D0
    // 0x802A474C: nop

    static_3_8022A0D0(rdram, ctx);
        goto after_12;
    // 0x802A474C: nop

    after_12:
    // 0x802A4750: b           L_802A479C
    // 0x802A4754: nop

        goto L_802A479C;
    // 0x802A4754: nop

L_802A4758:
    // 0x802A4758: lw          $a3, 0xC4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC4);
    // 0x802A475C: jal         0x8022A0D0
    // 0x802A4760: swc1        $f12, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f12.u32l;
    static_3_8022A0D0(rdram, ctx);
        goto after_13;
    // 0x802A4760: swc1        $f12, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f12.u32l;
    after_13:
    // 0x802A4764: lwc1        $f12, 0x60($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X60);
    // 0x802A4768: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x802A476C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802A4770: neg.s       $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = -ctx->f12.fl;
    // 0x802A4774: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
    // 0x802A4778: mul.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x802A477C: lwc1        $f8, 0xC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XC);
    // 0x802A4780: addiu       $a2, $zero, 0x79
    ctx->r6 = ADD32(0, 0X79);
    // 0x802A4784: mul.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x802A4788: div.s       $f0, $f10, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = DIV_S(ctx->f10.fl, ctx->f8.fl);
    // 0x802A478C: swc1        $f0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f0.u32l;
    // 0x802A4790: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802A4794: jal         0x802D01D4
    // 0x802A4798: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    static_3_802D01D4(rdram, ctx);
        goto after_14;
    // 0x802A4798: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_14:
L_802A479C:
    // 0x802A479C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802A47A0: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802A47A4: lw          $a1, 0x5C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X5C);
    // 0x802A47A8: jal         0x802AEF08
    // 0x802A47AC: lw          $a2, 0x60($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X60);
    static_3_802AEF08(rdram, ctx);
        goto after_15;
    // 0x802A47AC: lw          $a2, 0x60($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X60);
    after_15:
    // 0x802A47B0: lwc1        $f6, 0x64($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X64);
    // 0x802A47B4: lbu         $t0, 0x1C($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X1C);
    // 0x802A47B8: swc1        $f0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f0.u32l;
    // 0x802A47BC: sub.s       $f4, $f6, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x802A47C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802A47C4: beq         $t0, $zero, L_802A47DC
    if (ctx->r8 == 0) {
        // 0x802A47C8: swc1        $f4, 0x8($s0)
        MEM_W(0X8, ctx->r16) = ctx->f4.u32l;
            goto L_802A47DC;
    }
    // 0x802A47C8: swc1        $f4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f4.u32l;
    // 0x802A47CC: lwc1        $f10, 0x4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4);
    // 0x802A47D0: lwc1        $f8, 0x1B0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X1B0);
    // 0x802A47D4: add.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x802A47D8: swc1        $f6, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f6.u32l;
L_802A47DC:
    // 0x802A47DC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x802A47E0: jal         0x8021B4B0
    // 0x802A47E4: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    static_3_8021B4B0(rdram, ctx);
        goto after_16;
    // 0x802A47E4: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    after_16:
    // 0x802A47E8: lbu         $t1, 0x195($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X195);
    // 0x802A47EC: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x802A47F0: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x802A47F4: beql        $t1, $zero, L_802A4818
    if (ctx->r9 == 0) {
        // 0x802A47F8: lbu         $t2, 0x196($s0)
        ctx->r10 = MEM_BU(ctx->r16, 0X196);
            goto L_802A4818;
    }
    goto skip_18;
    // 0x802A47F8: lbu         $t2, 0x196($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X196);
    skip_18:
    // 0x802A47FC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802A4800: nop

    // 0x802A4804: c.lt.s      $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f4.fl < ctx->f10.fl;
    // 0x802A4808: nop

    // 0x802A480C: bc1tl       L_802A48F0
    if (c1cs) {
        // 0x802A4810: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802A48F0;
    }
    goto skip_19;
    // 0x802A4810: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_19:
    // 0x802A4814: lbu         $t2, 0x196($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X196);
L_802A4818:
    // 0x802A4818: lwc1        $f8, 0x68($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X68);
    // 0x802A481C: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x802A4820: beq         $t2, $zero, L_802A483C
    if (ctx->r10 == 0) {
        // 0x802A4824: lwc1        $f0, 0xB4($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0XB4);
            goto L_802A483C;
    }
    // 0x802A4824: lwc1        $f0, 0xB4($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x802A4828: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802A482C: nop

    // 0x802A4830: c.lt.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl < ctx->f6.fl;
    // 0x802A4834: nop

    // 0x802A4838: bc1t        L_802A48EC
    if (c1cs) {
        // 0x802A483C: lui         $at, 0x4120
        ctx->r1 = S32(0X4120 << 16);
            goto L_802A48EC;
    }
L_802A483C:
    // 0x802A483C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802A4840: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802A4844: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x802A4848: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x802A484C: nop

    // 0x802A4850: bc1tl       L_802A4888
    if (c1cs) {
        // 0x802A4854: lw          $t3, 0x19C($s0)
        ctx->r11 = MEM_W(ctx->r16, 0X19C);
            goto L_802A4888;
    }
    goto skip_20;
    // 0x802A4854: lw          $t3, 0x19C($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X19C);
    skip_20:
    // 0x802A4858: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802A485C: nop

    // 0x802A4860: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x802A4864: nop

    // 0x802A4868: bc1fl       L_802A48EC
    if (!c1cs) {
        // 0x802A486C: swc1        $f0, 0x1A0($s0)
        MEM_W(0X1A0, ctx->r16) = ctx->f0.u32l;
            goto L_802A48EC;
    }
    goto skip_21;
    // 0x802A486C: swc1        $f0, 0x1A0($s0)
    MEM_W(0X1A0, ctx->r16) = ctx->f0.u32l;
    skip_21:
    // 0x802A4870: lwc1        $f8, 0x1A0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X1A0);
    // 0x802A4874: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x802A4878: nop

    // 0x802A487C: bc1fl       L_802A48EC
    if (!c1cs) {
        // 0x802A4880: swc1        $f0, 0x1A0($s0)
        MEM_W(0X1A0, ctx->r16) = ctx->f0.u32l;
            goto L_802A48EC;
    }
    goto skip_22;
    // 0x802A4880: swc1        $f0, 0x1A0($s0)
    MEM_W(0X1A0, ctx->r16) = ctx->f0.u32l;
    skip_22:
    // 0x802A4884: lw          $t3, 0x19C($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X19C);
L_802A4888:
    // 0x802A4888: lw          $t5, 0xDC($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XDC);
    // 0x802A488C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802A4890: addiu       $v1, $t3, 0x1
    ctx->r3 = ADD32(ctx->r11, 0X1);
    // 0x802A4894: bne         $t5, $v1, L_802A48B0
    if (ctx->r13 != ctx->r3) {
        // 0x802A4898: sw          $v1, 0x19C($s0)
        MEM_W(0X19C, ctx->r16) = ctx->r3;
            goto L_802A48B0;
    }
    // 0x802A4898: sw          $v1, 0x19C($s0)
    MEM_W(0X19C, ctx->r16) = ctx->r3;
    // 0x802A489C: sb          $t6, 0x194($s0)
    MEM_B(0X194, ctx->r16) = ctx->r14;
    // 0x802A48A0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A48A4: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A48A8: b           L_802A48EC
    // 0x802A48AC: swc1        $f6, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f6.u32l;
        goto L_802A48EC;
    // 0x802A48AC: swc1        $f6, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f6.u32l;
L_802A48B0:
    // 0x802A48B0: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
    // 0x802A48B4: subu        $t7, $t7, $v1
    ctx->r15 = SUB32(ctx->r15, ctx->r3);
    // 0x802A48B8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x802A48BC: addu        $v0, $s0, $t7
    ctx->r2 = ADD32(ctx->r16, ctx->r15);
    // 0x802A48C0: lwc1        $f4, 0xE0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XE0);
    // 0x802A48C4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A48C8: swc1        $f4, 0x1A4($s0)
    MEM_W(0X1A4, ctx->r16) = ctx->f4.u32l;
    // 0x802A48CC: lwc1        $f10, 0xE4($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XE4);
    // 0x802A48D0: swc1        $f10, 0x1A8($s0)
    MEM_W(0X1A8, ctx->r16) = ctx->f10.u32l;
    // 0x802A48D4: lwc1        $f8, 0xE8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XE8);
    // 0x802A48D8: swc1        $f8, 0x1AC($s0)
    MEM_W(0X1AC, ctx->r16) = ctx->f8.u32l;
    // 0x802A48DC: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A48E0: b           L_802A48EC
    // 0x802A48E4: swc1        $f6, 0x1A0($s0)
    MEM_W(0X1A0, ctx->r16) = ctx->f6.u32l;
        goto L_802A48EC;
    // 0x802A48E4: swc1        $f6, 0x1A0($s0)
    MEM_W(0X1A0, ctx->r16) = ctx->f6.u32l;
    // 0x802A48E8: swc1        $f0, 0x1A0($s0)
    MEM_W(0X1A0, ctx->r16) = ctx->f0.u32l;
L_802A48EC:
    // 0x802A48EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802A48F0:
    // 0x802A48F0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802A48F4: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
    // 0x802A48F8: jr          $ra
    // 0x802A48FC: nop

    return;
    // 0x802A48FC: nop

;}
RECOMP_FUNC void D_8029EF88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029F008: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8029F00C: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x8029F010: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x8029F014: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8029F018: addiu       $t6, $sp, 0x44
    ctx->r14 = ADD32(ctx->r29, 0X44);
    // 0x8029F01C: addiu       $t7, $sp, 0x40
    ctx->r15 = ADD32(ctx->r29, 0X40);
    // 0x8029F020: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x8029F024: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8029F028: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8029F02C: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x8029F030: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x8029F034: jal         0x802CF1C8
    // 0x8029F038: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    static_3_802CF1C8(rdram, ctx);
        goto after_0;
    // 0x8029F038: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x8029F03C: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x8029F040: jal         0x802CF7E8
    // 0x8029F044: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    static_3_802CF7E8(rdram, ctx);
        goto after_1;
    // 0x8029F044: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    after_1:
    // 0x8029F048: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x8029F04C: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x8029F050: jal         0x802CF888
    // 0x8029F054: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    static_3_802CF888(rdram, ctx);
        goto after_2;
    // 0x8029F054: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    after_2:
    // 0x8029F058: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x8029F05C: lwc1        $f12, 0x44($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8029F060: jal         0x802CF4D0
    // 0x8029F064: lwc1        $f14, 0x30($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X30);
    static_3_802CF4D0(rdram, ctx);
        goto after_3;
    // 0x8029F064: lwc1        $f14, 0x30($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X30);
    after_3:
    // 0x8029F068: lwc1        $f12, 0x40($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8029F06C: lwc1        $f14, 0x2C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8029F070: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x8029F074: jal         0x802CF4D0
    // 0x8029F078: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    static_3_802CF4D0(rdram, ctx);
        goto after_4;
    // 0x8029F078: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    after_4:
    // 0x8029F07C: lwc1        $f2, 0x38($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8029F080: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8029F084: nop

    // 0x8029F088: mul.s       $f6, $f0, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x8029F08C: jal         0x8022AA40
    // 0x8029F090: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    static_3_8022AA40(rdram, ctx);
        goto after_5;
    // 0x8029F090: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_5:
    // 0x8029F094: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8029F098: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x8029F09C: jr          $ra
    // 0x8029F0A0: nop

    return;
    // 0x8029F0A0: nop

;}
RECOMP_FUNC void D_802E9F2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E9FAC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802E9FB0: jr          $ra
    // 0x802E9FB4: sh          $zero, 0x0($at)
    MEM_H(0X0, ctx->r1) = 0;
    return;
    // 0x802E9FB4: sh          $zero, 0x0($at)
    MEM_H(0X0, ctx->r1) = 0;
;}
RECOMP_FUNC void D_802A3028(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A30A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A30AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A30B0: beq         $a0, $zero, L_802A30EC
    if (ctx->r4 == 0) {
        // 0x802A30B4: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_802A30EC;
    }
    // 0x802A30B4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802A30B8: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802A30BC: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802A30C0: sw          $t6, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = ctx->r14;
    // 0x802A30C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802A30C8: jal         0x802D1A34
    // 0x802A30CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_802D1A34(rdram, ctx);
        goto after_0;
    // 0x802A30CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x802A30D0: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x802A30D4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802A30D8: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x802A30DC: beql        $t8, $zero, L_802A30F0
    if (ctx->r24 == 0) {
        // 0x802A30E0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802A30F0;
    }
    goto skip_0;
    // 0x802A30E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802A30E4: jal         0x802C681C
    // 0x802A30E8: nop

    static_3_802C681C(rdram, ctx);
        goto after_1;
    // 0x802A30E8: nop

    after_1:
L_802A30EC:
    // 0x802A30EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A30F0:
    // 0x802A30F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A30F4: jr          $ra
    // 0x802A30F8: nop

    return;
    // 0x802A30F8: nop

;}
RECOMP_FUNC void D_802EC8E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EC960: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802EC964: bne         $a0, $zero, L_802EC97C
    if (ctx->r4 != 0) {
        // 0x802EC968: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802EC97C;
    }
    // 0x802EC968: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802EC96C: jal         0x802C67EC
    // 0x802EC970: addiu       $a0, $zero, 0xF0
    ctx->r4 = ADD32(0, 0XF0);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802EC970: addiu       $a0, $zero, 0xF0
    ctx->r4 = ADD32(0, 0XF0);
    after_0:
    // 0x802EC974: beq         $v0, $zero, L_802EC9D0
    if (ctx->r2 == 0) {
        // 0x802EC978: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802EC9D0;
    }
    // 0x802EC978: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_802EC97C:
    // 0x802EC97C: jal         0x8031C47C
    // 0x802EC980: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_8031C47C(rdram, ctx);
        goto after_1;
    // 0x802EC980: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x802EC984: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802EC988: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x802EC98C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802EC990: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802EC994: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802EC998: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802EC99C: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x802EC9A0: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x802EC9A4: addiu       $t8, $zero, 0x1E
    ctx->r24 = ADD32(0, 0X1E);
    // 0x802EC9A8: sw          $zero, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = 0;
    // 0x802EC9AC: sh          $t6, 0xBC($a0)
    MEM_H(0XBC, ctx->r4) = ctx->r14;
    // 0x802EC9B0: sw          $t7, 0xB8($a0)
    MEM_W(0XB8, ctx->r4) = ctx->r15;
    // 0x802EC9B4: sh          $zero, 0xE4($a0)
    MEM_H(0XE4, ctx->r4) = 0;
    // 0x802EC9B8: sh          $t8, 0xE6($a0)
    MEM_H(0XE6, ctx->r4) = ctx->r24;
    // 0x802EC9BC: swc1        $f0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->f0.u32l;
    // 0x802EC9C0: swc1        $f0, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f0.u32l;
    // 0x802EC9C4: jal         0x8031D13C
    // 0x802EC9C8: swc1        $f4, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->f4.u32l;
    static_3_8031D13C(rdram, ctx);
        goto after_2;
    // 0x802EC9C8: swc1        $f4, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->f4.u32l;
    after_2:
    // 0x802EC9CC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_802EC9D0:
    // 0x802EC9D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802EC9D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802EC9D8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x802EC9DC: jr          $ra
    // 0x802EC9E0: nop

    return;
    // 0x802EC9E0: nop

;}
RECOMP_FUNC void D_802D206C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D20EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802D20F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802D20F4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802D20F8: jal         0x80301EA0
    // 0x802D20FC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    static_3_80301EA0(rdram, ctx);
        goto after_0;
    // 0x802D20FC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x802D2100: beq         $v0, $zero, L_802D2124
    if (ctx->r2 == 0) {
        // 0x802D2104: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802D2124;
    }
    // 0x802D2104: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802D2108: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x802D210C: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x802D2110: lbu         $t8, 0x4($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X4);
    // 0x802D2114: sll         $t9, $t8, 5
    ctx->r25 = S32(ctx->r24 << 5);
    // 0x802D2118: addu        $t0, $t6, $t9
    ctx->r8 = ADD32(ctx->r14, ctx->r25);
    // 0x802D211C: b           L_802D212C
    // 0x802D2120: lwc1        $f0, 0xC($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0XC);
        goto L_802D212C;
    // 0x802D2120: lwc1        $f0, 0xC($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0XC);
L_802D2124:
    // 0x802D2124: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802D2128: nop

L_802D212C:
    // 0x802D212C: jr          $ra
    // 0x802D2130: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x802D2130: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void D_80231100(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80231100: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x80231104: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x80231108: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8023110C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80231110: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80231114: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80231118: sw          $a0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r4;
    // 0x8023111C: ori         $v0, $v0, 0xA800
    ctx->r2 = ctx->r2 | 0XA800;
    // 0x80231120: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
L_80231124:
    // 0x80231124: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80231128: sltu        $at, $v0, $v1
    ctx->r1 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8023112C: bne         $at, $zero, L_80231124
    if (ctx->r1 != 0) {
        // 0x80231130: sw          $zero, -0x4($v0)
        MEM_W(-0X4, ctx->r2) = 0;
            goto L_80231124;
    }
    // 0x80231130: sw          $zero, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = 0;
    // 0x80231134: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80231138: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8023113C: ori         $v1, $v1, 0x5800
    ctx->r3 = ctx->r3 | 0X5800;
L_80231140:
    // 0x80231140: addiu       $v0, $v0, 0x0
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x80231144: sw          $zero, -0xC($v0)
    MEM_W(-0XC, ctx->r2) = 0;
    // 0x80231148: sw          $zero, -0x8($v0)
    MEM_W(-0X8, ctx->r2) = 0;
    // 0x8023114C: sw          $zero, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = 0;
    // 0x80231150: bne         $v0, $v1, L_80231140
    if (ctx->r2 != ctx->r3) {
        // 0x80231154: sw          $zero, -0x10($v0)
        MEM_W(-0X10, ctx->r2) = 0;
            goto L_80231140;
    }
    // 0x80231154: sw          $zero, -0x10($v0)
    MEM_W(-0X10, ctx->r2) = 0;
    // 0x80231158: jal         0x8023E3A0
    // 0x8023115C: nop

    static_3_8023E3A0(rdram, ctx);
        goto after_0;
    // 0x8023115C: nop

    after_0:
    // 0x80231160: lui         $s1, 0xFF
    ctx->r17 = S32(0XFF << 16);
    // 0x80231164: ori         $s1, $s1, 0xB000
    ctx->r17 = ctx->r17 | 0XB000;
    // 0x80231168: addiu       $s0, $sp, 0x3C
    ctx->r16 = ADD32(ctx->r29, 0X3C);
    // 0x8023116C: addiu       $s2, $sp, 0x7C
    ctx->r18 = ADD32(ctx->r29, 0X7C);
L_80231170:
    // 0x80231170: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80231174: jal         0x8023E640
    // 0x80231178: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    static_3_8023E640(rdram, ctx);
        goto after_1;
    // 0x80231178: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x8023117C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80231180: bne         $s0, $s2, L_80231170
    if (ctx->r16 != ctx->r18) {
        // 0x80231184: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_80231170;
    }
    // 0x80231184: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80231188: lbu         $t6, 0x3C($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X3C);
    // 0x8023118C: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x80231190: lbu         $v0, 0x3D($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X3D);
    // 0x80231194: bne         $t6, $at, L_802311C4
    if (ctx->r14 != ctx->r1) {
        // 0x80231198: addiu       $at, $zero, 0x64
        ctx->r1 = ADD32(0, 0X64);
            goto L_802311C4;
    }
    // 0x80231198: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x8023119C: bne         $v0, $at, L_802311B0
    if (ctx->r2 != ctx->r1) {
        // 0x802311A0: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_802311B0;
    }
    // 0x802311A0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802311A4: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802311A8: b           L_802311C4
    // 0x802311AC: sw          $t7, 0xC84($at)
    MEM_W(0XC84, ctx->r1) = ctx->r15;
        goto L_802311C4;
    // 0x802311AC: sw          $t7, 0xC84($at)
    MEM_W(0XC84, ctx->r1) = ctx->r15;
L_802311B0:
    // 0x802311B0: addiu       $at, $zero, 0x7A
    ctx->r1 = ADD32(0, 0X7A);
    // 0x802311B4: bne         $v0, $at, L_802311C4
    if (ctx->r2 != ctx->r1) {
        // 0x802311B8: nop
    
            goto L_802311C4;
    }
    // 0x802311B8: nop

    // 0x802311BC: jal         0x8022B088
    // 0x802311C0: nop

    static_3_8022B088(rdram, ctx);
        goto after_2;
    // 0x802311C0: nop

    after_2:
L_802311C4:
    // 0x802311C4: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x802311C8: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x802311CC: addiu       $s0, $s0, 0x0
    ctx->r16 = ADD32(ctx->r16, 0X0);
    // 0x802311D0: addiu       $t8, $t8, 0x0
    ctx->r24 = ADD32(ctx->r24, 0X0);
    // 0x802311D4: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802311D8: addiu       $t9, $zero, 0xC
    ctx->r25 = ADD32(0, 0XC);
    // 0x802311DC: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x802311E0: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802311E4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x802311E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802311EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802311F0: jal         0x80237210
    // 0x802311F4: lw          $a3, 0x88($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X88);
    static_3_80237210(rdram, ctx);
        goto after_3;
    // 0x802311F4: lw          $a3, 0x88($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X88);
    after_3:
    // 0x802311F8: jal         0x80237360
    // 0x802311FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80237360(rdram, ctx);
        goto after_4;
    // 0x802311FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80231200: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80231204: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80231208: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8023120C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80231210: jr          $ra
    // 0x80231214: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    return;
    // 0x80231214: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void D_802F0730(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802F07B0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802F07B4: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802F07B8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802F07BC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802F07C0: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802F07C4: lui         $at, 0x4326
    ctx->r1 = S32(0X4326 << 16);
    // 0x802F07C8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802F07CC: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x802F07D0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802F07D4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x802F07D8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802F07DC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802F07E0: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x802F07E4: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x802F07E8: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x802F07EC: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x802F07F0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x802F07F4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802F07F8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x802F07FC: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x802F0800: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x802F0804: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x802F0808: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x802F080C: jal         0x80308530
    // 0x802F0810: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    static_3_80308530(rdram, ctx);
        goto after_0;
    // 0x802F0810: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    after_0:
    // 0x802F0814: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802F0818: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802F081C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802F0820: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802F0824: lui         $at, 0x4327
    ctx->r1 = S32(0X4327 << 16);
    // 0x802F0828: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802F082C: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x802F0830: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802F0834: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802F0838: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x802F083C: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x802F0840: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x802F0844: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x802F0848: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x802F084C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x802F0850: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802F0854: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x802F0858: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x802F085C: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    // 0x802F0860: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
    // 0x802F0864: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x802F0868: jal         0x80308530
    // 0x802F086C: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    static_3_80308530(rdram, ctx);
        goto after_1;
    // 0x802F086C: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x802F0870: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802F0874: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802F0878: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802F087C: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802F0880: lui         $at, 0x4321
    ctx->r1 = S32(0X4321 << 16);
    // 0x802F0884: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802F0888: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x802F088C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802F0890: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x802F0894: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x802F0898: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x802F089C: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x802F08A0: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x802F08A4: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x802F08A8: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x802F08AC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802F08B0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x802F08B4: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x802F08B8: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    // 0x802F08BC: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x802F08C0: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
    // 0x802F08C4: jal         0x80308530
    // 0x802F08C8: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    static_3_80308530(rdram, ctx);
        goto after_2;
    // 0x802F08C8: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    after_2:
    // 0x802F08CC: lui         $at, 0xC59B
    ctx->r1 = S32(0XC59B << 16);
    // 0x802F08D0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802F08D4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802F08D8: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802F08DC: lui         $at, 0x4328
    ctx->r1 = S32(0X4328 << 16);
    // 0x802F08E0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802F08E4: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x802F08E8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802F08EC: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x802F08F0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802F08F4: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x802F08F8: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x802F08FC: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x802F0900: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x802F0904: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x802F0908: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802F090C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x802F0910: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x802F0914: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x802F0918: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x802F091C: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x802F0920: jal         0x80308530
    // 0x802F0924: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    static_3_80308530(rdram, ctx);
        goto after_3;
    // 0x802F0924: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    after_3:
    // 0x802F0928: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802F092C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x802F0930: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802F0934: jr          $ra
    // 0x802F0938: nop

    return;
    // 0x802F0938: nop

;}
RECOMP_FUNC void D_802A1ED0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A1F50: jr          $ra
    // 0x802A1F54: lwc1        $f0, 0xC($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XC);
    return;
    // 0x802A1F54: lwc1        $f0, 0xC($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XC);
;}
RECOMP_FUNC void D_8027AE74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027AEEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027AEF0: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x8027AEF4: addiu       $t6, $a0, 0x365C
    ctx->r14 = ADD32(ctx->r4, 0X365C);
    // 0x8027AEF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027AEFC: bne         $a1, $t6, L_8027AF1C
    if (ctx->r5 != ctx->r14) {
        // 0x8027AF00: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_8027AF1C;
    }
    // 0x8027AF00: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8027AF04: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x8027AF08: addiu       $a0, $a0, 0x362C
    ctx->r4 = ADD32(ctx->r4, 0X362C);
    // 0x8027AF0C: jal         0x802E9C7C
    // 0x8027AF10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_802E9C7C(rdram, ctx);
        goto after_0;
    // 0x8027AF10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8027AF14: b           L_8027AF38
    // 0x8027AF18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8027AF38;
    // 0x8027AF18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027AF1C:
    // 0x8027AF1C: addiu       $t7, $a3, 0x4E3C
    ctx->r15 = ADD32(ctx->r7, 0X4E3C);
    // 0x8027AF20: bne         $a1, $t7, L_8027AF34
    if (ctx->r5 != ctx->r15) {
        // 0x8027AF24: addiu       $a0, $a3, 0x362C
        ctx->r4 = ADD32(ctx->r7, 0X362C);
            goto L_8027AF34;
    }
    // 0x8027AF24: addiu       $a0, $a3, 0x362C
    ctx->r4 = ADD32(ctx->r7, 0X362C);
    // 0x8027AF28: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x8027AF2C: jal         0x802E9C7C
    // 0x8027AF30: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802E9C7C(rdram, ctx);
        goto after_1;
    // 0x8027AF30: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
L_8027AF34:
    // 0x8027AF34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027AF38:
    // 0x8027AF38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027AF3C: jr          $ra
    // 0x8027AF40: nop

    return;
    // 0x8027AF40: nop

;}
RECOMP_FUNC void D_80284138(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802841B8: addiu       $sp, $sp, -0xE8
    ctx->r29 = ADD32(ctx->r29, -0XE8);
    // 0x802841BC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x802841C0: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x802841C4: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x802841C8: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x802841CC: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x802841D0: lw          $t6, 0x78($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X78);
    // 0x802841D4: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802841D8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802841DC: andi        $t7, $t6, 0x20
    ctx->r15 = ctx->r14 & 0X20;
    // 0x802841E0: beql        $t7, $zero, L_802845C4
    if (ctx->r15 == 0) {
        // 0x802841E4: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_802845C4;
    }
    goto skip_0;
    // 0x802841E4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_0:
    // 0x802841E8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x802841EC: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x802841F0: lw          $t8, 0x7168($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X7168);
    // 0x802841F4: bne         $t8, $at, L_80284204
    if (ctx->r24 != ctx->r1) {
        // 0x802841F8: lui         $at, 0x0
        ctx->r1 = S32(0X0 << 16);
            goto L_80284204;
    }
    // 0x802841F8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802841FC: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80284200: add.s       $f12, $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f4.fl;
L_80284204:
    // 0x80284204: jal         0x8022331C
    // 0x80284208: swc1        $f12, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f12.u32l;
    static_3_8022331C(rdram, ctx);
        goto after_0;
    // 0x80284208: swc1        $f12, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x8028420C: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x80284210: addiu       $a0, $sp, 0x78
    ctx->r4 = ADD32(ctx->r29, 0X78);
    // 0x80284214: jal         0x80228DE0
    // 0x80284218: addiu       $a1, $a1, 0x7174
    ctx->r5 = ADD32(ctx->r5, 0X7174);
    func_80228DE0(rdram, ctx);
        goto after_1;
    // 0x80284218: addiu       $a1, $a1, 0x7174
    ctx->r5 = ADD32(ctx->r5, 0X7174);
    after_1:
    // 0x8028421C: lui         $s2, 0x0
    ctx->r18 = S32(0X0 << 16);
    // 0x80284220: addiu       $s2, $s2, 0x0
    ctx->r18 = ADD32(ctx->r18, 0X0);
    // 0x80284224: lbu         $t9, 0x0($s2)
    ctx->r25 = MEM_BU(ctx->r18, 0X0);
    // 0x80284228: addiu       $s1, $zero, 0xC
    ctx->r17 = ADD32(0, 0XC);
    // 0x8028422C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80284230: bne         $s1, $t9, L_80284240
    if (ctx->r17 != ctx->r25) {
        // 0x80284234: nop
    
            goto L_80284240;
    }
    // 0x80284234: nop

    // 0x80284238: b           L_80284240
    // 0x8028423C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80284240;
    // 0x8028423C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80284240:
    // 0x80284240: beq         $v0, $zero, L_802842A0
    if (ctx->r2 == 0) {
        // 0x80284244: lui         $at, 0x4374
        ctx->r1 = S32(0X4374 << 16);
            goto L_802842A0;
    }
    // 0x80284244: lui         $at, 0x4374
    ctx->r1 = S32(0X4374 << 16);
    // 0x80284248: lw          $t2, 0xC($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC);
    // 0x8028424C: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80284250: bnel        $t2, $zero, L_80284278
    if (ctx->r10 != 0) {
        // 0x80284254: mtc1        $at, $f10
        ctx->f10.u32l = ctx->r1;
            goto L_80284278;
    }
    goto skip_1;
    // 0x80284254: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    skip_1:
    // 0x80284258: lui         $at, 0x431A
    ctx->r1 = S32(0X431A << 16);
    // 0x8028425C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80284260: lui         $at, 0x4342
    ctx->r1 = S32(0X4342 << 16);
    // 0x80284264: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80284268: swc1        $f6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f6.u32l;
    // 0x8028426C: b           L_80284288
    // 0x80284270: swc1        $f8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f8.u32l;
        goto L_80284288;
    // 0x80284270: swc1        $f8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f8.u32l;
    // 0x80284274: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
L_80284278:
    // 0x80284278: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x8028427C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80284280: swc1        $f10, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f10.u32l;
    // 0x80284284: swc1        $f16, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f16.u32l;
L_80284288:
    // 0x80284288: lui         $at, 0x4343
    ctx->r1 = S32(0X4343 << 16);
    // 0x8028428C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80284290: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80284294: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80284298: b           L_802842C4
    // 0x8028429C: add.s       $f20, $f18, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = ctx->f18.fl + ctx->f4.fl;
        goto L_802842C4;
    // 0x8028429C: add.s       $f20, $f18, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = ctx->f18.fl + ctx->f4.fl;
L_802842A0:
    // 0x802842A0: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x802842A4: lui         $at, 0x42A8
    ctx->r1 = S32(0X42A8 << 16);
    // 0x802842A8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802842AC: lui         $at, 0x4324
    ctx->r1 = S32(0X4324 << 16);
    // 0x802842B0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802842B4: lui         $a0, 0x40
    ctx->r4 = S32(0X40 << 16);
    // 0x802842B8: swc1        $f6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f6.u32l;
    // 0x802842BC: jal         0x8022342C
    // 0x802842C0: swc1        $f8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f8.u32l;
    static_3_8022342C(rdram, ctx);
        goto after_2;
    // 0x802842C0: swc1        $f8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f8.u32l;
    after_2:
L_802842C4:
    // 0x802842C4: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x802842C8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802842CC: lwc1        $f10, 0xEC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x802842D0: lui         $at, 0x42C6
    ctx->r1 = S32(0X42C6 << 16);
    // 0x802842D4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802842D8: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x802842DC: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x802842E0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802842E4: lui         $at, 0x4230
    ctx->r1 = S32(0X4230 << 16);
    // 0x802842E8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802842EC: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x802842F0: addiu       $a0, $zero, 0x7B
    ctx->r4 = ADD32(0, 0X7B);
    // 0x802842F4: div.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
    // 0x802842F8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802842FC: add.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80284300: add.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f0.fl;
    // 0x80284304: add.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f0.fl;
    // 0x80284308: swc1        $f16, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f16.u32l;
    // 0x8028430C: jal         0x80223468
    // 0x80284310: swc1        $f4, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f4.u32l;
    static_3_80223468(rdram, ctx);
        goto after_3;
    // 0x80284310: swc1        $f4, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x80284314: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x80284318: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8028431C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80284320: lui         $a3, 0x3F11
    ctx->r7 = S32(0X3F11 << 16);
    // 0x80284324: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x80284328: jal         0x80221F44
    // 0x8028432C: ori         $a3, $a3, 0x6873
    ctx->r7 = ctx->r7 | 0X6873;
    static_3_80221F44(rdram, ctx);
        goto after_4;
    // 0x8028432C: ori         $a3, $a3, 0x6873
    ctx->r7 = ctx->r7 | 0X6873;
    after_4:
    // 0x80284330: lui         $at, 0x3E00
    ctx->r1 = S32(0X3E00 << 16);
    // 0x80284334: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80284338: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x8028433C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80284340: lwc1        $f16, 0x64($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X64);
    // 0x80284344: trunc.w.s   $f6, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    ctx->f6.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x80284348: lwc1        $f4, 0x60($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X60);
    // 0x8028434C: add.s       $f8, $f20, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f20.fl + ctx->f2.fl;
    // 0x80284350: mfc1        $a0, $f6
    ctx->r4 = (int32_t)ctx->f6.u32l;
    // 0x80284354: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80284358: lwc1        $f16, 0xB8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x8028435C: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80284360: mul.s       $f8, $f2, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x80284364: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x80284368: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x8028436C: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x80284370: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80284374: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80284378: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x8028437C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80284380: lwc1        $f4, 0xBC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x80284384: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x80284388: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x8028438C: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80284390: jal         0x8021F6F8
    // 0x80284394: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    static_3_8021F6F8(rdram, ctx);
        goto after_5;
    // 0x80284394: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    after_5:
    // 0x80284398: jal         0x802233EC
    // 0x8028439C: lui         $a0, 0x40
    ctx->r4 = S32(0X40 << 16);
    static_3_802233EC(rdram, ctx);
        goto after_6;
    // 0x8028439C: lui         $a0, 0x40
    ctx->r4 = S32(0X40 << 16);
    after_6:
    // 0x802843A0: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x802843A4: lwc1        $f8, 0x78($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X78);
    // 0x802843A8: lwc1        $f10, 0x8C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x802843AC: swc1        $f8, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f8.u32l;
    // 0x802843B0: beq         $s1, $v0, L_802843D4
    if (ctx->r17 == ctx->r2) {
        // 0x802843B4: swc1        $f10, 0x70($sp)
        MEM_W(0X70, ctx->r29) = ctx->f10.u32l;
            goto L_802843D4;
    }
    // 0x802843B4: swc1        $f10, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f10.u32l;
    // 0x802843B8: lw          $t7, 0x78($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X78);
    // 0x802843BC: andi        $t8, $t7, 0x40
    ctx->r24 = ctx->r15 & 0X40;
    // 0x802843C0: beq         $t8, $zero, L_802843D4
    if (ctx->r24 == 0) {
        // 0x802843C4: nop
    
            goto L_802843D4;
    }
    // 0x802843C4: nop

    // 0x802843C8: jal         0x8023413C
    // 0x802843CC: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    static_3_8023413C(rdram, ctx);
        goto after_7;
    // 0x802843CC: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    after_7:
    // 0x802843D0: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
L_802843D4:
    // 0x802843D4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802843D8: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802843DC: lwc1        $f18, 0x74($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X74);
    // 0x802843E0: lwc1        $f6, 0xA8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x802843E4: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x802843E8: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x802843EC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802843F0: lui         $at, 0x42FC
    ctx->r1 = S32(0X42FC << 16);
    // 0x802843F4: lw          $a0, 0x78($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X78);
    // 0x802843F8: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802843FC: addiu       $a2, $zero, 0x29
    ctx->r6 = ADD32(0, 0X29);
    // 0x80284400: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x80284404: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80284408: lwc1        $f6, 0x70($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X70);
    // 0x8028440C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80284410: andi        $t3, $a0, 0x20
    ctx->r11 = ctx->r4 & 0X20;
    // 0x80284414: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80284418: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8028441C: lwc1        $f10, 0xAC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x80284420: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80284424: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80284428: mfc1        $v1, $f18
    ctx->r3 = (int32_t)ctx->f18.u32l;
    // 0x8028442C: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80284430: or          $t0, $v1, $zero
    ctx->r8 = ctx->r3 | 0;
    // 0x80284434: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x80284438: bnel        $s1, $v0, L_8028444C
    if (ctx->r17 != ctx->r2) {
        // 0x8028443C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8028444C;
    }
    goto skip_2;
    // 0x8028443C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_2:
    // 0x80284440: b           L_8028444C
    // 0x80284444: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8028444C;
    // 0x80284444: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80284448: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8028444C:
    // 0x8028444C: beq         $v0, $zero, L_80284458
    if (ctx->r2 == 0) {
        // 0x80284450: nop
    
            goto L_80284458;
    }
    // 0x80284450: nop

    // 0x80284454: addiu       $t0, $v1, 0xA
    ctx->r8 = ADD32(ctx->r3, 0XA);
L_80284458:
    // 0x80284458: beql        $t3, $zero, L_80284484
    if (ctx->r11 == 0) {
        // 0x8028445C: andi        $t4, $a0, 0x40
        ctx->r12 = ctx->r4 & 0X40;
            goto L_80284484;
    }
    goto skip_3;
    // 0x8028445C: andi        $t4, $a0, 0x40
    ctx->r12 = ctx->r4 & 0X40;
    skip_3:
    // 0x80284460: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    // 0x80284464: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80284468: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x8028446C: jal         0x802344F4
    // 0x80284470: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    static_3_802344F4(rdram, ctx);
        goto after_8;
    // 0x80284470: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_8:
    // 0x80284474: jal         0x8023413C
    // 0x80284478: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    static_3_8023413C(rdram, ctx);
        goto after_9;
    // 0x80284478: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    after_9:
    // 0x8028447C: lw          $a0, 0x78($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X78);
    // 0x80284480: andi        $t4, $a0, 0x40
    ctx->r12 = ctx->r4 & 0X40;
L_80284484:
    // 0x80284484: bnel        $t4, $zero, L_802844A0
    if (ctx->r12 != 0) {
        // 0x80284488: lbu         $t5, 0x0($s2)
        ctx->r13 = MEM_BU(ctx->r18, 0X0);
            goto L_802844A0;
    }
    goto skip_4;
    // 0x80284488: lbu         $t5, 0x0($s2)
    ctx->r13 = MEM_BU(ctx->r18, 0X0);
    skip_4:
    // 0x8028448C: jal         0x8022337C
    // 0x80284490: nop

    static_3_8022337C(rdram, ctx);
        goto after_10;
    // 0x80284490: nop

    after_10:
    // 0x80284494: b           L_802845C4
    // 0x80284498: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_802845C4;
    // 0x80284498: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8028449C: lbu         $t5, 0x0($s2)
    ctx->r13 = MEM_BU(ctx->r18, 0X0);
L_802844A0:
    // 0x802844A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802844A4: bne         $s1, $t5, L_802844B4
    if (ctx->r17 != ctx->r13) {
        // 0x802844A8: nop
    
            goto L_802844B4;
    }
    // 0x802844A8: nop

    // 0x802844AC: b           L_802844B4
    // 0x802844B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802844B4;
    // 0x802844B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802844B4:
    // 0x802844B4: beq         $v0, $zero, L_802844CC
    if (ctx->r2 == 0) {
        // 0x802844B8: nop
    
            goto L_802844CC;
    }
    // 0x802844B8: nop

    // 0x802844BC: jal         0x8021E66C
    // 0x802844C0: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    static_3_8021E66C(rdram, ctx);
        goto after_11;
    // 0x802844C0: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_11:
    // 0x802844C4: b           L_802844D4
    // 0x802844C8: nop

        goto L_802844D4;
    // 0x802844C8: nop

L_802844CC:
    // 0x802844CC: jal         0x8021E66C
    // 0x802844D0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    static_3_8021E66C(rdram, ctx);
        goto after_12;
    // 0x802844D0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_12:
L_802844D4:
    // 0x802844D4: jal         0x8022337C
    // 0x802844D8: nop

    static_3_8022337C(rdram, ctx);
        goto after_13;
    // 0x802844D8: nop

    after_13:
    // 0x802844DC: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x802844E0: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x802844E4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x802844E8: jal         0x8021E708
    // 0x802844EC: addiu       $a3, $zero, 0x64
    ctx->r7 = ADD32(0, 0X64);
    static_3_8021E708(rdram, ctx);
        goto after_14;
    // 0x802844EC: addiu       $a3, $zero, 0x64
    ctx->r7 = ADD32(0, 0X64);
    after_14:
    // 0x802844F0: lwc1        $f4, 0xEC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x802844F4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x802844F8: addiu       $s2, $sp, 0xC8
    ctx->r18 = ADD32(ctx->r29, 0XC8);
    // 0x802844FC: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80284500: mfc1        $s1, $f6
    ctx->r17 = (int32_t)ctx->f6.u32l;
    // 0x80284504: nop

    // 0x80284508: addiu       $t7, $s1, -0xD5
    ctx->r15 = ADD32(ctx->r17, -0XD5);
    // 0x8028450C: sw          $t7, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r15;
    // 0x80284510: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
L_80284514:
    // 0x80284514: addiu       $t9, $s1, 0xE1
    ctx->r25 = ADD32(ctx->r17, 0XE1);
    // 0x80284518: slt         $at, $s0, $t8
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x8028451C: bne         $at, $zero, L_802845B0
    if (ctx->r1 != 0) {
        // 0x80284520: slt         $at, $t9, $s0
        ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r16) ? 1 : 0;
            goto L_802845B0;
    }
    // 0x80284520: slt         $at, $t9, $s0
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x80284524: bne         $at, $zero, L_802845B0
    if (ctx->r1 != 0) {
        // 0x80284528: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_802845B0;
    }
    // 0x80284528: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8028452C: lui         $at, 0x437E
    ctx->r1 = S32(0X437E << 16);
    // 0x80284530: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80284534: lwc1        $f10, 0x74($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X74);
    // 0x80284538: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8028453C: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80284540: mul.s       $f20, $f8, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80284544: jal         0x8023072C
    // 0x80284548: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    static_3_8023072C(rdram, ctx);
        goto after_15;
    // 0x80284548: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_15:
    // 0x8028454C: subu        $t3, $s0, $s1
    ctx->r11 = SUB32(ctx->r16, ctx->r17);
    // 0x80284550: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x80284554: lwc1        $f16, 0xA8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x80284558: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x8028455C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80284560: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80284564: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80284568: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x8028456C: add.s       $f18, $f20, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f20.fl + ctx->f16.fl;
    // 0x80284570: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80284574: lwc1        $f10, 0x70($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80284578: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8028457C: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80284580: lui         $at, 0x42EE
    ctx->r1 = S32(0X42EE << 16);
    // 0x80284584: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80284588: mfc1        $a0, $f4
    ctx->r4 = (int32_t)ctx->f4.u32l;
    // 0x8028458C: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x80284590: lwc1        $f18, 0xAC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x80284594: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x80284598: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8028459C: add.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x802845A0: trunc.w.s   $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x802845A4: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x802845A8: jal         0x8021E87C
    // 0x802845AC: nop

    static_3_8021E87C(rdram, ctx);
        goto after_16;
    // 0x802845AC: nop

    after_16:
L_802845B0:
    // 0x802845B0: addiu       $s0, $s0, 0x64
    ctx->r16 = ADD32(ctx->r16, 0X64);
    // 0x802845B4: addiu       $at, $zero, 0x4E20
    ctx->r1 = ADD32(0, 0X4E20);
    // 0x802845B8: bnel        $s0, $at, L_80284514
    if (ctx->r16 != ctx->r1) {
        // 0x802845BC: lw          $t8, 0x40($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X40);
            goto L_80284514;
    }
    goto skip_5;
    // 0x802845BC: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    skip_5:
    // 0x802845C0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_802845C4:
    // 0x802845C4: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x802845C8: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x802845CC: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x802845D0: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x802845D4: jr          $ra
    // 0x802845D8: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
    return;
    // 0x802845D8: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
;}
RECOMP_FUNC void D_80205308(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80205308: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8020530C: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x80205310: lhu         $a2, 0x0($a2)
    ctx->r6 = MEM_HU(ctx->r6, 0X0);
    // 0x80205314: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80205318: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x8020531C: slt         $at, $a0, $a2
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x80205320: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x80205324: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x80205328: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x8020532C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80205330: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x80205334: beq         $at, $zero, L_80205358
    if (ctx->r1 == 0) {
        // 0x80205338: or          $a1, $a0, $zero
        ctx->r5 = ctx->r4 | 0;
            goto L_80205358;
    }
    // 0x80205338: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8020533C: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80205340: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x80205344: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x80205348: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8020534C: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    // 0x80205350: bne         $a0, $zero, L_8020536C
    if (ctx->r4 != 0) {
        // 0x80205354: nop
    
            goto L_8020536C;
    }
    // 0x80205354: nop

L_80205358:
    // 0x80205358: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8020535C: jal         0x80231A24
    // 0x80205360: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x80205360: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x80205364: b           L_802054B8
    // 0x80205368: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_802054B8;
    // 0x80205368: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8020536C:
    // 0x8020536C: jal         0x80223840
    // 0x80205370: nop

    func_80223840(rdram, ctx);
        goto after_1;
    // 0x80205370: nop

    after_1:
    // 0x80205374: lui         $a3, 0x2E43
    ctx->r7 = S32(0X2E43 << 16);
    // 0x80205378: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x8020537C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80205380: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x80205384: ori         $a3, $a3, 0x544C
    ctx->r7 = ctx->r7 | 0X544C;
    // 0x80205388: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8020538C: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    // 0x80205390: addiu       $a2, $sp, 0x5C
    ctx->r6 = ADD32(ctx->r29, 0X5C);
    // 0x80205394: jal         0x80223B30
    // 0x80205398: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_80223B30(rdram, ctx);
        goto after_2;
    // 0x80205398: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x8020539C: lui         $a3, 0x2E54
    ctx->r7 = S32(0X2E54 << 16);
    // 0x802053A0: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x802053A4: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x802053A8: ori         $a3, $a3, 0x424C
    ctx->r7 = ctx->r7 | 0X424C;
    // 0x802053AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802053B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802053B4: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    // 0x802053B8: jal         0x80223B30
    // 0x802053BC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_80223B30(rdram, ctx);
        goto after_3;
    // 0x802053BC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x802053C0: jal         0x802238F0
    // 0x802053C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802238F0(rdram, ctx);
        goto after_4;
    // 0x802053C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x802053C8: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x802053CC: lui         $s1, 0x0
    ctx->r17 = S32(0X0 << 16);
    // 0x802053D0: addiu       $s1, $s1, 0x0
    ctx->r17 = ADD32(ctx->r17, 0X0);
    // 0x802053D4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x802053D8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802053DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802053E0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x802053E4: jal         0x80236CD0
    // 0x802053E8: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    static_3_80236CD0(rdram, ctx);
        goto after_5;
    // 0x802053E8: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_5:
    // 0x802053EC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x802053F0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802053F4: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x802053F8: jal         0x8022B460
    // 0x802053FC: lw          $a2, 0x54($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X54);
    func_8022B460(rdram, ctx);
        goto after_6;
    // 0x802053FC: lw          $a2, 0x54($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X54);
    after_6:
    // 0x80205400: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80205404: jal         0x80236E34
    // 0x80205408: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    static_3_80236E34(rdram, ctx);
        goto after_7;
    // 0x80205408: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    after_7:
    // 0x8020540C: lw          $t2, 0x4($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X4);
    // 0x80205410: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x80205414: addiu       $v0, $v0, 0x0
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x80205418: lui         $s4, 0x0
    ctx->r20 = S32(0X0 << 16);
    // 0x8020541C: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x80205420: lw          $t4, 0xC($t2)
    ctx->r12 = MEM_W(ctx->r10, 0XC);
    // 0x80205424: addiu       $s4, $s4, 0x0
    ctx->r20 = ADD32(ctx->r20, 0X0);
    // 0x80205428: lw          $t5, 0x0($s4)
    ctx->r13 = MEM_W(ctx->r20, 0X0);
    // 0x8020542C: lui         $s2, 0x0
    ctx->r18 = S32(0X0 << 16);
    // 0x80205430: addiu       $s2, $s2, 0x0
    ctx->r18 = ADD32(ctx->r18, 0X0);
    // 0x80205434: sw          $t4, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r12;
    // 0x80205438: lw          $t6, 0x44($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X44);
    // 0x8020543C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80205440: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80205444: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x80205448: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8020544C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x80205450: jal         0x80236CD0
    // 0x80205454: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    static_3_80236CD0(rdram, ctx);
        goto after_8;
    // 0x80205454: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_8:
    // 0x80205458: lw          $s0, 0x0($s4)
    ctx->r16 = MEM_W(ctx->r20, 0X0);
    // 0x8020545C: lui         $s5, 0x0
    ctx->r21 = S32(0X0 << 16);
    // 0x80205460: addiu       $s5, $s5, 0x0
    ctx->r21 = ADD32(ctx->r21, 0X0);
    // 0x80205464: sw          $v0, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r2;
    // 0x80205468: lw          $t9, 0x44($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X44);
    // 0x8020546C: lw          $t8, 0x0($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X0);
    // 0x80205470: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80205474: blez        $t9, L_802054B4
    if (SIGNED(ctx->r25) <= 0) {
        // 0x80205478: lw          $s3, 0x10($t8)
        ctx->r19 = MEM_W(ctx->r24, 0X10);
            goto L_802054B4;
    }
    // 0x80205478: lw          $s3, 0x10($t8)
    ctx->r19 = MEM_W(ctx->r24, 0X10);
    // 0x8020547C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80205480: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80205484:
    // 0x80205484: jal         0x80234F70
    // 0x80205488: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    static_3_80234F70(rdram, ctx);
        goto after_9;
    // 0x80205488: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_9:
    // 0x8020548C: lw          $t0, 0x0($s5)
    ctx->r8 = MEM_W(ctx->r21, 0X0);
    // 0x80205490: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80205494: addu        $t1, $t0, $s2
    ctx->r9 = ADD32(ctx->r8, ctx->r18);
    // 0x80205498: sh          $v0, 0x0($t1)
    MEM_H(0X0, ctx->r9) = ctx->r2;
    // 0x8020549C: lw          $s0, 0x0($s4)
    ctx->r16 = MEM_W(ctx->r20, 0X0);
    // 0x802054A0: addiu       $s2, $s2, 0x2
    ctx->r18 = ADD32(ctx->r18, 0X2);
    // 0x802054A4: lw          $t2, 0x44($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X44);
    // 0x802054A8: slt         $at, $s1, $t2
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x802054AC: bnel        $at, $zero, L_80205484
    if (ctx->r1 != 0) {
        // 0x802054B0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80205484;
    }
    goto skip_0;
    // 0x802054B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
L_802054B4:
    // 0x802054B4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_802054B8:
    // 0x802054B8: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x802054BC: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x802054C0: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x802054C4: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x802054C8: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x802054CC: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x802054D0: jr          $ra
    // 0x802054D4: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x802054D4: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void D_802351F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802351F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802351F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802351F8: jal         0x8023FC40
    // 0x802351FC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    static_3_8023FC40(rdram, ctx);
        goto after_0;
    // 0x802351FC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x80235200: lw          $s0, 0x8($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X8);
    // 0x80235204: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x80235208: beq         $s0, $zero, L_80235254
    if (ctx->r16 == 0) {
        // 0x8023520C: nop
    
            goto L_80235254;
    }
    // 0x8023520C: nop

L_80235210:
    // 0x80235210: lw          $t6, 0x10($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X10);
    // 0x80235214: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x80235218: bne         $s3, $t6, L_8023524C
    if (ctx->r19 != ctx->r14) {
        // 0x8023521C: nop
    
            goto L_8023524C;
    }
    // 0x8023521C: nop

    // 0x80235220: beq         $s1, $zero, L_80235238
    if (ctx->r17 == 0) {
        // 0x80235224: nop
    
            goto L_80235238;
    }
    // 0x80235224: nop

    // 0x80235228: lw          $t7, 0x8($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X8);
    // 0x8023522C: lw          $t8, 0x8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8);
    // 0x80235230: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80235234: sw          $t9, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r25;
L_80235238:
    // 0x80235238: jal         0x80237120
    // 0x8023523C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80237120(rdram, ctx);
        goto after_1;
    // 0x8023523C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80235240: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80235244: jal         0x80237150
    // 0x80235248: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    static_3_80237150(rdram, ctx);
        goto after_2;
    // 0x80235248: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_2:
L_8023524C:
    // 0x8023524C: bne         $s1, $zero, L_80235210
    if (ctx->r17 != 0) {
        // 0x80235250: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_80235210;
    }
    // 0x80235250: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
L_80235254:
    // 0x80235254: jal         0x8023FC40
    // 0x80235258: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    static_3_8023FC40(rdram, ctx);
        goto after_3;
    // 0x80235258: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_3:
    // 0x8023525C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80235260: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80235264: jr          $ra
    // 0x80235268: nop

    return;
    // 0x80235268: nop

    // 0x8023526C: jr          $ra
    // 0x80235270: nop

    return;
    // 0x80235270: nop

    // 0x80235274: jr          $ra
    // 0x80235278: nop

    return;
    // 0x80235278: nop

;}
RECOMP_FUNC void D_802A3908(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A3988: beql        $a1, $zero, L_802A399C
    if (ctx->r5 == 0) {
        // 0x802A398C: sw          $zero, 0xE0($a0)
        MEM_W(0XE0, ctx->r4) = 0;
            goto L_802A399C;
    }
    goto skip_0;
    // 0x802A398C: sw          $zero, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = 0;
    skip_0:
    // 0x802A3990: jr          $ra
    // 0x802A3994: sw          $a1, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->r5;
    return;
    // 0x802A3994: sw          $a1, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->r5;
    // 0x802A3998: sw          $zero, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = 0;
L_802A399C:
    // 0x802A399C: jr          $ra
    // 0x802A39A0: nop

    return;
    // 0x802A39A0: nop

;}
RECOMP_FUNC void D_802D4600(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D4680: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802D4684: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802D4688: bltz        $a0, L_802D469C
    if (SIGNED(ctx->r4) < 0) {
        // 0x802D468C: or          $a1, $a0, $zero
        ctx->r5 = ctx->r4 | 0;
            goto L_802D469C;
    }
    // 0x802D468C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x802D4690: slti        $at, $a0, 0x2
    ctx->r1 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x802D4694: bne         $at, $zero, L_802D46B0
    if (ctx->r1 != 0) {
        // 0x802D4698: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_802D46B0;
    }
    // 0x802D4698: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
L_802D469C:
    // 0x802D469C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802D46A0: jal         0x80231A24
    // 0x802D46A4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x802D46A4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x802D46A8: b           L_802D46E4
    // 0x802D46AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802D46E4;
    // 0x802D46AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802D46B0:
    // 0x802D46B0: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x802D46B4: subu        $t7, $t7, $a1
    ctx->r15 = SUB32(ctx->r15, ctx->r5);
    // 0x802D46B8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x802D46BC: addu        $t7, $t7, $a1
    ctx->r15 = ADD32(ctx->r15, ctx->r5);
    // 0x802D46C0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x802D46C4: addu        $t7, $t7, $a1
    ctx->r15 = ADD32(ctx->r15, ctx->r5);
    // 0x802D46C8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x802D46CC: addu        $t7, $t7, $a1
    ctx->r15 = ADD32(ctx->r15, ctx->r5);
    // 0x802D46D0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x802D46D4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D46D8: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x802D46DC: sw          $t6, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r14;
    // 0x802D46E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802D46E4:
    // 0x802D46E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802D46E8: jr          $ra
    // 0x802D46EC: nop

    return;
    // 0x802D46EC: nop

;}
RECOMP_FUNC void D_80282CB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282D38: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80282D3C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80282D40: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80282D44: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80282D48: lw          $v0, 0xB0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XB0);
    // 0x80282D4C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80282D50: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80282D54: lw          $t9, 0x1C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X1C);
    // 0x80282D58: lh          $t6, 0x18($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X18);
    // 0x80282D5C: jalr        $t9
    // 0x80282D60: addu        $a0, $t6, $a0
    ctx->r4 = ADD32(ctx->r14, ctx->r4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80282D60: addu        $a0, $t6, $a0
    ctx->r4 = ADD32(ctx->r14, ctx->r4);
    after_0:
    // 0x80282D64: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    // 0x80282D68: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80282D6C: lh          $t7, 0x18($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X18);
    // 0x80282D70: lw          $t9, 0x1C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X1C);
    // 0x80282D74: addu        $a0, $t7, $s0
    ctx->r4 = ADD32(ctx->r15, ctx->r16);
    // 0x80282D78: jalr        $t9
    // 0x80282D7C: addiu       $a0, $a0, 0xF0
    ctx->r4 = ADD32(ctx->r4, 0XF0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x80282D7C: addiu       $a0, $a0, 0xF0
    ctx->r4 = ADD32(ctx->r4, 0XF0);
    after_1:
    // 0x80282D80: addiu       $a0, $s0, 0x4
    ctx->r4 = ADD32(ctx->r16, 0X4);
    // 0x80282D84: jal         0x80228DE0
    // 0x80282D88: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_80228DE0(rdram, ctx);
        goto after_2;
    // 0x80282D88: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_2:
    // 0x80282D8C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80282D90: sb          $t8, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r24;
    // 0x80282D94: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80282D98: jal         0x80228DE0
    // 0x80282D9C: addiu       $a0, $s0, 0xF4
    ctx->r4 = ADD32(ctx->r16, 0XF4);
    func_80228DE0(rdram, ctx);
        goto after_3;
    // 0x80282D9C: addiu       $a0, $s0, 0xF4
    ctx->r4 = ADD32(ctx->r16, 0XF4);
    after_3:
    // 0x80282DA0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80282DA4: sb          $t0, 0x19C($s0)
    MEM_B(0X19C, ctx->r16) = ctx->r8;
    // 0x80282DA8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80282DAC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80282DB0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80282DB4: jr          $ra
    // 0x80282DB8: nop

    return;
    // 0x80282DB8: nop

;}
RECOMP_FUNC void D_80233D40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80233D40: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x80233D44: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x80233D48: lw          $t6, 0x0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X0);
    // 0x80233D4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80233D50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80233D54: bne         $t6, $zero, L_80233DBC
    if (ctx->r14 != 0) {
        // 0x80233D58: lui         $t0, 0x0
        ctx->r8 = S32(0X0 << 16);
            goto L_80233DBC;
    }
    // 0x80233D58: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x80233D5C: addiu       $t0, $t0, 0x0
    ctx->r8 = ADD32(ctx->r8, 0X0);
    // 0x80233D60: lhu         $a0, 0x2C($t0)
    ctx->r4 = MEM_HU(ctx->r8, 0X2C);
    // 0x80233D64: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x80233D68: subu        $t7, $t7, $a0
    ctx->r15 = SUB32(ctx->r15, ctx->r4);
    // 0x80233D6C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80233D70: addu        $t7, $t7, $a0
    ctx->r15 = ADD32(ctx->r15, ctx->r4);
    // 0x80233D74: jal         0x8022BA58
    // 0x80233D78: sll         $a0, $t7, 2
    ctx->r4 = S32(ctx->r15 << 2);
    static_3_8022BA58(rdram, ctx);
        goto after_0;
    // 0x80233D78: sll         $a0, $t7, 2
    ctx->r4 = S32(ctx->r15 << 2);
    after_0:
    // 0x80233D7C: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x80233D80: addiu       $t0, $t0, 0x0
    ctx->r8 = ADD32(ctx->r8, 0X0);
    // 0x80233D84: lhu         $a2, 0x2C($t0)
    ctx->r6 = MEM_HU(ctx->r8, 0X2C);
    // 0x80233D88: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x80233D8C: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x80233D90: sll         $t8, $a2, 2
    ctx->r24 = S32(ctx->r6 << 2);
    // 0x80233D94: subu        $t8, $t8, $a2
    ctx->r24 = SUB32(ctx->r24, ctx->r6);
    // 0x80233D98: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x80233D9C: addu        $t8, $t8, $a2
    ctx->r24 = ADD32(ctx->r24, ctx->r6);
    // 0x80233DA0: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x80233DA4: sll         $a2, $t8, 2
    ctx->r6 = S32(ctx->r24 << 2);
    // 0x80233DA8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80233DAC: jal         0x8022B780
    // 0x80233DB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_8022B780(rdram, ctx);
        goto after_1;
    // 0x80233DB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80233DB4: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x80233DB8: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
L_80233DBC:
    // 0x80233DBC: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x80233DC0: addiu       $t0, $t0, 0x0
    ctx->r8 = ADD32(ctx->r8, 0X0);
    // 0x80233DC4: lhu         $t9, 0x2C($t0)
    ctx->r25 = MEM_HU(ctx->r8, 0X2C);
    // 0x80233DC8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80233DCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80233DD0: blez        $t9, L_80233E40
    if (SIGNED(ctx->r25) <= 0) {
        // 0x80233DD4: addiu       $a2, $zero, 0xFFF
        ctx->r6 = ADD32(0, 0XFFF);
            goto L_80233E40;
    }
    // 0x80233DD4: addiu       $a2, $zero, 0xFFF
    ctx->r6 = ADD32(0, 0XFFF);
    // 0x80233DD8: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x80233DDC: lw          $t1, 0x0($a3)
    ctx->r9 = MEM_W(ctx->r7, 0X0);
L_80233DE0:
    // 0x80233DE0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80233DE4: addu        $v0, $a1, $t1
    ctx->r2 = ADD32(ctx->r5, ctx->r9);
    // 0x80233DE8: sh          $zero, 0x6($v0)
    MEM_H(0X6, ctx->r2) = 0;
    // 0x80233DEC: sh          $zero, 0xA($v0)
    MEM_H(0XA, ctx->r2) = 0;
    // 0x80233DF0: lh          $t2, 0x6($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X6);
    // 0x80233DF4: lh          $t3, 0xA($v0)
    ctx->r11 = MEM_H(ctx->r2, 0XA);
    // 0x80233DF8: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x80233DFC: sb          $zero, 0x1($v0)
    MEM_B(0X1, ctx->r2) = 0;
    // 0x80233E00: sb          $zero, 0x2($v0)
    MEM_B(0X2, ctx->r2) = 0;
    // 0x80233E04: sb          $v1, 0xE($v0)
    MEM_B(0XE, ctx->r2) = ctx->r3;
    // 0x80233E08: sb          $v1, 0xF($v0)
    MEM_B(0XF, ctx->r2) = ctx->r3;
    // 0x80233E0C: sb          $v1, 0x10($v0)
    MEM_B(0X10, ctx->r2) = ctx->r3;
    // 0x80233E10: sb          $v1, 0x11($v0)
    MEM_B(0X11, ctx->r2) = ctx->r3;
    // 0x80233E14: sh          $a2, 0xC($v0)
    MEM_H(0XC, ctx->r2) = ctx->r6;
    // 0x80233E18: sw          $zero, 0x14($v0)
    MEM_W(0X14, ctx->r2) = 0;
    // 0x80233E1C: sw          $zero, 0x5C($v0)
    MEM_W(0X5C, ctx->r2) = 0;
    // 0x80233E20: sw          $zero, 0x60($v0)
    MEM_W(0X60, ctx->r2) = 0;
    // 0x80233E24: sh          $t2, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r10;
    // 0x80233E28: sh          $t3, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r11;
    // 0x80233E2C: lhu         $t4, 0x2C($t0)
    ctx->r12 = MEM_HU(ctx->r8, 0X2C);
    // 0x80233E30: addiu       $a1, $a1, 0x64
    ctx->r5 = ADD32(ctx->r5, 0X64);
    // 0x80233E34: slt         $at, $a0, $t4
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x80233E38: bnel        $at, $zero, L_80233DE0
    if (ctx->r1 != 0) {
        // 0x80233E3C: lw          $t1, 0x0($a3)
        ctx->r9 = MEM_W(ctx->r7, 0X0);
            goto L_80233DE0;
    }
    goto skip_0;
    // 0x80233E3C: lw          $t1, 0x0($a3)
    ctx->r9 = MEM_W(ctx->r7, 0X0);
    skip_0:
L_80233E40:
    // 0x80233E40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80233E44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80233E48: jr          $ra
    // 0x80233E4C: nop

    return;
    // 0x80233E4C: nop

;}
RECOMP_FUNC void D_802D2880(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D2900: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802D2904: jr          $ra
    // 0x802D2908: swc1        $f12, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f12.u32l;
    return;
    // 0x802D2908: swc1        $f12, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void D_802EBDD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EBE58: lwc1        $f0, 0xD8($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XD8);
    // 0x802EBE5C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802EBE60: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802EBE64: c.eq.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl == ctx->f0.fl;
    // 0x802EBE68: nop

    // 0x802EBE6C: bc1fl       L_802EBE8C
    if (!c1cs) {
        // 0x802EBE70: div.s       $f10, $f0, $f12
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = DIV_S(ctx->f0.fl, ctx->f12.fl);
            goto L_802EBE8C;
    }
    goto skip_0;
    // 0x802EBE70: div.s       $f10, $f0, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = DIV_S(ctx->f0.fl, ctx->f12.fl);
    skip_0:
    // 0x802EBE74: lwc1        $f6, 0xD4($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XD4);
    // 0x802EBE78: lwc1        $f8, 0xE0($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0XE0);
    // 0x802EBE7C: swc1        $f6, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = ctx->f6.u32l;
    // 0x802EBE80: lwc1        $f0, 0xD8($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XD8);
    // 0x802EBE84: swc1        $f8, 0xDC($a0)
    MEM_W(0XDC, ctx->r4) = ctx->f8.u32l;
    // 0x802EBE88: div.s       $f10, $f0, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = DIV_S(ctx->f0.fl, ctx->f12.fl);
L_802EBE8C:
    // 0x802EBE8C: lwc1        $f16, 0xDC($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0XDC);
    // 0x802EBE90: mul.s       $f18, $f16, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x802EBE94: swc1        $f18, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->f18.u32l;
    // 0x802EBE98: jr          $ra
    // 0x802EBE9C: swc1        $f10, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->f10.u32l;
    return;
    // 0x802EBE9C: swc1        $f10, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->f10.u32l;
;}
RECOMP_FUNC void D_8027E898(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027E910: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027E914: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027E918: lw          $a1, 0x65FC($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X65FC);
    // 0x8027E91C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8027E920: bne         $a1, $zero, L_8027E938
    if (ctx->r5 != 0) {
        // 0x8027E924: nop
    
            goto L_8027E938;
    }
    // 0x8027E924: nop

    // 0x8027E928: jal         0x80231A24
    // 0x8027E92C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x8027E92C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x8027E930: b           L_8027E940
    // 0x8027E934: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8027E940;
    // 0x8027E934: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8027E938:
    // 0x8027E938: jal         0x803087A8
    // 0x8027E93C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    static_3_803087A8(rdram, ctx);
        goto after_1;
    // 0x8027E93C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_1:
L_8027E940:
    // 0x8027E940: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027E944: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027E948: jr          $ra
    // 0x8027E94C: nop

    return;
    // 0x8027E94C: nop

;}
RECOMP_FUNC void D_802A239C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A241C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802A2420: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802A2424: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802A2428: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802A242C: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x802A2430: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802A2434: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802A2438: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802A243C: sb          $t6, 0x1D($a0)
    MEM_B(0X1D, ctx->r4) = ctx->r14;
    // 0x802A2440: swc1        $f0, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->f0.u32l;
    // 0x802A2444: swc1        $f0, 0xE4($a0)
    MEM_W(0XE4, ctx->r4) = ctx->f0.u32l;
    // 0x802A2448: swc1        $f0, 0x124($a0)
    MEM_W(0X124, ctx->r4) = ctx->f0.u32l;
    // 0x802A244C: jal         0x8023499C
    // 0x802A2450: swc1        $f4, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->f4.u32l;
    static_3_8023499C(rdram, ctx);
        goto after_0;
    // 0x802A2450: swc1        $f4, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->f4.u32l;
    after_0:
    // 0x802A2454: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x802A2458: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802A245C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A2460: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x802A2464: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x802A2468: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x802A246C: nop

    // 0x802A2470: bne         $t8, $zero, L_802A2484
    if (ctx->r24 != 0) {
        // 0x802A2474: nop
    
            goto L_802A2484;
    }
    // 0x802A2474: nop

    // 0x802A2478: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A247C: b           L_802A24B4
    // 0x802A2480: swc1        $f16, 0xEC($s0)
    MEM_W(0XEC, ctx->r16) = ctx->f16.u32l;
        goto L_802A24B4;
    // 0x802A2480: swc1        $f16, 0xEC($s0)
    MEM_W(0XEC, ctx->r16) = ctx->f16.u32l;
L_802A2484:
    // 0x802A2484: jal         0x8023499C
    // 0x802A2488: nop

    static_3_8023499C(rdram, ctx);
        goto after_1;
    // 0x802A2488: nop

    after_1:
    // 0x802A248C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A2490: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A2494: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x802A2498: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802A249C: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x802A24A0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A24A4: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A24A8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802A24AC: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x802A24B0: swc1        $f16, 0xEC($s0)
    MEM_W(0XEC, ctx->r16) = ctx->f16.u32l;
L_802A24B4:
    // 0x802A24B4: jal         0x8023499C
    // 0x802A24B8: nop

    static_3_8023499C(rdram, ctx);
        goto after_2;
    // 0x802A24B8: nop

    after_2:
    // 0x802A24BC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A24C0: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A24C4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802A24C8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802A24CC: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x802A24D0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A24D4: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A24D8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A24DC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802A24E0: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x802A24E4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802A24E8: swc1        $f16, 0xF0($s0)
    MEM_W(0XF0, ctx->r16) = ctx->f16.u32l;
    // 0x802A24EC: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A24F0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A24F4: swc1        $f18, 0xF4($s0)
    MEM_W(0XF4, ctx->r16) = ctx->f18.u32l;
    // 0x802A24F8: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A24FC: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x802A2500: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802A2504: swc1        $f8, 0x118($s0)
    MEM_W(0X118, ctx->r16) = ctx->f8.u32l;
    // 0x802A2508: swc1        $f4, 0xF8($s0)
    MEM_W(0XF8, ctx->r16) = ctx->f4.u32l;
    // 0x802A250C: jal         0x8023499C
    // 0x802A2510: swc1        $f6, 0x104($s0)
    MEM_W(0X104, ctx->r16) = ctx->f6.u32l;
    static_3_8023499C(rdram, ctx);
        goto after_3;
    // 0x802A2510: swc1        $f6, 0x104($s0)
    MEM_W(0X104, ctx->r16) = ctx->f6.u32l;
    after_3:
    // 0x802A2514: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802A2518: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802A251C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A2520: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A2524: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x802A2528: nop

    // 0x802A252C: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x802A2530: jal         0x8023499C
    // 0x802A2534: swc1        $f4, 0x11C($s0)
    MEM_W(0X11C, ctx->r16) = ctx->f4.u32l;
    static_3_8023499C(rdram, ctx);
        goto after_4;
    // 0x802A2534: swc1        $f4, 0x11C($s0)
    MEM_W(0X11C, ctx->r16) = ctx->f4.u32l;
    after_4:
    // 0x802A2538: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802A253C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802A2540: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A2544: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A2548: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x802A254C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802A2550: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802A2554: sb          $zero, 0x12C($s0)
    MEM_B(0X12C, ctx->r16) = 0;
    // 0x802A2558: swc1        $f18, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f18.u32l;
    // 0x802A255C: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x802A2560: swc1        $f16, 0x120($s0)
    MEM_W(0X120, ctx->r16) = ctx->f16.u32l;
    // 0x802A2564: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802A2568: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802A256C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802A2570: jr          $ra
    // 0x802A2574: nop

    return;
    // 0x802A2574: nop

;}
RECOMP_FUNC void D_8022BE04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022BE04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022BE08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022BE0C: jal         0x8022B948
    // 0x8022BE10: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_8022B948(rdram, ctx);
        goto after_0;
    // 0x8022BE10: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x8022BE14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022BE18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022BE1C: jr          $ra
    // 0x8022BE20: nop

    return;
    // 0x8022BE20: nop

;}
RECOMP_FUNC void D_802940A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80294128: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8029412C: nop

    // 0x80294130: swc1        $f0, 0x104($a0)
    MEM_W(0X104, ctx->r4) = ctx->f0.u32l;
    // 0x80294134: jr          $ra
    // 0x80294138: swc1        $f0, 0x108($a0)
    MEM_W(0X108, ctx->r4) = ctx->f0.u32l;
    return;
    // 0x80294138: swc1        $f0, 0x108($a0)
    MEM_W(0X108, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void D_8022A734(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022A734: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8022A738: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x8022A73C: lwc1        $f12, 0x14($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8022A740: lwc1        $f4, 0x4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4);
    // 0x8022A744: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x8022A748: add.s       $f0, $f12, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f12.fl + ctx->f12.fl;
    // 0x8022A74C: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8022A750: sub.s       $f2, $f14, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f14.fl - ctx->f4.fl;
    // 0x8022A754: div.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
    // 0x8022A758: swc1        $f6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f6.u32l;
    // 0x8022A75C: lwc1        $f10, 0xC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC);
    // 0x8022A760: lwc1        $f8, 0x10($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X10);
    // 0x8022A764: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8022A768: div.s       $f4, $f0, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f16.fl);
    // 0x8022A76C: swc1        $f4, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f4.u32l;
    // 0x8022A770: lwc1        $f6, 0x4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4);
    // 0x8022A774: add.s       $f8, $f14, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f14.fl + ctx->f6.fl;
    // 0x8022A778: div.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f2.fl);
    // 0x8022A77C: swc1        $f10, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f10.u32l;
    // 0x8022A780: lwc1        $f6, 0xC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC);
    // 0x8022A784: lwc1        $f4, 0x10($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X10);
    // 0x8022A788: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8022A78C: div.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f16.fl);
    // 0x8022A790: swc1        $f10, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f10.u32l;
    // 0x8022A794: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8022A798: add.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f12.fl;
    // 0x8022A79C: sub.s       $f18, $f4, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f4.fl - ctx->f12.fl;
    // 0x8022A7A0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8022A7A4: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x8022A7A8: swc1        $f4, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f4.u32l;
    // 0x8022A7AC: div.s       $f10, $f8, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f18.fl);
    // 0x8022A7B0: swc1        $f10, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f10.u32l;
    // 0x8022A7B4: lwc1        $f6, 0x18($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8022A7B8: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x8022A7BC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8022A7C0: nop

    // 0x8022A7C4: swc1        $f0, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f0.u32l;
    // 0x8022A7C8: swc1        $f0, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f0.u32l;
    // 0x8022A7CC: swc1        $f0, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f0.u32l;
    // 0x8022A7D0: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x8022A7D4: swc1        $f0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f0.u32l;
    // 0x8022A7D8: div.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f18.fl);
    // 0x8022A7DC: swc1        $f0, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f0.u32l;
    // 0x8022A7E0: swc1        $f0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f0.u32l;
    // 0x8022A7E4: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
    // 0x8022A7E8: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
    // 0x8022A7EC: swc1        $f0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f0.u32l;
    // 0x8022A7F0: jr          $ra
    // 0x8022A7F4: swc1        $f4, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f4.u32l;
    return;
    // 0x8022A7F4: swc1        $f4, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void D_80277A38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80277AB0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80277AB4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80277AB8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80277ABC: lw          $v1, 0x32A4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X32A4);
    // 0x80277AC0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80277AC4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80277AC8: beq         $v1, $at, L_80277AD8
    if (ctx->r3 == ctx->r1) {
        // 0x80277ACC: addiu       $at, $zero, 0x8
        ctx->r1 = ADD32(0, 0X8);
            goto L_80277AD8;
    }
    // 0x80277ACC: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x80277AD0: bnel        $v1, $at, L_80277CE8
    if (ctx->r3 != ctx->r1) {
        // 0x80277AD4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80277CE8;
    }
    goto skip_0;
    // 0x80277AD4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
L_80277AD8:
    // 0x80277AD8: lbu         $t6, 0x78C($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X78C);
    // 0x80277ADC: addiu       $a0, $s0, 0x6D0
    ctx->r4 = ADD32(ctx->r16, 0X6D0);
    // 0x80277AE0: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x80277AE4: beq         $t6, $zero, L_80277CAC
    if (ctx->r14 == 0) {
        // 0x80277AE8: nop
    
            goto L_80277CAC;
    }
    // 0x80277AE8: nop

    // 0x80277AEC: lw          $a1, 0x32A8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X32A8);
    // 0x80277AF0: lw          $a2, 0x32B0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X32B0);
    // 0x80277AF4: jal         0x802F7AD0
    // 0x80277AF8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    static_3_802F7AD0(rdram, ctx);
        goto after_0;
    // 0x80277AF8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x80277AFC: andi        $t7, $v0, 0xFF
    ctx->r15 = ctx->r2 & 0XFF;
    // 0x80277B00: bnel        $t7, $zero, L_80277CE8
    if (ctx->r15 != 0) {
        // 0x80277B04: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80277CE8;
    }
    goto skip_1;
    // 0x80277B04: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x80277B08: jal         0x8030C020
    // 0x80277B0C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_8030C020(rdram, ctx);
        goto after_1;
    // 0x80277B0C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x80277B10: jal         0x802F77CC
    // 0x80277B14: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    static_3_802F77CC(rdram, ctx);
        goto after_2;
    // 0x80277B14: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x80277B18: sb          $zero, 0x78C($s0)
    MEM_B(0X78C, ctx->r16) = 0;
    // 0x80277B1C: jal         0x802A91F0
    // 0x80277B20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802A91F0(rdram, ctx);
        goto after_3;
    // 0x80277B20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80277B24: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x80277B28: lbu         $t8, 0x0($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X0);
    // 0x80277B2C: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x80277B30: addiu       $a0, $s0, 0x32BC
    ctx->r4 = ADD32(ctx->r16, 0X32BC);
    // 0x80277B34: beq         $t8, $zero, L_80277B5C
    if (ctx->r24 == 0) {
        // 0x80277B38: lui         $v0, 0x0
        ctx->r2 = S32(0X0 << 16);
            goto L_80277B5C;
    }
    // 0x80277B38: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x80277B3C: sw          $t9, 0x32A4($s0)
    MEM_W(0X32A4, ctx->r16) = ctx->r25;
    // 0x80277B40: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80277B44: addiu       $a2, $s0, 0x3350
    ctx->r6 = ADD32(ctx->r16, 0X3350);
    // 0x80277B48: jal         0x802CD478
    // 0x80277B4C: addiu       $a3, $s0, 0x340C
    ctx->r7 = ADD32(ctx->r16, 0X340C);
    static_3_802CD478(rdram, ctx);
        goto after_4;
    // 0x80277B4C: addiu       $a3, $s0, 0x340C
    ctx->r7 = ADD32(ctx->r16, 0X340C);
    after_4:
    // 0x80277B50: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80277B54: b           L_80277CE4
    // 0x80277B58: sb          $t0, 0x3343($s0)
    MEM_B(0X3343, ctx->r16) = ctx->r8;
        goto L_80277CE4;
    // 0x80277B58: sb          $t0, 0x3343($s0)
    MEM_B(0X3343, ctx->r16) = ctx->r8;
L_80277B5C:
    // 0x80277B5C: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80277B60: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x80277B64: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x80277B68: beq         $v0, $at, L_80277B84
    if (ctx->r2 == ctx->r1) {
        // 0x80277B6C: addiu       $a0, $s0, 0x32BC
        ctx->r4 = ADD32(ctx->r16, 0X32BC);
            goto L_80277B84;
    }
    // 0x80277B6C: addiu       $a0, $s0, 0x32BC
    ctx->r4 = ADD32(ctx->r16, 0X32BC);
    // 0x80277B70: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x80277B74: beq         $v0, $at, L_80277B84
    if (ctx->r2 == ctx->r1) {
        // 0x80277B78: addiu       $at, $zero, 0xE
        ctx->r1 = ADD32(0, 0XE);
            goto L_80277B84;
    }
    // 0x80277B78: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x80277B7C: bnel        $v0, $at, L_80277BA8
    if (ctx->r2 != ctx->r1) {
        // 0x80277B80: lbu         $t3, 0x3624($s0)
        ctx->r11 = MEM_BU(ctx->r16, 0X3624);
            goto L_80277BA8;
    }
    goto skip_2;
    // 0x80277B80: lbu         $t3, 0x3624($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X3624);
    skip_2:
L_80277B84:
    // 0x80277B84: sw          $t1, 0x32A4($s0)
    MEM_W(0X32A4, ctx->r16) = ctx->r9;
    // 0x80277B88: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80277B8C: addiu       $a2, $s0, 0x3350
    ctx->r6 = ADD32(ctx->r16, 0X3350);
    // 0x80277B90: jal         0x802CD478
    // 0x80277B94: addiu       $a3, $s0, 0x340C
    ctx->r7 = ADD32(ctx->r16, 0X340C);
    static_3_802CD478(rdram, ctx);
        goto after_5;
    // 0x80277B94: addiu       $a3, $s0, 0x340C
    ctx->r7 = ADD32(ctx->r16, 0X340C);
    after_5:
    // 0x80277B98: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80277B9C: b           L_80277CE4
    // 0x80277BA0: sb          $t2, 0x3343($s0)
    MEM_B(0X3343, ctx->r16) = ctx->r10;
        goto L_80277CE4;
    // 0x80277BA0: sb          $t2, 0x3343($s0)
    MEM_B(0X3343, ctx->r16) = ctx->r10;
    // 0x80277BA4: lbu         $t3, 0x3624($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X3624);
L_80277BA8:
    // 0x80277BA8: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80277BAC: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80277BB0: beq         $t3, $at, L_80277C8C
    if (ctx->r11 == ctx->r1) {
        // 0x80277BB4: addiu       $a0, $s0, 0x32BC
        ctx->r4 = ADD32(ctx->r16, 0X32BC);
            goto L_80277C8C;
    }
    // 0x80277BB4: addiu       $a0, $s0, 0x32BC
    ctx->r4 = ADD32(ctx->r16, 0X32BC);
    // 0x80277BB8: lw          $v1, 0x65FC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X65FC);
    // 0x80277BBC: beq         $v1, $zero, L_80277BDC
    if (ctx->r3 == 0) {
        // 0x80277BC0: nop
    
            goto L_80277BDC;
    }
    // 0x80277BC0: nop

    // 0x80277BC4: lw          $v0, 0x6C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X6C);
    // 0x80277BC8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80277BCC: lw          $t9, 0xC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XC);
    // 0x80277BD0: lh          $t4, 0x8($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X8);
    // 0x80277BD4: jalr        $t9
    // 0x80277BD8: addu        $a0, $t4, $v1
    ctx->r4 = ADD32(ctx->r12, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x80277BD8: addu        $a0, $t4, $v1
    ctx->r4 = ADD32(ctx->r12, ctx->r3);
    after_6:
L_80277BDC:
    // 0x80277BDC: jal         0x8022C314
    // 0x80277BE0: nop

    static_3_8022C314(rdram, ctx);
        goto after_7;
    // 0x80277BE0: nop

    after_7:
    // 0x80277BE4: sw          $zero, 0x65FC($s0)
    MEM_W(0X65FC, ctx->r16) = 0;
    // 0x80277BE8: jal         0x802A9A38
    // 0x80277BEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802A9A38(rdram, ctx);
        goto after_8;
    // 0x80277BEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80277BF0: jal         0x802A88C4
    // 0x80277BF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802A88C4(rdram, ctx);
        goto after_9;
    // 0x80277BF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80277BF8: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x80277BFC: sw          $t5, 0x32A4($s0)
    MEM_W(0X32A4, ctx->r16) = ctx->r13;
    // 0x80277C00: jal         0x802A8CC8
    // 0x80277C04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802A8CC8(rdram, ctx);
        goto after_10;
    // 0x80277C04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x80277C08: sw          $v0, 0x65FC($s0)
    MEM_W(0X65FC, ctx->r16) = ctx->r2;
    // 0x80277C0C: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x80277C10: lbu         $v1, 0x0($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X0);
    // 0x80277C14: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x80277C18: beq         $v1, $at, L_80277C34
    if (ctx->r3 == ctx->r1) {
        // 0x80277C1C: addiu       $at, $zero, 0xD
        ctx->r1 = ADD32(0, 0XD);
            goto L_80277C34;
    }
    // 0x80277C1C: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x80277C20: beq         $v1, $at, L_80277C34
    if (ctx->r3 == ctx->r1) {
        // 0x80277C24: addiu       $at, $zero, 0xE
        ctx->r1 = ADD32(0, 0XE);
            goto L_80277C34;
    }
    // 0x80277C24: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x80277C28: beq         $v1, $at, L_80277C34
    if (ctx->r3 == ctx->r1) {
        // 0x80277C2C: addiu       $at, $zero, 0x22
        ctx->r1 = ADD32(0, 0X22);
            goto L_80277C34;
    }
    // 0x80277C2C: addiu       $at, $zero, 0x22
    ctx->r1 = ADD32(0, 0X22);
    // 0x80277C30: bne         $v1, $at, L_80277C54
    if (ctx->r3 != ctx->r1) {
        // 0x80277C34: addiu       $at, $zero, 0x22
        ctx->r1 = ADD32(0, 0X22);
            goto L_80277C54;
    }
L_80277C34:
    // 0x80277C34: addiu       $at, $zero, 0x22
    ctx->r1 = ADD32(0, 0X22);
    // 0x80277C38: bne         $v1, $at, L_80277C44
    if (ctx->r3 != ctx->r1) {
        // 0x80277C3C: lui         $at, 0x0
        ctx->r1 = S32(0X0 << 16);
            goto L_80277C44;
    }
    // 0x80277C3C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80277C40: sh          $zero, 0x0($at)
    MEM_H(0X0, ctx->r1) = 0;
L_80277C44:
    // 0x80277C44: jal         0x802A9C04
    // 0x80277C48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802A9C04(rdram, ctx);
        goto after_11;
    // 0x80277C48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x80277C4C: b           L_80277CE8
    // 0x80277C50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80277CE8;
    // 0x80277C50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80277C54:
    // 0x80277C54: lw          $v1, 0x65FC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X65FC);
    // 0x80277C58: lwc1        $f0, 0x32A8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X32A8);
    // 0x80277C5C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80277C60: lw          $v0, 0x6C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X6C);
    // 0x80277C64: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80277C68: lw          $t9, 0x24($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X24);
    // 0x80277C6C: lh          $t6, 0x20($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X20);
    // 0x80277C70: jalr        $t9
    // 0x80277C74: addu        $a0, $t6, $v1
    ctx->r4 = ADD32(ctx->r14, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x80277C74: addu        $a0, $t6, $v1
    ctx->r4 = ADD32(ctx->r14, ctx->r3);
    after_12:
    // 0x80277C78: addiu       $a0, $s0, 0x78
    ctx->r4 = ADD32(ctx->r16, 0X78);
    // 0x80277C7C: jal         0x802902DC
    // 0x80277C80: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802902DC(rdram, ctx);
        goto after_13;
    // 0x80277C80: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_13:
    // 0x80277C84: b           L_80277CE8
    // 0x80277C88: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80277CE8;
    // 0x80277C88: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80277C8C:
    // 0x80277C8C: sw          $t7, 0x32A4($s0)
    MEM_W(0X32A4, ctx->r16) = ctx->r15;
    // 0x80277C90: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80277C94: addiu       $a2, $s0, 0x3350
    ctx->r6 = ADD32(ctx->r16, 0X3350);
    // 0x80277C98: jal         0x802CD478
    // 0x80277C9C: addiu       $a3, $s0, 0x340C
    ctx->r7 = ADD32(ctx->r16, 0X340C);
    static_3_802CD478(rdram, ctx);
        goto after_14;
    // 0x80277C9C: addiu       $a3, $s0, 0x340C
    ctx->r7 = ADD32(ctx->r16, 0X340C);
    after_14:
    // 0x80277CA0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80277CA4: b           L_80277CE4
    // 0x80277CA8: sb          $t8, 0x3343($s0)
    MEM_B(0X3343, ctx->r16) = ctx->r24;
        goto L_80277CE4;
    // 0x80277CA8: sb          $t8, 0x3343($s0)
    MEM_B(0X3343, ctx->r16) = ctx->r24;
L_80277CAC:
    // 0x80277CAC: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80277CB0: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x80277CB4: beq         $v0, $at, L_80277CCC
    if (ctx->r2 == ctx->r1) {
        // 0x80277CB8: addiu       $at, $zero, 0xE
        ctx->r1 = ADD32(0, 0XE);
            goto L_80277CCC;
    }
    // 0x80277CB8: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x80277CBC: beq         $v0, $at, L_80277CD4
    if (ctx->r2 == ctx->r1) {
        // 0x80277CC0: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_80277CD4;
    }
    // 0x80277CC0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80277CC4: b           L_80277CD4
    // 0x80277CC8: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
        goto L_80277CD4;
    // 0x80277CC8: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
L_80277CCC:
    // 0x80277CCC: b           L_80277CD4
    // 0x80277CD0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
        goto L_80277CD4;
    // 0x80277CD0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
L_80277CD4:
    // 0x80277CD4: jal         0x802F74C4
    // 0x80277CD8: addiu       $a0, $s0, 0x6D0
    ctx->r4 = ADD32(ctx->r16, 0X6D0);
    static_3_802F74C4(rdram, ctx);
        goto after_15;
    // 0x80277CD8: addiu       $a0, $s0, 0x6D0
    ctx->r4 = ADD32(ctx->r16, 0X6D0);
    after_15:
    // 0x80277CDC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80277CE0: sb          $t0, 0x78C($s0)
    MEM_B(0X78C, ctx->r16) = ctx->r8;
L_80277CE4:
    // 0x80277CE4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80277CE8:
    // 0x80277CE8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80277CEC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80277CF0: jr          $ra
    // 0x80277CF4: nop

    return;
    // 0x80277CF4: nop

;}
RECOMP_FUNC void D_802424FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802424FC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80242500: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80242504: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80242508: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8024250C: lui         $a2, 0x8024
    ctx->r6 = S32(0X8024 << 16);
    // 0x80242510: addiu       $a2, $a2, 0x3C24
    ctx->r6 = ADD32(ctx->r6, 0X3C24);
    // 0x80242514: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80242518: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8024251C: jal         0x80249920
    // 0x80242520: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    static_3_80249920(rdram, ctx);
        goto after_0;
    // 0x80242520: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_0:
    // 0x80242524: addiu       $t6, $zero, 0x50
    ctx->r14 = ADD32(0, 0X50);
    // 0x80242528: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8024252C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80242530: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80242534: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80242538: jal         0x80236CD0
    // 0x8024253C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    static_3_80236CD0(rdram, ctx);
        goto after_1;
    // 0x8024253C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x80242540: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80242544: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80242548: sw          $v0, 0x14($t0)
    MEM_W(0X14, ctx->r8) = ctx->r2;
    // 0x8024254C: sw          $v1, 0x38($t0)
    MEM_W(0X38, ctx->r8) = ctx->r3;
    // 0x80242550: sw          $zero, 0x48($t0)
    MEM_W(0X48, ctx->r8) = 0;
    // 0x80242554: sh          $v1, 0x1A($t0)
    MEM_H(0X1A, ctx->r8) = ctx->r3;
    // 0x80242558: sh          $v1, 0x28($t0)
    MEM_H(0X28, ctx->r8) = ctx->r3;
    // 0x8024255C: sh          $v1, 0x2E($t0)
    MEM_H(0X2E, ctx->r8) = ctx->r3;
    // 0x80242560: sh          $v1, 0x1C($t0)
    MEM_H(0X1C, ctx->r8) = ctx->r3;
    // 0x80242564: sh          $v1, 0x1E($t0)
    MEM_H(0X1E, ctx->r8) = ctx->r3;
    // 0x80242568: sh          $zero, 0x20($t0)
    MEM_H(0X20, ctx->r8) = 0;
    // 0x8024256C: sh          $zero, 0x22($t0)
    MEM_H(0X22, ctx->r8) = 0;
    // 0x80242570: sh          $v1, 0x26($t0)
    MEM_H(0X26, ctx->r8) = ctx->r3;
    // 0x80242574: sh          $zero, 0x24($t0)
    MEM_H(0X24, ctx->r8) = 0;
    // 0x80242578: sw          $zero, 0x30($t0)
    MEM_W(0X30, ctx->r8) = 0;
    // 0x8024257C: sw          $zero, 0x34($t0)
    MEM_W(0X34, ctx->r8) = 0;
    // 0x80242580: sh          $zero, 0x18($t0)
    MEM_H(0X18, ctx->r8) = 0;
    // 0x80242584: sw          $zero, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = 0;
    // 0x80242588: sw          $zero, 0x40($t0)
    MEM_W(0X40, ctx->r8) = 0;
    // 0x8024258C: sw          $zero, 0x44($t0)
    MEM_W(0X44, ctx->r8) = 0;
    // 0x80242590: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80242594: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80242598: jr          $ra
    // 0x8024259C: nop

    return;
    // 0x8024259C: nop

;}
RECOMP_FUNC void D_80242454(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80242454: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80242458: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8024245C: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80242460: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80242464: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80242468: lui         $a2, 0x8024
    ctx->r6 = S32(0X8024 << 16);
    // 0x8024246C: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x80242470: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80242474: addiu       $a1, $a1, 0x336C
    ctx->r5 = ADD32(ctx->r5, 0X336C);
    // 0x80242478: addiu       $a2, $a2, 0x2CC0
    ctx->r6 = ADD32(ctx->r6, 0X2CC0);
    // 0x8024247C: jal         0x80249920
    // 0x80242480: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_80249920(rdram, ctx);
        goto after_0;
    // 0x80242480: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x80242484: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x80242488: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8024248C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80242490: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80242494: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x80242498: jal         0x80236CD0
    // 0x8024249C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    static_3_80236CD0(rdram, ctx);
        goto after_1;
    // 0x8024249C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x802424A0: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x802424A4: addiu       $t7, $zero, 0x20
    ctx->r15 = ADD32(0, 0X20);
    // 0x802424A8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x802424AC: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x802424B0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802424B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802424B8: jal         0x80236CD0
    // 0x802424BC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    static_3_80236CD0(rdram, ctx);
        goto after_2;
    // 0x802424BC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x802424C0: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x802424C4: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x802424C8: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x802424CC: jalr        $t9
    // 0x802424D0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x802424D0: nop

    after_3:
    // 0x802424D4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802424D8: sw          $v0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r2;
    // 0x802424DC: sw          $zero, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = 0;
    // 0x802424E0: sw          $t8, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r24;
    // 0x802424E4: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x802424E8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802424EC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802424F0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802424F4: jr          $ra
    // 0x802424F8: nop

    return;
    // 0x802424F8: nop

;}
