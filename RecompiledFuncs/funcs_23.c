#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void D_802A7D64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A7DE4: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x802A7DE8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A7DEC: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A7DF0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A7DF4: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A7DF8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A7DFC: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A7E00: lui         $at, 0x430C
    ctx->r1 = S32(0X430C << 16);
    // 0x802A7E04: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802A7E08: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x802A7E0C: sw          $s0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r16;
    // 0x802A7E10: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x802A7E14: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802A7E18: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802A7E1C: sdc1        $f28, 0x58($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X58, ctx->r29);
    // 0x802A7E20: sdc1        $f26, 0x50($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X50, ctx->r29);
    // 0x802A7E24: sdc1        $f24, 0x48($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X48, ctx->r29);
    // 0x802A7E28: sdc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X40, ctx->r29);
    // 0x802A7E2C: sdc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X38, ctx->r29);
    // 0x802A7E30: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x802A7E34: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x802A7E38: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802A7E3C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x802A7E40: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x802A7E44: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    // 0x802A7E48: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x802A7E4C: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x802A7E50: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x802A7E54: jal         0x80308530
    // 0x802A7E58: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    static_3_80308530(rdram, ctx);
        goto after_0;
    // 0x802A7E58: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    after_0:
    // 0x802A7E5C: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x802A7E60: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x802A7E64: sw          $v0, 0x7FA8($s0)
    MEM_W(0X7FA8, ctx->r16) = ctx->r2;
    // 0x802A7E68: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A7E6C: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A7E70: lui         $at, 0xC38B
    ctx->r1 = S32(0XC38B << 16);
    // 0x802A7E74: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802A7E78: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x802A7E7C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802A7E80: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802A7E84: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802A7E88: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x802A7E8C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x802A7E90: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802A7E94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802A7E98: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802A7E9C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x802A7EA0: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x802A7EA4: swc1        $f20, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f20.u32l;
    // 0x802A7EA8: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    // 0x802A7EAC: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
    // 0x802A7EB0: jal         0x80308530
    // 0x802A7EB4: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    static_3_80308530(rdram, ctx);
        goto after_1;
    // 0x802A7EB4: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x802A7EB8: sw          $v0, 0x7FAC($s0)
    MEM_W(0X7FAC, ctx->r16) = ctx->r2;
    // 0x802A7EBC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A7EC0: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A7EC4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A7EC8: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A7ECC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A7ED0: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A7ED4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x802A7ED8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x802A7EDC: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x802A7EE0: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x802A7EE4: swc1        $f20, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f20.u32l;
    // 0x802A7EE8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802A7EEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802A7EF0: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x802A7EF4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x802A7EF8: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x802A7EFC: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x802A7F00: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x802A7F04: jal         0x80308530
    // 0x802A7F08: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    static_3_80308530(rdram, ctx);
        goto after_2;
    // 0x802A7F08: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    after_2:
    // 0x802A7F0C: sw          $v0, 0x7FB0($s0)
    MEM_W(0X7FB0, ctx->r16) = ctx->r2;
    // 0x802A7F10: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A7F14: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A7F18: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A7F1C: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A7F20: lui         $at, 0x442A
    ctx->r1 = S32(0X442A << 16);
    // 0x802A7F24: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802A7F28: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x802A7F2C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x802A7F30: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x802A7F34: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x802A7F38: swc1        $f20, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f20.u32l;
    // 0x802A7F3C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802A7F40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802A7F44: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x802A7F48: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x802A7F4C: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x802A7F50: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    // 0x802A7F54: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
    // 0x802A7F58: jal         0x80308530
    // 0x802A7F5C: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    static_3_80308530(rdram, ctx);
        goto after_3;
    // 0x802A7F5C: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x802A7F60: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A7F64: lwc1        $f20, 0x0($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A7F68: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A7F6C: lwc1        $f22, 0x0($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A7F70: sw          $v0, 0x7FB4($s0)
    MEM_W(0X7FB4, ctx->r16) = ctx->r2;
    // 0x802A7F74: sb          $zero, 0x7FCC($s0)
    MEM_B(0X7FCC, ctx->r16) = 0;
    // 0x802A7F78: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    // 0x802A7F7C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802A7F80: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802A7F84: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x802A7F88: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x802A7F8C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802A7F90: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802A7F94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802A7F98: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x802A7F9C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x802A7FA0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802A7FA4: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x802A7FA8: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x802A7FAC: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x802A7FB0: jal         0x80308530
    // 0x802A7FB4: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    static_3_80308530(rdram, ctx);
        goto after_4;
    // 0x802A7FB4: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    after_4:
    // 0x802A7FB8: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x802A7FBC: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x802A7FC0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802A7FC4: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x802A7FC8: sw          $v0, 0x7FB8($s0)
    MEM_W(0X7FB8, ctx->r16) = ctx->r2;
    // 0x802A7FCC: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x802A7FD0: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802A7FD4: swc1        $f22, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f22.u32l;
    // 0x802A7FD8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802A7FDC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802A7FE0: swc1        $f24, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f24.u32l;
    // 0x802A7FE4: jal         0x802E77B4
    // 0x802A7FE8: swc1        $f26, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f26.u32l;
    static_3_802E77B4(rdram, ctx);
        goto after_5;
    // 0x802A7FE8: swc1        $f26, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f26.u32l;
    after_5:
    // 0x802A7FEC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A7FF0: lwc1        $f28, 0x0($at)
    ctx->f28.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A7FF4: lw          $a0, 0x7FB8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X7FB8);
    // 0x802A7FF8: swc1        $f26, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f26.u32l;
    // 0x802A7FFC: mfc1        $a2, $f28
    ctx->r6 = (int32_t)ctx->f28.u32l;
    // 0x802A8000: mfc1        $a3, $f28
    ctx->r7 = (int32_t)ctx->f28.u32l;
    // 0x802A8004: swc1        $f24, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f24.u32l;
    // 0x802A8008: swc1        $f22, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f22.u32l;
    // 0x802A800C: jal         0x802E77B4
    // 0x802A8010: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802E77B4(rdram, ctx);
        goto after_6;
    // 0x802A8010: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x802A8014: lw          $a0, 0x7FB8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X7FB8);
    // 0x802A8018: mfc1        $a2, $f28
    ctx->r6 = (int32_t)ctx->f28.u32l;
    // 0x802A801C: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802A8020: swc1        $f26, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f26.u32l;
    // 0x802A8024: swc1        $f24, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f24.u32l;
    // 0x802A8028: swc1        $f22, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f22.u32l;
    // 0x802A802C: jal         0x802E77B4
    // 0x802A8030: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802E77B4(rdram, ctx);
        goto after_7;
    // 0x802A8030: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_7:
    // 0x802A8034: lw          $a0, 0x7FB8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X7FB8);
    // 0x802A8038: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x802A803C: mfc1        $a3, $f28
    ctx->r7 = (int32_t)ctx->f28.u32l;
    // 0x802A8040: swc1        $f26, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f26.u32l;
    // 0x802A8044: swc1        $f24, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f24.u32l;
    // 0x802A8048: swc1        $f22, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f22.u32l;
    // 0x802A804C: jal         0x802E77B4
    // 0x802A8050: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_802E77B4(rdram, ctx);
        goto after_8;
    // 0x802A8050: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_8:
    // 0x802A8054: lw          $a0, 0x7FB8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X7FB8);
    // 0x802A8058: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x802A805C: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802A8060: swc1        $f26, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f26.u32l;
    // 0x802A8064: swc1        $f24, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f24.u32l;
    // 0x802A8068: swc1        $f22, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f22.u32l;
    // 0x802A806C: jal         0x802E77B4
    // 0x802A8070: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    static_3_802E77B4(rdram, ctx);
        goto after_9;
    // 0x802A8070: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_9:
    // 0x802A8074: lw          $a0, 0x7FB8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X7FB8);
    // 0x802A8078: mfc1        $a2, $f28
    ctx->r6 = (int32_t)ctx->f28.u32l;
    // 0x802A807C: mfc1        $a3, $f28
    ctx->r7 = (int32_t)ctx->f28.u32l;
    // 0x802A8080: swc1        $f26, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f26.u32l;
    // 0x802A8084: swc1        $f24, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f24.u32l;
    // 0x802A8088: swc1        $f22, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f22.u32l;
    // 0x802A808C: jal         0x802E77B4
    // 0x802A8090: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    static_3_802E77B4(rdram, ctx);
        goto after_10;
    // 0x802A8090: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_10:
    // 0x802A8094: lw          $a0, 0x7FB8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X7FB8);
    // 0x802A8098: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x802A809C: mfc1        $a3, $f28
    ctx->r7 = (int32_t)ctx->f28.u32l;
    // 0x802A80A0: swc1        $f26, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f26.u32l;
    // 0x802A80A4: swc1        $f24, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f24.u32l;
    // 0x802A80A8: swc1        $f22, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f22.u32l;
    // 0x802A80AC: jal         0x802E77B4
    // 0x802A80B0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    static_3_802E77B4(rdram, ctx);
        goto after_11;
    // 0x802A80B0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_11:
    // 0x802A80B4: lw          $a0, 0x7FB8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X7FB8);
    // 0x802A80B8: mfc1        $a2, $f28
    ctx->r6 = (int32_t)ctx->f28.u32l;
    // 0x802A80BC: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802A80C0: swc1        $f26, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f26.u32l;
    // 0x802A80C4: swc1        $f24, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f24.u32l;
    // 0x802A80C8: swc1        $f22, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f22.u32l;
    // 0x802A80CC: jal         0x802E77B4
    // 0x802A80D0: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    static_3_802E77B4(rdram, ctx);
        goto after_12;
    // 0x802A80D0: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_12:
    // 0x802A80D4: lw          $a0, 0x7FB8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X7FB8);
    // 0x802A80D8: mfc1        $a2, $f28
    ctx->r6 = (int32_t)ctx->f28.u32l;
    // 0x802A80DC: mfc1        $a3, $f28
    ctx->r7 = (int32_t)ctx->f28.u32l;
    // 0x802A80E0: swc1        $f26, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f26.u32l;
    // 0x802A80E4: swc1        $f24, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f24.u32l;
    // 0x802A80E8: swc1        $f22, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f22.u32l;
    // 0x802A80EC: jal         0x802E77B4
    // 0x802A80F0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    static_3_802E77B4(rdram, ctx);
        goto after_13;
    // 0x802A80F0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_13:
    // 0x802A80F4: lw          $a0, 0x7FB8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X7FB8);
    // 0x802A80F8: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x802A80FC: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802A8100: swc1        $f26, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f26.u32l;
    // 0x802A8104: swc1        $f24, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f24.u32l;
    // 0x802A8108: swc1        $f22, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f22.u32l;
    // 0x802A810C: jal         0x802E77B4
    // 0x802A8110: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    static_3_802E77B4(rdram, ctx);
        goto after_14;
    // 0x802A8110: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_14:
    // 0x802A8114: lw          $a0, 0x7FB8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X7FB8);
    // 0x802A8118: mfc1        $a2, $f28
    ctx->r6 = (int32_t)ctx->f28.u32l;
    // 0x802A811C: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802A8120: swc1        $f26, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f26.u32l;
    // 0x802A8124: swc1        $f24, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f24.u32l;
    // 0x802A8128: swc1        $f22, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f22.u32l;
    // 0x802A812C: jal         0x802E77B4
    // 0x802A8130: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    static_3_802E77B4(rdram, ctx);
        goto after_15;
    // 0x802A8130: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_15:
    // 0x802A8134: lw          $a0, 0x7FB8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X7FB8);
    // 0x802A8138: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x802A813C: mfc1        $a3, $f28
    ctx->r7 = (int32_t)ctx->f28.u32l;
    // 0x802A8140: swc1        $f26, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f26.u32l;
    // 0x802A8144: swc1        $f24, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f24.u32l;
    // 0x802A8148: swc1        $f22, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f22.u32l;
    // 0x802A814C: jal         0x802E77B4
    // 0x802A8150: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    static_3_802E77B4(rdram, ctx);
        goto after_16;
    // 0x802A8150: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_16:
    // 0x802A8154: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x802A8158: ldc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X38);
    // 0x802A815C: ldc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X40);
    // 0x802A8160: ldc1        $f24, 0x48($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X48);
    // 0x802A8164: ldc1        $f26, 0x50($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X50);
    // 0x802A8168: ldc1        $f28, 0x58($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X58);
    // 0x802A816C: lw          $s0, 0x60($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X60);
    // 0x802A8170: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x802A8174: jr          $ra
    // 0x802A8178: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x802A8178: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void D_802B9704(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B9784: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B9788: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B978C: lw          $v0, 0x7C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X7C);
    // 0x802B9790: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802B9794: lw          $t9, 0x2C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X2C);
    // 0x802B9798: lh          $t6, 0x28($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X28);
    // 0x802B979C: jalr        $t9
    // 0x802B97A0: addu        $a0, $t6, $a0
    ctx->r4 = ADD32(ctx->r14, ctx->r4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x802B97A0: addu        $a0, $t6, $a0
    ctx->r4 = ADD32(ctx->r14, ctx->r4);
    after_0:
    // 0x802B97A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B97A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B97AC: jr          $ra
    // 0x802B97B0: nop

    return;
    // 0x802B97B0: nop

;}
RECOMP_FUNC void D_8021F4BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021F4BC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8021F4C0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8021F4C4: lui         $s1, 0x0
    ctx->r17 = S32(0X0 << 16);
    // 0x8021F4C8: addiu       $s1, $s1, 0x0
    ctx->r17 = ADD32(ctx->r17, 0X0);
    // 0x8021F4CC: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8021F4D0: lh          $t6, 0x0($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X0);
    // 0x8021F4D4: lh          $v0, 0x0($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X0);
    // 0x8021F4D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8021F4DC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8021F4E0: subu        $t3, $t6, $v0
    ctx->r11 = SUB32(ctx->r14, ctx->r2);
    // 0x8021F4E4: sll         $t7, $t3, 16
    ctx->r15 = S32(ctx->r11 << 16);
    // 0x8021F4E8: sra         $t3, $t7, 16
    ctx->r11 = S32(SIGNED(ctx->r15) >> 16);
    // 0x8021F4EC: slti        $at, $t3, 0x3
    ctx->r1 = SIGNED(ctx->r11) < 0X3 ? 1 : 0;
    // 0x8021F4F0: beq         $at, $zero, L_8021F50C
    if (ctx->r1 == 0) {
        // 0x8021F4F4: or          $t0, $zero, $zero
        ctx->r8 = 0 | 0;
            goto L_8021F50C;
    }
    // 0x8021F4F4: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x8021F4F8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8021F4FC: jal         0x80231A24
    // 0x8021F500: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x8021F500: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x8021F504: b           L_8021F698
    // 0x8021F508: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8021F698;
    // 0x8021F508: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8021F50C:
    // 0x8021F50C: sll         $t4, $v0, 16
    ctx->r12 = S32(ctx->r2 << 16);
    // 0x8021F510: sra         $t9, $t4, 16
    ctx->r25 = S32(SIGNED(ctx->r12) >> 16);
    // 0x8021F514: blez        $t3, L_8021F694
    if (SIGNED(ctx->r11) <= 0) {
        // 0x8021F518: or          $t4, $t9, $zero
        ctx->r12 = ctx->r25 | 0;
            goto L_8021F694;
    }
    // 0x8021F518: or          $t4, $t9, $zero
    ctx->r12 = ctx->r25 | 0;
    // 0x8021F51C: lui         $ra, 0x0
    ctx->r31 = S32(0X0 << 16);
    // 0x8021F520: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x8021F524: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x8021F528: addiu       $ra, $ra, 0x0
    ctx->r31 = ADD32(ctx->r31, 0X0);
    // 0x8021F52C: lui         $s0, 0x8000
    ctx->r16 = S32(0X8000 << 16);
    // 0x8021F530: lui         $t5, 0x400
    ctx->r13 = S32(0X400 << 16);
    // 0x8021F534: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x8021F538: lui         $t1, 0xBF00
    ctx->r9 = S32(0XBF00 << 16);
    // 0x8021F53C: lh          $t6, 0x0($s1)
    ctx->r14 = MEM_H(ctx->r17, 0X0);
L_8021F540:
    // 0x8021F540: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8021F544: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    // 0x8021F548: beql        $t4, $t6, L_8021F560
    if (ctx->r12 == ctx->r14) {
        // 0x8021F54C: slti        $at, $t3, 0x10
        ctx->r1 = SIGNED(ctx->r11) < 0X10 ? 1 : 0;
            goto L_8021F560;
    }
    goto skip_0;
    // 0x8021F54C: slti        $at, $t3, 0x10
    ctx->r1 = SIGNED(ctx->r11) < 0X10 ? 1 : 0;
    skip_0:
    // 0x8021F550: addiu       $t3, $t3, 0x2
    ctx->r11 = ADD32(ctx->r11, 0X2);
    // 0x8021F554: sll         $t7, $t3, 16
    ctx->r15 = S32(ctx->r11 << 16);
    // 0x8021F558: sra         $t3, $t7, 16
    ctx->r11 = S32(SIGNED(ctx->r15) >> 16);
    // 0x8021F55C: slti        $at, $t3, 0x10
    ctx->r1 = SIGNED(ctx->r11) < 0X10 ? 1 : 0;
L_8021F560:
    // 0x8021F560: beq         $at, $zero, L_8021F578
    if (ctx->r1 == 0) {
        // 0x8021F564: nop
    
            goto L_8021F578;
    }
    // 0x8021F564: nop

    // 0x8021F568: sll         $a3, $t3, 16
    ctx->r7 = S32(ctx->r11 << 16);
    // 0x8021F56C: sra         $t9, $a3, 16
    ctx->r25 = S32(SIGNED(ctx->r7) >> 16);
    // 0x8021F570: b           L_8021F578
    // 0x8021F574: or          $a3, $t9, $zero
    ctx->r7 = ctx->r25 | 0;
        goto L_8021F578;
    // 0x8021F574: or          $a3, $t9, $zero
    ctx->r7 = ctx->r25 | 0;
L_8021F578:
    // 0x8021F578: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x8021F57C: addiu       $t7, $a3, -0x1
    ctx->r15 = ADD32(ctx->r7, -0X1);
    // 0x8021F580: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x8021F584: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x8021F588: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
    // 0x8021F58C: andi        $t9, $t8, 0xFF
    ctx->r25 = ctx->r24 & 0XFF;
    // 0x8021F590: sll         $t6, $t9, 16
    ctx->r14 = S32(ctx->r25 << 16);
    // 0x8021F594: sll         $t8, $a3, 4
    ctx->r24 = S32(ctx->r7 << 4);
    // 0x8021F598: andi        $t9, $t8, 0xFFFF
    ctx->r25 = ctx->r24 & 0XFFFF;
    // 0x8021F59C: or          $t7, $t6, $t5
    ctx->r15 = ctx->r14 | ctx->r13;
    // 0x8021F5A0: or          $t6, $t7, $t9
    ctx->r14 = ctx->r15 | ctx->r25;
    // 0x8021F5A4: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8021F5A8: lw          $t7, 0x0($ra)
    ctx->r15 = MEM_W(ctx->r31, 0X0);
    // 0x8021F5AC: sll         $t8, $t4, 4
    ctx->r24 = S32(ctx->r12 << 4);
    // 0x8021F5B0: subu        $t3, $t3, $a3
    ctx->r11 = SUB32(ctx->r11, ctx->r7);
    // 0x8021F5B4: addu        $t9, $t8, $t7
    ctx->r25 = ADD32(ctx->r24, ctx->r15);
    // 0x8021F5B8: addu        $t6, $t9, $s0
    ctx->r14 = ADD32(ctx->r25, ctx->r16);
    // 0x8021F5BC: addiu       $a3, $a3, -0x2
    ctx->r7 = ADD32(ctx->r7, -0X2);
    // 0x8021F5C0: sll         $t9, $a3, 16
    ctx->r25 = S32(ctx->r7 << 16);
    // 0x8021F5C4: sll         $t8, $t3, 16
    ctx->r24 = S32(ctx->r11 << 16);
    // 0x8021F5C8: sra         $a3, $t9, 16
    ctx->r7 = S32(SIGNED(ctx->r25) >> 16);
    // 0x8021F5CC: sra         $t3, $t8, 16
    ctx->r11 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8021F5D0: addu        $t4, $t4, $a3
    ctx->r12 = ADD32(ctx->r12, ctx->r7);
    // 0x8021F5D4: sll         $t8, $t4, 16
    ctx->r24 = S32(ctx->r12 << 16);
    // 0x8021F5D8: sra         $t4, $t8, 16
    ctx->r12 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8021F5DC: blez        $a3, L_8021F68C
    if (SIGNED(ctx->r7) <= 0) {
        // 0x8021F5E0: sw          $t6, 0x4($v1)
        MEM_W(0X4, ctx->r3) = ctx->r14;
            goto L_8021F68C;
    }
    // 0x8021F5E0: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
L_8021F5E4:
    // 0x8021F5E4: beq         $t0, $zero, L_8021F630
    if (ctx->r8 == 0) {
        // 0x8021F5E8: nop
    
            goto L_8021F630;
    }
    // 0x8021F5E8: nop

    // 0x8021F5EC: multu       $a1, $t2
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8021F5F0: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x8021F5F4: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x8021F5F8: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x8021F5FC: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x8021F600: mflo        $v0
    ctx->r2 = lo;
    // 0x8021F604: andi        $t6, $v0, 0xFF
    ctx->r14 = ctx->r2 & 0XFF;
    // 0x8021F608: addiu       $t7, $v0, 0x14
    ctx->r15 = ADD32(ctx->r2, 0X14);
    // 0x8021F60C: andi        $t9, $t7, 0xFF
    ctx->r25 = ctx->r15 & 0XFF;
    // 0x8021F610: sll         $t8, $t6, 16
    ctx->r24 = S32(ctx->r14 << 16);
    // 0x8021F614: sll         $t6, $t9, 8
    ctx->r14 = S32(ctx->r25 << 8);
    // 0x8021F618: or          $t7, $t8, $t6
    ctx->r15 = ctx->r24 | ctx->r14;
    // 0x8021F61C: addiu       $t9, $v0, 0xA
    ctx->r25 = ADD32(ctx->r2, 0XA);
    // 0x8021F620: andi        $t8, $t9, 0xFF
    ctx->r24 = ctx->r25 & 0XFF;
    // 0x8021F624: or          $t6, $t7, $t8
    ctx->r14 = ctx->r15 | ctx->r24;
    // 0x8021F628: b           L_8021F670
    // 0x8021F62C: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
        goto L_8021F670;
    // 0x8021F62C: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
L_8021F630:
    // 0x8021F630: multu       $a1, $t2
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8021F634: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x8021F638: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x8021F63C: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x8021F640: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x8021F644: mflo        $v0
    ctx->r2 = lo;
    // 0x8021F648: andi        $t7, $v0, 0xFF
    ctx->r15 = ctx->r2 & 0XFF;
    // 0x8021F64C: addiu       $t6, $v0, 0xA
    ctx->r14 = ADD32(ctx->r2, 0XA);
    // 0x8021F650: andi        $t9, $t6, 0xFF
    ctx->r25 = ctx->r14 & 0XFF;
    // 0x8021F654: sll         $t8, $t7, 16
    ctx->r24 = S32(ctx->r15 << 16);
    // 0x8021F658: sll         $t7, $t9, 8
    ctx->r15 = S32(ctx->r25 << 8);
    // 0x8021F65C: or          $t6, $t8, $t7
    ctx->r14 = ctx->r24 | ctx->r15;
    // 0x8021F660: addiu       $t9, $v0, 0x14
    ctx->r25 = ADD32(ctx->r2, 0X14);
    // 0x8021F664: andi        $t8, $t9, 0xFF
    ctx->r24 = ctx->r25 & 0XFF;
    // 0x8021F668: or          $t7, $t6, $t8
    ctx->r15 = ctx->r14 | ctx->r24;
    // 0x8021F66C: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
L_8021F670:
    // 0x8021F670: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8021F674: sll         $t8, $a1, 16
    ctx->r24 = S32(ctx->r5 << 16);
    // 0x8021F678: sra         $a1, $t8, 16
    ctx->r5 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8021F67C: slt         $at, $a1, $a3
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x8021F680: xori        $t9, $t0, 0x1
    ctx->r25 = ctx->r8 ^ 0X1;
    // 0x8021F684: bne         $at, $zero, L_8021F5E4
    if (ctx->r1 != 0) {
        // 0x8021F688: andi        $t0, $t9, 0xFF
        ctx->r8 = ctx->r25 & 0XFF;
            goto L_8021F5E4;
    }
    // 0x8021F688: andi        $t0, $t9, 0xFF
    ctx->r8 = ctx->r25 & 0XFF;
L_8021F68C:
    // 0x8021F68C: bgtzl       $t3, L_8021F540
    if (SIGNED(ctx->r11) > 0) {
        // 0x8021F690: lh          $t6, 0x0($s1)
        ctx->r14 = MEM_H(ctx->r17, 0X0);
            goto L_8021F540;
    }
    goto skip_1;
    // 0x8021F690: lh          $t6, 0x0($s1)
    ctx->r14 = MEM_H(ctx->r17, 0X0);
    skip_1:
L_8021F694:
    // 0x8021F694: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8021F698:
    // 0x8021F698: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8021F69C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8021F6A0: jr          $ra
    // 0x8021F6A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8021F6A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void D_802A69EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A6A6C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802A6A70: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802A6A74: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802A6A78: swc1        $f12, 0x29C($a0)
    MEM_W(0X29C, ctx->r4) = ctx->f12.u32l;
    // 0x802A6A7C: mul.s       $f0, $f12, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x802A6A80: swc1        $f12, 0x2A0($a0)
    MEM_W(0X2A0, ctx->r4) = ctx->f12.u32l;
    // 0x802A6A84: swc1        $f12, 0x2A4($a0)
    MEM_W(0X2A4, ctx->r4) = ctx->f12.u32l;
    // 0x802A6A88: swc1        $f0, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f0.u32l;
    // 0x802A6A8C: swc1        $f0, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f0.u32l;
    // 0x802A6A90: jr          $ra
    // 0x802A6A94: swc1        $f0, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f0.u32l;
    return;
    // 0x802A6A94: swc1        $f0, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void D_802377F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802377F0: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802377F4: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x802377F8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x802377FC: lw          $a0, 0x2C($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X2C);
    // 0x80237800: beq         $a0, $zero, L_80237818
    if (ctx->r4 == 0) {
        // 0x80237804: nop
    
            goto L_80237818;
    }
    // 0x80237804: nop

    // 0x80237808: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8023780C: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x80237810: sw          $t6, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r14;
    // 0x80237814: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
L_80237818:
    // 0x80237818: jr          $ra
    // 0x8023781C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8023781C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void D_802E7610(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E7690: jr          $ra
    // 0x802E7694: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x802E7694: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void D_8024A1E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024A1E4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8024A1E8: bne         $a1, $at, L_8024A1F4
    if (ctx->r5 != ctx->r1) {
        // 0x8024A1EC: nop
    
            goto L_8024A1F4;
    }
    // 0x8024A1EC: nop

    // 0x8024A1F0: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
L_8024A1F4:
    // 0x8024A1F4: jr          $ra
    // 0x8024A1F8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8024A1F8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void D_80228154(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80228154: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80228158: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x8022815C: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x80228160: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x80228164: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x80228168: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x8022816C: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x80228170: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x80228174: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x80228178: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x8022817C: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x80228180: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80228184: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80228188: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022818C: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x80228190: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x80228194: blez        $v0, L_80228478
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80228198: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_80228478;
    }
    // 0x80228198: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x8022819C: lui         $at, 0x42FE
    ctx->r1 = S32(0X42FE << 16);
    // 0x802281A0: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x802281A4: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x802281A8: lui         $fp, 0x0
    ctx->r30 = S32(0X0 << 16);
    // 0x802281AC: lui         $s7, 0x0
    ctx->r23 = S32(0X0 << 16);
    // 0x802281B0: lui         $s6, 0x0
    ctx->r22 = S32(0X0 << 16);
    // 0x802281B4: lui         $s5, 0x0
    ctx->r21 = S32(0X0 << 16);
    // 0x802281B8: lui         $s2, 0x0
    ctx->r18 = S32(0X0 << 16);
    // 0x802281BC: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x802281C0: addiu       $s2, $s2, 0x0
    ctx->r18 = ADD32(ctx->r18, 0X0);
    // 0x802281C4: addiu       $s5, $s5, 0x0
    ctx->r21 = ADD32(ctx->r21, 0X0);
    // 0x802281C8: addiu       $s6, $s6, 0x0
    ctx->r22 = ADD32(ctx->r22, 0X0);
    // 0x802281CC: addiu       $s7, $s7, 0x0
    ctx->r23 = ADD32(ctx->r23, 0X0);
    // 0x802281D0: addiu       $fp, $fp, 0x0
    ctx->r30 = ADD32(ctx->r30, 0X0);
    // 0x802281D4: lw          $t7, 0x0($s5)
    ctx->r15 = MEM_W(ctx->r21, 0X0);
L_802281D8:
    // 0x802281D8: sll         $t6, $s3, 5
    ctx->r14 = S32(ctx->r19 << 5);
    // 0x802281DC: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    // 0x802281E0: addu        $s1, $t6, $t7
    ctx->r17 = ADD32(ctx->r14, ctx->r15);
    // 0x802281E4: lbu         $t8, 0x0($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X0);
    // 0x802281E8: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802281EC: beql        $t8, $zero, L_8022846C
    if (ctx->r24 == 0) {
        // 0x802281F0: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_8022846C;
    }
    goto skip_0;
    // 0x802281F0: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_0:
    // 0x802281F4: lhu         $t9, 0x0($s7)
    ctx->r25 = MEM_HU(ctx->r23, 0X0);
    // 0x802281F8: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x802281FC: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x80228200: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80228204: addu        $t1, $s6, $t0
    ctx->r9 = ADD32(ctx->r22, ctx->r8);
    // 0x80228208: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x8022820C: sll         $t3, $v0, 4
    ctx->r11 = S32(ctx->r2 << 4);
    // 0x80228210: addiu       $a0, $v0, 0x1
    ctx->r4 = ADD32(ctx->r2, 0X1);
    // 0x80228214: sw          $a0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r4;
    // 0x80228218: jal         0x80231C58
    // 0x8022821C: addu        $s0, $t2, $t3
    ctx->r16 = ADD32(ctx->r10, ctx->r11);
    static_3_80231C58(rdram, ctx);
        goto after_0;
    // 0x8022821C: addu        $s0, $t2, $t3
    ctx->r16 = ADD32(ctx->r10, ctx->r11);
    after_0:
    // 0x80228220: beq         $v0, $zero, L_80228234
    if (ctx->r2 == 0) {
        // 0x80228224: lui         $at, 0x4F00
        ctx->r1 = S32(0X4F00 << 16);
            goto L_80228234;
    }
    // 0x80228224: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80228228: lw          $t5, 0x0($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X0);
    // 0x8022822C: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x80228230: sw          $t6, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r14;
L_80228234:
    // 0x80228234: sw          $s0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r16;
    // 0x80228238: lwc1        $f4, 0xC($s4)
    ctx->f4.u32l = MEM_W(ctx->r20, 0XC);
    // 0x8022823C: lwc1        $f8, 0x4($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X4);
    // 0x80228240: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228244: mul.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x80228248: nop

    // 0x8022824C: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80228250: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80228254: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x80228258: nop

    // 0x8022825C: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80228260: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x80228264: nop

    // 0x80228268: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x8022826C: beq         $v0, $zero, L_802282B8
    if (ctx->r2 == 0) {
        // 0x80228270: nop
    
            goto L_802282B8;
    }
    // 0x80228270: nop

    // 0x80228274: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80228278: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022827C: sub.s       $f16, $f10, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80228280: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x80228284: nop

    // 0x80228288: cvt.w.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_S(ctx->f16.fl);
    // 0x8022828C: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x80228290: nop

    // 0x80228294: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x80228298: bne         $v0, $zero, L_802282B0
    if (ctx->r2 != 0) {
        // 0x8022829C: nop
    
            goto L_802282B0;
    }
    // 0x8022829C: nop

    // 0x802282A0: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x802282A4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802282A8: b           L_802282C8
    // 0x802282AC: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
        goto L_802282C8;
    // 0x802282AC: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
L_802282B0:
    // 0x802282B0: b           L_802282C8
    // 0x802282B4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_802282C8;
    // 0x802282B4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_802282B8:
    // 0x802282B8: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x802282BC: nop

    // 0x802282C0: bltz        $v0, L_802282B0
    if (SIGNED(ctx->r2) < 0) {
        // 0x802282C4: nop
    
            goto L_802282B0;
    }
    // 0x802282C4: nop

L_802282C8:
    // 0x802282C8: or          $t8, $v0, $zero
    ctx->r24 = ctx->r2 | 0;
    // 0x802282CC: sb          $t8, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r24;
    // 0x802282D0: sb          $t8, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r24;
    // 0x802282D4: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x802282D8: lwc1        $f18, 0x10($s4)
    ctx->f18.u32l = MEM_W(ctx->r20, 0X10);
    // 0x802282DC: lwc1        $f6, 0x8($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X8);
    // 0x802282E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802282E4: mul.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x802282E8: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x802282EC: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802282F0: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x802282F4: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x802282F8: nop

    // 0x802282FC: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80228300: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x80228304: nop

    // 0x80228308: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x8022830C: beql        $v0, $zero, L_8022835C
    if (ctx->r2 == 0) {
        // 0x80228310: mfc1        $v0, $f10
        ctx->r2 = (int32_t)ctx->f10.u32l;
            goto L_8022835C;
    }
    goto skip_1;
    // 0x80228310: mfc1        $v0, $f10
    ctx->r2 = (int32_t)ctx->f10.u32l;
    skip_1:
    // 0x80228314: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80228318: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022831C: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80228320: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x80228324: nop

    // 0x80228328: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8022832C: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x80228330: nop

    // 0x80228334: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x80228338: bne         $v0, $zero, L_80228350
    if (ctx->r2 != 0) {
        // 0x8022833C: nop
    
            goto L_80228350;
    }
    // 0x8022833C: nop

    // 0x80228340: mfc1        $v0, $f10
    ctx->r2 = (int32_t)ctx->f10.u32l;
    // 0x80228344: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80228348: b           L_80228368
    // 0x8022834C: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
        goto L_80228368;
    // 0x8022834C: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
L_80228350:
    // 0x80228350: b           L_80228368
    // 0x80228354: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80228368;
    // 0x80228354: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80228358: mfc1        $v0, $f10
    ctx->r2 = (int32_t)ctx->f10.u32l;
L_8022835C:
    // 0x8022835C: nop

    // 0x80228360: bltz        $v0, L_80228350
    if (SIGNED(ctx->r2) < 0) {
        // 0x80228364: nop
    
            goto L_80228350;
    }
    // 0x80228364: nop

L_80228368:
    // 0x80228368: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
    // 0x8022836C: sb          $t0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r8;
    // 0x80228370: sb          $t0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r8;
    // 0x80228374: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80228378: lwc1        $f16, 0x14($s4)
    ctx->f16.u32l = MEM_W(ctx->r20, 0X14);
    // 0x8022837C: lwc1        $f4, 0xC($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0XC);
    // 0x80228380: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228384: mul.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x80228388: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8022838C: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x80228390: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x80228394: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x80228398: nop

    // 0x8022839C: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x802283A0: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x802283A4: nop

    // 0x802283A8: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x802283AC: beql        $v0, $zero, L_802283FC
    if (ctx->r2 == 0) {
        // 0x802283B0: mfc1        $v0, $f8
        ctx->r2 = (int32_t)ctx->f8.u32l;
            goto L_802283FC;
    }
    goto skip_2;
    // 0x802283B0: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    skip_2:
    // 0x802283B4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802283B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802283BC: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x802283C0: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x802283C4: nop

    // 0x802283C8: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x802283CC: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x802283D0: nop

    // 0x802283D4: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x802283D8: bne         $v0, $zero, L_802283F0
    if (ctx->r2 != 0) {
        // 0x802283DC: nop
    
            goto L_802283F0;
    }
    // 0x802283DC: nop

    // 0x802283E0: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x802283E4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802283E8: b           L_80228408
    // 0x802283EC: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
        goto L_80228408;
    // 0x802283EC: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
L_802283F0:
    // 0x802283F0: b           L_80228408
    // 0x802283F4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80228408;
    // 0x802283F4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802283F8: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
L_802283FC:
    // 0x802283FC: nop

    // 0x80228400: bltz        $v0, L_802283F0
    if (SIGNED(ctx->r2) < 0) {
        // 0x80228404: nop
    
            goto L_802283F0;
    }
    // 0x80228404: nop

L_80228408:
    // 0x80228408: or          $t2, $v0, $zero
    ctx->r10 = ctx->r2 | 0;
    // 0x8022840C: sb          $t2, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r10;
    // 0x80228410: sb          $t2, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r10;
    // 0x80228414: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x80228418: lwc1        $f10, 0x10($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X10);
    // 0x8022841C: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x80228420: mul.s       $f16, $f10, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x80228424: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80228428: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    // 0x8022842C: nop

    // 0x80228430: sb          $t4, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r12;
    // 0x80228434: lwc1        $f4, 0x14($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X14);
    // 0x80228438: mul.s       $f6, $f4, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f22.fl);
    // 0x8022843C: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x80228440: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x80228444: nop

    // 0x80228448: sb          $t6, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r14;
    // 0x8022844C: lwc1        $f10, 0x18($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X18);
    // 0x80228450: mul.s       $f16, $f10, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x80228454: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80228458: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    // 0x8022845C: nop

    // 0x80228460: sb          $t8, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r24;
    // 0x80228464: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x80228468: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_8022846C:
    // 0x8022846C: slt         $at, $s3, $v0
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80228470: bnel        $at, $zero, L_802281D8
    if (ctx->r1 != 0) {
        // 0x80228474: lw          $t7, 0x0($s5)
        ctx->r15 = MEM_W(ctx->r21, 0X0);
            goto L_802281D8;
    }
    goto skip_3;
    // 0x80228474: lw          $t7, 0x0($s5)
    ctx->r15 = MEM_W(ctx->r21, 0X0);
    skip_3:
L_80228478:
    // 0x80228478: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x8022847C: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x80228480: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x80228484: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80228488: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022848C: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80228490: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x80228494: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x80228498: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x8022849C: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x802284A0: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x802284A4: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x802284A8: jr          $ra
    // 0x802284AC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x802284AC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void D_802B1E5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B1EDC: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x802B1EE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B1EE4: sw          $a1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r5;
    // 0x802B1EE8: sw          $a2, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r6;
    // 0x802B1EEC: lbu         $t6, 0x8F0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X8F0);
    // 0x802B1EF0: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x802B1EF4: bnel        $t6, $zero, L_802B21BC
    if (ctx->r14 != 0) {
        // 0x802B1EF8: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_802B21BC;
    }
    goto skip_0;
    // 0x802B1EF8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_0:
    // 0x802B1EFC: lw          $v0, 0x1A0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1A0);
    // 0x802B1F00: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x802B1F04: lh          $t7, 0x60($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X60);
    // 0x802B1F08: sw          $a3, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r7;
    // 0x802B1F0C: lw          $t9, 0x64($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X64);
    // 0x802B1F10: addu        $a0, $t7, $a0
    ctx->r4 = ADD32(ctx->r15, ctx->r4);
    // 0x802B1F14: jalr        $t9
    // 0x802B1F18: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x802B1F18: nop

    after_0:
    // 0x802B1F1C: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x802B1F20: lwc1        $f6, 0x6C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x802B1F24: lw          $a3, 0x90($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X90);
    // 0x802B1F28: swc1        $f4, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f4.u32l;
    // 0x802B1F2C: swc1        $f6, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f6.u32l;
    // 0x802B1F30: lwc1        $f8, 0x8D8($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X8D8);
    // 0x802B1F34: lwc1        $f10, 0x8DC($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X8DC);
    // 0x802B1F38: sub.s       $f12, $f8, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x802B1F3C: lwc1        $f4, 0x70($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X70);
    // 0x802B1F40: lwc1        $f8, 0x8E0($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X8E0);
    // 0x802B1F44: sub.s       $f14, $f10, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x802B1F48: sub.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x802B1F4C: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x802B1F50: jal         0x802D05CC
    // 0x802B1F54: nop

    static_3_802D05CC(rdram, ctx);
        goto after_1;
    // 0x802B1F54: nop

    after_1:
    // 0x802B1F58: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x802B1F5C: lw          $a3, 0x90($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X90);
    // 0x802B1F60: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x802B1F64: c.le.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl <= ctx->f18.fl;
    // 0x802B1F68: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B1F6C: lwc1        $f8, 0x88($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X88);
    // 0x802B1F70: lwc1        $f10, 0x84($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X84);
    // 0x802B1F74: bc1fl       L_802B1F84
    if (!c1cs) {
        // 0x802B1F78: lwc1        $f6, 0x8D8($a3)
        ctx->f6.u32l = MEM_W(ctx->r7, 0X8D8);
            goto L_802B1F84;
    }
    goto skip_1;
    // 0x802B1F78: lwc1        $f6, 0x8D8($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X8D8);
    skip_1:
    // 0x802B1F7C: lwc1        $f2, 0x0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B1F80: lwc1        $f6, 0x8D8($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X8D8);
L_802B1F84:
    // 0x802B1F84: lwc1        $f4, 0x8DC($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X8DC);
    // 0x802B1F88: swc1        $f2, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f2.u32l;
    // 0x802B1F8C: sw          $a3, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r7;
    // 0x802B1F90: sub.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x802B1F94: jal         0x8022ADA8
    // 0x802B1F98: sub.s       $f14, $f4, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f10.fl;
    static_3_8022ADA8(rdram, ctx);
        goto after_2;
    // 0x802B1F98: sub.s       $f14, $f4, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f10.fl;
    after_2:
    // 0x802B1F9C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x802B1FA0: lw          $a3, 0x90($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X90);
    // 0x802B1FA4: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x802B1FA8: c.le.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl <= ctx->f18.fl;
    // 0x802B1FAC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B1FB0: lwc1        $f4, 0x84($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X84);
    // 0x802B1FB4: bc1fl       L_802B1FC4
    if (!c1cs) {
        // 0x802B1FB8: lwc1        $f10, 0x8DC($a3)
        ctx->f10.u32l = MEM_W(ctx->r7, 0X8DC);
            goto L_802B1FC4;
    }
    goto skip_2;
    // 0x802B1FB8: lwc1        $f10, 0x8DC($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X8DC);
    skip_2:
    // 0x802B1FBC: lwc1        $f2, 0x0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B1FC0: lwc1        $f10, 0x8DC($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X8DC);
L_802B1FC4:
    // 0x802B1FC4: lwc1        $f6, 0x88($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X88);
    // 0x802B1FC8: lwc1        $f8, 0x8D8($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X8D8);
    // 0x802B1FCC: sub.s       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x802B1FD0: sub.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x802B1FD4: neg.s       $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = -ctx->f16.fl;
    // 0x802B1FD8: c.eq.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl == ctx->f18.fl;
    // 0x802B1FDC: nop

    // 0x802B1FE0: bc1fl       L_802B200C
    if (!c1cs) {
        // 0x802B1FE4: div.s       $f12, $f0, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
            goto L_802B200C;
    }
    goto skip_3;
    // 0x802B1FE4: div.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
    skip_3:
    // 0x802B1FE8: c.le.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl <= ctx->f0.fl;
    // 0x802B1FEC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B1FF0: bc1f        L_802B2000
    if (!c1cs) {
        // 0x802B1FF4: nop
    
            goto L_802B2000;
    }
    // 0x802B1FF4: nop

    // 0x802B1FF8: b           L_802B2020
    // 0x802B1FFC: mov.s       $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    ctx->f14.fl = ctx->f18.fl;
        goto L_802B2020;
    // 0x802B1FFC: mov.s       $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    ctx->f14.fl = ctx->f18.fl;
L_802B2000:
    // 0x802B2000: b           L_802B2020
    // 0x802B2004: lwc1        $f14, 0x0($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X0);
        goto L_802B2020;
    // 0x802B2004: lwc1        $f14, 0x0($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B2008: div.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
L_802B200C:
    // 0x802B200C: sw          $a3, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r7;
    // 0x802B2010: jal         0x8022AE1C
    // 0x802B2014: div.s       $f14, $f16, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = DIV_S(ctx->f16.fl, ctx->f2.fl);
    static_3_8022AE1C(rdram, ctx);
        goto after_3;
    // 0x802B2014: div.s       $f14, $f16, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = DIV_S(ctx->f16.fl, ctx->f2.fl);
    after_3:
    // 0x802B2018: lw          $a3, 0x90($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X90);
    // 0x802B201C: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
L_802B2020:
    // 0x802B2020: lwc1        $f12, 0xB0($a3)
    ctx->f12.u32l = MEM_W(ctx->r7, 0XB0);
    // 0x802B2024: jal         0x802CF4D0
    // 0x802B2028: sw          $a3, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r7;
    static_3_802CF4D0(rdram, ctx);
        goto after_4;
    // 0x802B2028: sw          $a3, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r7;
    after_4:
    // 0x802B202C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x802B2030: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    // 0x802B2034: lw          $a3, 0x90($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X90);
    // 0x802B2038: c.lt.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl < ctx->f2.fl;
    // 0x802B203C: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
    // 0x802B2040: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B2044: bc1fl       L_802B2058
    if (!c1cs) {
        // 0x802B2048: neg.s       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
            goto L_802B2058;
    }
    goto skip_4;
    // 0x802B2048: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    skip_4:
    // 0x802B204C: b           L_802B2058
    // 0x802B2050: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
        goto L_802B2058;
    // 0x802B2050: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x802B2054: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
L_802B2058:
    // 0x802B2058: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B205C: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x802B2060: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802B2064: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x802B2068: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802B206C: bc1f        L_802B2078
    if (!c1cs) {
        // 0x802B2070: nop
    
            goto L_802B2078;
    }
    // 0x802B2070: nop

    // 0x802B2074: mov.s       $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = ctx->f18.fl;
L_802B2078:
    // 0x802B2078: mul.s       $f0, $f12, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f12.fl, ctx->f8.fl);
    // 0x802B207C: lwc1        $f2, 0x8E8($a3)
    ctx->f2.u32l = MEM_W(ctx->r7, 0X8E8);
    // 0x802B2080: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802B2084: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x802B2088: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x802B208C: swc1        $f0, 0x9C($a3)
    MEM_W(0X9C, ctx->r7) = ctx->f0.u32l;
    // 0x802B2090: bc1fl       L_802B20A4
    if (!c1cs) {
        // 0x802B2094: lwc1        $f4, 0x9C($a3)
        ctx->f4.u32l = MEM_W(ctx->r7, 0X9C);
            goto L_802B20A4;
    }
    goto skip_5;
    // 0x802B2094: lwc1        $f4, 0x9C($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X9C);
    skip_5:
    // 0x802B2098: b           L_802B20BC
    // 0x802B209C: swc1        $f2, 0x9C($a3)
    MEM_W(0X9C, ctx->r7) = ctx->f2.u32l;
        goto L_802B20BC;
    // 0x802B209C: swc1        $f2, 0x9C($a3)
    MEM_W(0X9C, ctx->r7) = ctx->f2.u32l;
    // 0x802B20A0: lwc1        $f4, 0x9C($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X9C);
L_802B20A4:
    // 0x802B20A4: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    // 0x802B20A8: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x802B20AC: nop

    // 0x802B20B0: bc1fl       L_802B20C0
    if (!c1cs) {
        // 0x802B20B4: lwc1        $f0, 0x8E4($a3)
        ctx->f0.u32l = MEM_W(ctx->r7, 0X8E4);
            goto L_802B20C0;
    }
    goto skip_6;
    // 0x802B20B4: lwc1        $f0, 0x8E4($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X8E4);
    skip_6:
    // 0x802B20B8: swc1        $f0, 0x9C($a3)
    MEM_W(0X9C, ctx->r7) = ctx->f0.u32l;
L_802B20BC:
    // 0x802B20BC: lwc1        $f0, 0x8E4($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X8E4);
L_802B20C0:
    // 0x802B20C0: lwc1        $f2, 0x8C($a3)
    ctx->f2.u32l = MEM_W(ctx->r7, 0X8C);
    // 0x802B20C4: lwc1        $f10, 0x8E0($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X8E0);
    // 0x802B20C8: sw          $zero, 0x40($a3)
    MEM_W(0X40, ctx->r7) = 0;
    // 0x802B20CC: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x802B20D0: swc1        $f0, 0x98($a3)
    MEM_W(0X98, ctx->r7) = ctx->f0.u32l;
    // 0x802B20D4: swc1        $f10, 0x5CC($a3)
    MEM_W(0X5CC, ctx->r7) = ctx->f10.u32l;
    // 0x802B20D8: bc1fl       L_802B20E8
    if (!c1cs) {
        // 0x802B20DC: lwc1        $f0, 0x88($a3)
        ctx->f0.u32l = MEM_W(ctx->r7, 0X88);
            goto L_802B20E8;
    }
    goto skip_7;
    // 0x802B20DC: lwc1        $f0, 0x88($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X88);
    skip_7:
    // 0x802B20E0: swc1        $f2, 0x98($a3)
    MEM_W(0X98, ctx->r7) = ctx->f2.u32l;
    // 0x802B20E4: lwc1        $f0, 0x88($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X88);
L_802B20E8:
    // 0x802B20E8: lwc1        $f6, 0x98($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X98);
    // 0x802B20EC: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x802B20F0: nop

    // 0x802B20F4: bc1fl       L_802B2104
    if (!c1cs) {
        // 0x802B20F8: lwc1        $f0, 0x7C($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X7C);
            goto L_802B2104;
    }
    goto skip_8;
    // 0x802B20F8: lwc1        $f0, 0x7C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X7C);
    skip_8:
    // 0x802B20FC: swc1        $f0, 0x98($a3)
    MEM_W(0X98, ctx->r7) = ctx->f0.u32l;
    // 0x802B2100: lwc1        $f0, 0x7C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X7C);
L_802B2104:
    // 0x802B2104: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x802B2108: nop

    // 0x802B210C: bc1tl       L_802B2144
    if (c1cs) {
        // 0x802B2110: lw          $t8, 0x7E4($a3)
        ctx->r24 = MEM_W(ctx->r7, 0X7E4);
            goto L_802B2144;
    }
    goto skip_9;
    // 0x802B2110: lw          $t8, 0x7E4($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X7E4);
    skip_9:
    // 0x802B2114: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802B2118: nop

    // 0x802B211C: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x802B2120: nop

    // 0x802B2124: bc1fl       L_802B21B8
    if (!c1cs) {
        // 0x802B2128: swc1        $f0, 0x8EC($a3)
        MEM_W(0X8EC, ctx->r7) = ctx->f0.u32l;
            goto L_802B21B8;
    }
    goto skip_10;
    // 0x802B2128: swc1        $f0, 0x8EC($a3)
    MEM_W(0X8EC, ctx->r7) = ctx->f0.u32l;
    skip_10:
    // 0x802B212C: lwc1        $f10, 0x8EC($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X8EC);
    // 0x802B2130: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x802B2134: nop

    // 0x802B2138: bc1fl       L_802B21B8
    if (!c1cs) {
        // 0x802B213C: swc1        $f0, 0x8EC($a3)
        MEM_W(0X8EC, ctx->r7) = ctx->f0.u32l;
            goto L_802B21B8;
    }
    goto skip_11;
    // 0x802B213C: swc1        $f0, 0x8EC($a3)
    MEM_W(0X8EC, ctx->r7) = ctx->f0.u32l;
    skip_11:
    // 0x802B2140: lw          $t8, 0x7E4($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X7E4);
L_802B2144:
    // 0x802B2144: lw          $t1, 0x7E0($a3)
    ctx->r9 = MEM_W(ctx->r7, 0X7E0);
    // 0x802B2148: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802B214C: addiu       $a0, $t8, 0x1
    ctx->r4 = ADD32(ctx->r24, 0X1);
    // 0x802B2150: bne         $t1, $a0, L_802B2164
    if (ctx->r9 != ctx->r4) {
        // 0x802B2154: sw          $a0, 0x7E4($a3)
        MEM_W(0X7E4, ctx->r7) = ctx->r4;
            goto L_802B2164;
    }
    // 0x802B2154: sw          $a0, 0x7E4($a3)
    MEM_W(0X7E4, ctx->r7) = ctx->r4;
    // 0x802B2158: sb          $v0, 0x8F0($a3)
    MEM_B(0X8F0, ctx->r7) = ctx->r2;
    // 0x802B215C: b           L_802B21B8
    // 0x802B2160: sb          $v0, 0x19B($a3)
    MEM_B(0X19B, ctx->r7) = ctx->r2;
        goto L_802B21B8;
    // 0x802B2160: sb          $v0, 0x19B($a3)
    MEM_B(0X19B, ctx->r7) = ctx->r2;
L_802B2164:
    // 0x802B2164: sll         $t2, $a0, 2
    ctx->r10 = S32(ctx->r4 << 2);
    // 0x802B2168: subu        $t2, $t2, $a0
    ctx->r10 = SUB32(ctx->r10, ctx->r4);
    // 0x802B216C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x802B2170: addu        $v0, $a3, $t2
    ctx->r2 = ADD32(ctx->r7, ctx->r10);
    // 0x802B2174: lwc1        $f6, 0x7E8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X7E8);
    // 0x802B2178: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B217C: sll         $t3, $a0, 2
    ctx->r11 = S32(ctx->r4 << 2);
    // 0x802B2180: swc1        $f6, 0x8D8($a3)
    MEM_W(0X8D8, ctx->r7) = ctx->f6.u32l;
    // 0x802B2184: lwc1        $f8, 0x7EC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X7EC);
    // 0x802B2188: addu        $v1, $a3, $t3
    ctx->r3 = ADD32(ctx->r7, ctx->r11);
    // 0x802B218C: swc1        $f8, 0x8DC($a3)
    MEM_W(0X8DC, ctx->r7) = ctx->f8.u32l;
    // 0x802B2190: lwc1        $f4, 0x7F0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X7F0);
    // 0x802B2194: swc1        $f4, 0x8E0($a3)
    MEM_W(0X8E0, ctx->r7) = ctx->f4.u32l;
    // 0x802B2198: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B219C: swc1        $f10, 0x8EC($a3)
    MEM_W(0X8EC, ctx->r7) = ctx->f10.u32l;
    // 0x802B21A0: lwc1        $f6, 0x8A8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8A8);
    // 0x802B21A4: swc1        $f6, 0x8E8($a3)
    MEM_W(0X8E8, ctx->r7) = ctx->f6.u32l;
    // 0x802B21A8: lwc1        $f8, 0x878($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X878);
    // 0x802B21AC: b           L_802B21B8
    // 0x802B21B0: swc1        $f8, 0x8E4($a3)
    MEM_W(0X8E4, ctx->r7) = ctx->f8.u32l;
        goto L_802B21B8;
    // 0x802B21B0: swc1        $f8, 0x8E4($a3)
    MEM_W(0X8E4, ctx->r7) = ctx->f8.u32l;
    // 0x802B21B4: swc1        $f0, 0x8EC($a3)
    MEM_W(0X8EC, ctx->r7) = ctx->f0.u32l;
L_802B21B8:
    // 0x802B21B8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_802B21BC:
    // 0x802B21BC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802B21C0: nop

    // 0x802B21C4: swc1        $f4, 0x3C($a3)
    MEM_W(0X3C, ctx->r7) = ctx->f4.u32l;
    // 0x802B21C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B21CC: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    // 0x802B21D0: jr          $ra
    // 0x802B21D4: nop

    return;
    // 0x802B21D4: nop

;}
RECOMP_FUNC void D_802D3EFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D3F7C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802D3F80: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802D3F84: jr          $ra
    // 0x802D3F88: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x802D3F88: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void D_802E806C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E80EC: jr          $ra
    // 0x802E80F0: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    return;
    // 0x802E80F0: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
;}
RECOMP_FUNC void D_802927A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80292828: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x8029282C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80292830: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80292834: sw          $a2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r6;
    // 0x80292838: lui         $at, 0x43AF
    ctx->r1 = S32(0X43AF << 16);
    // 0x8029283C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80292840: lwc1        $f4, 0xE0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XE0);
    // 0x80292844: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80292848: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8029284C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80292850: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x80292854: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
    // 0x80292858: lw          $t6, 0x18C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X18C);
    // 0x8029285C: swc1        $f12, 0xF4($a0)
    MEM_W(0XF4, ctx->r4) = ctx->f12.u32l;
    // 0x80292860: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80292864: jal         0x802C51D0
    // 0x80292868: sw          $t7, 0x18C($a0)
    MEM_W(0X18C, ctx->r4) = ctx->r15;
    static_3_802C51D0(rdram, ctx);
        goto after_0;
    // 0x80292868: sw          $t7, 0x18C($a0)
    MEM_W(0X18C, ctx->r4) = ctx->r15;
    after_0:
    // 0x8029286C: jal         0x802CF9C8
    // 0x80292870: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    static_3_802CF9C8(rdram, ctx);
        goto after_1;
    // 0x80292870: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    after_1:
    // 0x80292874: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x80292878: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8029287C: lui         $a2, 0x4170
    ctx->r6 = S32(0X4170 << 16);
    // 0x80292880: jal         0x8022A0D0
    // 0x80292884: lui         $a3, 0xBF80
    ctx->r7 = S32(0XBF80 << 16);
    static_3_8022A0D0(rdram, ctx);
        goto after_2;
    // 0x80292884: lui         $a3, 0xBF80
    ctx->r7 = S32(0XBF80 << 16);
    after_2:
    // 0x80292888: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8029288C: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80292890: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    // 0x80292894: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80292898: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8029289C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x802928A0: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x802928A4: lw          $t8, 0x8C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8C);
    // 0x802928A8: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x802928AC: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x802928B0: lui         $a3, 0x4000
    ctx->r7 = S32(0X4000 << 16);
    // 0x802928B4: jal         0x802AA7DC
    // 0x802928B8: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    static_3_802AA7DC(rdram, ctx);
        goto after_3;
    // 0x802928B8: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    after_3:
    // 0x802928BC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802928C0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802928C4: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    // 0x802928C8: jr          $ra
    // 0x802928CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x802928CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void D_8027BF68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027BFE0: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8027BFE4: lbu         $t6, 0x0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X0);
    // 0x8027BFE8: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x8027BFEC: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x8027BFF0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8027BFF4: sw          $a0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r4;
    // 0x8027BFF8: bne         $t6, $at, L_8027C40C
    if (ctx->r14 != ctx->r1) {
        // 0x8027BFFC: sw          $a1, 0x9C($sp)
        MEM_W(0X9C, ctx->r29) = ctx->r5;
            goto L_8027C40C;
    }
    // 0x8027BFFC: sw          $a1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r5;
    // 0x8027C000: jal         0x8022331C
    // 0x8027C004: nop

    static_3_8022331C(rdram, ctx);
        goto after_0;
    // 0x8027C004: nop

    after_0:
    // 0x8027C008: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x8027C00C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8027C010: lui         $at, 0x4360
    ctx->r1 = S32(0X4360 << 16);
    // 0x8027C014: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8027C018: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8027C01C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x8027C020: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x8027C024: lui         $a2, 0x4398
    ctx->r6 = S32(0X4398 << 16);
    // 0x8027C028: jal         0x8022A848
    // 0x8027C02C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    static_3_8022A848(rdram, ctx);
        goto after_1;
    // 0x8027C02C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x8027C030: jal         0x80221B2C
    // 0x8027C034: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    static_3_80221B2C(rdram, ctx);
        goto after_2;
    // 0x8027C034: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    after_2:
    // 0x8027C038: jal         0x8022970C
    // 0x8027C03C: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    func_8022970C(rdram, ctx);
        goto after_3;
    // 0x8027C03C: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    after_3:
    // 0x8027C040: jal         0x8022149C
    // 0x8027C044: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    static_3_8022149C(rdram, ctx);
        goto after_4;
    // 0x8027C044: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    after_4:
    // 0x8027C048: jal         0x802233EC
    // 0x8027C04C: lui         $a0, 0x482
    ctx->r4 = S32(0X482 << 16);
    static_3_802233EC(rdram, ctx);
        goto after_5;
    // 0x8027C04C: lui         $a0, 0x482
    ctx->r4 = S32(0X482 << 16);
    after_5:
    // 0x8027C050: lw          $v0, 0x98($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X98);
    // 0x8027C054: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8027C058: lw          $t7, 0x32A4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X32A4);
    // 0x8027C05C: bne         $t7, $at, L_8027C3F4
    if (ctx->r15 != ctx->r1) {
        // 0x8027C060: nop
    
            goto L_8027C3F4;
    }
    // 0x8027C060: nop

    // 0x8027C064: lbu         $t8, 0x35E0($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X35E0);
    // 0x8027C068: bne         $t8, $zero, L_8027C3F4
    if (ctx->r24 != 0) {
        // 0x8027C06C: nop
    
            goto L_8027C3F4;
    }
    // 0x8027C06C: nop

    // 0x8027C070: jal         0x8021E66C
    // 0x8027C074: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    static_3_8021E66C(rdram, ctx);
        goto after_6;
    // 0x8027C074: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_6:
    // 0x8027C078: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8027C07C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x8027C080: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8027C084: jal         0x8021E708
    // 0x8027C088: addiu       $a3, $zero, 0x96
    ctx->r7 = ADD32(0, 0X96);
    static_3_8021E708(rdram, ctx);
        goto after_7;
    // 0x8027C088: addiu       $a3, $zero, 0x96
    ctx->r7 = ADD32(0, 0X96);
    after_7:
    // 0x8027C08C: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
    // 0x8027C090: lbu         $t9, 0x4E38($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X4E38);
    // 0x8027C094: bnel        $t9, $zero, L_8027C2D4
    if (ctx->r25 != 0) {
        // 0x8027C098: lbu         $t5, 0x9F($sp)
        ctx->r13 = MEM_BU(ctx->r29, 0X9F);
            goto L_8027C2D4;
    }
    goto skip_0;
    // 0x8027C098: lbu         $t5, 0x9F($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X9F);
    skip_0:
    // 0x8027C09C: lw          $t0, 0x4C00($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X4C00);
    // 0x8027C0A0: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8027C0A4: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x8027C0A8: andi        $t1, $t0, 0x4
    ctx->r9 = ctx->r8 & 0X4;
    // 0x8027C0AC: beq         $t1, $zero, L_8027C0EC
    if (ctx->r9 == 0) {
        // 0x8027C0B0: nop
    
            goto L_8027C0EC;
    }
    // 0x8027C0B0: nop

    // 0x8027C0B4: jal         0x802AEDE4
    // 0x8027C0B8: nop

    static_3_802AEDE4(rdram, ctx);
        goto after_8;
    // 0x8027C0B8: nop

    after_8:
    // 0x8027C0BC: lw          $t2, 0x98($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X98);
    // 0x8027C0C0: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8027C0C4: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x8027C0C8: lwc1        $f6, 0x32A8($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X32A8);
    // 0x8027C0CC: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x8027C0D0: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x8027C0D4: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x8027C0D8: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x8027C0DC: jal         0x8023072C
    // 0x8027C0E0: nop

    static_3_8023072C(rdram, ctx);
        goto after_9;
    // 0x8027C0E0: nop

    after_9:
    // 0x8027C0E4: b           L_8027C0F8
    // 0x8027C0E8: lbu         $t4, 0x9F($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X9F);
        goto L_8027C0F8;
    // 0x8027C0E8: lbu         $t4, 0x9F($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X9F);
L_8027C0EC:
    // 0x8027C0EC: jal         0x8023072C
    // 0x8027C0F0: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    static_3_8023072C(rdram, ctx);
        goto after_10;
    // 0x8027C0F0: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    after_10:
    // 0x8027C0F4: lbu         $t4, 0x9F($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X9F);
L_8027C0F8:
    // 0x8027C0F8: addiu       $t5, $zero, 0x1E
    ctx->r13 = ADD32(0, 0X1E);
    // 0x8027C0FC: addiu       $t0, $zero, 0xE0
    ctx->r8 = ADD32(0, 0XE0);
    // 0x8027C100: bne         $t4, $zero, L_8027C1F0
    if (ctx->r12 != 0) {
        // 0x8027C104: nop
    
            goto L_8027C1F0;
    }
    // 0x8027C104: nop

    // 0x8027C108: jal         0x8021F4E4
    // 0x8027C10C: sw          $t5, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r13;
    static_3_8021F4E4(rdram, ctx);
        goto after_11;
    // 0x8027C10C: sw          $t5, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r13;
    after_11:
    // 0x8027C110: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8027C114: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x8027C118: addiu       $a0, $zero, 0x89
    ctx->r4 = ADD32(0, 0X89);
    // 0x8027C11C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8027C120: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8027C124: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8027C128: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8027C12C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8027C130: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8027C134: jal         0x8021F35C
    // 0x8027C138: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_12;
    // 0x8027C138: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_12:
    // 0x8027C13C: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x8027C140: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x8027C144: addiu       $a0, $zero, 0xB7
    ctx->r4 = ADD32(0, 0XB7);
    // 0x8027C148: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8027C14C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8027C150: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8027C154: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8027C158: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8027C15C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8027C160: jal         0x8021F35C
    // 0x8027C164: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_13;
    // 0x8027C164: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_13:
    // 0x8027C168: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8027C16C: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x8027C170: addiu       $a0, $zero, 0xB7
    ctx->r4 = ADD32(0, 0XB7);
    // 0x8027C174: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x8027C178: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8027C17C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8027C180: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8027C184: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8027C188: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8027C18C: jal         0x8021F35C
    // 0x8027C190: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_14;
    // 0x8027C190: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_14:
    // 0x8027C194: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x8027C198: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x8027C19C: addiu       $a0, $zero, 0x89
    ctx->r4 = ADD32(0, 0X89);
    // 0x8027C1A0: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x8027C1A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8027C1A8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8027C1AC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8027C1B0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8027C1B4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8027C1B8: jal         0x8021F35C
    // 0x8027C1BC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_15;
    // 0x8027C1BC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_15:
    // 0x8027C1C0: jal         0x8021FCD0
    // 0x8027C1C4: nop

    static_3_8021FCD0(rdram, ctx);
        goto after_16;
    // 0x8027C1C4: nop

    after_16:
    // 0x8027C1C8: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x8027C1CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8027C1D0: jal         0x802CE360
    // 0x8027C1D4: addiu       $a2, $zero, 0x140
    ctx->r6 = ADD32(0, 0X140);
    static_3_802CE360(rdram, ctx);
        goto after_17;
    // 0x8027C1D4: addiu       $a2, $zero, 0x140
    ctx->r6 = ADD32(0, 0X140);
    after_17:
    // 0x8027C1D8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8027C1DC: addiu       $a1, $zero, 0x72
    ctx->r5 = ADD32(0, 0X72);
    // 0x8027C1E0: jal         0x8021E87C
    // 0x8027C1E4: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    static_3_8021E87C(rdram, ctx);
        goto after_18;
    // 0x8027C1E4: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    after_18:
    // 0x8027C1E8: b           L_8027C2D4
    // 0x8027C1EC: lbu         $t5, 0x9F($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X9F);
        goto L_8027C2D4;
    // 0x8027C1EC: lbu         $t5, 0x9F($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X9F);
L_8027C1F0:
    // 0x8027C1F0: jal         0x8021F4E4
    // 0x8027C1F4: sw          $t0, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r8;
    static_3_8021F4E4(rdram, ctx);
        goto after_19;
    // 0x8027C1F4: sw          $t0, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r8;
    after_19:
    // 0x8027C1F8: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8027C1FC: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x8027C200: addiu       $a0, $zero, 0x89
    ctx->r4 = ADD32(0, 0X89);
    // 0x8027C204: addiu       $a1, $zero, 0xCC
    ctx->r5 = ADD32(0, 0XCC);
    // 0x8027C208: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8027C20C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8027C210: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8027C214: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8027C218: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8027C21C: jal         0x8021F35C
    // 0x8027C220: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_20;
    // 0x8027C220: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_20:
    // 0x8027C224: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8027C228: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x8027C22C: addiu       $a0, $zero, 0xB7
    ctx->r4 = ADD32(0, 0XB7);
    // 0x8027C230: addiu       $a1, $zero, 0xCC
    ctx->r5 = ADD32(0, 0XCC);
    // 0x8027C234: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8027C238: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8027C23C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8027C240: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8027C244: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8027C248: jal         0x8021F35C
    // 0x8027C24C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_21;
    // 0x8027C24C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_21:
    // 0x8027C250: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x8027C254: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x8027C258: addiu       $a0, $zero, 0xB7
    ctx->r4 = ADD32(0, 0XB7);
    // 0x8027C25C: addiu       $a1, $zero, 0xE0
    ctx->r5 = ADD32(0, 0XE0);
    // 0x8027C260: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8027C264: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8027C268: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8027C26C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8027C270: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8027C274: jal         0x8021F35C
    // 0x8027C278: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_22;
    // 0x8027C278: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_22:
    // 0x8027C27C: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8027C280: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x8027C284: addiu       $a0, $zero, 0x89
    ctx->r4 = ADD32(0, 0X89);
    // 0x8027C288: addiu       $a1, $zero, 0xE0
    ctx->r5 = ADD32(0, 0XE0);
    // 0x8027C28C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8027C290: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8027C294: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8027C298: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8027C29C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8027C2A0: jal         0x8021F35C
    // 0x8027C2A4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_23;
    // 0x8027C2A4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_23:
    // 0x8027C2A8: jal         0x8021FCD0
    // 0x8027C2AC: nop

    static_3_8021FCD0(rdram, ctx);
        goto after_24;
    // 0x8027C2AC: nop

    after_24:
    // 0x8027C2B0: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x8027C2B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8027C2B8: jal         0x802CE360
    // 0x8027C2BC: addiu       $a2, $zero, 0x140
    ctx->r6 = ADD32(0, 0X140);
    static_3_802CE360(rdram, ctx);
        goto after_25;
    // 0x8027C2BC: addiu       $a2, $zero, 0x140
    ctx->r6 = ADD32(0, 0X140);
    after_25:
    // 0x8027C2C0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8027C2C4: addiu       $a1, $zero, 0x72
    ctx->r5 = ADD32(0, 0X72);
    // 0x8027C2C8: jal         0x8021E87C
    // 0x8027C2CC: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    static_3_8021E87C(rdram, ctx);
        goto after_26;
    // 0x8027C2CC: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    after_26:
    // 0x8027C2D0: lbu         $t5, 0x9F($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X9F);
L_8027C2D4:
    // 0x8027C2D4: lw          $a3, 0x94($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X94);
    // 0x8027C2D8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8027C2DC: beq         $t5, $zero, L_8027C3A4
    if (ctx->r13 == 0) {
        // 0x8027C2E0: addiu       $a1, $a3, 0x8
        ctx->r5 = ADD32(ctx->r7, 0X8);
            goto L_8027C3A4;
    }
    // 0x8027C2E0: addiu       $a1, $a3, 0x8
    ctx->r5 = ADD32(ctx->r7, 0X8);
    // 0x8027C2E4: lw          $a3, 0x94($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X94);
    // 0x8027C2E8: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8027C2EC: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x8027C2F0: addiu       $a1, $a3, -0x8
    ctx->r5 = ADD32(ctx->r7, -0X8);
    // 0x8027C2F4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8027C2F8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8027C2FC: addiu       $a2, $zero, 0x89
    ctx->r6 = ADD32(0, 0X89);
    // 0x8027C300: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8027C304: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8027C308: jal         0x802CEEB4
    // 0x8027C30C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    static_3_802CEEB4(rdram, ctx);
        goto after_27;
    // 0x8027C30C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_27:
    // 0x8027C310: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x8027C314: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x8027C318: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x8027C31C: addiu       $a0, $zero, 0xB7
    ctx->r4 = ADD32(0, 0XB7);
    // 0x8027C320: addiu       $a2, $zero, 0x140
    ctx->r6 = ADD32(0, 0X140);
    // 0x8027C324: lw          $a3, 0x94($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X94);
    // 0x8027C328: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8027C32C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8027C330: jal         0x802CEEB4
    // 0x8027C334: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    static_3_802CEEB4(rdram, ctx);
        goto after_28;
    // 0x8027C334: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_28:
    // 0x8027C338: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8027C33C: addiu       $a1, $zero, 0x140
    ctx->r5 = ADD32(0, 0X140);
    // 0x8027C340: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8027C344: jal         0x80222AE0
    // 0x8027C348: addiu       $a3, $zero, 0xF0
    ctx->r7 = ADD32(0, 0XF0);
    static_3_80222AE0(rdram, ctx);
        goto after_29;
    // 0x8027C348: addiu       $a3, $zero, 0xF0
    ctx->r7 = ADD32(0, 0XF0);
    after_29:
    // 0x8027C34C: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x8027C350: lui         $a3, 0x437F
    ctx->r7 = S32(0X437F << 16);
    // 0x8027C354: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x8027C358: jal         0x80221F44
    // 0x8027C35C: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    static_3_80221F44(rdram, ctx);
        goto after_30;
    // 0x8027C35C: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    after_30:
    // 0x8027C360: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8027C364: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8027C368: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x8027C36C: jal         0x8021FB54
    // 0x8027C370: addiu       $a3, $zero, 0xF0
    ctx->r7 = ADD32(0, 0XF0);
    static_3_8021FB54(rdram, ctx);
        goto after_31;
    // 0x8027C370: addiu       $a3, $zero, 0xF0
    ctx->r7 = ADD32(0, 0XF0);
    after_31:
    // 0x8027C374: addiu       $a0, $zero, 0x12F
    ctx->r4 = ADD32(0, 0X12F);
    // 0x8027C378: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8027C37C: addiu       $a2, $zero, 0x140
    ctx->r6 = ADD32(0, 0X140);
    // 0x8027C380: jal         0x8021FB54
    // 0x8027C384: addiu       $a3, $zero, 0xF0
    ctx->r7 = ADD32(0, 0XF0);
    static_3_8021FB54(rdram, ctx);
        goto after_32;
    // 0x8027C384: addiu       $a3, $zero, 0xF0
    ctx->r7 = ADD32(0, 0XF0);
    after_32:
    // 0x8027C388: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8027C38C: addiu       $a1, $zero, 0xE2
    ctx->r5 = ADD32(0, 0XE2);
    // 0x8027C390: addiu       $a2, $zero, 0x140
    ctx->r6 = ADD32(0, 0X140);
    // 0x8027C394: jal         0x8021FB54
    // 0x8027C398: addiu       $a3, $zero, 0xF0
    ctx->r7 = ADD32(0, 0XF0);
    static_3_8021FB54(rdram, ctx);
        goto after_33;
    // 0x8027C398: addiu       $a3, $zero, 0xF0
    ctx->r7 = ADD32(0, 0XF0);
    after_33:
    // 0x8027C39C: b           L_8027C3EC
    // 0x8027C3A0: nop

        goto L_8027C3EC;
    // 0x8027C3A0: nop

L_8027C3A4:
    // 0x8027C3A4: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x8027C3A8: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8027C3AC: addiu       $a2, $zero, 0x89
    ctx->r6 = ADD32(0, 0X89);
    // 0x8027C3B0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8027C3B4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8027C3B8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8027C3BC: jal         0x802CEEB4
    // 0x8027C3C0: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    static_3_802CEEB4(rdram, ctx);
        goto after_34;
    // 0x8027C3C0: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    after_34:
    // 0x8027C3C4: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8027C3C8: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x8027C3CC: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x8027C3D0: addiu       $a0, $zero, 0xB7
    ctx->r4 = ADD32(0, 0XB7);
    // 0x8027C3D4: addiu       $a2, $zero, 0x140
    ctx->r6 = ADD32(0, 0X140);
    // 0x8027C3D8: lw          $a3, 0x94($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X94);
    // 0x8027C3DC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8027C3E0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8027C3E4: jal         0x802CEEB4
    // 0x8027C3E8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    static_3_802CEEB4(rdram, ctx);
        goto after_35;
    // 0x8027C3E8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_35:
L_8027C3EC:
    // 0x8027C3EC: jal         0x8021EC9C
    // 0x8027C3F0: nop

    static_3_8021EC9C(rdram, ctx);
        goto after_36;
    // 0x8027C3F0: nop

    after_36:
L_8027C3F4:
    // 0x8027C3F4: jal         0x802230E4
    // 0x8027C3F8: nop

    static_3_802230E4(rdram, ctx);
        goto after_37;
    // 0x8027C3F8: nop

    after_37:
    // 0x8027C3FC: jal         0x8022337C
    // 0x8027C400: nop

    static_3_8022337C(rdram, ctx);
        goto after_38;
    // 0x8027C400: nop

    after_38:
    // 0x8027C404: b           L_8027C488
    // 0x8027C408: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_8027C488;
    // 0x8027C408: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_8027C40C:
    // 0x8027C40C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8027C410: addiu       $a1, $zero, 0x140
    ctx->r5 = ADD32(0, 0X140);
    // 0x8027C414: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8027C418: jal         0x80222AE0
    // 0x8027C41C: addiu       $a3, $zero, 0xF0
    ctx->r7 = ADD32(0, 0XF0);
    static_3_80222AE0(rdram, ctx);
        goto after_39;
    // 0x8027C41C: addiu       $a3, $zero, 0xF0
    ctx->r7 = ADD32(0, 0XF0);
    after_39:
    // 0x8027C420: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x8027C424: lui         $a3, 0x437F
    ctx->r7 = S32(0X437F << 16);
    // 0x8027C428: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x8027C42C: jal         0x80221F44
    // 0x8027C430: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    static_3_80221F44(rdram, ctx);
        goto after_40;
    // 0x8027C430: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    after_40:
    // 0x8027C434: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8027C438: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8027C43C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x8027C440: jal         0x8021FB54
    // 0x8027C444: addiu       $a3, $zero, 0xF0
    ctx->r7 = ADD32(0, 0XF0);
    static_3_8021FB54(rdram, ctx);
        goto after_41;
    // 0x8027C444: addiu       $a3, $zero, 0xF0
    ctx->r7 = ADD32(0, 0XF0);
    after_41:
    // 0x8027C448: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8027C44C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8027C450: addiu       $a2, $zero, 0x140
    ctx->r6 = ADD32(0, 0X140);
    // 0x8027C454: jal         0x8021FB54
    // 0x8027C458: addiu       $a3, $zero, 0xF
    ctx->r7 = ADD32(0, 0XF);
    static_3_8021FB54(rdram, ctx);
        goto after_42;
    // 0x8027C458: addiu       $a3, $zero, 0xF
    ctx->r7 = ADD32(0, 0XF);
    after_42:
    // 0x8027C45C: addiu       $a0, $zero, 0x12F
    ctx->r4 = ADD32(0, 0X12F);
    // 0x8027C460: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8027C464: addiu       $a2, $zero, 0x140
    ctx->r6 = ADD32(0, 0X140);
    // 0x8027C468: jal         0x8021FB54
    // 0x8027C46C: addiu       $a3, $zero, 0xF0
    ctx->r7 = ADD32(0, 0XF0);
    static_3_8021FB54(rdram, ctx);
        goto after_43;
    // 0x8027C46C: addiu       $a3, $zero, 0xF0
    ctx->r7 = ADD32(0, 0XF0);
    after_43:
    // 0x8027C470: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8027C474: addiu       $a1, $zero, 0xE2
    ctx->r5 = ADD32(0, 0XE2);
    // 0x8027C478: addiu       $a2, $zero, 0x140
    ctx->r6 = ADD32(0, 0X140);
    // 0x8027C47C: jal         0x8021FB54
    // 0x8027C480: addiu       $a3, $zero, 0xF0
    ctx->r7 = ADD32(0, 0XF0);
    static_3_8021FB54(rdram, ctx);
        goto after_44;
    // 0x8027C480: addiu       $a3, $zero, 0xF0
    ctx->r7 = ADD32(0, 0XF0);
    after_44:
    // 0x8027C484: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_8027C488:
    // 0x8027C488: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    // 0x8027C48C: jr          $ra
    // 0x8027C490: nop

    return;
    // 0x8027C490: nop

;}
RECOMP_FUNC void D_802DE1BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802DE23C: addiu       $sp, $sp, -0xD8
    ctx->r29 = ADD32(ctx->r29, -0XD8);
    // 0x802DE240: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802DE244: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802DE248: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802DE24C: sw          $a1, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r5;
    // 0x802DE250: sw          $a2, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r6;
    // 0x802DE254: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802DE258: jal         0x80223FC4
    // 0x802DE25C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_80223FC4(rdram, ctx);
        goto after_0;
    // 0x802DE25C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x802DE260: beq         $v0, $zero, L_802DE270
    if (ctx->r2 == 0) {
        // 0x802DE264: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_802DE270;
    }
    // 0x802DE264: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DE268: jal         0x8030F3E4
    // 0x802DE26C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_8030F3E4(rdram, ctx);
        goto after_1;
    // 0x802DE26C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
L_802DE270:
    // 0x802DE270: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802DE274: jal         0x80223FC4
    // 0x802DE278: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_80223FC4(rdram, ctx);
        goto after_2;
    // 0x802DE278: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x802DE27C: beq         $v0, $zero, L_802DE28C
    if (ctx->r2 == 0) {
        // 0x802DE280: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_802DE28C;
    }
    // 0x802DE280: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DE284: jal         0x8030F3E4
    // 0x802DE288: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_8030F3E4(rdram, ctx);
        goto after_3;
    // 0x802DE288: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
L_802DE28C:
    // 0x802DE28C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802DE290: jal         0x80223FC4
    // 0x802DE294: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    static_3_80223FC4(rdram, ctx);
        goto after_4;
    // 0x802DE294: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_4:
    // 0x802DE298: beq         $v0, $zero, L_802DE2A8
    if (ctx->r2 == 0) {
        // 0x802DE29C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_802DE2A8;
    }
    // 0x802DE29C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DE2A0: jal         0x8030F3E4
    // 0x802DE2A4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    static_3_8030F3E4(rdram, ctx);
        goto after_5;
    // 0x802DE2A4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_5:
L_802DE2A8:
    // 0x802DE2A8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802DE2AC: jal         0x80223FC4
    // 0x802DE2B0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    static_3_80223FC4(rdram, ctx);
        goto after_6;
    // 0x802DE2B0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_6:
    // 0x802DE2B4: beq         $v0, $zero, L_802DE2C4
    if (ctx->r2 == 0) {
        // 0x802DE2B8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_802DE2C4;
    }
    // 0x802DE2B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DE2BC: jal         0x8030F3E4
    // 0x802DE2C0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    static_3_8030F3E4(rdram, ctx);
        goto after_7;
    // 0x802DE2C0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_7:
L_802DE2C4:
    // 0x802DE2C4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802DE2C8: jal         0x80223FC4
    // 0x802DE2CC: addiu       $a1, $zero, 0x200
    ctx->r5 = ADD32(0, 0X200);
    static_3_80223FC4(rdram, ctx);
        goto after_8;
    // 0x802DE2CC: addiu       $a1, $zero, 0x200
    ctx->r5 = ADD32(0, 0X200);
    after_8:
    // 0x802DE2D0: beq         $v0, $zero, L_802DE2E0
    if (ctx->r2 == 0) {
        // 0x802DE2D4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_802DE2E0;
    }
    // 0x802DE2D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DE2D8: jal         0x8030F3E4
    // 0x802DE2DC: addiu       $a1, $zero, 0x200
    ctx->r5 = ADD32(0, 0X200);
    static_3_8030F3E4(rdram, ctx);
        goto after_9;
    // 0x802DE2DC: addiu       $a1, $zero, 0x200
    ctx->r5 = ADD32(0, 0X200);
    after_9:
L_802DE2E0:
    // 0x802DE2E0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802DE2E4: jal         0x80223FC4
    // 0x802DE2E8: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    static_3_80223FC4(rdram, ctx);
        goto after_10;
    // 0x802DE2E8: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    after_10:
    // 0x802DE2EC: beq         $v0, $zero, L_802DE2FC
    if (ctx->r2 == 0) {
        // 0x802DE2F0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_802DE2FC;
    }
    // 0x802DE2F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DE2F4: jal         0x8030F3E4
    // 0x802DE2F8: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    static_3_8030F3E4(rdram, ctx);
        goto after_11;
    // 0x802DE2F8: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    after_11:
L_802DE2FC:
    // 0x802DE2FC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802DE300: jal         0x80223FC4
    // 0x802DE304: addiu       $a1, $zero, 0x800
    ctx->r5 = ADD32(0, 0X800);
    static_3_80223FC4(rdram, ctx);
        goto after_12;
    // 0x802DE304: addiu       $a1, $zero, 0x800
    ctx->r5 = ADD32(0, 0X800);
    after_12:
    // 0x802DE308: beq         $v0, $zero, L_802DE318
    if (ctx->r2 == 0) {
        // 0x802DE30C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_802DE318;
    }
    // 0x802DE30C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DE310: jal         0x8030F3E4
    // 0x802DE314: addiu       $a1, $zero, 0x800
    ctx->r5 = ADD32(0, 0X800);
    static_3_8030F3E4(rdram, ctx);
        goto after_13;
    // 0x802DE314: addiu       $a1, $zero, 0x800
    ctx->r5 = ADD32(0, 0X800);
    after_13:
L_802DE318:
    // 0x802DE318: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802DE31C: jal         0x80223FC4
    // 0x802DE320: addiu       $a1, $zero, 0x400
    ctx->r5 = ADD32(0, 0X400);
    static_3_80223FC4(rdram, ctx);
        goto after_14;
    // 0x802DE320: addiu       $a1, $zero, 0x400
    ctx->r5 = ADD32(0, 0X400);
    after_14:
    // 0x802DE324: beq         $v0, $zero, L_802DE334
    if (ctx->r2 == 0) {
        // 0x802DE328: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_802DE334;
    }
    // 0x802DE328: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DE32C: jal         0x8030F3E4
    // 0x802DE330: addiu       $a1, $zero, 0x400
    ctx->r5 = ADD32(0, 0X400);
    static_3_8030F3E4(rdram, ctx);
        goto after_15;
    // 0x802DE330: addiu       $a1, $zero, 0x400
    ctx->r5 = ADD32(0, 0X400);
    after_15:
L_802DE334:
    // 0x802DE334: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802DE338: jal         0x80223FC4
    // 0x802DE33C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    static_3_80223FC4(rdram, ctx);
        goto after_16;
    // 0x802DE33C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_16:
    // 0x802DE340: beq         $v0, $zero, L_802DE350
    if (ctx->r2 == 0) {
        // 0x802DE344: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_802DE350;
    }
    // 0x802DE344: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DE348: jal         0x8030F3E4
    // 0x802DE34C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    static_3_8030F3E4(rdram, ctx);
        goto after_17;
    // 0x802DE34C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_17:
L_802DE350:
    // 0x802DE350: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802DE354: jal         0x80223FC4
    // 0x802DE358: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    static_3_80223FC4(rdram, ctx);
        goto after_18;
    // 0x802DE358: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_18:
    // 0x802DE35C: beq         $v0, $zero, L_802DE36C
    if (ctx->r2 == 0) {
        // 0x802DE360: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_802DE36C;
    }
    // 0x802DE360: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DE364: jal         0x8030F3E4
    // 0x802DE368: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    static_3_8030F3E4(rdram, ctx);
        goto after_19;
    // 0x802DE368: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_19:
L_802DE36C:
    // 0x802DE36C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802DE370: jal         0x80223FC4
    // 0x802DE374: addiu       $a1, $zero, 0x2000
    ctx->r5 = ADD32(0, 0X2000);
    static_3_80223FC4(rdram, ctx);
        goto after_20;
    // 0x802DE374: addiu       $a1, $zero, 0x2000
    ctx->r5 = ADD32(0, 0X2000);
    after_20:
    // 0x802DE378: beq         $v0, $zero, L_802DE388
    if (ctx->r2 == 0) {
        // 0x802DE37C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_802DE388;
    }
    // 0x802DE37C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DE380: jal         0x8030F3E4
    // 0x802DE384: addiu       $a1, $zero, 0x2000
    ctx->r5 = ADD32(0, 0X2000);
    static_3_8030F3E4(rdram, ctx);
        goto after_21;
    // 0x802DE384: addiu       $a1, $zero, 0x2000
    ctx->r5 = ADD32(0, 0X2000);
    after_21:
L_802DE388:
    // 0x802DE388: lw          $v1, 0x7C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X7C);
    // 0x802DE38C: addiu       $a1, $sp, 0x98
    ctx->r5 = ADD32(ctx->r29, 0X98);
    // 0x802DE390: lw          $v0, 0x1A0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1A0);
    // 0x802DE394: lw          $t9, 0x64($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X64);
    // 0x802DE398: lh          $t6, 0x60($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X60);
    // 0x802DE39C: jalr        $t9
    // 0x802DE3A0: addu        $a0, $t6, $v1
    ctx->r4 = ADD32(ctx->r14, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_22;
    // 0x802DE3A0: addu        $a0, $t6, $v1
    ctx->r4 = ADD32(ctx->r14, ctx->r3);
    after_22:
    // 0x802DE3A4: lui         $at, 0x4110
    ctx->r1 = S32(0X4110 << 16);
    // 0x802DE3A8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802DE3AC: lwc1        $f4, 0xDC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x802DE3B0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802DE3B4: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x802DE3B8: lwc1        $f6, 0xDC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x802DE3BC: bc1fl       L_802DE50C
    if (!c1cs) {
        // 0x802DE3C0: mtc1        $at, $f10
        ctx->f10.u32l = ctx->r1;
            goto L_802DE50C;
    }
    goto skip_0;
    // 0x802DE3C0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    skip_0:
    // 0x802DE3C4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DE3C8: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802DE3CC: lui         $at, 0xC30C
    ctx->r1 = S32(0XC30C << 16);
    // 0x802DE3D0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802DE3D4: mul.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x802DE3D8: lui         $at, 0x4014
    ctx->r1 = S32(0X4014 << 16);
    // 0x802DE3DC: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x802DE3E0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802DE3E4: cvt.d.s     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f0.d = CVT_D_S(ctx->f4.fl);
    // 0x802DE3E8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DE3EC: c.le.d      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.d <= ctx->f8.d;
    // 0x802DE3F0: addiu       $a0, $sp, 0x98
    ctx->r4 = ADD32(ctx->r29, 0X98);
    // 0x802DE3F4: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x802DE3F8: lwc1        $f10, 0xDC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x802DE3FC: bc1f        L_802DE474
    if (!c1cs) {
        // 0x802DE400: addiu       $a2, $zero, 0x7A
        ctx->r6 = ADD32(0, 0X7A);
            goto L_802DE474;
    }
    // 0x802DE400: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    // 0x802DE404: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DE408: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802DE40C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802DE410: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802DE414: lwc1        $f6, 0xDC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x802DE418: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x802DE41C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802DE420: sub.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x802DE424: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x802DE428: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802DE42C: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x802DE430: mul.s       $f0, $f4, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x802DE434: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802DE438: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x802DE43C: mul.s       $f2, $f0, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x802DE440: nop

    // 0x802DE444: mul.s       $f4, $f2, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f10.fl);
    // 0x802DE448: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802DE44C: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x802DE450: sub.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x802DE454: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802DE458: mul.s       $f12, $f18, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = MUL_S(ctx->f18.fl, ctx->f8.fl);
    // 0x802DE45C: nop

    // 0x802DE460: mul.s       $f4, $f2, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x802DE464: sub.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x802DE468: mul.s       $f14, $f18, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = MUL_S(ctx->f18.fl, ctx->f8.fl);
    // 0x802DE46C: b           L_802DE4D8
    // 0x802DE470: nop

        goto L_802DE4D8;
    // 0x802DE470: nop

L_802DE474:
    // 0x802DE474: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802DE478: lui         $at, 0x4110
    ctx->r1 = S32(0X4110 << 16);
    // 0x802DE47C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802DE480: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x802DE484: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802DE488: sub.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x802DE48C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x802DE490: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802DE494: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x802DE498: mul.s       $f0, $f4, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x802DE49C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802DE4A0: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x802DE4A4: mul.s       $f2, $f0, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x802DE4A8: nop

    // 0x802DE4AC: mul.s       $f4, $f2, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f10.fl);
    // 0x802DE4B0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802DE4B4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802DE4B8: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x802DE4BC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802DE4C0: mul.s       $f12, $f18, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = MUL_S(ctx->f18.fl, ctx->f8.fl);
    // 0x802DE4C4: nop

    // 0x802DE4C8: mul.s       $f6, $f2, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f10.fl);
    // 0x802DE4CC: sub.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x802DE4D0: mul.s       $f14, $f18, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = MUL_S(ctx->f18.fl, ctx->f8.fl);
    // 0x802DE4D4: nop

L_802DE4D8:
    // 0x802DE4D8: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x802DE4DC: swc1        $f14, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f14.u32l;
    // 0x802DE4E0: jal         0x802D01D4
    // 0x802DE4E4: swc1        $f16, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f16.u32l;
    static_3_802D01D4(rdram, ctx);
        goto after_23;
    // 0x802DE4E4: swc1        $f16, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f16.u32l;
    after_23:
    // 0x802DE4E8: lwc1        $f14, 0x80($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X80);
    // 0x802DE4EC: addiu       $a0, $sp, 0x98
    ctx->r4 = ADD32(ctx->r29, 0X98);
    // 0x802DE4F0: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    // 0x802DE4F4: mfc1        $a1, $f14
    ctx->r5 = (int32_t)ctx->f14.u32l;
    // 0x802DE4F8: jal         0x802D01D4
    // 0x802DE4FC: nop

    static_3_802D01D4(rdram, ctx);
        goto after_24;
    // 0x802DE4FC: nop

    after_24:
    // 0x802DE500: b           L_802DE928
    // 0x802DE504: lwc1        $f16, 0x94($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X94);
        goto L_802DE928;
    // 0x802DE504: lwc1        $f16, 0x94($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X94);
    // 0x802DE508: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
L_802DE50C:
    // 0x802DE50C: nop

    // 0x802DE510: c.lt.s      $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f10.fl < ctx->f6.fl;
    // 0x802DE514: nop

    // 0x802DE518: bc1fl       L_802DE568
    if (!c1cs) {
        // 0x802DE51C: lui         $at, 0x4130
        ctx->r1 = S32(0X4130 << 16);
            goto L_802DE568;
    }
    goto skip_1;
    // 0x802DE51C: lui         $at, 0x4130
    ctx->r1 = S32(0X4130 << 16);
    skip_1:
    // 0x802DE520: lbu         $t7, 0x1BF5($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X1BF5);
    // 0x802DE524: lw          $a2, 0xE0($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XE0);
    // 0x802DE528: bnel        $t7, $zero, L_802DE568
    if (ctx->r15 != 0) {
        // 0x802DE52C: lui         $at, 0x4130
        ctx->r1 = S32(0X4130 << 16);
            goto L_802DE568;
    }
    goto skip_2;
    // 0x802DE52C: lui         $at, 0x4130
    ctx->r1 = S32(0X4130 << 16);
    skip_2:
    // 0x802DE530: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x802DE534: jal         0x802E78B8
    // 0x802DE538: lw          $a0, 0x74($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X74);
    static_3_802E78B8(rdram, ctx);
        goto after_25;
    // 0x802DE538: lw          $a0, 0x74($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X74);
    after_25:
    // 0x802DE53C: lw          $a0, 0x78($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X78);
    // 0x802DE540: lw          $a1, 0xDC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XDC);
    // 0x802DE544: jal         0x802E78B8
    // 0x802DE548: lw          $a2, 0xE0($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XE0);
    static_3_802E78B8(rdram, ctx);
        goto after_26;
    // 0x802DE548: lw          $a2, 0xE0($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XE0);
    after_26:
    // 0x802DE54C: lw          $a0, 0x7C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X7C);
    // 0x802DE550: lw          $a1, 0xDC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XDC);
    // 0x802DE554: jal         0x802E78B8
    // 0x802DE558: lw          $a2, 0xE0($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XE0);
    static_3_802E78B8(rdram, ctx);
        goto after_27;
    // 0x802DE558: lw          $a2, 0xE0($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XE0);
    after_27:
    // 0x802DE55C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802DE560: sb          $t8, 0x1BF5($s0)
    MEM_B(0X1BF5, ctx->r16) = ctx->r24;
    // 0x802DE564: lui         $at, 0x4130
    ctx->r1 = S32(0X4130 << 16);
L_802DE568:
    // 0x802DE568: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802DE56C: lwc1        $f2, 0xDC($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x802DE570: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x802DE574: nop

    // 0x802DE578: bc1fl       L_802DE600
    if (!c1cs) {
        // 0x802DE57C: lui         $at, 0x4134
        ctx->r1 = S32(0X4134 << 16);
            goto L_802DE600;
    }
    goto skip_3;
    // 0x802DE57C: lui         $at, 0x4134
    ctx->r1 = S32(0X4134 << 16);
    skip_3:
    // 0x802DE580: lbu         $t0, 0x1C2C($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X1C2C);
    // 0x802DE584: addiu       $a0, $zero, 0x384
    ctx->r4 = ADD32(0, 0X384);
    // 0x802DE588: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x802DE58C: bnel        $t0, $zero, L_802DE5C8
    if (ctx->r8 != 0) {
        // 0x802DE590: sub.s       $f4, $f2, $f0
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f0.fl;
            goto L_802DE5C8;
    }
    goto skip_4;
    // 0x802DE590: sub.s       $f4, $f2, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f0.fl;
    skip_4:
    // 0x802DE594: jal         0x80305E90
    // 0x802DE598: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_80305E90(rdram, ctx);
        goto after_28;
    // 0x802DE598: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_28:
    // 0x802DE59C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802DE5A0: addiu       $t1, $zero, 0x20
    ctx->r9 = ADD32(0, 0X20);
    // 0x802DE5A4: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x802DE5A8: addiu       $a1, $s0, 0x1C18
    ctx->r5 = ADD32(ctx->r16, 0X1C18);
    // 0x802DE5AC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x802DE5B0: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x802DE5B4: jal         0x80302238
    // 0x802DE5B8: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302238(rdram, ctx);
        goto after_29;
    // 0x802DE5B8: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_29:
    // 0x802DE5BC: b           L_802DE5F8
    // 0x802DE5C0: sb          $v0, 0x1C2C($s0)
    MEM_B(0X1C2C, ctx->r16) = ctx->r2;
        goto L_802DE5F8;
    // 0x802DE5C0: sb          $v0, 0x1C2C($s0)
    MEM_B(0X1C2C, ctx->r16) = ctx->r2;
    // 0x802DE5C4: sub.s       $f4, $f2, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f0.fl;
L_802DE5C8:
    // 0x802DE5C8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802DE5CC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DE5D0: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802DE5D4: mul.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x802DE5D8: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802DE5DC: lui         $a3, 0x3F4C
    ctx->r7 = S32(0X3F4C << 16);
    // 0x802DE5E0: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x802DE5E4: addiu       $a1, $s0, 0x1C18
    ctx->r5 = ADD32(ctx->r16, 0X1C18);
    // 0x802DE5E8: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x802DE5EC: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x802DE5F0: jal         0x8030DDD0
    // 0x802DE5F4: nop

    static_3_8030DDD0(rdram, ctx);
        goto after_30;
    // 0x802DE5F4: nop

    after_30:
L_802DE5F8:
    // 0x802DE5F8: lwc1        $f2, 0xDC($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x802DE5FC: lui         $at, 0x4134
    ctx->r1 = S32(0X4134 << 16);
L_802DE600:
    // 0x802DE600: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802DE604: nop

    // 0x802DE608: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x802DE60C: nop

    // 0x802DE610: bc1fl       L_802DE684
    if (!c1cs) {
        // 0x802DE614: lui         $at, 0x4140
        ctx->r1 = S32(0X4140 << 16);
            goto L_802DE684;
    }
    goto skip_5;
    // 0x802DE614: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    skip_5:
    // 0x802DE618: lbu         $t2, 0x1C29($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X1C29);
    // 0x802DE61C: lui         $a3, 0x3F19
    ctx->r7 = S32(0X3F19 << 16);
    // 0x802DE620: ori         $a3, $a3, 0x999A
    ctx->r7 = ctx->r7 | 0X999A;
    // 0x802DE624: bne         $t2, $zero, L_802DE660
    if (ctx->r10 != 0) {
        // 0x802DE628: addiu       $a1, $s0, 0x1C00
        ctx->r5 = ADD32(ctx->r16, 0X1C00);
            goto L_802DE660;
    }
    // 0x802DE628: addiu       $a1, $s0, 0x1C00
    ctx->r5 = ADD32(ctx->r16, 0X1C00);
    // 0x802DE62C: addiu       $a0, $zero, 0x384
    ctx->r4 = ADD32(0, 0X384);
    // 0x802DE630: jal         0x80305E90
    // 0x802DE634: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_80305E90(rdram, ctx);
        goto after_31;
    // 0x802DE634: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_31:
    // 0x802DE638: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802DE63C: addiu       $t3, $zero, 0x20
    ctx->r11 = ADD32(0, 0X20);
    // 0x802DE640: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x802DE644: addiu       $a1, $s0, 0x1C00
    ctx->r5 = ADD32(ctx->r16, 0X1C00);
    // 0x802DE648: addiu       $a2, $zero, 0x29
    ctx->r6 = ADD32(0, 0X29);
    // 0x802DE64C: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x802DE650: jal         0x80302238
    // 0x802DE654: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302238(rdram, ctx);
        goto after_32;
    // 0x802DE654: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_32:
    // 0x802DE658: b           L_802DE67C
    // 0x802DE65C: sb          $v0, 0x1C29($s0)
    MEM_B(0X1C29, ctx->r16) = ctx->r2;
        goto L_802DE67C;
    // 0x802DE65C: sb          $v0, 0x1C29($s0)
    MEM_B(0X1C29, ctx->r16) = ctx->r2;
L_802DE660:
    // 0x802DE660: sub.s       $f4, $f2, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x802DE664: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DE668: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802DE66C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802DE670: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x802DE674: jal         0x8030DDD0
    // 0x802DE678: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    static_3_8030DDD0(rdram, ctx);
        goto after_33;
    // 0x802DE678: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_33:
L_802DE67C:
    // 0x802DE67C: lwc1        $f2, 0xDC($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x802DE680: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
L_802DE684:
    // 0x802DE684: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802DE688: nop

    // 0x802DE68C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x802DE690: nop

    // 0x802DE694: bc1fl       L_802DE704
    if (!c1cs) {
        // 0x802DE698: lui         $at, 0x4148
        ctx->r1 = S32(0X4148 << 16);
            goto L_802DE704;
    }
    goto skip_6;
    // 0x802DE698: lui         $at, 0x4148
    ctx->r1 = S32(0X4148 << 16);
    skip_6:
    // 0x802DE69C: lbu         $t4, 0x1C2A($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X1C2A);
    // 0x802DE6A0: addiu       $a0, $zero, 0x384
    ctx->r4 = ADD32(0, 0X384);
    // 0x802DE6A4: addiu       $a1, $s0, 0x1C08
    ctx->r5 = ADD32(ctx->r16, 0X1C08);
    // 0x802DE6A8: bne         $t4, $zero, L_802DE6E0
    if (ctx->r12 != 0) {
        // 0x802DE6AC: lui         $a3, 0x3F80
        ctx->r7 = S32(0X3F80 << 16);
            goto L_802DE6E0;
    }
    // 0x802DE6AC: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802DE6B0: jal         0x80305E90
    // 0x802DE6B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_80305E90(rdram, ctx);
        goto after_34;
    // 0x802DE6B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_34:
    // 0x802DE6B8: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802DE6BC: addiu       $t5, $zero, 0x20
    ctx->r13 = ADD32(0, 0X20);
    // 0x802DE6C0: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x802DE6C4: addiu       $a1, $s0, 0x1C08
    ctx->r5 = ADD32(ctx->r16, 0X1C08);
    // 0x802DE6C8: addiu       $a2, $zero, 0x29
    ctx->r6 = ADD32(0, 0X29);
    // 0x802DE6CC: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x802DE6D0: jal         0x80302238
    // 0x802DE6D4: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302238(rdram, ctx);
        goto after_35;
    // 0x802DE6D4: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_35:
    // 0x802DE6D8: b           L_802DE6FC
    // 0x802DE6DC: sb          $v0, 0x1C2A($s0)
    MEM_B(0X1C2A, ctx->r16) = ctx->r2;
        goto L_802DE6FC;
    // 0x802DE6DC: sb          $v0, 0x1C2A($s0)
    MEM_B(0X1C2A, ctx->r16) = ctx->r2;
L_802DE6E0:
    // 0x802DE6E0: sub.s       $f10, $f2, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x802DE6E4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DE6E8: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802DE6EC: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802DE6F0: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x802DE6F4: jal         0x8030DDD0
    // 0x802DE6F8: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    static_3_8030DDD0(rdram, ctx);
        goto after_36;
    // 0x802DE6F8: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_36:
L_802DE6FC:
    // 0x802DE6FC: lwc1        $f2, 0xDC($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x802DE700: lui         $at, 0x4148
    ctx->r1 = S32(0X4148 << 16);
L_802DE704:
    // 0x802DE704: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802DE708: nop

    // 0x802DE70C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x802DE710: nop

    // 0x802DE714: bc1fl       L_802DE788
    if (!c1cs) {
        // 0x802DE718: lui         $at, 0x4158
        ctx->r1 = S32(0X4158 << 16);
            goto L_802DE788;
    }
    goto skip_7;
    // 0x802DE718: lui         $at, 0x4158
    ctx->r1 = S32(0X4158 << 16);
    skip_7:
    // 0x802DE71C: lbu         $t6, 0x1C2B($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X1C2B);
    // 0x802DE720: lui         $a3, 0x3F99
    ctx->r7 = S32(0X3F99 << 16);
    // 0x802DE724: ori         $a3, $a3, 0x999A
    ctx->r7 = ctx->r7 | 0X999A;
    // 0x802DE728: bne         $t6, $zero, L_802DE764
    if (ctx->r14 != 0) {
        // 0x802DE72C: addiu       $a1, $s0, 0x1C10
        ctx->r5 = ADD32(ctx->r16, 0X1C10);
            goto L_802DE764;
    }
    // 0x802DE72C: addiu       $a1, $s0, 0x1C10
    ctx->r5 = ADD32(ctx->r16, 0X1C10);
    // 0x802DE730: addiu       $a0, $zero, 0x384
    ctx->r4 = ADD32(0, 0X384);
    // 0x802DE734: jal         0x80305E90
    // 0x802DE738: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_80305E90(rdram, ctx);
        goto after_37;
    // 0x802DE738: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_37:
    // 0x802DE73C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802DE740: addiu       $t9, $zero, 0x20
    ctx->r25 = ADD32(0, 0X20);
    // 0x802DE744: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x802DE748: addiu       $a1, $s0, 0x1C10
    ctx->r5 = ADD32(ctx->r16, 0X1C10);
    // 0x802DE74C: addiu       $a2, $zero, 0x29
    ctx->r6 = ADD32(0, 0X29);
    // 0x802DE750: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x802DE754: jal         0x80302238
    // 0x802DE758: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302238(rdram, ctx);
        goto after_38;
    // 0x802DE758: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_38:
    // 0x802DE75C: b           L_802DE780
    // 0x802DE760: sb          $v0, 0x1C2B($s0)
    MEM_B(0X1C2B, ctx->r16) = ctx->r2;
        goto L_802DE780;
    // 0x802DE760: sb          $v0, 0x1C2B($s0)
    MEM_B(0X1C2B, ctx->r16) = ctx->r2;
L_802DE764:
    // 0x802DE764: sub.s       $f4, $f2, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x802DE768: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DE76C: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802DE770: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802DE774: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x802DE778: jal         0x8030DDD0
    // 0x802DE77C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    static_3_8030DDD0(rdram, ctx);
        goto after_39;
    // 0x802DE77C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_39:
L_802DE780:
    // 0x802DE780: lwc1        $f2, 0xDC($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x802DE784: lui         $at, 0x4158
    ctx->r1 = S32(0X4158 << 16);
L_802DE788:
    // 0x802DE788: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802DE78C: nop

    // 0x802DE790: c.lt.s      $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f10.fl < ctx->f2.fl;
    // 0x802DE794: nop

    // 0x802DE798: bc1fl       L_802DE810
    if (!c1cs) {
        // 0x802DE79C: lui         $a1, 0x4049
        ctx->r5 = S32(0X4049 << 16);
            goto L_802DE810;
    }
    goto skip_8;
    // 0x802DE79C: lui         $a1, 0x4049
    ctx->r5 = S32(0X4049 << 16);
    skip_8:
    // 0x802DE7A0: lbu         $t7, 0x1C28($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X1C28);
    // 0x802DE7A4: addiu       $a0, $zero, 0x384
    ctx->r4 = ADD32(0, 0X384);
    // 0x802DE7A8: bnel        $t7, $zero, L_802DE810
    if (ctx->r15 != 0) {
        // 0x802DE7AC: lui         $a1, 0x4049
        ctx->r5 = S32(0X4049 << 16);
            goto L_802DE810;
    }
    goto skip_9;
    // 0x802DE7AC: lui         $a1, 0x4049
    ctx->r5 = S32(0X4049 << 16);
    skip_9:
    // 0x802DE7B0: jal         0x80305E90
    // 0x802DE7B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_80305E90(rdram, ctx);
        goto after_40;
    // 0x802DE7B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_40:
    // 0x802DE7B8: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802DE7BC: addiu       $a1, $s0, 0x1BF8
    ctx->r5 = ADD32(ctx->r16, 0X1BF8);
    // 0x802DE7C0: addiu       $t8, $zero, 0x30
    ctx->r24 = ADD32(0, 0X30);
    // 0x802DE7C4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x802DE7C8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x802DE7CC: addiu       $a2, $zero, 0x25
    ctx->r6 = ADD32(0, 0X25);
    // 0x802DE7D0: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x802DE7D4: jal         0x80302238
    // 0x802DE7D8: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302238(rdram, ctx);
        goto after_41;
    // 0x802DE7D8: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_41:
    // 0x802DE7DC: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802DE7E0: sb          $v0, 0x1C28($s0)
    MEM_B(0X1C28, ctx->r16) = ctx->r2;
    // 0x802DE7E4: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x802DE7E8: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x802DE7EC: jal         0x8030262C
    // 0x802DE7F0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_8030262C(rdram, ctx);
        goto after_42;
    // 0x802DE7F0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_42:
    // 0x802DE7F4: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802DE7F8: lui         $a2, 0x3F33
    ctx->r6 = S32(0X3F33 << 16);
    // 0x802DE7FC: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x802DE800: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x802DE804: jal         0x80302664
    // 0x802DE808: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302664(rdram, ctx);
        goto after_43;
    // 0x802DE808: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_43:
    // 0x802DE80C: lui         $a1, 0x4049
    ctx->r5 = S32(0X4049 << 16);
L_802DE810:
    // 0x802DE810: ori         $a1, $a1, 0xFE0
    ctx->r5 = ctx->r5 | 0XFE0;
    // 0x802DE814: addiu       $a0, $sp, 0x98
    ctx->r4 = ADD32(ctx->r29, 0X98);
    // 0x802DE818: jal         0x802D01D4
    // 0x802DE81C: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    static_3_802D01D4(rdram, ctx);
        goto after_44;
    // 0x802DE81C: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    after_44:
    // 0x802DE820: lui         $a1, 0xBE32
    ctx->r5 = S32(0XBE32 << 16);
    // 0x802DE824: ori         $a1, $a1, 0xB8C7
    ctx->r5 = ctx->r5 | 0XB8C7;
    // 0x802DE828: addiu       $a0, $sp, 0x98
    ctx->r4 = ADD32(ctx->r29, 0X98);
    // 0x802DE82C: jal         0x802D01D4
    // 0x802DE830: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    static_3_802D01D4(rdram, ctx);
        goto after_45;
    // 0x802DE830: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    after_45:
    // 0x802DE834: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802DE838: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802DE83C: lwc1        $f6, 0xDC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x802DE840: lui         $at, 0x4138
    ctx->r1 = S32(0X4138 << 16);
    // 0x802DE844: lwc1        $f10, 0xDC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x802DE848: c.lt.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl < ctx->f4.fl;
    // 0x802DE84C: nop

    // 0x802DE850: bc1fl       L_802DE86C
    if (!c1cs) {
        // 0x802DE854: mtc1        $at, $f8
        ctx->f8.u32l = ctx->r1;
            goto L_802DE86C;
    }
    goto skip_10;
    // 0x802DE854: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    skip_10:
    // 0x802DE858: lui         $at, 0xC220
    ctx->r1 = S32(0XC220 << 16);
    // 0x802DE85C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802DE860: b           L_802DE92C
    // 0x802DE864: lbu         $t0, 0x1BF6($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X1BF6);
        goto L_802DE92C;
    // 0x802DE864: lbu         $t0, 0x1BF6($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X1BF6);
    // 0x802DE868: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
L_802DE86C:
    // 0x802DE86C: lui         $at, 0x4150
    ctx->r1 = S32(0X4150 << 16);
    // 0x802DE870: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x802DE874: lwc1        $f8, 0xDC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x802DE878: bc1fl       L_802DE8CC
    if (!c1cs) {
        // 0x802DE87C: mtc1        $at, $f2
        ctx->f2.u32l = ctx->r1;
            goto L_802DE8CC;
    }
    goto skip_11;
    // 0x802DE87C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    skip_11:
    // 0x802DE880: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802DE884: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802DE888: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DE88C: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802DE890: sub.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x802DE894: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x802DE898: mul.s       $f0, $f4, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x802DE89C: neg.s       $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = -ctx->f0.fl;
    // 0x802DE8A0: mul.s       $f6, $f10, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x802DE8A4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802DE8A8: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x802DE8AC: mul.s       $f4, $f6, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x802DE8B0: nop

    // 0x802DE8B4: mul.s       $f8, $f0, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x802DE8B8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802DE8BC: mul.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x802DE8C0: b           L_802DE928
    // 0x802DE8C4: sub.s       $f16, $f6, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f4.fl;
        goto L_802DE928;
    // 0x802DE8C4: sub.s       $f16, $f6, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x802DE8C8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
L_802DE8CC:
    // 0x802DE8CC: lui         $at, 0xC452
    ctx->r1 = S32(0XC452 << 16);
    // 0x802DE8D0: c.le.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl <= ctx->f2.fl;
    // 0x802DE8D4: nop

    // 0x802DE8D8: bc1fl       L_802DE924
    if (!c1cs) {
        // 0x802DE8DC: mtc1        $at, $f16
        ctx->f16.u32l = ctx->r1;
            goto L_802DE924;
    }
    goto skip_12;
    // 0x802DE8DC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    skip_12:
    // 0x802DE8E0: sub.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f8.fl;
    // 0x802DE8E4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DE8E8: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802DE8EC: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x802DE8F0: mul.s       $f0, $f10, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x802DE8F4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802DE8F8: lui         $at, 0x4452
    ctx->r1 = S32(0X4452 << 16);
    // 0x802DE8FC: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x802DE900: nop

    // 0x802DE904: mul.s       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x802DE908: nop

    // 0x802DE90C: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x802DE910: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802DE914: mul.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x802DE918: b           L_802DE928
    // 0x802DE91C: sub.s       $f16, $f4, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f4.fl - ctx->f8.fl;
        goto L_802DE928;
    // 0x802DE91C: sub.s       $f16, $f4, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x802DE920: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
L_802DE924:
    // 0x802DE924: nop

L_802DE928:
    // 0x802DE928: lbu         $t0, 0x1BF6($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X1BF6);
L_802DE92C:
    // 0x802DE92C: lui         $at, 0x4160
    ctx->r1 = S32(0X4160 << 16);
    // 0x802DE930: lwc1        $f6, 0xDC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x802DE934: bnel        $t0, $zero, L_802DE9D8
    if (ctx->r8 != 0) {
        // 0x802DE938: mfc1        $a2, $f16
        ctx->r6 = (int32_t)ctx->f16.u32l;
            goto L_802DE9D8;
    }
    goto skip_13;
    // 0x802DE938: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    skip_13:
    // 0x802DE93C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802DE940: nop

    // 0x802DE944: c.lt.s      $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f10.fl < ctx->f6.fl;
    // 0x802DE948: nop

    // 0x802DE94C: bc1fl       L_802DE9D8
    if (!c1cs) {
        // 0x802DE950: mfc1        $a2, $f16
        ctx->r6 = (int32_t)ctx->f16.u32l;
            goto L_802DE9D8;
    }
    goto skip_14;
    // 0x802DE950: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    skip_14:
    // 0x802DE954: lw          $v0, 0x220($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X220);
    // 0x802DE958: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x802DE95C: lh          $t1, 0x60($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X60);
    // 0x802DE960: swc1        $f16, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f16.u32l;
    // 0x802DE964: lw          $t9, 0x64($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X64);
    // 0x802DE968: addu        $a0, $t1, $s0
    ctx->r4 = ADD32(ctx->r9, ctx->r16);
    // 0x802DE96C: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    // 0x802DE970: jalr        $t9
    // 0x802DE974: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_46;
    // 0x802DE974: nop

    after_46:
    // 0x802DE978: lui         $at, 0xC4E1
    ctx->r1 = S32(0XC4E1 << 16);
    // 0x802DE97C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802DE980: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x802DE984: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802DE988: lwc1        $f8, 0x74($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X74);
    // 0x802DE98C: swc1        $f4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f4.u32l;
    // 0x802DE990: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802DE994: sub.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x802DE998: swc1        $f6, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f6.u32l;
    // 0x802DE99C: lw          $v0, 0x1BB0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1BB0);
    // 0x802DE9A0: lh          $t2, 0x18($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X18);
    // 0x802DE9A4: lw          $t9, 0x1C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X1C);
    // 0x802DE9A8: addu        $a0, $t2, $s0
    ctx->r4 = ADD32(ctx->r10, ctx->r16);
    // 0x802DE9AC: jalr        $t9
    // 0x802DE9B0: addiu       $a0, $a0, 0x1B00
    ctx->r4 = ADD32(ctx->r4, 0X1B00);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_47;
    // 0x802DE9B0: addiu       $a0, $a0, 0x1B00
    ctx->r4 = ADD32(ctx->r4, 0X1B00);
    after_47:
    // 0x802DE9B4: addiu       $a0, $s0, 0x1B04
    ctx->r4 = ADD32(ctx->r16, 0X1B04);
    // 0x802DE9B8: jal         0x80228DE0
    // 0x802DE9BC: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    func_80228DE0(rdram, ctx);
        goto after_48;
    // 0x802DE9BC: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_48:
    // 0x802DE9C0: lwc1        $f16, 0x94($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X94);
    // 0x802DE9C4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x802DE9C8: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x802DE9CC: sb          $t3, 0x1BAC($s0)
    MEM_B(0X1BAC, ctx->r16) = ctx->r11;
    // 0x802DE9D0: sb          $t4, 0x1BF6($s0)
    MEM_B(0X1BF6, ctx->r16) = ctx->r12;
    // 0x802DE9D4: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
L_802DE9D8:
    // 0x802DE9D8: addiu       $a0, $sp, 0x98
    ctx->r4 = ADD32(ctx->r29, 0X98);
    // 0x802DE9DC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802DE9E0: jal         0x8022A0D0
    // 0x802DE9E4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    static_3_8022A0D0(rdram, ctx);
        goto after_49;
    // 0x802DE9E4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_49:
    // 0x802DE9E8: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802DE9EC: addiu       $a1, $sp, 0x98
    ctx->r5 = ADD32(ctx->r29, 0X98);
    // 0x802DE9F0: jal         0x802FA318
    // 0x802DE9F4: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    static_3_802FA318(rdram, ctx);
        goto after_50;
    // 0x802DE9F4: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    after_50:
    // 0x802DE9F8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802DE9FC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802DEA00: lwc1        $f4, 0xD0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x802DEA04: addiu       $a0, $s0, 0x80
    ctx->r4 = ADD32(ctx->r16, 0X80);
    // 0x802DEA08: lw          $a1, 0xC8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XC8);
    // 0x802DEA0C: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x802DEA10: lw          $a2, 0xCC($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XCC);
    // 0x802DEA14: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x802DEA18: jal         0x80318E04
    // 0x802DEA1C: nop

    static_3_80318E04(rdram, ctx);
        goto after_51;
    // 0x802DEA1C: nop

    after_51:
    // 0x802DEA20: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x802DEA24: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802DEA28: lwc1        $f6, 0xC8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x802DEA2C: addiu       $a0, $s0, 0x720
    ctx->r4 = ADD32(ctx->r16, 0X720);
    // 0x802DEA30: lw          $a2, 0xCC($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XCC);
    // 0x802DEA34: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x802DEA38: lw          $a3, 0xD0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XD0);
    // 0x802DEA3C: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x802DEA40: jal         0x80318E04
    // 0x802DEA44: nop

    static_3_80318E04(rdram, ctx);
        goto after_52;
    // 0x802DEA44: nop

    after_52:
    // 0x802DEA48: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x802DEA4C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802DEA50: lwc1        $f10, 0xC8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x802DEA54: addiu       $a0, $s0, 0xDC0
    ctx->r4 = ADD32(ctx->r16, 0XDC0);
    // 0x802DEA58: lw          $a2, 0xCC($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XCC);
    // 0x802DEA5C: sub.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x802DEA60: lw          $a3, 0xD0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XD0);
    // 0x802DEA64: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x802DEA68: jal         0x80318E04
    // 0x802DEA6C: nop

    static_3_80318E04(rdram, ctx);
        goto after_53;
    // 0x802DEA6C: nop

    after_53:
    // 0x802DEA70: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802DEA74: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802DEA78: lwc1        $f8, 0xD0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x802DEA7C: addiu       $a0, $s0, 0x1460
    ctx->r4 = ADD32(ctx->r16, 0X1460);
    // 0x802DEA80: lw          $a1, 0xC8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XC8);
    // 0x802DEA84: sub.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x802DEA88: lw          $a2, 0xCC($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XCC);
    // 0x802DEA8C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x802DEA90: jal         0x80318E04
    // 0x802DEA94: nop

    static_3_80318E04(rdram, ctx);
        goto after_54;
    // 0x802DEA94: nop

    after_54:
    // 0x802DEA98: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x802DEA9C: lwc1        $f8, 0xE0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x802DEAA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802DEAA4: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x802DEAA8: swc1        $f10, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f10.u32l;
    // 0x802DEAAC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802DEAB0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802DEAB4: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
    // 0x802DEAB8: jr          $ra
    // 0x802DEABC: nop

    return;
    // 0x802DEABC: nop

;}
RECOMP_FUNC void D_8020173C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8020173C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80201740: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80201744: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x80201748: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x8020174C: lbu         $v1, 0x23($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X23);
    // 0x80201750: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80201754: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80201758: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8020175C: bne         $at, $zero, L_80201788
    if (ctx->r1 != 0) {
        // 0x80201760: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_80201788;
    }
    // 0x80201760: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80201764: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80201768: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x8020176C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80201770: addiu       $a2, $zero, 0x176
    ctx->r6 = ADD32(0, 0X176);
    // 0x80201774: jal         0x80231C9C
    // 0x80201778: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    static_3_80231C9C(rdram, ctx);
        goto after_0;
    // 0x80201778: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x8020177C: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x80201780: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x80201784: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
L_80201788:
    // 0x80201788: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8020178C: beq         $at, $zero, L_80201820
    if (ctx->r1 == 0) {
        // 0x80201790: lwc1        $f4, 0x24($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
            goto L_80201820;
    }
    // 0x80201790: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80201794: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80201798: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8020179C: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802017A0: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x802017A4: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802017A8: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802017AC: bc1tl       L_802017C0
    if (c1cs) {
        // 0x802017B0: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_802017C0;
    }
    goto skip_0;
    // 0x802017B0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_0:
    // 0x802017B4: jal         0x80231C9C
    // 0x802017B8: addiu       $a2, $zero, 0x178
    ctx->r6 = ADD32(0, 0X178);
    static_3_80231C9C(rdram, ctx);
        goto after_1;
    // 0x802017B8: addiu       $a2, $zero, 0x178
    ctx->r6 = ADD32(0, 0X178);
    after_1:
    // 0x802017BC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_802017C0:
    // 0x802017C0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802017C4: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802017C8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802017CC: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802017D0: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x802017D4: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802017D8: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802017DC: bc1tl       L_802017F0
    if (c1cs) {
        // 0x802017E0: lbu         $t7, 0x23($sp)
        ctx->r15 = MEM_BU(ctx->r29, 0X23);
            goto L_802017F0;
    }
    goto skip_1;
    // 0x802017E0: lbu         $t7, 0x23($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X23);
    skip_1:
    // 0x802017E4: jal         0x80231C9C
    // 0x802017E8: addiu       $a2, $zero, 0x179
    ctx->r6 = ADD32(0, 0X179);
    static_3_80231C9C(rdram, ctx);
        goto after_2;
    // 0x802017E8: addiu       $a2, $zero, 0x179
    ctx->r6 = ADD32(0, 0X179);
    after_2:
    // 0x802017EC: lbu         $t7, 0x23($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X23);
L_802017F0:
    // 0x802017F0: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802017F4: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x802017F8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x802017FC: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80201800: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80201804: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80201808: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8020180C: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80201810: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80201814: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80201818: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x8020181C: swc1        $f16, 0x70($t9)
    MEM_W(0X70, ctx->r25) = ctx->f16.u32l;
L_80201820:
    // 0x80201820: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80201824: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80201828: jr          $ra
    // 0x8020182C: nop

    return;
    // 0x8020182C: nop

;}
RECOMP_FUNC void D_802D3E20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D3EA0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802D3EA4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802D3EA8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802D3EAC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x802D3EB0: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x802D3EB4: sw          $a1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r5;
    // 0x802D3EB8: jal         0x80224CA8
    // 0x802D3EBC: addiu       $a0, $zero, 0x51
    ctx->r4 = ADD32(0, 0X51);
    static_3_80224CA8(rdram, ctx);
        goto after_0;
    // 0x802D3EBC: addiu       $a0, $zero, 0x51
    ctx->r4 = ADD32(0, 0X51);
    after_0:
    // 0x802D3EC0: jal         0x80224CA8
    // 0x802D3EC4: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    static_3_80224CA8(rdram, ctx);
        goto after_1;
    // 0x802D3EC4: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    after_1:
    // 0x802D3EC8: jal         0x80224CA8
    // 0x802D3ECC: addiu       $a0, $zero, 0x36
    ctx->r4 = ADD32(0, 0X36);
    static_3_80224CA8(rdram, ctx);
        goto after_2;
    // 0x802D3ECC: addiu       $a0, $zero, 0x36
    ctx->r4 = ADD32(0, 0X36);
    after_2:
    // 0x802D3ED0: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x802D3ED4: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802D3ED8: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x802D3EDC: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x802D3EE0: addiu       $s0, $a3, 0x70
    ctx->r16 = ADD32(ctx->r7, 0X70);
    // 0x802D3EE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D3EE8: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x802D3EEC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x802D3EF0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x802D3EF4: jal         0x8028D2E8
    // 0x802D3EF8: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    static_3_8028D2E8(rdram, ctx);
        goto after_3;
    // 0x802D3EF8: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    after_3:
    // 0x802D3EFC: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x802D3F00: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x802D3F04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D3F08: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802D3F0C: jal         0x8028DDD8
    // 0x802D3F10: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    static_3_8028DDD8(rdram, ctx);
        goto after_4;
    // 0x802D3F10: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_4:
    // 0x802D3F14: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x802D3F18: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x802D3F1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D3F20: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802D3F24: jal         0x8028DDD8
    // 0x802D3F28: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    static_3_8028DDD8(rdram, ctx);
        goto after_5;
    // 0x802D3F28: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_5:
    // 0x802D3F2C: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x802D3F30: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x802D3F34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D3F38: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802D3F3C: jal         0x8028DDD8
    // 0x802D3F40: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    static_3_8028DDD8(rdram, ctx);
        goto after_6;
    // 0x802D3F40: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x802D3F44: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802D3F48: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802D3F4C: jal         0x8028DB8C
    // 0x802D3F50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_8028DB8C(rdram, ctx);
        goto after_7;
    // 0x802D3F50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x802D3F54: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802D3F58: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802D3F5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D3F60: jal         0x8028DED0
    // 0x802D3F64: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    static_3_8028DED0(rdram, ctx);
        goto after_8;
    // 0x802D3F64: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_8:
    // 0x802D3F68: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802D3F6C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802D3F70: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802D3F74: jr          $ra
    // 0x802D3F78: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x802D3F78: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void D_8029CBC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029CC48: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8029CC4C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8029CC50: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8029CC54: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8029CC58: sb          $t6, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r14;
    // 0x8029CC5C: lbu         $v0, 0x18($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X18);
    // 0x8029CC60: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x8029CC64: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8029CC68: beq         $v0, $at, L_8029CC80
    if (ctx->r2 == ctx->r1) {
        // 0x8029CC6C: addiu       $at, $zero, 0x9
        ctx->r1 = ADD32(0, 0X9);
            goto L_8029CC80;
    }
    // 0x8029CC6C: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x8029CC70: beq         $v0, $at, L_8029CCC0
    if (ctx->r2 == ctx->r1) {
        // 0x8029CC74: nop
    
            goto L_8029CCC0;
    }
    // 0x8029CC74: nop

    // 0x8029CC78: b           L_8029CCFC
    // 0x8029CC7C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8029CCFC;
    // 0x8029CC7C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8029CC80:
    // 0x8029CC80: jal         0x802FAB28
    // 0x8029CC84: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    static_3_802FAB28(rdram, ctx);
        goto after_0;
    // 0x8029CC84: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    after_0:
    // 0x8029CC88: jal         0x802FB240
    // 0x8029CC8C: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    static_3_802FB240(rdram, ctx);
        goto after_1;
    // 0x8029CC8C: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    after_1:
    // 0x8029CC90: beq         $v0, $zero, L_8029CCA4
    if (ctx->r2 == 0) {
        // 0x8029CC94: lui         $at, 0x0
        ctx->r1 = S32(0X0 << 16);
            goto L_8029CCA4;
    }
    // 0x8029CC94: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8029CC98: sb          $zero, 0x18($s0)
    MEM_B(0X18, ctx->r16) = 0;
    // 0x8029CC9C: b           L_8029CCF8
    // 0x8029CCA0: sb          $zero, 0x27($sp)
    MEM_B(0X27, ctx->r29) = 0;
        goto L_8029CCF8;
    // 0x8029CCA0: sb          $zero, 0x27($sp)
    MEM_B(0X27, ctx->r29) = 0;
L_8029CCA4:
    // 0x8029CCA4: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
    // 0x8029CCA8: jal         0x80224CA8
    // 0x8029CCAC: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    static_3_80224CA8(rdram, ctx);
        goto after_2;
    // 0x8029CCAC: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_2:
    // 0x8029CCB0: jal         0x802CA14C
    // 0x8029CCB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802CA14C(rdram, ctx);
        goto after_3;
    // 0x8029CCB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8029CCB8: b           L_8029CCFC
    // 0x8029CCBC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8029CCFC;
    // 0x8029CCBC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8029CCC0:
    // 0x8029CCC0: jal         0x802FC314
    // 0x8029CCC4: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    static_3_802FC314(rdram, ctx);
        goto after_4;
    // 0x8029CCC4: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    after_4:
    // 0x8029CCC8: jal         0x802FC98C
    // 0x8029CCCC: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    static_3_802FC98C(rdram, ctx);
        goto after_5;
    // 0x8029CCCC: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    after_5:
    // 0x8029CCD0: beq         $v0, $zero, L_8029CCE4
    if (ctx->r2 == 0) {
        // 0x8029CCD4: lui         $at, 0x0
        ctx->r1 = S32(0X0 << 16);
            goto L_8029CCE4;
    }
    // 0x8029CCD4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8029CCD8: sb          $zero, 0x18($s0)
    MEM_B(0X18, ctx->r16) = 0;
    // 0x8029CCDC: b           L_8029CCF8
    // 0x8029CCE0: sb          $zero, 0x27($sp)
    MEM_B(0X27, ctx->r29) = 0;
        goto L_8029CCF8;
    // 0x8029CCE0: sb          $zero, 0x27($sp)
    MEM_B(0X27, ctx->r29) = 0;
L_8029CCE4:
    // 0x8029CCE4: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
    // 0x8029CCE8: jal         0x80224CA8
    // 0x8029CCEC: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    static_3_80224CA8(rdram, ctx);
        goto after_6;
    // 0x8029CCEC: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_6:
    // 0x8029CCF0: jal         0x802CA14C
    // 0x8029CCF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802CA14C(rdram, ctx);
        goto after_7;
    // 0x8029CCF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
L_8029CCF8:
    // 0x8029CCF8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8029CCFC:
    // 0x8029CCFC: lbu         $v0, 0x27($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X27);
    // 0x8029CD00: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8029CD04: jr          $ra
    // 0x8029CD08: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8029CD08: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void D_802A84B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A8538: addiu       $sp, $sp, -0xD0
    ctx->r29 = ADD32(ctx->r29, -0XD0);
    // 0x802A853C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802A8540: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802A8544: sw          $a1, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r5;
    // 0x802A8548: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x802A854C: lwc1        $f4, 0x1C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x802A8550: lbu         $t7, 0x28($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X28);
    // 0x802A8554: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802A8558: add.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f12.fl;
    // 0x802A855C: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x802A8560: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802A8564: swc1        $f6, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f6.u32l;
    // 0x802A8568: bne         $t7, $zero, L_802A8638
    if (ctx->r15 != 0) {
        // 0x802A856C: sw          $t6, 0x14($a0)
        MEM_W(0X14, ctx->r4) = ctx->r14;
            goto L_802A8638;
    }
    // 0x802A856C: sw          $t6, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r14;
    // 0x802A8570: lbu         $t8, 0x7FCC($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X7FCC);
    // 0x802A8574: bnel        $t8, $zero, L_802A863C
    if (ctx->r24 != 0) {
        // 0x802A8578: lui         $at, 0x4170
        ctx->r1 = S32(0X4170 << 16);
            goto L_802A863C;
    }
    goto skip_0;
    // 0x802A8578: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    skip_0:
    // 0x802A857C: jal         0x803183C0
    // 0x802A8580: lw          $a0, 0x7FB8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7FB8);
    static_3_803183C0(rdram, ctx);
        goto after_0;
    // 0x802A8580: lw          $a0, 0x7FB8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7FB8);
    after_0:
    // 0x802A8584: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802A8588: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802A858C: nop

    // 0x802A8590: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x802A8594: nop

    // 0x802A8598: bc1fl       L_802A863C
    if (!c1cs) {
        // 0x802A859C: lui         $at, 0x4170
        ctx->r1 = S32(0X4170 << 16);
            goto L_802A863C;
    }
    goto skip_1;
    // 0x802A859C: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    skip_1:
    // 0x802A85A0: jal         0x80317E10
    // 0x802A85A4: lw          $a0, 0x7FA8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X7FA8);
    static_3_80317E10(rdram, ctx);
        goto after_1;
    // 0x802A85A4: lw          $a0, 0x7FA8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X7FA8);
    after_1:
    // 0x802A85A8: beq         $v0, $zero, L_802A85C4
    if (ctx->r2 == 0) {
        // 0x802A85AC: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_802A85C4;
    }
    // 0x802A85AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802A85B0: jal         0x80318EFC
    // 0x802A85B4: lw          $a0, 0x7FA8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X7FA8);
    static_3_80318EFC(rdram, ctx);
        goto after_2;
    // 0x802A85B4: lw          $a0, 0x7FA8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X7FA8);
    after_2:
    // 0x802A85B8: lw          $a0, 0x7FA8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X7FA8);
    // 0x802A85BC: jal         0x80318F14
    // 0x802A85C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_80318F14(rdram, ctx);
        goto after_3;
    // 0x802A85C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
L_802A85C4:
    // 0x802A85C4: jal         0x80317E10
    // 0x802A85C8: lw          $a0, 0x7FAC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X7FAC);
    static_3_80317E10(rdram, ctx);
        goto after_4;
    // 0x802A85C8: lw          $a0, 0x7FAC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X7FAC);
    after_4:
    // 0x802A85CC: beq         $v0, $zero, L_802A85E8
    if (ctx->r2 == 0) {
        // 0x802A85D0: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_802A85E8;
    }
    // 0x802A85D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802A85D4: jal         0x80318EFC
    // 0x802A85D8: lw          $a0, 0x7FAC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X7FAC);
    static_3_80318EFC(rdram, ctx);
        goto after_5;
    // 0x802A85D8: lw          $a0, 0x7FAC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X7FAC);
    after_5:
    // 0x802A85DC: lw          $a0, 0x7FAC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X7FAC);
    // 0x802A85E0: jal         0x80318F14
    // 0x802A85E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_80318F14(rdram, ctx);
        goto after_6;
    // 0x802A85E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
L_802A85E8:
    // 0x802A85E8: jal         0x80317E10
    // 0x802A85EC: lw          $a0, 0x7FB0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X7FB0);
    static_3_80317E10(rdram, ctx);
        goto after_7;
    // 0x802A85EC: lw          $a0, 0x7FB0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X7FB0);
    after_7:
    // 0x802A85F0: beq         $v0, $zero, L_802A860C
    if (ctx->r2 == 0) {
        // 0x802A85F4: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_802A860C;
    }
    // 0x802A85F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802A85F8: jal         0x80318EFC
    // 0x802A85FC: lw          $a0, 0x7FB0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X7FB0);
    static_3_80318EFC(rdram, ctx);
        goto after_8;
    // 0x802A85FC: lw          $a0, 0x7FB0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X7FB0);
    after_8:
    // 0x802A8600: lw          $a0, 0x7FB0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X7FB0);
    // 0x802A8604: jal         0x80318F14
    // 0x802A8608: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_80318F14(rdram, ctx);
        goto after_9;
    // 0x802A8608: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
L_802A860C:
    // 0x802A860C: jal         0x80317E10
    // 0x802A8610: lw          $a0, 0x7FB4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X7FB4);
    static_3_80317E10(rdram, ctx);
        goto after_10;
    // 0x802A8610: lw          $a0, 0x7FB4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X7FB4);
    after_10:
    // 0x802A8614: beq         $v0, $zero, L_802A8630
    if (ctx->r2 == 0) {
        // 0x802A8618: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_802A8630;
    }
    // 0x802A8618: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802A861C: jal         0x80318EFC
    // 0x802A8620: lw          $a0, 0x7FB4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X7FB4);
    static_3_80318EFC(rdram, ctx);
        goto after_11;
    // 0x802A8620: lw          $a0, 0x7FB4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X7FB4);
    after_11:
    // 0x802A8624: lw          $a0, 0x7FB4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X7FB4);
    // 0x802A8628: jal         0x80318F14
    // 0x802A862C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_80318F14(rdram, ctx);
        goto after_12;
    // 0x802A862C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_12:
L_802A8630:
    // 0x802A8630: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802A8634: sb          $t9, 0x7FCC($s0)
    MEM_B(0X7FCC, ctx->r16) = ctx->r25;
L_802A8638:
    // 0x802A8638: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
L_802A863C:
    // 0x802A863C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802A8640: lwc1        $f10, 0x1C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x802A8644: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x802A8648: c.le.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl <= ctx->f10.fl;
    // 0x802A864C: nop

    // 0x802A8650: bc1fl       L_802A8830
    if (!c1cs) {
        // 0x802A8654: lbu         $t3, 0x2A56($s0)
        ctx->r11 = MEM_BU(ctx->r16, 0X2A56);
            goto L_802A8830;
    }
    goto skip_2;
    // 0x802A8654: lbu         $t3, 0x2A56($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X2A56);
    skip_2:
    // 0x802A8658: lbu         $t0, 0x0($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X0);
    // 0x802A865C: bnel        $t0, $zero, L_802A8830
    if (ctx->r8 != 0) {
        // 0x802A8660: lbu         $t3, 0x2A56($s0)
        ctx->r11 = MEM_BU(ctx->r16, 0X2A56);
            goto L_802A8830;
    }
    goto skip_3;
    // 0x802A8660: lbu         $t3, 0x2A56($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X2A56);
    skip_3:
    // 0x802A8664: jal         0x802AEE80
    // 0x802A8668: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    static_3_802AEE80(rdram, ctx);
        goto after_13;
    // 0x802A8668: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    after_13:
    // 0x802A866C: beq         $v0, $zero, L_802A8820
    if (ctx->r2 == 0) {
        // 0x802A8670: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_802A8820;
    }
    // 0x802A8670: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802A8674: jal         0x802AEE54
    // 0x802A8678: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    static_3_802AEE54(rdram, ctx);
        goto after_14;
    // 0x802A8678: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    after_14:
    // 0x802A867C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802A8680: jal         0x802AEE80
    // 0x802A8684: sw          $v0, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r2;
    static_3_802AEE80(rdram, ctx);
        goto after_15;
    // 0x802A8684: sw          $v0, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r2;
    after_15:
    // 0x802A8688: lw          $a0, 0xCC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XCC);
    // 0x802A868C: jal         0x803192A0
    // 0x802A8690: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    static_3_803192A0(rdram, ctx);
        goto after_16;
    // 0x802A8690: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_16:
    // 0x802A8694: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802A8698: jal         0x802B0260
    // 0x802A869C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    static_3_802B0260(rdram, ctx);
        goto after_17;
    // 0x802A869C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    after_17:
    // 0x802A86A0: sw          $v0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r2;
    // 0x802A86A4: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802A86A8: jal         0x802AEE54
    // 0x802A86AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802AEE54(rdram, ctx);
        goto after_18;
    // 0x802A86AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_18:
    // 0x802A86B0: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802A86B4: jal         0x802AEE80
    // 0x802A86B8: sw          $v0, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r2;
    static_3_802AEE80(rdram, ctx);
        goto after_19;
    // 0x802A86B8: sw          $v0, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r2;
    after_19:
    // 0x802A86BC: lw          $a0, 0xCC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XCC);
    // 0x802A86C0: jal         0x80318510
    // 0x802A86C4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    static_3_80318510(rdram, ctx);
        goto after_20;
    // 0x802A86C4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_20:
    // 0x802A86C8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802A86CC: jal         0x802B0084
    // 0x802A86D0: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    static_3_802B0084(rdram, ctx);
        goto after_21;
    // 0x802A86D0: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    after_21:
    // 0x802A86D4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802A86D8: sw          $v0, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r2;
    // 0x802A86DC: jal         0x80231A24
    // 0x802A86E0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_22;
    // 0x802A86E0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_22:
    // 0x802A86E4: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802A86E8: jal         0x802AEE54
    // 0x802A86EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802AEE54(rdram, ctx);
        goto after_23;
    // 0x802A86EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_23:
    // 0x802A86F0: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802A86F4: jal         0x802AEE80
    // 0x802A86F8: sw          $v0, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r2;
    static_3_802AEE80(rdram, ctx);
        goto after_24;
    // 0x802A86F8: sw          $v0, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r2;
    after_24:
    // 0x802A86FC: lw          $a0, 0xCC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XCC);
    // 0x802A8700: jal         0x80318180
    // 0x802A8704: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    static_3_80318180(rdram, ctx);
        goto after_25;
    // 0x802A8704: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_25:
    // 0x802A8708: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802A870C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802A8710: addiu       $a2, $sp, 0xC0
    ctx->r6 = ADD32(ctx->r29, 0XC0);
    // 0x802A8714: jal         0x802B0330
    // 0x802A8718: addiu       $a3, $sp, 0xBC
    ctx->r7 = ADD32(ctx->r29, 0XBC);
    static_3_802B0330(rdram, ctx);
        goto after_26;
    // 0x802A8718: addiu       $a3, $sp, 0xBC
    ctx->r7 = ADD32(ctx->r29, 0XBC);
    after_26:
    // 0x802A871C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802A8720: jal         0x80302980
    // 0x802A8724: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302980(rdram, ctx);
        goto after_27;
    // 0x802A8724: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_27:
    // 0x802A8728: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802A872C: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802A8730: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802A8734: addiu       $a1, $zero, 0x88
    ctx->r5 = ADD32(0, 0X88);
    // 0x802A8738: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802A873C: jal         0x80302988
    // 0x802A8740: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_28;
    // 0x802A8740: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_28:
    // 0x802A8744: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802A8748: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802A874C: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802A8750: lw          $a1, 0xC8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XC8);
    // 0x802A8754: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802A8758: jal         0x80302988
    // 0x802A875C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_29;
    // 0x802A875C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_29:
    // 0x802A8760: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802A8764: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802A8768: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802A876C: addiu       $a1, $zero, 0x96
    ctx->r5 = ADD32(0, 0X96);
    // 0x802A8770: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802A8774: jal         0x80302988
    // 0x802A8778: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_30;
    // 0x802A8778: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_30:
    // 0x802A877C: lw          $t1, 0xC4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XC4);
    // 0x802A8780: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x802A8784: addiu       $a1, $zero, 0x97
    ctx->r5 = ADD32(0, 0X97);
    // 0x802A8788: beq         $t1, $at, L_802A87C0
    if (ctx->r9 == ctx->r1) {
        // 0x802A878C: lui         $a2, 0x3D4C
        ctx->r6 = S32(0X3D4C << 16);
            goto L_802A87C0;
    }
    // 0x802A878C: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802A8790: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802A8794: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802A8798: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802A879C: jal         0x80302988
    // 0x802A87A0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_31;
    // 0x802A87A0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_31:
    // 0x802A87A4: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802A87A8: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802A87AC: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802A87B0: lw          $a1, 0xC4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XC4);
    // 0x802A87B4: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802A87B8: jal         0x80302988
    // 0x802A87BC: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_32;
    // 0x802A87BC: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_32:
L_802A87C0:
    // 0x802A87C0: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802A87C4: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802A87C8: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802A87CC: addiu       $a1, $zero, 0x98
    ctx->r5 = ADD32(0, 0X98);
    // 0x802A87D0: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802A87D4: jal         0x80302988
    // 0x802A87D8: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_33;
    // 0x802A87D8: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_33:
    // 0x802A87DC: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802A87E0: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802A87E4: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802A87E8: lw          $a1, 0xC0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XC0);
    // 0x802A87EC: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802A87F0: jal         0x80302988
    // 0x802A87F4: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_34;
    // 0x802A87F4: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_34:
    // 0x802A87F8: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802A87FC: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802A8800: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802A8804: lw          $a1, 0xBC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XBC);
    // 0x802A8808: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802A880C: jal         0x80302988
    // 0x802A8810: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_35;
    // 0x802A8810: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_35:
    // 0x802A8814: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802A8818: jal         0x80302A7C
    // 0x802A881C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302A7C(rdram, ctx);
        goto after_36;
    // 0x802A881C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_36:
L_802A8820:
    // 0x802A8820: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x802A8824: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A8828: sb          $t2, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r10;
    // 0x802A882C: lbu         $t3, 0x2A56($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X2A56);
L_802A8830:
    // 0x802A8830: beql        $t3, $zero, L_802A8ACC
    if (ctx->r11 == 0) {
        // 0x802A8834: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_802A8ACC;
    }
    goto skip_4;
    // 0x802A8834: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_4:
    // 0x802A8838: lw          $a2, 0x173C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X173C);
    // 0x802A883C: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x802A8840: lh          $t4, 0x60($a2)
    ctx->r12 = MEM_H(ctx->r6, 0X60);
    // 0x802A8844: lw          $t9, 0x64($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X64);
    // 0x802A8848: addu        $a0, $t4, $s0
    ctx->r4 = ADD32(ctx->r12, ctx->r16);
    // 0x802A884C: jalr        $t9
    // 0x802A8850: addiu       $a0, $a0, 0x159C
    ctx->r4 = ADD32(ctx->r4, 0X159C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_37;
    // 0x802A8850: addiu       $a0, $a0, 0x159C
    ctx->r4 = ADD32(ctx->r4, 0X159C);
    after_37:
    // 0x802A8854: jal         0x8022970C
    // 0x802A8858: addiu       $a0, $sp, 0x74
    ctx->r4 = ADD32(ctx->r29, 0X74);
    func_8022970C(rdram, ctx);
        goto after_38;
    // 0x802A8858: addiu       $a0, $sp, 0x74
    ctx->r4 = ADD32(ctx->r29, 0X74);
    after_38:
    // 0x802A885C: addiu       $a0, $sp, 0x74
    ctx->r4 = ADD32(ctx->r29, 0X74);
    // 0x802A8860: lw          $a1, 0x7FBC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X7FBC);
    // 0x802A8864: jal         0x802D01D4
    // 0x802A8868: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    static_3_802D01D4(rdram, ctx);
        goto after_39;
    // 0x802A8868: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    after_39:
    // 0x802A886C: lwc1        $f18, 0x64($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X64);
    // 0x802A8870: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x802A8874: lwc1        $f6, 0x6C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x802A8878: swc1        $f18, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f18.u32l;
    // 0x802A887C: swc1        $f4, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f4.u32l;
    // 0x802A8880: swc1        $f6, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f6.u32l;
    // 0x802A8884: lw          $a3, 0x7FC0($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X7FC0);
    // 0x802A8888: addiu       $a0, $sp, 0x74
    ctx->r4 = ADD32(ctx->r29, 0X74);
    // 0x802A888C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802A8890: jal         0x8022A0D0
    // 0x802A8894: lui         $a2, 0x43FA
    ctx->r6 = S32(0X43FA << 16);
    static_3_8022A0D0(rdram, ctx);
        goto after_40;
    // 0x802A8894: lui         $a2, 0x43FA
    ctx->r6 = S32(0X43FA << 16);
    after_40:
    // 0x802A8898: lwc1        $f8, 0xAC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x802A889C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802A88A0: addiu       $a1, $s0, 0x159C
    ctx->r5 = ADD32(ctx->r16, 0X159C);
    // 0x802A88A4: lw          $a2, 0xA4($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XA4);
    // 0x802A88A8: lw          $a3, 0xA8($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XA8);
    // 0x802A88AC: jal         0x802AFF70
    // 0x802A88B0: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    static_3_802AFF70(rdram, ctx);
        goto after_41;
    // 0x802A88B0: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_41:
    // 0x802A88B4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A88B8: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A88BC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802A88C0: lwc1        $f10, 0x7FBC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X7FBC);
    // 0x802A88C4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802A88C8: lwc1        $f4, 0x7FC0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X7FC0);
    // 0x802A88CC: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x802A88D0: lbu         $t5, 0x7FC6($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X7FC6);
    // 0x802A88D4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802A88D8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802A88DC: swc1        $f18, 0x7FBC($s0)
    MEM_W(0X7FBC, ctx->r16) = ctx->f18.u32l;
    // 0x802A88E0: bne         $t5, $zero, L_802A8914
    if (ctx->r13 != 0) {
        // 0x802A88E4: swc1        $f8, 0x7FC0($s0)
        MEM_W(0X7FC0, ctx->r16) = ctx->f8.u32l;
            goto L_802A8914;
    }
    // 0x802A88E4: swc1        $f8, 0x7FC0($s0)
    MEM_W(0X7FC0, ctx->r16) = ctx->f8.u32l;
    // 0x802A88E8: lwc1        $f12, 0xD4($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x802A88EC: sb          $t6, 0x7FC6($s0)
    MEM_B(0X7FC6, ctx->r16) = ctx->r14;
    // 0x802A88F0: jal         0x80309740
    // 0x802A88F4: swc1        $f12, 0x7FC8($s0)
    MEM_W(0X7FC8, ctx->r16) = ctx->f12.u32l;
    static_3_80309740(rdram, ctx);
        goto after_42;
    // 0x802A88F4: swc1        $f12, 0x7FC8($s0)
    MEM_W(0X7FC8, ctx->r16) = ctx->f12.u32l;
    after_42:
    // 0x802A88F8: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x802A88FC: lwc1        $f10, 0xD4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x802A8900: lwc1        $f0, 0x32AC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X32AC);
    // 0x802A8904: addiu       $v1, $v0, 0x6D0
    ctx->r3 = ADD32(ctx->r2, 0X6D0);
    // 0x802A8908: sub.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x802A890C: b           L_802A897C
    // 0x802A8910: swc1        $f16, 0x170($v1)
    MEM_W(0X170, ctx->r3) = ctx->f16.u32l;
        goto L_802A897C;
    // 0x802A8910: swc1        $f16, 0x170($v1)
    MEM_W(0X170, ctx->r3) = ctx->f16.u32l;
L_802A8914:
    // 0x802A8914: lwc1        $f18, 0xD4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x802A8918: lwc1        $f4, 0x7FC8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X7FC8);
    // 0x802A891C: lui         $at, 0x4130
    ctx->r1 = S32(0X4130 << 16);
    // 0x802A8920: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802A8924: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x802A8928: c.le.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl <= ctx->f6.fl;
    // 0x802A892C: nop

    // 0x802A8930: bc1f        L_802A897C
    if (!c1cs) {
        // 0x802A8934: nop
    
            goto L_802A897C;
    }
    // 0x802A8934: nop

    // 0x802A8938: lbu         $t7, 0x7FC5($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X7FC5);
    // 0x802A893C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802A8940: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802A8944: bne         $t7, $zero, L_802A897C
    if (ctx->r15 != 0) {
        // 0x802A8948: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_802A897C;
    }
    // 0x802A8948: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802A894C: sb          $t8, 0x7FC5($s0)
    MEM_B(0X7FC5, ctx->r16) = ctx->r24;
    // 0x802A8950: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x802A8954: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802A8958: addiu       $t0, $zero, 0x80
    ctx->r8 = ADD32(0, 0X80);
    // 0x802A895C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x802A8960: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x802A8964: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x802A8968: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802A896C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802A8970: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802A8974: jal         0x8030890C
    // 0x802A8978: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    static_3_8030890C(rdram, ctx);
        goto after_43;
    // 0x802A8978: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    after_43:
L_802A897C:
    // 0x802A897C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A8980: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A8984: lwc1        $f16, 0x7FBC($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X7FBC);
    // 0x802A8988: c.le.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl <= ctx->f16.fl;
    // 0x802A898C: nop

    // 0x802A8990: bc1fl       L_802A8ACC
    if (!c1cs) {
        // 0x802A8994: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_802A8ACC;
    }
    goto skip_5;
    // 0x802A8994: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_5:
    // 0x802A8998: lbu         $t2, 0x7FC4($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X7FC4);
    // 0x802A899C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x802A89A0: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x802A89A4: bnel        $t2, $zero, L_802A8ACC
    if (ctx->r10 != 0) {
        // 0x802A89A8: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_802A8ACC;
    }
    goto skip_6;
    // 0x802A89A8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_6:
    // 0x802A89AC: sb          $t3, 0x7FC4($s0)
    MEM_B(0X7FC4, ctx->r16) = ctx->r11;
    // 0x802A89B0: lwc1        $f4, 0xD4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x802A89B4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802A89B8: nop

    // 0x802A89BC: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x802A89C0: nop

    // 0x802A89C4: bc1fl       L_802A8A44
    if (!c1cs) {
        // 0x802A89C8: lw          $a0, 0x14($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X14);
            goto L_802A8A44;
    }
    goto skip_7;
    // 0x802A89C8: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    skip_7:
    // 0x802A89CC: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802A89D0: jal         0x80302980
    // 0x802A89D4: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302980(rdram, ctx);
        goto after_44;
    // 0x802A89D4: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_44:
    // 0x802A89D8: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802A89DC: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802A89E0: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802A89E4: addiu       $a1, $zero, 0xCC
    ctx->r5 = ADD32(0, 0XCC);
    // 0x802A89E8: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802A89EC: jal         0x80302988
    // 0x802A89F0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_45;
    // 0x802A89F0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_45:
    // 0x802A89F4: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802A89F8: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802A89FC: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802A8A00: addiu       $a1, $zero, 0xC7
    ctx->r5 = ADD32(0, 0XC7);
    // 0x802A8A04: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802A8A08: jal         0x80302988
    // 0x802A8A0C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_46;
    // 0x802A8A0C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_46:
    // 0x802A8A10: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802A8A14: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802A8A18: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802A8A1C: addiu       $a1, $zero, 0x8F
    ctx->r5 = ADD32(0, 0X8F);
    // 0x802A8A20: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802A8A24: jal         0x80302988
    // 0x802A8A28: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_47;
    // 0x802A8A28: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_47:
    // 0x802A8A2C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802A8A30: jal         0x80302A7C
    // 0x802A8A34: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302A7C(rdram, ctx);
        goto after_48;
    // 0x802A8A34: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_48:
    // 0x802A8A38: b           L_802A8ACC
    // 0x802A8A3C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_802A8ACC;
    // 0x802A8A3C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802A8A40: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
L_802A8A44:
    // 0x802A8A44: jal         0x80302980
    // 0x802A8A48: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302980(rdram, ctx);
        goto after_49;
    // 0x802A8A48: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_49:
    // 0x802A8A4C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802A8A50: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802A8A54: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802A8A58: addiu       $a1, $zero, 0xCC
    ctx->r5 = ADD32(0, 0XCC);
    // 0x802A8A5C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802A8A60: jal         0x80302988
    // 0x802A8A64: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_50;
    // 0x802A8A64: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_50:
    // 0x802A8A68: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802A8A6C: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802A8A70: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802A8A74: addiu       $a1, $zero, 0xC6
    ctx->r5 = ADD32(0, 0XC6);
    // 0x802A8A78: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802A8A7C: jal         0x80302988
    // 0x802A8A80: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_51;
    // 0x802A8A80: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_51:
    // 0x802A8A84: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802A8A88: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802A8A8C: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802A8A90: addiu       $a1, $zero, 0xC7
    ctx->r5 = ADD32(0, 0XC7);
    // 0x802A8A94: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802A8A98: jal         0x80302988
    // 0x802A8A9C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_52;
    // 0x802A8A9C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_52:
    // 0x802A8AA0: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802A8AA4: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802A8AA8: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802A8AAC: addiu       $a1, $zero, 0xCA
    ctx->r5 = ADD32(0, 0XCA);
    // 0x802A8AB0: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802A8AB4: jal         0x80302988
    // 0x802A8AB8: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_53;
    // 0x802A8AB8: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_53:
    // 0x802A8ABC: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802A8AC0: jal         0x80302A7C
    // 0x802A8AC4: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302A7C(rdram, ctx);
        goto after_54;
    // 0x802A8AC4: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_54:
    // 0x802A8AC8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_802A8ACC:
    // 0x802A8ACC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802A8AD0: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    // 0x802A8AD4: jr          $ra
    // 0x802A8AD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x802A8AD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void D_802A394C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A39CC: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x802A39D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802A39D4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802A39D8: sw          $a1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r5;
    // 0x802A39DC: sw          $a2, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r6;
    // 0x802A39E0: lw          $t6, 0xDC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XDC);
    // 0x802A39E4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802A39E8: bnel        $t6, $zero, L_802A3A00
    if (ctx->r14 != 0) {
        // 0x802A39EC: lbu         $t8, 0x100($s0)
        ctx->r24 = MEM_BU(ctx->r16, 0X100);
            goto L_802A3A00;
    }
    goto skip_0;
    // 0x802A39EC: lbu         $t8, 0x100($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X100);
    skip_0:
    // 0x802A39F0: lw          $t7, 0xE0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XE0);
    // 0x802A39F4: beql        $t7, $zero, L_802A3EA4
    if (ctx->r15 == 0) {
        // 0x802A39F8: lbu         $t3, 0x100($s0)
        ctx->r11 = MEM_BU(ctx->r16, 0X100);
            goto L_802A3EA4;
    }
    goto skip_1;
    // 0x802A39F8: lbu         $t3, 0x100($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X100);
    skip_1:
    // 0x802A39FC: lbu         $t8, 0x100($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X100);
L_802A3A00:
    // 0x802A3A00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802A3A04: bnel        $t8, $zero, L_802A3EA4
    if (ctx->r24 != 0) {
        // 0x802A3A08: lbu         $t3, 0x100($s0)
        ctx->r11 = MEM_BU(ctx->r16, 0X100);
            goto L_802A3EA4;
    }
    goto skip_2;
    // 0x802A3A08: lbu         $t3, 0x100($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X100);
    skip_2:
    // 0x802A3A0C: jal         0x802D1A6C
    // 0x802A3A10: lw          $a1, 0xA0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XA0);
    static_3_802D1A6C(rdram, ctx);
        goto after_0;
    // 0x802A3A10: lw          $a1, 0xA0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XA0);
    after_0:
    // 0x802A3A14: lw          $a0, 0xE0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE0);
    // 0x802A3A18: beq         $a0, $zero, L_802A3A34
    if (ctx->r4 == 0) {
        // 0x802A3A1C: addiu       $a1, $sp, 0x88
        ctx->r5 = ADD32(ctx->r29, 0X88);
            goto L_802A3A34;
    }
    // 0x802A3A1C: addiu       $a1, $sp, 0x88
    ctx->r5 = ADD32(ctx->r29, 0X88);
    // 0x802A3A20: addiu       $a2, $sp, 0x84
    ctx->r6 = ADD32(ctx->r29, 0X84);
    // 0x802A3A24: jal         0x8028C2C0
    // 0x802A3A28: addiu       $a3, $sp, 0x80
    ctx->r7 = ADD32(ctx->r29, 0X80);
    static_3_8028C2C0(rdram, ctx);
        goto after_1;
    // 0x802A3A28: addiu       $a3, $sp, 0x80
    ctx->r7 = ADD32(ctx->r29, 0X80);
    after_1:
    // 0x802A3A2C: b           L_802A3A60
    // 0x802A3A30: lwc1        $f2, 0x60($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X60);
        goto L_802A3A60;
    // 0x802A3A30: lwc1        $f2, 0x60($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X60);
L_802A3A34:
    // 0x802A3A34: lw          $v0, 0xDC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XDC);
    // 0x802A3A38: addiu       $a1, $sp, 0x88
    ctx->r5 = ADD32(ctx->r29, 0X88);
    // 0x802A3A3C: addiu       $a2, $sp, 0x84
    ctx->r6 = ADD32(ctx->r29, 0X84);
    // 0x802A3A40: lw          $v1, 0xD8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XD8);
    // 0x802A3A44: addiu       $a3, $sp, 0x80
    ctx->r7 = ADD32(ctx->r29, 0X80);
    // 0x802A3A48: lh          $t9, 0x50($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X50);
    // 0x802A3A4C: addu        $a0, $t9, $v0
    ctx->r4 = ADD32(ctx->r25, ctx->r2);
    // 0x802A3A50: lw          $t9, 0x54($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X54);
    // 0x802A3A54: jalr        $t9
    // 0x802A3A58: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x802A3A58: nop

    after_2:
    // 0x802A3A5C: lwc1        $f2, 0x60($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X60);
L_802A3A60:
    // 0x802A3A60: lwc1        $f6, 0x84($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X84);
    // 0x802A3A64: lwc1        $f0, 0x5C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X5C);
    // 0x802A3A68: lwc1        $f16, 0x64($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X64);
    // 0x802A3A6C: lwc1        $f4, 0x88($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X88);
    // 0x802A3A70: lwc1        $f8, 0x80($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X80);
    // 0x802A3A74: sub.s       $f12, $f2, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f2.fl - ctx->f6.fl;
    // 0x802A3A78: sub.s       $f14, $f0, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x802A3A7C: sub.s       $f10, $f16, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f16.fl - ctx->f8.fl;
    // 0x802A3A80: swc1        $f14, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f14.u32l;
    // 0x802A3A84: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    // 0x802A3A88: swc1        $f10, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f10.u32l;
    // 0x802A3A8C: jal         0x8022ADA8
    // 0x802A3A90: swc1        $f12, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f12.u32l;
    static_3_8022ADA8(rdram, ctx);
        goto after_3;
    // 0x802A3A90: swc1        $f12, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f12.u32l;
    after_3:
    // 0x802A3A94: lwc1        $f12, 0x7C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x802A3A98: lwc1        $f14, 0x78($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X78);
    // 0x802A3A9C: lw          $a2, 0x74($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X74);
    // 0x802A3AA0: jal         0x802D05CC
    // 0x802A3AA4: swc1        $f0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f0.u32l;
    static_3_802D05CC(rdram, ctx);
        goto after_4;
    // 0x802A3AA4: swc1        $f0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f0.u32l;
    after_4:
    // 0x802A3AA8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802A3AAC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802A3AB0: lwc1        $f2, 0x6C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x802A3AB4: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x802A3AB8: lwc1        $f16, 0x7C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x802A3ABC: lwc1        $f18, 0x78($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X78);
    // 0x802A3AC0: swc1        $f0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f0.u32l;
    // 0x802A3AC4: bc1f        L_802A3AD4
    if (!c1cs) {
        // 0x802A3AC8: lui         $at, 0x0
        ctx->r1 = S32(0X0 << 16);
            goto L_802A3AD4;
    }
    // 0x802A3AC8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A3ACC: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A3AD0: swc1        $f6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f6.u32l;
L_802A3AD4:
    // 0x802A3AD4: c.eq.s      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.fl == ctx->f8.fl;
    // 0x802A3AD8: nop

    // 0x802A3ADC: bc1fl       L_802A3B18
    if (!c1cs) {
        // 0x802A3AE0: div.s       $f12, $f18, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = DIV_S(ctx->f18.fl, ctx->f2.fl);
            goto L_802A3B18;
    }
    goto skip_3;
    // 0x802A3AE0: div.s       $f12, $f18, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = DIV_S(ctx->f18.fl, ctx->f2.fl);
    skip_3:
    // 0x802A3AE4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802A3AE8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A3AEC: c.le.s      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.fl <= ctx->f18.fl;
    // 0x802A3AF0: nop

    // 0x802A3AF4: bc1f        L_802A3B08
    if (!c1cs) {
        // 0x802A3AF8: nop
    
            goto L_802A3B08;
    }
    // 0x802A3AF8: nop

    // 0x802A3AFC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802A3B00: b           L_802A3B2C
    // 0x802A3B04: swc1        $f4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f4.u32l;
        goto L_802A3B2C;
    // 0x802A3B04: swc1        $f4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f4.u32l;
L_802A3B08:
    // 0x802A3B08: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A3B0C: b           L_802A3B2C
    // 0x802A3B10: swc1        $f6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f6.u32l;
        goto L_802A3B2C;
    // 0x802A3B10: swc1        $f6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f6.u32l;
    // 0x802A3B14: div.s       $f12, $f18, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = DIV_S(ctx->f18.fl, ctx->f2.fl);
L_802A3B18:
    // 0x802A3B18: swc1        $f2, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f2.u32l;
    // 0x802A3B1C: jal         0x8022AE1C
    // 0x802A3B20: div.s       $f14, $f16, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = DIV_S(ctx->f16.fl, ctx->f2.fl);
    static_3_8022AE1C(rdram, ctx);
        goto after_5;
    // 0x802A3B20: div.s       $f14, $f16, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = DIV_S(ctx->f16.fl, ctx->f2.fl);
    after_5:
    // 0x802A3B24: lwc1        $f2, 0x6C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x802A3B28: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
L_802A3B2C:
    // 0x802A3B2C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802A3B30: nop

    // 0x802A3B34: c.eq.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl == ctx->f8.fl;
    // 0x802A3B38: nop

    // 0x802A3B3C: bc1fl       L_802A3B80
    if (!c1cs) {
        // 0x802A3B40: lwc1        $f4, 0x70($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X70);
            goto L_802A3B80;
    }
    goto skip_4;
    // 0x802A3B40: lwc1        $f4, 0x70($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X70);
    skip_4:
    // 0x802A3B44: lwc1        $f10, 0x74($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X74);
    // 0x802A3B48: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802A3B4C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A3B50: c.le.s      $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f4.fl <= ctx->f10.fl;
    // 0x802A3B54: nop

    // 0x802A3B58: bc1f        L_802A3B70
    if (!c1cs) {
        // 0x802A3B5C: nop
    
            goto L_802A3B70;
    }
    // 0x802A3B5C: nop

    // 0x802A3B60: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A3B64: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A3B68: b           L_802A3B98
    // 0x802A3B6C: swc1        $f6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f6.u32l;
        goto L_802A3B98;
    // 0x802A3B6C: swc1        $f6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f6.u32l;
L_802A3B70:
    // 0x802A3B70: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A3B74: b           L_802A3B98
    // 0x802A3B78: swc1        $f8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f8.u32l;
        goto L_802A3B98;
    // 0x802A3B78: swc1        $f8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f8.u32l;
    // 0x802A3B7C: lwc1        $f4, 0x70($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X70);
L_802A3B80:
    // 0x802A3B80: lwc1        $f10, 0x74($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X74);
    // 0x802A3B84: div.s       $f14, $f2, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = DIV_S(ctx->f2.fl, ctx->f4.fl);
    // 0x802A3B88: jal         0x8022AE1C
    // 0x802A3B8C: div.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = DIV_S(ctx->f10.fl, ctx->f4.fl);
    static_3_8022AE1C(rdram, ctx);
        goto after_6;
    // 0x802A3B8C: div.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = DIV_S(ctx->f10.fl, ctx->f4.fl);
    after_6:
    // 0x802A3B90: neg.s       $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = -ctx->f0.fl;
    // 0x802A3B94: swc1        $f6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f6.u32l;
L_802A3B98:
    // 0x802A3B98: lw          $t0, 0xFC($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XFC);
    // 0x802A3B9C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802A3BA0: lwc1        $f14, 0x68($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X68);
    // 0x802A3BA4: bne         $t0, $at, L_802A3C7C
    if (ctx->r8 != ctx->r1) {
        // 0x802A3BA8: lui         $at, 0xC47A
        ctx->r1 = S32(0XC47A << 16);
            goto L_802A3C7C;
    }
    // 0x802A3BA8: lui         $at, 0xC47A
    ctx->r1 = S32(0XC47A << 16);
    // 0x802A3BAC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802A3BB0: lwc1        $f0, 0xF0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XF0);
    // 0x802A3BB4: lwc1        $f10, 0x68($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X68);
    // 0x802A3BB8: c.eq.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl == ctx->f0.fl;
    // 0x802A3BBC: nop

    // 0x802A3BC0: bc1fl       L_802A3BE4
    if (!c1cs) {
        // 0x802A3BC4: lwc1        $f8, 0x68($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X68);
            goto L_802A3BE4;
    }
    goto skip_5;
    // 0x802A3BC4: lwc1        $f8, 0x68($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X68);
    skip_5:
    // 0x802A3BC8: swc1        $f10, 0xF0($s0)
    MEM_W(0XF0, ctx->r16) = ctx->f10.u32l;
    // 0x802A3BCC: lwc1        $f4, 0x64($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X64);
    // 0x802A3BD0: lwc1        $f0, 0xF0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XF0);
    // 0x802A3BD4: swc1        $f4, 0xF4($s0)
    MEM_W(0XF4, ctx->r16) = ctx->f4.u32l;
    // 0x802A3BD8: lwc1        $f6, 0x70($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X70);
    // 0x802A3BDC: swc1        $f6, 0xF8($s0)
    MEM_W(0XF8, ctx->r16) = ctx->f6.u32l;
    // 0x802A3BE0: lwc1        $f8, 0x68($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X68);
L_802A3BE4:
    // 0x802A3BE4: lwc1        $f4, 0xA0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x802A3BE8: lwc1        $f6, 0x64($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X64);
    // 0x802A3BEC: sub.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x802A3BF0: lwc1        $f8, 0xF4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XF4);
    // 0x802A3BF4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A3BF8: mul.s       $f18, $f10, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x802A3BFC: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x802A3C00: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x802A3C04: lwc1        $f10, 0x70($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X70);
    // 0x802A3C08: swc1        $f6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f6.u32l;
    // 0x802A3C0C: lwc1        $f8, 0xF8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XF8);
    // 0x802A3C10: sub.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x802A3C14: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A3C18: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A3C1C: lwc1        $f10, 0x70($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X70);
    // 0x802A3C20: mul.s       $f2, $f6, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x802A3C24: c.lt.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl < ctx->f8.fl;
    // 0x802A3C28: nop

    // 0x802A3C2C: bc1fl       L_802A3C3C
    if (!c1cs) {
        // 0x802A3C30: div.s       $f16, $f10, $f2
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = DIV_S(ctx->f10.fl, ctx->f2.fl);
            goto L_802A3C3C;
    }
    goto skip_6;
    // 0x802A3C30: div.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = DIV_S(ctx->f10.fl, ctx->f2.fl);
    skip_6:
    // 0x802A3C34: lwc1        $f2, 0x0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A3C38: div.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = DIV_S(ctx->f10.fl, ctx->f2.fl);
L_802A3C3C:
    // 0x802A3C3C: lwc1        $f6, 0x68($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X68);
    // 0x802A3C40: lwc1        $f12, 0x20($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X20);
    // 0x802A3C44: mul.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x802A3C48: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
    // 0x802A3C4C: jal         0x802CF4D0
    // 0x802A3C50: add.s       $f14, $f6, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f6.fl + ctx->f4.fl;
    static_3_802CF4D0(rdram, ctx);
        goto after_7;
    // 0x802A3C50: add.s       $f14, $f6, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f6.fl + ctx->f4.fl;
    after_7:
    // 0x802A3C54: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802A3C58: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x802A3C5C: lwc1        $f12, 0x64($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X64);
    // 0x802A3C60: swc1        $f0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f0.u32l;
    // 0x802A3C64: mul.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x802A3C68: jal         0x802CF4D0
    // 0x802A3C6C: add.s       $f14, $f12, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f12.fl + ctx->f10.fl;
    static_3_802CF4D0(rdram, ctx);
        goto after_8;
    // 0x802A3C6C: add.s       $f14, $f12, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f12.fl + ctx->f10.fl;
    after_8:
    // 0x802A3C70: lwc1        $f18, 0x60($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X60);
    // 0x802A3C74: b           L_802A3C9C
    // 0x802A3C78: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
        goto L_802A3C9C;
    // 0x802A3C78: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
L_802A3C7C:
    // 0x802A3C7C: jal         0x802CF4D0
    // 0x802A3C80: lwc1        $f12, 0x20($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X20);
    static_3_802CF4D0(rdram, ctx);
        goto after_9;
    // 0x802A3C80: lwc1        $f12, 0x20($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X20);
    after_9:
    // 0x802A3C84: lwc1        $f12, 0x24($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X24);
    // 0x802A3C88: swc1        $f0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f0.u32l;
    // 0x802A3C8C: jal         0x802CF4D0
    // 0x802A3C90: lwc1        $f14, 0x64($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X64);
    static_3_802CF4D0(rdram, ctx);
        goto after_10;
    // 0x802A3C90: lwc1        $f14, 0x64($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X64);
    after_10:
    // 0x802A3C94: lwc1        $f18, 0x60($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X60);
    // 0x802A3C98: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
L_802A3C9C:
    // 0x802A3C9C: lwc1        $f6, 0x68($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X68);
    // 0x802A3CA0: lbu         $v0, 0x1C($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1C);
    // 0x802A3CA4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A3CA8: swc1        $f6, 0xF0($s0)
    MEM_W(0XF0, ctx->r16) = ctx->f6.u32l;
    // 0x802A3CAC: lwc1        $f4, 0x64($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X64);
    // 0x802A3CB0: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x802A3CB4: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    // 0x802A3CB8: swc1        $f4, 0xF4($s0)
    MEM_W(0XF4, ctx->r16) = ctx->f4.u32l;
    // 0x802A3CBC: lwc1        $f8, 0x70($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X70);
    // 0x802A3CC0: bne         $v0, $zero, L_802A3D38
    if (ctx->r2 != 0) {
        // 0x802A3CC4: swc1        $f8, 0xF8($s0)
        MEM_W(0XF8, ctx->r16) = ctx->f8.u32l;
            goto L_802A3D38;
    }
    // 0x802A3CC4: swc1        $f8, 0xF8($s0)
    MEM_W(0XF8, ctx->r16) = ctx->f8.u32l;
    // 0x802A3CC8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x802A3CCC: nop

    // 0x802A3CD0: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x802A3CD4: nop

    // 0x802A3CD8: bc1fl       L_802A3CEC
    if (!c1cs) {
        // 0x802A3CDC: neg.s       $f2, $f18
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = -ctx->f18.fl;
            goto L_802A3CEC;
    }
    goto skip_7;
    // 0x802A3CDC: neg.s       $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = -ctx->f18.fl;
    skip_7:
    // 0x802A3CE0: b           L_802A3CEC
    // 0x802A3CE4: mov.s       $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    ctx->f2.fl = ctx->f18.fl;
        goto L_802A3CEC;
    // 0x802A3CE4: mov.s       $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    ctx->f2.fl = ctx->f18.fl;
    // 0x802A3CE8: neg.s       $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = -ctx->f18.fl;
L_802A3CEC:
    // 0x802A3CEC: lwc1        $f12, 0x0($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A3CF0: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x802A3CF4: nop

    // 0x802A3CF8: bc1tl       L_802A3D30
    if (c1cs) {
        // 0x802A3CFC: sw          $zero, 0xDC($s0)
        MEM_W(0XDC, ctx->r16) = 0;
            goto L_802A3D30;
    }
    goto skip_8;
    // 0x802A3CFC: sw          $zero, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = 0;
    skip_8:
    // 0x802A3D00: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x802A3D04: nop

    // 0x802A3D08: bc1fl       L_802A3D1C
    if (!c1cs) {
        // 0x802A3D0C: neg.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
            goto L_802A3D1C;
    }
    goto skip_9;
    // 0x802A3D0C: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    skip_9:
    // 0x802A3D10: b           L_802A3D1C
    // 0x802A3D14: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
        goto L_802A3D1C;
    // 0x802A3D14: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x802A3D18: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
L_802A3D1C:
    // 0x802A3D1C: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x802A3D20: nop

    // 0x802A3D24: bc1fl       L_802A3D3C
    if (!c1cs) {
        // 0x802A3D28: lwc1        $f10, 0x6C($s0)
        ctx->f10.u32l = MEM_W(ctx->r16, 0X6C);
            goto L_802A3D3C;
    }
    goto skip_10;
    // 0x802A3D28: lwc1        $f10, 0x6C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X6C);
    skip_10:
    // 0x802A3D2C: sw          $zero, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = 0;
L_802A3D30:
    // 0x802A3D30: sw          $zero, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = 0;
    // 0x802A3D34: lbu         $v0, 0x1C($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1C);
L_802A3D38:
    // 0x802A3D38: lwc1        $f10, 0x6C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X6C);
L_802A3D3C:
    // 0x802A3D3C: lwc1        $f6, 0xA0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x802A3D40: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
    // 0x802A3D44: lwc1        $f8, 0xC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XC);
    // 0x802A3D48: mul.s       $f12, $f10, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x802A3D4C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x802A3D50: nop

    // 0x802A3D54: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x802A3D58: div.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    // 0x802A3D5C: mul.s       $f12, $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f10.fl);
    // 0x802A3D60: bc1fl       L_802A3D74
    if (!c1cs) {
        // 0x802A3D64: neg.s       $f2, $f18
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = -ctx->f18.fl;
            goto L_802A3D74;
    }
    goto skip_11;
    // 0x802A3D64: neg.s       $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = -ctx->f18.fl;
    skip_11:
    // 0x802A3D68: b           L_802A3D74
    // 0x802A3D6C: mov.s       $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    ctx->f2.fl = ctx->f18.fl;
        goto L_802A3D74;
    // 0x802A3D6C: mov.s       $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    ctx->f2.fl = ctx->f18.fl;
    // 0x802A3D70: neg.s       $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = -ctx->f18.fl;
L_802A3D74:
    // 0x802A3D74: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x802A3D78: nop

    // 0x802A3D7C: bc1fl       L_802A3DA4
    if (!c1cs) {
        // 0x802A3D80: lwc1        $f6, 0x20($s0)
        ctx->f6.u32l = MEM_W(ctx->r16, 0X20);
            goto L_802A3DA4;
    }
    goto skip_12;
    // 0x802A3D80: lwc1        $f6, 0x20($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X20);
    skip_12:
    // 0x802A3D84: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x802A3D88: nop

    // 0x802A3D8C: bc1fl       L_802A3DA0
    if (!c1cs) {
        // 0x802A3D90: neg.s       $f18, $f12
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = -ctx->f12.fl;
            goto L_802A3DA0;
    }
    goto skip_13;
    // 0x802A3D90: neg.s       $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = -ctx->f12.fl;
    skip_13:
    // 0x802A3D94: b           L_802A3DA0
    // 0x802A3D98: mov.s       $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    ctx->f18.fl = ctx->f12.fl;
        goto L_802A3DA0;
    // 0x802A3D98: mov.s       $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    ctx->f18.fl = ctx->f12.fl;
    // 0x802A3D9C: neg.s       $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = -ctx->f12.fl;
L_802A3DA0:
    // 0x802A3DA0: lwc1        $f6, 0x20($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X20);
L_802A3DA4:
    // 0x802A3DA4: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x802A3DA8: add.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x802A3DAC: bne         $v0, $zero, L_802A3E08
    if (ctx->r2 != 0) {
        // 0x802A3DB0: swc1        $f4, 0x20($s0)
        MEM_W(0X20, ctx->r16) = ctx->f4.u32l;
            goto L_802A3E08;
    }
    // 0x802A3DB0: swc1        $f4, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f4.u32l;
    // 0x802A3DB4: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x802A3DB8: nop

    // 0x802A3DBC: bc1fl       L_802A3DD0
    if (!c1cs) {
        // 0x802A3DC0: neg.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
            goto L_802A3DD0;
    }
    goto skip_14;
    // 0x802A3DC0: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    skip_14:
    // 0x802A3DC4: b           L_802A3DD0
    // 0x802A3DC8: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
        goto L_802A3DD0;
    // 0x802A3DC8: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x802A3DCC: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
L_802A3DD0:
    // 0x802A3DD0: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x802A3DD4: nop

    // 0x802A3DD8: bc1fl       L_802A3E00
    if (!c1cs) {
        // 0x802A3DDC: lwc1        $f8, 0x24($s0)
        ctx->f8.u32l = MEM_W(ctx->r16, 0X24);
            goto L_802A3E00;
    }
    goto skip_15;
    // 0x802A3DDC: lwc1        $f8, 0x24($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X24);
    skip_15:
    // 0x802A3DE0: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x802A3DE4: nop

    // 0x802A3DE8: bc1fl       L_802A3DFC
    if (!c1cs) {
        // 0x802A3DEC: neg.s       $f14, $f12
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = -ctx->f12.fl;
            goto L_802A3DFC;
    }
    goto skip_16;
    // 0x802A3DEC: neg.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = -ctx->f12.fl;
    skip_16:
    // 0x802A3DF0: b           L_802A3DFC
    // 0x802A3DF4: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
        goto L_802A3DFC;
    // 0x802A3DF4: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    // 0x802A3DF8: neg.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = -ctx->f12.fl;
L_802A3DFC:
    // 0x802A3DFC: lwc1        $f8, 0x24($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X24);
L_802A3E00:
    // 0x802A3E00: add.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f14.fl;
    // 0x802A3E04: swc1        $f10, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f10.u32l;
L_802A3E08:
    // 0x802A3E08: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    // 0x802A3E0C: jal         0x802D01D4
    // 0x802A3E10: swc1        $f14, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f14.u32l;
    static_3_802D01D4(rdram, ctx);
        goto after_11;
    // 0x802A3E10: swc1        $f14, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f14.u32l;
    after_11:
    // 0x802A3E14: lbu         $t1, 0x1C($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X1C);
    // 0x802A3E18: lwc1        $f14, 0x5C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x802A3E1C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x802A3E20: bnel        $t1, $zero, L_802A3E38
    if (ctx->r9 != 0) {
        // 0x802A3E24: lwc1        $f6, 0x10($s0)
        ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
            goto L_802A3E38;
    }
    goto skip_17;
    // 0x802A3E24: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    skip_17:
    // 0x802A3E28: mfc1        $a1, $f14
    ctx->r5 = (int32_t)ctx->f14.u32l;
    // 0x802A3E2C: jal         0x802D01D4
    // 0x802A3E30: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    static_3_802D01D4(rdram, ctx);
        goto after_12;
    // 0x802A3E30: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    after_12:
    // 0x802A3E34: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
L_802A3E38:
    // 0x802A3E38: lwc1        $f4, 0xA0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x802A3E3C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x802A3E40: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802A3E44: mul.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x802A3E48: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x802A3E4C: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x802A3E50: jal         0x8022A0D0
    // 0x802A3E54: nop

    static_3_8022A0D0(rdram, ctx);
        goto after_13;
    // 0x802A3E54: nop

    after_13:
    // 0x802A3E58: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x802A3E5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802A3E60: jal         0x8021B4B0
    // 0x802A3E64: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    static_3_8021B4B0(rdram, ctx);
        goto after_14;
    // 0x802A3E64: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    after_14:
    // 0x802A3E68: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802A3E6C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802A3E70: lw          $a1, 0x5C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X5C);
    // 0x802A3E74: jal         0x802AEF08
    // 0x802A3E78: lw          $a2, 0x60($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X60);
    static_3_802AEF08(rdram, ctx);
        goto after_15;
    // 0x802A3E78: lw          $a2, 0x60($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X60);
    after_15:
    // 0x802A3E7C: lwc1        $f10, 0x64($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X64);
    // 0x802A3E80: lbu         $t2, 0x1C($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X1C);
    // 0x802A3E84: swc1        $f0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f0.u32l;
    // 0x802A3E88: sub.s       $f6, $f10, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x802A3E8C: beq         $t2, $zero, L_802A40D0
    if (ctx->r10 == 0) {
        // 0x802A3E90: swc1        $f6, 0x8($s0)
        MEM_W(0X8, ctx->r16) = ctx->f6.u32l;
            goto L_802A40D0;
    }
    // 0x802A3E90: swc1        $f6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f6.u32l;
    // 0x802A3E94: lwc1        $f4, 0x4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4);
    // 0x802A3E98: b           L_802A40D0
    // 0x802A3E9C: swc1        $f4, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f4.u32l;
        goto L_802A40D0;
    // 0x802A3E9C: swc1        $f4, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f4.u32l;
    // 0x802A3EA0: lbu         $t3, 0x100($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X100);
L_802A3EA4:
    // 0x802A3EA4: lwc1        $f10, 0x9C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x802A3EA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802A3EAC: beq         $t3, $zero, L_802A4048
    if (ctx->r11 == 0) {
        // 0x802A3EB0: nop
    
            goto L_802A4048;
    }
    // 0x802A3EB0: nop

    // 0x802A3EB4: lwc1        $f8, 0x110($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X110);
    // 0x802A3EB8: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x802A3EBC: nop

    // 0x802A3EC0: bc1fl       L_802A3F58
    if (!c1cs) {
        // 0x802A3EC4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_802A3F58;
    }
    goto skip_18;
    // 0x802A3EC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_18:
    // 0x802A3EC8: jal         0x8023499C
    // 0x802A3ECC: nop

    static_3_8023499C(rdram, ctx);
        goto after_16;
    // 0x802A3ECC: nop

    after_16:
    // 0x802A3ED0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802A3ED4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802A3ED8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802A3EDC: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x802A3EE0: sub.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x802A3EE4: bc1f        L_802A3EFC
    if (!c1cs) {
        // 0x802A3EE8: swc1        $f6, 0x114($s0)
        MEM_W(0X114, ctx->r16) = ctx->f6.u32l;
            goto L_802A3EFC;
    }
    // 0x802A3EE8: swc1        $f6, 0x114($s0)
    MEM_W(0X114, ctx->r16) = ctx->f6.u32l;
    // 0x802A3EEC: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x802A3EF0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802A3EF4: b           L_802A3F08
    // 0x802A3EF8: swc1        $f4, 0x114($s0)
    MEM_W(0X114, ctx->r16) = ctx->f4.u32l;
        goto L_802A3F08;
    // 0x802A3EF8: swc1        $f4, 0x114($s0)
    MEM_W(0X114, ctx->r16) = ctx->f4.u32l;
L_802A3EFC:
    // 0x802A3EFC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802A3F00: nop

    // 0x802A3F04: swc1        $f8, 0x114($s0)
    MEM_W(0X114, ctx->r16) = ctx->f8.u32l;
L_802A3F08:
    // 0x802A3F08: jal         0x8023499C
    // 0x802A3F0C: nop

    static_3_8023499C(rdram, ctx);
        goto after_17;
    // 0x802A3F0C: nop

    after_17:
    // 0x802A3F10: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802A3F14: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802A3F18: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802A3F1C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x802A3F20: sub.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x802A3F24: bc1f        L_802A3F3C
    if (!c1cs) {
        // 0x802A3F28: swc1        $f10, 0x118($s0)
        MEM_W(0X118, ctx->r16) = ctx->f10.u32l;
            goto L_802A3F3C;
    }
    // 0x802A3F28: swc1        $f10, 0x118($s0)
    MEM_W(0X118, ctx->r16) = ctx->f10.u32l;
    // 0x802A3F2C: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x802A3F30: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802A3F34: b           L_802A3F48
    // 0x802A3F38: swc1        $f6, 0x118($s0)
    MEM_W(0X118, ctx->r16) = ctx->f6.u32l;
        goto L_802A3F48;
    // 0x802A3F38: swc1        $f6, 0x118($s0)
    MEM_W(0X118, ctx->r16) = ctx->f6.u32l;
L_802A3F3C:
    // 0x802A3F3C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802A3F40: nop

    // 0x802A3F44: swc1        $f4, 0x118($s0)
    MEM_W(0X118, ctx->r16) = ctx->f4.u32l;
L_802A3F48:
    // 0x802A3F48: lwc1        $f8, 0x9C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x802A3F4C: add.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f2.fl;
    // 0x802A3F50: swc1        $f10, 0x110($s0)
    MEM_W(0X110, ctx->r16) = ctx->f10.u32l;
    // 0x802A3F54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_802A3F58:
    // 0x802A3F58: jal         0x802D1A6C
    // 0x802A3F5C: lw          $a1, 0xA0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XA0);
    static_3_802D1A6C(rdram, ctx);
        goto after_18;
    // 0x802A3F5C: lw          $a1, 0xA0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XA0);
    after_18:
    // 0x802A3F60: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    // 0x802A3F64: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x802A3F68: lwc1        $f0, 0x6C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X6C);
    // 0x802A3F6C: lwc1        $f8, 0x114($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X114);
    // 0x802A3F70: div.s       $f2, $f6, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = DIV_S(ctx->f6.fl, ctx->f4.fl);
    // 0x802A3F74: lwc1        $f6, 0xA0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x802A3F78: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x802A3F7C: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    // 0x802A3F80: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x802A3F84: lwc1        $f8, 0x118($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X118);
    // 0x802A3F88: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    // 0x802A3F8C: mul.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x802A3F90: nop

    // 0x802A3F94: mul.s       $f12, $f4, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x802A3F98: nop

    // 0x802A3F9C: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x802A3FA0: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x802A3FA4: mul.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x802A3FA8: nop

    // 0x802A3FAC: mul.s       $f8, $f4, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x802A3FB0: jal         0x802D01D4
    // 0x802A3FB4: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    static_3_802D01D4(rdram, ctx);
        goto after_19;
    // 0x802A3FB4: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    after_19:
    // 0x802A3FB8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x802A3FBC: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x802A3FC0: jal         0x802D01D4
    // 0x802A3FC4: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    static_3_802D01D4(rdram, ctx);
        goto after_20;
    // 0x802A3FC4: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    after_20:
    // 0x802A3FC8: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x802A3FCC: lwc1        $f6, 0xA0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x802A3FD0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x802A3FD4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802A3FD8: mul.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x802A3FDC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x802A3FE0: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x802A3FE4: jal         0x8022A0D0
    // 0x802A3FE8: nop

    static_3_8022A0D0(rdram, ctx);
        goto after_21;
    // 0x802A3FE8: nop

    after_21:
    // 0x802A3FEC: lbu         $t4, 0x1E($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X1E);
    // 0x802A3FF0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802A3FF4: lwc1        $f10, 0xA0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x802A3FF8: beq         $t4, $zero, L_802A4014
    if (ctx->r12 == 0) {
        // 0x802A3FFC: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_802A4014;
    }
    // 0x802A3FFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802A4000: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802A4004: lwc1        $f4, 0x64($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X64);
    // 0x802A4008: mul.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x802A400C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x802A4010: swc1        $f8, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f8.u32l;
L_802A4014:
    // 0x802A4014: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x802A4018: jal         0x8021B4B0
    // 0x802A401C: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    static_3_8021B4B0(rdram, ctx);
        goto after_22;
    // 0x802A401C: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    after_22:
    // 0x802A4020: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802A4024: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802A4028: lw          $a1, 0x5C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X5C);
    // 0x802A402C: jal         0x802AEF08
    // 0x802A4030: lw          $a2, 0x60($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X60);
    static_3_802AEF08(rdram, ctx);
        goto after_23;
    // 0x802A4030: lw          $a2, 0x60($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X60);
    after_23:
    // 0x802A4034: lwc1        $f10, 0x64($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X64);
    // 0x802A4038: swc1        $f0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f0.u32l;
    // 0x802A403C: sub.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x802A4040: b           L_802A40D0
    // 0x802A4044: swc1        $f4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f4.u32l;
        goto L_802A40D0;
    // 0x802A4044: swc1        $f4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f4.u32l;
L_802A4048:
    // 0x802A4048: jal         0x802D1A6C
    // 0x802A404C: lw          $a1, 0xA0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XA0);
    static_3_802D1A6C(rdram, ctx);
        goto after_24;
    // 0x802A404C: lw          $a1, 0xA0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XA0);
    after_24:
    // 0x802A4050: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    // 0x802A4054: lwc1        $f8, 0xA0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x802A4058: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x802A405C: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    // 0x802A4060: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x802A4064: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802A4068: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x802A406C: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x802A4070: jal         0x8022A0D0
    // 0x802A4074: nop

    static_3_8022A0D0(rdram, ctx);
        goto after_25;
    // 0x802A4074: nop

    after_25:
    // 0x802A4078: lbu         $t5, 0x1E($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X1E);
    // 0x802A407C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802A4080: lwc1        $f6, 0xA0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x802A4084: beq         $t5, $zero, L_802A40A0
    if (ctx->r13 == 0) {
        // 0x802A4088: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_802A40A0;
    }
    // 0x802A4088: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802A408C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802A4090: lwc1        $f10, 0x64($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X64);
    // 0x802A4094: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802A4098: sub.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x802A409C: swc1        $f4, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f4.u32l;
L_802A40A0:
    // 0x802A40A0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x802A40A4: jal         0x8021B4B0
    // 0x802A40A8: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    static_3_8021B4B0(rdram, ctx);
        goto after_26;
    // 0x802A40A8: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    after_26:
    // 0x802A40AC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802A40B0: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802A40B4: lw          $a1, 0x5C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X5C);
    // 0x802A40B8: jal         0x802AEF08
    // 0x802A40BC: lw          $a2, 0x60($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X60);
    static_3_802AEF08(rdram, ctx);
        goto after_27;
    // 0x802A40BC: lw          $a2, 0x60($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X60);
    after_27:
    // 0x802A40C0: lwc1        $f6, 0x64($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X64);
    // 0x802A40C4: swc1        $f0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f0.u32l;
    // 0x802A40C8: sub.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x802A40CC: swc1        $f10, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f10.u32l;
L_802A40D0:
    // 0x802A40D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802A40D4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802A40D8: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    // 0x802A40DC: jr          $ra
    // 0x802A40E0: nop

    return;
    // 0x802A40E0: nop

;}
RECOMP_FUNC void D_802E3A34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E3AB4: jr          $ra
    // 0x802E3AB8: lw          $v0, 0x3F8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X3F8);
    return;
    // 0x802E3AB8: lw          $v0, 0x3F8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X3F8);
;}
RECOMP_FUNC void D_802ECE94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802ECF14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802ECF18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802ECF1C: beq         $a0, $zero, L_802ECF4C
    if (ctx->r4 == 0) {
        // 0x802ECF20: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_802ECF4C;
    }
    // 0x802ECF20: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802ECF24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802ECF28: jal         0x8031C514
    // 0x802ECF2C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_8031C514(rdram, ctx);
        goto after_0;
    // 0x802ECF2C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802ECF30: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x802ECF34: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802ECF38: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x802ECF3C: beql        $t7, $zero, L_802ECF50
    if (ctx->r15 == 0) {
        // 0x802ECF40: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802ECF50;
    }
    goto skip_0;
    // 0x802ECF40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802ECF44: jal         0x802C681C
    // 0x802ECF48: nop

    static_3_802C681C(rdram, ctx);
        goto after_1;
    // 0x802ECF48: nop

    after_1:
L_802ECF4C:
    // 0x802ECF4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802ECF50:
    // 0x802ECF50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802ECF54: jr          $ra
    // 0x802ECF58: nop

    return;
    // 0x802ECF58: nop

;}
RECOMP_FUNC void D_802497C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802497C0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802497C4: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x802497C8: jr          $ra
    // 0x802497CC: sh          $a2, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r6;
    return;
    // 0x802497CC: sh          $a2, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r6;
;}
RECOMP_FUNC void D_80247FE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80247FE0: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x80247FE4: ctc1        $a0, $FpcCsr
    set_cop1_cs(ctx->r4);
    // 0x80247FE8: jr          $ra
    // 0x80247FEC: nop

    return;
    // 0x80247FEC: nop

;}
RECOMP_FUNC void D_802D8530(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D85B0: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x802D85B4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802D85B8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802D85BC: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    // 0x802D85C0: sw          $a2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r6;
    // 0x802D85C4: lh          $t6, 0xF2($a0)
    ctx->r14 = MEM_H(ctx->r4, 0XF2);
    // 0x802D85C8: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802D85CC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802D85D0: bne         $t6, $zero, L_802D862C
    if (ctx->r14 != 0) {
        // 0x802D85D4: lw          $v0, 0x0($v0)
        ctx->r2 = MEM_W(ctx->r2, 0X0);
            goto L_802D862C;
    }
    // 0x802D85D4: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x802D85D8: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x802D85DC: jal         0x8022970C
    // 0x802D85E0: sw          $v0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r2;
    func_8022970C(rdram, ctx);
        goto after_0;
    // 0x802D85E0: sw          $v0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r2;
    after_0:
    // 0x802D85E4: lw          $v0, 0x6C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X6C);
    // 0x802D85E8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802D85EC: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x802D85F0: lwc1        $f4, 0x4C0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4C0);
    // 0x802D85F4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802D85F8: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x802D85FC: swc1        $f4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f4.u32l;
    // 0x802D8600: lwc1        $f6, 0x4C4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4C4);
    // 0x802D8604: lui         $a2, 0xC170
    ctx->r6 = S32(0XC170 << 16);
    // 0x802D8608: swc1        $f6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f6.u32l;
    // 0x802D860C: lwc1        $f8, 0x4C8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4C8);
    // 0x802D8610: jal         0x8022A0D0
    // 0x802D8614: swc1        $f8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f8.u32l;
    static_3_8022A0D0(rdram, ctx);
        goto after_1;
    // 0x802D8614: swc1        $f8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x802D8618: addiu       $a0, $s0, 0x4
    ctx->r4 = ADD32(ctx->r16, 0X4);
    // 0x802D861C: jal         0x80228DE0
    // 0x802D8620: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    func_80228DE0(rdram, ctx);
        goto after_2;
    // 0x802D8620: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_2:
    // 0x802D8624: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802D8628: sb          $t7, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r15;
L_802D862C:
    // 0x802D862C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802D8630: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x802D8634: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x802D8638: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802D863C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x802D8640: lh          $t1, 0x68($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X68);
    // 0x802D8644: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802D8648: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802D864C: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x802D8650: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x802D8654: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
    // 0x802D8658: bne         $t1, $at, L_802D8668
    if (ctx->r9 != ctx->r1) {
        // 0x802D865C: sh          $t0, 0x7C($s0)
        MEM_H(0X7C, ctx->r16) = ctx->r8;
            goto L_802D8668;
    }
    // 0x802D865C: sh          $t0, 0x7C($s0)
    MEM_H(0X7C, ctx->r16) = ctx->r8;
    // 0x802D8660: b           L_802D8668
    // 0x802D8664: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802D8668;
    // 0x802D8664: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802D8668:
    // 0x802D8668: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802D866C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802D8670: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x802D8674: jr          $ra
    // 0x802D8678: nop

    return;
    // 0x802D8678: nop

;}
RECOMP_FUNC void D_80230680(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80230680: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x80230684: slti        $at, $t6, 0xA
    ctx->r1 = SIGNED(ctx->r14) < 0XA ? 1 : 0;
    // 0x80230688: beq         $at, $zero, L_802306A0
    if (ctx->r1 == 0) {
        // 0x8023068C: sw          $a0, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r4;
            goto L_802306A0;
    }
    // 0x8023068C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80230690: addiu       $v0, $t6, 0x30
    ctx->r2 = ADD32(ctx->r14, 0X30);
    // 0x80230694: andi        $t7, $v0, 0xFF
    ctx->r15 = ctx->r2 & 0XFF;
    // 0x80230698: jr          $ra
    // 0x8023069C: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    return;
    // 0x8023069C: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_802306A0:
    // 0x802306A0: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x802306A4: jr          $ra
    // 0x802306A8: nop

    return;
    // 0x802306A8: nop

;}
RECOMP_FUNC void D_8022C2C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022C2C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022C2C8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8022C2CC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8022C2D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022C2D4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8022C2D8: addiu       $s1, $zero, 0x4
    ctx->r17 = ADD32(0, 0X4);
L_8022C2DC:
    // 0x8022C2DC: jal         0x8022C2A8
    // 0x8022C2E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_8022C2A8(rdram, ctx);
        goto after_0;
    // 0x8022C2E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8022C2E4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8022C2E8: bne         $s0, $s1, L_8022C2DC
    if (ctx->r16 != ctx->r17) {
        // 0x8022C2EC: nop
    
            goto L_8022C2DC;
    }
    // 0x8022C2EC: nop

    // 0x8022C2F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022C2F4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8022C2F8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8022C2FC: jr          $ra
    // 0x8022C300: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8022C300: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void D_80295CA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80295D20: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80295D24: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80295D28: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80295D2C: lw          $v0, 0x650($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X650);
    // 0x80295D30: sh          $zero, 0x0($a0)
    MEM_H(0X0, ctx->r4) = 0;
    // 0x80295D34: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80295D38: lh          $t6, 0x50($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X50);
    // 0x80295D3C: lw          $t9, 0x54($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X54);
    // 0x80295D40: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80295D44: addu        $a0, $t6, $a0
    ctx->r4 = ADD32(ctx->r14, ctx->r4);
    // 0x80295D48: jalr        $t9
    // 0x80295D4C: addiu       $a0, $a0, 0x5A0
    ctx->r4 = ADD32(ctx->r4, 0X5A0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80295D4C: addiu       $a0, $a0, 0x5A0
    ctx->r4 = ADD32(ctx->r4, 0X5A0);
    after_0:
    // 0x80295D50: addiu       $a0, $s0, 0x4
    ctx->r4 = ADD32(ctx->r16, 0X4);
    // 0x80295D54: jal         0x8031F800
    // 0x80295D58: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    static_3_8031F800(rdram, ctx);
        goto after_1;
    // 0x80295D58: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_1:
    // 0x80295D5C: lw          $v0, 0x290($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X290);
    // 0x80295D60: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80295D64: lh          $t7, 0x50($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X50);
    // 0x80295D68: lw          $t9, 0x54($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X54);
    // 0x80295D6C: addu        $a0, $t7, $s0
    ctx->r4 = ADD32(ctx->r15, ctx->r16);
    // 0x80295D70: jalr        $t9
    // 0x80295D74: addiu       $a0, $a0, 0x1E0
    ctx->r4 = ADD32(ctx->r4, 0X1E0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x80295D74: addiu       $a0, $a0, 0x1E0
    ctx->r4 = ADD32(ctx->r4, 0X1E0);
    after_2:
    // 0x80295D78: lw          $v0, 0x470($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X470);
    // 0x80295D7C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80295D80: lh          $t8, 0x50($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X50);
    // 0x80295D84: lw          $t9, 0x54($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X54);
    // 0x80295D88: addu        $a0, $t8, $s0
    ctx->r4 = ADD32(ctx->r24, ctx->r16);
    // 0x80295D8C: jalr        $t9
    // 0x80295D90: addiu       $a0, $a0, 0x3C0
    ctx->r4 = ADD32(ctx->r4, 0X3C0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x80295D90: addiu       $a0, $a0, 0x3C0
    ctx->r4 = ADD32(ctx->r4, 0X3C0);
    after_3:
    // 0x80295D94: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80295D98: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80295D9C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80295DA0: jr          $ra
    // 0x80295DA4: nop

    return;
    // 0x80295DA4: nop

;}
RECOMP_FUNC void D_80216EAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80216EAC: addiu       $sp, $sp, -0xC8
    ctx->r29 = ADD32(ctx->r29, -0XC8);
    // 0x80216EB0: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80216EB4: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x80216EB8: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x80216EBC: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x80216EC0: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x80216EC4: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x80216EC8: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x80216ECC: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x80216ED0: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x80216ED4: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x80216ED8: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80216EDC: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80216EE0: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x80216EE4: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x80216EE8: swc1        $f12, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f12.u32l;
    // 0x80216EEC: swc1        $f14, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f14.u32l;
    // 0x80216EF0: sw          $a2, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r6;
    // 0x80216EF4: lhu         $t8, 0x0($a3)
    ctx->r24 = MEM_HU(ctx->r7, 0X0);
    // 0x80216EF8: lw          $t7, 0x1C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X1C);
    // 0x80216EFC: lwc1        $f6, 0xC($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0XC);
    // 0x80216F00: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80216F04: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x80216F08: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x80216F0C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80216F10: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80216F14: lwc1        $f4, 0x1C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x80216F18: lwc1        $f10, 0x20($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X20);
    // 0x80216F1C: lw          $s5, 0x8($v0)
    ctx->r21 = MEM_W(ctx->r2, 0X8);
    // 0x80216F20: div.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80216F24: or          $s7, $a3, $zero
    ctx->r23 = ctx->r7 | 0;
    // 0x80216F28: lbu         $fp, 0x4($s5)
    ctx->r30 = MEM_BU(ctx->r21, 0X4);
    // 0x80216F2C: sw          $v0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r2;
    // 0x80216F30: mul.s       $f22, $f0, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80216F34: nop

    // 0x80216F38: mul.s       $f16, $f10, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x80216F3C: jal         0x80228CE0
    // 0x80216F40: div.s       $f20, $f8, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f20.fl = DIV_S(ctx->f8.fl, ctx->f16.fl);
    static_3_80228CE0(rdram, ctx);
        goto after_0;
    // 0x80216F40: div.s       $f20, $f8, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f20.fl = DIV_S(ctx->f8.fl, ctx->f16.fl);
    after_0:
    // 0x80216F44: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80216F48: blez        $fp, L_8021713C
    if (SIGNED(ctx->r30) <= 0) {
        // 0x80216F4C: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_8021713C;
    }
    // 0x80216F4C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80216F50: addiu       $s6, $sp, 0x6C
    ctx->r22 = ADD32(ctx->r29, 0X6C);
    // 0x80216F54: lw          $t2, 0x10($s7)
    ctx->r10 = MEM_W(ctx->r23, 0X10);
L_80216F58:
    // 0x80216F58: sll         $s4, $s3, 3
    ctx->r20 = S32(ctx->r19 << 3);
    // 0x80216F5C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80216F60: lw          $t1, 0x0($s5)
    ctx->r9 = MEM_W(ctx->r21, 0X0);
    // 0x80216F64: addu        $s4, $s4, $s3
    ctx->r20 = ADD32(ctx->r20, ctx->r19);
    // 0x80216F68: sllv        $t4, $t3, $s3
    ctx->r12 = S32(ctx->r11 << (ctx->r19 & 31));
    // 0x80216F6C: sll         $s4, $s4, 2
    ctx->r20 = S32(ctx->r20 << 2);
    // 0x80216F70: and         $t5, $t2, $t4
    ctx->r13 = ctx->r10 & ctx->r12;
    // 0x80216F74: beq         $t5, $zero, L_80216F88
    if (ctx->r13 == 0) {
        // 0x80216F78: addu        $v0, $t1, $s4
        ctx->r2 = ADD32(ctx->r9, ctx->r20);
            goto L_80216F88;
    }
    // 0x80216F78: addu        $v0, $t1, $s4
    ctx->r2 = ADD32(ctx->r9, ctx->r20);
    // 0x80216F7C: slti        $at, $s3, 0x20
    ctx->r1 = SIGNED(ctx->r19) < 0X20 ? 1 : 0;
    // 0x80216F80: bne         $at, $zero, L_80216F9C
    if (ctx->r1 != 0) {
        // 0x80216F84: nop
    
            goto L_80216F9C;
    }
    // 0x80216F84: nop

L_80216F88:
    // 0x80216F88: lbu         $t6, 0x7($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X7);
    // 0x80216F8C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x80216F90: andi        $t8, $t6, 0x1
    ctx->r24 = ctx->r14 & 0X1;
    // 0x80216F94: beq         $t8, $zero, L_80216FA4
    if (ctx->r24 == 0) {
        // 0x80216F98: nop
    
            goto L_80216FA4;
    }
    // 0x80216F98: nop

L_80216F9C:
    // 0x80216F9C: b           L_80216FA4
    // 0x80216FA0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
        goto L_80216FA4;
    // 0x80216FA0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80216FA4:
    // 0x80216FA4: bnel        $s0, $zero, L_80216FC0
    if (ctx->r16 != 0) {
        // 0x80216FA8: lw          $t0, 0x4($s7)
        ctx->r8 = MEM_W(ctx->r23, 0X4);
            goto L_80216FC0;
    }
    goto skip_0;
    // 0x80216FA8: lw          $t0, 0x4($s7)
    ctx->r8 = MEM_W(ctx->r23, 0X4);
    skip_0:
    // 0x80216FAC: lbu         $t7, 0x7($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X7);
    // 0x80216FB0: andi        $t9, $t7, 0x2
    ctx->r25 = ctx->r15 & 0X2;
    // 0x80216FB4: bnel        $t9, $zero, L_80217124
    if (ctx->r25 != 0) {
        // 0x80216FB8: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_80217124;
    }
    goto skip_1;
    // 0x80216FB8: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_1:
    // 0x80216FBC: lw          $t0, 0x4($s7)
    ctx->r8 = MEM_W(ctx->r23, 0X4);
L_80216FC0:
    // 0x80216FC0: sll         $t1, $s3, 1
    ctx->r9 = S32(ctx->r19 << 1);
    // 0x80216FC4: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x80216FC8: addu        $t3, $t0, $t1
    ctx->r11 = ADD32(ctx->r8, ctx->r9);
    // 0x80216FCC: lhu         $t2, 0x0($t3)
    ctx->r10 = MEM_HU(ctx->r11, 0X0);
    // 0x80216FD0: lw          $t5, 0x0($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X0);
    // 0x80216FD4: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x80216FD8: sll         $t4, $t2, 6
    ctx->r12 = S32(ctx->r10 << 6);
    // 0x80216FDC: jal         0x80228DE0
    // 0x80216FE0: addu        $a1, $t5, $t4
    ctx->r5 = ADD32(ctx->r13, ctx->r12);
    func_80228DE0(rdram, ctx);
        goto after_1;
    // 0x80216FE0: addu        $a1, $t5, $t4
    ctx->r5 = ADD32(ctx->r13, ctx->r12);
    after_1:
    // 0x80216FE4: bne         $s3, $zero, L_80217018
    if (ctx->r19 != 0) {
        // 0x80216FE8: lwc1        $f4, 0x9C($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X9C);
            goto L_80217018;
    }
    // 0x80216FE8: lwc1        $f4, 0x9C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x80216FEC: lw          $t6, 0xB0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB0);
    // 0x80216FF0: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x80216FF4: lwc1        $f18, 0x20($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X20);
    // 0x80216FF8: mul.s       $f0, $f18, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = MUL_S(ctx->f18.fl, ctx->f22.fl);
    // 0x80216FFC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80217000: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80217004: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80217008: jal         0x8022A210
    // 0x8021700C: nop

    static_3_8022A210(rdram, ctx);
        goto after_2;
    // 0x8021700C: nop

    after_2:
    // 0x80217010: b           L_8021703C
    // 0x80217014: nop

        goto L_8021703C;
    // 0x80217014: nop

L_80217018:
    // 0x80217018: mul.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x8021701C: lwc1        $f10, 0xA0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x80217020: lwc1        $f16, 0xA4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x80217024: mul.s       $f8, $f10, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x80217028: nop

    // 0x8021702C: mul.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x80217030: swc1        $f6, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f6.u32l;
    // 0x80217034: swc1        $f8, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f8.u32l;
    // 0x80217038: swc1        $f18, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f18.u32l;
L_8021703C:
    // 0x8021703C: jal         0x80228D0C
    // 0x80217040: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    static_3_80228D0C(rdram, ctx);
        goto after_3;
    // 0x80217040: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_3:
    // 0x80217044: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80217048: sll         $t8, $s2, 16
    ctx->r24 = S32(ctx->r18 << 16);
    // 0x8021704C: beq         $s0, $zero, L_802170AC
    if (ctx->r16 == 0) {
        // 0x80217050: sra         $s2, $t8, 16
        ctx->r18 = S32(SIGNED(ctx->r24) >> 16);
            goto L_802170AC;
    }
    // 0x80217050: sra         $s2, $t8, 16
    ctx->r18 = S32(SIGNED(ctx->r24) >> 16);
    // 0x80217054: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x80217058: addiu       $v0, $v0, 0x0
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x8021705C: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x80217060: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x80217064: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80217068: sll         $t1, $s3, 24
    ctx->r9 = S32(ctx->r19 << 24);
    // 0x8021706C: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x80217070: or          $t3, $t0, $t1
    ctx->r11 = ctx->r8 | ctx->r9;
    // 0x80217074: jal         0x80228CF0
    // 0x80217078: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    static_3_80228CF0(rdram, ctx);
        goto after_4;
    // 0x80217078: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    after_4:
    // 0x8021707C: lw          $t2, 0x0($s5)
    ctx->r10 = MEM_W(ctx->r21, 0X0);
    // 0x80217080: lwc1        $f12, 0xC8($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x80217084: lwc1        $f14, 0xCC($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x80217088: addu        $t5, $t2, $s4
    ctx->r13 = ADD32(ctx->r10, ctx->r20);
    // 0x8021708C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80217090: lw          $a2, 0xD0($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XD0);
    // 0x80217094: jal         0x80216534
    // 0x80217098: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    static_3_80216534(rdram, ctx);
        goto after_5;
    // 0x80217098: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    after_5:
    // 0x8021709C: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x802170A0: sra         $t4, $v1, 16
    ctx->r12 = S32(SIGNED(ctx->r3) >> 16);
    // 0x802170A4: b           L_802170B0
    // 0x802170A8: or          $v1, $t4, $zero
    ctx->r3 = ctx->r12 | 0;
        goto L_802170B0;
    // 0x802170A8: or          $v1, $t4, $zero
    ctx->r3 = ctx->r12 | 0;
L_802170AC:
    // 0x802170AC: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
L_802170B0:
    // 0x802170B0: bltz        $v1, L_802170C0
    if (SIGNED(ctx->r3) < 0) {
        // 0x802170B4: addiu       $t6, $s3, 0x1
        ctx->r14 = ADD32(ctx->r19, 0X1);
            goto L_802170C0;
    }
    // 0x802170B4: addiu       $t6, $s3, 0x1
    ctx->r14 = ADD32(ctx->r19, 0X1);
    // 0x802170B8: b           L_80217168
    // 0x802170BC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_80217168;
    // 0x802170BC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_802170C0:
    // 0x802170C0: bnel        $t6, $fp, L_802170D4
    if (ctx->r14 != ctx->r30) {
        // 0x802170C4: lw          $t8, 0x0($s5)
        ctx->r24 = MEM_W(ctx->r21, 0X0);
            goto L_802170D4;
    }
    goto skip_2;
    // 0x802170C4: lw          $t8, 0x0($s5)
    ctx->r24 = MEM_W(ctx->r21, 0X0);
    skip_2:
    // 0x802170C8: b           L_8021713C
    // 0x802170CC: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
        goto L_8021713C;
    // 0x802170CC: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x802170D0: lw          $t8, 0x0($s5)
    ctx->r24 = MEM_W(ctx->r21, 0X0);
L_802170D4:
    // 0x802170D4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x802170D8: addu        $v0, $t8, $s4
    ctx->r2 = ADD32(ctx->r24, ctx->r20);
    // 0x802170DC: lbu         $t7, 0x6($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X6);
    // 0x802170E0: lbu         $t9, 0x2A($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X2A);
    // 0x802170E4: subu        $s1, $t7, $t9
    ctx->r17 = SUB32(ctx->r15, ctx->r25);
    // 0x802170E8: sll         $t0, $s1, 16
    ctx->r8 = S32(ctx->r17 << 16);
    // 0x802170EC: sra         $s1, $t0, 16
    ctx->r17 = S32(SIGNED(ctx->r8) >> 16);
    // 0x802170F0: bltzl       $s1, L_80217124
    if (SIGNED(ctx->r17) < 0) {
        // 0x802170F4: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_80217124;
    }
    goto skip_3;
    // 0x802170F4: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_3:
L_802170F8:
    // 0x802170F8: jal         0x80228D9C
    // 0x802170FC: nop

    static_3_80228D9C(rdram, ctx);
        goto after_6;
    // 0x802170FC: nop

    after_6:
    // 0x80217100: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80217104: sll         $t5, $s0, 16
    ctx->r13 = S32(ctx->r16 << 16);
    // 0x80217108: sra         $s0, $t5, 16
    ctx->r16 = S32(SIGNED(ctx->r13) >> 16);
    // 0x8021710C: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x80217110: sll         $t3, $s2, 16
    ctx->r11 = S32(ctx->r18 << 16);
    // 0x80217114: slt         $at, $s1, $s0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x80217118: beq         $at, $zero, L_802170F8
    if (ctx->r1 == 0) {
        // 0x8021711C: sra         $s2, $t3, 16
        ctx->r18 = S32(SIGNED(ctx->r11) >> 16);
            goto L_802170F8;
    }
    // 0x8021711C: sra         $s2, $t3, 16
    ctx->r18 = S32(SIGNED(ctx->r11) >> 16);
    // 0x80217120: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_80217124:
    // 0x80217124: sll         $t6, $s3, 16
    ctx->r14 = S32(ctx->r19 << 16);
    // 0x80217128: sra         $s3, $t6, 16
    ctx->r19 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8021712C: slt         $at, $s3, $fp
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r30) ? 1 : 0;
    // 0x80217130: bnel        $at, $zero, L_80216F58
    if (ctx->r1 != 0) {
        // 0x80217134: lw          $t2, 0x10($s7)
        ctx->r10 = MEM_W(ctx->r23, 0X10);
            goto L_80216F58;
    }
    goto skip_4;
    // 0x80217134: lw          $t2, 0x10($s7)
    ctx->r10 = MEM_W(ctx->r23, 0X10);
    skip_4:
    // 0x80217138: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_8021713C:
    // 0x8021713C: blezl       $s2, L_80217168
    if (SIGNED(ctx->r18) <= 0) {
        // 0x80217140: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80217168;
    }
    goto skip_5;
    // 0x80217140: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    skip_5:
L_80217144:
    // 0x80217144: jal         0x80228D9C
    // 0x80217148: nop

    static_3_80228D9C(rdram, ctx);
        goto after_7;
    // 0x80217148: nop

    after_7:
    // 0x8021714C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80217150: sll         $t7, $s3, 16
    ctx->r15 = S32(ctx->r19 << 16);
    // 0x80217154: sra         $s3, $t7, 16
    ctx->r19 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80217158: slt         $at, $s3, $s2
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x8021715C: bne         $at, $zero, L_80217144
    if (ctx->r1 != 0) {
        // 0x80217160: nop
    
            goto L_80217144;
    }
    // 0x80217160: nop

    // 0x80217164: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80217168:
    // 0x80217168: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x8021716C: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x80217170: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x80217174: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80217178: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8021717C: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x80217180: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x80217184: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x80217188: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x8021718C: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x80217190: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x80217194: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x80217198: jr          $ra
    // 0x8021719C: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
    return;
    // 0x8021719C: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
;}
RECOMP_FUNC void D_802D2F0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D2F8C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802D2F90: lbu         $t7, 0x4($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X4);
    // 0x802D2F94: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x802D2F98: sb          $t6, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r14;
    // 0x802D2F9C: xor         $v1, $t6, $t7
    ctx->r3 = ctx->r14 ^ ctx->r15;
    // 0x802D2FA0: sltu        $t8, $zero, $v1
    ctx->r24 = 0 < ctx->r3 ? 1 : 0;
    // 0x802D2FA4: jr          $ra
    // 0x802D2FA8: andi        $v0, $t8, 0xFF
    ctx->r2 = ctx->r24 & 0XFF;
    return;
    // 0x802D2FA8: andi        $v0, $t8, 0xFF
    ctx->r2 = ctx->r24 & 0XFF;
;}
RECOMP_FUNC void D_802D2024(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D20A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802D20A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802D20AC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802D20B0: jal         0x80301EA0
    // 0x802D20B4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    static_3_80301EA0(rdram, ctx);
        goto after_0;
    // 0x802D20B4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x802D20B8: beq         $v0, $zero, L_802D20DC
    if (ctx->r2 == 0) {
        // 0x802D20BC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802D20DC;
    }
    // 0x802D20BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802D20C0: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x802D20C4: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x802D20C8: lbu         $t8, 0x4($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X4);
    // 0x802D20CC: sll         $t9, $t8, 5
    ctx->r25 = S32(ctx->r24 << 5);
    // 0x802D20D0: addu        $t0, $t6, $t9
    ctx->r8 = ADD32(ctx->r14, ctx->r25);
    // 0x802D20D4: b           L_802D20E4
    // 0x802D20D8: lwc1        $f0, 0x10($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X10);
        goto L_802D20E4;
    // 0x802D20D8: lwc1        $f0, 0x10($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X10);
L_802D20DC:
    // 0x802D20DC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802D20E0: nop

L_802D20E4:
    // 0x802D20E4: jr          $ra
    // 0x802D20E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x802D20E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void D_802AF408(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AF488: addiu       $sp, $sp, -0x178
    ctx->r29 = ADD32(ctx->r29, -0X178);
    // 0x802AF48C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802AF490: sw          $a1, 0x17C($sp)
    MEM_W(0X17C, ctx->r29) = ctx->r5;
    // 0x802AF494: sw          $a2, 0x180($sp)
    MEM_W(0X180, ctx->r29) = ctx->r6;
    // 0x802AF498: sw          $zero, 0x88($sp)
    MEM_W(0X88, ctx->r29) = 0;
    // 0x802AF49C: lw          $v0, 0x1A0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1A0);
    // 0x802AF4A0: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x802AF4A4: addiu       $a1, $sp, 0x118
    ctx->r5 = ADD32(ctx->r29, 0X118);
    // 0x802AF4A8: lh          $t6, 0x60($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X60);
    // 0x802AF4AC: sw          $a3, 0x178($sp)
    MEM_W(0X178, ctx->r29) = ctx->r7;
    // 0x802AF4B0: lw          $t9, 0x64($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X64);
    // 0x802AF4B4: addu        $a0, $t6, $a0
    ctx->r4 = ADD32(ctx->r14, ctx->r4);
    // 0x802AF4B8: jalr        $t9
    // 0x802AF4BC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x802AF4BC: nop

    after_0:
    // 0x802AF4C0: addiu       $a1, $sp, 0x174
    ctx->r5 = ADD32(ctx->r29, 0X174);
    // 0x802AF4C4: addiu       $t7, $sp, 0x170
    ctx->r15 = ADD32(ctx->r29, 0X170);
    // 0x802AF4C8: addiu       $t8, $sp, 0x16C
    ctx->r24 = ADD32(ctx->r29, 0X16C);
    // 0x802AF4CC: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x802AF4D0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x802AF4D4: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x802AF4D8: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x802AF4DC: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x802AF4E0: jal         0x802CF1C8
    // 0x802AF4E4: lw          $a0, 0x180($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X180);
    static_3_802CF1C8(rdram, ctx);
        goto after_1;
    // 0x802AF4E4: lw          $a0, 0x180($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X180);
    after_1:
    // 0x802AF4E8: addiu       $a1, $sp, 0x174
    ctx->r5 = ADD32(ctx->r29, 0X174);
    // 0x802AF4EC: addiu       $t0, $sp, 0x168
    ctx->r8 = ADD32(ctx->r29, 0X168);
    // 0x802AF4F0: addiu       $t1, $sp, 0x164
    ctx->r9 = ADD32(ctx->r29, 0X164);
    // 0x802AF4F4: addiu       $t2, $sp, 0x160
    ctx->r10 = ADD32(ctx->r29, 0X160);
    // 0x802AF4F8: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x802AF4FC: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x802AF500: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x802AF504: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x802AF508: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x802AF50C: jal         0x802CF1C8
    // 0x802AF510: addiu       $a0, $sp, 0x118
    ctx->r4 = ADD32(ctx->r29, 0X118);
    static_3_802CF1C8(rdram, ctx);
        goto after_2;
    // 0x802AF510: addiu       $a0, $sp, 0x118
    ctx->r4 = ADD32(ctx->r29, 0X118);
    after_2:
    // 0x802AF514: lwc1        $f4, 0x168($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X168);
    // 0x802AF518: lwc1        $f6, 0x170($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X170);
    // 0x802AF51C: lwc1        $f16, 0x164($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X164);
    // 0x802AF520: lwc1        $f18, 0x16C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X16C);
    // 0x802AF524: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x802AF528: lwc1        $f0, 0x17C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X17C);
    // 0x802AF52C: lw          $t3, 0x178($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X178);
    // 0x802AF530: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x802AF534: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x802AF538: nop

    // 0x802AF53C: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x802AF540: swc1        $f10, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->f10.u32l;
    // 0x802AF544: swc1        $f6, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->f6.u32l;
    // 0x802AF548: jal         0x802D25F4
    // 0x802AF54C: lw          $a0, 0xC($t3)
    ctx->r4 = MEM_W(ctx->r11, 0XC);
    static_3_802D25F4(rdram, ctx);
        goto after_3;
    // 0x802AF54C: lw          $a0, 0xC($t3)
    ctx->r4 = MEM_W(ctx->r11, 0XC);
    after_3:
    // 0x802AF550: lw          $v1, 0x178($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X178);
    // 0x802AF554: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x802AF558: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x802AF55C: swc1        $f0, 0xA8($v1)
    MEM_W(0XA8, ctx->r3) = ctx->f0.u32l;
    // 0x802AF560: lbu         $t4, 0x0($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X0);
    // 0x802AF564: lw          $t5, 0x0($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X0);
    // 0x802AF568: sw          $t4, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r12;
    // 0x802AF56C: lw          $t6, 0x7168($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X7168);
    // 0x802AF570: sw          $t6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r14;
    // 0x802AF574: lbu         $t9, 0x1D($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X1D);
    // 0x802AF578: beql        $t9, $zero, L_802AF7F4
    if (ctx->r25 == 0) {
        // 0x802AF57C: lw          $v0, 0x1A0($v1)
        ctx->r2 = MEM_W(ctx->r3, 0X1A0);
            goto L_802AF7F4;
    }
    goto skip_0;
    // 0x802AF57C: lw          $v0, 0x1A0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1A0);
    skip_0:
    // 0x802AF580: lw          $v0, 0x1A0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1A0);
    // 0x802AF584: addiu       $a1, $sp, 0xD8
    ctx->r5 = ADD32(ctx->r29, 0XD8);
    // 0x802AF588: lw          $t9, 0x64($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X64);
    // 0x802AF58C: lh          $t7, 0x60($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X60);
    // 0x802AF590: jalr        $t9
    // 0x802AF594: addu        $a0, $t7, $v1
    ctx->r4 = ADD32(ctx->r15, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x802AF594: addu        $a0, $t7, $v1
    ctx->r4 = ADD32(ctx->r15, ctx->r3);
    after_4:
    // 0x802AF598: lwc1        $f8, 0x160($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X160);
    // 0x802AF59C: addiu       $a0, $sp, 0xD8
    ctx->r4 = ADD32(ctx->r29, 0XD8);
    // 0x802AF5A0: addiu       $a2, $zero, 0x79
    ctx->r6 = ADD32(0, 0X79);
    // 0x802AF5A4: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x802AF5A8: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x802AF5AC: jal         0x802D01D4
    // 0x802AF5B0: nop

    static_3_802D01D4(rdram, ctx);
        goto after_5;
    // 0x802AF5B0: nop

    after_5:
    // 0x802AF5B4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802AF5B8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802AF5BC: lwc1        $f16, 0x15C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X15C);
    // 0x802AF5C0: addiu       $a0, $sp, 0xD8
    ctx->r4 = ADD32(ctx->r29, 0XD8);
    // 0x802AF5C4: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    // 0x802AF5C8: mul.s       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x802AF5CC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802AF5D0: jal         0x802D01D4
    // 0x802AF5D4: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    static_3_802D01D4(rdram, ctx);
        goto after_6;
    // 0x802AF5D4: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    after_6:
    // 0x802AF5D8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802AF5DC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802AF5E0: lwc1        $f4, 0x158($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X158);
    // 0x802AF5E4: addiu       $a0, $sp, 0xD8
    ctx->r4 = ADD32(ctx->r29, 0XD8);
    // 0x802AF5E8: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    // 0x802AF5EC: mul.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802AF5F0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802AF5F4: jal         0x802D01D4
    // 0x802AF5F8: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    static_3_802D01D4(rdram, ctx);
        goto after_7;
    // 0x802AF5F8: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    after_7:
    // 0x802AF5FC: lw          $t8, 0x178($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X178);
    // 0x802AF600: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802AF604: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802AF608: lwc1        $f8, 0xA8($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0XA8);
    // 0x802AF60C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802AF610: addiu       $a0, $sp, 0xD8
    ctx->r4 = ADD32(ctx->r29, 0XD8);
    // 0x802AF614: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x802AF618: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802AF61C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x802AF620: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x802AF624: jal         0x8022A0D0
    // 0x802AF628: nop

    static_3_8022A0D0(rdram, ctx);
        goto after_8;
    // 0x802AF628: nop

    after_8:
    // 0x802AF62C: addiu       $a0, $sp, 0x98
    ctx->r4 = ADD32(ctx->r29, 0X98);
    // 0x802AF630: jal         0x80228DE0
    // 0x802AF634: addiu       $a1, $sp, 0xD8
    ctx->r5 = ADD32(ctx->r29, 0XD8);
    func_80228DE0(rdram, ctx);
        goto after_9;
    // 0x802AF634: addiu       $a1, $sp, 0xD8
    ctx->r5 = ADD32(ctx->r29, 0XD8);
    after_9:
    // 0x802AF638: addiu       $a0, $sp, 0x98
    ctx->r4 = ADD32(ctx->r29, 0X98);
    // 0x802AF63C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x802AF640: jal         0x802D01D4
    // 0x802AF644: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    static_3_802D01D4(rdram, ctx);
        goto after_10;
    // 0x802AF644: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    after_10:
    // 0x802AF648: addiu       $a0, $sp, 0x98
    ctx->r4 = ADD32(ctx->r29, 0X98);
    // 0x802AF64C: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x802AF650: jal         0x802D01D4
    // 0x802AF654: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    static_3_802D01D4(rdram, ctx);
        goto after_11;
    // 0x802AF654: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    after_11:
    // 0x802AF658: lw          $t0, 0x178($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X178);
    // 0x802AF65C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802AF660: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802AF664: lwc1        $f18, 0xA8($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0XA8);
    // 0x802AF668: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802AF66C: addiu       $a0, $sp, 0x98
    ctx->r4 = ADD32(ctx->r29, 0X98);
    // 0x802AF670: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x802AF674: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802AF678: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x802AF67C: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x802AF680: jal         0x8022A0D0
    // 0x802AF684: nop

    static_3_8022A0D0(rdram, ctx);
        goto after_12;
    // 0x802AF684: nop

    after_12:
    // 0x802AF688: lw          $t1, 0x178($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X178);
    // 0x802AF68C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x802AF690: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802AF694: sb          $zero, 0x5F8($t1)
    MEM_B(0X5F8, ctx->r9) = 0;
    // 0x802AF698: sb          $zero, 0x5F9($t1)
    MEM_B(0X5F9, ctx->r9) = 0;
    // 0x802AF69C: lw          $t2, 0x78($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X78);
    // 0x802AF6A0: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    // 0x802AF6A4: lw          $a2, 0x10C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X10C);
    // 0x802AF6A8: bne         $t2, $at, L_802AF6C8
    if (ctx->r10 != ctx->r1) {
        // 0x802AF6AC: lw          $a1, 0x108($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X108);
            goto L_802AF6C8;
    }
    // 0x802AF6AC: lw          $a1, 0x108($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X108);
    // 0x802AF6B0: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x802AF6B4: beq         $t3, $at, L_802AF6C8
    if (ctx->r11 == ctx->r1) {
        // 0x802AF6B8: nop
    
            goto L_802AF6C8;
    }
    // 0x802AF6B8: nop

    // 0x802AF6BC: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x802AF6C0: b           L_802AF6D8
    // 0x802AF6C4: lwc1        $f8, 0x110($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X110);
        goto L_802AF6D8;
    // 0x802AF6C4: lwc1        $f8, 0x110($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X110);
L_802AF6C8:
    // 0x802AF6C8: jal         0x802AEF08
    // 0x802AF6CC: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    static_3_802AEF08(rdram, ctx);
        goto after_13;
    // 0x802AF6CC: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    after_13:
    // 0x802AF6D0: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x802AF6D4: lwc1        $f8, 0x110($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X110);
L_802AF6D8:
    // 0x802AF6D8: lw          $t4, 0x78($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X78);
    // 0x802AF6DC: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x802AF6E0: c.le.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl <= ctx->f2.fl;
    // 0x802AF6E4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802AF6E8: addiu       $a1, $sp, 0x118
    ctx->r5 = ADD32(ctx->r29, 0X118);
    // 0x802AF6EC: addiu       $a2, $sp, 0xD8
    ctx->r6 = ADD32(ctx->r29, 0XD8);
    // 0x802AF6F0: bc1f        L_802AF714
    if (!c1cs) {
        // 0x802AF6F4: nop
    
            goto L_802AF714;
    }
    // 0x802AF6F4: nop

    // 0x802AF6F8: beq         $t4, $at, L_802AF714
    if (ctx->r12 == ctx->r1) {
        // 0x802AF6FC: lw          $t5, 0x7C($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X7C);
            goto L_802AF714;
    }
    // 0x802AF6FC: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    // 0x802AF700: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x802AF704: beq         $t5, $at, L_802AF714
    if (ctx->r13 == ctx->r1) {
        // 0x802AF708: nop
    
            goto L_802AF714;
    }
    // 0x802AF708: nop

    // 0x802AF70C: b           L_802AF720
    // 0x802AF710: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
        goto L_802AF720;
    // 0x802AF710: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
L_802AF714:
    // 0x802AF714: jal         0x802B1904
    // 0x802AF718: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    static_3_802B1904(rdram, ctx);
        goto after_14;
    // 0x802AF718: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    after_14:
    // 0x802AF71C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_802AF720:
    // 0x802AF720: bne         $v1, $zero, L_802AF790
    if (ctx->r3 != 0) {
        // 0x802AF724: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_802AF790;
    }
    // 0x802AF724: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802AF728: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802AF72C: lw          $a1, 0xC8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XC8);
    // 0x802AF730: lw          $a2, 0xCC($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XCC);
    // 0x802AF734: jal         0x802AEF08
    // 0x802AF738: sw          $v1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r3;
    static_3_802AEF08(rdram, ctx);
        goto after_15;
    // 0x802AF738: sw          $v1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r3;
    after_15:
    // 0x802AF73C: lwc1        $f10, 0xD0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x802AF740: lw          $v1, 0x8C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X8C);
    // 0x802AF744: lw          $t6, 0x78($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X78);
    // 0x802AF748: c.le.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl <= ctx->f0.fl;
    // 0x802AF74C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x802AF750: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802AF754: addiu       $a1, $sp, 0xD8
    ctx->r5 = ADD32(ctx->r29, 0XD8);
    // 0x802AF758: bc1f        L_802AF77C
    if (!c1cs) {
        // 0x802AF75C: addiu       $a2, $sp, 0x98
        ctx->r6 = ADD32(ctx->r29, 0X98);
            goto L_802AF77C;
    }
    // 0x802AF75C: addiu       $a2, $sp, 0x98
    ctx->r6 = ADD32(ctx->r29, 0X98);
    // 0x802AF760: beq         $t6, $at, L_802AF77C
    if (ctx->r14 == ctx->r1) {
        // 0x802AF764: lw          $t7, 0x7C($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X7C);
            goto L_802AF77C;
    }
    // 0x802AF764: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    // 0x802AF768: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x802AF76C: beq         $t7, $at, L_802AF77C
    if (ctx->r15 == ctx->r1) {
        // 0x802AF770: addiu       $t9, $zero, 0x5
        ctx->r25 = ADD32(0, 0X5);
            goto L_802AF77C;
    }
    // 0x802AF770: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x802AF774: b           L_802AF790
    // 0x802AF778: sw          $t9, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r25;
        goto L_802AF790;
    // 0x802AF778: sw          $t9, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r25;
L_802AF77C:
    // 0x802AF77C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802AF780: jal         0x802B1904
    // 0x802AF784: sw          $v1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r3;
    static_3_802B1904(rdram, ctx);
        goto after_16;
    // 0x802AF784: sw          $v1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r3;
    after_16:
    // 0x802AF788: lw          $v1, 0x8C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X8C);
    // 0x802AF78C: sw          $v0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r2;
L_802AF790:
    // 0x802AF790: beq         $v1, $zero, L_802AF7A8
    if (ctx->r3 == 0) {
        // 0x802AF794: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_802AF7A8;
    }
    // 0x802AF794: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802AF798: beq         $v1, $at, L_802AF7A8
    if (ctx->r3 == ctx->r1) {
        // 0x802AF79C: lw          $t8, 0x78($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X78);
            goto L_802AF7A8;
    }
    // 0x802AF79C: lw          $t8, 0x78($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X78);
    // 0x802AF7A0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x802AF7A4: bne         $t8, $at, L_802AF7B4
    if (ctx->r24 != ctx->r1) {
        // 0x802AF7A8: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_802AF7B4;
    }
L_802AF7A8:
    // 0x802AF7A8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x802AF7AC: bnel        $v1, $at, L_802AF7C4
    if (ctx->r3 != ctx->r1) {
        // 0x802AF7B0: lw          $t2, 0x88($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X88);
            goto L_802AF7C4;
    }
    goto skip_1;
    // 0x802AF7B0: lw          $t2, 0x88($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X88);
    skip_1:
L_802AF7B4:
    // 0x802AF7B4: lw          $t1, 0x178($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X178);
    // 0x802AF7B8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x802AF7BC: sb          $t0, 0x5F8($t1)
    MEM_B(0X5F8, ctx->r9) = ctx->r8;
    // 0x802AF7C0: lw          $t2, 0x88($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X88);
L_802AF7C4:
    // 0x802AF7C4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802AF7C8: beql        $t2, $zero, L_802AFA34
    if (ctx->r10 == 0) {
        // 0x802AF7CC: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_802AFA34;
    }
    goto skip_2;
    // 0x802AF7CC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_2:
    // 0x802AF7D0: beq         $t2, $at, L_802AFA30
    if (ctx->r10 == ctx->r1) {
        // 0x802AF7D4: lw          $t3, 0x78($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X78);
            goto L_802AFA30;
    }
    // 0x802AF7D4: lw          $t3, 0x78($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X78);
    // 0x802AF7D8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x802AF7DC: beq         $t3, $at, L_802AFA30
    if (ctx->r11 == ctx->r1) {
        // 0x802AF7E0: lw          $t5, 0x178($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X178);
            goto L_802AFA30;
    }
    // 0x802AF7E0: lw          $t5, 0x178($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X178);
    // 0x802AF7E4: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x802AF7E8: b           L_802AFA30
    // 0x802AF7EC: sb          $t4, 0x5F9($t5)
    MEM_B(0X5F9, ctx->r13) = ctx->r12;
        goto L_802AFA30;
    // 0x802AF7EC: sb          $t4, 0x5F9($t5)
    MEM_B(0X5F9, ctx->r13) = ctx->r12;
    // 0x802AF7F0: lw          $v0, 0x1A0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1A0);
L_802AF7F4:
    // 0x802AF7F4: addiu       $a1, $sp, 0xD8
    ctx->r5 = ADD32(ctx->r29, 0XD8);
    // 0x802AF7F8: lw          $t9, 0x64($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X64);
    // 0x802AF7FC: lh          $t6, 0x60($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X60);
    // 0x802AF800: jalr        $t9
    // 0x802AF804: addu        $a0, $t6, $v1
    ctx->r4 = ADD32(ctx->r14, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_17;
    // 0x802AF804: addu        $a0, $t6, $v1
    ctx->r4 = ADD32(ctx->r14, ctx->r3);
    after_17:
    // 0x802AF808: lwc1        $f16, 0x160($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X160);
    // 0x802AF80C: addiu       $a0, $sp, 0xD8
    ctx->r4 = ADD32(ctx->r29, 0XD8);
    // 0x802AF810: addiu       $a2, $zero, 0x79
    ctx->r6 = ADD32(0, 0X79);
    // 0x802AF814: neg.s       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = -ctx->f16.fl;
    // 0x802AF818: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x802AF81C: jal         0x802D01D4
    // 0x802AF820: nop

    static_3_802D01D4(rdram, ctx);
        goto after_18;
    // 0x802AF820: nop

    after_18:
    // 0x802AF824: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x802AF828: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802AF82C: lwc1        $f4, 0x15C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X15C);
    // 0x802AF830: addiu       $a0, $sp, 0xD8
    ctx->r4 = ADD32(ctx->r29, 0XD8);
    // 0x802AF834: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    // 0x802AF838: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802AF83C: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x802AF840: jal         0x802D01D4
    // 0x802AF844: nop

    static_3_802D01D4(rdram, ctx);
        goto after_19;
    // 0x802AF844: nop

    after_19:
    // 0x802AF848: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x802AF84C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802AF850: lwc1        $f10, 0x158($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X158);
    // 0x802AF854: addiu       $a0, $sp, 0xD8
    ctx->r4 = ADD32(ctx->r29, 0XD8);
    // 0x802AF858: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    // 0x802AF85C: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x802AF860: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x802AF864: jal         0x802D01D4
    // 0x802AF868: nop

    static_3_802D01D4(rdram, ctx);
        goto after_20;
    // 0x802AF868: nop

    after_20:
    // 0x802AF86C: lw          $t7, 0x178($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X178);
    // 0x802AF870: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x802AF874: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802AF878: lwc1        $f4, 0xA8($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0XA8);
    // 0x802AF87C: addiu       $a0, $sp, 0xD8
    ctx->r4 = ADD32(ctx->r29, 0XD8);
    // 0x802AF880: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802AF884: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802AF888: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x802AF88C: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x802AF890: jal         0x8022A0D0
    // 0x802AF894: nop

    static_3_8022A0D0(rdram, ctx);
        goto after_21;
    // 0x802AF894: nop

    after_21:
    // 0x802AF898: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x802AF89C: jal         0x80228DE0
    // 0x802AF8A0: addiu       $a1, $sp, 0xD8
    ctx->r5 = ADD32(ctx->r29, 0XD8);
    func_80228DE0(rdram, ctx);
        goto after_22;
    // 0x802AF8A0: addiu       $a1, $sp, 0xD8
    ctx->r5 = ADD32(ctx->r29, 0XD8);
    after_22:
    // 0x802AF8A4: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x802AF8A8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802AF8AC: lwc1        $f10, 0x6C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x802AF8B0: lw          $t8, 0x178($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X178);
    // 0x802AF8B4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x802AF8B8: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x802AF8BC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802AF8C0: swc1        $f18, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f18.u32l;
    // 0x802AF8C4: sb          $zero, 0x5F8($t8)
    MEM_B(0X5F8, ctx->r24) = 0;
    // 0x802AF8C8: lw          $t0, 0x78($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X78);
    // 0x802AF8CC: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x802AF8D0: lw          $a2, 0x10C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X10C);
    // 0x802AF8D4: bne         $t0, $at, L_802AF8F4
    if (ctx->r8 != ctx->r1) {
        // 0x802AF8D8: lw          $a1, 0x108($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X108);
            goto L_802AF8F4;
    }
    // 0x802AF8D8: lw          $a1, 0x108($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X108);
    // 0x802AF8DC: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x802AF8E0: beq         $t1, $at, L_802AF8F4
    if (ctx->r9 == ctx->r1) {
        // 0x802AF8E4: nop
    
            goto L_802AF8F4;
    }
    // 0x802AF8E4: nop

    // 0x802AF8E8: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x802AF8EC: b           L_802AF904
    // 0x802AF8F0: lwc1        $f4, 0x110($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X110);
        goto L_802AF904;
    // 0x802AF8F0: lwc1        $f4, 0x110($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X110);
L_802AF8F4:
    // 0x802AF8F4: jal         0x802AEF08
    // 0x802AF8F8: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    static_3_802AEF08(rdram, ctx);
        goto after_23;
    // 0x802AF8F8: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    after_23:
    // 0x802AF8FC: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x802AF900: lwc1        $f4, 0x110($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X110);
L_802AF904:
    // 0x802AF904: lw          $t2, 0x78($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X78);
    // 0x802AF908: lwc1        $f6, 0x150($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X150);
    // 0x802AF90C: c.le.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl <= ctx->f2.fl;
    // 0x802AF910: nop

    // 0x802AF914: bc1f        L_802AF938
    if (!c1cs) {
        // 0x802AF918: addiu       $a3, $zero, 0x4
        ctx->r7 = ADD32(0, 0X4);
            goto L_802AF938;
    }
    // 0x802AF918: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x802AF91C: beq         $t2, $a3, L_802AF938
    if (ctx->r10 == ctx->r7) {
        // 0x802AF920: lw          $t3, 0x7C($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X7C);
            goto L_802AF938;
    }
    // 0x802AF920: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    // 0x802AF924: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x802AF928: beql        $t3, $at, L_802AF93C
    if (ctx->r11 == ctx->r1) {
        // 0x802AF92C: lui         $at, 0x4248
        ctx->r1 = S32(0X4248 << 16);
            goto L_802AF93C;
    }
    goto skip_3;
    // 0x802AF92C: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    skip_3:
    // 0x802AF930: b           L_802AF964
    // 0x802AF934: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
        goto L_802AF964;
    // 0x802AF934: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
L_802AF938:
    // 0x802AF938: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
L_802AF93C:
    // 0x802AF93C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802AF940: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802AF944: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802AF948: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x802AF94C: addiu       $a1, $sp, 0x118
    ctx->r5 = ADD32(ctx->r29, 0X118);
    // 0x802AF950: addiu       $a2, $sp, 0xD8
    ctx->r6 = ADD32(ctx->r29, 0XD8);
    // 0x802AF954: jal         0x802B1904
    // 0x802AF958: swc1        $f10, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->f10.u32l;
    static_3_802B1904(rdram, ctx);
        goto after_24;
    // 0x802AF958: swc1        $f10, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->f10.u32l;
    after_24:
    // 0x802AF95C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x802AF960: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
L_802AF964:
    // 0x802AF964: bne         $v1, $zero, L_802AF9D8
    if (ctx->r3 != 0) {
        // 0x802AF968: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_802AF9D8;
    }
    // 0x802AF968: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802AF96C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802AF970: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    // 0x802AF974: lw          $a2, 0x68($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X68);
    // 0x802AF978: jal         0x802AEF08
    // 0x802AF97C: sw          $v1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r3;
    static_3_802AEF08(rdram, ctx);
        goto after_25;
    // 0x802AF97C: sw          $v1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r3;
    after_25:
    // 0x802AF980: lwc1        $f16, 0x6C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x802AF984: lw          $v1, 0x8C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X8C);
    // 0x802AF988: lw          $t4, 0x78($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X78);
    // 0x802AF98C: c.le.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl <= ctx->f0.fl;
    // 0x802AF990: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x802AF994: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802AF998: addiu       $a1, $sp, 0x118
    ctx->r5 = ADD32(ctx->r29, 0X118);
    // 0x802AF99C: bc1f        L_802AF9C0
    if (!c1cs) {
        // 0x802AF9A0: addiu       $a2, $sp, 0x34
        ctx->r6 = ADD32(ctx->r29, 0X34);
            goto L_802AF9C0;
    }
    // 0x802AF9A0: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x802AF9A4: beq         $t4, $at, L_802AF9C0
    if (ctx->r12 == ctx->r1) {
        // 0x802AF9A8: lw          $t5, 0x7C($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X7C);
            goto L_802AF9C0;
    }
    // 0x802AF9A8: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    // 0x802AF9AC: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x802AF9B0: beq         $t5, $at, L_802AF9C0
    if (ctx->r13 == ctx->r1) {
        // 0x802AF9B4: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_802AF9C0;
    }
    // 0x802AF9B4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802AF9B8: b           L_802AF9D4
    // 0x802AF9BC: sw          $v0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r2;
        goto L_802AF9D4;
    // 0x802AF9BC: sw          $v0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r2;
L_802AF9C0:
    // 0x802AF9C0: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802AF9C4: jal         0x802B1904
    // 0x802AF9C8: sw          $v1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r3;
    static_3_802B1904(rdram, ctx);
        goto after_26;
    // 0x802AF9C8: sw          $v1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r3;
    after_26:
    // 0x802AF9CC: lw          $v1, 0x8C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X8C);
    // 0x802AF9D0: sw          $v0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r2;
L_802AF9D4:
    // 0x802AF9D4: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
L_802AF9D8:
    // 0x802AF9D8: beq         $v1, $zero, L_802AF9F4
    if (ctx->r3 == 0) {
        // 0x802AF9DC: lw          $v0, 0x88($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X88);
            goto L_802AF9F4;
    }
    // 0x802AF9DC: lw          $v0, 0x88($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X88);
    // 0x802AF9E0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802AF9E4: beq         $v1, $at, L_802AF9F4
    if (ctx->r3 == ctx->r1) {
        // 0x802AF9E8: lw          $t6, 0x78($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X78);
            goto L_802AF9F4;
    }
    // 0x802AF9E8: lw          $t6, 0x78($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X78);
    // 0x802AF9EC: bnel        $t6, $a3, L_802AFA00
    if (ctx->r14 != ctx->r7) {
        // 0x802AF9F0: lw          $t7, 0x178($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X178);
            goto L_802AFA00;
    }
    goto skip_4;
    // 0x802AF9F0: lw          $t7, 0x178($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X178);
    skip_4:
L_802AF9F4:
    // 0x802AF9F4: bne         $v1, $a3, L_802AFA08
    if (ctx->r3 != ctx->r7) {
        // 0x802AF9F8: nop
    
            goto L_802AFA08;
    }
    // 0x802AF9F8: nop

    // 0x802AF9FC: lw          $t7, 0x178($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X178);
L_802AFA00:
    // 0x802AFA00: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802AFA04: sb          $t9, 0x5F8($t7)
    MEM_B(0X5F8, ctx->r15) = ctx->r25;
L_802AFA08:
    // 0x802AFA08: beq         $v0, $zero, L_802AFA30
    if (ctx->r2 == 0) {
        // 0x802AFA0C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_802AFA30;
    }
    // 0x802AFA0C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802AFA10: beql        $v0, $at, L_802AFA34
    if (ctx->r2 == ctx->r1) {
        // 0x802AFA14: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_802AFA34;
    }
    goto skip_5;
    // 0x802AFA14: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_5:
    // 0x802AFA18: beq         $v0, $a3, L_802AFA30
    if (ctx->r2 == ctx->r7) {
        // 0x802AFA1C: lw          $t8, 0x78($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X78);
            goto L_802AFA30;
    }
    // 0x802AFA1C: lw          $t8, 0x78($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X78);
    // 0x802AFA20: beq         $t8, $a3, L_802AFA30
    if (ctx->r24 == ctx->r7) {
        // 0x802AFA24: lw          $t1, 0x178($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X178);
            goto L_802AFA30;
    }
    // 0x802AFA24: lw          $t1, 0x178($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X178);
    // 0x802AFA28: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x802AFA2C: sb          $t0, 0x5F8($t1)
    MEM_B(0X5F8, ctx->r9) = ctx->r8;
L_802AFA30:
    // 0x802AFA30: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802AFA34:
    // 0x802AFA34: addiu       $sp, $sp, 0x178
    ctx->r29 = ADD32(ctx->r29, 0X178);
    // 0x802AFA38: jr          $ra
    // 0x802AFA3C: nop

    return;
    // 0x802AFA3C: nop

;}
RECOMP_FUNC void D_802B8C20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B8CA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B8CA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B8CA8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802B8CAC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802B8CB0: jal         0x80320D7C
    // 0x802B8CB4: lbu         $a1, 0x1F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X1F);
    static_3_80320D7C(rdram, ctx);
        goto after_0;
    // 0x802B8CB4: lbu         $a1, 0x1F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X1F);
    after_0:
    // 0x802B8CB8: lbu         $v0, 0x1F($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X1F);
    // 0x802B8CBC: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x802B8CC0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802B8CC4: beql        $v0, $zero, L_802B8CE0
    if (ctx->r2 == 0) {
        // 0x802B8CC8: lh          $v0, 0x80($v1)
        ctx->r2 = MEM_H(ctx->r3, 0X80);
            goto L_802B8CE0;
    }
    goto skip_0;
    // 0x802B8CC8: lh          $v0, 0x80($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X80);
    skip_0:
    // 0x802B8CCC: beql        $v0, $at, L_802B8D04
    if (ctx->r2 == ctx->r1) {
        // 0x802B8CD0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802B8D04;
    }
    goto skip_1;
    // 0x802B8CD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x802B8CD4: b           L_802B8D04
    // 0x802B8CD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802B8D04;
    // 0x802B8CD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B8CDC: lh          $v0, 0x80($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X80);
L_802B8CE0:
    // 0x802B8CE0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802B8CE4: bnel        $v0, $at, L_802B8D04
    if (ctx->r2 != ctx->r1) {
        // 0x802B8CE8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802B8D04;
    }
    goto skip_2;
    // 0x802B8CE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x802B8CEC: jal         0x8021BAE0
    // 0x802B8CF0: lw          $a0, 0x4($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X4);
    static_3_8021BAE0(rdram, ctx);
        goto after_1;
    // 0x802B8CF0: lw          $a0, 0x4($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X4);
    after_1:
    // 0x802B8CF4: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x802B8CF8: ori         $t6, $zero, 0xFFFF
    ctx->r14 = 0 | 0XFFFF;
    // 0x802B8CFC: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    // 0x802B8D00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802B8D04:
    // 0x802B8D04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B8D08: jr          $ra
    // 0x802B8D0C: nop

    return;
    // 0x802B8D0C: nop

;}
RECOMP_FUNC void D_8021609C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021609C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x802160A0: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x802160A4: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x802160A8: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x802160AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802160B0: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x802160B4: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x802160B8: swc1        $f4, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f4.u32l;
    // 0x802160BC: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x802160C0: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x802160C4: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x802160C8: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x802160CC: swc1        $f6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f6.u32l;
    // 0x802160D0: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x802160D4: swc1        $f12, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f12.u32l;
    // 0x802160D8: lwc1        $f8, 0x1C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x802160DC: lbu         $v1, 0x6F($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X6F);
    // 0x802160E0: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    // 0x802160E4: lwc1        $f10, 0x20($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X20);
    // 0x802160E8: andi        $t4, $v1, 0x1
    ctx->r12 = ctx->r3 & 0X1;
    // 0x802160EC: swc1        $f10, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f10.u32l;
    // 0x802160F0: lwc1        $f16, 0x0($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X0);
    // 0x802160F4: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x802160F8: sub.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f16.fl;
    // 0x802160FC: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x80216100: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x80216104: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
    // 0x80216108: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8021610C: mfc1        $t1, $f8
    ctx->r9 = (int32_t)ctx->f8.u32l;
    // 0x80216110: nop

    // 0x80216114: div         $zero, $t1, $t3
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r11))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r11)));
    // 0x80216118: mflo        $v0
    ctx->r2 = lo;
    // 0x8021611C: andi        $a2, $v0, 0xFFFF
    ctx->r6 = ctx->r2 & 0XFFFF;
    // 0x80216120: bne         $t3, $zero, L_8021612C
    if (ctx->r11 != 0) {
        // 0x80216124: nop
    
            goto L_8021612C;
    }
    // 0x80216124: nop

    // 0x80216128: break       7
    do_break(2149671208);
L_8021612C:
    // 0x8021612C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80216130: bne         $t3, $at, L_80216144
    if (ctx->r11 != ctx->r1) {
        // 0x80216134: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80216144;
    }
    // 0x80216134: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80216138: bne         $t1, $at, L_80216144
    if (ctx->r9 != ctx->r1) {
        // 0x8021613C: nop
    
            goto L_80216144;
    }
    // 0x8021613C: nop

    // 0x80216140: break       6
    do_break(2149671232);
L_80216144:
    // 0x80216144: beql        $t4, $zero, L_80216160
    if (ctx->r12 == 0) {
        // 0x80216148: lwc1        $f0, 0x4($a3)
        ctx->f0.u32l = MEM_W(ctx->r7, 0X4);
            goto L_80216160;
    }
    goto skip_0;
    // 0x80216148: lwc1        $f0, 0x4($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X4);
    skip_0:
    // 0x8021614C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x80216150: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x80216154: andi        $t5, $a2, 0xFFFF
    ctx->r13 = ctx->r6 & 0XFFFF;
    // 0x80216158: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    // 0x8021615C: lwc1        $f0, 0x4($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X4);
L_80216160:
    // 0x80216160: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80216164: andi        $t2, $v1, 0x2
    ctx->r10 = ctx->r3 & 0X2;
    // 0x80216168: sub.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x8021616C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80216170: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80216174: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x80216178: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x8021617C: nop

    // 0x80216180: div         $zero, $t7, $t9
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r25))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r25)));
    // 0x80216184: mflo        $a0
    ctx->r4 = lo;
    // 0x80216188: andi        $v0, $a0, 0xFFFF
    ctx->r2 = ctx->r4 & 0XFFFF;
    // 0x8021618C: bne         $t9, $zero, L_80216198
    if (ctx->r25 != 0) {
        // 0x80216190: nop
    
            goto L_80216198;
    }
    // 0x80216190: nop

    // 0x80216194: break       7
    do_break(2149671316);
L_80216198:
    // 0x80216198: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8021619C: bne         $t9, $at, L_802161B0
    if (ctx->r25 != ctx->r1) {
        // 0x802161A0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_802161B0;
    }
    // 0x802161A0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802161A4: bne         $t7, $at, L_802161B0
    if (ctx->r15 != ctx->r1) {
        // 0x802161A8: nop
    
            goto L_802161B0;
    }
    // 0x802161A8: nop

    // 0x802161AC: break       6
    do_break(2149671340);
L_802161B0:
    // 0x802161B0: beql        $t2, $zero, L_802161CC
    if (ctx->r10 == 0) {
        // 0x802161B4: lbu         $a1, 0x18($a3)
        ctx->r5 = MEM_BU(ctx->r7, 0X18);
            goto L_802161CC;
    }
    goto skip_1;
    // 0x802161B4: lbu         $a1, 0x18($a3)
    ctx->r5 = MEM_BU(ctx->r7, 0X18);
    skip_1:
    // 0x802161B8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x802161BC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802161C0: andi        $t1, $v0, 0xFFFF
    ctx->r9 = ctx->r2 & 0XFFFF;
    // 0x802161C4: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x802161C8: lbu         $a1, 0x18($a3)
    ctx->r5 = MEM_BU(ctx->r7, 0X18);
L_802161CC:
    // 0x802161CC: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
    // 0x802161D0: slt         $at, $a2, $a1
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x802161D4: beq         $at, $zero, L_802161F0
    if (ctx->r1 == 0) {
        // 0x802161D8: nop
    
            goto L_802161F0;
    }
    // 0x802161D8: nop

    // 0x802161DC: lbu         $t3, 0x19($a3)
    ctx->r11 = MEM_BU(ctx->r7, 0X19);
    // 0x802161E0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802161E4: slt         $at, $v0, $t3
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x802161E8: bne         $at, $zero, L_802161F8
    if (ctx->r1 != 0) {
        // 0x802161EC: nop
    
            goto L_802161F8;
    }
    // 0x802161EC: nop

L_802161F0:
    // 0x802161F0: b           L_80216404
    // 0x802161F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80216404;
    // 0x802161F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802161F8:
    // 0x802161F8: multu       $a0, $a1
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802161FC: lw          $t0, 0x64($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X64);
    // 0x80216200: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80216204: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80216208: mtc1        $a2, $f10
    ctx->f10.u32l = ctx->r6;
    // 0x8021620C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80216210: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80216214: mflo        $t4
    ctx->r12 = lo;
    // 0x80216218: addu        $t5, $v1, $t4
    ctx->r13 = ADD32(ctx->r3, ctx->r12);
    // 0x8021621C: sh          $t5, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r13;
    // 0x80216220: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80216224: mul.s       $f12, $f8, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x80216228: bgez        $a2, L_8021623C
    if (SIGNED(ctx->r6) >= 0) {
        // 0x8021622C: nop
    
            goto L_8021623C;
    }
    // 0x8021622C: nop

    // 0x80216230: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80216234: nop

    // 0x80216238: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
L_8021623C:
    // 0x8021623C: mul.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x80216240: lwc1        $f6, 0x4C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80216244: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x80216248: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8021624C: sub.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x80216250: sub.s       $f8, $f4, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f16.fl;
    // 0x80216254: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80216258: sub.s       $f6, $f8, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f12.fl;
    // 0x8021625C: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80216260: swc1        $f6, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f6.u32l;
    // 0x80216264: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80216268: mul.s       $f14, $f10, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x8021626C: bgez        $v0, L_80216280
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80216270: nop
    
            goto L_80216280;
    }
    // 0x80216270: nop

    // 0x80216274: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80216278: nop

    // 0x8021627C: add.s       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f6.fl;
L_80216280:
    // 0x80216280: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80216284: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80216288: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x8021628C: sub.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x80216290: neg.s       $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = -ctx->f12.fl;
    // 0x80216294: sub.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x80216298: sub.s       $f6, $f10, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f14.fl;
    // 0x8021629C: swc1        $f6, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f6.u32l;
    // 0x802162A0: lwc1        $f2, 0x0($t6)
    ctx->f2.u32l = MEM_W(ctx->r14, 0X0);
    // 0x802162A4: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x802162A8: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    // 0x802162AC: nop

    // 0x802162B0: bc1fl       L_802162C4
    if (!c1cs) {
        // 0x802162B4: c.le.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl <= ctx->f2.fl;
            goto L_802162C4;
    }
    goto skip_2;
    // 0x802162B4: c.le.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl <= ctx->f2.fl;
    skip_2:
    // 0x802162B8: b           L_80216310
    // 0x802162BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80216310;
    // 0x802162BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802162C0: c.le.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl <= ctx->f2.fl;
L_802162C4:
    // 0x802162C4: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x802162C8: bc1fl       L_802162DC
    if (!c1cs) {
        // 0x802162CC: lwc1        $f0, 0x0($t7)
        ctx->f0.u32l = MEM_W(ctx->r15, 0X0);
            goto L_802162DC;
    }
    goto skip_3;
    // 0x802162CC: lwc1        $f0, 0x0($t7)
    ctx->f0.u32l = MEM_W(ctx->r15, 0X0);
    skip_3:
    // 0x802162D0: b           L_80216310
    // 0x802162D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80216310;
    // 0x802162D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802162D8: lwc1        $f0, 0x0($t7)
    ctx->f0.u32l = MEM_W(ctx->r15, 0X0);
L_802162DC:
    // 0x802162DC: neg.s       $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = -ctx->f14.fl;
    // 0x802162E0: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x802162E4: nop

    // 0x802162E8: bc1fl       L_802162FC
    if (!c1cs) {
        // 0x802162EC: c.le.s      $f14, $f0
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl <= ctx->f0.fl;
            goto L_802162FC;
    }
    goto skip_4;
    // 0x802162EC: c.le.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl <= ctx->f0.fl;
    skip_4:
    // 0x802162F0: b           L_80216310
    // 0x802162F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80216310;
    // 0x802162F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802162F8: c.le.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl <= ctx->f0.fl;
L_802162FC:
    // 0x802162FC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80216300: bc1f        L_80216310
    if (!c1cs) {
        // 0x80216304: nop
    
            goto L_80216310;
    }
    // 0x80216304: nop

    // 0x80216308: b           L_80216310
    // 0x8021630C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80216310;
    // 0x8021630C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80216310:
    // 0x80216310: lhu         $t2, 0x0($t0)
    ctx->r10 = MEM_HU(ctx->r8, 0X0);
    // 0x80216314: lw          $t9, 0x28($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X28);
    // 0x80216318: lw          $a2, 0x5C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X5C);
    // 0x8021631C: sll         $t1, $t2, 2
    ctx->r9 = S32(ctx->r10 << 2);
    // 0x80216320: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x80216324: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80216328: subu        $t1, $t1, $t2
    ctx->r9 = SUB32(ctx->r9, ctx->r10);
    // 0x8021632C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80216330: addu        $t3, $t9, $t1
    ctx->r11 = ADD32(ctx->r25, ctx->r9);
    // 0x80216334: lbu         $a0, 0x48($t3)
    ctx->r4 = MEM_BU(ctx->r11, 0X48);
    // 0x80216338: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    // 0x8021633C: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    // 0x80216340: jal         0x80218C74
    // 0x80216344: sb          $v0, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r2;
    static_3_80218C74(rdram, ctx);
        goto after_0;
    // 0x80216344: sb          $v0, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r2;
    after_0:
    // 0x80216348: lbu         $v0, 0x27($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X27);
    // 0x8021634C: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80216350: lwc1        $f14, 0x1C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80216354: beq         $v0, $zero, L_80216368
    if (ctx->r2 == 0) {
        // 0x80216358: lw          $t5, 0x58($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X58);
            goto L_80216368;
    }
    // 0x80216358: lw          $t5, 0x58($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X58);
    // 0x8021635C: lw          $t4, 0x68($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X68);
    // 0x80216360: b           L_80216400
    // 0x80216364: sh          $zero, 0x0($t4)
    MEM_H(0X0, ctx->r12) = 0;
        goto L_80216400;
    // 0x80216364: sh          $zero, 0x0($t4)
    MEM_H(0X0, ctx->r12) = 0;
L_80216368:
    // 0x80216368: lwc1        $f10, 0x0($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X0);
    // 0x8021636C: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80216370: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80216374: add.s       $f6, $f10, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f12.fl;
    // 0x80216378: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8021637C: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x80216380: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80216384: mul.s       $f4, $f6, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80216388: ori         $t5, $zero, 0x8000
    ctx->r13 = 0 | 0X8000;
    // 0x8021638C: lw          $t6, 0x68($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X68);
    // 0x80216390: div.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    // 0x80216394: lwc1        $f4, 0x0($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X0);
    // 0x80216398: add.s       $f8, $f4, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f14.fl;
    // 0x8021639C: trunc.w.s   $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x802163A0: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x802163A4: mfc1        $v1, $f6
    ctx->r3 = (int32_t)ctx->f6.u32l;
    // 0x802163A8: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x802163AC: andi        $v0, $v1, 0xFFFF
    ctx->r2 = ctx->r3 & 0XFFFF;
    // 0x802163B0: div.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f6.fl);
    // 0x802163B4: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x802163B8: mfc1        $a0, $f8
    ctx->r4 = (int32_t)ctx->f8.u32l;
    // 0x802163BC: nop

    // 0x802163C0: andi        $t9, $a0, 0xFFFF
    ctx->r25 = ctx->r4 & 0XFFFF;
    // 0x802163C4: bne         $a1, $v0, L_802163D0
    if (ctx->r5 != ctx->r2) {
        // 0x802163C8: or          $a0, $t9, $zero
        ctx->r4 = ctx->r25 | 0;
            goto L_802163D0;
    }
    // 0x802163C8: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x802163CC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_802163D0:
    // 0x802163D0: bne         $a1, $a0, L_802163DC
    if (ctx->r5 != ctx->r4) {
        // 0x802163D4: or          $v1, $a0, $zero
        ctx->r3 = ctx->r4 | 0;
            goto L_802163DC;
    }
    // 0x802163D4: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x802163D8: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
L_802163DC:
    // 0x802163DC: sll         $t1, $v1, 2
    ctx->r9 = S32(ctx->r3 << 2);
    // 0x802163E0: bgez        $v0, L_802163F4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802163E4: andi        $t3, $v0, 0x3
        ctx->r11 = ctx->r2 & 0X3;
            goto L_802163F4;
    }
    // 0x802163E4: andi        $t3, $v0, 0x3
    ctx->r11 = ctx->r2 & 0X3;
    // 0x802163E8: beq         $t3, $zero, L_802163F4
    if (ctx->r11 == 0) {
        // 0x802163EC: nop
    
            goto L_802163F4;
    }
    // 0x802163EC: nop

    // 0x802163F0: addiu       $t3, $t3, -0x4
    ctx->r11 = ADD32(ctx->r11, -0X4);
L_802163F4:
    // 0x802163F4: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x802163F8: srav        $t8, $t5, $t4
    ctx->r24 = S32(SIGNED(ctx->r13) >> (ctx->r12 & 31));
    // 0x802163FC: sh          $t8, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r24;
L_80216400:
    // 0x80216400: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80216404:
    // 0x80216404: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80216408: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x8021640C: jr          $ra
    // 0x80216410: nop

    return;
    // 0x80216410: nop

;}
RECOMP_FUNC void D_802D7F44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D7FC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802D7FC8: beq         $a0, $zero, L_802D7FEC
    if (ctx->r4 == 0) {
        // 0x802D7FCC: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802D7FEC;
    }
    // 0x802D7FCC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802D7FD0: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802D7FD4: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802D7FD8: andi        $t7, $a1, 0x1
    ctx->r15 = ctx->r5 & 0X1;
    // 0x802D7FDC: beq         $t7, $zero, L_802D7FEC
    if (ctx->r15 == 0) {
        // 0x802D7FE0: sw          $t6, 0x6C($a0)
        MEM_W(0X6C, ctx->r4) = ctx->r14;
            goto L_802D7FEC;
    }
    // 0x802D7FE0: sw          $t6, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r14;
    // 0x802D7FE4: jal         0x802C681C
    // 0x802D7FE8: nop

    static_3_802C681C(rdram, ctx);
        goto after_0;
    // 0x802D7FE8: nop

    after_0:
L_802D7FEC:
    // 0x802D7FEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802D7FF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802D7FF4: jr          $ra
    // 0x802D7FF8: nop

    return;
    // 0x802D7FF8: nop

;}
RECOMP_FUNC void D_8028CB68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028CBE8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8028CBEC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8028CBF0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8028CBF4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8028CBF8: beq         $a0, $zero, L_8028CC68
    if (ctx->r4 == 0) {
        // 0x8028CBFC: sw          $a1, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r5;
            goto L_8028CC68;
    }
    // 0x8028CBFC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8028CC00: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8028CC04: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x8028CC08: sw          $t6, 0x1A0($a0)
    MEM_W(0X1A0, ctx->r4) = ctx->r14;
    // 0x8028CC0C: jal         0x8021BAE0
    // 0x8028CC10: lw          $a0, 0x4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4);
    static_3_8021BAE0(rdram, ctx);
        goto after_0;
    // 0x8028CC10: lw          $a0, 0x4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4);
    after_0:
    // 0x8028CC14: addiu       $a0, $s0, 0x68C
    ctx->r4 = ADD32(ctx->r16, 0X68C);
    // 0x8028CC18: jal         0x802C49D0
    // 0x8028CC1C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802C49D0(rdram, ctx);
        goto after_1;
    // 0x8028CC1C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x8028CC20: addiu       $a0, $s0, 0x4F8
    ctx->r4 = ADD32(ctx->r16, 0X4F8);
    // 0x8028CC24: jal         0x802C49D0
    // 0x8028CC28: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802C49D0(rdram, ctx);
        goto after_2;
    // 0x8028CC28: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x8028CC2C: addiu       $a0, $s0, 0x364
    ctx->r4 = ADD32(ctx->r16, 0X364);
    // 0x8028CC30: jal         0x802C49D0
    // 0x8028CC34: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802C49D0(rdram, ctx);
        goto after_3;
    // 0x8028CC34: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x8028CC38: addiu       $a0, $s0, 0x1A4
    ctx->r4 = ADD32(ctx->r16, 0X1A4);
    // 0x8028CC3C: jal         0x802D48A8
    // 0x8028CC40: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802D48A8(rdram, ctx);
        goto after_4;
    // 0x8028CC40: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_4:
    // 0x8028CC44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8028CC48: jal         0x8031739C
    // 0x8028CC4C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_8031739C(rdram, ctx);
        goto after_5;
    // 0x8028CC4C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x8028CC50: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8028CC54: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x8028CC58: beql        $t8, $zero, L_8028CC6C
    if (ctx->r24 == 0) {
        // 0x8028CC5C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8028CC6C;
    }
    goto skip_0;
    // 0x8028CC5C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x8028CC60: jal         0x802C681C
    // 0x8028CC64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802C681C(rdram, ctx);
        goto after_6;
    // 0x8028CC64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
L_8028CC68:
    // 0x8028CC68: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8028CC6C:
    // 0x8028CC6C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8028CC70: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8028CC74: jr          $ra
    // 0x8028CC78: nop

    return;
    // 0x8028CC78: nop

;}
RECOMP_FUNC void D_8028CF18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028CF98: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8028CF9C: jr          $ra
    // 0x8028CFA0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x8028CFA0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void D_80205DBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80205DBC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80205DC0: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x80205DC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80205DC8: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80205DCC: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x80205DD0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80205DD4: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x80205DD8: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80205DDC: jal         0x80231C58
    // 0x80205DE0: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    static_3_80231C58(rdram, ctx);
        goto after_0;
    // 0x80205DE0: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_0:
    // 0x80205DE4: bne         $v0, $zero, L_80205E5C
    if (ctx->r2 != 0) {
        // 0x80205DE8: lw          $a3, 0x1C($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X1C);
            goto L_80205E5C;
    }
    // 0x80205DE8: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x80205DEC: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x80205DF0: beq         $a3, $at, L_80205E2C
    if (ctx->r7 == ctx->r1) {
        // 0x80205DF4: lui         $t6, 0x0
        ctx->r14 = S32(0X0 << 16);
            goto L_80205E2C;
    }
    // 0x80205DF4: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80205DF8: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x80205DFC: sll         $t8, $a3, 2
    ctx->r24 = S32(ctx->r7 << 2);
    // 0x80205E00: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80205E04: lw          $t7, 0x14($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X14);
    // 0x80205E08: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80205E0C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80205E10: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x80205E14: bnel        $t0, $zero, L_80205E30
    if (ctx->r8 != 0) {
        // 0x80205E18: lw          $t2, 0x18($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X18);
            goto L_80205E30;
    }
    goto skip_0;
    // 0x80205E18: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    skip_0:
    // 0x80205E1C: jal         0x80231A24
    // 0x80205E20: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    static_3_80231A24(rdram, ctx);
        goto after_1;
    // 0x80205E20: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_1:
    // 0x80205E24: b           L_80205E60
    // 0x80205E28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80205E60;
    // 0x80205E28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80205E2C:
    // 0x80205E2C: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
L_80205E30:
    // 0x80205E30: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x80205E34: lw          $t1, 0x0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X0);
    // 0x80205E38: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80205E3C: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x80205E40: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x80205E44: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x80205E48: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80205E4C: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x80205E50: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x80205E54: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x80205E58: sh          $a3, 0x2($t4)
    MEM_H(0X2, ctx->r12) = ctx->r7;
L_80205E5C:
    // 0x80205E5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80205E60:
    // 0x80205E60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80205E64: jr          $ra
    // 0x80205E68: nop

    return;
    // 0x80205E68: nop

;}
RECOMP_FUNC void D_802CF0B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802CF130: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802CF134: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802CF138: jr          $ra
    // 0x802CF13C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x802CF13C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void D_802E7D00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E7D80: jr          $ra
    // 0x802E7D84: lbu         $v0, 0x1D($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X1D);
    return;
    // 0x802E7D84: lbu         $v0, 0x1D($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X1D);
;}
RECOMP_FUNC void D_80279D14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80279D8C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80279D90: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80279D94: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x80279D98: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80279D9C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80279DA0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80279DA4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80279DA8: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80279DAC: beq         $a3, $at, L_80279DC8
    if (ctx->r7 == ctx->r1) {
        // 0x80279DB0: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_80279DC8;
    }
    // 0x80279DB0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80279DB4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80279DB8: beq         $a3, $at, L_80279E14
    if (ctx->r7 == ctx->r1) {
        // 0x80279DBC: addiu       $a0, $s0, 0x6F04
        ctx->r4 = ADD32(ctx->r16, 0X6F04);
            goto L_80279E14;
    }
    // 0x80279DBC: addiu       $a0, $s0, 0x6F04
    ctx->r4 = ADD32(ctx->r16, 0X6F04);
    // 0x80279DC0: b           L_80279E58
    // 0x80279DC4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80279E58;
    // 0x80279DC4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80279DC8:
    // 0x80279DC8: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80279DCC: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x80279DD0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80279DD4: addiu       $a0, $s0, 0x6FC0
    ctx->r4 = ADD32(ctx->r16, 0X6FC0);
    // 0x80279DD8: addiu       $a1, $s0, 0x704C
    ctx->r5 = ADD32(ctx->r16, 0X704C);
    // 0x80279DDC: addiu       $a2, $zero, 0x23
    ctx->r6 = ADD32(0, 0X23);
    // 0x80279DE0: jal         0x802A2A40
    // 0x80279DE4: addiu       $a3, $s0, 0x704D
    ctx->r7 = ADD32(ctx->r16, 0X704D);
    static_3_802A2A40(rdram, ctx);
        goto after_0;
    // 0x80279DE4: addiu       $a3, $s0, 0x704D
    ctx->r7 = ADD32(ctx->r16, 0X704D);
    after_0:
    // 0x80279DE8: beq         $v0, $zero, L_80279E54
    if (ctx->r2 == 0) {
        // 0x80279DEC: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_80279E54;
    }
    // 0x80279DEC: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80279DF0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80279DF4: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80279DF8: jal         0x8028C274
    // 0x80279DFC: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    static_3_8028C274(rdram, ctx);
        goto after_1;
    // 0x80279DFC: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    after_1:
    // 0x80279E00: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80279E04: jal         0x8028C3F8
    // 0x80279E08: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_8028C3F8(rdram, ctx);
        goto after_2;
    // 0x80279E08: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x80279E0C: b           L_80279E58
    // 0x80279E10: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80279E58;
    // 0x80279E10: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80279E14:
    // 0x80279E14: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80279E18: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x80279E1C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80279E20: addiu       $a1, $s0, 0x6F90
    ctx->r5 = ADD32(ctx->r16, 0X6F90);
    // 0x80279E24: addiu       $a2, $zero, 0x23
    ctx->r6 = ADD32(0, 0X23);
    // 0x80279E28: jal         0x802A2A40
    // 0x80279E2C: addiu       $a3, $s0, 0x6F91
    ctx->r7 = ADD32(ctx->r16, 0X6F91);
    static_3_802A2A40(rdram, ctx);
        goto after_3;
    // 0x80279E2C: addiu       $a3, $s0, 0x6F91
    ctx->r7 = ADD32(ctx->r16, 0X6F91);
    after_3:
    // 0x80279E30: beq         $v0, $zero, L_80279E54
    if (ctx->r2 == 0) {
        // 0x80279E34: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_80279E54;
    }
    // 0x80279E34: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80279E38: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80279E3C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80279E40: jal         0x8028C274
    // 0x80279E44: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    static_3_8028C274(rdram, ctx);
        goto after_4;
    // 0x80279E44: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    after_4:
    // 0x80279E48: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80279E4C: jal         0x8028C3F8
    // 0x80279E50: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_8028C3F8(rdram, ctx);
        goto after_5;
    // 0x80279E50: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
L_80279E54:
    // 0x80279E54: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80279E58:
    // 0x80279E58: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x80279E5C: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80279E60: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80279E64: jr          $ra
    // 0x80279E68: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80279E68: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void D_802E3B10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E3B90: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802E3B94: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802E3B98: jr          $ra
    // 0x802E3B9C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x802E3B9C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void D_802306DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802306DC: addiu       $sp, $sp, -0xF0
    ctx->r29 = ADD32(ctx->r29, -0XF0);
    // 0x802306E0: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x802306E4: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x802306E8: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x802306EC: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x802306F0: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x802306F4: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x802306F8: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x802306FC: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80230700: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80230704: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80230708: sw          $a1, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r5;
    // 0x8023070C: sw          $a2, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r6;
    // 0x80230710: sw          $a3, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->r7;
    // 0x80230714: lbu         $a1, 0x0($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X0);
    // 0x80230718: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x8023071C: addiu       $s1, $sp, 0xF8
    ctx->r17 = ADD32(ctx->r29, 0XF8);
    // 0x80230720: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80230724: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80230728: sw          $zero, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = 0;
    // 0x8023072C: beq         $a1, $zero, L_80230A68
    if (ctx->r5 == 0) {
        // 0x80230730: or          $a3, $a1, $zero
        ctx->r7 = ctx->r5 | 0;
            goto L_80230A68;
    }
    // 0x80230730: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x80230734: addiu       $fp, $sp, 0xE4
    ctx->r30 = ADD32(ctx->r29, 0XE4);
    // 0x80230738: addiu       $s7, $zero, -0x4
    ctx->r23 = ADD32(0, -0X4);
    // 0x8023073C: lw          $s6, 0x78($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X78);
    // 0x80230740: lw          $s5, 0x74($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X74);
    // 0x80230744: lw          $s4, 0x7C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X7C);
L_80230748:
    // 0x80230748: bne         $s3, $zero, L_80230788
    if (ctx->r19 != 0) {
        // 0x8023074C: addiu       $at, $zero, 0x2D
        ctx->r1 = ADD32(0, 0X2D);
            goto L_80230788;
    }
    // 0x8023074C: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x80230750: addiu       $at, $zero, 0x25
    ctx->r1 = ADD32(0, 0X25);
    // 0x80230754: bne         $a3, $at, L_80230770
    if (ctx->r7 != ctx->r1) {
        // 0x80230758: lw          $t7, 0xE4($sp)
        ctx->r15 = MEM_W(ctx->r29, 0XE4);
            goto L_80230770;
    }
    // 0x80230758: lw          $t7, 0xE4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XE4);
    // 0x8023075C: addiu       $s4, $zero, -0x1
    ctx->r20 = ADD32(0, -0X1);
    // 0x80230760: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x80230764: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x80230768: b           L_80230A44
    // 0x8023076C: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
        goto L_80230A44;
    // 0x8023076C: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
L_80230770:
    // 0x80230770: addu        $t8, $s2, $t7
    ctx->r24 = ADD32(ctx->r18, ctx->r15);
    // 0x80230774: sb          $a1, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r5;
    // 0x80230778: lw          $t9, 0xE4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XE4);
    // 0x8023077C: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80230780: b           L_80230A44
    // 0x80230784: sw          $t0, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r8;
        goto L_80230A44;
    // 0x80230784: sw          $t0, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r8;
L_80230788:
    // 0x80230788: bne         $a3, $at, L_802307A4
    if (ctx->r7 != ctx->r1) {
        // 0x8023078C: lw          $t1, 0xF4($sp)
        ctx->r9 = MEM_W(ctx->r29, 0XF4);
            goto L_802307A4;
    }
    // 0x8023078C: lw          $t1, 0xF4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XF4);
    // 0x80230790: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80230794: addu        $t2, $t1, $s0
    ctx->r10 = ADD32(ctx->r9, ctx->r16);
    // 0x80230798: lbu         $a1, 0x0($t2)
    ctx->r5 = MEM_BU(ctx->r10, 0X0);
    // 0x8023079C: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x802307A0: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
L_802307A4:
    // 0x802307A4: beq         $a3, $zero, L_80230A68
    if (ctx->r7 == 0) {
        // 0x802307A8: addiu       $at, $zero, 0x30
        ctx->r1 = ADD32(0, 0X30);
            goto L_80230A68;
    }
    // 0x802307A8: addiu       $at, $zero, 0x30
    ctx->r1 = ADD32(0, 0X30);
    // 0x802307AC: bne         $a3, $at, L_802307C8
    if (ctx->r7 != ctx->r1) {
        // 0x802307B0: lw          $t3, 0xF4($sp)
        ctx->r11 = MEM_W(ctx->r29, 0XF4);
            goto L_802307C8;
    }
    // 0x802307B0: lw          $t3, 0xF4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XF4);
    // 0x802307B4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x802307B8: addu        $t4, $t3, $s0
    ctx->r12 = ADD32(ctx->r11, ctx->r16);
    // 0x802307BC: lbu         $a1, 0x0($t4)
    ctx->r5 = MEM_BU(ctx->r12, 0X0);
    // 0x802307C0: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
    // 0x802307C4: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
L_802307C8:
    // 0x802307C8: beq         $a3, $zero, L_80230A68
    if (ctx->r7 == 0) {
        // 0x802307CC: slti        $at, $a3, 0x31
        ctx->r1 = SIGNED(ctx->r7) < 0X31 ? 1 : 0;
            goto L_80230A68;
    }
    // 0x802307CC: slti        $at, $a3, 0x31
    ctx->r1 = SIGNED(ctx->r7) < 0X31 ? 1 : 0;
    // 0x802307D0: bne         $at, $zero, L_8023084C
    if (ctx->r1 != 0) {
        // 0x802307D4: slti        $at, $a3, 0x3A
        ctx->r1 = SIGNED(ctx->r7) < 0X3A ? 1 : 0;
            goto L_8023084C;
    }
    // 0x802307D4: slti        $at, $a3, 0x3A
    ctx->r1 = SIGNED(ctx->r7) < 0X3A ? 1 : 0;
    // 0x802307D8: beq         $at, $zero, L_8023084C
    if (ctx->r1 == 0) {
        // 0x802307DC: addiu       $a0, $sp, 0x88
        ctx->r4 = ADD32(ctx->r29, 0X88);
            goto L_8023084C;
    }
    // 0x802307DC: addiu       $a0, $sp, 0x88
    ctx->r4 = ADD32(ctx->r29, 0X88);
    // 0x802307E0: slti        $at, $a3, 0x30
    ctx->r1 = SIGNED(ctx->r7) < 0X30 ? 1 : 0;
    // 0x802307E4: bne         $at, $zero, L_80230834
    if (ctx->r1 != 0) {
        // 0x802307E8: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_80230834;
    }
    // 0x802307E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802307EC: slti        $at, $a3, 0x3A
    ctx->r1 = SIGNED(ctx->r7) < 0X3A ? 1 : 0;
    // 0x802307F0: beq         $at, $zero, L_80230834
    if (ctx->r1 == 0) {
        // 0x802307F4: lw          $t5, 0xF4($sp)
        ctx->r13 = MEM_W(ctx->r29, 0XF4);
            goto L_80230834;
    }
    // 0x802307F4: lw          $t5, 0xF4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XF4);
    // 0x802307F8: addiu       $t6, $sp, 0x88
    ctx->r14 = ADD32(ctx->r29, 0X88);
    // 0x802307FC: addu        $v1, $zero, $t6
    ctx->r3 = ADD32(0, ctx->r14);
    // 0x80230800: addu        $v0, $t5, $s0
    ctx->r2 = ADD32(ctx->r13, ctx->r16);
    // 0x80230804: sb          $a1, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r5;
L_80230808:
    // 0x80230808: lbu         $a1, 0x1($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X1);
    // 0x8023080C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80230810: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230814: slti        $at, $a1, 0x30
    ctx->r1 = SIGNED(ctx->r5) < 0X30 ? 1 : 0;
    // 0x80230818: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8023081C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80230820: bne         $at, $zero, L_80230834
    if (ctx->r1 != 0) {
        // 0x80230824: or          $a3, $a1, $zero
        ctx->r7 = ctx->r5 | 0;
            goto L_80230834;
    }
    // 0x80230824: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x80230828: slti        $at, $a1, 0x3A
    ctx->r1 = SIGNED(ctx->r5) < 0X3A ? 1 : 0;
    // 0x8023082C: bnel        $at, $zero, L_80230808
    if (ctx->r1 != 0) {
        // 0x80230830: sb          $a1, 0x0($v1)
        MEM_B(0X0, ctx->r3) = ctx->r5;
            goto L_80230808;
    }
    goto skip_0;
    // 0x80230830: sb          $a1, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r5;
    skip_0:
L_80230834:
    // 0x80230834: addu        $t7, $a0, $a2
    ctx->r15 = ADD32(ctx->r4, ctx->r6);
    // 0x80230838: sb          $zero, 0x0($t7)
    MEM_B(0X0, ctx->r15) = 0;
    // 0x8023083C: jal         0x80230AF4
    // 0x80230840: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    static_3_80230AF4(rdram, ctx);
        goto after_0;
    // 0x80230840: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    after_0:
    // 0x80230844: lw          $a3, 0x5C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X5C);
    // 0x80230848: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
L_8023084C:
    // 0x8023084C: beq         $a3, $zero, L_80230A68
    if (ctx->r7 == 0) {
        // 0x80230850: addiu       $at, $zero, 0x2E
        ctx->r1 = ADD32(0, 0X2E);
            goto L_80230A68;
    }
    // 0x80230850: addiu       $at, $zero, 0x2E
    ctx->r1 = ADD32(0, 0X2E);
    // 0x80230854: bne         $a3, $at, L_802308C0
    if (ctx->r7 != ctx->r1) {
        // 0x80230858: lw          $t8, 0xF4($sp)
        ctx->r24 = MEM_W(ctx->r29, 0XF4);
            goto L_802308C0;
    }
    // 0x80230858: lw          $t8, 0xF4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XF4);
    // 0x8023085C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80230860: addu        $v0, $t8, $s0
    ctx->r2 = ADD32(ctx->r24, ctx->r16);
    // 0x80230864: lbu         $a1, 0x0($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X0);
    // 0x80230868: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8023086C: slti        $at, $a1, 0x30
    ctx->r1 = SIGNED(ctx->r5) < 0X30 ? 1 : 0;
    // 0x80230870: bne         $at, $zero, L_802308B8
    if (ctx->r1 != 0) {
        // 0x80230874: or          $a3, $a1, $zero
        ctx->r7 = ctx->r5 | 0;
            goto L_802308B8;
    }
    // 0x80230874: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x80230878: slti        $at, $a1, 0x3A
    ctx->r1 = SIGNED(ctx->r5) < 0X3A ? 1 : 0;
    // 0x8023087C: beq         $at, $zero, L_802308B8
    if (ctx->r1 == 0) {
        // 0x80230880: addiu       $t9, $sp, 0x88
        ctx->r25 = ADD32(ctx->r29, 0X88);
            goto L_802308B8;
    }
    // 0x80230880: addiu       $t9, $sp, 0x88
    ctx->r25 = ADD32(ctx->r29, 0X88);
    // 0x80230884: addu        $v1, $zero, $t9
    ctx->r3 = ADD32(0, ctx->r25);
    // 0x80230888: sb          $a1, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r5;
L_8023088C:
    // 0x8023088C: lbu         $a1, 0x1($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X1);
    // 0x80230890: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80230894: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230898: slti        $at, $a1, 0x30
    ctx->r1 = SIGNED(ctx->r5) < 0X30 ? 1 : 0;
    // 0x8023089C: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x802308A0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802308A4: bne         $at, $zero, L_802308B8
    if (ctx->r1 != 0) {
        // 0x802308A8: or          $a3, $a1, $zero
        ctx->r7 = ctx->r5 | 0;
            goto L_802308B8;
    }
    // 0x802308A8: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x802308AC: slti        $at, $a1, 0x3A
    ctx->r1 = SIGNED(ctx->r5) < 0X3A ? 1 : 0;
    // 0x802308B0: bnel        $at, $zero, L_8023088C
    if (ctx->r1 != 0) {
        // 0x802308B4: sb          $a1, 0x0($v1)
        MEM_B(0X0, ctx->r3) = ctx->r5;
            goto L_8023088C;
    }
    goto skip_1;
    // 0x802308B4: sb          $a1, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r5;
    skip_1:
L_802308B8:
    // 0x802308B8: addu        $t0, $sp, $a2
    ctx->r8 = ADD32(ctx->r29, ctx->r6);
    // 0x802308BC: sb          $zero, 0x88($t0)
    MEM_B(0X88, ctx->r8) = 0;
L_802308C0:
    // 0x802308C0: beq         $a3, $zero, L_80230A68
    if (ctx->r7 == 0) {
        // 0x802308C4: addiu       $at, $zero, 0x78
        ctx->r1 = ADD32(0, 0X78);
            goto L_80230A68;
    }
    // 0x802308C4: addiu       $at, $zero, 0x78
    ctx->r1 = ADD32(0, 0X78);
    // 0x802308C8: bne         $a3, $at, L_80230904
    if (ctx->r7 != ctx->r1) {
        // 0x802308CC: addiu       $t1, $s1, 0x3
        ctx->r9 = ADD32(ctx->r17, 0X3);
            goto L_80230904;
    }
    // 0x802308CC: addiu       $t1, $s1, 0x3
    ctx->r9 = ADD32(ctx->r17, 0X3);
    // 0x802308D0: and         $s1, $t1, $s7
    ctx->r17 = ctx->r9 & ctx->r23;
    // 0x802308D4: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x802308D8: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x802308DC: sw          $s6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r22;
    // 0x802308E0: sw          $s5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r21;
    // 0x802308E4: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    // 0x802308E8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x802308EC: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    // 0x802308F0: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x802308F4: jal         0x80230164
    // 0x802308F8: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    static_3_80230164(rdram, ctx);
        goto after_1;
    // 0x802308F8: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    after_1:
    // 0x802308FC: b           L_80230A48
    // 0x80230900: lw          $t3, 0xF4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XF4);
        goto L_80230A48;
    // 0x80230900: lw          $t3, 0xF4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XF4);
L_80230904:
    // 0x80230904: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x80230908: bne         $a3, $at, L_80230944
    if (ctx->r7 != ctx->r1) {
        // 0x8023090C: addiu       $t2, $s1, 0x3
        ctx->r10 = ADD32(ctx->r17, 0X3);
            goto L_80230944;
    }
    // 0x8023090C: addiu       $t2, $s1, 0x3
    ctx->r10 = ADD32(ctx->r17, 0X3);
    // 0x80230910: and         $s1, $t2, $s7
    ctx->r17 = ctx->r10 & ctx->r23;
    // 0x80230914: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80230918: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8023091C: sw          $s6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r22;
    // 0x80230920: sw          $s5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r21;
    // 0x80230924: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    // 0x80230928: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x8023092C: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    // 0x80230930: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x80230934: jal         0x80230164
    // 0x80230938: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    static_3_80230164(rdram, ctx);
        goto after_2;
    // 0x80230938: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    after_2:
    // 0x8023093C: b           L_80230A48
    // 0x80230940: lw          $t3, 0xF4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XF4);
        goto L_80230A48;
    // 0x80230940: lw          $t3, 0xF4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XF4);
L_80230944:
    // 0x80230944: addiu       $at, $zero, 0x62
    ctx->r1 = ADD32(0, 0X62);
    // 0x80230948: bne         $a3, $at, L_80230984
    if (ctx->r7 != ctx->r1) {
        // 0x8023094C: addiu       $t3, $s1, 0x3
        ctx->r11 = ADD32(ctx->r17, 0X3);
            goto L_80230984;
    }
    // 0x8023094C: addiu       $t3, $s1, 0x3
    ctx->r11 = ADD32(ctx->r17, 0X3);
    // 0x80230950: and         $s1, $t3, $s7
    ctx->r17 = ctx->r11 & ctx->r23;
    // 0x80230954: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80230958: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8023095C: sw          $s6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r22;
    // 0x80230960: sw          $s5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r21;
    // 0x80230964: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    // 0x80230968: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8023096C: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    // 0x80230970: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x80230974: jal         0x80230164
    // 0x80230978: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    static_3_80230164(rdram, ctx);
        goto after_3;
    // 0x80230978: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    after_3:
    // 0x8023097C: b           L_80230A48
    // 0x80230980: lw          $t3, 0xF4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XF4);
        goto L_80230A48;
    // 0x80230980: lw          $t3, 0xF4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XF4);
L_80230984:
    // 0x80230984: addiu       $at, $zero, 0x66
    ctx->r1 = ADD32(0, 0X66);
    // 0x80230988: bne         $a3, $at, L_802309EC
    if (ctx->r7 != ctx->r1) {
        // 0x8023098C: andi        $t4, $s1, 0x1
        ctx->r12 = ctx->r17 & 0X1;
            goto L_802309EC;
    }
    // 0x8023098C: andi        $t4, $s1, 0x1
    ctx->r12 = ctx->r17 & 0X1;
    // 0x80230990: beq         $t4, $zero, L_802309A4
    if (ctx->r12 == 0) {
        // 0x80230994: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_802309A4;
    }
    // 0x80230994: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80230998: addiu       $s1, $s1, 0x7
    ctx->r17 = ADD32(ctx->r17, 0X7);
    // 0x8023099C: b           L_802309D0
    // 0x802309A0: addiu       $v0, $s1, -0x16
    ctx->r2 = ADD32(ctx->r17, -0X16);
        goto L_802309D0;
    // 0x802309A0: addiu       $v0, $s1, -0x16
    ctx->r2 = ADD32(ctx->r17, -0X16);
L_802309A4:
    // 0x802309A4: andi        $t5, $s1, 0x2
    ctx->r13 = ctx->r17 & 0X2;
    // 0x802309A8: beq         $t5, $zero, L_802309BC
    if (ctx->r13 == 0) {
        // 0x802309AC: addiu       $at, $zero, -0x8
        ctx->r1 = ADD32(0, -0X8);
            goto L_802309BC;
    }
    // 0x802309AC: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x802309B0: addiu       $s1, $s1, 0xA
    ctx->r17 = ADD32(ctx->r17, 0XA);
    // 0x802309B4: b           L_802309CC
    // 0x802309B8: addiu       $v1, $s1, -0x28
    ctx->r3 = ADD32(ctx->r17, -0X28);
        goto L_802309CC;
    // 0x802309B8: addiu       $v1, $s1, -0x28
    ctx->r3 = ADD32(ctx->r17, -0X28);
L_802309BC:
    // 0x802309BC: addiu       $s1, $s1, 0x7
    ctx->r17 = ADD32(ctx->r17, 0X7);
    // 0x802309C0: and         $t6, $s1, $at
    ctx->r14 = ctx->r17 & ctx->r1;
    // 0x802309C4: addiu       $s1, $t6, 0x8
    ctx->r17 = ADD32(ctx->r14, 0X8);
    // 0x802309C8: or          $v1, $s1, $zero
    ctx->r3 = ctx->r17 | 0;
L_802309CC:
    // 0x802309CC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_802309D0:
    // 0x802309D0: ldc1        $f4, -0x8($v0)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r2, -0X8);
    // 0x802309D4: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    // 0x802309D8: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x802309DC: jal         0x802304A0
    // 0x802309E0: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    static_3_802304A0(rdram, ctx);
        goto after_4;
    // 0x802309E0: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    after_4:
    // 0x802309E4: b           L_80230A48
    // 0x802309E8: lw          $t3, 0xF4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XF4);
        goto L_80230A48;
    // 0x802309E8: lw          $t3, 0xF4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XF4);
L_802309EC:
    // 0x802309EC: addiu       $at, $zero, 0x73
    ctx->r1 = ADD32(0, 0X73);
    // 0x802309F0: bne         $a3, $at, L_80230A44
    if (ctx->r7 != ctx->r1) {
        // 0x802309F4: addiu       $t7, $s1, 0x3
        ctx->r15 = ADD32(ctx->r17, 0X3);
            goto L_80230A44;
    }
    // 0x802309F4: addiu       $t7, $s1, 0x3
    ctx->r15 = ADD32(ctx->r17, 0X3);
    // 0x802309F8: and         $s1, $t7, $s7
    ctx->r17 = ctx->r15 & ctx->r23;
    // 0x802309FC: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80230A00: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80230A04: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80230A08: lbu         $t8, 0x0($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X0);
    // 0x80230A0C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x80230A10: beql        $t8, $zero, L_80230A48
    if (ctx->r24 == 0) {
        // 0x80230A14: lw          $t3, 0xF4($sp)
        ctx->r11 = MEM_W(ctx->r29, 0XF4);
            goto L_80230A48;
    }
    goto skip_2;
    // 0x80230A14: lw          $t3, 0xF4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XF4);
    skip_2:
    // 0x80230A18: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x80230A1C: lw          $t9, 0xE4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XE4);
L_80230A20:
    // 0x80230A20: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230A24: addu        $t0, $s2, $t9
    ctx->r8 = ADD32(ctx->r18, ctx->r25);
    // 0x80230A28: sb          $v1, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r3;
    // 0x80230A2C: lw          $t1, 0xE4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XE4);
    // 0x80230A30: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x80230A34: sw          $t2, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r10;
    // 0x80230A38: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x80230A3C: bnel        $v1, $zero, L_80230A20
    if (ctx->r3 != 0) {
        // 0x80230A40: lw          $t9, 0xE4($sp)
        ctx->r25 = MEM_W(ctx->r29, 0XE4);
            goto L_80230A20;
    }
    goto skip_3;
    // 0x80230A40: lw          $t9, 0xE4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XE4);
    skip_3:
L_80230A44:
    // 0x80230A44: lw          $t3, 0xF4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XF4);
L_80230A48:
    // 0x80230A48: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80230A4C: addu        $t4, $t3, $s0
    ctx->r12 = ADD32(ctx->r11, ctx->r16);
    // 0x80230A50: lbu         $a1, 0x0($t4)
    ctx->r5 = MEM_BU(ctx->r12, 0X0);
    // 0x80230A54: bne         $a1, $zero, L_80230748
    if (ctx->r5 != 0) {
        // 0x80230A58: or          $a3, $a1, $zero
        ctx->r7 = ctx->r5 | 0;
            goto L_80230748;
    }
    // 0x80230A58: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x80230A5C: sw          $s6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r22;
    // 0x80230A60: sw          $s5, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r21;
    // 0x80230A64: sw          $s4, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r20;
L_80230A68:
    // 0x80230A68: lw          $t5, 0xE4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XE4);
    // 0x80230A6C: addu        $t6, $s2, $t5
    ctx->r14 = ADD32(ctx->r18, ctx->r13);
    // 0x80230A70: sb          $zero, 0x0($t6)
    MEM_B(0X0, ctx->r14) = 0;
    // 0x80230A74: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80230A78: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x80230A7C: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x80230A80: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x80230A84: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x80230A88: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x80230A8C: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x80230A90: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80230A94: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80230A98: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80230A9C: jr          $ra
    // 0x80230AA0: addiu       $sp, $sp, 0xF0
    ctx->r29 = ADD32(ctx->r29, 0XF0);
    return;
    // 0x80230AA0: addiu       $sp, $sp, 0xF0
    ctx->r29 = ADD32(ctx->r29, 0XF0);
;}
RECOMP_FUNC void D_80214E2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80214E2C: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x80214E30: sw          $s5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r21;
    // 0x80214E34: lui         $s5, 0x0
    ctx->r21 = S32(0X0 << 16);
    // 0x80214E38: addiu       $s5, $s5, 0x0
    ctx->r21 = ADD32(ctx->r21, 0X0);
    // 0x80214E3C: lhu         $v1, 0x26($s5)
    ctx->r3 = MEM_HU(ctx->r21, 0X26);
    // 0x80214E40: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x80214E44: lui         $s3, 0x0
    ctx->r19 = S32(0X0 << 16);
    // 0x80214E48: sdc1        $f26, 0x40($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X40, ctx->r29);
    // 0x80214E4C: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x80214E50: mtc1        $a3, $f20
    ctx->f20.u32l = ctx->r7;
    // 0x80214E54: mtc1        $a2, $f26
    ctx->f26.u32l = ctx->r6;
    // 0x80214E58: addiu       $s3, $s3, 0x0
    ctx->r19 = ADD32(ctx->r19, 0X0);
    // 0x80214E5C: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x80214E60: sdc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X38, ctx->r29);
    // 0x80214E64: sdc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X30, ctx->r29);
    // 0x80214E68: mov.s       $f22, $f12
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 12);
    ctx->f22.fl = ctx->f12.fl;
    // 0x80214E6C: mov.s       $f24, $f14
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 14);
    ctx->f24.fl = ctx->f14.fl;
    // 0x80214E70: sw          $ra, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r31;
    // 0x80214E74: sw          $fp, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r30;
    // 0x80214E78: sw          $s7, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r23;
    // 0x80214E7C: sw          $s6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r22;
    // 0x80214E80: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x80214E84: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x80214E88: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x80214E8C: sdc1        $f28, 0x48($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X48, ctx->r29);
    // 0x80214E90: sw          $zero, 0x0($s3)
    MEM_W(0X0, ctx->r19) = 0;
    // 0x80214E94: blez        $v1, L_802150DC
    if (SIGNED(ctx->r3) <= 0) {
        // 0x80214E98: or          $s4, $zero, $zero
        ctx->r20 = 0 | 0;
            goto L_802150DC;
    }
    // 0x80214E98: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x80214E9C: lui         $s7, 0x0
    ctx->r23 = S32(0X0 << 16);
    // 0x80214EA0: lui         $s6, 0x0
    ctx->r22 = S32(0X0 << 16);
    // 0x80214EA4: mtc1        $zero, $f28
    ctx->f28.u32l = 0;
    // 0x80214EA8: addiu       $s6, $s6, 0x0
    ctx->r22 = ADD32(ctx->r22, 0X0);
    // 0x80214EAC: addiu       $s7, $s7, 0x0
    ctx->r23 = ADD32(ctx->r23, 0X0);
    // 0x80214EB0: addiu       $fp, $zero, 0x24
    ctx->r30 = ADD32(0, 0X24);
L_80214EB4:
    // 0x80214EB4: multu       $s4, $fp
    result = U64(U32(ctx->r20)) * U64(U32(ctx->r30)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80214EB8: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80214EBC: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x80214EC0: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x80214EC4: mflo        $t6
    ctx->r14 = lo;
    // 0x80214EC8: addu        $s0, $t6, $t7
    ctx->r16 = ADD32(ctx->r14, ctx->r15);
    // 0x80214ECC: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x80214ED0: beql        $v0, $at, L_802150CC
    if (ctx->r2 == ctx->r1) {
        // 0x80214ED4: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_802150CC;
    }
    goto skip_0;
    // 0x80214ED4: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    skip_0:
    // 0x80214ED8: lbu         $t8, 0x8($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X8);
    // 0x80214EDC: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x80214EE0: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x80214EE4: beql        $t9, $zero, L_802150CC
    if (ctx->r25 == 0) {
        // 0x80214EE8: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_802150CC;
    }
    goto skip_1;
    // 0x80214EE8: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    skip_1:
    // 0x80214EEC: lw          $t0, 0x0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X0);
    // 0x80214EF0: sll         $t2, $v0, 2
    ctx->r10 = S32(ctx->r2 << 2);
    // 0x80214EF4: lw          $t1, 0x1C($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X1C);
    // 0x80214EF8: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x80214EFC: lw          $s2, 0x0($t3)
    ctx->r18 = MEM_W(ctx->r11, 0X0);
    // 0x80214F00: beql        $s2, $zero, L_802150CC
    if (ctx->r18 == 0) {
        // 0x80214F04: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_802150CC;
    }
    goto skip_2;
    // 0x80214F04: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    skip_2:
    // 0x80214F08: lwc1        $f0, 0xC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC);
    // 0x80214F0C: lwc1        $f4, 0x1C($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X1C);
    // 0x80214F10: lw          $t4, 0x4($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X4);
    // 0x80214F14: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80214F18: div.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80214F1C: lhu         $t5, 0x0($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X0);
    // 0x80214F20: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x80214F24: mfc1        $a2, $f26
    ctx->r6 = (int32_t)ctx->f26.u32l;
    // 0x80214F28: sll         $t6, $t5, 6
    ctx->r14 = S32(ctx->r13 << 6);
    // 0x80214F2C: addu        $s1, $t6, $t7
    ctx->r17 = ADD32(ctx->r14, ctx->r15);
    // 0x80214F30: lwc1        $f8, 0x30($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X30);
    // 0x80214F34: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    // 0x80214F38: mov.s       $f14, $f24
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 24);
    ctx->f14.fl = ctx->f24.fl;
    // 0x80214F3C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80214F40: lwc1        $f10, 0x34($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X34);
    // 0x80214F44: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x80214F48: lwc1        $f16, 0x38($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X38);
    // 0x80214F4C: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x80214F50: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x80214F54: mul.s       $f20, $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f6.fl);
    // 0x80214F58: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80214F5C: jal         0x802164C8
    // 0x80214F60: nop

    static_3_802164C8(rdram, ctx);
        goto after_0;
    // 0x80214F60: nop

    after_0:
    // 0x80214F64: beql        $v0, $zero, L_802150C8
    if (ctx->r2 == 0) {
        // 0x80214F68: lhu         $v1, 0x26($s5)
        ctx->r3 = MEM_HU(ctx->r21, 0X26);
            goto L_802150C8;
    }
    goto skip_3;
    // 0x80214F68: lhu         $v1, 0x26($s5)
    ctx->r3 = MEM_HU(ctx->r21, 0X26);
    skip_3:
    // 0x80214F6C: sw          $s4, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r20;
    // 0x80214F70: lbu         $t8, 0x11($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0X11);
    // 0x80214F74: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x80214F78: andi        $t9, $t8, 0x6
    ctx->r25 = ctx->r24 & 0X6;
    // 0x80214F7C: beql        $t9, $zero, L_80214FBC
    if (ctx->r25 == 0) {
        // 0x80214F80: lw          $t4, 0x0($s3)
        ctx->r12 = MEM_W(ctx->r19, 0X0);
            goto L_80214FBC;
    }
    goto skip_4;
    // 0x80214F80: lw          $t4, 0x0($s3)
    ctx->r12 = MEM_W(ctx->r19, 0X0);
    skip_4:
    // 0x80214F84: mfc1        $a2, $f26
    ctx->r6 = (int32_t)ctx->f26.u32l;
    // 0x80214F88: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80214F8C: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    // 0x80214F90: mov.s       $f14, $f24
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 24);
    ctx->f14.fl = ctx->f24.fl;
    // 0x80214F94: jal         0x802165D0
    // 0x80214F98: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    static_3_802165D0(rdram, ctx);
        goto after_1;
    // 0x80214F98: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_1:
    // 0x80214F9C: lw          $t0, 0x0($s3)
    ctx->r8 = MEM_W(ctx->r19, 0X0);
    // 0x80214FA0: lhu         $t1, 0x18($s5)
    ctx->r9 = MEM_HU(ctx->r21, 0X18);
    // 0x80214FA4: slt         $at, $t0, $t1
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x80214FA8: bnel        $at, $zero, L_802150C8
    if (ctx->r1 != 0) {
        // 0x80214FAC: lhu         $v1, 0x26($s5)
        ctx->r3 = MEM_HU(ctx->r21, 0X26);
            goto L_802150C8;
    }
    goto skip_5;
    // 0x80214FAC: lhu         $v1, 0x26($s5)
    ctx->r3 = MEM_HU(ctx->r21, 0X26);
    skip_5:
    // 0x80214FB0: b           L_802150E0
    // 0x80214FB4: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
        goto L_802150E0;
    // 0x80214FB4: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x80214FB8: lw          $t4, 0x0($s3)
    ctx->r12 = MEM_W(ctx->r19, 0X0);
L_80214FBC:
    // 0x80214FBC: lw          $t3, 0x0($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X0);
    // 0x80214FC0: lw          $t2, 0x0($s6)
    ctx->r10 = MEM_W(ctx->r22, 0X0);
    // 0x80214FC4: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80214FC8: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x80214FCC: sw          $t2, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r10;
    // 0x80214FD0: lw          $t7, 0x0($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X0);
    // 0x80214FD4: lwc1        $f18, 0x30($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X30);
    // 0x80214FD8: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x80214FDC: lw          $t9, 0x0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X0);
    // 0x80214FE0: sub.s       $f4, $f22, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f22.fl - ctx->f18.fl;
    // 0x80214FE4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80214FE8: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80214FEC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80214FF0: addu        $s0, $t8, $t9
    ctx->r16 = ADD32(ctx->r24, ctx->r25);
    // 0x80214FF4: swc1        $f4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f4.u32l;
    // 0x80214FF8: lwc1        $f6, 0x34($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X34);
    // 0x80214FFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80215000: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80215004: sub.s       $f8, $f24, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f24.fl - ctx->f6.fl;
    // 0x80215008: swc1        $f8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f8.u32l;
    // 0x8021500C: lwc1        $f10, 0x38($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X38);
    // 0x80215010: sub.s       $f16, $f26, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f26.fl - ctx->f10.fl;
    // 0x80215014: jal         0x80234D30
    // 0x80215018: swc1        $f16, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f16.u32l;
    static_3_80234D30(rdram, ctx);
        goto after_2;
    // 0x80215018: swc1        $f16, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f16.u32l;
    after_2:
    // 0x8021501C: lwc1        $f0, 0x0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X0);
    // 0x80215020: lwc1        $f2, 0x4($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X4);
    // 0x80215024: lwc1        $f14, 0x8($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X8);
    // 0x80215028: mul.s       $f18, $f0, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x8021502C: nop

    // 0x80215030: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80215034: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80215038: mul.s       $f8, $f14, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x8021503C: jal         0x8022AA40
    // 0x80215040: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    static_3_8022AA40(rdram, ctx);
        goto after_3;
    // 0x80215040: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    after_3:
    // 0x80215044: lwc1        $f10, 0x1C($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X1C);
    // 0x80215048: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8021504C: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80215050: sub.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x80215054: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x80215058: div.s       $f2, $f16, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = DIV_S(ctx->f16.fl, ctx->f20.fl);
    // 0x8021505C: c.lt.s      $f2, $f28
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f2.fl < ctx->f28.fl;
    // 0x80215060: nop

    // 0x80215064: bc1fl       L_80215088
    if (!c1cs) {
        // 0x80215068: lw          $t2, 0x0($s3)
        ctx->r10 = MEM_W(ctx->r19, 0X0);
            goto L_80215088;
    }
    goto skip_6;
    // 0x80215068: lw          $t2, 0x0($s3)
    ctx->r10 = MEM_W(ctx->r19, 0X0);
    skip_6:
    // 0x8021506C: lw          $t1, 0x0($s3)
    ctx->r9 = MEM_W(ctx->r19, 0X0);
    // 0x80215070: lw          $t0, 0x0($s7)
    ctx->r8 = MEM_W(ctx->r23, 0X0);
    // 0x80215074: sll         $t4, $t1, 2
    ctx->r12 = S32(ctx->r9 << 2);
    // 0x80215078: addu        $t3, $t0, $t4
    ctx->r11 = ADD32(ctx->r8, ctx->r12);
    // 0x8021507C: b           L_80215098
    // 0x80215080: swc1        $f2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f2.u32l;
        goto L_80215098;
    // 0x80215080: swc1        $f2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f2.u32l;
    // 0x80215084: lw          $t2, 0x0($s3)
    ctx->r10 = MEM_W(ctx->r19, 0X0);
L_80215088:
    // 0x80215088: lw          $t5, 0x0($s7)
    ctx->r13 = MEM_W(ctx->r23, 0X0);
    // 0x8021508C: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x80215090: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x80215094: swc1        $f28, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f28.u32l;
L_80215098:
    // 0x80215098: lw          $t8, 0x0($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X0);
    // 0x8021509C: lhu         $t1, 0x18($s5)
    ctx->r9 = MEM_HU(ctx->r21, 0X18);
    // 0x802150A0: addiu       $a0, $t8, 0x1
    ctx->r4 = ADD32(ctx->r24, 0X1);
    // 0x802150A4: slt         $at, $a0, $t1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x802150A8: bne         $at, $zero, L_802150C4
    if (ctx->r1 != 0) {
        // 0x802150AC: sw          $a0, 0x0($s3)
        MEM_W(0X0, ctx->r19) = ctx->r4;
            goto L_802150C4;
    }
    // 0x802150AC: sw          $a0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r4;
    // 0x802150B0: jal         0x80231C58
    // 0x802150B4: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    static_3_80231C58(rdram, ctx);
        goto after_4;
    // 0x802150B4: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    after_4:
    // 0x802150B8: lw          $t0, 0x0($s3)
    ctx->r8 = MEM_W(ctx->r19, 0X0);
    // 0x802150BC: addiu       $t4, $t0, -0x1
    ctx->r12 = ADD32(ctx->r8, -0X1);
    // 0x802150C0: sw          $t4, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r12;
L_802150C4:
    // 0x802150C4: lhu         $v1, 0x26($s5)
    ctx->r3 = MEM_HU(ctx->r21, 0X26);
L_802150C8:
    // 0x802150C8: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_802150CC:
    // 0x802150CC: andi        $t3, $s4, 0xFFFF
    ctx->r11 = ctx->r20 & 0XFFFF;
    // 0x802150D0: slt         $at, $t3, $v1
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x802150D4: bne         $at, $zero, L_80214EB4
    if (ctx->r1 != 0) {
        // 0x802150D8: or          $s4, $t3, $zero
        ctx->r20 = ctx->r11 | 0;
            goto L_80214EB4;
    }
    // 0x802150D8: or          $s4, $t3, $zero
    ctx->r20 = ctx->r11 | 0;
L_802150DC:
    // 0x802150DC: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
L_802150E0:
    // 0x802150E0: lui         $s7, 0x0
    ctx->r23 = S32(0X0 << 16);
    // 0x802150E4: addiu       $s7, $s7, 0x0
    ctx->r23 = ADD32(ctx->r23, 0X0);
    // 0x802150E8: beq         $a0, $zero, L_80215120
    if (ctx->r4 == 0) {
        // 0x802150EC: lui         $t2, 0x0
        ctx->r10 = S32(0X0 << 16);
            goto L_80215120;
    }
    // 0x802150EC: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x802150F0: lw          $t2, 0x0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X0);
    // 0x802150F4: lw          $t5, 0x88($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X88);
    // 0x802150F8: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x802150FC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80215100: sw          $t2, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r10;
    // 0x80215104: lw          $t7, 0x8C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X8C);
    // 0x80215108: lw          $t6, 0x0($s7)
    ctx->r14 = MEM_W(ctx->r23, 0X0);
    // 0x8021510C: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x80215110: lw          $t9, 0x90($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X90);
    // 0x80215114: lw          $t8, 0x0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X0);
    // 0x80215118: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x8021511C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
L_80215120:
    // 0x80215120: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    // 0x80215124: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x80215128: ldc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X30);
    // 0x8021512C: ldc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X38);
    // 0x80215130: ldc1        $f26, 0x40($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X40);
    // 0x80215134: ldc1        $f28, 0x48($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X48);
    // 0x80215138: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x8021513C: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x80215140: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x80215144: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x80215148: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x8021514C: lw          $s5, 0x64($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X64);
    // 0x80215150: lw          $s6, 0x68($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X68);
    // 0x80215154: lw          $s7, 0x6C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X6C);
    // 0x80215158: lw          $fp, 0x70($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X70);
    // 0x8021515C: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x80215160: jr          $ra
    // 0x80215164: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    return;
    // 0x80215164: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
;}
RECOMP_FUNC void D_802CFECC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802CFF4C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802CFF50: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x802CFF54: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802CFF58: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802CFF5C: lui         $s1, 0x0
    ctx->r17 = S32(0X0 << 16);
    // 0x802CFF60: lui         $s2, 0x0
    ctx->r18 = S32(0X0 << 16);
    // 0x802CFF64: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802CFF68: addiu       $s2, $s2, 0x0
    ctx->r18 = ADD32(ctx->r18, 0X0);
    // 0x802CFF6C: addiu       $s1, $s1, 0x0
    ctx->r17 = ADD32(ctx->r17, 0X0);
    // 0x802CFF70: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x802CFF74: sll         $t6, $s0, 2
    ctx->r14 = S32(ctx->r16 << 2);
L_802CFF78:
    // 0x802CFF78: addu        $t7, $s2, $t6
    ctx->r15 = ADD32(ctx->r18, ctx->r14);
    // 0x802CFF7C: lwc1        $f4, 0x0($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X0);
    // 0x802CFF80: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802CFF84: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x802CFF88: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x802CFF8C: mfc1        $a2, $f7
    ctx->r6 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x802CFF90: jal         0x80231A24
    // 0x802CFF94: nop

    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x802CFF94: nop

    after_0:
    // 0x802CFF98: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x802CFF9C: sll         $t8, $s0, 16
    ctx->r24 = S32(ctx->r16 << 16);
    // 0x802CFFA0: sra         $s0, $t8, 16
    ctx->r16 = S32(SIGNED(ctx->r24) >> 16);
    // 0x802CFFA4: slti        $at, $s0, 0x10
    ctx->r1 = SIGNED(ctx->r16) < 0X10 ? 1 : 0;
    // 0x802CFFA8: bnel        $at, $zero, L_802CFF78
    if (ctx->r1 != 0) {
        // 0x802CFFAC: sll         $t6, $s0, 2
        ctx->r14 = S32(ctx->r16 << 2);
            goto L_802CFF78;
    }
    goto skip_0;
    // 0x802CFFAC: sll         $t6, $s0, 2
    ctx->r14 = S32(ctx->r16 << 2);
    skip_0:
    // 0x802CFFB0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802CFFB4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802CFFB8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802CFFBC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x802CFFC0: jr          $ra
    // 0x802CFFC4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x802CFFC4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void D_8029D9A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029DA20: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x8029DA24: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8029DA28: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8029DA2C: sw          $a0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r4;
    // 0x8029DA30: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    // 0x8029DA34: sw          $a2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r6;
    // 0x8029DA38: lh          $t7, 0x284($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X284);
    // 0x8029DA3C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8029DA40: addiu       $s0, $sp, 0x30
    ctx->r16 = ADD32(ctx->r29, 0X30);
    // 0x8029DA44: bnel        $t7, $at, L_8029DBA4
    if (ctx->r15 != ctx->r1) {
        // 0x8029DA48: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8029DBA4;
    }
    goto skip_0;
    // 0x8029DA48: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x8029DA4C: jal         0x8022970C
    // 0x8029DA50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8022970C(rdram, ctx);
        goto after_0;
    // 0x8029DA50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8029DA54: lui         $a1, 0xC54B
    ctx->r5 = S32(0XC54B << 16);
    // 0x8029DA58: lui         $a2, 0x43AB
    ctx->r6 = S32(0X43AB << 16);
    // 0x8029DA5C: ori         $a2, $a2, 0x199A
    ctx->r6 = ctx->r6 | 0X199A;
    // 0x8029DA60: ori         $a1, $a1, 0x1800
    ctx->r5 = ctx->r5 | 0X1800;
    // 0x8029DA64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8029DA68: jal         0x8022A0D0
    // 0x8029DA6C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    static_3_8022A0D0(rdram, ctx);
        goto after_1;
    // 0x8029DA6C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_1:
    // 0x8029DA70: lui         $a1, 0x4096
    ctx->r5 = S32(0X4096 << 16);
    // 0x8029DA74: ori         $a1, $a1, 0xCBE8
    ctx->r5 = ctx->r5 | 0XCBE8;
    // 0x8029DA78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8029DA7C: jal         0x802D01D4
    // 0x8029DA80: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    static_3_802D01D4(rdram, ctx);
        goto after_2;
    // 0x8029DA80: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    after_2:
    // 0x8029DA84: lui         $a1, 0xBD86
    ctx->r5 = S32(0XBD86 << 16);
    // 0x8029DA88: ori         $a1, $a1, 0xA95
    ctx->r5 = ctx->r5 | 0XA95;
    // 0x8029DA8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8029DA90: jal         0x802D01D4
    // 0x8029DA94: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    static_3_802D01D4(rdram, ctx);
        goto after_3;
    // 0x8029DA94: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    after_3:
    // 0x8029DA98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8029DA9C: lui         $a1, 0xC248
    ctx->r5 = S32(0XC248 << 16);
    // 0x8029DAA0: lui         $a2, 0x4396
    ctx->r6 = S32(0X4396 << 16);
    // 0x8029DAA4: jal         0x8022A0D0
    // 0x8029DAA8: lui         $a3, 0x4320
    ctx->r7 = S32(0X4320 << 16);
    static_3_8022A0D0(rdram, ctx);
        goto after_4;
    // 0x8029DAA8: lui         $a3, 0x4320
    ctx->r7 = S32(0X4320 << 16);
    after_4:
    // 0x8029DAAC: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    // 0x8029DAB0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8029DAB4: lw          $a1, 0x74($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X74);
    // 0x8029DAB8: addiu       $a0, $a0, 0x294
    ctx->r4 = ADD32(ctx->r4, 0X294);
    // 0x8029DABC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8029DAC0: lw          $a2, 0x78($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X78);
    // 0x8029DAC4: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x8029DAC8: jal         0x802C53E4
    // 0x8029DACC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    static_3_802C53E4(rdram, ctx);
        goto after_5;
    // 0x8029DACC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_5:
    // 0x8029DAD0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8029DAD4: lw          $a1, 0x74($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X74);
    // 0x8029DAD8: jal         0x802C5468
    // 0x8029DADC: lw          $a2, 0x78($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X78);
    static_3_802C5468(rdram, ctx);
        goto after_6;
    // 0x8029DADC: lw          $a2, 0x78($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X78);
    after_6:
    // 0x8029DAE0: jal         0x8022970C
    // 0x8029DAE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8022970C(rdram, ctx);
        goto after_7;
    // 0x8029DAE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x8029DAE8: lui         $a1, 0xC54B
    ctx->r5 = S32(0XC54B << 16);
    // 0x8029DAEC: lui         $a2, 0x43AB
    ctx->r6 = S32(0X43AB << 16);
    // 0x8029DAF0: ori         $a2, $a2, 0x199A
    ctx->r6 = ctx->r6 | 0X199A;
    // 0x8029DAF4: ori         $a1, $a1, 0x1800
    ctx->r5 = ctx->r5 | 0X1800;
    // 0x8029DAF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8029DAFC: jal         0x8022A0D0
    // 0x8029DB00: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    static_3_8022A0D0(rdram, ctx);
        goto after_8;
    // 0x8029DB00: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_8:
    // 0x8029DB04: lui         $a1, 0x4096
    ctx->r5 = S32(0X4096 << 16);
    // 0x8029DB08: ori         $a1, $a1, 0xCBE8
    ctx->r5 = ctx->r5 | 0XCBE8;
    // 0x8029DB0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8029DB10: jal         0x802D01D4
    // 0x8029DB14: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    static_3_802D01D4(rdram, ctx);
        goto after_9;
    // 0x8029DB14: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    after_9:
    // 0x8029DB18: lui         $a1, 0xBD86
    ctx->r5 = S32(0XBD86 << 16);
    // 0x8029DB1C: ori         $a1, $a1, 0xA95
    ctx->r5 = ctx->r5 | 0XA95;
    // 0x8029DB20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8029DB24: jal         0x802D01D4
    // 0x8029DB28: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    static_3_802D01D4(rdram, ctx);
        goto after_10;
    // 0x8029DB28: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    after_10:
    // 0x8029DB2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8029DB30: lui         $a1, 0x4248
    ctx->r5 = S32(0X4248 << 16);
    // 0x8029DB34: lui         $a2, 0x4396
    ctx->r6 = S32(0X4396 << 16);
    // 0x8029DB38: jal         0x8022A0D0
    // 0x8029DB3C: lui         $a3, 0x4320
    ctx->r7 = S32(0X4320 << 16);
    static_3_8022A0D0(rdram, ctx);
        goto after_11;
    // 0x8029DB3C: lui         $a3, 0x4320
    ctx->r7 = S32(0X4320 << 16);
    after_11:
    // 0x8029DB40: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    // 0x8029DB44: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8029DB48: lw          $a1, 0x74($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X74);
    // 0x8029DB4C: addiu       $a0, $a0, 0x428
    ctx->r4 = ADD32(ctx->r4, 0X428);
    // 0x8029DB50: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8029DB54: lw          $a2, 0x78($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X78);
    // 0x8029DB58: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x8029DB5C: jal         0x802C53E4
    // 0x8029DB60: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    static_3_802C53E4(rdram, ctx);
        goto after_12;
    // 0x8029DB60: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_12:
    // 0x8029DB64: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8029DB68: lw          $a1, 0x74($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X74);
    // 0x8029DB6C: jal         0x802C5468
    // 0x8029DB70: lw          $a2, 0x78($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X78);
    static_3_802C5468(rdram, ctx);
        goto after_13;
    // 0x8029DB70: lw          $a2, 0x78($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X78);
    after_13:
    // 0x8029DB74: lw          $t8, 0x70($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X70);
    // 0x8029DB78: jal         0x803183C0
    // 0x8029DB7C: lw          $a0, 0x280($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X280);
    static_3_803183C0(rdram, ctx);
        goto after_14;
    // 0x8029DB7C: lw          $a0, 0x280($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X280);
    after_14:
    // 0x8029DB80: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x8029DB84: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8029DB88: lw          $t0, 0x70($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X70);
    // 0x8029DB8C: c.le.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl <= ctx->f8.fl;
    // 0x8029DB90: nop

    // 0x8029DB94: bc1f        L_8029DBA0
    if (!c1cs) {
        // 0x8029DB98: addiu       $t9, $zero, 0x5
        ctx->r25 = ADD32(0, 0X5);
            goto L_8029DBA0;
    }
    // 0x8029DB98: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x8029DB9C: sh          $t9, 0x284($t0)
    MEM_H(0X284, ctx->r8) = ctx->r25;
L_8029DBA0:
    // 0x8029DBA0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8029DBA4:
    // 0x8029DBA4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8029DBA8: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x8029DBAC: jr          $ra
    // 0x8029DBB0: nop

    return;
    // 0x8029DBB0: nop

;}
RECOMP_FUNC void D_802DD60C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802DD68C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802DD690: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802DD694: jr          $ra
    // 0x802DD698: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x802DD698: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void D_802DB890(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802DB910: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802DB914: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x802DB918: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802DB91C: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x802DB920: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802DB924: beq         $v0, $at, L_802DB950
    if (ctx->r2 == ctx->r1) {
        // 0x802DB928: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_802DB950;
    }
    // 0x802DB928: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802DB92C: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x802DB930: beq         $v0, $at, L_802DB950
    if (ctx->r2 == ctx->r1) {
        // 0x802DB934: addiu       $at, $zero, 0xE
        ctx->r1 = ADD32(0, 0XE);
            goto L_802DB950;
    }
    // 0x802DB934: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x802DB938: beq         $v0, $at, L_802DB950
    if (ctx->r2 == ctx->r1) {
        // 0x802DB93C: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_802DB950;
    }
    // 0x802DB93C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802DB940: jal         0x802AEE18
    // 0x802DB944: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    static_3_802AEE18(rdram, ctx);
        goto after_0;
    // 0x802DB944: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    after_0:
    // 0x802DB948: jal         0x8030CE60
    // 0x802DB94C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    static_3_8030CE60(rdram, ctx);
        goto after_1;
    // 0x802DB94C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
L_802DB950:
    // 0x802DB950: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802DB954: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802DB958: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802DB95C: jal         0x8022B780
    // 0x802DB960: addiu       $a2, $zero, 0xFE
    ctx->r6 = ADD32(0, 0XFE);
    static_3_8022B780(rdram, ctx);
        goto after_2;
    // 0x802DB960: addiu       $a2, $zero, 0xFE
    ctx->r6 = ADD32(0, 0XFE);
    after_2:
    // 0x802DB964: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DB968: addiu       $t6, $zero, 0x6C
    ctx->r14 = ADD32(0, 0X6C);
    // 0x802DB96C: addiu       $t7, $zero, 0x68
    ctx->r15 = ADD32(0, 0X68);
    // 0x802DB970: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x802DB974: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802DB978: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802DB97C: sb          $t6, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r14;
    // 0x802DB980: sb          $t7, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r15;
    // 0x802DB984: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802DB988: addiu       $v0, $v0, 0x0
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x802DB98C: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
L_802DB990:
    // 0x802DB990: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x802DB994: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x802DB998: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x802DB99C: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x802DB9A0: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x802DB9A4: sltu        $at, $v0, $a0
    ctx->r1 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x802DB9A8: sra         $t9, $t8, 24
    ctx->r25 = S32(SIGNED(ctx->r24) >> 24);
    // 0x802DB9AC: sra         $t1, $t0, 16
    ctx->r9 = S32(SIGNED(ctx->r8) >> 16);
    // 0x802DB9B0: sra         $t3, $t2, 8
    ctx->r11 = S32(SIGNED(ctx->r10) >> 8);
    // 0x802DB9B4: sb          $t9, -0x4($v0)
    MEM_B(-0X4, ctx->r2) = ctx->r25;
    // 0x802DB9B8: sb          $t1, -0x3($v0)
    MEM_B(-0X3, ctx->r2) = ctx->r9;
    // 0x802DB9BC: sb          $t3, -0x2($v0)
    MEM_B(-0X2, ctx->r2) = ctx->r11;
    // 0x802DB9C0: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x802DB9C4: bne         $at, $zero, L_802DB990
    if (ctx->r1 != 0) {
        // 0x802DB9C8: sb          $t4, -0x1($v0)
        MEM_B(-0X1, ctx->r2) = ctx->r12;
            goto L_802DB990;
    }
    // 0x802DB9C8: sb          $t4, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r12;
    // 0x802DB9CC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802DB9D0: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x802DB9D4: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802DB9D8: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802DB9DC: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x802DB9E0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
L_802DB9E4:
    // 0x802DB9E4: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x802DB9E8: addiu       $v1, $v1, 0x3
    ctx->r3 = ADD32(ctx->r3, 0X3);
    // 0x802DB9EC: sltu        $at, $v1, $a1
    ctx->r1 = ctx->r3 < ctx->r5 ? 1 : 0;
    // 0x802DB9F0: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x802DB9F4: lbu         $v0, 0x1($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X1);
    // 0x802DB9F8: addiu       $a0, $a0, 0x3
    ctx->r4 = ADD32(ctx->r4, 0X3);
    // 0x802DB9FC: sb          $v0, 0xA($v1)
    MEM_B(0XA, ctx->r3) = ctx->r2;
    // 0x802DBA00: lbu         $v0, -0x1($a0)
    ctx->r2 = MEM_BU(ctx->r4, -0X1);
    // 0x802DBA04: bne         $at, $zero, L_802DB9E4
    if (ctx->r1 != 0) {
        // 0x802DBA08: sb          $v0, 0xB($v1)
        MEM_B(0XB, ctx->r3) = ctx->r2;
            goto L_802DB9E4;
    }
    // 0x802DBA08: sb          $v0, 0xB($v1)
    MEM_B(0XB, ctx->r3) = ctx->r2;
    // 0x802DBA0C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802DBA10: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802DBA14: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802DBA18: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802DBA1C: addiu       $v0, $v0, 0x0
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x802DBA20: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
L_802DBA24:
    // 0x802DBA24: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x802DBA28: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802DBA2C: sltu        $at, $v0, $a1
    ctx->r1 = ctx->r2 < ctx->r5 ? 1 : 0;
    // 0x802DBA30: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x802DBA34: bne         $at, $zero, L_802DBA24
    if (ctx->r1 != 0) {
        // 0x802DBA38: sb          $v1, 0x14($v0)
        MEM_B(0X14, ctx->r2) = ctx->r3;
            goto L_802DBA24;
    }
    // 0x802DBA38: sb          $v1, 0x14($v0)
    MEM_B(0X14, ctx->r2) = ctx->r3;
    // 0x802DBA3C: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802DBA40: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802DBA44: lw          $t5, 0x28($a2)
    ctx->r13 = MEM_W(ctx->r6, 0X28);
    // 0x802DBA48: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DBA4C: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802DBA50: sra         $t6, $t5, 24
    ctx->r14 = S32(SIGNED(ctx->r13) >> 24);
    // 0x802DBA54: sb          $t6, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r14;
    // 0x802DBA58: lw          $t7, 0x28($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X28);
    // 0x802DBA5C: addiu       $v0, $v0, 0x0
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x802DBA60: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x802DBA64: sb          $t8, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r24;
    // 0x802DBA68: lw          $t9, 0x28($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X28);
    // 0x802DBA6C: sra         $t0, $t9, 8
    ctx->r8 = S32(SIGNED(ctx->r25) >> 8);
    // 0x802DBA70: sb          $t0, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r8;
    // 0x802DBA74: lw          $t1, 0x28($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X28);
    // 0x802DBA78: sb          $t1, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r9;
    // 0x802DBA7C: lbu         $v1, 0x2F($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X2F);
    // 0x802DBA80: sb          $v1, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r3;
    // 0x802DBA84: lw          $t2, 0x30($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X30);
    // 0x802DBA88: sra         $t3, $t2, 24
    ctx->r11 = S32(SIGNED(ctx->r10) >> 24);
    // 0x802DBA8C: sb          $t3, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r11;
    // 0x802DBA90: lw          $t4, 0x30($a2)
    ctx->r12 = MEM_W(ctx->r6, 0X30);
    // 0x802DBA94: sra         $t5, $t4, 16
    ctx->r13 = S32(SIGNED(ctx->r12) >> 16);
    // 0x802DBA98: sb          $t5, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r13;
    // 0x802DBA9C: lw          $t6, 0x30($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X30);
    // 0x802DBAA0: sra         $t7, $t6, 8
    ctx->r15 = S32(SIGNED(ctx->r14) >> 8);
    // 0x802DBAA4: sb          $t7, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r15;
    // 0x802DBAA8: lw          $t8, 0x30($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X30);
    // 0x802DBAAC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DBAB0: sb          $t8, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r24;
    // 0x802DBAB4: lbu         $v1, 0x37($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X37);
    // 0x802DBAB8: sb          $v1, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r3;
    // 0x802DBABC: lw          $t9, 0x38($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X38);
    // 0x802DBAC0: sra         $t0, $t9, 24
    ctx->r8 = S32(SIGNED(ctx->r25) >> 24);
    // 0x802DBAC4: sb          $t0, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r8;
    // 0x802DBAC8: lw          $t1, 0x38($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X38);
    // 0x802DBACC: sra         $t2, $t1, 16
    ctx->r10 = S32(SIGNED(ctx->r9) >> 16);
    // 0x802DBAD0: sb          $t2, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r10;
    // 0x802DBAD4: lw          $t3, 0x38($a2)
    ctx->r11 = MEM_W(ctx->r6, 0X38);
    // 0x802DBAD8: sra         $t4, $t3, 8
    ctx->r12 = S32(SIGNED(ctx->r11) >> 8);
    // 0x802DBADC: sb          $t4, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r12;
    // 0x802DBAE0: lw          $t5, 0x38($a2)
    ctx->r13 = MEM_W(ctx->r6, 0X38);
    // 0x802DBAE4: sb          $t5, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r13;
    // 0x802DBAE8: lbu         $v1, 0x3F($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X3F);
    // 0x802DBAEC: sb          $v1, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r3;
    // 0x802DBAF0: lw          $t6, 0x40($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X40);
    // 0x802DBAF4: sra         $t7, $t6, 24
    ctx->r15 = S32(SIGNED(ctx->r14) >> 24);
    // 0x802DBAF8: sb          $t7, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r15;
    // 0x802DBAFC: lw          $t8, 0x40($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X40);
    // 0x802DBB00: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DBB04: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x802DBB08: sb          $t9, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r25;
    // 0x802DBB0C: lw          $t0, 0x40($a2)
    ctx->r8 = MEM_W(ctx->r6, 0X40);
    // 0x802DBB10: sra         $t1, $t0, 8
    ctx->r9 = S32(SIGNED(ctx->r8) >> 8);
    // 0x802DBB14: sb          $t1, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r9;
    // 0x802DBB18: lw          $t2, 0x40($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X40);
    // 0x802DBB1C: sb          $t2, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r10;
    // 0x802DBB20: lbu         $v1, 0x47($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X47);
    // 0x802DBB24: sb          $v1, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r3;
    // 0x802DBB28: lbu         $v1, 0x48($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X48);
    // 0x802DBB2C: sb          $v1, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r3;
    // 0x802DBB30: lbu         $v1, 0x4A($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X4A);
    // 0x802DBB34: sb          $v1, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r3;
    // 0x802DBB38: lbu         $v1, 0x4B($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X4B);
    // 0x802DBB3C: sb          $v1, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r3;
    // 0x802DBB40: lbu         $v1, 0x4E($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X4E);
    // 0x802DBB44: sb          $v1, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r3;
    // 0x802DBB48: lbu         $v1, 0x4F($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X4F);
    // 0x802DBB4C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DBB50: sb          $v1, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r3;
    // 0x802DBB54: lbu         $v1, 0x51($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X51);
    // 0x802DBB58: sb          $v1, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r3;
    // 0x802DBB5C: lhu         $t3, 0x52($a2)
    ctx->r11 = MEM_HU(ctx->r6, 0X52);
    // 0x802DBB60: sra         $t4, $t3, 8
    ctx->r12 = S32(SIGNED(ctx->r11) >> 8);
    // 0x802DBB64: sb          $t4, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r12;
    // 0x802DBB68: lhu         $t5, 0x52($a2)
    ctx->r13 = MEM_HU(ctx->r6, 0X52);
    // 0x802DBB6C: sb          $t5, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r13;
    // 0x802DBB70: lw          $t6, 0x4($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X4);
    // 0x802DBB74: sw          $t6, 0x54($a2)
    MEM_W(0X54, ctx->r6) = ctx->r14;
    // 0x802DBB78: sra         $t8, $t6, 24
    ctx->r24 = S32(SIGNED(ctx->r14) >> 24);
    // 0x802DBB7C: sb          $t8, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r24;
    // 0x802DBB80: lw          $t9, 0x54($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X54);
    // 0x802DBB84: sra         $t0, $t9, 16
    ctx->r8 = S32(SIGNED(ctx->r25) >> 16);
    // 0x802DBB88: sb          $t0, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r8;
    // 0x802DBB8C: lw          $t1, 0x54($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X54);
    // 0x802DBB90: sra         $t2, $t1, 8
    ctx->r10 = S32(SIGNED(ctx->r9) >> 8);
    // 0x802DBB94: sb          $t2, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r10;
    // 0x802DBB98: lw          $t3, 0x54($a2)
    ctx->r11 = MEM_W(ctx->r6, 0X54);
    // 0x802DBB9C: sb          $t3, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r11;
    // 0x802DBBA0: lbu         $v1, 0x5C($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X5C);
    // 0x802DBBA4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DBBA8: sb          $v1, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r3;
    // 0x802DBBAC: lbu         $v1, 0x5D($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X5D);
    // 0x802DBBB0: sb          $v1, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r3;
    // 0x802DBBB4: lbu         $v1, 0x5E($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X5E);
    // 0x802DBBB8: sb          $v1, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r3;
    // 0x802DBBBC: lbu         $v1, 0x5F($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X5F);
    // 0x802DBBC0: sb          $v1, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r3;
    // 0x802DBBC4: lbu         $v1, 0x60($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X60);
    // 0x802DBBC8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DBBCC: sb          $v1, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r3;
    // 0x802DBBD0: lbu         $v1, 0x61($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X61);
    // 0x802DBBD4: sb          $v1, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r3;
    // 0x802DBBD8: lbu         $v1, 0x62($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X62);
    // 0x802DBBDC: sb          $v1, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r3;
    // 0x802DBBE0: lbu         $v1, 0x63($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X63);
    // 0x802DBBE4: sb          $v1, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r3;
    // 0x802DBBE8: lbu         $v1, 0x64($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X64);
    // 0x802DBBEC: sb          $v1, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r3;
    // 0x802DBBF0: lbu         $v1, 0x66($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X66);
    // 0x802DBBF4: sb          $v1, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r3;
    // 0x802DBBF8: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x802DBBFC: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x802DBC00: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x802DBC04: sra         $t5, $t4, 24
    ctx->r13 = S32(SIGNED(ctx->r12) >> 24);
    // 0x802DBC08: sb          $t5, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r13;
    // 0x802DBC0C: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x802DBC10: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DBC14: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x802DBC18: sb          $t7, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r15;
    // 0x802DBC1C: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x802DBC20: sra         $t9, $t8, 8
    ctx->r25 = S32(SIGNED(ctx->r24) >> 8);
    // 0x802DBC24: sb          $t9, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r25;
    // 0x802DBC28: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x802DBC2C: sb          $t0, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r8;
    // 0x802DBC30: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x802DBC34: sra         $t2, $t1, 24
    ctx->r10 = S32(SIGNED(ctx->r9) >> 24);
    // 0x802DBC38: sb          $t2, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r10;
    // 0x802DBC3C: lw          $t3, 0x4($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X4);
    // 0x802DBC40: sra         $t4, $t3, 16
    ctx->r12 = S32(SIGNED(ctx->r11) >> 16);
    // 0x802DBC44: sb          $t4, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r12;
    // 0x802DBC48: lw          $t5, 0x4($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X4);
    // 0x802DBC4C: sra         $t6, $t5, 8
    ctx->r14 = S32(SIGNED(ctx->r13) >> 8);
    // 0x802DBC50: sb          $t6, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r14;
    // 0x802DBC54: lw          $t7, 0x4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X4);
    // 0x802DBC58: sb          $t7, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r15;
    // 0x802DBC5C: lw          $t8, 0x8($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X8);
    // 0x802DBC60: sra         $t9, $t8, 24
    ctx->r25 = S32(SIGNED(ctx->r24) >> 24);
    // 0x802DBC64: sb          $t9, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r25;
    // 0x802DBC68: lw          $t0, 0x8($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X8);
    // 0x802DBC6C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DBC70: sra         $t1, $t0, 16
    ctx->r9 = S32(SIGNED(ctx->r8) >> 16);
    // 0x802DBC74: sb          $t1, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r9;
    // 0x802DBC78: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x802DBC7C: sra         $t3, $t2, 8
    ctx->r11 = S32(SIGNED(ctx->r10) >> 8);
    // 0x802DBC80: sb          $t3, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r11;
    // 0x802DBC84: lw          $t4, 0x8($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X8);
    // 0x802DBC88: sb          $t4, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r12;
    // 0x802DBC8C: lw          $t5, 0xC($v0)
    ctx->r13 = MEM_W(ctx->r2, 0XC);
    // 0x802DBC90: sra         $t6, $t5, 24
    ctx->r14 = S32(SIGNED(ctx->r13) >> 24);
    // 0x802DBC94: sb          $t6, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r14;
    // 0x802DBC98: lw          $t7, 0xC($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XC);
    // 0x802DBC9C: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x802DBCA0: sb          $t8, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r24;
    // 0x802DBCA4: lw          $t9, 0xC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XC);
    // 0x802DBCA8: sra         $t0, $t9, 8
    ctx->r8 = S32(SIGNED(ctx->r25) >> 8);
    // 0x802DBCAC: sb          $t0, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r8;
    // 0x802DBCB0: lw          $t1, 0xC($v0)
    ctx->r9 = MEM_W(ctx->r2, 0XC);
    // 0x802DBCB4: sb          $t1, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r9;
    // 0x802DBCB8: lw          $t2, 0x10($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X10);
    // 0x802DBCBC: sra         $t3, $t2, 24
    ctx->r11 = S32(SIGNED(ctx->r10) >> 24);
    // 0x802DBCC0: sb          $t3, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r11;
    // 0x802DBCC4: lw          $t4, 0x10($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X10);
    // 0x802DBCC8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DBCCC: sra         $t5, $t4, 16
    ctx->r13 = S32(SIGNED(ctx->r12) >> 16);
    // 0x802DBCD0: sb          $t5, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r13;
    // 0x802DBCD4: lw          $t6, 0x10($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X10);
    // 0x802DBCD8: sra         $t7, $t6, 8
    ctx->r15 = S32(SIGNED(ctx->r14) >> 8);
    // 0x802DBCDC: sb          $t7, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r15;
    // 0x802DBCE0: lw          $t8, 0x10($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X10);
    // 0x802DBCE4: sb          $t8, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r24;
    // 0x802DBCE8: lw          $t9, 0x14($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X14);
    // 0x802DBCEC: sra         $t0, $t9, 24
    ctx->r8 = S32(SIGNED(ctx->r25) >> 24);
    // 0x802DBCF0: sb          $t0, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r8;
    // 0x802DBCF4: lw          $t1, 0x14($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X14);
    // 0x802DBCF8: sra         $t2, $t1, 16
    ctx->r10 = S32(SIGNED(ctx->r9) >> 16);
    // 0x802DBCFC: sb          $t2, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r10;
    // 0x802DBD00: lw          $t3, 0x14($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X14);
    // 0x802DBD04: sra         $t4, $t3, 8
    ctx->r12 = S32(SIGNED(ctx->r11) >> 8);
    // 0x802DBD08: sb          $t4, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r12;
    // 0x802DBD0C: lw          $t5, 0x14($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X14);
    // 0x802DBD10: sb          $t5, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r13;
    // 0x802DBD14: lw          $t6, 0x18($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X18);
    // 0x802DBD18: sra         $t7, $t6, 24
    ctx->r15 = S32(SIGNED(ctx->r14) >> 24);
    // 0x802DBD1C: sb          $t7, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r15;
    // 0x802DBD20: lw          $t8, 0x18($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X18);
    // 0x802DBD24: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DBD28: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x802DBD2C: sb          $t9, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r25;
    // 0x802DBD30: lw          $t0, 0x18($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X18);
    // 0x802DBD34: sra         $t1, $t0, 8
    ctx->r9 = S32(SIGNED(ctx->r8) >> 8);
    // 0x802DBD38: sb          $t1, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r9;
    // 0x802DBD3C: lw          $t2, 0x18($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X18);
    // 0x802DBD40: sb          $t2, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r10;
    // 0x802DBD44: lw          $t3, 0x1C($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X1C);
    // 0x802DBD48: sra         $t4, $t3, 24
    ctx->r12 = S32(SIGNED(ctx->r11) >> 24);
    // 0x802DBD4C: sb          $t4, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r12;
    // 0x802DBD50: lw          $t5, 0x1C($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X1C);
    // 0x802DBD54: sra         $t6, $t5, 16
    ctx->r14 = S32(SIGNED(ctx->r13) >> 16);
    // 0x802DBD58: sb          $t6, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r14;
    // 0x802DBD5C: lw          $t7, 0x1C($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X1C);
    // 0x802DBD60: sra         $t8, $t7, 8
    ctx->r24 = S32(SIGNED(ctx->r15) >> 8);
    // 0x802DBD64: sb          $t8, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r24;
    // 0x802DBD68: lw          $t9, 0x1C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X1C);
    // 0x802DBD6C: sb          $t9, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r25;
    // 0x802DBD70: lw          $t0, 0x20($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X20);
    // 0x802DBD74: sra         $t1, $t0, 24
    ctx->r9 = S32(SIGNED(ctx->r8) >> 24);
    // 0x802DBD78: sb          $t1, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r9;
    // 0x802DBD7C: lw          $t2, 0x20($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X20);
    // 0x802DBD80: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DBD84: sra         $t3, $t2, 16
    ctx->r11 = S32(SIGNED(ctx->r10) >> 16);
    // 0x802DBD88: sb          $t3, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r11;
    // 0x802DBD8C: lw          $t4, 0x20($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X20);
    // 0x802DBD90: sra         $t5, $t4, 8
    ctx->r13 = S32(SIGNED(ctx->r12) >> 8);
    // 0x802DBD94: sb          $t5, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r13;
    // 0x802DBD98: lw          $t6, 0x20($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X20);
    // 0x802DBD9C: sb          $t6, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r14;
    // 0x802DBDA0: lw          $t7, 0x24($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X24);
    // 0x802DBDA4: sra         $t8, $t7, 24
    ctx->r24 = S32(SIGNED(ctx->r15) >> 24);
    // 0x802DBDA8: sb          $t8, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r24;
    // 0x802DBDAC: lw          $t9, 0x24($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X24);
    // 0x802DBDB0: sra         $t0, $t9, 16
    ctx->r8 = S32(SIGNED(ctx->r25) >> 16);
    // 0x802DBDB4: sb          $t0, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r8;
    // 0x802DBDB8: lw          $t1, 0x24($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X24);
    // 0x802DBDBC: sra         $t2, $t1, 8
    ctx->r10 = S32(SIGNED(ctx->r9) >> 8);
    // 0x802DBDC0: sb          $t2, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r10;
    // 0x802DBDC4: lw          $t3, 0x24($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X24);
    // 0x802DBDC8: sb          $t3, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r11;
    // 0x802DBDCC: lw          $t4, 0x28($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X28);
    // 0x802DBDD0: sra         $t5, $t4, 24
    ctx->r13 = S32(SIGNED(ctx->r12) >> 24);
    // 0x802DBDD4: sb          $t5, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r13;
    // 0x802DBDD8: lw          $t6, 0x28($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X28);
    // 0x802DBDDC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DBDE0: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x802DBDE4: sb          $t7, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r15;
    // 0x802DBDE8: lw          $t8, 0x28($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X28);
    // 0x802DBDEC: sra         $t9, $t8, 8
    ctx->r25 = S32(SIGNED(ctx->r24) >> 8);
    // 0x802DBDF0: sb          $t9, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r25;
    // 0x802DBDF4: lw          $t0, 0x28($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X28);
    // 0x802DBDF8: sb          $t0, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r8;
    // 0x802DBDFC: lw          $t1, 0x2C($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X2C);
    // 0x802DBE00: sra         $t2, $t1, 24
    ctx->r10 = S32(SIGNED(ctx->r9) >> 24);
    // 0x802DBE04: sb          $t2, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r10;
    // 0x802DBE08: lw          $t3, 0x2C($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X2C);
    // 0x802DBE0C: sra         $t4, $t3, 16
    ctx->r12 = S32(SIGNED(ctx->r11) >> 16);
    // 0x802DBE10: sb          $t4, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r12;
    // 0x802DBE14: lw          $t5, 0x2C($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X2C);
    // 0x802DBE18: sra         $t6, $t5, 8
    ctx->r14 = S32(SIGNED(ctx->r13) >> 8);
    // 0x802DBE1C: sb          $t6, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r14;
    // 0x802DBE20: lw          $t7, 0x2C($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X2C);
    // 0x802DBE24: sb          $t7, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r15;
    // 0x802DBE28: lw          $t8, 0x30($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X30);
    // 0x802DBE2C: sra         $t9, $t8, 24
    ctx->r25 = S32(SIGNED(ctx->r24) >> 24);
    // 0x802DBE30: sb          $t9, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r25;
    // 0x802DBE34: lw          $t0, 0x30($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X30);
    // 0x802DBE38: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DBE3C: sra         $t1, $t0, 16
    ctx->r9 = S32(SIGNED(ctx->r8) >> 16);
    // 0x802DBE40: sb          $t1, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r9;
    // 0x802DBE44: lw          $t2, 0x30($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X30);
    // 0x802DBE48: sra         $t3, $t2, 8
    ctx->r11 = S32(SIGNED(ctx->r10) >> 8);
    // 0x802DBE4C: sb          $t3, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r11;
    // 0x802DBE50: lw          $t4, 0x30($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X30);
    // 0x802DBE54: sb          $t4, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r12;
    // 0x802DBE58: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x802DBE5C: sra         $t6, $t5, 24
    ctx->r14 = S32(SIGNED(ctx->r13) >> 24);
    // 0x802DBE60: sb          $t6, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r14;
    // 0x802DBE64: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x802DBE68: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DBE6C: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x802DBE70: sb          $t8, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r24;
    // 0x802DBE74: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x802DBE78: sra         $t0, $t9, 8
    ctx->r8 = S32(SIGNED(ctx->r25) >> 8);
    // 0x802DBE7C: sb          $t0, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r8;
    // 0x802DBE80: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x802DBE84: sb          $t1, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r9;
    // 0x802DBE88: lw          $t2, 0x4($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X4);
    // 0x802DBE8C: sra         $t3, $t2, 24
    ctx->r11 = S32(SIGNED(ctx->r10) >> 24);
    // 0x802DBE90: sb          $t3, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r11;
    // 0x802DBE94: lw          $t4, 0x4($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X4);
    // 0x802DBE98: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DBE9C: sra         $t5, $t4, 16
    ctx->r13 = S32(SIGNED(ctx->r12) >> 16);
    // 0x802DBEA0: sb          $t5, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r13;
    // 0x802DBEA4: lw          $t6, 0x4($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X4);
    // 0x802DBEA8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802DBEAC: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802DBEB0: sra         $t7, $t6, 8
    ctx->r15 = S32(SIGNED(ctx->r14) >> 8);
    // 0x802DBEB4: sb          $t7, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r15;
    // 0x802DBEB8: lw          $t8, 0x4($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X4);
    // 0x802DBEBC: addiu       $v0, $v0, 0x0
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x802DBEC0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802DBEC4: sb          $t8, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r24;
    // 0x802DBEC8: lw          $t9, 0x8($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X8);
    // 0x802DBECC: sra         $t0, $t9, 24
    ctx->r8 = S32(SIGNED(ctx->r25) >> 24);
    // 0x802DBED0: sb          $t0, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r8;
    // 0x802DBED4: lw          $t1, 0x8($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X8);
    // 0x802DBED8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DBEDC: sra         $t2, $t1, 16
    ctx->r10 = S32(SIGNED(ctx->r9) >> 16);
    // 0x802DBEE0: sb          $t2, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r10;
    // 0x802DBEE4: lw          $t3, 0x8($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X8);
    // 0x802DBEE8: sra         $t4, $t3, 8
    ctx->r12 = S32(SIGNED(ctx->r11) >> 8);
    // 0x802DBEEC: sb          $t4, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r12;
    // 0x802DBEF0: lw          $t5, 0x8($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X8);
    // 0x802DBEF4: sb          $t5, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r13;
    // 0x802DBEF8: lw          $t6, 0xC($v1)
    ctx->r14 = MEM_W(ctx->r3, 0XC);
    // 0x802DBEFC: sra         $t7, $t6, 24
    ctx->r15 = S32(SIGNED(ctx->r14) >> 24);
    // 0x802DBF00: sb          $t7, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r15;
    // 0x802DBF04: lw          $t8, 0xC($v1)
    ctx->r24 = MEM_W(ctx->r3, 0XC);
    // 0x802DBF08: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x802DBF0C: sb          $t9, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r25;
    // 0x802DBF10: lw          $t0, 0xC($v1)
    ctx->r8 = MEM_W(ctx->r3, 0XC);
    // 0x802DBF14: sra         $t1, $t0, 8
    ctx->r9 = S32(SIGNED(ctx->r8) >> 8);
    // 0x802DBF18: sb          $t1, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r9;
    // 0x802DBF1C: lw          $t2, 0xC($v1)
    ctx->r10 = MEM_W(ctx->r3, 0XC);
    // 0x802DBF20: sb          $t2, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r10;
    // 0x802DBF24: lw          $t3, 0x10($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X10);
    // 0x802DBF28: sra         $t4, $t3, 24
    ctx->r12 = S32(SIGNED(ctx->r11) >> 24);
    // 0x802DBF2C: sb          $t4, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r12;
    // 0x802DBF30: lw          $t5, 0x10($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X10);
    // 0x802DBF34: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DBF38: sra         $t6, $t5, 16
    ctx->r14 = S32(SIGNED(ctx->r13) >> 16);
    // 0x802DBF3C: sb          $t6, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r14;
    // 0x802DBF40: lw          $t7, 0x10($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X10);
    // 0x802DBF44: sra         $t8, $t7, 8
    ctx->r24 = S32(SIGNED(ctx->r15) >> 8);
    // 0x802DBF48: sb          $t8, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r24;
    // 0x802DBF4C: lw          $t9, 0x10($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X10);
    // 0x802DBF50: sb          $t9, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r25;
    // 0x802DBF54: lw          $t0, 0x14($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X14);
    // 0x802DBF58: sra         $t1, $t0, 24
    ctx->r9 = S32(SIGNED(ctx->r8) >> 24);
    // 0x802DBF5C: sb          $t1, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r9;
    // 0x802DBF60: lw          $t2, 0x14($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X14);
    // 0x802DBF64: sra         $t3, $t2, 16
    ctx->r11 = S32(SIGNED(ctx->r10) >> 16);
    // 0x802DBF68: sb          $t3, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r11;
    // 0x802DBF6C: lw          $t4, 0x14($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X14);
    // 0x802DBF70: sra         $t5, $t4, 8
    ctx->r13 = S32(SIGNED(ctx->r12) >> 8);
    // 0x802DBF74: sb          $t5, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r13;
    // 0x802DBF78: lw          $t6, 0x14($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X14);
    // 0x802DBF7C: sb          $t6, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r14;
    // 0x802DBF80: lw          $t7, 0x18($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X18);
    // 0x802DBF84: sra         $t8, $t7, 24
    ctx->r24 = S32(SIGNED(ctx->r15) >> 24);
    // 0x802DBF88: sb          $t8, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r24;
    // 0x802DBF8C: lw          $t9, 0x18($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X18);
    // 0x802DBF90: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DBF94: sra         $t0, $t9, 16
    ctx->r8 = S32(SIGNED(ctx->r25) >> 16);
    // 0x802DBF98: sb          $t0, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r8;
    // 0x802DBF9C: lw          $t1, 0x18($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X18);
    // 0x802DBFA0: sra         $t2, $t1, 8
    ctx->r10 = S32(SIGNED(ctx->r9) >> 8);
    // 0x802DBFA4: sb          $t2, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r10;
    // 0x802DBFA8: lw          $t3, 0x18($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X18);
    // 0x802DBFAC: sb          $t3, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r11;
    // 0x802DBFB0: lw          $t4, 0x1C($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X1C);
    // 0x802DBFB4: sra         $t5, $t4, 24
    ctx->r13 = S32(SIGNED(ctx->r12) >> 24);
    // 0x802DBFB8: sb          $t5, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r13;
    // 0x802DBFBC: lw          $t6, 0x1C($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X1C);
    // 0x802DBFC0: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x802DBFC4: sb          $t7, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r15;
    // 0x802DBFC8: lw          $t8, 0x1C($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X1C);
    // 0x802DBFCC: sra         $t9, $t8, 8
    ctx->r25 = S32(SIGNED(ctx->r24) >> 8);
    // 0x802DBFD0: sb          $t9, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r25;
    // 0x802DBFD4: lw          $t0, 0x1C($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X1C);
    // 0x802DBFD8: sb          $t0, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r8;
    // 0x802DBFDC: lw          $t1, 0x20($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X20);
    // 0x802DBFE0: sra         $t2, $t1, 24
    ctx->r10 = S32(SIGNED(ctx->r9) >> 24);
    // 0x802DBFE4: sb          $t2, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r10;
    // 0x802DBFE8: lw          $t3, 0x20($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X20);
    // 0x802DBFEC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DBFF0: sra         $t4, $t3, 16
    ctx->r12 = S32(SIGNED(ctx->r11) >> 16);
    // 0x802DBFF4: sb          $t4, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r12;
    // 0x802DBFF8: lw          $t5, 0x20($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X20);
    // 0x802DBFFC: sra         $t6, $t5, 8
    ctx->r14 = S32(SIGNED(ctx->r13) >> 8);
    // 0x802DC000: sb          $t6, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r14;
    // 0x802DC004: lw          $t7, 0x20($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X20);
    // 0x802DC008: sb          $t7, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r15;
    // 0x802DC00C: lw          $t8, 0x24($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X24);
    // 0x802DC010: sra         $t9, $t8, 24
    ctx->r25 = S32(SIGNED(ctx->r24) >> 24);
    // 0x802DC014: sb          $t9, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r25;
    // 0x802DC018: lw          $t0, 0x24($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X24);
    // 0x802DC01C: sra         $t1, $t0, 16
    ctx->r9 = S32(SIGNED(ctx->r8) >> 16);
    // 0x802DC020: sb          $t1, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r9;
    // 0x802DC024: lw          $t2, 0x24($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X24);
    // 0x802DC028: sra         $t3, $t2, 8
    ctx->r11 = S32(SIGNED(ctx->r10) >> 8);
    // 0x802DC02C: sb          $t3, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r11;
    // 0x802DC030: lw          $t4, 0x24($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X24);
    // 0x802DC034: sb          $t4, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r12;
    // 0x802DC038: lw          $t5, 0x28($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X28);
    // 0x802DC03C: sra         $t6, $t5, 24
    ctx->r14 = S32(SIGNED(ctx->r13) >> 24);
    // 0x802DC040: sb          $t6, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r14;
    // 0x802DC044: lw          $t7, 0x28($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X28);
    // 0x802DC048: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DC04C: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x802DC050: sb          $t8, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r24;
    // 0x802DC054: lw          $t9, 0x28($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X28);
    // 0x802DC058: sra         $t0, $t9, 8
    ctx->r8 = S32(SIGNED(ctx->r25) >> 8);
    // 0x802DC05C: sb          $t0, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r8;
    // 0x802DC060: lw          $t1, 0x28($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X28);
    // 0x802DC064: sb          $t1, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r9;
    // 0x802DC068: lw          $t2, 0x2C($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X2C);
    // 0x802DC06C: sra         $t3, $t2, 24
    ctx->r11 = S32(SIGNED(ctx->r10) >> 24);
    // 0x802DC070: sb          $t3, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r11;
    // 0x802DC074: lw          $t4, 0x2C($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X2C);
    // 0x802DC078: sra         $t5, $t4, 16
    ctx->r13 = S32(SIGNED(ctx->r12) >> 16);
    // 0x802DC07C: sb          $t5, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r13;
    // 0x802DC080: lw          $t6, 0x2C($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X2C);
    // 0x802DC084: sra         $t7, $t6, 8
    ctx->r15 = S32(SIGNED(ctx->r14) >> 8);
    // 0x802DC088: sb          $t7, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r15;
    // 0x802DC08C: lw          $t8, 0x2C($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X2C);
    // 0x802DC090: sb          $t8, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r24;
    // 0x802DC094: lw          $t9, 0x30($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X30);
    // 0x802DC098: sra         $t0, $t9, 24
    ctx->r8 = S32(SIGNED(ctx->r25) >> 24);
    // 0x802DC09C: sb          $t0, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r8;
    // 0x802DC0A0: lw          $t1, 0x30($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X30);
    // 0x802DC0A4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DC0A8: sra         $t2, $t1, 16
    ctx->r10 = S32(SIGNED(ctx->r9) >> 16);
    // 0x802DC0AC: sb          $t2, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r10;
    // 0x802DC0B0: lw          $t3, 0x30($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X30);
    // 0x802DC0B4: sra         $t4, $t3, 8
    ctx->r12 = S32(SIGNED(ctx->r11) >> 8);
    // 0x802DC0B8: sb          $t4, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r12;
    // 0x802DC0BC: lw          $t5, 0x30($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X30);
    // 0x802DC0C0: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x802DC0C4: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x802DC0C8: sb          $t5, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r13;
    // 0x802DC0CC: lbu         $t6, 0x65($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0X65);
    // 0x802DC0D0: sb          $t6, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r14;
    // 0x802DC0D4: lbu         $t7, 0x67($a2)
    ctx->r15 = MEM_BU(ctx->r6, 0X67);
    // 0x802DC0D8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DC0DC: sb          $t7, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r15;
    // 0x802DC0E0: lbu         $t8, 0x68($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0X68);
    // 0x802DC0E4: sb          $t8, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r24;
    // 0x802DC0E8: lbu         $t9, 0x69($a2)
    ctx->r25 = MEM_BU(ctx->r6, 0X69);
    // 0x802DC0EC: sb          $t9, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r25;
    // 0x802DC0F0: lbu         $t0, 0x6A($a2)
    ctx->r8 = MEM_BU(ctx->r6, 0X6A);
    // 0x802DC0F4: sb          $t0, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r8;
    // 0x802DC0F8: lbu         $t1, 0x6B($a2)
    ctx->r9 = MEM_BU(ctx->r6, 0X6B);
    // 0x802DC0FC: sb          $t1, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r9;
L_802DC100:
    // 0x802DC100: lhu         $t2, 0x0($a0)
    ctx->r10 = MEM_HU(ctx->r4, 0X0);
    // 0x802DC104: lhu         $t4, 0x0($a0)
    ctx->r12 = MEM_HU(ctx->r4, 0X0);
    // 0x802DC108: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x802DC10C: sra         $t3, $t2, 8
    ctx->r11 = S32(SIGNED(ctx->r10) >> 8);
    // 0x802DC110: sb          $t3, 0xBB($v0)
    MEM_B(0XBB, ctx->r2) = ctx->r11;
    // 0x802DC114: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x802DC118: bne         $v0, $v1, L_802DC100
    if (ctx->r2 != ctx->r3) {
        // 0x802DC11C: sb          $t4, 0xBC($v0)
        MEM_B(0XBC, ctx->r2) = ctx->r12;
            goto L_802DC100;
    }
    // 0x802DC11C: sb          $t4, 0xBC($v0)
    MEM_B(0XBC, ctx->r2) = ctx->r12;
    // 0x802DC120: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x802DC124: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x802DC128: lbu         $t5, 0x0($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0X0);
    // 0x802DC12C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DC130: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802DC134: sb          $t5, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r13;
    // 0x802DC138: lbu         $t6, 0x1($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X1);
    // 0x802DC13C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DC140: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802DC144: sb          $t6, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r14;
    // 0x802DC148: lbu         $t7, 0x2($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X2);
    // 0x802DC14C: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802DC150: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802DC154: sb          $t7, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r15;
    // 0x802DC158: lbu         $t8, 0x0($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X0);
    // 0x802DC15C: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x802DC160: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x802DC164: sb          $t8, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r24;
    // 0x802DC168: lbu         $t9, 0x1($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X1);
    // 0x802DC16C: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802DC170: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x802DC174: sb          $t9, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r25;
    // 0x802DC178: lbu         $t0, 0x2($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X2);
    // 0x802DC17C: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x802DC180: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802DC184: sb          $t0, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r8;
    // 0x802DC188: lbu         $t1, 0x0($a1)
    ctx->r9 = MEM_BU(ctx->r5, 0X0);
    // 0x802DC18C: sra         $t0, $v0, 24
    ctx->r8 = S32(SIGNED(ctx->r2) >> 24);
    // 0x802DC190: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x802DC194: sb          $t1, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r9;
    // 0x802DC198: lbu         $t2, 0x1($a1)
    ctx->r10 = MEM_BU(ctx->r5, 0X1);
    // 0x802DC19C: sra         $t1, $v0, 16
    ctx->r9 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802DC1A0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802DC1A4: sb          $t2, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r10;
    // 0x802DC1A8: lbu         $t3, 0x2($a1)
    ctx->r11 = MEM_BU(ctx->r5, 0X2);
    // 0x802DC1AC: sra         $t2, $v0, 8
    ctx->r10 = S32(SIGNED(ctx->r2) >> 8);
    // 0x802DC1B0: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802DC1B4: sb          $t3, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r11;
    // 0x802DC1B8: lbu         $t4, 0x0($a3)
    ctx->r12 = MEM_BU(ctx->r7, 0X0);
    // 0x802DC1BC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DC1C0: sb          $t4, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r12;
    // 0x802DC1C4: lbu         $t5, 0x1($a3)
    ctx->r13 = MEM_BU(ctx->r7, 0X1);
    // 0x802DC1C8: sb          $t5, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r13;
    // 0x802DC1CC: lbu         $t6, 0x2($a3)
    ctx->r14 = MEM_BU(ctx->r7, 0X2);
    // 0x802DC1D0: sb          $t6, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r14;
    // 0x802DC1D4: lbu         $t7, 0x4C($a2)
    ctx->r15 = MEM_BU(ctx->r6, 0X4C);
    // 0x802DC1D8: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802DC1DC: sb          $t7, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r15;
    // 0x802DC1E0: lbu         $t8, 0x4D($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0X4D);
    // 0x802DC1E4: sb          $t8, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r24;
    // 0x802DC1E8: lbu         $t9, 0x49($a2)
    ctx->r25 = MEM_BU(ctx->r6, 0X49);
    // 0x802DC1EC: sb          $t0, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r8;
    // 0x802DC1F0: sb          $t1, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r9;
    // 0x802DC1F4: sb          $t9, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r25;
    // 0x802DC1F8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DC1FC: sb          $t2, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r10;
    // 0x802DC200: sb          $v0, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r2;
    // 0x802DC204: lhu         $t3, 0x0($a2)
    ctx->r11 = MEM_HU(ctx->r6, 0X0);
    // 0x802DC208: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802DC20C: addiu       $v0, $v0, 0x0
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x802DC210: sra         $t4, $t3, 8
    ctx->r12 = S32(SIGNED(ctx->r11) >> 8);
    // 0x802DC214: sb          $t4, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r12;
    // 0x802DC218: lhu         $t5, 0x0($a2)
    ctx->r13 = MEM_HU(ctx->r6, 0X0);
    // 0x802DC21C: sb          $t5, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r13;
    // 0x802DC220: lbu         $t6, 0x0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X0);
    // 0x802DC224: lbu         $a1, 0x0($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X0);
    // 0x802DC228: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DC22C: addu        $a1, $a1, $t6
    ctx->r5 = ADD32(ctx->r5, ctx->r14);
L_802DC230:
    // 0x802DC230: lbu         $t7, 0x0($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X0);
    // 0x802DC234: lbu         $t8, 0x1($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X1);
    // 0x802DC238: lbu         $t9, 0x2($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X2);
    // 0x802DC23C: addu        $a1, $a1, $t7
    ctx->r5 = ADD32(ctx->r5, ctx->r15);
    // 0x802DC240: lbu         $t0, 0x3($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X3);
    // 0x802DC244: addu        $a1, $a1, $t8
    ctx->r5 = ADD32(ctx->r5, ctx->r24);
    // 0x802DC248: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x802DC24C: addu        $a1, $a1, $t9
    ctx->r5 = ADD32(ctx->r5, ctx->r25);
    // 0x802DC250: bne         $v0, $v1, L_802DC230
    if (ctx->r2 != ctx->r3) {
        // 0x802DC254: addu        $a1, $a1, $t0
        ctx->r5 = ADD32(ctx->r5, ctx->r8);
            goto L_802DC230;
    }
    // 0x802DC254: addu        $a1, $a1, $t0
    ctx->r5 = ADD32(ctx->r5, ctx->r8);
    // 0x802DC258: andi        $t1, $a1, 0xFF
    ctx->r9 = ctx->r5 & 0XFF;
    // 0x802DC25C: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x802DC260: jal         0x80231A24
    // 0x802DC264: sb          $t1, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r9;
    static_3_80231A24(rdram, ctx);
        goto after_3;
    // 0x802DC264: sb          $t1, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r9;
    after_3:
    // 0x802DC268: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x802DC26C: lbu         $t2, 0x0($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X0);
    // 0x802DC270: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802DC274: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802DC278: beq         $t2, $zero, L_802DC288
    if (ctx->r10 == 0) {
        // 0x802DC27C: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_802DC288;
    }
    // 0x802DC27C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802DC280: b           L_802DC294
    // 0x802DC284: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802DC294;
    // 0x802DC284: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802DC288:
    // 0x802DC288: jal         0x80230B80
    // 0x802DC28C: addiu       $a2, $zero, 0x100
    ctx->r6 = ADD32(0, 0X100);
    static_3_80230B80(rdram, ctx);
        goto after_4;
    // 0x802DC28C: addiu       $a2, $zero, 0x100
    ctx->r6 = ADD32(0, 0X100);
    after_4:
    // 0x802DC290: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802DC294:
    // 0x802DC294: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802DC298: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802DC29C: jr          $ra
    // 0x802DC2A0: nop

    return;
    // 0x802DC2A0: nop

;}
RECOMP_FUNC void D_802C7D60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802C7DE0: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x802C7DE4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x802C7DE8: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x802C7DEC: lw          $t6, 0x40($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X40);
    // 0x802C7DF0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802C7DF4: beql        $t6, $zero, L_802C8148
    if (ctx->r14 == 0) {
        // 0x802C7DF8: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_802C8148;
    }
    goto skip_0;
    // 0x802C7DF8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_0:
    // 0x802C7DFC: jal         0x80207130
    // 0x802C7E00: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_80207130(rdram, ctx);
        goto after_0;
    // 0x802C7E00: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x802C7E04: lwc1        $f4, 0x18($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X18);
    // 0x802C7E08: lw          $v0, 0x40($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X40);
    // 0x802C7E0C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x802C7E10: lbu         $t7, 0xC($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0XC);
    // 0x802C7E14: sub.d       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f0.d - ctx->f6.d;
    // 0x802C7E18: lwc1        $f2, 0x8($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X8);
    // 0x802C7E1C: beq         $t7, $zero, L_802C7E48
    if (ctx->r15 == 0) {
        // 0x802C7E20: cvt.s.d     $f12, $f8
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
            goto L_802C7E48;
    }
    // 0x802C7E20: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    // 0x802C7E24: lbu         $t8, 0xD($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0XD);
    // 0x802C7E28: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x802C7E2C: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x802C7E30: bgez        $t8, L_802C7E44
    if (SIGNED(ctx->r24) >= 0) {
        // 0x802C7E34: cvt.s.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
            goto L_802C7E44;
    }
    // 0x802C7E34: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x802C7E38: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802C7E3C: nop

    // 0x802C7E40: add.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f18.fl;
L_802C7E44:
    // 0x802C7E44: add.s       $f2, $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f16.fl;
L_802C7E48:
    // 0x802C7E48: c.le.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl <= ctx->f12.fl;
    // 0x802C7E4C: nop

    // 0x802C7E50: bc1f        L_802C7E5C
    if (!c1cs) {
        // 0x802C7E54: nop
    
            goto L_802C7E5C;
    }
    // 0x802C7E54: nop

    // 0x802C7E58: sb          $zero, 0x14($s0)
    MEM_B(0X14, ctx->r16) = 0;
L_802C7E5C:
    // 0x802C7E5C: jal         0x8022331C
    // 0x802C7E60: swc1        $f12, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f12.u32l;
    static_3_8022331C(rdram, ctx);
        goto after_1;
    // 0x802C7E60: swc1        $f12, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f12.u32l;
    after_1:
    // 0x802C7E64: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x802C7E68: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802C7E6C: lui         $at, 0x4360
    ctx->r1 = S32(0X4360 << 16);
    // 0x802C7E70: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802C7E74: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802C7E78: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x802C7E7C: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    // 0x802C7E80: lui         $a2, 0x4398
    ctx->r6 = S32(0X4398 << 16);
    // 0x802C7E84: jal         0x8022A848
    // 0x802C7E88: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    static_3_8022A848(rdram, ctx);
        goto after_2;
    // 0x802C7E88: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x802C7E8C: jal         0x80221B2C
    // 0x802C7E90: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    static_3_80221B2C(rdram, ctx);
        goto after_3;
    // 0x802C7E90: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    after_3:
    // 0x802C7E94: jal         0x8022970C
    // 0x802C7E98: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    func_8022970C(rdram, ctx);
        goto after_4;
    // 0x802C7E98: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    after_4:
    // 0x802C7E9C: jal         0x8022149C
    // 0x802C7EA0: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    static_3_8022149C(rdram, ctx);
        goto after_5;
    // 0x802C7EA0: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    after_5:
    // 0x802C7EA4: jal         0x802233EC
    // 0x802C7EA8: lui         $a0, 0x80
    ctx->r4 = S32(0X80 << 16);
    static_3_802233EC(rdram, ctx);
        goto after_6;
    // 0x802C7EA8: lui         $a0, 0x80
    ctx->r4 = S32(0X80 << 16);
    after_6:
    // 0x802C7EAC: lw          $v0, 0x40($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X40);
    // 0x802C7EB0: lwc1        $f12, 0x50($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X50);
    // 0x802C7EB4: lwc1        $f2, 0x8($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X8);
    // 0x802C7EB8: c.le.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl <= ctx->f2.fl;
    // 0x802C7EBC: nop

    // 0x802C7EC0: bc1fl       L_802C7F1C
    if (!c1cs) {
        // 0x802C7EC4: lbu         $t1, 0x0($v0)
        ctx->r9 = MEM_BU(ctx->r2, 0X0);
            goto L_802C7F1C;
    }
    goto skip_1;
    // 0x802C7EC4: lbu         $t1, 0x0($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X0);
    skip_1:
    // 0x802C7EC8: lbu         $t9, 0x0($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X0);
    // 0x802C7ECC: div.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f12.fl, ctx->f2.fl);
    // 0x802C7ED0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802C7ED4: beql        $t9, $zero, L_802C7EEC
    if (ctx->r25 == 0) {
        // 0x802C7ED8: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_802C7EEC;
    }
    goto skip_2;
    // 0x802C7ED8: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_2:
    // 0x802C7EDC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802C7EE0: b           L_802C7EEC
    // 0x802C7EE4: sub.s       $f2, $f6, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f0.fl;
        goto L_802C7EEC;
    // 0x802C7EE4: sub.s       $f2, $f6, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x802C7EE8: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_802C7EEC:
    // 0x802C7EEC: lbu         $t0, 0x4($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X4);
    // 0x802C7EF0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x802C7EF4: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x802C7EF8: bgez        $t0, L_802C7F0C
    if (SIGNED(ctx->r8) >= 0) {
        // 0x802C7EFC: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_802C7F0C;
    }
    // 0x802C7EFC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802C7F00: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802C7F04: nop

    // 0x802C7F08: add.s       $f10, $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f18.fl;
L_802C7F0C:
    // 0x802C7F0C: mul.s       $f0, $f2, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f10.fl);
    // 0x802C7F10: b           L_802C7F7C
    // 0x802C7F14: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
        goto L_802C7F7C;
    // 0x802C7F14: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x802C7F18: lbu         $t1, 0x0($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X0);
L_802C7F1C:
    // 0x802C7F1C: beql        $t1, $zero, L_802C7F58
    if (ctx->r9 == 0) {
        // 0x802C7F20: lbu         $t3, 0x4($v0)
        ctx->r11 = MEM_BU(ctx->r2, 0X4);
            goto L_802C7F58;
    }
    goto skip_3;
    // 0x802C7F20: lbu         $t3, 0x4($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X4);
    skip_3:
    // 0x802C7F24: lbu         $t2, 0x4($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X4);
    // 0x802C7F28: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x802C7F2C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802C7F30: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x802C7F34: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x802C7F38: bgez        $t2, L_802C7F4C
    if (SIGNED(ctx->r10) >= 0) {
        // 0x802C7F3C: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_802C7F4C;
    }
    // 0x802C7F3C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802C7F40: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802C7F44: nop

    // 0x802C7F48: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_802C7F4C:
    // 0x802C7F4C: b           L_802C7F74
    // 0x802C7F50: sub.s       $f2, $f16, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f16.fl - ctx->f6.fl;
        goto L_802C7F74;
    // 0x802C7F50: sub.s       $f2, $f16, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f16.fl - ctx->f6.fl;
    // 0x802C7F54: lbu         $t3, 0x4($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X4);
L_802C7F58:
    // 0x802C7F58: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x802C7F5C: mtc1        $t3, $f18
    ctx->f18.u32l = ctx->r11;
    // 0x802C7F60: bgez        $t3, L_802C7F74
    if (SIGNED(ctx->r11) >= 0) {
        // 0x802C7F64: cvt.s.w     $f2, $f18
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    ctx->f2.fl = CVT_S_W(ctx->f18.u32l);
            goto L_802C7F74;
    }
    // 0x802C7F64: cvt.s.w     $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    ctx->f2.fl = CVT_S_W(ctx->f18.u32l);
    // 0x802C7F68: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802C7F6C: nop

    // 0x802C7F70: add.s       $f2, $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f10.fl;
L_802C7F74:
    // 0x802C7F74: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x802C7F78: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
L_802C7F7C:
    // 0x802C7F7C: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x802C7F80: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x802C7F84: nop

    // 0x802C7F88: bc1fl       L_802C7F9C
    if (!c1cs) {
        // 0x802C7F8C: mtc1        $at, $f4
        ctx->f4.u32l = ctx->r1;
            goto L_802C7F9C;
    }
    goto skip_4;
    // 0x802C7F8C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    skip_4:
    // 0x802C7F90: b           L_802C7FB8
    // 0x802C7F94: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
        goto L_802C7FB8;
    // 0x802C7F94: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x802C7F98: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
L_802C7F9C:
    // 0x802C7F9C: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x802C7FA0: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x802C7FA4: nop

    // 0x802C7FA8: bc1f        L_802C7FB8
    if (!c1cs) {
        // 0x802C7FAC: nop
    
            goto L_802C7FB8;
    }
    // 0x802C7FAC: nop

    // 0x802C7FB0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802C7FB4: nop

L_802C7FB8:
    // 0x802C7FB8: jal         0x8021F4E4
    // 0x802C7FBC: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    static_3_8021F4E4(rdram, ctx);
        goto after_7;
    // 0x802C7FBC: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    after_7:
    // 0x802C7FC0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802C7FC4: lw          $v0, 0x40($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X40);
    // 0x802C7FC8: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x802C7FCC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802C7FD0: ctc1        $v1, $FpcCsr
    set_cop1_cs(ctx->r3);
    // 0x802C7FD4: lwc1        $f0, 0x54($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X54);
    // 0x802C7FD8: lbu         $t4, 0x1($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X1);
    // 0x802C7FDC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802C7FE0: cvt.w.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = CVT_W_S(ctx->f0.fl);
    // 0x802C7FE4: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x802C7FE8: lbu         $t5, 0x2($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X2);
    // 0x802C7FEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802C7FF0: cfc1        $v1, $FpcCsr
    ctx->r3 = get_cop1_cs();
    // 0x802C7FF4: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x802C7FF8: lbu         $t6, 0x3($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X3);
    // 0x802C7FFC: andi        $v1, $v1, 0x78
    ctx->r3 = ctx->r3 & 0X78;
    // 0x802C8000: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802C8004: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802C8008: beq         $v1, $zero, L_802C8058
    if (ctx->r3 == 0) {
        // 0x802C800C: sw          $t6, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r14;
            goto L_802C8058;
    }
    // 0x802C800C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x802C8010: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x802C8014: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802C8018: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802C801C: sub.s       $f8, $f0, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x802C8020: ctc1        $v1, $FpcCsr
    set_cop1_cs(ctx->r3);
    // 0x802C8024: nop

    // 0x802C8028: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x802C802C: cfc1        $v1, $FpcCsr
    ctx->r3 = get_cop1_cs();
    // 0x802C8030: nop

    // 0x802C8034: andi        $v1, $v1, 0x78
    ctx->r3 = ctx->r3 & 0X78;
    // 0x802C8038: bne         $v1, $zero, L_802C8050
    if (ctx->r3 != 0) {
        // 0x802C803C: nop
    
            goto L_802C8050;
    }
    // 0x802C803C: nop

    // 0x802C8040: mfc1        $v1, $f8
    ctx->r3 = (int32_t)ctx->f8.u32l;
    // 0x802C8044: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802C8048: b           L_802C8068
    // 0x802C804C: or          $v1, $v1, $at
    ctx->r3 = ctx->r3 | ctx->r1;
        goto L_802C8068;
    // 0x802C804C: or          $v1, $v1, $at
    ctx->r3 = ctx->r3 | ctx->r1;
L_802C8050:
    // 0x802C8050: b           L_802C8068
    // 0x802C8054: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
        goto L_802C8068;
    // 0x802C8054: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
L_802C8058:
    // 0x802C8058: mfc1        $v1, $f8
    ctx->r3 = (int32_t)ctx->f8.u32l;
    // 0x802C805C: nop

    // 0x802C8060: bltz        $v1, L_802C8050
    if (SIGNED(ctx->r3) < 0) {
        // 0x802C8064: nop
    
            goto L_802C8050;
    }
    // 0x802C8064: nop

L_802C8068:
    // 0x802C8068: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x802C806C: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    // 0x802C8070: jal         0x8021F35C
    // 0x802C8074: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    static_3_8021F35C(rdram, ctx);
        goto after_8;
    // 0x802C8074: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    after_8:
    // 0x802C8078: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802C807C: lw          $v0, 0x40($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X40);
    // 0x802C8080: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x802C8084: addiu       $a0, $zero, 0x140
    ctx->r4 = ADD32(0, 0X140);
    // 0x802C8088: lbu         $t8, 0x1($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X1);
    // 0x802C808C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802C8090: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802C8094: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x802C8098: lbu         $t9, 0x2($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X2);
    // 0x802C809C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802C80A0: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x802C80A4: lbu         $t0, 0x3($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X3);
    // 0x802C80A8: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x802C80AC: jal         0x8021F35C
    // 0x802C80B0: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    static_3_8021F35C(rdram, ctx);
        goto after_9;
    // 0x802C80B0: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    after_9:
    // 0x802C80B4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802C80B8: lw          $v0, 0x40($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X40);
    // 0x802C80BC: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x802C80C0: addiu       $a0, $zero, 0x140
    ctx->r4 = ADD32(0, 0X140);
    // 0x802C80C4: lbu         $t2, 0x1($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X1);
    // 0x802C80C8: addiu       $a1, $zero, 0xF0
    ctx->r5 = ADD32(0, 0XF0);
    // 0x802C80CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802C80D0: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x802C80D4: lbu         $t3, 0x2($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X2);
    // 0x802C80D8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802C80DC: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x802C80E0: lbu         $t4, 0x3($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X3);
    // 0x802C80E4: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x802C80E8: jal         0x8021F35C
    // 0x802C80EC: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    static_3_8021F35C(rdram, ctx);
        goto after_10;
    // 0x802C80EC: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    after_10:
    // 0x802C80F0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802C80F4: lw          $v0, 0x40($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X40);
    // 0x802C80F8: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x802C80FC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802C8100: lbu         $t6, 0x1($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X1);
    // 0x802C8104: addiu       $a1, $zero, 0xF0
    ctx->r5 = ADD32(0, 0XF0);
    // 0x802C8108: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802C810C: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x802C8110: lbu         $t7, 0x2($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X2);
    // 0x802C8114: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802C8118: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x802C811C: lbu         $t8, 0x3($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X3);
    // 0x802C8120: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x802C8124: jal         0x8021F35C
    // 0x802C8128: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    static_3_8021F35C(rdram, ctx);
        goto after_11;
    // 0x802C8128: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    after_11:
    // 0x802C812C: jal         0x8021FCD0
    // 0x802C8130: nop

    static_3_8021FCD0(rdram, ctx);
        goto after_12;
    // 0x802C8130: nop

    after_12:
    // 0x802C8134: jal         0x802230E4
    // 0x802C8138: nop

    static_3_802230E4(rdram, ctx);
        goto after_13;
    // 0x802C8138: nop

    after_13:
    // 0x802C813C: jal         0x8022337C
    // 0x802C8140: nop

    static_3_8022337C(rdram, ctx);
        goto after_14;
    // 0x802C8140: nop

    after_14:
    // 0x802C8144: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_802C8148:
    // 0x802C8148: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x802C814C: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    // 0x802C8150: jr          $ra
    // 0x802C8154: nop

    return;
    // 0x802C8154: nop

;}
RECOMP_FUNC void D_802E1314(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E1394: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802E1398: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802E139C: jr          $ra
    // 0x802E13A0: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x802E13A0: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void D_8029501C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029509C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802950A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802950A4: jal         0x80228DE0
    // 0x802950A8: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    func_80228DE0(rdram, ctx);
        goto after_0;
    // 0x802950A8: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    after_0:
    // 0x802950AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802950B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802950B4: jr          $ra
    // 0x802950B8: nop

    return;
    // 0x802950B8: nop

;}
