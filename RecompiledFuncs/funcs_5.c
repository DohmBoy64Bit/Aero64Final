#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void D_802BC7B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802BC838: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x802BC83C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802BC840: jal         0x802EE050
    // 0x802BC844: sw          $a0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r4;
    static_3_802EE050(rdram, ctx);
        goto after_0;
    // 0x802BC844: sw          $a0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r4;
    after_0:
    // 0x802BC848: jal         0x8022331C
    // 0x802BC84C: nop

    static_3_8022331C(rdram, ctx);
        goto after_1;
    // 0x802BC84C: nop

    after_1:
    // 0x802BC850: jal         0x8022970C
    // 0x802BC854: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    func_8022970C(rdram, ctx);
        goto after_2;
    // 0x802BC854: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_2:
    // 0x802BC858: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x802BC85C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802BC860: lui         $at, 0x4360
    ctx->r1 = S32(0X4360 << 16);
    // 0x802BC864: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802BC868: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802BC86C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x802BC870: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x802BC874: lui         $a2, 0x4398
    ctx->r6 = S32(0X4398 << 16);
    // 0x802BC878: jal         0x8022A848
    // 0x802BC87C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    static_3_8022A848(rdram, ctx);
        goto after_3;
    // 0x802BC87C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x802BC880: jal         0x80221B2C
    // 0x802BC884: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    static_3_80221B2C(rdram, ctx);
        goto after_4;
    // 0x802BC884: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_4:
    // 0x802BC888: jal         0x8022970C
    // 0x802BC88C: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    func_8022970C(rdram, ctx);
        goto after_5;
    // 0x802BC88C: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_5:
    // 0x802BC890: jal         0x8022149C
    // 0x802BC894: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    static_3_8022149C(rdram, ctx);
        goto after_6;
    // 0x802BC894: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_6:
    // 0x802BC898: jal         0x802233EC
    // 0x802BC89C: lui         $a0, 0x2
    ctx->r4 = S32(0X2 << 16);
    static_3_802233EC(rdram, ctx);
        goto after_7;
    // 0x802BC89C: lui         $a0, 0x2
    ctx->r4 = S32(0X2 << 16);
    after_7:
    // 0x802BC8A0: jal         0x8021F4E4
    // 0x802BC8A4: nop

    static_3_8021F4E4(rdram, ctx);
        goto after_8;
    // 0x802BC8A4: nop

    after_8:
    // 0x802BC8A8: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x802BC8AC: addiu       $t7, $zero, 0xCA
    ctx->r15 = ADD32(0, 0XCA);
    // 0x802BC8B0: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x802BC8B4: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x802BC8B8: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x802BC8BC: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x802BC8C0: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x802BC8C4: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x802BC8C8: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x802BC8CC: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    // 0x802BC8D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802BC8D4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802BC8D8: jal         0x8021F35C
    // 0x802BC8DC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_9;
    // 0x802BC8DC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_9:
    // 0x802BC8E0: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x802BC8E4: addiu       $t1, $zero, 0xCA
    ctx->r9 = ADD32(0, 0XCA);
    // 0x802BC8E8: addiu       $t2, $zero, 0x7
    ctx->r10 = ADD32(0, 0X7);
    // 0x802BC8EC: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x802BC8F0: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x802BC8F4: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x802BC8F8: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x802BC8FC: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x802BC900: addiu       $a0, $zero, 0x124
    ctx->r4 = ADD32(0, 0X124);
    // 0x802BC904: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    // 0x802BC908: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802BC90C: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x802BC910: jal         0x8021F35C
    // 0x802BC914: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_10;
    // 0x802BC914: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_10:
    // 0x802BC918: addiu       $t4, $zero, 0x1E0
    ctx->r12 = ADD32(0, 0X1E0);
    // 0x802BC91C: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x802BC920: addiu       $t6, $zero, 0xCA
    ctx->r14 = ADD32(0, 0XCA);
    // 0x802BC924: addiu       $t7, $zero, 0x7
    ctx->r15 = ADD32(0, 0X7);
    // 0x802BC928: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x802BC92C: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x802BC930: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x802BC934: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x802BC938: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x802BC93C: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x802BC940: addiu       $a0, $zero, 0x124
    ctx->r4 = ADD32(0, 0X124);
    // 0x802BC944: addiu       $a1, $zero, 0xD7
    ctx->r5 = ADD32(0, 0XD7);
    // 0x802BC948: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802BC94C: jal         0x8021F35C
    // 0x802BC950: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    static_3_8021F35C(rdram, ctx);
        goto after_11;
    // 0x802BC950: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_11:
    // 0x802BC954: addiu       $t9, $zero, 0x1E0
    ctx->r25 = ADD32(0, 0X1E0);
    // 0x802BC958: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x802BC95C: addiu       $t1, $zero, 0xCA
    ctx->r9 = ADD32(0, 0XCA);
    // 0x802BC960: addiu       $t2, $zero, 0x7
    ctx->r10 = ADD32(0, 0X7);
    // 0x802BC964: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x802BC968: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x802BC96C: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x802BC970: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x802BC974: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x802BC978: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x802BC97C: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x802BC980: addiu       $a1, $zero, 0xD7
    ctx->r5 = ADD32(0, 0XD7);
    // 0x802BC984: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802BC988: jal         0x8021F35C
    // 0x802BC98C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_8021F35C(rdram, ctx);
        goto after_12;
    // 0x802BC98C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_12:
    // 0x802BC990: jal         0x8021FCD0
    // 0x802BC994: nop

    static_3_8021FCD0(rdram, ctx);
        goto after_13;
    // 0x802BC994: nop

    after_13:
    // 0x802BC998: jal         0x8021F4E4
    // 0x802BC99C: nop

    static_3_8021F4E4(rdram, ctx);
        goto after_14;
    // 0x802BC99C: nop

    after_14:
    // 0x802BC9A0: addiu       $t4, $zero, 0xA
    ctx->r12 = ADD32(0, 0XA);
    // 0x802BC9A4: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x802BC9A8: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x802BC9AC: addiu       $t7, $zero, 0x96
    ctx->r15 = ADD32(0, 0X96);
    // 0x802BC9B0: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x802BC9B4: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x802BC9B8: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x802BC9BC: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x802BC9C0: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    // 0x802BC9C4: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    // 0x802BC9C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802BC9CC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802BC9D0: jal         0x8021F35C
    // 0x802BC9D4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_15;
    // 0x802BC9D4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_15:
    // 0x802BC9D8: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x802BC9DC: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x802BC9E0: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
    // 0x802BC9E4: addiu       $t1, $zero, 0x96
    ctx->r9 = ADD32(0, 0X96);
    // 0x802BC9E8: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x802BC9EC: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x802BC9F0: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x802BC9F4: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x802BC9F8: addiu       $a0, $zero, 0x127
    ctx->r4 = ADD32(0, 0X127);
    // 0x802BC9FC: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    // 0x802BCA00: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802BCA04: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802BCA08: jal         0x8021F35C
    // 0x802BCA0C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_16;
    // 0x802BCA0C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_16:
    // 0x802BCA10: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x802BCA14: addiu       $t3, $zero, 0xA
    ctx->r11 = ADD32(0, 0XA);
    // 0x802BCA18: addiu       $t4, $zero, 0xA
    ctx->r12 = ADD32(0, 0XA);
    // 0x802BCA1C: addiu       $t5, $zero, 0x96
    ctx->r13 = ADD32(0, 0X96);
    // 0x802BCA20: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x802BCA24: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x802BCA28: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x802BCA2C: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x802BCA30: addiu       $a0, $zero, 0x127
    ctx->r4 = ADD32(0, 0X127);
    // 0x802BCA34: addiu       $a1, $zero, 0x92
    ctx->r5 = ADD32(0, 0X92);
    // 0x802BCA38: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802BCA3C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802BCA40: jal         0x8021F35C
    // 0x802BCA44: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_17;
    // 0x802BCA44: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_17:
    // 0x802BCA48: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x802BCA4C: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x802BCA50: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x802BCA54: addiu       $t9, $zero, 0x96
    ctx->r25 = ADD32(0, 0X96);
    // 0x802BCA58: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x802BCA5C: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x802BCA60: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x802BCA64: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x802BCA68: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    // 0x802BCA6C: addiu       $a1, $zero, 0x92
    ctx->r5 = ADD32(0, 0X92);
    // 0x802BCA70: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802BCA74: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802BCA78: jal         0x8021F35C
    // 0x802BCA7C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_18;
    // 0x802BCA7C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_18:
    // 0x802BCA80: jal         0x8021FCD0
    // 0x802BCA84: nop

    static_3_8021FCD0(rdram, ctx);
        goto after_19;
    // 0x802BCA84: nop

    after_19:
    // 0x802BCA88: jal         0x802230E4
    // 0x802BCA8C: nop

    static_3_802230E4(rdram, ctx);
        goto after_20;
    // 0x802BCA8C: nop

    after_20:
    // 0x802BCA90: jal         0x8022337C
    // 0x802BCA94: nop

    static_3_8022337C(rdram, ctx);
        goto after_21;
    // 0x802BCA94: nop

    after_21:
    // 0x802BCA98: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802BCA9C: sb          $zero, 0x73($sp)
    MEM_B(0X73, ctx->r29) = 0;
    // 0x802BCAA0: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802BCAA4: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    // 0x802BCAA8: jal         0x8022B460
    // 0x802BCAAC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8022B460(rdram, ctx);
        goto after_22;
    // 0x802BCAAC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_22:
    // 0x802BCAB0: jal         0x8021E66C
    // 0x802BCAB4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_8021E66C(rdram, ctx);
        goto after_23;
    // 0x802BCAB4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_23:
    // 0x802BCAB8: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x802BCABC: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x802BCAC0: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x802BCAC4: jal         0x8021E708
    // 0x802BCAC8: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_24;
    // 0x802BCAC8: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_24:
    // 0x802BCACC: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802BCAD0: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802BCAD4: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    // 0x802BCAD8: jal         0x8021E87C
    // 0x802BCADC: addiu       $a1, $zero, 0x84
    ctx->r5 = ADD32(0, 0X84);
    static_3_8021E87C(rdram, ctx);
        goto after_25;
    // 0x802BCADC: addiu       $a1, $zero, 0x84
    ctx->r5 = ADD32(0, 0X84);
    after_25:
    // 0x802BCAE0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802BCAE4: ldc1        $f12, 0x0($at)
    CHECK_FR(ctx, 12);
    ctx->f12.u64 = LD(ctx->r1, 0X0);
    // 0x802BCAE8: jal         0x8021E6EC
    // 0x802BCAEC: mov.d       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.d = ctx->f12.d;
    func_8021E6EC(rdram, ctx);
        goto after_26;
    // 0x802BCAEC: mov.d       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.d = ctx->f12.d;
    after_26:
    // 0x802BCAF0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802BCAF4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802BCAF8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802BCAFC: jal         0x8021E708
    // 0x802BCB00: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_27;
    // 0x802BCB00: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_27:
    // 0x802BCB04: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802BCB08: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802BCB0C: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    // 0x802BCB10: jal         0x8021E87C
    // 0x802BCB14: addiu       $a1, $zero, 0xCC
    ctx->r5 = ADD32(0, 0XCC);
    static_3_8021E87C(rdram, ctx);
        goto after_28;
    // 0x802BCB14: addiu       $a1, $zero, 0xCC
    ctx->r5 = ADD32(0, 0XCC);
    after_28:
    // 0x802BCB18: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802BCB1C: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802BCB20: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    // 0x802BCB24: jal         0x8021E87C
    // 0x802BCB28: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    static_3_8021E87C(rdram, ctx);
        goto after_29;
    // 0x802BCB28: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    after_29:
    // 0x802BCB2C: jal         0x8021EC9C
    // 0x802BCB30: nop

    static_3_8021EC9C(rdram, ctx);
        goto after_30;
    // 0x802BCB30: nop

    after_30:
    // 0x802BCB34: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x802BCB38: lbu         $t0, 0x0($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X0);
    // 0x802BCB3C: blezl       $t0, L_802BCC1C
    if (SIGNED(ctx->r8) <= 0) {
        // 0x802BCB40: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_802BCC1C;
    }
    goto skip_0;
    // 0x802BCB40: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x802BCB44: jal         0x8021E66C
    // 0x802BCB48: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_8021E66C(rdram, ctx);
        goto after_31;
    // 0x802BCB48: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_31:
    // 0x802BCB4C: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x802BCB50: addiu       $a1, $zero, 0xCA
    ctx->r5 = ADD32(0, 0XCA);
    // 0x802BCB54: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x802BCB58: jal         0x8021E708
    // 0x802BCB5C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_32;
    // 0x802BCB5C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_32:
    // 0x802BCB60: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x802BCB64: addiu       $a1, $zero, 0xCA
    ctx->r5 = ADD32(0, 0XCA);
    // 0x802BCB68: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x802BCB6C: jal         0x8021E708
    // 0x802BCB70: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_33;
    // 0x802BCB70: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_33:
    // 0x802BCB74: addiu       $a0, $zero, 0xF0
    ctx->r4 = ADD32(0, 0XF0);
    // 0x802BCB78: addiu       $a1, $zero, 0x81
    ctx->r5 = ADD32(0, 0X81);
    // 0x802BCB7C: jal         0x8021E87C
    // 0x802BCB80: addiu       $a2, $sp, 0x70
    ctx->r6 = ADD32(ctx->r29, 0X70);
    static_3_8021E87C(rdram, ctx);
        goto after_34;
    // 0x802BCB80: addiu       $a2, $sp, 0x70
    ctx->r6 = ADD32(ctx->r29, 0X70);
    after_34:
    // 0x802BCB84: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x802BCB88: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x802BCB8C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x802BCB90: jal         0x8021E708
    // 0x802BCB94: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_35;
    // 0x802BCB94: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_35:
    // 0x802BCB98: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x802BCB9C: addiu       $a1, $zero, 0x52
    ctx->r5 = ADD32(0, 0X52);
    // 0x802BCBA0: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    // 0x802BCBA4: jal         0x802F14C4
    // 0x802BCBA8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_802F14C4(rdram, ctx);
        goto after_36;
    // 0x802BCBA8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_36:
    // 0x802BCBAC: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x802BCBB0: mtc1        $at, $f13
    ctx->f_odd[(13 - 1) * 2] = ctx->r1;
    // 0x802BCBB4: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x802BCBB8: jal         0x8021E6EC
    // 0x802BCBBC: mov.d       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.d = ctx->f12.d;
    func_8021E6EC(rdram, ctx);
        goto after_37;
    // 0x802BCBBC: mov.d       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.d = ctx->f12.d;
    after_37:
    // 0x802BCBC0: jal         0x8021E66C
    // 0x802BCBC4: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    static_3_8021E66C(rdram, ctx);
        goto after_38;
    // 0x802BCBC4: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_38:
    // 0x802BCBC8: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x802BCBCC: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x802BCBD0: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x802BCBD4: jal         0x8021E708
    // 0x802BCBD8: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_39;
    // 0x802BCBD8: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_39:
    // 0x802BCBDC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802BCBE0: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802BCBE4: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802BCBE8: lw          $a2, 0x0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X0);
    // 0x802BCBEC: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802BCBF0: jal         0x8023072C
    // 0x802BCBF4: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    static_3_8023072C(rdram, ctx);
        goto after_40;
    // 0x802BCBF4: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    after_40:
    // 0x802BCBF8: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802BCBFC: lw          $a2, 0x0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X0);
    // 0x802BCC00: addiu       $a0, $zero, 0xD5
    ctx->r4 = ADD32(0, 0XD5);
    // 0x802BCC04: jal         0x8021E87C
    // 0x802BCC08: addiu       $a1, $zero, 0x70
    ctx->r5 = ADD32(0, 0X70);
    static_3_8021E87C(rdram, ctx);
        goto after_41;
    // 0x802BCC08: addiu       $a1, $zero, 0x70
    ctx->r5 = ADD32(0, 0X70);
    after_41:
    // 0x802BCC0C: lw          $t1, 0x78($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X78);
    // 0x802BCC10: jal         0x8023413C
    // 0x802BCC14: lw          $a0, 0x50($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X50);
    static_3_8023413C(rdram, ctx);
        goto after_42;
    // 0x802BCC14: lw          $a0, 0x50($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X50);
    after_42:
    // 0x802BCC18: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_802BCC1C:
    // 0x802BCC1C: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x802BCC20: jr          $ra
    // 0x802BCC24: nop

    return;
    // 0x802BCC24: nop

;}
RECOMP_FUNC void D_8023ED70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023ED70: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023ED74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023ED78: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8023ED7C: jal         0x80245AD0
    // 0x8023ED80: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_80245AD0(rdram, ctx);
        goto after_0;
    // 0x8023ED80: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x8023ED84: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8023ED88: lbu         $t6, 0x0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X0);
    // 0x8023ED8C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8023ED90: beq         $t6, $at, L_8023EDC4
    if (ctx->r14 == ctx->r1) {
        // 0x8023ED94: nop
    
            goto L_8023EDC4;
    }
    // 0x8023ED94: nop

    // 0x8023ED98: jal         0x8023EF2C
    // 0x8023ED9C: nop

    static_3_8023EF2C(rdram, ctx);
        goto after_1;
    // 0x8023ED9C: nop

    after_1:
    // 0x8023EDA0: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8023EDA4: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x8023EDA8: jal         0x802465B0
    // 0x8023EDAC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    static_3_802465B0(rdram, ctx);
        goto after_2;
    // 0x8023EDAC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x8023EDB0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8023EDB4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8023EDB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8023EDBC: jal         0x802374B0
    // 0x8023EDC0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_802374B0(rdram, ctx);
        goto after_3;
    // 0x8023EDC0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
L_8023EDC4:
    // 0x8023EDC4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
L_8023EDC8:
    // 0x8023EDC8: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8023EDCC: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x8023EDD0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8023EDD4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8023EDD8: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8023EDDC: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x8023EDE0: sw          $t7, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r15;
    // 0x8023EDE4: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x8023EDE8: slti        $at, $t1, 0x10
    ctx->r1 = SIGNED(ctx->r9) < 0X10 ? 1 : 0;
    // 0x8023EDEC: bne         $at, $zero, L_8023EDC8
    if (ctx->r1 != 0) {
        // 0x8023EDF0: sw          $t1, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r9;
            goto L_8023EDC8;
    }
    // 0x8023EDF0: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x8023EDF4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8023EDF8: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8023EDFC: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
    // 0x8023EE00: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x8023EE04: jal         0x802465B0
    // 0x8023EE08: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_802465B0(rdram, ctx);
        goto after_4;
    // 0x8023EE08: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_4:
    // 0x8023EE0C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8023EE10: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8023EE14: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8023EE18: jal         0x80245B14
    // 0x8023EE1C: sb          $t2, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r10;
    static_3_80245B14(rdram, ctx);
        goto after_5;
    // 0x8023EE1C: sb          $t2, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r10;
    after_5:
    // 0x8023EE20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023EE24: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x8023EE28: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8023EE2C: jr          $ra
    // 0x8023EE30: nop

    return;
    // 0x8023EE30: nop

;}
RECOMP_FUNC void D_802F2A3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802F2ABC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802F2AC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802F2AC4: jal         0x8028D9B4
    // 0x802F2AC8: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    static_3_8028D9B4(rdram, ctx);
        goto after_0;
    // 0x802F2AC8: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    after_0:
    // 0x802F2ACC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802F2AD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802F2AD4: jr          $ra
    // 0x802F2AD8: nop

    return;
    // 0x802F2AD8: nop

;}
RECOMP_FUNC void D_8020450C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8020450C: addiu       $sp, $sp, -0x170
    ctx->r29 = ADD32(ctx->r29, -0X170);
    // 0x80204510: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80204514: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80204518: jal         0x80204530
    // 0x8020451C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    static_3_80204530(rdram, ctx);
        goto after_0;
    // 0x8020451C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    after_0:
    // 0x80204520: jal         0x80204530
    // 0x80204524: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    static_3_80204530(rdram, ctx);
        goto after_1;
    // 0x80204524: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    after_1:
    // 0x80204528: lui         $a3, 0x8000
    ctx->r7 = S32(0X8000 << 16);
    // 0x8020452C: ori         $a3, $a3, 0x400
    ctx->r7 = ctx->r7 | 0X400;
    // 0x80204530: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80204534: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80204538: addu        $a2, $v0, $a3
    ctx->r6 = ADD32(ctx->r2, ctx->r7);
    // 0x8020453C: jal         0x80231A24
    // 0x80204540: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    static_3_80231A24(rdram, ctx);
        goto after_2;
    // 0x80204540: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    after_2:
    // 0x80204544: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x80204548: lhu         $a0, 0xC74($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XC74);
    // 0x8020454C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80204550: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x80204554: jal         0x8022BA58
    // 0x80204558: sll         $a0, $t6, 2
    ctx->r4 = S32(ctx->r14 << 2);
    static_3_8022BA58(rdram, ctx);
        goto after_3;
    // 0x80204558: sll         $a0, $t6, 2
    ctx->r4 = S32(ctx->r14 << 2);
    after_3:
    // 0x8020455C: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x80204560: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x80204564: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x80204568: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x8020456C: lhu         $a2, 0xC74($a2)
    ctx->r6 = MEM_HU(ctx->r6, 0XC74);
    // 0x80204570: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80204574: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80204578: sll         $t7, $a2, 2
    ctx->r15 = S32(ctx->r6 << 2);
    // 0x8020457C: addu        $t7, $t7, $a2
    ctx->r15 = ADD32(ctx->r15, ctx->r6);
    // 0x80204580: jal         0x8022B780
    // 0x80204584: sll         $a2, $t7, 2
    ctx->r6 = S32(ctx->r15 << 2);
    static_3_8022B780(rdram, ctx);
        goto after_4;
    // 0x80204584: sll         $a2, $t7, 2
    ctx->r6 = S32(ctx->r15 << 2);
    after_4:
    // 0x80204588: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x8020458C: lhu         $a0, 0xC74($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XC74);
    // 0x80204590: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x80204594: subu        $t8, $t8, $a0
    ctx->r24 = SUB32(ctx->r24, ctx->r4);
    // 0x80204598: jal         0x8022BA58
    // 0x8020459C: sll         $a0, $t8, 3
    ctx->r4 = S32(ctx->r24 << 3);
    static_3_8022BA58(rdram, ctx);
        goto after_5;
    // 0x8020459C: sll         $a0, $t8, 3
    ctx->r4 = S32(ctx->r24 << 3);
    after_5:
    // 0x802045A0: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x802045A4: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x802045A8: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x802045AC: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x802045B0: lhu         $a2, 0xC74($a2)
    ctx->r6 = MEM_HU(ctx->r6, 0XC74);
    // 0x802045B4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802045B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802045BC: sll         $t9, $a2, 2
    ctx->r25 = S32(ctx->r6 << 2);
    // 0x802045C0: subu        $t9, $t9, $a2
    ctx->r25 = SUB32(ctx->r25, ctx->r6);
    // 0x802045C4: jal         0x8022B780
    // 0x802045C8: sll         $a2, $t9, 3
    ctx->r6 = S32(ctx->r25 << 3);
    static_3_8022B780(rdram, ctx);
        goto after_6;
    // 0x802045C8: sll         $a2, $t9, 3
    ctx->r6 = S32(ctx->r25 << 3);
    after_6:
    // 0x802045CC: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x802045D0: lhu         $a0, 0xC74($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XC74);
    // 0x802045D4: sll         $t0, $a0, 2
    ctx->r8 = S32(ctx->r4 << 2);
    // 0x802045D8: jal         0x8022BA58
    // 0x802045DC: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    static_3_8022BA58(rdram, ctx);
        goto after_7;
    // 0x802045DC: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_7:
    // 0x802045E0: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x802045E4: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x802045E8: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x802045EC: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x802045F0: lhu         $a2, 0xC74($a2)
    ctx->r6 = MEM_HU(ctx->r6, 0XC74);
    // 0x802045F4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802045F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802045FC: sll         $t1, $a2, 2
    ctx->r9 = S32(ctx->r6 << 2);
    // 0x80204600: jal         0x8022B780
    // 0x80204604: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    static_3_8022B780(rdram, ctx);
        goto after_8;
    // 0x80204604: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    after_8:
    // 0x80204608: jal         0x802011EC
    // 0x8020460C: nop

    static_3_802011EC(rdram, ctx);
        goto after_9;
    // 0x8020460C: nop

    after_9:
    // 0x80204610: jal         0x802000A0
    // 0x80204614: nop

    func_802000A0(rdram, ctx);
        goto after_10;
    // 0x80204614: nop

    after_10:
    // 0x80204618: jal         0x80203930
    // 0x8020461C: nop

    static_3_80203930(rdram, ctx);
        goto after_11;
    // 0x8020461C: nop

    after_11:
    // 0x80204620: jal         0x80204530
    // 0x80204624: nop

    static_3_80204530(rdram, ctx);
        goto after_12;
    // 0x80204624: nop

    after_12:
    // 0x80204628: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8020462C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x80204630: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80204634: jal         0x8022B780
    // 0x80204638: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    static_3_8022B780(rdram, ctx);
        goto after_13;
    // 0x80204638: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    after_13:
    // 0x8020463C: jal         0x80204530
    // 0x80204640: nop

    static_3_80204530(rdram, ctx);
        goto after_14;
    // 0x80204640: nop

    after_14:
    // 0x80204644: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80204648: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8020464C: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
    // 0x80204650: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80204654: jal         0x80235200
    // 0x80204658: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    static_3_80235200(rdram, ctx);
        goto after_15;
    // 0x80204658: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    after_15:
    // 0x8020465C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80204660: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80204664: addiu       $t2, $zero, 0x6
    ctx->r10 = ADD32(0, 0X6);
    // 0x80204668: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x8020466C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80204670: addiu       $v1, $zero, 0x100
    ctx->r3 = ADD32(0, 0X100);
    // 0x80204674: addiu       $t3, $t3, 0x0
    ctx->r11 = ADD32(ctx->r11, 0X0);
    // 0x80204678: andi        $t4, $t2, 0xFF
    ctx->r12 = ctx->r10 & 0XFF;
    // 0x8020467C: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80204680: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x80204684: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x80204688: sw          $v1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r3;
    // 0x8020468C: sw          $zero, 0x10($a0)
    MEM_W(0X10, ctx->r4) = 0;
    // 0x80204690: sb          $t2, 0x1C($a0)
    MEM_B(0X1C, ctx->r4) = ctx->r10;
    // 0x80204694: sw          $zero, 0x18($a0)
    MEM_W(0X18, ctx->r4) = 0;
    // 0x80204698: bne         $t4, $at, L_802046DC
    if (ctx->r12 != ctx->r1) {
        // 0x8020469C: sw          $t3, 0x14($a0)
        MEM_W(0X14, ctx->r4) = ctx->r11;
            goto L_802046DC;
    }
    // 0x8020469C: sw          $t3, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r11;
    // 0x802046A0: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x802046A4: addiu       $v0, $sp, 0x58
    ctx->r2 = ADD32(ctx->r29, 0X58);
    // 0x802046A8: addiu       $t5, $t5, 0x0
    ctx->r13 = ADD32(ctx->r13, 0X0);
    // 0x802046AC: addiu       $t7, $t5, 0x108
    ctx->r15 = ADD32(ctx->r13, 0X108);
    // 0x802046B0: or          $t8, $v0, $zero
    ctx->r24 = ctx->r2 | 0;
L_802046B4:
    // 0x802046B4: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x802046B8: addiu       $t5, $t5, 0xC
    ctx->r13 = ADD32(ctx->r13, 0XC);
    // 0x802046BC: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x802046C0: sw          $at, -0xC($t8)
    MEM_W(-0XC, ctx->r24) = ctx->r1;
    // 0x802046C4: lw          $at, -0x8($t5)
    ctx->r1 = MEM_W(ctx->r13, -0X8);
    // 0x802046C8: sw          $at, -0x8($t8)
    MEM_W(-0X8, ctx->r24) = ctx->r1;
    // 0x802046CC: lw          $at, -0x4($t5)
    ctx->r1 = MEM_W(ctx->r13, -0X4);
    // 0x802046D0: bne         $t5, $t7, L_802046B4
    if (ctx->r13 != ctx->r15) {
        // 0x802046D4: sw          $at, -0x4($t8)
        MEM_W(-0X4, ctx->r24) = ctx->r1;
            goto L_802046B4;
    }
    // 0x802046D4: sw          $at, -0x4($t8)
    MEM_W(-0X4, ctx->r24) = ctx->r1;
    // 0x802046D8: sw          $v0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r2;
L_802046DC:
    // 0x802046DC: jal         0x802048EC
    // 0x802046E0: addiu       $a1, $zero, 0x6E
    ctx->r5 = ADD32(0, 0X6E);
    static_3_802048EC(rdram, ctx);
        goto after_16;
    // 0x802046E0: addiu       $a1, $zero, 0x6E
    ctx->r5 = ADD32(0, 0X6E);
    after_16:
    // 0x802046E4: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802046E8: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802046EC: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802046F0: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802046F4: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x802046F8: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x802046FC: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80204700: addiu       $v1, $zero, 0x100
    ctx->r3 = ADD32(0, 0X100);
    // 0x80204704: addiu       $t9, $zero, 0x10
    ctx->r25 = ADD32(0, 0X10);
    // 0x80204708: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x8020470C: sw          $v1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r3;
    // 0x80204710: sb          $t9, 0x8($a2)
    MEM_B(0X8, ctx->r6) = ctx->r25;
    // 0x80204714: sw          $a3, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->r7;
    // 0x80204718: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x8020471C: sw          $v1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r3;
    // 0x80204720: sw          $a3, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r7;
    // 0x80204724: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80204728: jal         0x80235814
    // 0x8020472C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    static_3_80235814(rdram, ctx);
        goto after_17;
    // 0x8020472C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    after_17:
    // 0x80204730: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x80204734: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80204738: addiu       $a1, $a2, 0x0
    ctx->r5 = ADD32(ctx->r6, 0X0);
    // 0x8020473C: jal         0x80236A10
    // 0x80204740: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    static_3_80236A10(rdram, ctx);
        goto after_18;
    // 0x80204740: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    after_18:
    // 0x80204744: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80204748: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8020474C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80204750: jal         0x80236B80
    // 0x80204754: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_80236B80(rdram, ctx);
        goto after_19;
    // 0x80204754: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_19:
    // 0x80204758: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8020475C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x80204760: beq         $a0, $zero, L_8020487C
    if (ctx->r4 == 0) {
        // 0x80204764: nop
    
            goto L_8020487C;
    }
    // 0x80204764: nop

    // 0x80204768: jal         0x80223840
    // 0x8020476C: nop

    func_80223840(rdram, ctx);
        goto after_20;
    // 0x8020476C: nop

    after_20:
    // 0x80204770: lui         $a3, 0x5345
    ctx->r7 = S32(0X5345 << 16);
    // 0x80204774: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x80204778: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    // 0x8020477C: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x80204780: ori         $a3, $a3, 0x5153
    ctx->r7 = ctx->r7 | 0X5153;
    // 0x80204784: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80204788: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8020478C: addiu       $a2, $sp, 0x16C
    ctx->r6 = ADD32(ctx->r29, 0X16C);
    // 0x80204790: jal         0x80223B30
    // 0x80204794: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_80223B30(rdram, ctx);
        goto after_21;
    // 0x80204794: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_21:
    // 0x80204798: jal         0x802238F0
    // 0x8020479C: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    static_3_802238F0(rdram, ctx);
        goto after_22;
    // 0x8020479C: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    after_22:
    // 0x802047A0: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x802047A4: lw          $a1, 0x16C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X16C);
    // 0x802047A8: jal         0x8022B460
    // 0x802047AC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_8022B460(rdram, ctx);
        goto after_23;
    // 0x802047AC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_23:
    // 0x802047B0: lh          $v0, 0x4A($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X4A);
    // 0x802047B4: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802047B8: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802047BC: sll         $t1, $v0, 3
    ctx->r9 = S32(ctx->r2 << 3);
    // 0x802047C0: addiu       $v0, $t1, 0x4
    ctx->r2 = ADD32(ctx->r9, 0X4);
    // 0x802047C4: sw          $v0, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->r2;
    // 0x802047C8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x802047CC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802047D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802047D4: jal         0x80236CD0
    // 0x802047D8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    static_3_80236CD0(rdram, ctx);
        goto after_24;
    // 0x802047D8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_24:
    // 0x802047DC: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x802047E0: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x802047E4: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x802047E8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802047EC: lw          $a1, 0x16C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X16C);
    // 0x802047F0: jal         0x8022B460
    // 0x802047F4: lw          $a2, 0x168($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X168);
    func_8022B460(rdram, ctx);
        goto after_25;
    // 0x802047F4: lw          $a2, 0x168($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X168);
    after_25:
    // 0x802047F8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802047FC: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x80204800: jal         0x80236F38
    // 0x80204804: lw          $a1, 0x16C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X16C);
    static_3_80236F38(rdram, ctx);
        goto after_26;
    // 0x80204804: lw          $a1, 0x16C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X16C);
    after_26:
    // 0x80204808: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8020480C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x80204810: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80204814: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80204818: lh          $a2, 0x2($a0)
    ctx->r6 = MEM_H(ctx->r4, 0X2);
    // 0x8020481C: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x80204820: blez        $a2, L_8020484C
    if (SIGNED(ctx->r6) <= 0) {
        // 0x80204824: sll         $a1, $a2, 3
        ctx->r5 = S32(ctx->r6 << 3);
            goto L_8020484C;
    }
    // 0x80204824: sll         $a1, $a2, 3
    ctx->r5 = S32(ctx->r6 << 3);
L_80204828:
    // 0x80204828: lw          $a0, 0x8($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X8);
    // 0x8020482C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80204830: slt         $at, $a0, $s0
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x80204834: bnel        $at, $zero, L_80204844
    if (ctx->r1 != 0) {
        // 0x80204838: slt         $at, $v0, $a1
        ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
            goto L_80204844;
    }
    goto skip_0;
    // 0x80204838: slt         $at, $v0, $a1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    skip_0:
    // 0x8020483C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80204840: slt         $at, $v0, $a1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
L_80204844:
    // 0x80204844: bne         $at, $zero, L_80204828
    if (ctx->r1 != 0) {
        // 0x80204848: addiu       $v1, $v1, 0x8
        ctx->r3 = ADD32(ctx->r3, 0X8);
            goto L_80204828;
    }
    // 0x80204848: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
L_8020484C:
    // 0x8020484C: andi        $t2, $s0, 0x1
    ctx->r10 = ctx->r16 & 0X1;
    // 0x80204850: beq         $t2, $zero, L_8020485C
    if (ctx->r10 == 0) {
        // 0x80204854: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_8020485C;
    }
    // 0x80204854: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80204858: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8020485C:
    // 0x8020485C: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x80204860: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x80204864: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80204868: jal         0x80236CD0
    // 0x8020486C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    static_3_80236CD0(rdram, ctx);
        goto after_27;
    // 0x8020486C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_27:
    // 0x80204870: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80204874: b           L_80204888
    // 0x80204878: sw          $v0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r2;
        goto L_80204888;
    // 0x80204878: sw          $v0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r2;
L_8020487C:
    // 0x8020487C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80204880: jal         0x80231A24
    // 0x80204884: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_28;
    // 0x80204884: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_28:
L_80204888:
    // 0x80204888: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8020488C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80204890: addiu       $sp, $sp, 0x170
    ctx->r29 = ADD32(ctx->r29, 0X170);
    // 0x80204894: jr          $ra
    // 0x80204898: nop

    return;
    // 0x80204898: nop

;}
RECOMP_FUNC void D_802CAA1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802CAA9C: jr          $ra
    // 0x802CAAA0: lh          $v0, 0x54($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X54);
    return;
    // 0x802CAAA0: lh          $v0, 0x54($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X54);
;}
RECOMP_FUNC void D_80282454(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802824D4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802824D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802824DC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x802824E0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x802824E4: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x802824E8: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x802824EC: addiu       $t6, $a0, 0x7FFF
    ctx->r14 = ADD32(ctx->r4, 0X7FFF);
    // 0x802824F0: lbu         $t6, 0x6DB5($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X6DB5);
    // 0x802824F4: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x802824F8: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x802824FC: bne         $t6, $zero, L_8028258C
    if (ctx->r14 != 0) {
        // 0x80282500: addiu       $v0, $s1, 0x7FFF
        ctx->r2 = ADD32(ctx->r17, 0X7FFF);
            goto L_8028258C;
    }
    // 0x80282500: addiu       $v0, $s1, 0x7FFF
    ctx->r2 = ADD32(ctx->r17, 0X7FFF);
    // 0x80282504: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x80282508: lwc1        $f4, -0x1250($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1250);
    // 0x8028250C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80282510: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80282514: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x80282518: addiu       $t7, $a0, 0x7FFF
    ctx->r15 = ADD32(ctx->r4, 0X7FFF);
    // 0x8028251C: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x80282520: addu        $v0, $s1, $at
    ctx->r2 = ADD32(ctx->r17, ctx->r1);
    // 0x80282524: lwc1        $f16, 0x40($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80282528: bc1fl       L_80282578
    if (!c1cs) {
        // 0x8028252C: lwc1        $f10, 0x6DB0($v0)
        ctx->f10.u32l = MEM_W(ctx->r2, 0X6DB0);
            goto L_80282578;
    }
    goto skip_0;
    // 0x8028252C: lwc1        $f10, 0x6DB0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X6DB0);
    skip_0:
    // 0x80282530: lbu         $t7, 0x6DAD($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X6DAD);
    // 0x80282534: addiu       $at, $a0, 0x7FFF
    ctx->r1 = ADD32(ctx->r4, 0X7FFF);
    // 0x80282538: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8028253C: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80282540: sb          $t8, 0x6DAD($at)
    MEM_B(0X6DAD, ctx->r1) = ctx->r24;
    // 0x80282544: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x80282548: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x8028254C: jal         0x802B2448
    // 0x80282550: swc1        $f8, -0x1250($at)
    MEM_W(-0X1250, ctx->r1) = ctx->f8.u32l;
    static_3_802B2448(rdram, ctx);
        goto after_0;
    // 0x80282550: swc1        $f8, -0x1250($at)
    MEM_W(-0X1250, ctx->r1) = ctx->f8.u32l;
    after_0:
    // 0x80282554: addiu       $t9, $s1, 0x7FFF
    ctx->r25 = ADD32(ctx->r17, 0X7FFF);
    // 0x80282558: lbu         $t9, 0x6DAD($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X6DAD);
    // 0x8028255C: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80282560: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80282564: bne         $t9, $at, L_80282580
    if (ctx->r25 != ctx->r1) {
        // 0x80282568: addiu       $at, $s1, 0x7FFF
        ctx->r1 = ADD32(ctx->r17, 0X7FFF);
            goto L_80282580;
    }
    // 0x80282568: addiu       $at, $s1, 0x7FFF
    ctx->r1 = ADD32(ctx->r17, 0X7FFF);
    // 0x8028256C: b           L_80282580
    // 0x80282570: sb          $t0, 0x6DB5($at)
    MEM_B(0X6DB5, ctx->r1) = ctx->r8;
        goto L_80282580;
    // 0x80282570: sb          $t0, 0x6DB5($at)
    MEM_B(0X6DB5, ctx->r1) = ctx->r8;
    // 0x80282574: lwc1        $f10, 0x6DB0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X6DB0);
L_80282578:
    // 0x80282578: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8028257C: swc1        $f18, 0x6DB0($v0)
    MEM_W(0X6DB0, ctx->r2) = ctx->f18.u32l;
L_80282580:
    // 0x80282580: addiu       $v0, $s1, 0x7FFF
    ctx->r2 = ADD32(ctx->r17, 0X7FFF);
    // 0x80282584: b           L_80282680
    // 0x80282588: lbu         $v0, 0x6DB6($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X6DB6);
        goto L_80282680;
    // 0x80282588: lbu         $v0, 0x6DB6($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X6DB6);
L_8028258C:
    // 0x8028258C: lbu         $v0, 0x6DB6($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X6DB6);
    // 0x80282590: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80282594: bne         $v0, $zero, L_80282680
    if (ctx->r2 != 0) {
        // 0x80282598: nop
    
            goto L_80282680;
    }
    // 0x80282598: nop

    // 0x8028259C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802825A0: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x802825A4: addu        $at, $at, $s1
    ctx->r1 = ADD32(ctx->r1, ctx->r17);
    // 0x802825A8: lwc1        $f6, -0x1248($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1248);
    // 0x802825AC: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x802825B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802825B4: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x802825B8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x802825BC: addiu       $s0, $s1, 0x5C8
    ctx->r16 = ADD32(ctx->r17, 0X5C8);
    // 0x802825C0: addu        $v0, $s1, $at
    ctx->r2 = ADD32(ctx->r17, ctx->r1);
    // 0x802825C4: bc1f        L_8028266C
    if (!c1cs) {
        // 0x802825C8: lwc1        $f8, 0x40($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
            goto L_8028266C;
    }
    // 0x802825C8: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
L_802825CC:
    // 0x802825CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802825D0: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    // 0x802825D4: jal         0x80317E10
    // 0x802825D8: sb          $a1, 0x33($sp)
    MEM_B(0X33, ctx->r29) = ctx->r5;
    static_3_80317E10(rdram, ctx);
        goto after_1;
    // 0x802825D8: sb          $a1, 0x33($sp)
    MEM_B(0X33, ctx->r29) = ctx->r5;
    after_1:
    // 0x802825DC: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x802825E0: beq         $v0, $zero, L_802825EC
    if (ctx->r2 == 0) {
        // 0x802825E4: lbu         $a1, 0x33($sp)
        ctx->r5 = MEM_BU(ctx->r29, 0X33);
            goto L_802825EC;
    }
    // 0x802825E4: lbu         $a1, 0x33($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X33);
    // 0x802825E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_802825EC:
    // 0x802825EC: addiu       $v1, $v1, 0x6A0
    ctx->r3 = ADD32(ctx->r3, 0X6A0);
    // 0x802825F0: ori         $at, $zero, 0xE7E0
    ctx->r1 = 0 | 0XE7E0;
    // 0x802825F4: bne         $v1, $at, L_802825CC
    if (ctx->r3 != ctx->r1) {
        // 0x802825F8: addiu       $s0, $s0, 0x6A0
        ctx->r16 = ADD32(ctx->r16, 0X6A0);
            goto L_802825CC;
    }
    // 0x802825F8: addiu       $s0, $s0, 0x6A0
    ctx->r16 = ADD32(ctx->r16, 0X6A0);
    // 0x802825FC: beq         $a1, $zero, L_8028265C
    if (ctx->r5 == 0) {
        // 0x80282600: lui         $at, 0x1
        ctx->r1 = S32(0X1 << 16);
            goto L_8028265C;
    }
    // 0x80282600: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x80282604: jal         0x80309740
    // 0x80282608: lwc1        $f12, 0x3C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X3C);
    static_3_80309740(rdram, ctx);
        goto after_2;
    // 0x80282608: lwc1        $f12, 0x3C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X3C);
    after_2:
    // 0x8028260C: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x80282610: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80282614: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80282618: lwc1        $f0, 0x32AC($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X32AC);
    // 0x8028261C: addiu       $v1, $a0, 0x6D0
    ctx->r3 = ADD32(ctx->r4, 0X6D0);
    // 0x80282620: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80282624: sub.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x80282628: swc1        $f10, 0x170($v1)
    MEM_W(0X170, ctx->r3) = ctx->f10.u32l;
    // 0x8028262C: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x80282630: lwc1        $f0, 0x32AC($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X32AC);
    // 0x80282634: add.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f16.fl;
    // 0x80282638: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x8028263C: jal         0x802B0078
    // 0x80282640: nop

    static_3_802B0078(rdram, ctx);
        goto after_3;
    // 0x80282640: nop

    after_3:
    // 0x80282644: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x80282648: addiu       $at, $s1, 0x7FFF
    ctx->r1 = ADD32(ctx->r17, 0X7FFF);
    // 0x8028264C: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x80282650: sb          $t1, 0x6DB6($at)
    MEM_B(0X6DB6, ctx->r1) = ctx->r9;
    // 0x80282654: b           L_80282678
    // 0x80282658: sb          $t2, 0x6DB7($at)
    MEM_B(0X6DB7, ctx->r1) = ctx->r10;
        goto L_80282678;
    // 0x80282658: sb          $t2, 0x6DB7($at)
    MEM_B(0X6DB7, ctx->r1) = ctx->r10;
L_8028265C:
    // 0x8028265C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80282660: addu        $at, $at, $s1
    ctx->r1 = ADD32(ctx->r1, ctx->r17);
    // 0x80282664: b           L_80282678
    // 0x80282668: swc1        $f4, -0x1248($at)
    MEM_W(-0X1248, ctx->r1) = ctx->f4.u32l;
        goto L_80282678;
    // 0x80282668: swc1        $f4, -0x1248($at)
    MEM_W(-0X1248, ctx->r1) = ctx->f4.u32l;
L_8028266C:
    // 0x8028266C: lwc1        $f6, 0x6DB8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X6DB8);
    // 0x80282670: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80282674: swc1        $f10, 0x6DB8($v0)
    MEM_W(0X6DB8, ctx->r2) = ctx->f10.u32l;
L_80282678:
    // 0x80282678: addiu       $v0, $s1, 0x7FFF
    ctx->r2 = ADD32(ctx->r17, 0X7FFF);
    // 0x8028267C: lbu         $v0, 0x6DB6($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X6DB6);
L_80282680:
    // 0x80282680: bne         $v0, $zero, L_8028271C
    if (ctx->r2 != 0) {
        // 0x80282684: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_8028271C;
    }
    // 0x80282684: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80282688: lbu         $t3, 0x5C5($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0X5C5);
    // 0x8028268C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80282690: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80282694: beq         $t3, $zero, L_802826B0
    if (ctx->r11 == 0) {
        // 0x80282698: lwc1        $f18, 0x3C($sp)
        ctx->f18.u32l = MEM_W(ctx->r29, 0X3C);
            goto L_802826B0;
    }
    // 0x80282698: lwc1        $f18, 0x3C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8028269C: addiu       $at, $s1, 0x7FFF
    ctx->r1 = ADD32(ctx->r17, 0X7FFF);
    // 0x802826A0: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x802826A4: sb          $t4, 0x6DB6($at)
    MEM_B(0X6DB6, ctx->r1) = ctx->r12;
    // 0x802826A8: b           L_80282748
    // 0x802826AC: sb          $t5, 0x6DB7($at)
    MEM_B(0X6DB7, ctx->r1) = ctx->r13;
        goto L_80282748;
    // 0x802826AC: sb          $t5, 0x6DB7($at)
    MEM_B(0X6DB7, ctx->r1) = ctx->r13;
L_802826B0:
    // 0x802826B0: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802826B4: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x802826B8: nop

    // 0x802826BC: bc1fl       L_8028274C
    if (!c1cs) {
        // 0x802826C0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8028274C;
    }
    goto skip_1;
    // 0x802826C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x802826C4: jal         0x80309740
    // 0x802826C8: mov.s       $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = ctx->f18.fl;
    static_3_80309740(rdram, ctx);
        goto after_4;
    // 0x802826C8: mov.s       $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = ctx->f18.fl;
    after_4:
    // 0x802826CC: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x802826D0: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x802826D4: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x802826D8: lwc1        $f0, 0x32AC($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X32AC);
    // 0x802826DC: addiu       $v1, $a0, 0x6D0
    ctx->r3 = ADD32(ctx->r4, 0X6D0);
    // 0x802826E0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802826E4: sub.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x802826E8: swc1        $f6, 0x170($v1)
    MEM_W(0X170, ctx->r3) = ctx->f6.u32l;
    // 0x802826EC: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x802826F0: lwc1        $f0, 0x32AC($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X32AC);
    // 0x802826F4: add.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x802826F8: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x802826FC: jal         0x802B0078
    // 0x80282700: nop

    static_3_802B0078(rdram, ctx);
        goto after_5;
    // 0x80282700: nop

    after_5:
    // 0x80282704: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80282708: addiu       $at, $s1, 0x7FFF
    ctx->r1 = ADD32(ctx->r17, 0X7FFF);
    // 0x8028270C: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x80282710: sb          $t6, 0x6DB6($at)
    MEM_B(0X6DB6, ctx->r1) = ctx->r14;
    // 0x80282714: b           L_80282748
    // 0x80282718: sb          $t7, 0x6DB7($at)
    MEM_B(0X6DB7, ctx->r1) = ctx->r15;
        goto L_80282748;
    // 0x80282718: sb          $t7, 0x6DB7($at)
    MEM_B(0X6DB7, ctx->r1) = ctx->r15;
L_8028271C:
    // 0x8028271C: bne         $v0, $at, L_80282734
    if (ctx->r2 != ctx->r1) {
        // 0x80282720: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80282734;
    }
    // 0x80282720: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80282724: jal         0x802B2854
    // 0x80282728: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    static_3_802B2854(rdram, ctx);
        goto after_6;
    // 0x80282728: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    after_6:
    // 0x8028272C: b           L_8028274C
    // 0x80282730: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8028274C;
    // 0x80282730: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80282734:
    // 0x80282734: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80282738: bne         $v0, $at, L_80282748
    if (ctx->r2 != ctx->r1) {
        // 0x8028273C: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80282748;
    }
    // 0x8028273C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80282740: jal         0x802B2730
    // 0x80282744: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    static_3_802B2730(rdram, ctx);
        goto after_7;
    // 0x80282744: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    after_7:
L_80282748:
    // 0x80282748: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8028274C:
    // 0x8028274C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80282750: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80282754: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80282758: jr          $ra
    // 0x8028275C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8028275C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void D_802D7FF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D8074: jr          $ra
    // 0x802D8078: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x802D8078: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void D_80208E28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80208E28: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80208E2C: sll         $t6, $a0, 0
    ctx->r14 = S32(ctx->r4 << 0);
    // 0x80208E30: sw          $a1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r5;
    // 0x80208E34: sw          $a2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r6;
    // 0x80208E38: sw          $a3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r7;
    // 0x80208E3C: bgez        $t6, L_80208E7C
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80208E40: addiu       $v0, $sp, 0x10
        ctx->r2 = ADD32(ctx->r29, 0X10);
            goto L_80208E7C;
    }
    // 0x80208E40: addiu       $v0, $sp, 0x10
    ctx->r2 = ADD32(ctx->r29, 0X10);
    // 0x80208E44: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80208E48: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x80208E4C: lui         $at, 0x7FFF
    ctx->r1 = S32(0X7FFF << 16);
    // 0x80208E50: and         $t9, $a0, $at
    ctx->r25 = ctx->r4 & ctx->r1;
    // 0x80208E54: lw          $t8, 0x24($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X24);
    // 0x80208E58: srl         $t0, $t9, 16
    ctx->r8 = S32(U32(ctx->r25) >> 16);
    // 0x80208E5C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80208E60: addu        $t2, $t8, $t1
    ctx->r10 = ADD32(ctx->r24, ctx->r9);
    // 0x80208E64: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x80208E68: andi        $t5, $a0, 0xFFFF
    ctx->r13 = ctx->r4 & 0XFFFF;
    // 0x80208E6C: sll         $t6, $t5, 4
    ctx->r14 = S32(ctx->r13 << 4);
    // 0x80208E70: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x80208E74: b           L_80208EB0
    // 0x80208E78: addu        $v1, $t4, $t6
    ctx->r3 = ADD32(ctx->r12, ctx->r14);
        goto L_80208EB0;
    // 0x80208E78: addu        $v1, $t4, $t6
    ctx->r3 = ADD32(ctx->r12, ctx->r14);
L_80208E7C:
    // 0x80208E7C: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80208E80: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x80208E84: lui         $at, 0x7FFF
    ctx->r1 = S32(0X7FFF << 16);
    // 0x80208E88: and         $t0, $a0, $at
    ctx->r8 = ctx->r4 & ctx->r1;
    // 0x80208E8C: lw          $t9, 0x1C($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X1C);
    // 0x80208E90: srl         $t8, $t0, 16
    ctx->r24 = S32(U32(ctx->r8) >> 16);
    // 0x80208E94: sll         $t1, $t8, 2
    ctx->r9 = S32(ctx->r24 << 2);
    // 0x80208E98: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x80208E9C: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x80208EA0: andi        $t4, $a0, 0xFFFF
    ctx->r12 = ctx->r4 & 0XFFFF;
    // 0x80208EA4: sll         $t6, $t4, 4
    ctx->r14 = S32(ctx->r12 << 4);
    // 0x80208EA8: lw          $t5, 0x0($t3)
    ctx->r13 = MEM_W(ctx->r11, 0X0);
    // 0x80208EAC: addu        $v1, $t5, $t6
    ctx->r3 = ADD32(ctx->r13, ctx->r14);
L_80208EB0:
    // 0x80208EB0: lw          $t7, 0xC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC);
    // 0x80208EB4: addiu       $a0, $zero, -0x4
    ctx->r4 = ADD32(0, -0X4);
    // 0x80208EB8: addiu       $t8, $sp, 0x13
    ctx->r24 = ADD32(ctx->r29, 0X13);
    // 0x80208EBC: andi        $t0, $t7, 0x1
    ctx->r8 = ctx->r15 & 0X1;
    // 0x80208EC0: beql        $t0, $zero, L_80208EE0
    if (ctx->r8 == 0) {
        // 0x80208EC4: lw          $t2, 0xC($sp)
        ctx->r10 = MEM_W(ctx->r29, 0XC);
            goto L_80208EE0;
    }
    goto skip_0;
    // 0x80208EC4: lw          $t2, 0xC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC);
    skip_0:
    // 0x80208EC8: and         $v0, $t8, $a0
    ctx->r2 = ctx->r24 & ctx->r4;
    // 0x80208ECC: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x80208ED0: lh          $t9, 0x0($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X0);
    // 0x80208ED4: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80208ED8: sh          $t9, 0x0($t1)
    MEM_H(0X0, ctx->r9) = ctx->r25;
    // 0x80208EDC: lw          $t2, 0xC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC);
L_80208EE0:
    // 0x80208EE0: addiu       $a0, $zero, -0x4
    ctx->r4 = ADD32(0, -0X4);
    // 0x80208EE4: addiu       $t4, $v0, 0x3
    ctx->r12 = ADD32(ctx->r2, 0X3);
    // 0x80208EE8: andi        $t3, $t2, 0x2
    ctx->r11 = ctx->r10 & 0X2;
    // 0x80208EEC: beql        $t3, $zero, L_80208F0C
    if (ctx->r11 == 0) {
        // 0x80208EF0: lw          $t7, 0xC($sp)
        ctx->r15 = MEM_W(ctx->r29, 0XC);
            goto L_80208F0C;
    }
    goto skip_1;
    // 0x80208EF0: lw          $t7, 0xC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC);
    skip_1:
    // 0x80208EF4: and         $v0, $t4, $a0
    ctx->r2 = ctx->r12 & ctx->r4;
    // 0x80208EF8: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80208EFC: lh          $t5, 0x2($v1)
    ctx->r13 = MEM_H(ctx->r3, 0X2);
    // 0x80208F00: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80208F04: sh          $t5, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r13;
    // 0x80208F08: lw          $t7, 0xC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC);
L_80208F0C:
    // 0x80208F0C: addiu       $t8, $v0, 0x3
    ctx->r24 = ADD32(ctx->r2, 0X3);
    // 0x80208F10: andi        $t0, $t7, 0x4
    ctx->r8 = ctx->r15 & 0X4;
    // 0x80208F14: beql        $t0, $zero, L_80208F34
    if (ctx->r8 == 0) {
        // 0x80208F18: lw          $t2, 0xC($sp)
        ctx->r10 = MEM_W(ctx->r29, 0XC);
            goto L_80208F34;
    }
    goto skip_2;
    // 0x80208F18: lw          $t2, 0xC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC);
    skip_2:
    // 0x80208F1C: and         $v0, $t8, $a0
    ctx->r2 = ctx->r24 & ctx->r4;
    // 0x80208F20: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x80208F24: lh          $t9, 0x4($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X4);
    // 0x80208F28: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80208F2C: sh          $t9, 0x0($t1)
    MEM_H(0X0, ctx->r9) = ctx->r25;
    // 0x80208F30: lw          $t2, 0xC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC);
L_80208F34:
    // 0x80208F34: addiu       $t4, $v0, 0x3
    ctx->r12 = ADD32(ctx->r2, 0X3);
    // 0x80208F38: andi        $t3, $t2, 0x8
    ctx->r11 = ctx->r10 & 0X8;
    // 0x80208F3C: beql        $t3, $zero, L_80208F5C
    if (ctx->r11 == 0) {
        // 0x80208F40: lw          $t7, 0xC($sp)
        ctx->r15 = MEM_W(ctx->r29, 0XC);
            goto L_80208F5C;
    }
    goto skip_3;
    // 0x80208F40: lw          $t7, 0xC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC);
    skip_3:
    // 0x80208F44: and         $v0, $t4, $a0
    ctx->r2 = ctx->r12 & ctx->r4;
    // 0x80208F48: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80208F4C: lh          $t5, 0x8($v1)
    ctx->r13 = MEM_H(ctx->r3, 0X8);
    // 0x80208F50: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80208F54: sh          $t5, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r13;
    // 0x80208F58: lw          $t7, 0xC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC);
L_80208F5C:
    // 0x80208F5C: addiu       $t8, $v0, 0x3
    ctx->r24 = ADD32(ctx->r2, 0X3);
    // 0x80208F60: andi        $t0, $t7, 0x10
    ctx->r8 = ctx->r15 & 0X10;
    // 0x80208F64: beql        $t0, $zero, L_80208F84
    if (ctx->r8 == 0) {
        // 0x80208F68: lw          $t2, 0xC($sp)
        ctx->r10 = MEM_W(ctx->r29, 0XC);
            goto L_80208F84;
    }
    goto skip_4;
    // 0x80208F68: lw          $t2, 0xC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC);
    skip_4:
    // 0x80208F6C: and         $v0, $t8, $a0
    ctx->r2 = ctx->r24 & ctx->r4;
    // 0x80208F70: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x80208F74: lh          $t9, 0xA($v1)
    ctx->r25 = MEM_H(ctx->r3, 0XA);
    // 0x80208F78: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80208F7C: sh          $t9, 0x0($t1)
    MEM_H(0X0, ctx->r9) = ctx->r25;
    // 0x80208F80: lw          $t2, 0xC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC);
L_80208F84:
    // 0x80208F84: addiu       $t4, $v0, 0x3
    ctx->r12 = ADD32(ctx->r2, 0X3);
    // 0x80208F88: andi        $t3, $t2, 0x20
    ctx->r11 = ctx->r10 & 0X20;
    // 0x80208F8C: beql        $t3, $zero, L_80208FAC
    if (ctx->r11 == 0) {
        // 0x80208F90: lw          $t7, 0xC($sp)
        ctx->r15 = MEM_W(ctx->r29, 0XC);
            goto L_80208FAC;
    }
    goto skip_5;
    // 0x80208F90: lw          $t7, 0xC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC);
    skip_5:
    // 0x80208F94: and         $v0, $t4, $a0
    ctx->r2 = ctx->r12 & ctx->r4;
    // 0x80208F98: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80208F9C: lbu         $t5, 0xC($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0XC);
    // 0x80208FA0: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80208FA4: sb          $t5, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r13;
    // 0x80208FA8: lw          $t7, 0xC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC);
L_80208FAC:
    // 0x80208FAC: addiu       $t8, $v0, 0x3
    ctx->r24 = ADD32(ctx->r2, 0X3);
    // 0x80208FB0: andi        $t0, $t7, 0x40
    ctx->r8 = ctx->r15 & 0X40;
    // 0x80208FB4: beql        $t0, $zero, L_80208FD4
    if (ctx->r8 == 0) {
        // 0x80208FB8: lw          $t2, 0xC($sp)
        ctx->r10 = MEM_W(ctx->r29, 0XC);
            goto L_80208FD4;
    }
    goto skip_6;
    // 0x80208FB8: lw          $t2, 0xC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC);
    skip_6:
    // 0x80208FBC: and         $v0, $t8, $a0
    ctx->r2 = ctx->r24 & ctx->r4;
    // 0x80208FC0: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x80208FC4: lbu         $t9, 0xD($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0XD);
    // 0x80208FC8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80208FCC: sb          $t9, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r25;
    // 0x80208FD0: lw          $t2, 0xC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC);
L_80208FD4:
    // 0x80208FD4: addiu       $t4, $v0, 0x3
    ctx->r12 = ADD32(ctx->r2, 0X3);
    // 0x80208FD8: andi        $t3, $t2, 0x80
    ctx->r11 = ctx->r10 & 0X80;
    // 0x80208FDC: beql        $t3, $zero, L_80208FFC
    if (ctx->r11 == 0) {
        // 0x80208FE0: lw          $t7, 0xC($sp)
        ctx->r15 = MEM_W(ctx->r29, 0XC);
            goto L_80208FFC;
    }
    goto skip_7;
    // 0x80208FE0: lw          $t7, 0xC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC);
    skip_7:
    // 0x80208FE4: and         $v0, $t4, $a0
    ctx->r2 = ctx->r12 & ctx->r4;
    // 0x80208FE8: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80208FEC: lbu         $t5, 0xE($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0XE);
    // 0x80208FF0: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80208FF4: sb          $t5, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r13;
    // 0x80208FF8: lw          $t7, 0xC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC);
L_80208FFC:
    // 0x80208FFC: addiu       $t8, $v0, 0x3
    ctx->r24 = ADD32(ctx->r2, 0X3);
    // 0x80209000: and         $v0, $t8, $a0
    ctx->r2 = ctx->r24 & ctx->r4;
    // 0x80209004: andi        $t0, $t7, 0x100
    ctx->r8 = ctx->r15 & 0X100;
    // 0x80209008: beq         $t0, $zero, L_80209020
    if (ctx->r8 == 0) {
        // 0x8020900C: nop
    
            goto L_80209020;
    }
    // 0x8020900C: nop

    // 0x80209010: lbu         $t9, 0xF($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0XF);
    // 0x80209014: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x80209018: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8020901C: sb          $t9, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r25;
L_80209020:
    // 0x80209020: jr          $ra
    // 0x80209024: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80209024: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void D_802B6744(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B67C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B67C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B67CC: jal         0x802C53C0
    // 0x802B67D0: addiu       $a0, $a0, 0x1398
    ctx->r4 = ADD32(ctx->r4, 0X1398);
    static_3_802C53C0(rdram, ctx);
        goto after_0;
    // 0x802B67D0: addiu       $a0, $a0, 0x1398
    ctx->r4 = ADD32(ctx->r4, 0X1398);
    after_0:
    // 0x802B67D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B67D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B67DC: jr          $ra
    // 0x802B67E0: nop

    return;
    // 0x802B67E0: nop

;}
RECOMP_FUNC void D_8023A4D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023A4D4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8023A4D8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8023A4DC: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x8023A4E0: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8023A4E4: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8023A4E8: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8023A4EC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8023A4F0: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x8023A4F4: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x8023A4F8: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x8023A4FC: or          $s4, $a2, $zero
    ctx->r20 = ctx->r6 | 0;
    // 0x8023A500: jal         0x802456A0
    // 0x8023A504: sb          $a3, 0x65($a0)
    MEM_B(0X65, ctx->r4) = ctx->r7;
    static_3_802456A0(rdram, ctx);
        goto after_0;
    // 0x8023A504: sb          $a3, 0x65($a0)
    MEM_B(0X65, ctx->r4) = ctx->r7;
    after_0:
    // 0x8023A508: beq         $v0, $zero, L_8023A518
    if (ctx->r2 == 0) {
        // 0x8023A50C: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_8023A518;
    }
    // 0x8023A50C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8023A510: b           L_8023A558
    // 0x8023A514: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_8023A558;
    // 0x8023A514: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8023A518:
    // 0x8023A518: sll         $s1, $s3, 3
    ctx->r17 = S32(ctx->r19 << 3);
    // 0x8023A51C: addiu       $s3, $zero, 0x8
    ctx->r19 = ADD32(0, 0X8);
L_8023A520:
    // 0x8023A520: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x8023A524: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x8023A528: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8023A52C: andi        $a2, $s1, 0xFFFF
    ctx->r6 = ctx->r17 & 0XFFFF;
    // 0x8023A530: jal         0x80246660
    // 0x8023A534: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    static_3_80246660(rdram, ctx);
        goto after_1;
    // 0x8023A534: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    after_1:
    // 0x8023A538: bne         $v0, $zero, L_8023A548
    if (ctx->r2 != 0) {
        // 0x8023A53C: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_8023A548;
    }
    // 0x8023A53C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8023A540: bne         $s0, $s3, L_8023A520
    if (ctx->r16 != ctx->r19) {
        // 0x8023A544: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8023A520;
    }
    // 0x8023A544: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_8023A548:
    // 0x8023A548: sb          $zero, 0x65($s2)
    MEM_B(0X65, ctx->r18) = 0;
    // 0x8023A54C: jal         0x802456A0
    // 0x8023A550: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    static_3_802456A0(rdram, ctx);
        goto after_2;
    // 0x8023A550: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_2:
    // 0x8023A554: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8023A558:
    // 0x8023A558: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8023A55C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8023A560: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8023A564: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8023A568: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x8023A56C: jr          $ra
    // 0x8023A570: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8023A570: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void D_802E80AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E812C: addiu       $sp, $sp, -0xD0
    ctx->r29 = ADD32(ctx->r29, -0XD0);
    // 0x802E8130: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802E8134: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802E8138: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802E813C: sw          $a1, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r5;
    // 0x802E8140: sw          $a2, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r6;
    // 0x802E8144: sb          $t6, 0x83($sp)
    MEM_B(0X83, ctx->r29) = ctx->r14;
    // 0x802E8148: lbu         $t7, 0x19B($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X19B);
    // 0x802E814C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802E8150: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802E8154: beql        $t7, $zero, L_802E8168
    if (ctx->r15 == 0) {
        // 0x802E8158: mtc1        $at, $f4
        ctx->f4.u32l = ctx->r1;
            goto L_802E8168;
    }
    goto skip_0;
    // 0x802E8158: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    skip_0:
    // 0x802E815C: b           L_802E842C
    // 0x802E8160: sb          $zero, 0x83($sp)
    MEM_B(0X83, ctx->r29) = 0;
        goto L_802E842C;
    // 0x802E8160: sb          $zero, 0x83($sp)
    MEM_B(0X83, ctx->r29) = 0;
    // 0x802E8164: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
L_802E8168:
    // 0x802E8168: lwc1        $f6, 0x4C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x802E816C: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x802E8170: nop

    // 0x802E8174: bc1t        L_802E8188
    if (c1cs) {
        // 0x802E8178: nop
    
            goto L_802E8188;
    }
    // 0x802E8178: nop

    // 0x802E817C: lbu         $t8, 0x24($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X24);
    // 0x802E8180: beql        $t8, $zero, L_802E8378
    if (ctx->r24 == 0) {
        // 0x802E8184: lw          $v1, 0xC($s0)
        ctx->r3 = MEM_W(ctx->r16, 0XC);
            goto L_802E8378;
    }
    goto skip_1;
    // 0x802E8184: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    skip_1:
L_802E8188:
    // 0x802E8188: jal         0x802D2A04
    // 0x802E818C: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    static_3_802D2A04(rdram, ctx);
        goto after_0;
    // 0x802E818C: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    after_0:
    // 0x802E8190: bnel        $v0, $zero, L_802E8258
    if (ctx->r2 != 0) {
        // 0x802E8194: lw          $v1, 0xC($s0)
        ctx->r3 = MEM_W(ctx->r16, 0XC);
            goto L_802E8258;
    }
    goto skip_2;
    // 0x802E8194: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    skip_2:
    // 0x802E8198: lbu         $t9, 0x19C($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X19C);
    // 0x802E819C: bnel        $t9, $zero, L_802E8258
    if (ctx->r25 != 0) {
        // 0x802E81A0: lw          $v1, 0xC($s0)
        ctx->r3 = MEM_W(ctx->r16, 0XC);
            goto L_802E8258;
    }
    goto skip_3;
    // 0x802E81A0: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    skip_3:
    // 0x802E81A4: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    // 0x802E81A8: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x802E81AC: lw          $t9, 0x64($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X64);
    // 0x802E81B0: lh          $t0, 0x60($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X60);
    // 0x802E81B4: jalr        $t9
    // 0x802E81B8: addu        $a0, $t0, $s0
    ctx->r4 = ADD32(ctx->r8, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x802E81B8: addu        $a0, $t0, $s0
    ctx->r4 = ADD32(ctx->r8, ctx->r16);
    after_1:
    // 0x802E81BC: jal         0x802D260C
    // 0x802E81C0: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    static_3_802D260C(rdram, ctx);
        goto after_2;
    // 0x802E81C0: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    after_2:
    // 0x802E81C4: beq         $v0, $zero, L_802E81F4
    if (ctx->r2 == 0) {
        // 0x802E81C8: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_802E81F4;
    }
    // 0x802E81C8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E81CC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E81D0: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802E81D4: jal         0x802AAB68
    // 0x802E81D8: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    static_3_802AAB68(rdram, ctx);
        goto after_3;
    // 0x802E81D8: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_3:
    // 0x802E81DC: beq         $v0, $zero, L_802E8210
    if (ctx->r2 == 0) {
        // 0x802E81E0: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802E8210;
    }
    // 0x802E81E0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802E81E4: jal         0x802D717C
    // 0x802E81E8: lui         $a1, 0x4170
    ctx->r5 = S32(0X4170 << 16);
    static_3_802D717C(rdram, ctx);
        goto after_4;
    // 0x802E81E8: lui         $a1, 0x4170
    ctx->r5 = S32(0X4170 << 16);
    after_4:
    // 0x802E81EC: b           L_802E8210
    // 0x802E81F0: nop

        goto L_802E8210;
    // 0x802E81F0: nop

L_802E81F4:
    // 0x802E81F4: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802E81F8: jal         0x802AAB00
    // 0x802E81FC: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    static_3_802AAB00(rdram, ctx);
        goto after_5;
    // 0x802E81FC: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_5:
    // 0x802E8200: beq         $v0, $zero, L_802E8210
    if (ctx->r2 == 0) {
        // 0x802E8204: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802E8210;
    }
    // 0x802E8204: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802E8208: jal         0x8028AE1C
    // 0x802E820C: lui         $a1, 0x4170
    ctx->r5 = S32(0X4170 << 16);
    static_3_8028AE1C(rdram, ctx);
        goto after_6;
    // 0x802E820C: lui         $a1, 0x4170
    ctx->r5 = S32(0X4170 << 16);
    after_6:
L_802E8210:
    // 0x802E8210: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E8214: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802E8218: jal         0x802AEE54
    // 0x802E821C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_802AEE54(rdram, ctx);
        goto after_7;
    // 0x802E821C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x802E8220: beq         $s0, $v0, L_802E8238
    if (ctx->r16 == ctx->r2) {
        // 0x802E8224: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_802E8238;
    }
    // 0x802E8224: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E8228: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802E822C: jal         0x802AEE54
    // 0x802E8230: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802AEE54(rdram, ctx);
        goto after_8;
    // 0x802E8230: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
    // 0x802E8234: bne         $s0, $v0, L_802E824C
    if (ctx->r16 != ctx->r2) {
        // 0x802E8238: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_802E824C;
    }
L_802E8238:
    // 0x802E8238: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E823C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802E8240: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802E8244: jal         0x802AB604
    // 0x802E8248: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    static_3_802AB604(rdram, ctx);
        goto after_9;
    // 0x802E8248: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    after_9:
L_802E824C:
    // 0x802E824C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x802E8250: sb          $t1, 0x19C($s0)
    MEM_B(0X19C, ctx->r16) = ctx->r9;
    // 0x802E8254: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
L_802E8258:
    // 0x802E8258: lw          $a1, 0xD4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XD4);
    // 0x802E825C: lw          $a2, 0xD8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XD8);
    // 0x802E8260: lw          $v0, 0xD8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XD8);
    // 0x802E8264: lw          $t9, 0x34($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X34);
    // 0x802E8268: lh          $t2, 0x30($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X30);
    // 0x802E826C: jalr        $t9
    // 0x802E8270: addu        $a0, $t2, $v1
    ctx->r4 = ADD32(ctx->r10, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x802E8270: addu        $a0, $t2, $v1
    ctx->r4 = ADD32(ctx->r10, ctx->r3);
    after_10:
    // 0x802E8274: lbu         $t3, 0xF8($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0XF8);
    // 0x802E8278: bnel        $t3, $zero, L_802E82D4
    if (ctx->r11 != 0) {
        // 0x802E827C: lw          $v1, 0xC($s0)
        ctx->r3 = MEM_W(ctx->r16, 0XC);
            goto L_802E82D4;
    }
    goto skip_4;
    // 0x802E827C: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    skip_4:
    // 0x802E8280: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x802E8284: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x802E8288: beq         $v0, $at, L_802E82D0
    if (ctx->r2 == ctx->r1) {
        // 0x802E828C: addiu       $at, $zero, 0xF
        ctx->r1 = ADD32(0, 0XF);
            goto L_802E82D0;
    }
    // 0x802E828C: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x802E8290: beq         $v0, $at, L_802E82D0
    if (ctx->r2 == ctx->r1) {
        // 0x802E8294: addiu       $at, $zero, 0x10
        ctx->r1 = ADD32(0, 0X10);
            goto L_802E82D0;
    }
    // 0x802E8294: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x802E8298: beql        $v0, $at, L_802E82D4
    if (ctx->r2 == ctx->r1) {
        // 0x802E829C: lw          $v1, 0xC($s0)
        ctx->r3 = MEM_W(ctx->r16, 0XC);
            goto L_802E82D4;
    }
    goto skip_5;
    // 0x802E829C: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    skip_5:
    // 0x802E82A0: lw          $a0, 0xDC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XDC);
    // 0x802E82A4: beql        $a0, $zero, L_802E82B8
    if (ctx->r4 == 0) {
        // 0x802E82A8: lw          $a0, 0xD8($s0)
        ctx->r4 = MEM_W(ctx->r16, 0XD8);
            goto L_802E82B8;
    }
    goto skip_6;
    // 0x802E82A8: lw          $a0, 0xD8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XD8);
    skip_6:
    // 0x802E82AC: jal         0x80318F1C
    // 0x802E82B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_80318F1C(rdram, ctx);
        goto after_11;
    // 0x802E82B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_11:
    // 0x802E82B4: lw          $a0, 0xD8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XD8);
L_802E82B8:
    // 0x802E82B8: beql        $a0, $zero, L_802E82CC
    if (ctx->r4 == 0) {
        // 0x802E82BC: addiu       $t4, $zero, 0x1
        ctx->r12 = ADD32(0, 0X1);
            goto L_802E82CC;
    }
    goto skip_7;
    // 0x802E82BC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    skip_7:
    // 0x802E82C0: jal         0x80318F0C
    // 0x802E82C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_80318F0C(rdram, ctx);
        goto after_12;
    // 0x802E82C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_12:
    // 0x802E82C8: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
L_802E82CC:
    // 0x802E82CC: sb          $t4, 0xF8($s0)
    MEM_B(0XF8, ctx->r16) = ctx->r12;
L_802E82D0:
    // 0x802E82D0: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
L_802E82D4:
    // 0x802E82D4: addiu       $a1, $sp, 0x90
    ctx->r5 = ADD32(ctx->r29, 0X90);
    // 0x802E82D8: lw          $v0, 0xD8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XD8);
    // 0x802E82DC: lw          $t9, 0x14($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X14);
    // 0x802E82E0: lh          $t5, 0x10($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X10);
    // 0x802E82E4: jalr        $t9
    // 0x802E82E8: addu        $a0, $t5, $v1
    ctx->r4 = ADD32(ctx->r13, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x802E82E8: addu        $a0, $t5, $v1
    ctx->r4 = ADD32(ctx->r13, ctx->r3);
    after_13:
    // 0x802E82EC: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x802E82F0: addiu       $a1, $sp, 0x8C
    ctx->r5 = ADD32(ctx->r29, 0X8C);
    // 0x802E82F4: addiu       $a2, $sp, 0x88
    ctx->r6 = ADD32(ctx->r29, 0X88);
    // 0x802E82F8: jal         0x802D2598
    // 0x802E82FC: addiu       $a3, $sp, 0x84
    ctx->r7 = ADD32(ctx->r29, 0X84);
    static_3_802D2598(rdram, ctx);
        goto after_14;
    // 0x802E82FC: addiu       $a3, $sp, 0x84
    ctx->r7 = ADD32(ctx->r29, 0X84);
    after_14:
    // 0x802E8300: jal         0x802D25E4
    // 0x802E8304: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    static_3_802D25E4(rdram, ctx);
        goto after_15;
    // 0x802E8304: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    after_15:
    // 0x802E8308: swc1        $f0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f0.u32l;
    // 0x802E830C: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    // 0x802E8310: lwc1        $f8, 0x84($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X84);
    // 0x802E8314: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x802E8318: lh          $t6, 0x10($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X10);
    // 0x802E831C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x802E8320: lw          $t9, 0x14($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X14);
    // 0x802E8324: addiu       $a1, $sp, 0x90
    ctx->r5 = ADD32(ctx->r29, 0X90);
    // 0x802E8328: lw          $a2, 0x8C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8C);
    // 0x802E832C: jalr        $t9
    // 0x802E8330: addu        $a0, $t6, $s0
    ctx->r4 = ADD32(ctx->r14, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x802E8330: addu        $a0, $t6, $s0
    ctx->r4 = ADD32(ctx->r14, ctx->r16);
    after_16:
    // 0x802E8334: jal         0x802D2A14
    // 0x802E8338: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    static_3_802D2A14(rdram, ctx);
        goto after_17;
    // 0x802E8338: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    after_17:
    // 0x802E833C: beql        $v0, $zero, L_802E8430
    if (ctx->r2 == 0) {
        // 0x802E8340: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_802E8430;
    }
    goto skip_8;
    // 0x802E8340: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_8:
    // 0x802E8344: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    // 0x802E8348: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802E834C: sb          $t7, 0x19B($s0)
    MEM_B(0X19B, ctx->r16) = ctx->r15;
    // 0x802E8350: lw          $t9, 0x94($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X94);
    // 0x802E8354: lh          $t8, 0x90($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X90);
    // 0x802E8358: jalr        $t9
    // 0x802E835C: addu        $a0, $t8, $s0
    ctx->r4 = ADD32(ctx->r24, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_18;
    // 0x802E835C: addu        $a0, $t8, $s0
    ctx->r4 = ADD32(ctx->r24, ctx->r16);
    after_18:
    // 0x802E8360: bnel        $v0, $zero, L_802E8430
    if (ctx->r2 != 0) {
        // 0x802E8364: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_802E8430;
    }
    goto skip_9;
    // 0x802E8364: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_9:
    // 0x802E8368: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802E836C: b           L_802E842C
    // 0x802E8370: swc1        $f10, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f10.u32l;
        goto L_802E842C;
    // 0x802E8370: swc1        $f10, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f10.u32l;
    // 0x802E8374: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
L_802E8378:
    // 0x802E8378: lw          $a1, 0xD4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XD4);
    // 0x802E837C: lw          $a2, 0xD8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XD8);
    // 0x802E8380: lw          $v0, 0xD8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XD8);
    // 0x802E8384: lw          $t9, 0x74($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X74);
    // 0x802E8388: lh          $t0, 0x70($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X70);
    // 0x802E838C: jalr        $t9
    // 0x802E8390: addu        $a0, $t0, $v1
    ctx->r4 = ADD32(ctx->r8, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_19;
    // 0x802E8390: addu        $a0, $t0, $v1
    ctx->r4 = ADD32(ctx->r8, ctx->r3);
    after_19:
    // 0x802E8394: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x802E8398: addiu       $a1, $sp, 0x90
    ctx->r5 = ADD32(ctx->r29, 0X90);
    // 0x802E839C: lw          $v0, 0xD8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XD8);
    // 0x802E83A0: lw          $t9, 0x14($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X14);
    // 0x802E83A4: lh          $t1, 0x10($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X10);
    // 0x802E83A8: jalr        $t9
    // 0x802E83AC: addu        $a0, $t1, $v1
    ctx->r4 = ADD32(ctx->r9, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_20;
    // 0x802E83AC: addu        $a0, $t1, $v1
    ctx->r4 = ADD32(ctx->r9, ctx->r3);
    after_20:
    // 0x802E83B0: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x802E83B4: addiu       $a1, $sp, 0x8C
    ctx->r5 = ADD32(ctx->r29, 0X8C);
    // 0x802E83B8: addiu       $a2, $sp, 0x88
    ctx->r6 = ADD32(ctx->r29, 0X88);
    // 0x802E83BC: jal         0x802D2598
    // 0x802E83C0: addiu       $a3, $sp, 0x84
    ctx->r7 = ADD32(ctx->r29, 0X84);
    static_3_802D2598(rdram, ctx);
        goto after_21;
    // 0x802E83C0: addiu       $a3, $sp, 0x84
    ctx->r7 = ADD32(ctx->r29, 0X84);
    after_21:
    // 0x802E83C4: jal         0x802D25E4
    // 0x802E83C8: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    static_3_802D25E4(rdram, ctx);
        goto after_22;
    // 0x802E83C8: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    after_22:
    // 0x802E83CC: swc1        $f0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f0.u32l;
    // 0x802E83D0: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    // 0x802E83D4: lwc1        $f16, 0x84($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X84);
    // 0x802E83D8: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x802E83DC: lh          $t2, 0x10($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X10);
    // 0x802E83E0: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x802E83E4: lw          $t9, 0x14($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X14);
    // 0x802E83E8: addiu       $a1, $sp, 0x90
    ctx->r5 = ADD32(ctx->r29, 0X90);
    // 0x802E83EC: lw          $a2, 0x8C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8C);
    // 0x802E83F0: jalr        $t9
    // 0x802E83F4: addu        $a0, $t2, $s0
    ctx->r4 = ADD32(ctx->r10, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_23;
    // 0x802E83F4: addu        $a0, $t2, $s0
    ctx->r4 = ADD32(ctx->r10, ctx->r16);
    after_23:
    // 0x802E83F8: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    // 0x802E83FC: lw          $a1, 0xD4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XD4);
    // 0x802E8400: lw          $t9, 0xEC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XEC);
    // 0x802E8404: lh          $t3, 0xE8($v0)
    ctx->r11 = MEM_H(ctx->r2, 0XE8);
    // 0x802E8408: jalr        $t9
    // 0x802E840C: addu        $a0, $t3, $s0
    ctx->r4 = ADD32(ctx->r11, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_24;
    // 0x802E840C: addu        $a0, $t3, $s0
    ctx->r4 = ADD32(ctx->r11, ctx->r16);
    after_24:
    // 0x802E8410: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    // 0x802E8414: lw          $a1, 0xD4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XD4);
    // 0x802E8418: lw          $a2, 0xD8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XD8);
    // 0x802E841C: lw          $t9, 0x5C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X5C);
    // 0x802E8420: lh          $t4, 0x58($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X58);
    // 0x802E8424: jalr        $t9
    // 0x802E8428: addu        $a0, $t4, $s0
    ctx->r4 = ADD32(ctx->r12, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_25;
    // 0x802E8428: addu        $a0, $t4, $s0
    ctx->r4 = ADD32(ctx->r12, ctx->r16);
    after_25:
L_802E842C:
    // 0x802E842C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_802E8430:
    // 0x802E8430: lwc1        $f18, 0x50($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X50);
    // 0x802E8434: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x802E8438: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802E843C: c.eq.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl == ctx->f18.fl;
    // 0x802E8440: lwc1        $f6, 0xD8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x802E8444: bc1tl       L_802E845C
    if (c1cs) {
        // 0x802E8448: lwc1        $f16, 0x54($s0)
        ctx->f16.u32l = MEM_W(ctx->r16, 0X54);
            goto L_802E845C;
    }
    goto skip_10;
    // 0x802E8448: lwc1        $f16, 0x54($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X54);
    skip_10:
    // 0x802E844C: lwc1        $f4, 0x54($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X54);
    // 0x802E8450: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802E8454: swc1        $f8, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->f8.u32l;
    // 0x802E8458: lwc1        $f16, 0x54($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X54);
L_802E845C:
    // 0x802E845C: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x802E8460: nop

    // 0x802E8464: bc1fl       L_802E8478
    if (!c1cs) {
        // 0x802E8468: lw          $v0, 0x1A0($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X1A0);
            goto L_802E8478;
    }
    goto skip_11;
    // 0x802E8468: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    skip_11:
    // 0x802E846C: swc1        $f0, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f0.u32l;
    // 0x802E8470: swc1        $f0, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->f0.u32l;
    // 0x802E8474: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
L_802E8478:
    // 0x802E8478: lw          $a1, 0xD4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XD4);
    // 0x802E847C: lw          $t9, 0x34($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X34);
    // 0x802E8480: lh          $t5, 0x30($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X30);
    // 0x802E8484: jalr        $t9
    // 0x802E8488: addu        $a0, $t5, $s0
    ctx->r4 = ADD32(ctx->r13, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_26;
    // 0x802E8488: addu        $a0, $t5, $s0
    ctx->r4 = ADD32(ctx->r13, ctx->r16);
    after_26:
    // 0x802E848C: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    // 0x802E8490: lw          $a1, 0xD4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XD4);
    // 0x802E8494: lw          $t9, 0x3C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X3C);
    // 0x802E8498: lh          $t6, 0x38($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X38);
    // 0x802E849C: jalr        $t9
    // 0x802E84A0: addu        $a0, $t6, $s0
    ctx->r4 = ADD32(ctx->r14, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_27;
    // 0x802E84A0: addu        $a0, $t6, $s0
    ctx->r4 = ADD32(ctx->r14, ctx->r16);
    after_27:
    // 0x802E84A4: lbu         $t7, 0x83($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X83);
    // 0x802E84A8: beql        $t7, $zero, L_802E8554
    if (ctx->r15 == 0) {
        // 0x802E84AC: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_802E8554;
    }
    goto skip_12;
    // 0x802E84AC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_12:
    // 0x802E84B0: lbu         $t8, 0xB8($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XB8);
    // 0x802E84B4: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x802E84B8: beql        $t8, $at, L_802E8554
    if (ctx->r24 == ctx->r1) {
        // 0x802E84BC: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_802E8554;
    }
    goto skip_13;
    // 0x802E84BC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_13:
    // 0x802E84C0: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    // 0x802E84C4: lw          $t9, 0x94($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X94);
    // 0x802E84C8: lh          $t0, 0x90($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X90);
    // 0x802E84CC: jalr        $t9
    // 0x802E84D0: addu        $a0, $t0, $s0
    ctx->r4 = ADD32(ctx->r8, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_28;
    // 0x802E84D0: addu        $a0, $t0, $s0
    ctx->r4 = ADD32(ctx->r8, ctx->r16);
    after_28:
    // 0x802E84D4: bnel        $v0, $zero, L_802E8554
    if (ctx->r2 != 0) {
        // 0x802E84D8: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_802E8554;
    }
    goto skip_14;
    // 0x802E84D8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_14:
    // 0x802E84DC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x802E84E0: nop

    // 0x802E84E4: swc1        $f18, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f18.u32l;
    // 0x802E84E8: jal         0x802D2660
    // 0x802E84EC: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    static_3_802D2660(rdram, ctx);
        goto after_29;
    // 0x802E84EC: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    after_29:
    // 0x802E84F0: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x802E84F4: swc1        $f0, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->f0.u32l;
    // 0x802E84F8: lw          $v0, 0xD8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XD8);
    // 0x802E84FC: lw          $t9, 0x5C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X5C);
    // 0x802E8500: lh          $t1, 0x58($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X58);
    // 0x802E8504: jalr        $t9
    // 0x802E8508: addu        $a0, $t1, $v1
    ctx->r4 = ADD32(ctx->r9, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_30;
    // 0x802E8508: addu        $a0, $t1, $v1
    ctx->r4 = ADD32(ctx->r9, ctx->r3);
    after_30:
    // 0x802E850C: lwc1        $f2, 0x8C($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x802E8510: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802E8514: swc1        $f0, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->f0.u32l;
    // 0x802E8518: c.lt.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl < ctx->f2.fl;
    // 0x802E851C: nop

    // 0x802E8520: bc1fl       L_802E8538
    if (!c1cs) {
        // 0x802E8524: lw          $v0, 0x1A0($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X1A0);
            goto L_802E8538;
    }
    goto skip_15;
    // 0x802E8524: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    skip_15:
    // 0x802E8528: lwc1        $f6, 0x90($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X90);
    // 0x802E852C: div.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f2.fl);
    // 0x802E8530: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    // 0x802E8534: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
L_802E8538:
    // 0x802E8538: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x802E853C: addiu       $a2, $sp, 0x90
    ctx->r6 = ADD32(ctx->r29, 0X90);
    // 0x802E8540: lw          $t9, 0x44($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X44);
    // 0x802E8544: lh          $t2, 0x40($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X40);
    // 0x802E8548: jalr        $t9
    // 0x802E854C: addu        $a0, $t2, $s0
    ctx->r4 = ADD32(ctx->r10, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_31;
    // 0x802E854C: addu        $a0, $t2, $s0
    ctx->r4 = ADD32(ctx->r10, ctx->r16);
    after_31:
    // 0x802E8550: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802E8554:
    // 0x802E8554: lbu         $v0, 0x83($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X83);
    // 0x802E8558: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802E855C: jr          $ra
    // 0x802E8560: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    return;
    // 0x802E8560: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
RECOMP_FUNC void D_80279EDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80279F54: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80279F58: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x80279F5C: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80279F60: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80279F64: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80279F68: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80279F6C: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80279F70: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x80279F74: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x80279F78: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80279F7C: addiu       $a3, $t6, 0x6791
    ctx->r7 = ADD32(ctx->r14, 0X6791);
    // 0x80279F80: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x80279F84: addiu       $a1, $t6, 0x6790
    ctx->r5 = ADD32(ctx->r14, 0X6790);
    // 0x80279F88: jal         0x802A2B80
    // 0x80279F8C: addiu       $a0, $a0, 0x676C
    ctx->r4 = ADD32(ctx->r4, 0X676C);
    static_3_802A2B80(rdram, ctx);
        goto after_0;
    // 0x80279F8C: addiu       $a0, $a0, 0x676C
    ctx->r4 = ADD32(ctx->r4, 0X676C);
    after_0:
    // 0x80279F90: beq         $v0, $zero, L_80279FC8
    if (ctx->r2 == 0) {
        // 0x80279F94: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80279FC8;
    }
    // 0x80279F94: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80279F98: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80279F9C: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80279FA0: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80279FA4: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x80279FA8: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x80279FAC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80279FB0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80279FB4: jal         0x8028A5AC
    // 0x80279FB8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    static_3_8028A5AC(rdram, ctx);
        goto after_1;
    // 0x80279FB8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x80279FBC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80279FC0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80279FC4: sb          $t8, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r24;
L_80279FC8:
    // 0x80279FC8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80279FCC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80279FD0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x80279FD4: jr          $ra
    // 0x80279FD8: nop

    return;
    // 0x80279FD8: nop

;}
RECOMP_FUNC void D_8022BBF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022BBF0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022BBF4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8022BBF8: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x8022BBFC: addiu       $s0, $s0, 0x0
    ctx->r16 = ADD32(ctx->r16, 0X0);
    // 0x8022BC00: lhu         $a2, 0xA($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0XA);
    // 0x8022BC04: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8022BC08: lui         $s1, 0x0
    ctx->r17 = S32(0X0 << 16);
    // 0x8022BC0C: addiu       $s1, $s1, 0x0
    ctx->r17 = ADD32(ctx->r17, 0X0);
    // 0x8022BC10: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022BC14: sll         $t6, $a2, 2
    ctx->r14 = S32(ctx->r6 << 2);
    // 0x8022BC18: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x8022BC1C: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x8022BC20: jal         0x8022B780
    // 0x8022BC24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_8022B780(rdram, ctx);
        goto after_0;
    // 0x8022BC24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8022BC28: lhu         $a2, 0xC($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0XC);
    // 0x8022BC2C: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    // 0x8022BC30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8022BC34: sll         $t7, $a2, 2
    ctx->r15 = S32(ctx->r6 << 2);
    // 0x8022BC38: jal         0x8022B780
    // 0x8022BC3C: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    static_3_8022B780(rdram, ctx);
        goto after_1;
    // 0x8022BC3C: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    after_1:
    // 0x8022BC40: lhu         $a2, 0xE($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0XE);
    // 0x8022BC44: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x8022BC48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8022BC4C: sll         $t8, $a2, 2
    ctx->r24 = S32(ctx->r6 << 2);
    // 0x8022BC50: jal         0x8022B780
    // 0x8022BC54: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    static_3_8022B780(rdram, ctx);
        goto after_2;
    // 0x8022BC54: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    after_2:
    // 0x8022BC58: lhu         $a2, 0x10($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X10);
    // 0x8022BC5C: lw          $a0, 0x1C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X1C);
    // 0x8022BC60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8022BC64: sll         $t9, $a2, 2
    ctx->r25 = S32(ctx->r6 << 2);
    // 0x8022BC68: jal         0x8022B780
    // 0x8022BC6C: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    static_3_8022B780(rdram, ctx);
        goto after_3;
    // 0x8022BC6C: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    after_3:
    // 0x8022BC70: lhu         $a2, 0x12($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X12);
    // 0x8022BC74: lw          $a0, 0x24($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X24);
    // 0x8022BC78: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8022BC7C: sll         $t0, $a2, 2
    ctx->r8 = S32(ctx->r6 << 2);
    // 0x8022BC80: jal         0x8022B780
    // 0x8022BC84: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    static_3_8022B780(rdram, ctx);
        goto after_4;
    // 0x8022BC84: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    after_4:
    // 0x8022BC88: lhu         $a2, 0x16($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X16);
    // 0x8022BC8C: lw          $a0, 0x2C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X2C);
    // 0x8022BC90: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8022BC94: sll         $t1, $a2, 2
    ctx->r9 = S32(ctx->r6 << 2);
    // 0x8022BC98: jal         0x8022B780
    // 0x8022BC9C: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    static_3_8022B780(rdram, ctx);
        goto after_5;
    // 0x8022BC9C: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    after_5:
    // 0x8022BCA0: lhu         $a2, 0x14($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X14);
    // 0x8022BCA4: lw          $a0, 0x34($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X34);
    // 0x8022BCA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8022BCAC: sll         $t2, $a2, 2
    ctx->r10 = S32(ctx->r6 << 2);
    // 0x8022BCB0: jal         0x8022B780
    // 0x8022BCB4: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    static_3_8022B780(rdram, ctx);
        goto after_6;
    // 0x8022BCB4: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    after_6:
    // 0x8022BCB8: lhu         $a2, 0x1C($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X1C);
    // 0x8022BCBC: lw          $a0, 0x3C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X3C);
    // 0x8022BCC0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8022BCC4: sll         $t3, $a2, 2
    ctx->r11 = S32(ctx->r6 << 2);
    // 0x8022BCC8: jal         0x8022B780
    // 0x8022BCCC: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    static_3_8022B780(rdram, ctx);
        goto after_7;
    // 0x8022BCCC: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    after_7:
    // 0x8022BCD0: lhu         $a2, 0x1A($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X1A);
    // 0x8022BCD4: lw          $a0, 0x44($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X44);
    // 0x8022BCD8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8022BCDC: sll         $t4, $a2, 2
    ctx->r12 = S32(ctx->r6 << 2);
    // 0x8022BCE0: jal         0x8022B780
    // 0x8022BCE4: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    static_3_8022B780(rdram, ctx);
        goto after_8;
    // 0x8022BCE4: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    after_8:
    // 0x8022BCE8: lhu         $a2, 0x2($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X2);
    // 0x8022BCEC: lw          $a0, 0x4C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4C);
    // 0x8022BCF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8022BCF4: sll         $t5, $a2, 2
    ctx->r13 = S32(ctx->r6 << 2);
    // 0x8022BCF8: jal         0x8022B780
    // 0x8022BCFC: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    static_3_8022B780(rdram, ctx);
        goto after_9;
    // 0x8022BCFC: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    after_9:
    // 0x8022BD00: lhu         $a2, 0x16($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X16);
    // 0x8022BD04: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8022BD08: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x8022BD0C: sll         $t6, $a2, 2
    ctx->r14 = S32(ctx->r6 << 2);
    // 0x8022BD10: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x8022BD14: jal         0x8022B780
    // 0x8022BD18: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_8022B780(rdram, ctx);
        goto after_10;
    // 0x8022BD18: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_10:
    // 0x8022BD1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022BD20: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8022BD24: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8022BD28: jr          $ra
    // 0x8022BD2C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8022BD2C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void D_80220BF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80220BF4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80220BF8: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80220BFC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80220C00: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x80220C04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80220C08: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80220C0C: sw          $a0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r4;
    // 0x80220C10: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x80220C14: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x80220C18: bc1f        L_80220C2C
    if (!c1cs) {
        // 0x80220C1C: lui         $t9, 0x0
        ctx->r25 = S32(0X0 << 16);
            goto L_80220C2C;
    }
    // 0x80220C1C: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x80220C20: lui         $at, 0x8002
    ctx->r1 = S32(0X8002 << 16);
    // 0x80220C24: or          $t7, $t1, $at
    ctx->r15 = ctx->r9 | ctx->r1;
    // 0x80220C28: or          $t1, $t7, $zero
    ctx->r9 = ctx->r15 | 0;
L_80220C2C:
    // 0x80220C2C: lw          $t8, 0x0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X0);
    // 0x80220C30: lw          $t9, 0x0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X0);
    // 0x80220C34: or          $t1, $t1, $t8
    ctx->r9 = ctx->r9 | ctx->r24;
    // 0x80220C38: and         $t1, $t1, $t9
    ctx->r9 = ctx->r9 & ctx->r25;
    // 0x80220C3C: sll         $t6, $t1, 6
    ctx->r14 = S32(ctx->r9 << 6);
    // 0x80220C40: bgez        $t6, L_80220C58
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80220C44: sll         $t7, $t1, 13
        ctx->r15 = S32(ctx->r9 << 13);
            goto L_80220C58;
    }
    // 0x80220C44: sll         $t7, $t1, 13
    ctx->r15 = S32(ctx->r9 << 13);
    // 0x80220C48: jal         0x802209A4
    // 0x80220C4C: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    static_3_802209A4(rdram, ctx);
        goto after_0;
    // 0x80220C4C: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    after_0:
    // 0x80220C50: b           L_80221440
    // 0x80220C54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80221440;
    // 0x80220C54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80220C58:
    // 0x80220C58: bgez        $t7, L_80220D14
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80220C5C: lw          $t8, 0x80($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X80);
            goto L_80220D14;
    }
    // 0x80220C5C: lw          $t8, 0x80($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X80);
    // 0x80220C60: lhu         $v1, 0x8($t8)
    ctx->r3 = MEM_HU(ctx->r24, 0X8);
    // 0x80220C64: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x80220C68: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x80220C6C: beq         $v1, $at, L_80220D14
    if (ctx->r3 == ctx->r1) {
        // 0x80220C70: addiu       $v0, $v0, 0x0
        ctx->r2 = ADD32(ctx->r2, 0X0);
            goto L_80220D14;
    }
    // 0x80220C70: addiu       $v0, $v0, 0x0
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x80220C74: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80220C78: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x80220C7C: sll         $t9, $v1, 2
    ctx->r25 = S32(ctx->r3 << 2);
    // 0x80220C80: subu        $t9, $t9, $v1
    ctx->r25 = SUB32(ctx->r25, ctx->r3);
    // 0x80220C84: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80220C88: addu        $a0, $t9, $t6
    ctx->r4 = ADD32(ctx->r25, ctx->r14);
    // 0x80220C8C: lw          $t8, 0x2C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X2C);
    // 0x80220C90: lw          $t7, 0x2C($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X2C);
    // 0x80220C94: bnel        $t7, $t8, L_80220CB0
    if (ctx->r15 != ctx->r24) {
        // 0x80220C98: sw          $a0, 0x68($sp)
        MEM_W(0X68, ctx->r29) = ctx->r4;
            goto L_80220CB0;
    }
    goto skip_0;
    // 0x80220C98: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    skip_0:
    // 0x80220C9C: lw          $t9, 0x24($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X24);
    // 0x80220CA0: lw          $t6, 0x24($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X24);
    // 0x80220CA4: beql        $t9, $t6, L_80220CDC
    if (ctx->r25 == ctx->r14) {
        // 0x80220CA8: lw          $t9, 0x28($v0)
        ctx->r25 = MEM_W(ctx->r2, 0X28);
            goto L_80220CDC;
    }
    goto skip_1;
    // 0x80220CA8: lw          $t9, 0x28($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X28);
    skip_1:
    // 0x80220CAC: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
L_80220CB0:
    // 0x80220CB0: jal         0x80228500
    // 0x80220CB4: sw          $t1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r9;
    static_3_80228500(rdram, ctx);
        goto after_1;
    // 0x80220CB4: sw          $t1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r9;
    after_1:
    // 0x80220CB8: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x80220CBC: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x80220CC0: addiu       $v0, $v0, 0x0
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x80220CC4: lw          $t7, 0x2C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X2C);
    // 0x80220CC8: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x80220CCC: sw          $t7, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r15;
    // 0x80220CD0: lw          $t8, 0x24($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X24);
    // 0x80220CD4: sw          $t8, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r24;
    // 0x80220CD8: lw          $t9, 0x28($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X28);
L_80220CDC:
    // 0x80220CDC: lw          $t6, 0x28($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X28);
    // 0x80220CE0: beq         $t9, $t6, L_80220D14
    if (ctx->r25 == ctx->r14) {
        // 0x80220CE4: nop
    
            goto L_80220D14;
    }
    // 0x80220CE4: nop

    // 0x80220CE8: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x80220CEC: jal         0x802281A4
    // 0x80220CF0: sw          $t1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r9;
    static_3_802281A4(rdram, ctx);
        goto after_2;
    // 0x80220CF0: sw          $t1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r9;
    after_2:
    // 0x80220CF4: jal         0x80228698
    // 0x80220CF8: nop

    static_3_80228698(rdram, ctx);
        goto after_3;
    // 0x80220CF8: nop

    after_3:
    // 0x80220CFC: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x80220D00: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x80220D04: addiu       $v0, $v0, 0x0
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x80220D08: lw          $t7, 0x28($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X28);
    // 0x80220D0C: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x80220D10: sw          $t7, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r15;
L_80220D14:
    // 0x80220D14: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x80220D18: lw          $t8, 0x0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X0);
    // 0x80220D1C: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x80220D20: addiu       $t2, $t2, 0x0
    ctx->r10 = ADD32(ctx->r10, 0X0);
    // 0x80220D24: beq         $t1, $t8, L_80221348
    if (ctx->r9 == ctx->r24) {
        // 0x80220D28: nop
    
            goto L_80221348;
    }
    // 0x80220D28: nop

    // 0x80220D2C: lw          $v0, 0x0($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X0);
    // 0x80220D30: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x80220D34: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80220D38: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x80220D3C: sw          $t9, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r25;
    // 0x80220D40: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80220D44: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80220D48: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x80220D4C: lui         $a0, 0x883E
    ctx->r4 = S32(0X883E << 16);
    // 0x80220D50: and         $t9, $t1, $a0
    ctx->r25 = ctx->r9 & ctx->r4;
    // 0x80220D54: and         $t8, $t7, $a0
    ctx->r24 = ctx->r15 & ctx->r4;
    // 0x80220D58: beq         $t8, $t9, L_80220E68
    if (ctx->r24 == ctx->r25) {
        // 0x80220D5C: sll         $t6, $t1, 4
        ctx->r14 = S32(ctx->r9 << 4);
            goto L_80220E68;
    }
    // 0x80220D5C: sll         $t6, $t1, 4
    ctx->r14 = S32(ctx->r9 << 4);
    // 0x80220D60: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80220D64: bgez        $t6, L_80220D74
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80220D68: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_80220D74;
    }
    // 0x80220D68: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80220D6C: b           L_80220D78
    // 0x80220D70: lui         $a0, 0x4
    ctx->r4 = S32(0X4 << 16);
        goto L_80220D78;
    // 0x80220D70: lui         $a0, 0x4
    ctx->r4 = S32(0X4 << 16);
L_80220D74:
    // 0x80220D74: lui         $a1, 0x4
    ctx->r5 = S32(0X4 << 16);
L_80220D78:
    // 0x80220D78: sll         $t7, $t1, 11
    ctx->r15 = S32(ctx->r9 << 11);
    // 0x80220D7C: bgez        $t7, L_80220D90
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80220D80: sll         $t6, $t1, 12
        ctx->r14 = S32(ctx->r9 << 12);
            goto L_80220D90;
    }
    // 0x80220D80: sll         $t6, $t1, 12
    ctx->r14 = S32(ctx->r9 << 12);
    // 0x80220D84: ori         $t8, $a0, 0x2000
    ctx->r24 = ctx->r4 | 0X2000;
    // 0x80220D88: b           L_80220D98
    // 0x80220D8C: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
        goto L_80220D98;
    // 0x80220D8C: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
L_80220D90:
    // 0x80220D90: ori         $t9, $a1, 0x2000
    ctx->r25 = ctx->r5 | 0X2000;
    // 0x80220D94: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
L_80220D98:
    // 0x80220D98: bgez        $t6, L_80220DAC
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80220D9C: sll         $t9, $t1, 14
        ctx->r25 = S32(ctx->r9 << 14);
            goto L_80220DAC;
    }
    // 0x80220D9C: sll         $t9, $t1, 14
    ctx->r25 = S32(ctx->r9 << 14);
    // 0x80220DA0: ori         $t7, $a0, 0x1000
    ctx->r15 = ctx->r4 | 0X1000;
    // 0x80220DA4: b           L_80220DB4
    // 0x80220DA8: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
        goto L_80220DB4;
    // 0x80220DA8: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
L_80220DAC:
    // 0x80220DAC: ori         $t8, $a1, 0x1000
    ctx->r24 = ctx->r5 | 0X1000;
    // 0x80220DB0: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
L_80220DB4:
    // 0x80220DB4: bgez        $t9, L_80220DC8
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80220DB8: lui         $v0, 0x2
        ctx->r2 = S32(0X2 << 16);
            goto L_80220DC8;
    }
    // 0x80220DB8: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
    // 0x80220DBC: ori         $t6, $a0, 0x200
    ctx->r14 = ctx->r4 | 0X200;
    // 0x80220DC0: b           L_80220DD0
    // 0x80220DC4: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
        goto L_80220DD0;
    // 0x80220DC4: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
L_80220DC8:
    // 0x80220DC8: ori         $t7, $a1, 0x200
    ctx->r15 = ctx->r5 | 0X200;
    // 0x80220DCC: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
L_80220DD0:
    // 0x80220DD0: lui         $at, 0x804
    ctx->r1 = S32(0X804 << 16);
    // 0x80220DD4: and         $t8, $t1, $at
    ctx->r24 = ctx->r9 & ctx->r1;
    // 0x80220DD8: beq         $t8, $zero, L_80220DE8
    if (ctx->r24 == 0) {
        // 0x80220DDC: sll         $t9, $t1, 10
        ctx->r25 = S32(ctx->r9 << 10);
            goto L_80220DE8;
    }
    // 0x80220DDC: sll         $t9, $t1, 10
    ctx->r25 = S32(ctx->r9 << 10);
    // 0x80220DE0: b           L_80220DEC
    // 0x80220DE4: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
        goto L_80220DEC;
    // 0x80220DE4: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
L_80220DE8:
    // 0x80220DE8: or          $a1, $a1, $v0
    ctx->r5 = ctx->r5 | ctx->r2;
L_80220DEC:
    // 0x80220DEC: bgez        $t9, L_80220E00
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80220DF0: sll         $t8, $t1, 0
        ctx->r24 = S32(ctx->r9 << 0);
            goto L_80220E00;
    }
    // 0x80220DF0: sll         $t8, $t1, 0
    ctx->r24 = S32(ctx->r9 << 0);
    // 0x80220DF4: ori         $t6, $a0, 0x1
    ctx->r14 = ctx->r4 | 0X1;
    // 0x80220DF8: b           L_80220E08
    // 0x80220DFC: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
        goto L_80220E08;
    // 0x80220DFC: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
L_80220E00:
    // 0x80220E00: ori         $t7, $a1, 0x1
    ctx->r15 = ctx->r5 | 0X1;
    // 0x80220E04: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
L_80220E08:
    // 0x80220E08: bgez        $t8, L_80220E20
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80220E0C: lui         $at, 0x1
        ctx->r1 = S32(0X1 << 16);
            goto L_80220E20;
    }
    // 0x80220E0C: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x80220E10: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x80220E14: or          $t9, $a0, $at
    ctx->r25 = ctx->r4 | ctx->r1;
    // 0x80220E18: b           L_80220E28
    // 0x80220E1C: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
        goto L_80220E28;
    // 0x80220E1C: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
L_80220E20:
    // 0x80220E20: or          $t6, $a1, $at
    ctx->r14 = ctx->r5 | ctx->r1;
    // 0x80220E24: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
L_80220E28:
    // 0x80220E28: beq         $a1, $zero, L_80220E48
    if (ctx->r5 == 0) {
        // 0x80220E2C: nop
    
            goto L_80220E48;
    }
    // 0x80220E2C: nop

    // 0x80220E30: lw          $v0, 0x0($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X0);
    // 0x80220E34: lui         $t8, 0xB600
    ctx->r24 = S32(0XB600 << 16);
    // 0x80220E38: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x80220E3C: sw          $t7, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r15;
    // 0x80220E40: sw          $a1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r5;
    // 0x80220E44: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
L_80220E48:
    // 0x80220E48: beql        $a0, $zero, L_80220E6C
    if (ctx->r4 == 0) {
        // 0x80220E4C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80220E6C;
    }
    goto skip_2;
    // 0x80220E4C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    skip_2:
    // 0x80220E50: lw          $v0, 0x0($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X0);
    // 0x80220E54: lui         $t6, 0xB700
    ctx->r14 = S32(0XB700 << 16);
    // 0x80220E58: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x80220E5C: sw          $t9, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r25;
    // 0x80220E60: sw          $a0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r4;
    // 0x80220E64: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
L_80220E68:
    // 0x80220E68: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
L_80220E6C:
    // 0x80220E6C: andi        $v0, $t1, 0xFFF
    ctx->r2 = ctx->r9 & 0XFFF;
    // 0x80220E70: and         $t7, $t1, $at
    ctx->r15 = ctx->r9 & ctx->r1;
    // 0x80220E74: addiu       $at, $zero, 0xFFE
    ctx->r1 = ADD32(0, 0XFFE);
    // 0x80220E78: andi        $v1, $v0, 0xFFFF
    ctx->r3 = ctx->r2 & 0XFFFF;
    // 0x80220E7C: andi        $ra, $v0, 0xFFFF
    ctx->r31 = ctx->r2 & 0XFFFF;
    // 0x80220E80: bne         $v1, $at, L_80220E94
    if (ctx->r3 != ctx->r1) {
        // 0x80220E84: sw          $t7, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r15;
            goto L_80220E94;
    }
    // 0x80220E84: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x80220E88: addiu       $ra, $v1, 0x1
    ctx->r31 = ADD32(ctx->r3, 0X1);
    // 0x80220E8C: andi        $t8, $ra, 0xFFFF
    ctx->r24 = ctx->r31 & 0XFFFF;
    // 0x80220E90: or          $ra, $t8, $zero
    ctx->r31 = ctx->r24 | 0;
L_80220E94:
    // 0x80220E94: slti        $at, $ra, 0xFFF
    ctx->r1 = SIGNED(ctx->r31) < 0XFFF ? 1 : 0;
    // 0x80220E98: bne         $at, $zero, L_80220EAC
    if (ctx->r1 != 0) {
        // 0x80220E9C: or          $a3, $ra, $zero
        ctx->r7 = ctx->r31 | 0;
            goto L_80220EAC;
    }
    // 0x80220E9C: or          $a3, $ra, $zero
    ctx->r7 = ctx->r31 | 0;
    // 0x80220EA0: addiu       $t4, $zero, 0xFFF
    ctx->r12 = ADD32(0, 0XFFF);
    // 0x80220EA4: b           L_80220F18
    // 0x80220EA8: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
        goto L_80220F18;
    // 0x80220EA8: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
L_80220EAC:
    // 0x80220EAC: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x80220EB0: lw          $t9, 0x0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X0);
    // 0x80220EB4: sll         $t7, $ra, 2
    ctx->r15 = S32(ctx->r31 << 2);
    // 0x80220EB8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80220EBC: lw          $t6, 0x2C($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X2C);
    // 0x80220EC0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80220EC4: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x80220EC8: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80220ECC: lw          $t0, 0x0($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X0);
    // 0x80220ED0: bnel        $t0, $zero, L_80220F08
    if (ctx->r8 != 0) {
        // 0x80220ED4: lhu         $t9, 0x12($t0)
        ctx->r25 = MEM_HU(ctx->r8, 0X12);
            goto L_80220F08;
    }
    goto skip_3;
    // 0x80220ED4: lhu         $t9, 0x12($t0)
    ctx->r25 = MEM_HU(ctx->r8, 0X12);
    skip_3:
    // 0x80220ED8: sw          $t0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r8;
    // 0x80220EDC: jal         0x80231A24
    // 0x80220EE0: sw          $t1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r9;
    static_3_80231A24(rdram, ctx);
        goto after_4;
    // 0x80220EE0: sw          $t1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r9;
    after_4:
    // 0x80220EE4: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x80220EE8: addiu       $t2, $t2, 0x0
    ctx->r10 = ADD32(ctx->r10, 0X0);
    // 0x80220EEC: lw          $t0, 0x6C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X6C);
    // 0x80220EF0: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x80220EF4: addiu       $t4, $zero, 0xFFF
    ctx->r12 = ADD32(0, 0XFFF);
    // 0x80220EF8: addiu       $ra, $zero, 0xFFF
    ctx->r31 = ADD32(0, 0XFFF);
    // 0x80220EFC: b           L_80220F18
    // 0x80220F00: addiu       $a3, $zero, 0xFFF
    ctx->r7 = ADD32(0, 0XFFF);
        goto L_80220F18;
    // 0x80220F00: addiu       $a3, $zero, 0xFFF
    ctx->r7 = ADD32(0, 0XFFF);
    // 0x80220F04: lhu         $t9, 0x12($t0)
    ctx->r25 = MEM_HU(ctx->r8, 0X12);
L_80220F08:
    // 0x80220F08: andi        $t6, $t9, 0xF000
    ctx->r14 = ctx->r25 & 0XF000;
    // 0x80220F0C: or          $t4, $t6, $a3
    ctx->r12 = ctx->r14 | ctx->r7;
    // 0x80220F10: andi        $t7, $t4, 0xFFFF
    ctx->r15 = ctx->r12 & 0XFFFF;
    // 0x80220F14: or          $t4, $t7, $zero
    ctx->r12 = ctx->r15 | 0;
L_80220F18:
    // 0x80220F18: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x80220F1C: lw          $t8, 0x0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X0);
    // 0x80220F20: slti        $at, $a3, 0xFFE
    ctx->r1 = SIGNED(ctx->r7) < 0XFFE ? 1 : 0;
    // 0x80220F24: beq         $t8, $t4, L_80220FB0
    if (ctx->r24 == ctx->r12) {
        // 0x80220F28: nop
    
            goto L_80220FB0;
    }
    // 0x80220F28: nop

    // 0x80220F2C: bne         $at, $zero, L_80220F58
    if (ctx->r1 != 0) {
        // 0x80220F30: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_80220F58;
    }
    // 0x80220F30: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x80220F34: lw          $v0, 0x0($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X0);
    // 0x80220F38: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80220F3C: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x80220F40: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x80220F44: sw          $t9, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r25;
    // 0x80220F48: lui         $t6, 0x600
    ctx->r14 = S32(0X600 << 16);
    // 0x80220F4C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80220F50: b           L_80220FB0
    // 0x80220F54: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
        goto L_80220FB0;
    // 0x80220F54: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
L_80220F58:
    // 0x80220F58: sh          $ra, 0x72($sp)
    MEM_H(0X72, ctx->r29) = ctx->r31;
    // 0x80220F5C: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x80220F60: sw          $t0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r8;
    // 0x80220F64: sw          $t1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r9;
    // 0x80220F68: jal         0x80233748
    // 0x80220F6C: sh          $t4, 0x66($sp)
    MEM_H(0X66, ctx->r29) = ctx->r12;
    static_3_80233748(rdram, ctx);
        goto after_5;
    // 0x80220F6C: sh          $t4, 0x66($sp)
    MEM_H(0X66, ctx->r29) = ctx->r12;
    after_5:
    // 0x80220F70: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x80220F74: lhu         $t8, 0x0($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0X0);
    // 0x80220F78: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80220F7C: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x80220F80: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80220F84: addu        $v0, $t9, $t6
    ctx->r2 = ADD32(ctx->r25, ctx->r14);
    // 0x80220F88: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x80220F8C: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x80220F90: addiu       $t2, $t2, 0x0
    ctx->r10 = ADD32(ctx->r10, 0X0);
    // 0x80220F94: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80220F98: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80220F9C: lw          $t0, 0x6C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X6C);
    // 0x80220FA0: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x80220FA4: lhu         $t4, 0x66($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X66);
    // 0x80220FA8: lhu         $ra, 0x72($sp)
    ctx->r31 = MEM_HU(ctx->r29, 0X72);
    // 0x80220FAC: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
L_80220FB0:
    // 0x80220FB0: beq         $t0, $zero, L_80220FC0
    if (ctx->r8 == 0) {
        // 0x80220FB4: lui         $a1, 0x0
        ctx->r5 = S32(0X0 << 16);
            goto L_80220FC0;
    }
    // 0x80220FB4: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80220FB8: b           L_80220FC4
    // 0x80220FBC: lbu         $a2, 0x27($t0)
    ctx->r6 = MEM_BU(ctx->r8, 0X27);
        goto L_80220FC4;
    // 0x80220FBC: lbu         $a2, 0x27($t0)
    ctx->r6 = MEM_BU(ctx->r8, 0X27);
L_80220FC0:
    // 0x80220FC0: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
L_80220FC4:
    // 0x80220FC4: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80220FC8: lbu         $t9, 0x0($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0X0);
    // 0x80220FCC: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x80220FD0: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x80220FD4: beql        $a2, $t9, L_8022104C
    if (ctx->r6 == ctx->r25) {
        // 0x80220FD8: sll         $t7, $t1, 7
        ctx->r15 = S32(ctx->r9 << 7);
            goto L_8022104C;
    }
    goto skip_4;
    // 0x80220FD8: sll         $t7, $t1, 7
    ctx->r15 = S32(ctx->r9 << 7);
    skip_4:
    // 0x80220FDC: bne         $a2, $t3, L_80221004
    if (ctx->r6 != ctx->r11) {
        // 0x80220FE0: lui         $t9, 0xB900
        ctx->r25 = S32(0XB900 << 16);
            goto L_80221004;
    }
    // 0x80220FE0: lui         $t9, 0xB900
    ctx->r25 = S32(0XB900 << 16);
    // 0x80220FE4: lw          $v0, 0x0($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X0);
    // 0x80220FE8: lui         $t7, 0xB900
    ctx->r15 = S32(0XB900 << 16);
    // 0x80220FEC: ori         $t7, $t7, 0x2
    ctx->r15 = ctx->r15 | 0X2;
    // 0x80220FF0: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80220FF4: sw          $t6, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r14;
    // 0x80220FF8: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80220FFC: b           L_80221044
    // 0x80221000: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
        goto L_80221044;
    // 0x80221000: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
L_80221004:
    // 0x80221004: lw          $v0, 0x0($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X0);
    // 0x80221008: ori         $t9, $t9, 0x2
    ctx->r25 = ctx->r25 | 0X2;
    // 0x8022100C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80221010: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x80221014: sw          $t8, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r24;
    // 0x80221018: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8022101C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80221020: lw          $v0, 0x0($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X0);
    // 0x80221024: andi        $t9, $a2, 0xFF
    ctx->r25 = ctx->r6 & 0XFF;
    // 0x80221028: addiu       $at, $zero, -0x100
    ctx->r1 = ADD32(0, -0X100);
    // 0x8022102C: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x80221030: sw          $t7, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r15;
    // 0x80221034: or          $t6, $t9, $at
    ctx->r14 = ctx->r25 | ctx->r1;
    // 0x80221038: lui         $t8, 0xF900
    ctx->r24 = S32(0XF900 << 16);
    // 0x8022103C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80221040: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
L_80221044:
    // 0x80221044: sb          $a2, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r6;
    // 0x80221048: sll         $t7, $t1, 7
    ctx->r15 = S32(ctx->r9 << 7);
L_8022104C:
    // 0x8022104C: bgez        $t7, L_8022105C
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80221050: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_8022105C;
    }
    // 0x80221050: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80221054: b           L_8022105C
    // 0x80221058: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
        goto L_8022105C;
    // 0x80221058: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
L_8022105C:
    // 0x8022105C: sh          $ra, 0x72($sp)
    MEM_H(0X72, ctx->r29) = ctx->r31;
    // 0x80221060: sw          $a2, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r6;
    // 0x80221064: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x80221068: sw          $t0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r8;
    // 0x8022106C: sw          $t1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r9;
    // 0x80221070: jal         0x802234A4
    // 0x80221074: sh          $t4, 0x66($sp)
    MEM_H(0X66, ctx->r29) = ctx->r12;
    static_3_802234A4(rdram, ctx);
        goto after_6;
    // 0x80221074: sh          $t4, 0x66($sp)
    MEM_H(0X66, ctx->r29) = ctx->r12;
    after_6:
    // 0x80221078: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x8022107C: lui         $v1, 0x1E0
    ctx->r3 = S32(0X1E0 << 16);
    // 0x80221080: lui         $at, 0xE0
    ctx->r1 = S32(0XE0 << 16);
    // 0x80221084: ori         $at, $at, 0x1
    ctx->r1 = ctx->r1 | 0X1;
    // 0x80221088: and         $v0, $v1, $t1
    ctx->r2 = ctx->r3 & ctx->r9;
    // 0x8022108C: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x80221090: lui         $t5, 0x1E0
    ctx->r13 = S32(0X1E0 << 16);
    // 0x80221094: sltu        $at, $v0, $at
    ctx->r1 = ctx->r2 < ctx->r1 ? 1 : 0;
    // 0x80221098: addiu       $t2, $t2, 0x0
    ctx->r10 = ADD32(ctx->r10, 0X0);
    // 0x8022109C: lw          $a2, 0x74($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X74);
    // 0x802210A0: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x802210A4: lw          $t0, 0x6C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X6C);
    // 0x802210A8: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x802210AC: lhu         $t4, 0x66($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X66);
    // 0x802210B0: lhu         $ra, 0x72($sp)
    ctx->r31 = MEM_HU(ctx->r29, 0X72);
    // 0x802210B4: bne         $at, $zero, L_80221114
    if (ctx->r1 != 0) {
        // 0x802210B8: sw          $t5, 0x60($sp)
        MEM_W(0X60, ctx->r29) = ctx->r13;
            goto L_80221114;
    }
    // 0x802210B8: sw          $t5, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r13;
    // 0x802210BC: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x802210C0: beq         $v0, $at, L_80221184
    if (ctx->r2 == ctx->r1) {
        // 0x802210C4: lui         $a0, 0x11
        ctx->r4 = S32(0X11 << 16);
            goto L_80221184;
    }
    // 0x802210C4: lui         $a0, 0x11
    ctx->r4 = S32(0X11 << 16);
    // 0x802210C8: lui         $at, 0x120
    ctx->r1 = S32(0X120 << 16);
    // 0x802210CC: beq         $v0, $at, L_80221184
    if (ctx->r2 == ctx->r1) {
        // 0x802210D0: lui         $at, 0x140
        ctx->r1 = S32(0X140 << 16);
            goto L_80221184;
    }
    // 0x802210D0: lui         $at, 0x140
    ctx->r1 = S32(0X140 << 16);
    // 0x802210D4: beq         $v0, $at, L_8022117C
    if (ctx->r2 == ctx->r1) {
        // 0x802210D8: lui         $a0, 0x11
        ctx->r4 = S32(0X11 << 16);
            goto L_8022117C;
    }
    // 0x802210D8: lui         $a0, 0x11
    ctx->r4 = S32(0X11 << 16);
    // 0x802210DC: lui         $at, 0x160
    ctx->r1 = S32(0X160 << 16);
    // 0x802210E0: beq         $v0, $at, L_8022117C
    if (ctx->r2 == ctx->r1) {
        // 0x802210E4: lui         $at, 0x180
        ctx->r1 = S32(0X180 << 16);
            goto L_8022117C;
    }
    // 0x802210E4: lui         $at, 0x180
    ctx->r1 = S32(0X180 << 16);
    // 0x802210E8: beq         $v0, $at, L_80221174
    if (ctx->r2 == ctx->r1) {
        // 0x802210EC: lui         $a0, 0x10
        ctx->r4 = S32(0X10 << 16);
            goto L_80221174;
    }
    // 0x802210EC: lui         $a0, 0x10
    ctx->r4 = S32(0X10 << 16);
    // 0x802210F0: lui         $at, 0x1A0
    ctx->r1 = S32(0X1A0 << 16);
    // 0x802210F4: beq         $v0, $at, L_80221174
    if (ctx->r2 == ctx->r1) {
        // 0x802210F8: lui         $at, 0x1C0
        ctx->r1 = S32(0X1C0 << 16);
            goto L_80221174;
    }
    // 0x802210F8: lui         $at, 0x1C0
    ctx->r1 = S32(0X1C0 << 16);
    // 0x802210FC: beq         $v0, $at, L_8022116C
    if (ctx->r2 == ctx->r1) {
        // 0x80221100: lui         $a0, 0x10
        ctx->r4 = S32(0X10 << 16);
            goto L_8022116C;
    }
    // 0x80221100: lui         $a0, 0x10
    ctx->r4 = S32(0X10 << 16);
    // 0x80221104: beq         $v0, $v1, L_8022116C
    if (ctx->r2 == ctx->r3) {
        // 0x80221108: nop
    
            goto L_8022116C;
    }
    // 0x80221108: nop

    // 0x8022110C: b           L_802212B4
    // 0x80221110: nop

        goto L_802212B4;
    // 0x80221110: nop

L_80221114:
    // 0x80221114: beq         $v0, $zero, L_802212AC
    if (ctx->r2 == 0) {
        // 0x80221118: lui         $a0, 0x302
        ctx->r4 = S32(0X302 << 16);
            goto L_802212AC;
    }
    // 0x80221118: lui         $a0, 0x302
    ctx->r4 = S32(0X302 << 16);
    // 0x8022111C: lui         $at, 0x20
    ctx->r1 = S32(0X20 << 16);
    // 0x80221120: beq         $v0, $at, L_80221280
    if (ctx->r2 == ctx->r1) {
        // 0x80221124: lui         $a0, 0x11
        ctx->r4 = S32(0X11 << 16);
            goto L_80221280;
    }
    // 0x80221124: lui         $a0, 0x11
    ctx->r4 = S32(0X11 << 16);
    // 0x80221128: lui         $at, 0x40
    ctx->r1 = S32(0X40 << 16);
    // 0x8022112C: beq         $v0, $at, L_80221288
    if (ctx->r2 == ctx->r1) {
        // 0x80221130: lui         $a0, 0x10
        ctx->r4 = S32(0X10 << 16);
            goto L_80221288;
    }
    // 0x80221130: lui         $a0, 0x10
    ctx->r4 = S32(0X10 << 16);
    // 0x80221134: lui         $at, 0x60
    ctx->r1 = S32(0X60 << 16);
    // 0x80221138: beq         $v0, $at, L_80221278
    if (ctx->r2 == ctx->r1) {
        // 0x8022113C: lui         $a0, 0x10
        ctx->r4 = S32(0X10 << 16);
            goto L_80221278;
    }
    // 0x8022113C: lui         $a0, 0x10
    ctx->r4 = S32(0X10 << 16);
    // 0x80221140: lui         $at, 0x80
    ctx->r1 = S32(0X80 << 16);
    // 0x80221144: beq         $v0, $at, L_80221290
    if (ctx->r2 == ctx->r1) {
        // 0x80221148: lui         $at, 0xA0
        ctx->r1 = S32(0XA0 << 16);
            goto L_80221290;
    }
    // 0x80221148: lui         $at, 0xA0
    ctx->r1 = S32(0XA0 << 16);
    // 0x8022114C: beq         $v0, $at, L_8022125C
    if (ctx->r2 == ctx->r1) {
        // 0x80221150: lui         $at, 0xC0
        ctx->r1 = S32(0XC0 << 16);
            goto L_8022125C;
    }
    // 0x80221150: lui         $at, 0xC0
    ctx->r1 = S32(0XC0 << 16);
    // 0x80221154: beq         $v0, $at, L_802211F4
    if (ctx->r2 == ctx->r1) {
        // 0x80221158: lui         $at, 0xE0
        ctx->r1 = S32(0XE0 << 16);
            goto L_802211F4;
    }
    // 0x80221158: lui         $at, 0xE0
    ctx->r1 = S32(0XE0 << 16);
    // 0x8022115C: beql        $v0, $at, L_80221190
    if (ctx->r2 == ctx->r1) {
        // 0x80221160: addiu       $at, $zero, 0xFFF
        ctx->r1 = ADD32(0, 0XFFF);
            goto L_80221190;
    }
    goto skip_5;
    // 0x80221160: addiu       $at, $zero, 0xFFF
    ctx->r1 = ADD32(0, 0XFFF);
    skip_5:
    // 0x80221164: b           L_802212B4
    // 0x80221168: nop

        goto L_802212B4;
    // 0x80221168: nop

L_8022116C:
    // 0x8022116C: b           L_802212EC
    // 0x80221170: ori         $a0, $a0, 0x4DD8
    ctx->r4 = ctx->r4 | 0X4DD8;
        goto L_802212EC;
    // 0x80221170: ori         $a0, $a0, 0x4DD8
    ctx->r4 = ctx->r4 | 0X4DD8;
L_80221174:
    // 0x80221174: b           L_802212EC
    // 0x80221178: ori         $a0, $a0, 0x4E50
    ctx->r4 = ctx->r4 | 0X4E50;
        goto L_802212EC;
    // 0x80221178: ori         $a0, $a0, 0x4E50
    ctx->r4 = ctx->r4 | 0X4E50;
L_8022117C:
    // 0x8022117C: b           L_802212EC
    // 0x80221180: ori         $a0, $a0, 0x2D58
    ctx->r4 = ctx->r4 | 0X2D58;
        goto L_802212EC;
    // 0x80221180: ori         $a0, $a0, 0x2D58
    ctx->r4 = ctx->r4 | 0X2D58;
L_80221184:
    // 0x80221184: b           L_802212EC
    // 0x80221188: ori         $a0, $a0, 0x2E10
    ctx->r4 = ctx->r4 | 0X2E10;
        goto L_802212EC;
    // 0x80221188: ori         $a0, $a0, 0x2E10
    ctx->r4 = ctx->r4 | 0X2E10;
    // 0x8022118C: addiu       $at, $zero, 0xFFF
    ctx->r1 = ADD32(0, 0XFFF);
L_80221190:
    // 0x80221190: bne         $a3, $at, L_802211A0
    if (ctx->r7 != ctx->r1) {
        // 0x80221194: lui         $a0, 0x10
        ctx->r4 = S32(0X10 << 16);
            goto L_802211A0;
    }
    // 0x80221194: lui         $a0, 0x10
    ctx->r4 = S32(0X10 << 16);
    // 0x80221198: b           L_802212EC
    // 0x8022119C: ori         $a0, $a0, 0x45D8
    ctx->r4 = ctx->r4 | 0X45D8;
        goto L_802212EC;
    // 0x8022119C: ori         $a0, $a0, 0x45D8
    ctx->r4 = ctx->r4 | 0X45D8;
L_802211A0:
    // 0x802211A0: beq         $a2, $t3, L_802211B0
    if (ctx->r6 == ctx->r11) {
        // 0x802211A4: lui         $a0, 0x10
        ctx->r4 = S32(0X10 << 16);
            goto L_802211B0;
    }
    // 0x802211A4: lui         $a0, 0x10
    ctx->r4 = S32(0X10 << 16);
    // 0x802211A8: b           L_802212EC
    // 0x802211AC: ori         $a0, $a0, 0x5278
    ctx->r4 = ctx->r4 | 0X5278;
        goto L_802212EC;
    // 0x802211AC: ori         $a0, $a0, 0x5278
    ctx->r4 = ctx->r4 | 0X5278;
L_802211B0:
    // 0x802211B0: lhu         $t8, 0x12($t0)
    ctx->r24 = MEM_HU(ctx->r8, 0X12);
    // 0x802211B4: lui         $a0, 0x10
    ctx->r4 = S32(0X10 << 16);
    // 0x802211B8: andi        $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 & 0X8000;
    // 0x802211BC: bne         $t9, $zero, L_802211E0
    if (ctx->r25 != 0) {
        // 0x802211C0: nop
    
            goto L_802211E0;
    }
    // 0x802211C0: nop

    // 0x802211C4: lbu         $t6, 0x22($t0)
    ctx->r14 = MEM_BU(ctx->r8, 0X22);
    // 0x802211C8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802211CC: sll         $t7, $t1, 5
    ctx->r15 = S32(ctx->r9 << 5);
    // 0x802211D0: beq         $t6, $at, L_802211E0
    if (ctx->r14 == ctx->r1) {
        // 0x802211D4: nop
    
            goto L_802211E0;
    }
    // 0x802211D4: nop

    // 0x802211D8: bgezl       $t7, L_802211EC
    if (SIGNED(ctx->r15) >= 0) {
        // 0x802211DC: lui         $a0, 0x10
        ctx->r4 = S32(0X10 << 16);
            goto L_802211EC;
    }
    goto skip_6;
    // 0x802211DC: lui         $a0, 0x10
    ctx->r4 = S32(0X10 << 16);
    skip_6:
L_802211E0:
    // 0x802211E0: b           L_802212EC
    // 0x802211E4: ori         $a0, $a0, 0x49D8
    ctx->r4 = ctx->r4 | 0X49D8;
        goto L_802212EC;
    // 0x802211E4: ori         $a0, $a0, 0x49D8
    ctx->r4 = ctx->r4 | 0X49D8;
    // 0x802211E8: lui         $a0, 0x10
    ctx->r4 = S32(0X10 << 16);
L_802211EC:
    // 0x802211EC: b           L_802212EC
    // 0x802211F0: ori         $a0, $a0, 0x3078
    ctx->r4 = ctx->r4 | 0X3078;
        goto L_802212EC;
    // 0x802211F0: ori         $a0, $a0, 0x3078
    ctx->r4 = ctx->r4 | 0X3078;
L_802211F4:
    // 0x802211F4: addiu       $at, $zero, 0xFFF
    ctx->r1 = ADD32(0, 0XFFF);
    // 0x802211F8: bne         $a3, $at, L_80221208
    if (ctx->r7 != ctx->r1) {
        // 0x802211FC: lui         $a0, 0x10
        ctx->r4 = S32(0X10 << 16);
            goto L_80221208;
    }
    // 0x802211FC: lui         $a0, 0x10
    ctx->r4 = S32(0X10 << 16);
    // 0x80221200: b           L_802212EC
    // 0x80221204: ori         $a0, $a0, 0x41C8
    ctx->r4 = ctx->r4 | 0X41C8;
        goto L_802212EC;
    // 0x80221204: ori         $a0, $a0, 0x41C8
    ctx->r4 = ctx->r4 | 0X41C8;
L_80221208:
    // 0x80221208: beq         $a2, $t3, L_80221218
    if (ctx->r6 == ctx->r11) {
        // 0x8022120C: lui         $a0, 0x10
        ctx->r4 = S32(0X10 << 16);
            goto L_80221218;
    }
    // 0x8022120C: lui         $a0, 0x10
    ctx->r4 = S32(0X10 << 16);
    // 0x80221210: b           L_802212EC
    // 0x80221214: ori         $a0, $a0, 0x5278
    ctx->r4 = ctx->r4 | 0X5278;
        goto L_802212EC;
    // 0x80221214: ori         $a0, $a0, 0x5278
    ctx->r4 = ctx->r4 | 0X5278;
L_80221218:
    // 0x80221218: lhu         $t8, 0x12($t0)
    ctx->r24 = MEM_HU(ctx->r8, 0X12);
    // 0x8022121C: lui         $a0, 0x10
    ctx->r4 = S32(0X10 << 16);
    // 0x80221220: andi        $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 & 0X8000;
    // 0x80221224: bne         $t9, $zero, L_80221248
    if (ctx->r25 != 0) {
        // 0x80221228: nop
    
            goto L_80221248;
    }
    // 0x80221228: nop

    // 0x8022122C: lbu         $t6, 0x22($t0)
    ctx->r14 = MEM_BU(ctx->r8, 0X22);
    // 0x80221230: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80221234: sll         $t7, $t1, 5
    ctx->r15 = S32(ctx->r9 << 5);
    // 0x80221238: beq         $t6, $at, L_80221248
    if (ctx->r14 == ctx->r1) {
        // 0x8022123C: nop
    
            goto L_80221248;
    }
    // 0x8022123C: nop

    // 0x80221240: bgezl       $t7, L_80221254
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80221244: lui         $a0, 0x10
        ctx->r4 = S32(0X10 << 16);
            goto L_80221254;
    }
    goto skip_7;
    // 0x80221244: lui         $a0, 0x10
    ctx->r4 = S32(0X10 << 16);
    skip_7:
L_80221248:
    // 0x80221248: b           L_802212EC
    // 0x8022124C: ori         $a0, $a0, 0x41C8
    ctx->r4 = ctx->r4 | 0X41C8;
        goto L_802212EC;
    // 0x8022124C: ori         $a0, $a0, 0x41C8
    ctx->r4 = ctx->r4 | 0X41C8;
    // 0x80221250: lui         $a0, 0x10
    ctx->r4 = S32(0X10 << 16);
L_80221254:
    // 0x80221254: b           L_802212EC
    // 0x80221258: ori         $a0, $a0, 0x3048
    ctx->r4 = ctx->r4 | 0X3048;
        goto L_802212EC;
    // 0x80221258: ori         $a0, $a0, 0x3048
    ctx->r4 = ctx->r4 | 0X3048;
L_8022125C:
    // 0x8022125C: bne         $a2, $t3, L_80221270
    if (ctx->r6 != ctx->r11) {
        // 0x80221260: lui         $a0, 0x10
        ctx->r4 = S32(0X10 << 16);
            goto L_80221270;
    }
    // 0x80221260: lui         $a0, 0x10
    ctx->r4 = S32(0X10 << 16);
    // 0x80221264: lui         $a0, 0x10
    ctx->r4 = S32(0X10 << 16);
    // 0x80221268: b           L_802212EC
    // 0x8022126C: ori         $a0, $a0, 0x4A50
    ctx->r4 = ctx->r4 | 0X4A50;
        goto L_802212EC;
    // 0x8022126C: ori         $a0, $a0, 0x4A50
    ctx->r4 = ctx->r4 | 0X4A50;
L_80221270:
    // 0x80221270: b           L_802212EC
    // 0x80221274: ori         $a0, $a0, 0x5278
    ctx->r4 = ctx->r4 | 0X5278;
        goto L_802212EC;
    // 0x80221274: ori         $a0, $a0, 0x5278
    ctx->r4 = ctx->r4 | 0X5278;
L_80221278:
    // 0x80221278: b           L_802212EC
    // 0x8022127C: ori         $a0, $a0, 0x2078
    ctx->r4 = ctx->r4 | 0X2078;
        goto L_802212EC;
    // 0x8022127C: ori         $a0, $a0, 0x2078
    ctx->r4 = ctx->r4 | 0X2078;
L_80221280:
    // 0x80221280: b           L_802212EC
    // 0x80221284: ori         $a0, $a0, 0x2230
    ctx->r4 = ctx->r4 | 0X2230;
        goto L_802212EC;
    // 0x80221284: ori         $a0, $a0, 0x2230
    ctx->r4 = ctx->r4 | 0X2230;
L_80221288:
    // 0x80221288: b           L_802212EC
    // 0x8022128C: ori         $a0, $a0, 0x2048
    ctx->r4 = ctx->r4 | 0X2048;
        goto L_802212EC;
    // 0x8022128C: ori         $a0, $a0, 0x2048
    ctx->r4 = ctx->r4 | 0X2048;
L_80221290:
    // 0x80221290: bne         $a2, $t3, L_802212A4
    if (ctx->r6 != ctx->r11) {
        // 0x80221294: lui         $a0, 0x10
        ctx->r4 = S32(0X10 << 16);
            goto L_802212A4;
    }
    // 0x80221294: lui         $a0, 0x10
    ctx->r4 = S32(0X10 << 16);
    // 0x80221298: lui         $a0, 0x10
    ctx->r4 = S32(0X10 << 16);
    // 0x8022129C: b           L_802212EC
    // 0x802212A0: ori         $a0, $a0, 0x4240
    ctx->r4 = ctx->r4 | 0X4240;
        goto L_802212EC;
    // 0x802212A0: ori         $a0, $a0, 0x4240
    ctx->r4 = ctx->r4 | 0X4240;
L_802212A4:
    // 0x802212A4: b           L_802212EC
    // 0x802212A8: ori         $a0, $a0, 0x5278
    ctx->r4 = ctx->r4 | 0X5278;
        goto L_802212EC;
    // 0x802212A8: ori         $a0, $a0, 0x5278
    ctx->r4 = ctx->r4 | 0X5278;
L_802212AC:
    // 0x802212AC: b           L_802212EC
    // 0x802212B0: ori         $a0, $a0, 0x4000
    ctx->r4 = ctx->r4 | 0X4000;
        goto L_802212EC;
    // 0x802212B0: ori         $a0, $a0, 0x4000
    ctx->r4 = ctx->r4 | 0X4000;
L_802212B4:
    // 0x802212B4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802212B8: sh          $ra, 0x72($sp)
    MEM_H(0X72, ctx->r29) = ctx->r31;
    // 0x802212BC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802212C0: and         $a1, $t5, $t1
    ctx->r5 = ctx->r13 & ctx->r9;
    // 0x802212C4: sw          $t1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r9;
    // 0x802212C8: jal         0x80231A24
    // 0x802212CC: sh          $t4, 0x66($sp)
    MEM_H(0X66, ctx->r29) = ctx->r12;
    static_3_80231A24(rdram, ctx);
        goto after_7;
    // 0x802212CC: sh          $t4, 0x66($sp)
    MEM_H(0X66, ctx->r29) = ctx->r12;
    after_7:
    // 0x802212D0: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x802212D4: lui         $a0, 0x302
    ctx->r4 = S32(0X302 << 16);
    // 0x802212D8: addiu       $t2, $t2, 0x0
    ctx->r10 = ADD32(ctx->r10, 0X0);
    // 0x802212DC: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x802212E0: lhu         $t4, 0x66($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X66);
    // 0x802212E4: lhu         $ra, 0x72($sp)
    ctx->r31 = MEM_HU(ctx->r29, 0X72);
    // 0x802212E8: ori         $a0, $a0, 0x4000
    ctx->r4 = ctx->r4 | 0X4000;
L_802212EC:
    // 0x802212EC: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x802212F0: lui         $t7, 0xB900
    ctx->r15 = S32(0XB900 << 16);
    // 0x802212F4: sll         $t9, $t1, 3
    ctx->r25 = S32(ctx->r9 << 3);
    // 0x802212F8: beq         $t8, $zero, L_80221308
    if (ctx->r24 == 0) {
        // 0x802212FC: ori         $t7, $t7, 0x31D
        ctx->r15 = ctx->r15 | 0X31D;
            goto L_80221308;
    }
    // 0x802212FC: ori         $t7, $t7, 0x31D
    ctx->r15 = ctx->r15 | 0X31D;
    // 0x80221300: b           L_8022130C
    // 0x80221304: lui         $a1, 0xC800
    ctx->r5 = S32(0XC800 << 16);
        goto L_8022130C;
    // 0x80221304: lui         $a1, 0xC800
    ctx->r5 = S32(0XC800 << 16);
L_80221308:
    // 0x80221308: lui         $a1, 0xC08
    ctx->r5 = S32(0XC08 << 16);
L_8022130C:
    // 0x8022130C: bgezl       $t9, L_80221320
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80221310: lw          $v0, 0x0($t2)
        ctx->r2 = MEM_W(ctx->r10, 0X0);
            goto L_80221320;
    }
    goto skip_8;
    // 0x80221310: lw          $v0, 0x0($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X0);
    skip_8:
    // 0x80221314: lui         $a0, 0x5E
    ctx->r4 = S32(0X5E << 16);
    // 0x80221318: ori         $a0, $a0, 0x5278
    ctx->r4 = ctx->r4 | 0X5278;
    // 0x8022131C: lw          $v0, 0x0($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X0);
L_80221320:
    // 0x80221320: or          $t8, $a1, $a0
    ctx->r24 = ctx->r5 | ctx->r4;
    // 0x80221324: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80221328: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8022132C: sw          $t6, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r14;
    // 0x80221330: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x80221334: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80221338: sw          $t4, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r12;
    // 0x8022133C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80221340: sw          $t1, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r9;
    // 0x80221344: sh          $ra, 0x72($sp)
    MEM_H(0X72, ctx->r29) = ctx->r31;
L_80221348:
    // 0x80221348: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x8022134C: sll         $t9, $t1, 0
    ctx->r25 = S32(ctx->r9 << 0);
    // 0x80221350: addiu       $t2, $t2, 0x0
    ctx->r10 = ADD32(ctx->r10, 0X0);
    // 0x80221354: bgez        $t9, L_802213BC
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80221358: lhu         $ra, 0x72($sp)
        ctx->r31 = MEM_HU(ctx->r29, 0X72);
            goto L_802213BC;
    }
    // 0x80221358: lhu         $ra, 0x72($sp)
    ctx->r31 = MEM_HU(ctx->r29, 0X72);
    // 0x8022135C: lw          $t6, 0x60($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X60);
    // 0x80221360: lui         $at, 0xE0
    ctx->r1 = S32(0XE0 << 16);
    // 0x80221364: and         $t7, $t6, $t1
    ctx->r15 = ctx->r14 & ctx->r9;
    // 0x80221368: bne         $t7, $at, L_802213BC
    if (ctx->r15 != ctx->r1) {
        // 0x8022136C: addiu       $at, $zero, 0xFFF
        ctx->r1 = ADD32(0, 0XFFF);
            goto L_802213BC;
    }
    // 0x8022136C: addiu       $at, $zero, 0xFFF
    ctx->r1 = ADD32(0, 0XFFF);
    // 0x80221370: bne         $ra, $at, L_802213A0
    if (ctx->r31 != ctx->r1) {
        // 0x80221374: lui         $t8, 0xFC12
        ctx->r24 = S32(0XFC12 << 16);
            goto L_802213A0;
    }
    // 0x80221374: lui         $t8, 0xFC12
    ctx->r24 = S32(0XFC12 << 16);
    // 0x80221378: lw          $v0, 0x0($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X0);
    // 0x8022137C: lui         $t9, 0xFCFF
    ctx->r25 = S32(0XFCFF << 16);
    // 0x80221380: lui         $t6, 0xFFFE
    ctx->r14 = S32(0XFFFE << 16);
    // 0x80221384: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x80221388: sw          $t8, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r24;
    // 0x8022138C: ori         $t6, $t6, 0x7838
    ctx->r14 = ctx->r14 | 0X7838;
    // 0x80221390: ori         $t9, $t9, 0xFFFF
    ctx->r25 = ctx->r25 | 0XFFFF;
    // 0x80221394: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80221398: b           L_802213BC
    // 0x8022139C: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
        goto L_802213BC;
    // 0x8022139C: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
L_802213A0:
    // 0x802213A0: lw          $v0, 0x0($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X0);
    // 0x802213A4: ori         $t8, $t8, 0x7FFF
    ctx->r24 = ctx->r24 | 0X7FFF;
    // 0x802213A8: addiu       $t9, $zero, -0xDC8
    ctx->r25 = ADD32(0, -0XDC8);
    // 0x802213AC: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x802213B0: sw          $t7, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r15;
    // 0x802213B4: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x802213B8: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
L_802213BC:
    // 0x802213BC: lw          $t6, 0x80($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X80);
    // 0x802213C0: lw          $t7, 0xC($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XC);
    // 0x802213C4: beql        $t7, $zero, L_80221440
    if (ctx->r15 == 0) {
        // 0x802213C8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80221440;
    }
    goto skip_9;
    // 0x802213C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_9:
    // 0x802213CC: lw          $v0, 0x0($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X0);
    // 0x802213D0: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x802213D4: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x802213D8: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x802213DC: sw          $t8, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r24;
    // 0x802213E0: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x802213E4: lw          $t6, 0x80($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X80);
    // 0x802213E8: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x802213EC: addiu       $t9, $t9, 0x0
    ctx->r25 = ADD32(ctx->r25, 0X0);
    // 0x802213F0: lw          $t7, 0xC($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XC);
    // 0x802213F4: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x802213F8: lhu         $v1, 0x0($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X0);
    // 0x802213FC: lw          $t7, 0x80($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X80);
    // 0x80221400: sll         $t8, $v1, 2
    ctx->r24 = S32(ctx->r3 << 2);
    // 0x80221404: addu        $a1, $t8, $t9
    ctx->r5 = ADD32(ctx->r24, ctx->r25);
    // 0x80221408: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
    // 0x8022140C: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x80221410: lh          $t8, 0x4($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X4);
    // 0x80221414: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80221418: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x8022141C: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x80221420: lw          $t8, 0x80($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X80);
    // 0x80221424: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x80221428: addu        $a2, $v1, $t7
    ctx->r6 = ADD32(ctx->r3, ctx->r15);
    // 0x8022142C: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x80221430: lh          $t9, 0x6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X6);
    // 0x80221434: addu        $t7, $t6, $t9
    ctx->r15 = ADD32(ctx->r14, ctx->r25);
    // 0x80221438: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    // 0x8022143C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80221440:
    // 0x80221440: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    // 0x80221444: jr          $ra
    // 0x80221448: nop

    return;
    // 0x80221448: nop

;}
RECOMP_FUNC void D_80225EAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80225EAC: addiu       $sp, $sp, -0xF8
    ctx->r29 = ADD32(ctx->r29, -0XF8);
    // 0x80225EB0: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80225EB4: addiu       $s3, $sp, 0xF8
    ctx->r19 = ADD32(ctx->r29, 0XF8);
    // 0x80225EB8: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80225EBC: sw          $a0, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r4;
    // 0x80225EC0: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x80225EC4: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x80225EC8: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x80225ECC: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x80225ED0: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80225ED4: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80225ED8: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80225EDC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80225EE0: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x80225EE4: addiu       $a0, $sp, 0xBC
    ctx->r4 = ADD32(ctx->r29, 0XBC);
    // 0x80225EE8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80225EEC: jal         0x80225424
    // 0x80225EF0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_0;
    // 0x80225EF0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_0:
    // 0x80225EF4: addiu       $a0, $sp, 0xCE
    ctx->r4 = ADD32(ctx->r29, 0XCE);
    // 0x80225EF8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80225EFC: jal         0x80225424
    // 0x80225F00: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_1;
    // 0x80225F00: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_1:
    // 0x80225F04: addiu       $a0, $sp, 0xCA
    ctx->r4 = ADD32(ctx->r29, 0XCA);
    // 0x80225F08: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80225F0C: jal         0x80225424
    // 0x80225F10: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_2;
    // 0x80225F10: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_2:
    // 0x80225F14: addiu       $a0, $sp, 0xCC
    ctx->r4 = ADD32(ctx->r29, 0XCC);
    // 0x80225F18: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80225F1C: jal         0x80225424
    // 0x80225F20: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_3;
    // 0x80225F20: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_3:
    // 0x80225F24: lhu         $a0, 0xBC($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0XBC);
    // 0x80225F28: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80225F2C: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x80225F30: jal         0x8022B948
    // 0x80225F34: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_8022B948(rdram, ctx);
        goto after_4;
    // 0x80225F34: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_4:
    // 0x80225F38: lhu         $a2, 0xBC($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0XBC);
    // 0x80225F3C: sw          $v0, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r2;
    // 0x80225F40: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80225F44: sll         $t7, $a2, 4
    ctx->r15 = S32(ctx->r6 << 4);
    // 0x80225F48: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x80225F4C: jal         0x8022B460
    // 0x80225F50: lw          $a1, 0xF8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XF8);
    func_8022B460(rdram, ctx);
        goto after_5;
    // 0x80225F50: lw          $a1, 0xF8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XF8);
    after_5:
    // 0x80225F54: lhu         $t9, 0xBC($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0XBC);
    // 0x80225F58: lw          $t8, 0xF8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XF8);
    // 0x80225F5C: lhu         $a0, 0xCE($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0XCE);
    // 0x80225F60: sll         $t0, $t9, 4
    ctx->r8 = S32(ctx->r25 << 4);
    // 0x80225F64: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x80225F68: sll         $t2, $a0, 3
    ctx->r10 = S32(ctx->r4 << 3);
    // 0x80225F6C: sw          $t1, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r9;
    // 0x80225F70: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x80225F74: jal         0x8022B948
    // 0x80225F78: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8022B948(rdram, ctx);
        goto after_6;
    // 0x80225F78: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_6:
    // 0x80225F7C: lhu         $a2, 0xCE($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0XCE);
    // 0x80225F80: sw          $v0, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r2;
    // 0x80225F84: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80225F88: sll         $t3, $a2, 3
    ctx->r11 = S32(ctx->r6 << 3);
    // 0x80225F8C: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    // 0x80225F90: jal         0x8022B460
    // 0x80225F94: lw          $a1, 0xF8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XF8);
    func_8022B460(rdram, ctx);
        goto after_7;
    // 0x80225F94: lw          $a1, 0xF8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XF8);
    after_7:
    // 0x80225F98: lhu         $t5, 0xCE($sp)
    ctx->r13 = MEM_HU(ctx->r29, 0XCE);
    // 0x80225F9C: lw          $t4, 0xF8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XF8);
    // 0x80225FA0: lhu         $a0, 0xCA($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0XCA);
    // 0x80225FA4: sll         $t6, $t5, 3
    ctx->r14 = S32(ctx->r13 << 3);
    // 0x80225FA8: addu        $t7, $t4, $t6
    ctx->r15 = ADD32(ctx->r12, ctx->r14);
    // 0x80225FAC: sll         $t9, $a0, 5
    ctx->r25 = S32(ctx->r4 << 5);
    // 0x80225FB0: sw          $t7, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r15;
    // 0x80225FB4: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x80225FB8: jal         0x8022B948
    // 0x80225FBC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8022B948(rdram, ctx);
        goto after_8;
    // 0x80225FBC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_8:
    // 0x80225FC0: lhu         $t8, 0xCA($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0XCA);
    // 0x80225FC4: sw          $v0, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r2;
    // 0x80225FC8: sw          $zero, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = 0;
    // 0x80225FCC: blez        $t8, L_80226130
    if (SIGNED(ctx->r24) <= 0) {
        // 0x80225FD0: addiu       $s5, $zero, -0x2
        ctx->r21 = ADD32(0, -0X2);
            goto L_80226130;
    }
    // 0x80225FD0: addiu       $s5, $zero, -0x2
    ctx->r21 = ADD32(0, -0X2);
    // 0x80225FD4: lui         $s4, 0x0
    ctx->r20 = S32(0X0 << 16);
    // 0x80225FD8: addiu       $s4, $s4, 0x0
    ctx->r20 = ADD32(ctx->r20, 0X0);
    // 0x80225FDC: addiu       $s2, $sp, 0xBF
    ctx->r18 = ADD32(ctx->r29, 0XBF);
L_80225FE0:
    // 0x80225FE0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80225FE4: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80225FE8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80225FEC: jal         0x80225424
    // 0x80225FF0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    func_80225424(rdram, ctx);
        goto after_9;
    // 0x80225FF0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    after_9:
    // 0x80225FF4: lbu         $a0, 0xBF($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0XBF);
    // 0x80225FF8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80225FFC: sll         $t0, $a0, 6
    ctx->r8 = S32(ctx->r4 << 6);
    // 0x80226000: jal         0x8022B948
    // 0x80226004: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    func_8022B948(rdram, ctx);
        goto after_10;
    // 0x80226004: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_10:
    // 0x80226008: lw          $t1, 0xC4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XC4);
    // 0x8022600C: lw          $t3, 0xE0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XE0);
    // 0x80226010: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80226014: sll         $t2, $t1, 5
    ctx->r10 = S32(ctx->r9 << 5);
    // 0x80226018: addu        $s1, $t2, $t3
    ctx->r17 = ADD32(ctx->r10, ctx->r11);
    // 0x8022601C: sw          $v0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r2;
    // 0x80226020: lbu         $a2, 0xBF($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0XBF);
    // 0x80226024: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80226028: sll         $t5, $a2, 6
    ctx->r13 = S32(ctx->r6 << 6);
    // 0x8022602C: jal         0x80225424
    // 0x80226030: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    func_80225424(rdram, ctx);
        goto after_11;
    // 0x80226030: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    after_11:
    // 0x80226034: lbu         $a0, 0xBF($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0XBF);
    // 0x80226038: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8022603C: sll         $t4, $a0, 2
    ctx->r12 = S32(ctx->r4 << 2);
    // 0x80226040: jal         0x8022B948
    // 0x80226044: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    func_8022B948(rdram, ctx);
        goto after_12;
    // 0x80226044: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    after_12:
    // 0x80226048: sw          $v0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r2;
    // 0x8022604C: lbu         $t6, 0xBF($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0XBF);
    // 0x80226050: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80226054: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80226058: blez        $t6, L_80226084
    if (SIGNED(ctx->r14) <= 0) {
        // 0x8022605C: or          $a1, $s3, $zero
        ctx->r5 = ctx->r19 | 0;
            goto L_80226084;
    }
    // 0x8022605C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80226060: lw          $t7, 0x8($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X8);
L_80226064:
    // 0x80226064: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80226068: addu        $t9, $t7, $v0
    ctx->r25 = ADD32(ctx->r15, ctx->r2);
    // 0x8022606C: sw          $zero, 0x0($t9)
    MEM_W(0X0, ctx->r25) = 0;
    // 0x80226070: lbu         $t8, 0xBF($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0XBF);
    // 0x80226074: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80226078: slt         $at, $s0, $t8
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x8022607C: bnel        $at, $zero, L_80226064
    if (ctx->r1 != 0) {
        // 0x80226080: lw          $t7, 0x8($s1)
        ctx->r15 = MEM_W(ctx->r17, 0X8);
            goto L_80226064;
    }
    goto skip_0;
    // 0x80226080: lw          $t7, 0x8($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X8);
    skip_0:
L_80226084:
    // 0x80226084: jal         0x80225424
    // 0x80226088: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_13;
    // 0x80226088: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_13:
    // 0x8022608C: addiu       $a0, $s1, 0xC
    ctx->r4 = ADD32(ctx->r17, 0XC);
    // 0x80226090: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80226094: jal         0x80225424
    // 0x80226098: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80225424(rdram, ctx);
        goto after_14;
    // 0x80226098: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_14:
    // 0x8022609C: addiu       $a0, $s1, 0x10
    ctx->r4 = ADD32(ctx->r17, 0X10);
    // 0x802260A0: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x802260A4: jal         0x80225424
    // 0x802260A8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80225424(rdram, ctx);
        goto after_15;
    // 0x802260A8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_15:
    // 0x802260AC: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x802260B0: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x802260B4: jal         0x80225424
    // 0x802260B8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80225424(rdram, ctx);
        goto after_16;
    // 0x802260B8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_16:
    // 0x802260BC: addiu       $a0, $s1, 0x18
    ctx->r4 = ADD32(ctx->r17, 0X18);
    // 0x802260C0: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x802260C4: jal         0x80225424
    // 0x802260C8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_17;
    // 0x802260C8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_17:
    // 0x802260CC: addiu       $a0, $s1, 0x1A
    ctx->r4 = ADD32(ctx->r17, 0X1A);
    // 0x802260D0: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x802260D4: jal         0x80225424
    // 0x802260D8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_18;
    // 0x802260D8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_18:
    // 0x802260DC: sw          $zero, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = 0;
    // 0x802260E0: lw          $t0, 0x0($s4)
    ctx->r8 = MEM_W(ctx->r20, 0X0);
    // 0x802260E4: lhu         $t2, 0x0($s1)
    ctx->r10 = MEM_HU(ctx->r17, 0X0);
    // 0x802260E8: lw          $t1, 0x1C($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X1C);
    // 0x802260EC: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x802260F0: addu        $t5, $t1, $t3
    ctx->r13 = ADD32(ctx->r9, ctx->r11);
    // 0x802260F4: lw          $v0, 0x0($t5)
    ctx->r2 = MEM_W(ctx->r13, 0X0);
    // 0x802260F8: beql        $v0, $zero, L_80226118
    if (ctx->r2 == 0) {
        // 0x802260FC: lw          $v0, 0xC4($sp)
        ctx->r2 = MEM_W(ctx->r29, 0XC4);
            goto L_80226118;
    }
    goto skip_1;
    // 0x802260FC: lw          $v0, 0xC4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XC4);
    skip_1:
    // 0x80226100: lbu         $t4, 0x11($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X11);
    // 0x80226104: andi        $t6, $t4, 0x8
    ctx->r14 = ctx->r12 & 0X8;
    // 0x80226108: beql        $t6, $zero, L_80226118
    if (ctx->r14 == 0) {
        // 0x8022610C: lw          $v0, 0xC4($sp)
        ctx->r2 = MEM_W(ctx->r29, 0XC4);
            goto L_80226118;
    }
    goto skip_2;
    // 0x8022610C: lw          $v0, 0xC4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XC4);
    skip_2:
    // 0x80226110: sw          $s5, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r21;
    // 0x80226114: lw          $v0, 0xC4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XC4);
L_80226118:
    // 0x80226118: lhu         $t7, 0xCA($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0XCA);
    // 0x8022611C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226120: slt         $at, $v0, $t7
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80226124: bne         $at, $zero, L_80225FE0
    if (ctx->r1 != 0) {
        // 0x80226128: sw          $v0, 0xC4($sp)
        MEM_W(0XC4, ctx->r29) = ctx->r2;
            goto L_80225FE0;
    }
    // 0x80226128: sw          $v0, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r2;
    // 0x8022612C: sw          $zero, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = 0;
L_80226130:
    // 0x80226130: lhu         $a0, 0xCC($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0XCC);
    // 0x80226134: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80226138: sll         $t9, $a0, 2
    ctx->r25 = S32(ctx->r4 << 2);
    // 0x8022613C: subu        $t9, $t9, $a0
    ctx->r25 = SUB32(ctx->r25, ctx->r4);
    // 0x80226140: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80226144: subu        $t9, $t9, $a0
    ctx->r25 = SUB32(ctx->r25, ctx->r4);
    // 0x80226148: jal         0x8022B948
    // 0x8022614C: sll         $a0, $t9, 2
    ctx->r4 = S32(ctx->r25 << 2);
    func_8022B948(rdram, ctx);
        goto after_19;
    // 0x8022614C: sll         $a0, $t9, 2
    ctx->r4 = S32(ctx->r25 << 2);
    after_19:
    // 0x80226150: lhu         $t8, 0xCC($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0XCC);
    // 0x80226154: sw          $v0, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r2;
    // 0x80226158: addiu       $t0, $v0, 0x28
    ctx->r8 = ADD32(ctx->r2, 0X28);
    // 0x8022615C: blez        $t8, L_80226668
    if (SIGNED(ctx->r24) <= 0) {
        // 0x80226160: addiu       $t2, $v0, 0x24
        ctx->r10 = ADD32(ctx->r2, 0X24);
            goto L_80226668;
    }
    // 0x80226160: addiu       $t2, $v0, 0x24
    ctx->r10 = ADD32(ctx->r2, 0X24);
    // 0x80226164: addiu       $t1, $v0, 0x20
    ctx->r9 = ADD32(ctx->r2, 0X20);
    // 0x80226168: addiu       $t3, $v0, 0x1C
    ctx->r11 = ADD32(ctx->r2, 0X1C);
    // 0x8022616C: addiu       $t5, $v0, 0x18
    ctx->r13 = ADD32(ctx->r2, 0X18);
    // 0x80226170: addiu       $t4, $v0, 0x16
    ctx->r12 = ADD32(ctx->r2, 0X16);
    // 0x80226174: addiu       $t6, $v0, 0x6
    ctx->r14 = ADD32(ctx->r2, 0X6);
    // 0x80226178: addiu       $t7, $v0, 0x4
    ctx->r15 = ADD32(ctx->r2, 0X4);
    // 0x8022617C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80226180: lwc1        $f20, 0x0($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80226184: sw          $t7, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r15;
    // 0x80226188: sw          $t6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r14;
    // 0x8022618C: sw          $t4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r12;
    // 0x80226190: sw          $t5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r13;
    // 0x80226194: sw          $t3, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r11;
    // 0x80226198: sw          $t1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r9;
    // 0x8022619C: sw          $t0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r8;
    // 0x802261A0: sw          $t2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r10;
    // 0x802261A4: sw          $v0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r2;
    // 0x802261A8: lui         $fp, 0x8000
    ctx->r30 = S32(0X8000 << 16);
    // 0x802261AC: lui         $s7, 0x400
    ctx->r23 = S32(0X400 << 16);
    // 0x802261B0: addiu       $s6, $sp, 0xBE
    ctx->r22 = ADD32(ctx->r29, 0XBE);
    // 0x802261B4: lui         $s5, 0xBF00
    ctx->r21 = S32(0XBF00 << 16);
    // 0x802261B8: addiu       $s4, $sp, 0xB8
    ctx->r20 = ADD32(ctx->r29, 0XB8);
    // 0x802261BC: addiu       $s2, $zero, 0xA
    ctx->r18 = ADD32(0, 0XA);
L_802261C0:
    // 0x802261C0: lw          $a0, 0x74($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X74);
    // 0x802261C4: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x802261C8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x802261CC: jal         0x80225424
    // 0x802261D0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    func_80225424(rdram, ctx);
        goto after_20;
    // 0x802261D0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    after_20:
    // 0x802261D4: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x802261D8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x802261DC: jal         0x80225424
    // 0x802261E0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_21;
    // 0x802261E0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_21:
    // 0x802261E4: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x802261E8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x802261EC: jal         0x80225424
    // 0x802261F0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_22;
    // 0x802261F0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_22:
    // 0x802261F4: addiu       $a0, $sp, 0xB4
    ctx->r4 = ADD32(ctx->r29, 0XB4);
    // 0x802261F8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x802261FC: jal         0x80225424
    // 0x80226200: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80225424(rdram, ctx);
        goto after_23;
    // 0x80226200: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_23:
    // 0x80226204: addiu       $a0, $sp, 0xB0
    ctx->r4 = ADD32(ctx->r29, 0XB0);
    // 0x80226208: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8022620C: jal         0x80225424
    // 0x80226210: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80225424(rdram, ctx);
        goto after_24;
    // 0x80226210: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_24:
    // 0x80226214: addiu       $a0, $sp, 0xAC
    ctx->r4 = ADD32(ctx->r29, 0XAC);
    // 0x80226218: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8022621C: jal         0x80225424
    // 0x80226220: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80225424(rdram, ctx);
        goto after_25;
    // 0x80226220: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_25:
    // 0x80226224: lw          $t9, 0x74($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X74);
    // 0x80226228: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8022622C: lw          $t5, 0x74($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X74);
    // 0x80226230: lw          $t8, 0x0($t9)
    ctx->r24 = MEM_W(ctx->r25, 0X0);
    // 0x80226234: sll         $t0, $t8, 13
    ctx->r8 = S32(ctx->r24 << 13);
    // 0x80226238: bgezl       $t0, L_802263F4
    if (SIGNED(ctx->r8) >= 0) {
        // 0x8022623C: ori         $t3, $zero, 0xFFFF
        ctx->r11 = 0 | 0XFFFF;
            goto L_802263F4;
    }
    goto skip_3;
    // 0x8022623C: ori         $t3, $zero, 0xFFFF
    ctx->r11 = 0 | 0XFFFF;
    skip_3:
    // 0x80226240: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
    // 0x80226244: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x80226248: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8022624C: blez        $a1, L_80226294
    if (SIGNED(ctx->r5) <= 0) {
        // 0x80226250: sll         $t4, $a1, 2
        ctx->r12 = S32(ctx->r5 << 2);
            goto L_80226294;
    }
    // 0x80226250: sll         $t4, $a1, 2
    ctx->r12 = S32(ctx->r5 << 2);
    // 0x80226254: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
L_80226258:
    // 0x80226258: lw          $v1, 0x2C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X2C);
    // 0x8022625C: lw          $t2, 0xB4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XB4);
    // 0x80226260: lw          $t1, 0xB0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XB0);
    // 0x80226264: bnel        $t2, $v1, L_80226288
    if (ctx->r10 != ctx->r3) {
        // 0x80226268: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_80226288;
    }
    goto skip_4;
    // 0x80226268: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_4:
    // 0x8022626C: lw          $t3, 0x28($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X28);
    // 0x80226270: lw          $t5, 0xAC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XAC);
    // 0x80226274: bnel        $t1, $t3, L_80226288
    if (ctx->r9 != ctx->r11) {
        // 0x80226278: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_80226288;
    }
    goto skip_5;
    // 0x80226278: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_5:
    // 0x8022627C: beq         $t5, $v1, L_80226294
    if (ctx->r13 == ctx->r3) {
        // 0x80226280: nop
    
            goto L_80226294;
    }
    // 0x80226280: nop

    // 0x80226284: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_80226288:
    // 0x80226288: slt         $at, $s0, $a1
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8022628C: bne         $at, $zero, L_80226258
    if (ctx->r1 != 0) {
        // 0x80226290: addiu       $v0, $v0, 0x30
        ctx->r2 = ADD32(ctx->r2, 0X30);
            goto L_80226258;
    }
    // 0x80226290: addiu       $v0, $v0, 0x30
    ctx->r2 = ADD32(ctx->r2, 0X30);
L_80226294:
    // 0x80226294: bne         $s0, $a1, L_802263E0
    if (ctx->r16 != ctx->r5) {
        // 0x80226298: subu        $t4, $t4, $a1
        ctx->r12 = SUB32(ctx->r12, ctx->r5);
            goto L_802263E0;
    }
    // 0x80226298: subu        $t4, $t4, $a1
    ctx->r12 = SUB32(ctx->r12, ctx->r5);
    // 0x8022629C: lw          $t7, 0xB4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XB4);
    // 0x802262A0: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x802262A4: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x802262A8: sra         $t0, $t7, 24
    ctx->r8 = S32(SIGNED(ctx->r15) >> 24);
    // 0x802262AC: andi        $t2, $t0, 0xFF
    ctx->r10 = ctx->r8 & 0XFF;
    // 0x802262B0: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x802262B4: sra         $t1, $t7, 16
    ctx->r9 = S32(SIGNED(ctx->r15) >> 16);
    // 0x802262B8: andi        $t3, $t1, 0xFF
    ctx->r11 = ctx->r9 & 0XFF;
    // 0x802262BC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802262C0: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x802262C4: addu        $v0, $t4, $t6
    ctx->r2 = ADD32(ctx->r12, ctx->r14);
    // 0x802262C8: sw          $t7, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r15;
    // 0x802262CC: sra         $t5, $t7, 8
    ctx->r13 = S32(SIGNED(ctx->r15) >> 8);
    // 0x802262D0: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x802262D4: lw          $a0, 0xB0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XB0);
    // 0x802262D8: andi        $t4, $t5, 0xFF
    ctx->r12 = ctx->r13 & 0XFF;
    // 0x802262DC: mul.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x802262E0: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x802262E4: sw          $a0, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r4;
    // 0x802262E8: sra         $t6, $a0, 24
    ctx->r14 = S32(SIGNED(ctx->r4) >> 24);
    // 0x802262EC: lw          $t8, 0xAC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XAC);
    // 0x802262F0: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x802262F4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802262F8: mul.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x802262FC: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x80226300: sra         $t9, $a0, 16
    ctx->r25 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80226304: sw          $t8, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r24;
    // 0x80226308: swc1        $f8, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f8.u32l;
    // 0x8022630C: andi        $t8, $t9, 0xFF
    ctx->r24 = ctx->r25 & 0XFF;
    // 0x80226310: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80226314: mul.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x80226318: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x8022631C: sra         $t0, $a0, 8
    ctx->r8 = S32(SIGNED(ctx->r4) >> 8);
    // 0x80226320: lw          $a3, 0x24($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X24);
    // 0x80226324: swc1        $f18, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f18.u32l;
    // 0x80226328: andi        $t2, $t0, 0xFF
    ctx->r10 = ctx->r8 & 0XFF;
    // 0x8022632C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80226330: mul.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x80226334: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x80226338: sra         $t1, $a3, 24
    ctx->r9 = S32(SIGNED(ctx->r7) >> 24);
    // 0x8022633C: swc1        $f8, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f8.u32l;
    // 0x80226340: andi        $t3, $t1, 0xFF
    ctx->r11 = ctx->r9 & 0XFF;
    // 0x80226344: mul.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x80226348: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x8022634C: sra         $t5, $a3, 16
    ctx->r13 = S32(SIGNED(ctx->r7) >> 16);
    // 0x80226350: swc1        $f18, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f18.u32l;
    // 0x80226354: andi        $t4, $t5, 0xFF
    ctx->r12 = ctx->r13 & 0XFF;
    // 0x80226358: sra         $t6, $a3, 8
    ctx->r14 = S32(SIGNED(ctx->r7) >> 8);
    // 0x8022635C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80226360: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x80226364: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x80226368: swc1        $f8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f8.u32l;
    // 0x8022636C: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x80226370: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80226374: mul.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x80226378: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8022637C: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x80226380: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80226384: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x80226388: mul.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x8022638C: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x80226390: swc1        $f18, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f18.u32l;
    // 0x80226394: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80226398: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8022639C: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
    // 0x802263A0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802263A4: mul.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x802263A8: nop

    // 0x802263AC: mul.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x802263B0: swc1        $f18, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f18.u32l;
    // 0x802263B4: swc1        $f8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f8.u32l;
    // 0x802263B8: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x802263BC: addiu       $a0, $t9, 0x1
    ctx->r4 = ADD32(ctx->r25, 0X1);
    // 0x802263C0: jal         0x80231C58
    // 0x802263C4: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
    static_3_80231C58(rdram, ctx);
        goto after_26;
    // 0x802263C4: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
    after_26:
    // 0x802263C8: beq         $v0, $zero, L_802263E0
    if (ctx->r2 == 0) {
        // 0x802263CC: lui         $t0, 0x0
        ctx->r8 = S32(0X0 << 16);
            goto L_802263E0;
    }
    // 0x802263CC: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x802263D0: lw          $t0, 0x0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X0);
    // 0x802263D4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802263D8: addiu       $t2, $t0, -0x1
    ctx->r10 = ADD32(ctx->r8, -0X1);
    // 0x802263DC: sw          $t2, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r10;
L_802263E0:
    // 0x802263E0: lw          $t1, 0x74($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X74);
    // 0x802263E4: sh          $s0, 0x8($t1)
    MEM_H(0X8, ctx->r9) = ctx->r16;
    // 0x802263E8: b           L_802263F8
    // 0x802263EC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
        goto L_802263F8;
    // 0x802263EC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x802263F0: ori         $t3, $zero, 0xFFFF
    ctx->r11 = 0 | 0XFFFF;
L_802263F4:
    // 0x802263F4: sh          $t3, 0x8($t5)
    MEM_H(0X8, ctx->r13) = ctx->r11;
L_802263F8:
    // 0x802263F8: addiu       $a0, $sp, 0xBA
    ctx->r4 = ADD32(ctx->r29, 0XBA);
    // 0x802263FC: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80226400: jal         0x80225424
    // 0x80226404: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_27;
    // 0x80226404: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_27:
    // 0x80226408: lhu         $a0, 0xBA($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0XBA);
    // 0x8022640C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80226410: sll         $t4, $a0, 3
    ctx->r12 = S32(ctx->r4 << 3);
    // 0x80226414: jal         0x8022B948
    // 0x80226418: addiu       $a0, $t4, 0x8
    ctx->r4 = ADD32(ctx->r12, 0X8);
    func_8022B948(rdram, ctx);
        goto after_28;
    // 0x80226418: addiu       $a0, $t4, 0x8
    ctx->r4 = ADD32(ctx->r12, 0X8);
    after_28:
    // 0x8022641C: lhu         $t6, 0xBA($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0XBA);
    // 0x80226420: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80226424: blez        $t6, L_80226524
    if (SIGNED(ctx->r14) <= 0) {
        // 0x80226428: or          $a0, $s4, $zero
        ctx->r4 = ctx->r20 | 0;
            goto L_80226524;
    }
    // 0x80226428: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
L_8022642C:
    // 0x8022642C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80226430: jal         0x80225424
    // 0x80226434: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_29;
    // 0x80226434: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_29:
    // 0x80226438: lhu         $t7, 0xB8($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0XB8);
    // 0x8022643C: sll         $t8, $s0, 3
    ctx->r24 = S32(ctx->r16 << 3);
    // 0x80226440: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x80226444: andi        $t9, $t7, 0x4000
    ctx->r25 = ctx->r15 & 0X4000;
    // 0x80226448: beq         $t9, $zero, L_802264AC
    if (ctx->r25 == 0) {
        // 0x8022644C: or          $a1, $s3, $zero
        ctx->r5 = ctx->r19 | 0;
            goto L_802264AC;
    }
    // 0x8022644C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80226450: addu        $v1, $t8, $s1
    ctx->r3 = ADD32(ctx->r24, ctx->r17);
    // 0x80226454: sw          $s5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r21;
    // 0x80226458: lhu         $v0, 0xB8($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0XB8);
    // 0x8022645C: andi        $t0, $v0, 0xF00
    ctx->r8 = ctx->r2 & 0XF00;
    // 0x80226460: sra         $t2, $t0, 8
    ctx->r10 = S32(SIGNED(ctx->r8) >> 8);
    // 0x80226464: multu       $t2, $s2
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80226468: andi        $t4, $v0, 0xF0
    ctx->r12 = ctx->r2 & 0XF0;
    // 0x8022646C: sra         $t6, $t4, 4
    ctx->r14 = S32(SIGNED(ctx->r12) >> 4);
    // 0x80226470: andi        $t2, $v0, 0xF
    ctx->r10 = ctx->r2 & 0XF;
    // 0x80226474: mflo        $t1
    ctx->r9 = lo;
    // 0x80226478: andi        $t3, $t1, 0xFF
    ctx->r11 = ctx->r9 & 0XFF;
    // 0x8022647C: sll         $t5, $t3, 16
    ctx->r13 = S32(ctx->r11 << 16);
    // 0x80226480: multu       $t6, $s2
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80226484: mflo        $t7
    ctx->r15 = lo;
    // 0x80226488: andi        $t9, $t7, 0xFF
    ctx->r25 = ctx->r15 & 0XFF;
    // 0x8022648C: sll         $t8, $t9, 8
    ctx->r24 = S32(ctx->r25 << 8);
    // 0x80226490: multu       $t2, $s2
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80226494: or          $t0, $t5, $t8
    ctx->r8 = ctx->r13 | ctx->r24;
    // 0x80226498: mflo        $t1
    ctx->r9 = lo;
    // 0x8022649C: andi        $t3, $t1, 0xFF
    ctx->r11 = ctx->r9 & 0XFF;
    // 0x802264A0: or          $t4, $t0, $t3
    ctx->r12 = ctx->r8 | ctx->r11;
    // 0x802264A4: b           L_80226510
    // 0x802264A8: sw          $t4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r12;
        goto L_80226510;
    // 0x802264A8: sw          $t4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r12;
L_802264AC:
    // 0x802264AC: jal         0x80225424
    // 0x802264B0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80225424(rdram, ctx);
        goto after_30;
    // 0x802264B0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_30:
    // 0x802264B4: lbu         $v0, 0xBE($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0XBE);
    // 0x802264B8: lhu         $t6, 0xB8($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0XB8);
    // 0x802264BC: lw          $t5, 0xF4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XF4);
    // 0x802264C0: andi        $a0, $v0, 0xF0
    ctx->r4 = ctx->r2 & 0XF0;
    // 0x802264C4: sra         $t2, $a0, 4
    ctx->r10 = S32(SIGNED(ctx->r4) >> 4);
    // 0x802264C8: andi        $t7, $t6, 0x3FFF
    ctx->r15 = ctx->r14 & 0X3FFF;
    // 0x802264CC: sll         $t9, $t7, 4
    ctx->r25 = S32(ctx->r15 << 4);
    // 0x802264D0: sll         $t1, $t2, 4
    ctx->r9 = S32(ctx->r10 << 4);
    // 0x802264D4: andi        $t0, $v0, 0xF
    ctx->r8 = ctx->r2 & 0XF;
    // 0x802264D8: or          $t3, $t1, $t0
    ctx->r11 = ctx->r9 | ctx->r8;
    // 0x802264DC: addu        $a1, $t9, $t5
    ctx->r5 = ADD32(ctx->r25, ctx->r13);
    // 0x802264E0: sll         $t9, $t2, 4
    ctx->r25 = S32(ctx->r10 << 4);
    // 0x802264E4: andi        $t4, $t3, 0xFF
    ctx->r12 = ctx->r11 & 0XFF;
    // 0x802264E8: sll         $t8, $s0, 3
    ctx->r24 = S32(ctx->r16 << 3);
    // 0x802264EC: addu        $v1, $t8, $s1
    ctx->r3 = ADD32(ctx->r24, ctx->r17);
    // 0x802264F0: sll         $t6, $t4, 16
    ctx->r14 = S32(ctx->r12 << 16);
    // 0x802264F4: addiu       $t5, $t9, 0x10
    ctx->r13 = ADD32(ctx->r25, 0X10);
    // 0x802264F8: andi        $t8, $t5, 0xFFFF
    ctx->r24 = ctx->r13 & 0XFFFF;
    // 0x802264FC: or          $t7, $t6, $s7
    ctx->r15 = ctx->r14 | ctx->r23;
    // 0x80226500: or          $t2, $t7, $t8
    ctx->r10 = ctx->r15 | ctx->r24;
    // 0x80226504: addu        $t1, $a1, $fp
    ctx->r9 = ADD32(ctx->r5, ctx->r30);
    // 0x80226508: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x8022650C: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
L_80226510:
    // 0x80226510: lhu         $t0, 0xBA($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0XBA);
    // 0x80226514: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80226518: slt         $at, $s0, $t0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8022651C: bnel        $at, $zero, L_8022642C
    if (ctx->r1 != 0) {
        // 0x80226520: or          $a0, $s4, $zero
        ctx->r4 = ctx->r20 | 0;
            goto L_8022642C;
    }
    goto skip_6;
    // 0x80226520: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    skip_6:
L_80226524:
    // 0x80226524: sll         $t3, $s0, 3
    ctx->r11 = S32(ctx->r16 << 3);
    // 0x80226528: addu        $v1, $t3, $s1
    ctx->r3 = ADD32(ctx->r11, ctx->r17);
    // 0x8022652C: lui         $t4, 0xB800
    ctx->r12 = S32(0XB800 << 16);
    // 0x80226530: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x80226534: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80226538: lw          $t6, 0x74($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X74);
    // 0x8022653C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80226540: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80226544: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80226548: jal         0x80225424
    // 0x8022654C: sw          $s1, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->r17;
    func_80225424(rdram, ctx);
        goto after_31;
    // 0x8022654C: sw          $s1, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->r17;
    after_31:
    // 0x80226550: lhu         $t9, 0xB8($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0XB8);
    // 0x80226554: lw          $t7, 0xEC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XEC);
    // 0x80226558: lw          $t2, 0x74($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X74);
    // 0x8022655C: sll         $t5, $t9, 3
    ctx->r13 = S32(ctx->r25 << 3);
    // 0x80226560: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x80226564: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80226568: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8022656C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80226570: jal         0x80225424
    // 0x80226574: sw          $t8, 0x10($t2)
    MEM_W(0X10, ctx->r10) = ctx->r24;
    func_80225424(rdram, ctx);
        goto after_32;
    // 0x80226574: sw          $t8, 0x10($t2)
    MEM_W(0X10, ctx->r10) = ctx->r24;
    after_32:
    // 0x80226578: lhu         $t1, 0xB8($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0XB8);
    // 0x8022657C: lw          $t0, 0x74($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X74);
    // 0x80226580: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80226584: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80226588: sh          $t1, 0x14($t0)
    MEM_H(0X14, ctx->r8) = ctx->r9;
    // 0x8022658C: jal         0x80225424
    // 0x80226590: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    func_80225424(rdram, ctx);
        goto after_33;
    // 0x80226590: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    after_33:
    // 0x80226594: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x80226598: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8022659C: jal         0x80225424
    // 0x802265A0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_34;
    // 0x802265A0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_34:
    // 0x802265A4: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x802265A8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x802265AC: jal         0x80225424
    // 0x802265B0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80225424(rdram, ctx);
        goto after_35;
    // 0x802265B0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_35:
    // 0x802265B4: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x802265B8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x802265BC: jal         0x80225424
    // 0x802265C0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80225424(rdram, ctx);
        goto after_36;
    // 0x802265C0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_36:
    // 0x802265C4: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x802265C8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x802265CC: jal         0x80225424
    // 0x802265D0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80225424(rdram, ctx);
        goto after_37;
    // 0x802265D0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_37:
    // 0x802265D4: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x802265D8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x802265DC: jal         0x80225424
    // 0x802265E0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80225424(rdram, ctx);
        goto after_38;
    // 0x802265E0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_38:
    // 0x802265E4: lw          $t3, 0xC4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XC4);
    // 0x802265E8: lw          $t6, 0x74($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X74);
    // 0x802265EC: lw          $t5, 0x64($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X64);
    // 0x802265F0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x802265F4: lw          $t3, 0x58($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X58);
    // 0x802265F8: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x802265FC: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x80226600: addiu       $t9, $t6, 0x2C
    ctx->r25 = ADD32(ctx->r14, 0X2C);
    // 0x80226604: addiu       $t7, $t5, 0x2C
    ctx->r15 = ADD32(ctx->r13, 0X2C);
    // 0x80226608: addiu       $t6, $t3, 0x2C
    ctx->r14 = ADD32(ctx->r11, 0X2C);
    // 0x8022660C: addiu       $t2, $t8, 0x2C
    ctx->r10 = ADD32(ctx->r24, 0X2C);
    // 0x80226610: addiu       $t0, $t1, 0x2C
    ctx->r8 = ADD32(ctx->r9, 0X2C);
    // 0x80226614: sw          $t0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r8;
    // 0x80226618: sw          $t2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r10;
    // 0x8022661C: sw          $t6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r14;
    // 0x80226620: sw          $t7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r15;
    // 0x80226624: sw          $t9, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r25;
    // 0x80226628: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x8022662C: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x80226630: lhu         $t6, 0xCC($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0XCC);
    // 0x80226634: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
    // 0x80226638: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x8022663C: addiu       $t5, $t9, 0x2C
    ctx->r13 = ADD32(ctx->r25, 0X2C);
    // 0x80226640: addiu       $t8, $t7, 0x2C
    ctx->r24 = ADD32(ctx->r15, 0X2C);
    // 0x80226644: slt         $at, $t4, $t6
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80226648: addiu       $t1, $t2, 0x2C
    ctx->r9 = ADD32(ctx->r10, 0X2C);
    // 0x8022664C: addiu       $t3, $t0, 0x2C
    ctx->r11 = ADD32(ctx->r8, 0X2C);
    // 0x80226650: sw          $t3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r11;
    // 0x80226654: sw          $t1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r9;
    // 0x80226658: sw          $t8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r24;
    // 0x8022665C: sw          $t5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r13;
    // 0x80226660: bne         $at, $zero, L_802261C0
    if (ctx->r1 != 0) {
        // 0x80226664: sw          $t4, 0xC4($sp)
        MEM_W(0XC4, ctx->r29) = ctx->r12;
            goto L_802261C0;
    }
    // 0x80226664: sw          $t4, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r12;
L_80226668:
    // 0x80226668: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    // 0x8022666C: jal         0x8022B948
    // 0x80226670: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8022B948(rdram, ctx);
        goto after_39;
    // 0x80226670: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_39:
    // 0x80226674: lw          $t9, 0xF4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XF4);
    // 0x80226678: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8022667C: addiu       $a0, $v0, 0x18
    ctx->r4 = ADD32(ctx->r2, 0X18);
    // 0x80226680: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80226684: lhu         $t5, 0xBC($sp)
    ctx->r13 = MEM_HU(ctx->r29, 0XBC);
    // 0x80226688: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8022668C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x80226690: sh          $t5, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r13;
    // 0x80226694: lw          $t7, 0xE8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XE8);
    // 0x80226698: sw          $t7, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r15;
    // 0x8022669C: lhu         $t8, 0xCC($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0XCC);
    // 0x802266A0: sh          $t8, 0xC($v0)
    MEM_H(0XC, ctx->r2) = ctx->r24;
    // 0x802266A4: lw          $t2, 0xE0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XE0);
    // 0x802266A8: sw          $t2, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r10;
    // 0x802266AC: lhu         $t1, 0xCA($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0XCA);
    // 0x802266B0: jal         0x80225424
    // 0x802266B4: sh          $t1, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r9;
    func_80225424(rdram, ctx);
        goto after_40;
    // 0x802266B4: sh          $t1, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r9;
    after_40:
    // 0x802266B8: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x802266BC: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x802266C0: jal         0x80225424
    // 0x802266C4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80225424(rdram, ctx);
        goto after_41;
    // 0x802266C4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_41:
    // 0x802266C8: addiu       $a0, $s0, 0x20
    ctx->r4 = ADD32(ctx->r16, 0X20);
    // 0x802266CC: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x802266D0: jal         0x80225424
    // 0x802266D4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80225424(rdram, ctx);
        goto after_42;
    // 0x802266D4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_42:
    // 0x802266D8: addiu       $a0, $s0, 0x24
    ctx->r4 = ADD32(ctx->r16, 0X24);
    // 0x802266DC: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x802266E0: jal         0x80225424
    // 0x802266E4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80225424(rdram, ctx);
        goto after_43;
    // 0x802266E4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_43:
    // 0x802266E8: addiu       $a0, $s0, 0x28
    ctx->r4 = ADD32(ctx->r16, 0X28);
    // 0x802266EC: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x802266F0: jal         0x80225424
    // 0x802266F4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80225424(rdram, ctx);
        goto after_44;
    // 0x802266F4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_44:
    // 0x802266F8: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x802266FC: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80226700: jal         0x80225424
    // 0x80226704: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80225424(rdram, ctx);
        goto after_45;
    // 0x80226704: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_45:
    // 0x80226708: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8022670C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80226710: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80226714: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x80226718: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022671C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80226720: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80226724: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80226728: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x8022672C: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x80226730: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x80226734: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x80226738: jr          $ra
    // 0x8022673C: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
    return;
    // 0x8022673C: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
;}
RECOMP_FUNC void D_802D2550(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D25D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802D25D4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802D25D8: addiu       $a2, $zero, 0x24
    ctx->r6 = ADD32(0, 0X24);
    // 0x802D25DC: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
L_802D25E0:
    // 0x802D25E0: multu       $v1, $a2
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802D25E4: mflo        $t6
    ctx->r14 = lo;
    // 0x802D25E8: addu        $t7, $a0, $t6
    ctx->r15 = ADD32(ctx->r4, ctx->r14);
    // 0x802D25EC: addiu       $t8, $t7, 0x2000
    ctx->r24 = ADD32(ctx->r15, 0X2000);
    // 0x802D25F0: multu       $v0, $a1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802D25F4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802D25F8: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x802D25FC: slti        $at, $v1, 0x40
    ctx->r1 = SIGNED(ctx->r3) < 0X40 ? 1 : 0;
    // 0x802D2600: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x802D2604: mflo        $t9
    ctx->r25 = lo;
    // 0x802D2608: addu        $t0, $a0, $t9
    ctx->r8 = ADD32(ctx->r4, ctx->r25);
    // 0x802D260C: bne         $at, $zero, L_802D25E0
    if (ctx->r1 != 0) {
        // 0x802D2610: sw          $t8, 0x2044($t0)
        MEM_W(0X2044, ctx->r8) = ctx->r24;
            goto L_802D25E0;
    }
    // 0x802D2610: sw          $t8, 0x2044($t0)
    MEM_W(0X2044, ctx->r8) = ctx->r24;
    // 0x802D2614: addiu       $t2, $a0, 0x2900
    ctx->r10 = ADD32(ctx->r4, 0X2900);
    // 0x802D2618: sw          $t2, 0x2044($a0)
    MEM_W(0X2044, ctx->r4) = ctx->r10;
    // 0x802D261C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802D2620: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_802D2624:
    // 0x802D2624: multu       $v1, $a2
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802D2628: mflo        $t3
    ctx->r11 = lo;
    // 0x802D262C: addu        $t4, $a0, $t3
    ctx->r12 = ADD32(ctx->r4, ctx->r11);
    // 0x802D2630: addiu       $t5, $t4, 0x2048
    ctx->r13 = ADD32(ctx->r12, 0X2048);
    // 0x802D2634: multu       $v0, $a1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802D2638: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802D263C: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x802D2640: slti        $at, $v1, 0x3F
    ctx->r1 = SIGNED(ctx->r3) < 0X3F ? 1 : 0;
    // 0x802D2644: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x802D2648: mflo        $t6
    ctx->r14 = lo;
    // 0x802D264C: addu        $t7, $a0, $t6
    ctx->r15 = ADD32(ctx->r4, ctx->r14);
    // 0x802D2650: bne         $at, $zero, L_802D2624
    if (ctx->r1 != 0) {
        // 0x802D2654: sw          $t5, 0x2040($t7)
        MEM_W(0X2040, ctx->r15) = ctx->r13;
            goto L_802D2624;
    }
    // 0x802D2654: sw          $t5, 0x2040($t7)
    MEM_W(0X2040, ctx->r15) = ctx->r13;
    // 0x802D2658: addiu       $v1, $a0, 0x2024
    ctx->r3 = ADD32(ctx->r4, 0X2024);
    // 0x802D265C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802D2660: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802D2664: sw          $v1, 0x291C($a0)
    MEM_W(0X291C, ctx->r4) = ctx->r3;
    // 0x802D2668: sw          $v1, 0x2924($a0)
    MEM_W(0X2924, ctx->r4) = ctx->r3;
    // 0x802D266C: sw          $v1, 0x2928($a0)
    MEM_W(0X2928, ctx->r4) = ctx->r3;
    // 0x802D2670: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802D2674:
    // 0x802D2674: multu       $v0, $a1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802D2678: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802D267C: andi        $t0, $v0, 0xFF
    ctx->r8 = ctx->r2 & 0XFF;
    // 0x802D2680: slti        $at, $t0, 0x40
    ctx->r1 = SIGNED(ctx->r8) < 0X40 ? 1 : 0;
    // 0x802D2684: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x802D2688: mflo        $t8
    ctx->r24 = lo;
    // 0x802D268C: addu        $v1, $a0, $t8
    ctx->r3 = ADD32(ctx->r4, ctx->r24);
    // 0x802D2690: sw          $zero, 0x202C($v1)
    MEM_W(0X202C, ctx->r3) = 0;
    // 0x802D2694: swc1        $f0, 0x2030($v1)
    MEM_W(0X2030, ctx->r3) = ctx->f0.u32l;
    // 0x802D2698: swc1        $f0, 0x2034($v1)
    MEM_W(0X2034, ctx->r3) = ctx->f0.u32l;
    // 0x802D269C: bne         $at, $zero, L_802D2674
    if (ctx->r1 != 0) {
        // 0x802D26A0: sb          $zero, 0x2038($v1)
        MEM_B(0X2038, ctx->r3) = 0;
            goto L_802D2674;
    }
    // 0x802D26A0: sb          $zero, 0x2038($v1)
    MEM_B(0X2038, ctx->r3) = 0;
    // 0x802D26A4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802D26A8: nop

    // 0x802D26AC: swc1        $f0, 0x2930($a0)
    MEM_W(0X2930, ctx->r4) = ctx->f0.u32l;
    // 0x802D26B0: jr          $ra
    // 0x802D26B4: swc1        $f0, 0x292C($a0)
    MEM_W(0X292C, ctx->r4) = ctx->f0.u32l;
    return;
    // 0x802D26B4: swc1        $f0, 0x292C($a0)
    MEM_W(0X292C, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void D_80233B50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80233B50: beql        $a1, $zero, L_80233C2C
    if (ctx->r5 == 0) {
        // 0x80233B54: addiu       $v0, $a0, 0x18
        ctx->r2 = ADD32(ctx->r4, 0X18);
            goto L_80233C2C;
    }
    goto skip_0;
    // 0x80233B54: addiu       $v0, $a0, 0x18
    ctx->r2 = ADD32(ctx->r4, 0X18);
    skip_0:
    // 0x80233B58: lhu         $t6, 0xA($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0XA);
    // 0x80233B5C: addiu       $v0, $a0, 0x18
    ctx->r2 = ADD32(ctx->r4, 0X18);
    // 0x80233B60: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80233B64: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80233B68: sh          $t7, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r15;
    // 0x80233B6C: lhu         $t8, 0xC($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0XC);
    // 0x80233B70: addiu       $t3, $zero, 0x200
    ctx->r11 = ADD32(0, 0X200);
    // 0x80233B74: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80233B78: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80233B7C: sh          $t9, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r25;
    // 0x80233B80: lhu         $t0, 0xC($a1)
    ctx->r8 = MEM_HU(ctx->r5, 0XC);
    // 0x80233B84: ori         $t5, $t3, 0x1
    ctx->r13 = ctx->r11 | 0X1;
    // 0x80233B88: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x80233B8C: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x80233B90: sh          $t1, 0x2C($v0)
    MEM_H(0X2C, ctx->r2) = ctx->r9;
    // 0x80233B94: lhu         $t2, 0xC($a1)
    ctx->r10 = MEM_HU(ctx->r5, 0XC);
    // 0x80233B98: sb          $zero, 0x30($v0)
    MEM_B(0X30, ctx->r2) = 0;
    // 0x80233B9C: sb          $a2, 0x31($v0)
    MEM_B(0X31, ctx->r2) = ctx->r6;
    // 0x80233BA0: sh          $t3, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r11;
    // 0x80233BA4: sh          $t2, 0x2E($v0)
    MEM_H(0X2E, ctx->r2) = ctx->r10;
    // 0x80233BA8: lbu         $v1, 0x22($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X22);
    // 0x80233BAC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80233BB0: beq         $a3, $v1, L_80233BC0
    if (ctx->r7 == ctx->r3) {
        // 0x80233BB4: nop
    
            goto L_80233BC0;
    }
    // 0x80233BB4: nop

    // 0x80233BB8: sh          $t5, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r13;
    // 0x80233BBC: lbu         $v1, 0x22($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X22);
L_80233BC0:
    // 0x80233BC0: bne         $a3, $v1, L_80233BD0
    if (ctx->r7 != ctx->r3) {
        // 0x80233BC4: nop
    
            goto L_80233BD0;
    }
    // 0x80233BC4: nop

    // 0x80233BC8: b           L_80233BE4
    // 0x80233BCC: sb          $t6, 0x30($v0)
    MEM_B(0X30, ctx->r2) = ctx->r14;
        goto L_80233BE4;
    // 0x80233BCC: sb          $t6, 0x30($v0)
    MEM_B(0X30, ctx->r2) = ctx->r14;
L_80233BD0:
    // 0x80233BD0: bne         $v1, $at, L_80233BE0
    if (ctx->r3 != ctx->r1) {
        // 0x80233BD4: addiu       $t7, $zero, 0x3
        ctx->r15 = ADD32(0, 0X3);
            goto L_80233BE0;
    }
    // 0x80233BD4: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x80233BD8: b           L_80233BE4
    // 0x80233BDC: sb          $t7, 0x30($v0)
    MEM_B(0X30, ctx->r2) = ctx->r15;
        goto L_80233BE4;
    // 0x80233BDC: sb          $t7, 0x30($v0)
    MEM_B(0X30, ctx->r2) = ctx->r15;
L_80233BE0:
    // 0x80233BE0: sb          $zero, 0x30($v0)
    MEM_B(0X30, ctx->r2) = 0;
L_80233BE4:
    // 0x80233BE4: lbu         $v1, 0xE($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0XE);
    // 0x80233BE8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80233BEC: bnel        $v1, $at, L_80233C00
    if (ctx->r3 != ctx->r1) {
        // 0x80233BF0: addiu       $at, $zero, 0x8
        ctx->r1 = ADD32(0, 0X8);
            goto L_80233C00;
    }
    goto skip_1;
    // 0x80233BF0: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    skip_1:
    // 0x80233BF4: b           L_80233C14
    // 0x80233BF8: sb          $zero, 0x31($v0)
    MEM_B(0X31, ctx->r2) = 0;
        goto L_80233C14;
    // 0x80233BF8: sb          $zero, 0x31($v0)
    MEM_B(0X31, ctx->r2) = 0;
    // 0x80233BFC: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
L_80233C00:
    // 0x80233C00: bne         $v1, $at, L_80233C10
    if (ctx->r3 != ctx->r1) {
        // 0x80233C04: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_80233C10;
    }
    // 0x80233C04: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80233C08: b           L_80233C14
    // 0x80233C0C: sb          $t8, 0x31($v0)
    MEM_B(0X31, ctx->r2) = ctx->r24;
        goto L_80233C14;
    // 0x80233C0C: sb          $t8, 0x31($v0)
    MEM_B(0X31, ctx->r2) = ctx->r24;
L_80233C10:
    // 0x80233C10: sb          $a2, 0x31($v0)
    MEM_B(0X31, ctx->r2) = ctx->r6;
L_80233C14:
    // 0x80233C14: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80233C18: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80233C1C: nop

    // 0x80233C20: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
    // 0x80233C24: swc1        $f0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f0.u32l;
    // 0x80233C28: addiu       $v0, $a0, 0x18
    ctx->r2 = ADD32(ctx->r4, 0X18);
L_80233C2C:
    // 0x80233C2C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80233C30: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80233C34: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x80233C38: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80233C3C: addiu       $t9, $zero, 0x1234
    ctx->r25 = ADD32(0, 0X1234);
    // 0x80233C40: addiu       $t0, $zero, 0x24
    ctx->r8 = ADD32(0, 0X24);
    // 0x80233C44: sh          $zero, 0x10($v0)
    MEM_H(0X10, ctx->r2) = 0;
    // 0x80233C48: sh          $zero, 0x12($v0)
    MEM_H(0X12, ctx->r2) = 0;
    // 0x80233C4C: sh          $t9, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r25;
    // 0x80233C50: sb          $v1, 0x18($v0)
    MEM_B(0X18, ctx->r2) = ctx->r3;
    // 0x80233C54: sb          $v1, 0x19($v0)
    MEM_B(0X19, ctx->r2) = ctx->r3;
    // 0x80233C58: sb          $v1, 0x1A($v0)
    MEM_B(0X1A, ctx->r2) = ctx->r3;
    // 0x80233C5C: sb          $v1, 0x1B($v0)
    MEM_B(0X1B, ctx->r2) = ctx->r3;
    // 0x80233C60: sh          $zero, 0x1C($v0)
    MEM_H(0X1C, ctx->r2) = 0;
    // 0x80233C64: sh          $zero, 0x1E($v0)
    MEM_H(0X1E, ctx->r2) = 0;
    // 0x80233C68: sw          $zero, 0x20($v0)
    MEM_W(0X20, ctx->r2) = 0;
    // 0x80233C6C: sh          $zero, 0x24($v0)
    MEM_H(0X24, ctx->r2) = 0;
    // 0x80233C70: sh          $a3, 0x26($v0)
    MEM_H(0X26, ctx->r2) = ctx->r7;
    // 0x80233C74: sh          $a3, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r7;
    // 0x80233C78: sh          $t0, 0x2A($v0)
    MEM_H(0X2A, ctx->r2) = ctx->r8;
    // 0x80233C7C: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
    // 0x80233C80: swc1        $f0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f0.u32l;
    // 0x80233C84: lw          $t1, 0x14($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X14);
    // 0x80233C88: sh          $zero, 0x40($v0)
    MEM_H(0X40, ctx->r2) = 0;
    // 0x80233C8C: sh          $zero, 0x42($v0)
    MEM_H(0X42, ctx->r2) = 0;
    // 0x80233C90: jr          $ra
    // 0x80233C94: sw          $t1, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->r9;
    return;
    // 0x80233C94: sw          $t1, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->r9;
;}
RECOMP_FUNC void D_80299CF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80299D70: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80299D74: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80299D78: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80299D7C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80299D80: jal         0x802CB994
    // 0x80299D84: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    static_3_802CB994(rdram, ctx);
        goto after_0;
    // 0x80299D84: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    after_0:
    // 0x80299D88: addiu       $t6, $zero, 0xF4
    ctx->r14 = ADD32(0, 0XF4);
    // 0x80299D8C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x80299D90: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    // 0x80299D94: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    // 0x80299D98: addiu       $a2, $zero, 0x126
    ctx->r6 = ADD32(0, 0X126);
    // 0x80299D9C: addiu       $a3, $zero, 0x31
    ctx->r7 = ADD32(0, 0X31);
    // 0x80299DA0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80299DA4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80299DA8: jal         0x802CEEB4
    // 0x80299DAC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    static_3_802CEEB4(rdram, ctx);
        goto after_1;
    // 0x80299DAC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_1:
    // 0x80299DB0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80299DB4: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x80299DB8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80299DBC: jal         0x8021E708
    // 0x80299DC0: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_2;
    // 0x80299DC0: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_2:
    // 0x80299DC4: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80299DC8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80299DCC: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    // 0x80299DD0: lbu         $t8, 0x1B($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X1B);
    // 0x80299DD4: addiu       $a2, $zero, 0x126
    ctx->r6 = ADD32(0, 0X126);
    // 0x80299DD8: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80299DDC: addu        $a0, $a0, $t9
    ctx->r4 = ADD32(ctx->r4, ctx->r25);
    // 0x80299DE0: jal         0x802CE360
    // 0x80299DE4: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    static_3_802CE360(rdram, ctx);
        goto after_3;
    // 0x80299DE4: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    after_3:
    // 0x80299DE8: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80299DEC: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x80299DF0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80299DF4: lbu         $t1, 0x1B($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X1B);
    // 0x80299DF8: addiu       $a1, $zero, 0x22
    ctx->r5 = ADD32(0, 0X22);
    // 0x80299DFC: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80299E00: addu        $a2, $a2, $t2
    ctx->r6 = ADD32(ctx->r6, ctx->r10);
    // 0x80299E04: jal         0x8021E87C
    // 0x80299E08: lw          $a2, 0x0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X0);
    static_3_8021E87C(rdram, ctx);
        goto after_4;
    // 0x80299E08: lw          $a2, 0x0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X0);
    after_4:
    // 0x80299E0C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80299E10: addiu       $a1, $zero, 0xC0
    ctx->r5 = ADD32(0, 0XC0);
    // 0x80299E14: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80299E18: jal         0x8021E708
    // 0x80299E1C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_5;
    // 0x80299E1C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_5:
    // 0x80299E20: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x80299E24: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x80299E28: addiu       $a0, $zero, 0x9B
    ctx->r4 = ADD32(0, 0X9B);
    // 0x80299E2C: jal         0x8021E87C
    // 0x80299E30: addiu       $a1, $zero, 0xAF
    ctx->r5 = ADD32(0, 0XAF);
    static_3_8021E87C(rdram, ctx);
        goto after_6;
    // 0x80299E30: addiu       $a1, $zero, 0xAF
    ctx->r5 = ADD32(0, 0XAF);
    after_6:
    // 0x80299E34: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x80299E38: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x80299E3C: addiu       $a0, $zero, 0x9B
    ctx->r4 = ADD32(0, 0X9B);
    // 0x80299E40: jal         0x8021E87C
    // 0x80299E44: addiu       $a1, $zero, 0x37
    ctx->r5 = ADD32(0, 0X37);
    static_3_8021E87C(rdram, ctx);
        goto after_7;
    // 0x80299E44: addiu       $a1, $zero, 0x37
    ctx->r5 = ADD32(0, 0X37);
    after_7:
    // 0x80299E48: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80299E4C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80299E50: jr          $ra
    // 0x80299E54: nop

    return;
    // 0x80299E54: nop

;}
RECOMP_FUNC void D_802E91C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E9240: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802E9244: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x802E9248: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x802E924C: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x802E9250: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x802E9254: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802E9258: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x802E925C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802E9260: lui         $s1, 0x0
    ctx->r17 = S32(0X0 << 16);
    // 0x802E9264: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x802E9268: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x802E926C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x802E9270: lwc1        $f20, 0x0($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802E9274: addiu       $s1, $s1, 0x0
    ctx->r17 = ADD32(ctx->r17, 0X0);
    // 0x802E9278: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x802E927C: addiu       $s2, $zero, 0xA0
    ctx->r18 = ADD32(0, 0XA0);
    // 0x802E9280: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
L_802E9284:
    // 0x802E9284: addu        $t7, $t6, $s0
    ctx->r15 = ADD32(ctx->r14, ctx->r16);
    // 0x802E9288: lw          $a1, 0x7050($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X7050);
    // 0x802E928C: beql        $a1, $zero, L_802E92C0
    if (ctx->r5 == 0) {
        // 0x802E9290: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_802E92C0;
    }
    goto skip_0;
    // 0x802E9290: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    skip_0:
    // 0x802E9294: jal         0x80318510
    // 0x802E9298: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    static_3_80318510(rdram, ctx);
        goto after_0;
    // 0x802E9298: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_0:
    // 0x802E929C: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x802E92A0: nop

    // 0x802E92A4: bc1fl       L_802E92C0
    if (!c1cs) {
        // 0x802E92A8: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_802E92C0;
    }
    goto skip_1;
    // 0x802E92A8: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    skip_1:
    // 0x802E92AC: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x802E92B0: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x802E92B4: addu        $t9, $t8, $s0
    ctx->r25 = ADD32(ctx->r24, ctx->r16);
    // 0x802E92B8: lw          $s3, 0x7050($t9)
    ctx->r19 = MEM_W(ctx->r25, 0X7050);
    // 0x802E92BC: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_802E92C0:
    // 0x802E92C0: bnel        $s0, $s2, L_802E9284
    if (ctx->r16 != ctx->r18) {
        // 0x802E92C4: lw          $t6, 0x0($s1)
        ctx->r14 = MEM_W(ctx->r17, 0X0);
            goto L_802E9284;
    }
    goto skip_2;
    // 0x802E92C4: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    skip_2:
    // 0x802E92C8: beq         $s3, $zero, L_802E92D4
    if (ctx->r19 == 0) {
        // 0x802E92CC: or          $v0, $s3, $zero
        ctx->r2 = ctx->r19 | 0;
            goto L_802E92D4;
    }
    // 0x802E92CC: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
    // 0x802E92D0: sb          $zero, 0xEC($s4)
    MEM_B(0XEC, ctx->r20) = 0;
L_802E92D4:
    // 0x802E92D4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802E92D8: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x802E92DC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802E92E0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x802E92E4: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x802E92E8: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x802E92EC: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x802E92F0: jr          $ra
    // 0x802E92F4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x802E92F4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void D_802A1F08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A1F88: jr          $ra
    // 0x802A1F8C: lwc1        $f0, 0x8($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X8);
    return;
    // 0x802A1F8C: lwc1        $f0, 0x8($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X8);
;}
RECOMP_FUNC void D_80249610(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80249610: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80249614: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80249618: lw          $t7, 0x10($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X10);
    // 0x8024961C: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x80249620: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x80249624: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80249628: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8024962C: sltu        $at, $v0, $t8
    ctx->r1 = ctx->r2 < ctx->r24 ? 1 : 0;
    // 0x80249630: bne         $at, $zero, L_80249640
    if (ctx->r1 != 0) {
        // 0x80249634: or          $t0, $a1, $zero
        ctx->r8 = ctx->r5 | 0;
            goto L_80249640;
    }
    // 0x80249634: or          $t0, $a1, $zero
    ctx->r8 = ctx->r5 | 0;
    // 0x80249638: b           L_80249658
    // 0x8024963C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80249658;
    // 0x8024963C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80249640:
    // 0x80249640: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x80249644: jal         0x80249238
    // 0x80249648: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    static_3_80249238(rdram, ctx);
        goto after_0;
    // 0x80249648: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
    // 0x8024964C: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
    // 0x80249650: sw          $a3, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r7;
    // 0x80249654: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80249658:
    // 0x80249658: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8024965C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80249660: jr          $ra
    // 0x80249664: nop

    return;
    // 0x80249664: nop

;}
RECOMP_FUNC void func_8022B374(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022B374: addiu       $s4, $s4, 0x0
    ctx->r20 = ADD32(ctx->r20, 0X0);
    // 0x8022B378: addiu       $s5, $s5, 0x0
    ctx->r21 = ADD32(ctx->r21, 0X0);
    // 0x8022B37C: sll         $t7, $s0, 3
    ctx->r15 = S32(ctx->r16 << 3);
L_8022B380:
    // 0x8022B380: addu        $v0, $s3, $t7
    ctx->r2 = ADD32(ctx->r19, ctx->r15);
    // 0x8022B384: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x8022B388: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x8022B38C: sltu        $at, $v1, $t8
    ctx->r1 = ctx->r3 < ctx->r24 ? 1 : 0;
    // 0x8022B390: bnel        $at, $zero, L_8022B3D4
    if (ctx->r1 != 0) {
        // 0x8022B394: lw          $t2, 0x0($s2)
        ctx->r10 = MEM_W(ctx->r18, 0X0);
            goto L_8022B3D4;
    }
    goto skip_0;
    // 0x8022B394: lw          $t2, 0x0($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X0);
    skip_0:
    // 0x8022B398: lw          $t9, 0x4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4);
    // 0x8022B39C: sltu        $at, $v1, $t9
    ctx->r1 = ctx->r3 < ctx->r25 ? 1 : 0;
    // 0x8022B3A0: beql        $at, $zero, L_8022B3D4
    if (ctx->r1 == 0) {
        // 0x8022B3A4: lw          $t2, 0x0($s2)
        ctx->r10 = MEM_W(ctx->r18, 0X0);
            goto L_8022B3D4;
    }
    goto skip_1;
    // 0x8022B3A4: lw          $t2, 0x0($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X0);
    skip_1:
    // 0x8022B3A8: lw          $t0, 0x4($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X4);
    // 0x8022B3AC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8022B3B0: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x8022B3B4: sw          $t0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r8;
    // 0x8022B3B8: lw          $t1, 0x0($s4)
    ctx->r9 = MEM_W(ctx->r20, 0X0);
    // 0x8022B3BC: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x8022B3C0: beql        $t1, $zero, L_8022B3D4
    if (ctx->r9 == 0) {
        // 0x8022B3C4: lw          $t2, 0x0($s2)
        ctx->r10 = MEM_W(ctx->r18, 0X0);
            goto L_8022B3D4;
    }
    goto skip_2;
    // 0x8022B3C4: lw          $t2, 0x0($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X0);
    skip_2:
    // 0x8022B3C8: jal         0x80231A24
    // 0x8022B3CC: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x8022B3CC: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    after_0:
    // 0x8022B3D0: lw          $t2, 0x0($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X0);
L_8022B3D4:
    // 0x8022B3D4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8022B3D8: slt         $at, $s0, $t2
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x8022B3DC: bnel        $at, $zero, L_8022B380
    if (ctx->r1 != 0) {
        // 0x8022B3E0: sll         $t7, $s0, 3
        ctx->r15 = S32(ctx->r16 << 3);
            goto L_8022B380;
    }
    goto skip_3;
    // 0x8022B3E0: sll         $t7, $s0, 3
    ctx->r15 = S32(ctx->r16 << 3);
    skip_3:
    // 0x8022B3E4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8022B3E8: or          $v0, $s6, $zero
    ctx->r2 = ctx->r22 | 0;
    // 0x8022B3EC: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8022B3F0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022B3F4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022B3F8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022B3FC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8022B400: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8022B404: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8022B408: jr          $ra
    // 0x8022B40C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8022B40C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void D_802ACEDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802ACF5C: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x802ACF60: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802ACF64: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802ACF68: sw          $a1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r5;
    // 0x802ACF6C: sw          $a2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r6;
    // 0x802ACF70: lw          $v0, 0x1A0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1A0);
    // 0x802ACF74: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802ACF78: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x802ACF7C: lw          $t9, 0x64($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X64);
    // 0x802ACF80: lh          $t6, 0x60($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X60);
    // 0x802ACF84: jalr        $t9
    // 0x802ACF88: addu        $a0, $t6, $a0
    ctx->r4 = ADD32(ctx->r14, ctx->r4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x802ACF88: addu        $a0, $t6, $a0
    ctx->r4 = ADD32(ctx->r14, ctx->r4);
    after_0:
    // 0x802ACF8C: lw          $v0, 0x29C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X29C);
    // 0x802ACF90: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x802ACF94: beq         $v0, $at, L_802ACFA4
    if (ctx->r2 == ctx->r1) {
        // 0x802ACF98: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_802ACFA4;
    }
    // 0x802ACF98: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x802ACF9C: bnel        $v0, $at, L_802AD2A4
    if (ctx->r2 != ctx->r1) {
        // 0x802ACFA0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802AD2A4;
    }
    goto skip_0;
    // 0x802ACFA0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
L_802ACFA4:
    // 0x802ACFA4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802ACFA8: lwc1        $f6, 0x50($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X50);
    // 0x802ACFAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802ACFB0: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x802ACFB4: nop

    // 0x802ACFB8: bc1fl       L_802AD2A4
    if (!c1cs) {
        // 0x802ACFBC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802AD2A4;
    }
    goto skip_1;
    // 0x802ACFBC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x802ACFC0: jal         0x80317580
    // 0x802ACFC4: lw          $a1, 0xD8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XD8);
    static_3_80317580(rdram, ctx);
        goto after_1;
    // 0x802ACFC4: lw          $a1, 0xD8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XD8);
    after_1:
    // 0x802ACFC8: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x802ACFCC: lw          $a1, 0xD8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XD8);
    // 0x802ACFD0: jal         0x80318510
    // 0x802ACFD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80318510(rdram, ctx);
        goto after_2;
    // 0x802ACFD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x802ACFD8: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x802ACFDC: lw          $t7, 0x664($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X664);
    // 0x802ACFE0: lwc1        $f10, 0x7C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x802ACFE4: blez        $t7, L_802AD100
    if (SIGNED(ctx->r15) <= 0) {
        // 0x802ACFE8: nop
    
            goto L_802AD100;
    }
    // 0x802ACFE8: nop

    // 0x802ACFEC: lwc1        $f8, 0x7C4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X7C4);
    // 0x802ACFF0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802ACFF4: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x802ACFF8: nop

    // 0x802ACFFC: bc1f        L_802AD100
    if (!c1cs) {
        // 0x802AD000: nop
    
            goto L_802AD100;
    }
    // 0x802AD000: nop

    // 0x802AD004: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802AD008: nop

    // 0x802AD00C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x802AD010: jal         0x80234AF0
    // 0x802AD014: swc1        $f18, 0x7C4($s0)
    MEM_W(0X7C4, ctx->r16) = ctx->f18.u32l;
    static_3_80234AF0(rdram, ctx);
        goto after_3;
    // 0x802AD014: swc1        $f18, 0x7C4($s0)
    MEM_W(0X7C4, ctx->r16) = ctx->f18.u32l;
    after_3:
    // 0x802AD018: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802AD01C: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802AD020: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802AD024: lwc1        $f6, 0x80($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X80);
    // 0x802AD028: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x802AD02C: nop

    // 0x802AD030: bc1f        L_802AD100
    if (!c1cs) {
        // 0x802AD034: nop
    
            goto L_802AD100;
    }
    // 0x802AD034: nop

    // 0x802AD038: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802AD03C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802AD040: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x802AD044: nop

    // 0x802AD048: bc1f        L_802AD100
    if (!c1cs) {
        // 0x802AD04C: nop
    
            goto L_802AD100;
    }
    // 0x802AD04C: nop

    // 0x802AD050: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802AD054: lwc1        $f18, 0x84($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X84);
    // 0x802AD058: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x802AD05C: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x802AD060: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x802AD064: c.lt.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl < ctx->f4.fl;
    // 0x802AD068: nop

    // 0x802AD06C: bc1f        L_802AD100
    if (!c1cs) {
        // 0x802AD070: nop
    
            goto L_802AD100;
    }
    // 0x802AD070: nop

    // 0x802AD074: lwc1        $f8, 0x80($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X80);
    // 0x802AD078: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x802AD07C: nop

    // 0x802AD080: bc1f        L_802AD100
    if (!c1cs) {
        // 0x802AD084: nop
    
            goto L_802AD100;
    }
    // 0x802AD084: nop

    // 0x802AD088: lw          $v0, 0x29C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X29C);
    // 0x802AD08C: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x802AD090: bnel        $v0, $at, L_802AD0A8
    if (ctx->r2 != ctx->r1) {
        // 0x802AD094: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_802AD0A8;
    }
    goto skip_2;
    // 0x802AD094: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    skip_2:
    // 0x802AD098: lw          $t8, 0x2C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X2C);
    // 0x802AD09C: slti        $at, $t8, 0x2
    ctx->r1 = SIGNED(ctx->r24) < 0X2 ? 1 : 0;
    // 0x802AD0A0: beq         $at, $zero, L_802AD0C0
    if (ctx->r1 == 0) {
        // 0x802AD0A4: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_802AD0C0;
    }
    // 0x802AD0A4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
L_802AD0A8:
    // 0x802AD0A8: bne         $v0, $at, L_802AD100
    if (ctx->r2 != ctx->r1) {
        // 0x802AD0AC: nop
    
            goto L_802AD100;
    }
    // 0x802AD0AC: nop

    // 0x802AD0B0: lw          $t0, 0x30($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X30);
    // 0x802AD0B4: slti        $at, $t0, 0x2
    ctx->r1 = SIGNED(ctx->r8) < 0X2 ? 1 : 0;
    // 0x802AD0B8: bne         $at, $zero, L_802AD100
    if (ctx->r1 != 0) {
        // 0x802AD0BC: nop
    
            goto L_802AD100;
    }
    // 0x802AD0BC: nop

L_802AD0C0:
    // 0x802AD0C0: jal         0x80234AF0
    // 0x802AD0C4: nop

    static_3_80234AF0(rdram, ctx);
        goto after_4;
    // 0x802AD0C4: nop

    after_4:
    // 0x802AD0C8: lwc1        $f16, 0x38($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X38);
    // 0x802AD0CC: addiu       $a0, $s0, 0x1398
    ctx->r4 = ADD32(ctx->r16, 0X1398);
    // 0x802AD0D0: lw          $a1, 0x7C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X7C);
    // 0x802AD0D4: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x802AD0D8: nop

    // 0x802AD0DC: bc1f        L_802AD100
    if (!c1cs) {
        // 0x802AD0E0: nop
    
            goto L_802AD100;
    }
    // 0x802AD0E0: nop

    // 0x802AD0E4: jal         0x802C5468
    // 0x802AD0E8: lw          $a2, 0x80($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X80);
    static_3_802C5468(rdram, ctx);
        goto after_5;
    // 0x802AD0E8: lw          $a2, 0x80($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X80);
    after_5:
    // 0x802AD0EC: jal         0x802E7F20
    // 0x802AD0F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802E7F20(rdram, ctx);
        goto after_6;
    // 0x802AD0F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x802AD0F4: lw          $t1, 0x664($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X664);
    // 0x802AD0F8: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x802AD0FC: sw          $t2, 0x664($s0)
    MEM_W(0X664, ctx->r16) = ctx->r10;
L_802AD100:
    // 0x802AD100: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802AD104: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802AD108: lwc1        $f4, 0x7C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X7C);
    // 0x802AD10C: lwc1        $f18, 0x30($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X30);
    // 0x802AD110: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x802AD114: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x802AD118: c.lt.s      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.fl < ctx->f6.fl;
    // 0x802AD11C: nop

    // 0x802AD120: bc1f        L_802AD1C4
    if (!c1cs) {
        // 0x802AD124: nop
    
            goto L_802AD1C4;
    }
    // 0x802AD124: nop

    // 0x802AD128: lwc1        $f16, 0x78($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X78);
    // 0x802AD12C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802AD130: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x802AD134: mul.s       $f4, $f16, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f10.fl);
    // 0x802AD138: c.lt.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl < ctx->f4.fl;
    // 0x802AD13C: nop

    // 0x802AD140: bc1f        L_802AD1C4
    if (!c1cs) {
        // 0x802AD144: nop
    
            goto L_802AD1C4;
    }
    // 0x802AD144: nop

    // 0x802AD148: lw          $v0, 0x29C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X29C);
    // 0x802AD14C: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x802AD150: bnel        $v0, $at, L_802AD164
    if (ctx->r2 != ctx->r1) {
        // 0x802AD154: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_802AD164;
    }
    goto skip_3;
    // 0x802AD154: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    skip_3:
    // 0x802AD158: lw          $t3, 0x2C($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X2C);
    // 0x802AD15C: bgtz        $t3, L_802AD178
    if (SIGNED(ctx->r11) > 0) {
        // 0x802AD160: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_802AD178;
    }
    // 0x802AD160: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
L_802AD164:
    // 0x802AD164: bne         $v0, $at, L_802AD1C4
    if (ctx->r2 != ctx->r1) {
        // 0x802AD168: nop
    
            goto L_802AD1C4;
    }
    // 0x802AD168: nop

    // 0x802AD16C: lw          $t4, 0x30($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X30);
    // 0x802AD170: blez        $t4, L_802AD1C4
    if (SIGNED(ctx->r12) <= 0) {
        // 0x802AD174: nop
    
            goto L_802AD1C4;
    }
    // 0x802AD174: nop

L_802AD178:
    // 0x802AD178: jal         0x80234AF0
    // 0x802AD17C: nop

    static_3_80234AF0(rdram, ctx);
        goto after_7;
    // 0x802AD17C: nop

    after_7:
    // 0x802AD180: lwc1        $f18, 0x38($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X38);
    // 0x802AD184: addiu       $a0, $s0, 0x1204
    ctx->r4 = ADD32(ctx->r16, 0X1204);
    // 0x802AD188: lw          $a1, 0x7C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X7C);
    // 0x802AD18C: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x802AD190: nop

    // 0x802AD194: bc1t        L_802AD1BC
    if (c1cs) {
        // 0x802AD198: nop
    
            goto L_802AD1BC;
    }
    // 0x802AD198: nop

    // 0x802AD19C: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x802AD1A0: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x802AD1A4: beq         $v0, $at, L_802AD1BC
    if (ctx->r2 == ctx->r1) {
        // 0x802AD1A8: addiu       $at, $zero, 0xF
        ctx->r1 = ADD32(0, 0XF);
            goto L_802AD1BC;
    }
    // 0x802AD1A8: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x802AD1AC: beq         $v0, $at, L_802AD1BC
    if (ctx->r2 == ctx->r1) {
        // 0x802AD1B0: addiu       $at, $zero, 0x10
        ctx->r1 = ADD32(0, 0X10);
            goto L_802AD1BC;
    }
    // 0x802AD1B0: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x802AD1B4: bne         $v0, $at, L_802AD1C4
    if (ctx->r2 != ctx->r1) {
        // 0x802AD1B8: nop
    
            goto L_802AD1C4;
    }
    // 0x802AD1B8: nop

L_802AD1BC:
    // 0x802AD1BC: jal         0x802C5468
    // 0x802AD1C0: lw          $a2, 0x80($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X80);
    static_3_802C5468(rdram, ctx);
        goto after_8;
    // 0x802AD1C0: lw          $a2, 0x80($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X80);
    after_8:
L_802AD1C4:
    // 0x802AD1C4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802AD1C8: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802AD1CC: lwc1        $f10, 0x74($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X74);
    // 0x802AD1D0: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x802AD1D4: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x802AD1D8: mul.s       $f8, $f16, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f10.fl);
    // 0x802AD1DC: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x802AD1E0: nop

    // 0x802AD1E4: bc1fl       L_802AD2A4
    if (!c1cs) {
        // 0x802AD1E8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802AD2A4;
    }
    goto skip_4;
    // 0x802AD1E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_4:
    // 0x802AD1EC: lwc1        $f18, 0x70($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X70);
    // 0x802AD1F0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802AD1F4: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x802AD1F8: mul.s       $f10, $f18, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x802AD1FC: c.lt.s      $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f4.fl < ctx->f10.fl;
    // 0x802AD200: nop

    // 0x802AD204: bc1fl       L_802AD2A4
    if (!c1cs) {
        // 0x802AD208: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802AD2A4;
    }
    goto skip_5;
    // 0x802AD208: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_5:
    // 0x802AD20C: jal         0x80234AF0
    // 0x802AD210: nop

    static_3_80234AF0(rdram, ctx);
        goto after_9;
    // 0x802AD210: nop

    after_9:
    // 0x802AD214: lwc1        $f6, 0x38($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X38);
    // 0x802AD218: addiu       $a0, $s0, 0x1070
    ctx->r4 = ADD32(ctx->r16, 0X1070);
    // 0x802AD21C: lw          $a1, 0x7C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X7C);
    // 0x802AD220: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x802AD224: nop

    // 0x802AD228: bc1t        L_802AD250
    if (c1cs) {
        // 0x802AD22C: nop
    
            goto L_802AD250;
    }
    // 0x802AD22C: nop

    // 0x802AD230: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x802AD234: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x802AD238: beq         $v0, $at, L_802AD250
    if (ctx->r2 == ctx->r1) {
        // 0x802AD23C: addiu       $at, $zero, 0xF
        ctx->r1 = ADD32(0, 0XF);
            goto L_802AD250;
    }
    // 0x802AD23C: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x802AD240: beq         $v0, $at, L_802AD250
    if (ctx->r2 == ctx->r1) {
        // 0x802AD244: addiu       $at, $zero, 0x10
        ctx->r1 = ADD32(0, 0X10);
            goto L_802AD250;
    }
    // 0x802AD244: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x802AD248: bnel        $v0, $at, L_802AD2A4
    if (ctx->r2 != ctx->r1) {
        // 0x802AD24C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802AD2A4;
    }
    goto skip_6;
    // 0x802AD24C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_6:
L_802AD250:
    // 0x802AD250: jal         0x802C5468
    // 0x802AD254: lw          $a2, 0x80($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X80);
    static_3_802C5468(rdram, ctx);
        goto after_10;
    // 0x802AD254: lw          $a2, 0x80($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X80);
    after_10:
    // 0x802AD258: lw          $t5, 0xD8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XD8);
    // 0x802AD25C: beql        $t5, $zero, L_802AD2A4
    if (ctx->r13 == 0) {
        // 0x802AD260: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802AD2A4;
    }
    goto skip_7;
    // 0x802AD260: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_7:
    // 0x802AD264: jal         0x803183C8
    // 0x802AD268: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_803183C8(rdram, ctx);
        goto after_11;
    // 0x802AD268: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x802AD26C: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x802AD270: jal         0x803183C0
    // 0x802AD274: lw          $a0, 0xD8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XD8);
    static_3_803183C0(rdram, ctx);
        goto after_12;
    // 0x802AD274: lw          $a0, 0xD8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XD8);
    after_12:
    // 0x802AD278: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x802AD27C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802AD280: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x802AD284: mul.s       $f16, $f8, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x802AD288: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x802AD28C: nop

    // 0x802AD290: bc1fl       L_802AD2A4
    if (!c1cs) {
        // 0x802AD294: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802AD2A4;
    }
    goto skip_8;
    // 0x802AD294: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_8:
    // 0x802AD298: jal         0x802E7F58
    // 0x802AD29C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802E7F58(rdram, ctx);
        goto after_13;
    // 0x802AD29C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x802AD2A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802AD2A4:
    // 0x802AD2A4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802AD2A8: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x802AD2AC: jr          $ra
    // 0x802AD2B0: nop

    return;
    // 0x802AD2B0: nop

;}
RECOMP_FUNC void D_80230AA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80230AA4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80230AA8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80230AAC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80230AB0: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x80230AB4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80230AB8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80230ABC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80230AC0: jal         0x8022FF90
    // 0x80230AC4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    static_3_8022FF90(rdram, ctx);
        goto after_0;
    // 0x80230AC4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x80230AC8: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x80230ACC: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80230AD0: blez        $v0, L_80230B08
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80230AD4: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_80230B08;
    }
    // 0x80230AD4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80230AD8: or          $s1, $s4, $zero
    ctx->r17 = ctx->r20 | 0;
    // 0x80230ADC: addiu       $s4, $zero, 0xA
    ctx->r20 = ADD32(0, 0XA);
L_80230AE0:
    // 0x80230AE0: multu       $s2, $s4
    result = U64(U32(ctx->r18)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80230AE4: lbu         $a0, 0x0($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X0);
    // 0x80230AE8: mflo        $s2
    ctx->r18 = lo;
    // 0x80230AEC: jal         0x802306FC
    // 0x80230AF0: nop

    static_3_802306FC(rdram, ctx);
        goto after_1;
    // 0x80230AF0: nop

    after_1:
    // 0x80230AF4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80230AF8: slt         $at, $s0, $s3
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x80230AFC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80230B00: bne         $at, $zero, L_80230AE0
    if (ctx->r1 != 0) {
        // 0x80230B04: addu        $s2, $s2, $v0
        ctx->r18 = ADD32(ctx->r18, ctx->r2);
            goto L_80230AE0;
    }
    // 0x80230B04: addu        $s2, $s2, $v0
    ctx->r18 = ADD32(ctx->r18, ctx->r2);
L_80230B08:
    // 0x80230B08: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80230B0C: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x80230B10: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80230B14: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80230B18: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80230B1C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80230B20: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80230B24: jr          $ra
    // 0x80230B28: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80230B28: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void D_80228C90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80228C90: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x80228C94: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80228C98: jr          $ra
    // 0x80228C9C: sw          $t6, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r14;
    return;
    // 0x80228C9C: sw          $t6, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r14;
;}
RECOMP_FUNC void D_802E807C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E80FC: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x802E8100: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x802E8104: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x802E8108: and         $t7, $a1, $at
    ctx->r15 = ctx->r5 & ctx->r1;
    // 0x802E810C: bne         $t6, $t7, L_802E8118
    if (ctx->r14 != ctx->r15) {
        // 0x802E8110: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_802E8118;
    }
    // 0x802E8110: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x802E8114: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_802E8118:
    // 0x802E8118: jr          $ra
    // 0x802E811C: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    return;
    // 0x802E811C: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
;}
RECOMP_FUNC void D_802051B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802051B4: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x802051B8: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x802051BC: lbu         $t6, 0x0($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X0);
    // 0x802051C0: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802051C4: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802051C8: bne         $t6, $zero, L_802051E4
    if (ctx->r14 != 0) {
        // 0x802051CC: addiu       $v0, $v0, 0x0
        ctx->r2 = ADD32(ctx->r2, 0X0);
            goto L_802051E4;
    }
    // 0x802051CC: addiu       $v0, $v0, 0x0
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x802051D0: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x802051D4: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x802051D8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802051DC: sb          $t8, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r24;
    // 0x802051E0: sw          $t7, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r15;
L_802051E4:
    // 0x802051E4: jr          $ra
    // 0x802051E8: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    return;
    // 0x802051E8: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
;}
RECOMP_FUNC void D_802D0BB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D0C34: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802D0C38: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802D0C3C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802D0C40: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802D0C44: beq         $a0, $zero, L_802D0CD0
    if (ctx->r4 == 0) {
        // 0x802D0C48: sw          $a1, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r5;
            goto L_802D0CD0;
    }
    // 0x802D0C48: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x802D0C4C: lw          $v0, 0x134($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X134);
    // 0x802D0C50: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802D0C54: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802D0C58: sw          $t6, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r14;
    // 0x802D0C5C: lh          $t7, 0x50($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X50);
    // 0x802D0C60: lw          $t9, 0x54($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X54);
    // 0x802D0C64: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802D0C68: addu        $a0, $t7, $a0
    ctx->r4 = ADD32(ctx->r15, ctx->r4);
    // 0x802D0C6C: jalr        $t9
    // 0x802D0C70: addiu       $a0, $a0, 0x84
    ctx->r4 = ADD32(ctx->r4, 0X84);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x802D0C70: addiu       $a0, $a0, 0x84
    ctx->r4 = ADD32(ctx->r4, 0X84);
    after_0:
    // 0x802D0C74: lui         $a3, 0x8029
    ctx->r7 = S32(0X8029 << 16);
    // 0x802D0C78: addiu       $a3, $a3, -0x4074
    ctx->r7 = ADD32(ctx->r7, -0X4074);
    // 0x802D0C7C: addiu       $a0, $s0, 0xE10
    ctx->r4 = ADD32(ctx->r16, 0XE10);
    // 0x802D0C80: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x802D0C84: addiu       $a2, $zero, 0x448
    ctx->r6 = ADD32(0, 0X448);
    // 0x802D0C88: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802D0C8C: jal         0x802C6A00
    // 0x802D0C90: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    static_3_802C6A00(rdram, ctx);
        goto after_1;
    // 0x802D0C90: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_1:
    // 0x802D0C94: addiu       $a0, $s0, 0x1B4
    ctx->r4 = ADD32(ctx->r16, 0X1B4);
    // 0x802D0C98: jal         0x803057BC
    // 0x802D0C9C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_803057BC(rdram, ctx);
        goto after_2;
    // 0x802D0C9C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x802D0CA0: addiu       $a0, $s0, 0x84
    ctx->r4 = ADD32(ctx->r16, 0X84);
    // 0x802D0CA4: jal         0x8031DD60
    // 0x802D0CA8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_8031DD60(rdram, ctx);
        goto after_3;
    // 0x802D0CA8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x802D0CAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D0CB0: jal         0x803086D4
    // 0x802D0CB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_803086D4(rdram, ctx);
        goto after_4;
    // 0x802D0CB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x802D0CB8: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x802D0CBC: andi        $t0, $t8, 0x1
    ctx->r8 = ctx->r24 & 0X1;
    // 0x802D0CC0: beql        $t0, $zero, L_802D0CD4
    if (ctx->r8 == 0) {
        // 0x802D0CC4: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_802D0CD4;
    }
    goto skip_0;
    // 0x802D0CC4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x802D0CC8: jal         0x802C681C
    // 0x802D0CCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802C681C(rdram, ctx);
        goto after_5;
    // 0x802D0CCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
L_802D0CD0:
    // 0x802D0CD0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802D0CD4:
    // 0x802D0CD4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802D0CD8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802D0CDC: jr          $ra
    // 0x802D0CE0: nop

    return;
    // 0x802D0CE0: nop

;}
RECOMP_FUNC void D_80248A2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80248A2C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80248A30: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80248A34: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x80248A38: addiu       $t7, $t6, 0x40
    ctx->r15 = ADD32(ctx->r14, 0X40);
    // 0x80248A3C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80248A40: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80248A44: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x80248A48: lw          $t8, 0x40($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X40);
    // 0x80248A4C: beq         $t8, $zero, L_80248B04
    if (ctx->r24 == 0) {
        // 0x80248A50: sw          $t8, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r24;
            goto L_80248B04;
    }
    // 0x80248A50: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x80248A54: lw          $t9, 0x8($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X8);
    // 0x80248A58: lw          $t0, 0x10($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X10);
    // 0x80248A5C: slt         $at, $t9, $t0
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80248A60: beq         $at, $zero, L_80248B04
    if (ctx->r1 == 0) {
        // 0x80248A64: nop
    
            goto L_80248B04;
    }
    // 0x80248A64: nop

    // 0x80248A68: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80248A6C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80248A70: lw          $t2, 0xC($t1)
    ctx->r10 = MEM_W(ctx->r9, 0XC);
    // 0x80248A74: lw          $t3, 0x8($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X8);
    // 0x80248A78: lw          $t5, 0x10($t1)
    ctx->r13 = MEM_W(ctx->r9, 0X10);
    // 0x80248A7C: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80248A80: div         $zero, $t4, $t5
    lo = S32(S64(S32(ctx->r12)) / S64(S32(ctx->r13))); hi = S32(S64(S32(ctx->r12)) % S64(S32(ctx->r13)));
    // 0x80248A84: mfhi        $t7
    ctx->r15 = hi;
    // 0x80248A88: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x80248A8C: lw          $t0, 0x14($t1)
    ctx->r8 = MEM_W(ctx->r9, 0X14);
    // 0x80248A90: lw          $t8, 0x4($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X4);
    // 0x80248A94: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x80248A98: addu        $t2, $t0, $t9
    ctx->r10 = ADD32(ctx->r8, ctx->r25);
    // 0x80248A9C: sw          $t8, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r24;
    // 0x80248AA0: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80248AA4: bne         $t5, $zero, L_80248AB0
    if (ctx->r13 != 0) {
        // 0x80248AA8: nop
    
            goto L_80248AB0;
    }
    // 0x80248AA8: nop

    // 0x80248AAC: break       7
    do_break(2149878444);
L_80248AB0:
    // 0x80248AB0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80248AB4: bne         $t5, $at, L_80248AC8
    if (ctx->r13 != ctx->r1) {
        // 0x80248AB8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80248AC8;
    }
    // 0x80248AB8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80248ABC: bne         $t4, $at, L_80248AC8
    if (ctx->r12 != ctx->r1) {
        // 0x80248AC0: nop
    
            goto L_80248AC8;
    }
    // 0x80248AC0: nop

    // 0x80248AC4: break       6
    do_break(2149878468);
L_80248AC8:
    // 0x80248AC8: lw          $t4, 0x8($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X8);
    // 0x80248ACC: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80248AD0: sw          $t5, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r13;
    // 0x80248AD4: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80248AD8: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x80248ADC: lw          $t1, 0x0($t7)
    ctx->r9 = MEM_W(ctx->r15, 0X0);
    // 0x80248AE0: beq         $t1, $zero, L_80248B04
    if (ctx->r9 == 0) {
        // 0x80248AE4: nop
    
            goto L_80248B04;
    }
    // 0x80248AE4: nop

    // 0x80248AE8: jal         0x80241F44
    // 0x80248AEC: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    static_3_80241F44(rdram, ctx);
        goto after_0;
    // 0x80248AEC: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_0:
    // 0x80248AF0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80248AF4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80248AF8: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80248AFC: jal         0x80241EFC
    // 0x80248B00: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    static_3_80241EFC(rdram, ctx);
        goto after_1;
    // 0x80248B00: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
L_80248B04:
    // 0x80248B04: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80248B08: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80248B0C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80248B10: jr          $ra
    // 0x80248B14: nop

    return;
    // 0x80248B14: nop

;}
RECOMP_FUNC void D_8028CBFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028CC7C: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x8028CC80: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8028CC84: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8028CC88: jal         0x8021BA90
    // 0x8028CC8C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8021BA90(rdram, ctx);
        goto after_0;
    // 0x8028CC8C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x8028CC90: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x8028CC94: bne         $v0, $at, L_8028CCBC
    if (ctx->r2 != ctx->r1) {
        // 0x8028CC98: sw          $v0, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r2;
            goto L_8028CCBC;
    }
    // 0x8028CC98: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x8028CC9C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8028CCA0: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8028CCA4: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x8028CCA8: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x8028CCAC: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x8028CCB0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8028CCB4: jal         0x80231A24
    // 0x8028CCB8: addiu       $a3, $zero, 0x42
    ctx->r7 = ADD32(0, 0X42);
    static_3_80231A24(rdram, ctx);
        goto after_1;
    // 0x8028CCB8: addiu       $a3, $zero, 0x42
    ctx->r7 = ADD32(0, 0X42);
    after_1:
L_8028CCBC:
    // 0x8028CCBC: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x8028CCC0: jal         0x8021ACB0
    // 0x8028CCC4: addiu       $a1, $zero, 0x7F
    ctx->r5 = ADD32(0, 0X7F);
    static_3_8021ACB0(rdram, ctx);
        goto after_2;
    // 0x8028CCC4: addiu       $a1, $zero, 0x7F
    ctx->r5 = ADD32(0, 0X7F);
    after_2:
    // 0x8028CCC8: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x8028CCCC: jal         0x8021B838
    // 0x8028CCD0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_8021B838(rdram, ctx);
        goto after_3;
    // 0x8028CCD0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_3:
    // 0x8028CCD4: lw          $v0, 0x27C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X27C);
    // 0x8028CCD8: addiu       $v1, $s0, 0x1A4
    ctx->r3 = ADD32(ctx->r16, 0X1A4);
    // 0x8028CCDC: sw          $v1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r3;
    // 0x8028CCE0: lh          $t6, 0x20($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X20);
    // 0x8028CCE4: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x8028CCE8: lw          $t9, 0x24($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X24);
    // 0x8028CCEC: addu        $a0, $t6, $s0
    ctx->r4 = ADD32(ctx->r14, ctx->r16);
    // 0x8028CCF0: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    // 0x8028CCF4: jalr        $t9
    // 0x8028CCF8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x8028CCF8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x8028CCFC: lw          $v0, 0x27C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X27C);
    // 0x8028CD00: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x8028CD04: lh          $t7, 0xA0($v0)
    ctx->r15 = MEM_H(ctx->r2, 0XA0);
    // 0x8028CD08: lw          $t9, 0xA4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XA4);
    // 0x8028CD0C: addu        $a0, $t7, $s0
    ctx->r4 = ADD32(ctx->r15, ctx->r16);
    // 0x8028CD10: jalr        $t9
    // 0x8028CD14: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x8028CD14: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    after_5:
    // 0x8028CD18: lw          $v0, 0x27C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X27C);
    // 0x8028CD1C: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    // 0x8028CD20: lh          $t8, 0x98($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X98);
    // 0x8028CD24: lw          $t9, 0x9C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X9C);
    // 0x8028CD28: addu        $a0, $t8, $s0
    ctx->r4 = ADD32(ctx->r24, ctx->r16);
    // 0x8028CD2C: jalr        $t9
    // 0x8028CD30: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x8028CD30: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    after_6:
    // 0x8028CD34: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8028CD38: jal         0x802D27F4
    // 0x8028CD3C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802D27F4(rdram, ctx);
        goto after_7;
    // 0x8028CD3C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
    // 0x8028CD40: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8028CD44: jal         0x802D50E8
    // 0x8028CD48: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    static_3_802D50E8(rdram, ctx);
        goto after_8;
    // 0x8028CD48: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    after_8:
    // 0x8028CD4C: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    // 0x8028CD50: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x8028CD54: lw          $t9, 0xB4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XB4);
    // 0x8028CD58: lh          $t0, 0xB0($v0)
    ctx->r8 = MEM_H(ctx->r2, 0XB0);
    // 0x8028CD5C: jalr        $t9
    // 0x8028CD60: addu        $a0, $t0, $s0
    ctx->r4 = ADD32(ctx->r8, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x8028CD60: addu        $a0, $t0, $s0
    ctx->r4 = ADD32(ctx->r8, ctx->r16);
    after_9:
    // 0x8028CD64: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x8028CD68: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8028CD6C: lui         $at, 0x4300
    ctx->r1 = S32(0X4300 << 16);
    // 0x8028CD70: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8028CD74: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x8028CD78: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8028CD7C: jal         0x80309758
    // 0x8028CD80: swc1        $f4, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f4.u32l;
    static_3_80309758(rdram, ctx);
        goto after_10;
    // 0x8028CD80: swc1        $f4, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f4.u32l;
    after_10:
    // 0x8028CD84: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8028CD88: jal         0x80318E80
    // 0x8028CD8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80318E80(rdram, ctx);
        goto after_11;
    // 0x8028CD8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x8028CD90: jal         0x8022970C
    // 0x8028CD94: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    func_8022970C(rdram, ctx);
        goto after_12;
    // 0x8028CD94: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_12:
    // 0x8028CD98: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8028CD9C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8028CDA0: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x8028CDA4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8028CDA8: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8028CDAC: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x8028CDB0: jal         0x8022A0D0
    // 0x8028CDB4: nop

    static_3_8022A0D0(rdram, ctx);
        goto after_13;
    // 0x8028CDB4: nop

    after_13:
    // 0x8028CDB8: addiu       $a0, $s0, 0x364
    ctx->r4 = ADD32(ctx->r16, 0X364);
    // 0x8028CDBC: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    // 0x8028CDC0: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x8028CDC4: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x8028CDC8: jal         0x802C4A20
    // 0x8028CDCC: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    static_3_802C4A20(rdram, ctx);
        goto after_14;
    // 0x8028CDCC: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_14:
    // 0x8028CDD0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8028CDD4: jal         0x802C580C
    // 0x8028CDD8: lui         $a1, 0x42F0
    ctx->r5 = S32(0X42F0 << 16);
    static_3_802C580C(rdram, ctx);
        goto after_15;
    // 0x8028CDD8: lui         $a1, 0x42F0
    ctx->r5 = S32(0X42F0 << 16);
    after_15:
    // 0x8028CDDC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8028CDE0: jal         0x802C5818
    // 0x8028CDE4: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    static_3_802C5818(rdram, ctx);
        goto after_16;
    // 0x8028CDE4: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    after_16:
    // 0x8028CDE8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8028CDEC: jal         0x802C5824
    // 0x8028CDF0: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    static_3_802C5824(rdram, ctx);
        goto after_17;
    // 0x8028CDF0: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    after_17:
    // 0x8028CDF4: jal         0x8022970C
    // 0x8028CDF8: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    func_8022970C(rdram, ctx);
        goto after_18;
    // 0x8028CDF8: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_18:
    // 0x8028CDFC: lui         $a3, 0x40E3
    ctx->r7 = S32(0X40E3 << 16);
    // 0x8028CE00: ori         $a3, $a3, 0x3333
    ctx->r7 = ctx->r7 | 0X3333;
    // 0x8028CE04: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x8028CE08: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8028CE0C: jal         0x8022A0D0
    // 0x8028CE10: lui         $a2, 0xC194
    ctx->r6 = S32(0XC194 << 16);
    static_3_8022A0D0(rdram, ctx);
        goto after_19;
    // 0x8028CE10: lui         $a2, 0xC194
    ctx->r6 = S32(0XC194 << 16);
    after_19:
    // 0x8028CE14: lui         $a1, 0x4049
    ctx->r5 = S32(0X4049 << 16);
    // 0x8028CE18: ori         $a1, $a1, 0xFE0
    ctx->r5 = ctx->r5 | 0XFE0;
    // 0x8028CE1C: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x8028CE20: jal         0x802D01D4
    // 0x8028CE24: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    static_3_802D01D4(rdram, ctx);
        goto after_20;
    // 0x8028CE24: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    after_20:
    // 0x8028CE28: addiu       $a0, $s0, 0x4F8
    ctx->r4 = ADD32(ctx->r16, 0X4F8);
    // 0x8028CE2C: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    // 0x8028CE30: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x8028CE34: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x8028CE38: jal         0x802C4A20
    // 0x8028CE3C: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    static_3_802C4A20(rdram, ctx);
        goto after_21;
    // 0x8028CE3C: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_21:
    // 0x8028CE40: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8028CE44: jal         0x802C580C
    // 0x8028CE48: lui         $a1, 0x4320
    ctx->r5 = S32(0X4320 << 16);
    static_3_802C580C(rdram, ctx);
        goto after_22;
    // 0x8028CE48: lui         $a1, 0x4320
    ctx->r5 = S32(0X4320 << 16);
    after_22:
    // 0x8028CE4C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8028CE50: jal         0x802C5818
    // 0x8028CE54: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    static_3_802C5818(rdram, ctx);
        goto after_23;
    // 0x8028CE54: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    after_23:
    // 0x8028CE58: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8028CE5C: jal         0x802C5824
    // 0x8028CE60: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    static_3_802C5824(rdram, ctx);
        goto after_24;
    // 0x8028CE60: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    after_24:
    // 0x8028CE64: jal         0x8022970C
    // 0x8028CE68: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    func_8022970C(rdram, ctx);
        goto after_25;
    // 0x8028CE68: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_25:
    // 0x8028CE6C: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x8028CE70: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8028CE74: lui         $a2, 0xC170
    ctx->r6 = S32(0XC170 << 16);
    // 0x8028CE78: jal         0x8022A0D0
    // 0x8028CE7C: lui         $a3, 0x4170
    ctx->r7 = S32(0X4170 << 16);
    static_3_8022A0D0(rdram, ctx);
        goto after_26;
    // 0x8028CE7C: lui         $a3, 0x4170
    ctx->r7 = S32(0X4170 << 16);
    after_26:
    // 0x8028CE80: lui         $a1, 0x4049
    ctx->r5 = S32(0X4049 << 16);
    // 0x8028CE84: ori         $a1, $a1, 0xFE0
    ctx->r5 = ctx->r5 | 0XFE0;
    // 0x8028CE88: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x8028CE8C: jal         0x802D01D4
    // 0x8028CE90: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    static_3_802D01D4(rdram, ctx);
        goto after_27;
    // 0x8028CE90: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    after_27:
    // 0x8028CE94: addiu       $a0, $s0, 0x68C
    ctx->r4 = ADD32(ctx->r16, 0X68C);
    // 0x8028CE98: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    // 0x8028CE9C: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x8028CEA0: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x8028CEA4: jal         0x802C4A20
    // 0x8028CEA8: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    static_3_802C4A20(rdram, ctx);
        goto after_28;
    // 0x8028CEA8: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_28:
    // 0x8028CEAC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8028CEB0: jal         0x802C580C
    // 0x8028CEB4: lui         $a1, 0x4170
    ctx->r5 = S32(0X4170 << 16);
    static_3_802C580C(rdram, ctx);
        goto after_29;
    // 0x8028CEB4: lui         $a1, 0x4170
    ctx->r5 = S32(0X4170 << 16);
    after_29:
    // 0x8028CEB8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8028CEBC: jal         0x802C5818
    // 0x8028CEC0: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    static_3_802C5818(rdram, ctx);
        goto after_30;
    // 0x8028CEC0: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    after_30:
    // 0x8028CEC4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8028CEC8: jal         0x802C5824
    // 0x8028CECC: lui         $a1, 0x40E0
    ctx->r5 = S32(0X40E0 << 16);
    static_3_802C5824(rdram, ctx);
        goto after_31;
    // 0x8028CECC: lui         $a1, 0x40E0
    ctx->r5 = S32(0X40E0 << 16);
    after_31:
    // 0x8028CED0: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    // 0x8028CED4: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    // 0x8028CED8: lw          $t9, 0xBC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XBC);
    // 0x8028CEDC: lh          $t1, 0xB8($v0)
    ctx->r9 = MEM_H(ctx->r2, 0XB8);
    // 0x8028CEE0: jalr        $t9
    // 0x8028CEE4: addu        $a0, $t1, $s0
    ctx->r4 = ADD32(ctx->r9, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_32;
    // 0x8028CEE4: addu        $a0, $t1, $s0
    ctx->r4 = ADD32(ctx->r9, ctx->r16);
    after_32:
    // 0x8028CEE8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8028CEEC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8028CEF0: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x8028CEF4: jr          $ra
    // 0x8028CEF8: nop

    return;
    // 0x8028CEF8: nop

;}
RECOMP_FUNC void D_802171A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802171A0: addiu       $sp, $sp, -0x100
    ctx->r29 = ADD32(ctx->r29, -0X100);
    // 0x802171A4: lw          $t8, 0x118($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X118);
    // 0x802171A8: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802171AC: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x802171B0: sw          $ra, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r31;
    // 0x802171B4: sw          $fp, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r30;
    // 0x802171B8: sw          $s7, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r23;
    // 0x802171BC: sw          $s6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r22;
    // 0x802171C0: sw          $s5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r21;
    // 0x802171C4: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x802171C8: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x802171CC: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x802171D0: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x802171D4: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x802171D8: sdc1        $f26, 0x48($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X48, ctx->r29);
    // 0x802171DC: sdc1        $f24, 0x40($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X40, ctx->r29);
    // 0x802171E0: sdc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X38, ctx->r29);
    // 0x802171E4: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x802171E8: swc1        $f12, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f12.u32l;
    // 0x802171EC: swc1        $f14, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f14.u32l;
    // 0x802171F0: sw          $a2, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r6;
    // 0x802171F4: sw          $a3, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->r7;
    // 0x802171F8: lhu         $t9, 0x0($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X0);
    // 0x802171FC: lw          $t7, 0x1C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X1C);
    // 0x80217200: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80217204: addu        $t1, $t7, $t0
    ctx->r9 = ADD32(ctx->r15, ctx->r8);
    // 0x80217208: lw          $fp, 0x0($t1)
    ctx->r30 = MEM_W(ctx->r9, 0X0);
    // 0x8021720C: lw          $s6, 0x8($fp)
    ctx->r22 = MEM_W(ctx->r30, 0X8);
    // 0x80217210: lbu         $t2, 0x4($s6)
    ctx->r10 = MEM_BU(ctx->r22, 0X4);
    // 0x80217214: jal         0x80228CE0
    // 0x80217218: sh          $t2, 0xFE($sp)
    MEM_H(0XFE, ctx->r29) = ctx->r10;
    static_3_80228CE0(rdram, ctx);
        goto after_0;
    // 0x80217218: sh          $t2, 0xFE($sp)
    MEM_H(0XFE, ctx->r29) = ctx->r10;
    after_0:
    // 0x8021721C: lh          $a2, 0xFE($sp)
    ctx->r6 = MEM_H(ctx->r29, 0XFE);
    // 0x80217220: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80217224: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80217228: blez        $a2, L_80217538
    if (SIGNED(ctx->r6) <= 0) {
        // 0x8021722C: lwc1        $f26, 0x8C($sp)
        ctx->f26.u32l = MEM_W(ctx->r29, 0X8C);
            goto L_80217538;
    }
    // 0x8021722C: lwc1        $f26, 0x8C($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x80217230: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80217234: lui         $s7, 0x0
    ctx->r23 = S32(0X0 << 16);
    // 0x80217238: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x8021723C: addiu       $s7, $s7, 0x0
    ctx->r23 = ADD32(ctx->r23, 0X0);
    // 0x80217240: lwc1        $f24, 0x88($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X88);
    // 0x80217244: lwc1        $f22, 0x84($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X84);
    // 0x80217248: addiu       $s5, $sp, 0xA8
    ctx->r21 = ADD32(ctx->r29, 0XA8);
    // 0x8021724C: lw          $v1, 0x118($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X118);
    // 0x80217250: sll         $s4, $s3, 3
    ctx->r20 = S32(ctx->r19 << 3);
L_80217254:
    // 0x80217254: lw          $t3, 0x0($s6)
    ctx->r11 = MEM_W(ctx->r22, 0X0);
    // 0x80217258: addu        $s4, $s4, $s3
    ctx->r20 = ADD32(ctx->r20, ctx->r19);
    // 0x8021725C: sll         $s4, $s4, 2
    ctx->r20 = S32(ctx->r20 << 2);
    // 0x80217260: slti        $at, $s3, 0x20
    ctx->r1 = SIGNED(ctx->r19) < 0X20 ? 1 : 0;
    // 0x80217264: beq         $at, $zero, L_80217284
    if (ctx->r1 == 0) {
        // 0x80217268: addu        $v0, $t3, $s4
        ctx->r2 = ADD32(ctx->r11, ctx->r20);
            goto L_80217284;
    }
    // 0x80217268: addu        $v0, $t3, $s4
    ctx->r2 = ADD32(ctx->r11, ctx->r20);
    // 0x8021726C: lw          $t4, 0x10($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X10);
    // 0x80217270: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80217274: sllv        $t6, $t5, $s3
    ctx->r14 = S32(ctx->r13 << (ctx->r19 & 31));
    // 0x80217278: and         $t8, $t4, $t6
    ctx->r24 = ctx->r12 & ctx->r14;
    // 0x8021727C: bne         $t8, $zero, L_80217298
    if (ctx->r24 != 0) {
        // 0x80217280: nop
    
            goto L_80217298;
    }
    // 0x80217280: nop

L_80217284:
    // 0x80217284: lbu         $t9, 0x7($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X7);
    // 0x80217288: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x8021728C: andi        $t7, $t9, 0x1
    ctx->r15 = ctx->r25 & 0X1;
    // 0x80217290: beq         $t7, $zero, L_802172A0
    if (ctx->r15 == 0) {
        // 0x80217294: nop
    
            goto L_802172A0;
    }
    // 0x80217294: nop

L_80217298:
    // 0x80217298: b           L_802172A0
    // 0x8021729C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
        goto L_802172A0;
    // 0x8021729C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_802172A0:
    // 0x802172A0: bne         $s0, $zero, L_802172B8
    if (ctx->r16 != 0) {
        // 0x802172A4: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_802172B8;
    }
    // 0x802172A4: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x802172A8: lbu         $t0, 0x7($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X7);
    // 0x802172AC: andi        $t1, $t0, 0x2
    ctx->r9 = ctx->r8 & 0X2;
    // 0x802172B0: bnel        $t1, $zero, L_80217514
    if (ctx->r9 != 0) {
        // 0x802172B4: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_80217514;
    }
    goto skip_0;
    // 0x802172B4: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_0:
L_802172B8:
    // 0x802172B8: lw          $t2, 0x4($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X4);
    // 0x802172BC: sll         $t3, $s3, 1
    ctx->r11 = S32(ctx->r19 << 1);
    // 0x802172C0: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x802172C4: addu        $t5, $t2, $t3
    ctx->r13 = ADD32(ctx->r10, ctx->r11);
    // 0x802172C8: lhu         $t4, 0x0($t5)
    ctx->r12 = MEM_HU(ctx->r13, 0X0);
    // 0x802172CC: lw          $t8, 0x0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X0);
    // 0x802172D0: addiu       $s1, $a2, -0x1
    ctx->r17 = ADD32(ctx->r6, -0X1);
    // 0x802172D4: sll         $t6, $t4, 6
    ctx->r14 = S32(ctx->r12 << 6);
    // 0x802172D8: jal         0x80228DE0
    // 0x802172DC: addu        $a1, $t8, $t6
    ctx->r5 = ADD32(ctx->r24, ctx->r14);
    func_80228DE0(rdram, ctx);
        goto after_1;
    // 0x802172DC: addu        $a1, $t8, $t6
    ctx->r5 = ADD32(ctx->r24, ctx->r14);
    after_1:
    // 0x802172E0: bne         $s3, $zero, L_8021738C
    if (ctx->r19 != 0) {
        // 0x802172E4: lwc1        $f4, 0xD8($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0XD8);
            goto L_8021738C;
    }
    // 0x802172E4: lwc1        $f4, 0xD8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x802172E8: lwc1        $f4, 0xA8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x802172EC: lwc1        $f8, 0xAC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x802172F0: lwc1        $f0, 0x20($fp)
    ctx->f0.u32l = MEM_W(ctx->r30, 0X20);
    // 0x802172F4: mul.s       $f6, $f4, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x802172F8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x802172FC: mul.s       $f10, $f8, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f8.fl);
    // 0x80217300: lwc1        $f8, 0xB0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x80217304: add.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x80217308: mul.s       $f6, $f8, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f8.fl);
    // 0x8021730C: lwc1        $f10, 0xB8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x80217310: mul.s       $f8, $f10, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x80217314: add.s       $f22, $f6, $f4
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f22.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x80217318: lwc1        $f6, 0xBC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x8021731C: mul.s       $f4, $f6, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f6.fl);
    // 0x80217320: lwc1        $f6, 0xC0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x80217324: add.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x80217328: mul.s       $f8, $f6, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f6.fl);
    // 0x8021732C: lwc1        $f4, 0xC8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x80217330: mul.s       $f6, $f4, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x80217334: add.s       $f24, $f8, $f10
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f24.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80217338: lwc1        $f8, 0xCC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x8021733C: mul.s       $f10, $f8, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f8.fl);
    // 0x80217340: lwc1        $f8, 0xD0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x80217344: add.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x80217348: mul.s       $f6, $f8, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f8.fl);
    // 0x8021734C: add.s       $f26, $f6, $f4
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f26.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x80217350: mul.s       $f22, $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = MUL_S(ctx->f22.fl, ctx->f0.fl);
    // 0x80217354: nop

    // 0x80217358: mul.s       $f24, $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f24.fl = MUL_S(ctx->f24.fl, ctx->f0.fl);
    // 0x8021735C: nop

    // 0x80217360: mul.s       $f26, $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f26.fl = MUL_S(ctx->f26.fl, ctx->f0.fl);
    // 0x80217364: div.s       $f8, $f20, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = DIV_S(ctx->f20.fl, ctx->f24.fl);
    // 0x80217368: div.s       $f6, $f20, $f26
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f6.fl = DIV_S(ctx->f20.fl, ctx->f26.fl);
    // 0x8021736C: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x80217370: div.s       $f10, $f20, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = DIV_S(ctx->f20.fl, ctx->f22.fl);
    // 0x80217374: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80217378: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x8021737C: jal         0x8022A210
    // 0x80217380: nop

    static_3_8022A210(rdram, ctx);
        goto after_2;
    // 0x80217380: nop

    after_2:
    // 0x80217384: b           L_80217438
    // 0x80217388: nop

        goto L_80217438;
    // 0x80217388: nop

L_8021738C:
    // 0x8021738C: mul.s       $f10, $f4, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f22.fl);
    // 0x80217390: lwc1        $f8, 0xDC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x80217394: lwc1        $f4, 0xE0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x80217398: lwc1        $f16, 0xA8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x8021739C: mul.s       $f6, $f8, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f24.fl);
    // 0x802173A0: lwc1        $f18, 0xAC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x802173A4: lwc1        $f14, 0xB0($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x802173A8: swc1        $f10, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f10.u32l;
    // 0x802173AC: mul.s       $f10, $f4, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f26.fl);
    // 0x802173B0: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x802173B4: mul.s       $f8, $f16, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x802173B8: swc1        $f6, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f6.u32l;
    // 0x802173BC: mul.s       $f6, $f18, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x802173C0: swc1        $f10, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f10.u32l;
    // 0x802173C4: mul.s       $f10, $f14, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x802173C8: add.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x802173CC: lwc1        $f6, 0xB8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x802173D0: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x802173D4: mul.s       $f10, $f6, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f6.fl);
    // 0x802173D8: lwc1        $f4, 0xBC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x802173DC: div.s       $f0, $f20, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = DIV_S(ctx->f20.fl, ctx->f8.fl);
    // 0x802173E0: mul.s       $f8, $f4, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x802173E4: lwc1        $f4, 0xC0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x802173E8: add.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x802173EC: mul.s       $f10, $f4, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x802173F0: lwc1        $f4, 0xC8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x802173F4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802173F8: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x802173FC: lwc1        $f10, 0xC8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x80217400: div.s       $f2, $f20, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = DIV_S(ctx->f20.fl, ctx->f8.fl);
    // 0x80217404: lwc1        $f8, 0xCC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x80217408: mul.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x8021740C: lwc1        $f4, 0xCC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x80217410: mul.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x80217414: lwc1        $f4, 0xD0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x80217418: add.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x8021741C: mul.s       $f6, $f4, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x80217420: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x80217424: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80217428: div.s       $f12, $f20, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = DIV_S(ctx->f20.fl, ctx->f10.fl);
    // 0x8021742C: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x80217430: jal         0x8022A210
    // 0x80217434: nop

    static_3_8022A210(rdram, ctx);
        goto after_3;
    // 0x80217434: nop

    after_3:
L_80217438:
    // 0x80217438: jal         0x80228D0C
    // 0x8021743C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    static_3_80228D0C(rdram, ctx);
        goto after_4;
    // 0x8021743C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_4:
    // 0x80217440: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80217444: sll         $t9, $s2, 16
    ctx->r25 = S32(ctx->r18 << 16);
    // 0x80217448: beq         $s0, $zero, L_802174A8
    if (ctx->r16 == 0) {
        // 0x8021744C: sra         $s2, $t9, 16
        ctx->r18 = S32(SIGNED(ctx->r25) >> 16);
            goto L_802174A8;
    }
    // 0x8021744C: sra         $s2, $t9, 16
    ctx->r18 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80217450: lw          $t0, 0x0($s7)
    ctx->r8 = MEM_W(ctx->r23, 0X0);
    // 0x80217454: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x80217458: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8021745C: sll         $t2, $s3, 24
    ctx->r10 = S32(ctx->r19 << 24);
    // 0x80217460: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x80217464: or          $t3, $t1, $t2
    ctx->r11 = ctx->r9 | ctx->r10;
    // 0x80217468: jal         0x80228CF0
    // 0x8021746C: sw          $t3, 0x0($s7)
    MEM_W(0X0, ctx->r23) = ctx->r11;
    static_3_80228CF0(rdram, ctx);
        goto after_5;
    // 0x8021746C: sw          $t3, 0x0($s7)
    MEM_W(0X0, ctx->r23) = ctx->r11;
    after_5:
    // 0x80217470: lwc1        $f4, 0x110($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X110);
    // 0x80217474: lwc1        $f6, 0x114($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X114);
    // 0x80217478: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8021747C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80217480: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x80217484: lw          $t5, 0x0($s6)
    ctx->r13 = MEM_W(ctx->r22, 0X0);
    // 0x80217488: sw          $fp, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r30;
    // 0x8021748C: lwc1        $f12, 0x100($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X100);
    // 0x80217490: addu        $t4, $t5, $s4
    ctx->r12 = ADD32(ctx->r13, ctx->r20);
    // 0x80217494: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x80217498: lwc1        $f14, 0x104($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X104);
    // 0x8021749C: lw          $a2, 0x108($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X108);
    // 0x802174A0: jal         0x80219500
    // 0x802174A4: lw          $a3, 0x10C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X10C);
    static_3_80219500(rdram, ctx);
        goto after_6;
    // 0x802174A4: lw          $a3, 0x10C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X10C);
    after_6:
L_802174A8:
    // 0x802174A8: bnel        $s3, $s1, L_802174BC
    if (ctx->r19 != ctx->r17) {
        // 0x802174AC: lw          $t8, 0x0($s6)
        ctx->r24 = MEM_W(ctx->r22, 0X0);
            goto L_802174BC;
    }
    goto skip_1;
    // 0x802174AC: lw          $t8, 0x0($s6)
    ctx->r24 = MEM_W(ctx->r22, 0X0);
    skip_1:
    // 0x802174B0: b           L_80217538
    // 0x802174B4: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
        goto L_80217538;
    // 0x802174B4: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x802174B8: lw          $t8, 0x0($s6)
    ctx->r24 = MEM_W(ctx->r22, 0X0);
L_802174BC:
    // 0x802174BC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x802174C0: addu        $v0, $t8, $s4
    ctx->r2 = ADD32(ctx->r24, ctx->r20);
    // 0x802174C4: lbu         $t6, 0x6($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X6);
    // 0x802174C8: lbu         $t9, 0x2A($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X2A);
    // 0x802174CC: subu        $s1, $t6, $t9
    ctx->r17 = SUB32(ctx->r14, ctx->r25);
    // 0x802174D0: sll         $t7, $s1, 16
    ctx->r15 = S32(ctx->r17 << 16);
    // 0x802174D4: sra         $s1, $t7, 16
    ctx->r17 = S32(SIGNED(ctx->r15) >> 16);
    // 0x802174D8: bltzl       $s1, L_8021750C
    if (SIGNED(ctx->r17) < 0) {
        // 0x802174DC: lh          $a2, 0xFE($sp)
        ctx->r6 = MEM_H(ctx->r29, 0XFE);
            goto L_8021750C;
    }
    goto skip_2;
    // 0x802174DC: lh          $a2, 0xFE($sp)
    ctx->r6 = MEM_H(ctx->r29, 0XFE);
    skip_2:
L_802174E0:
    // 0x802174E0: jal         0x80228D9C
    // 0x802174E4: nop

    static_3_80228D9C(rdram, ctx);
        goto after_7;
    // 0x802174E4: nop

    after_7:
    // 0x802174E8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x802174EC: sll         $t3, $s0, 16
    ctx->r11 = S32(ctx->r16 << 16);
    // 0x802174F0: sra         $s0, $t3, 16
    ctx->r16 = S32(SIGNED(ctx->r11) >> 16);
    // 0x802174F4: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x802174F8: sll         $t1, $s2, 16
    ctx->r9 = S32(ctx->r18 << 16);
    // 0x802174FC: slt         $at, $s1, $s0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x80217500: beq         $at, $zero, L_802174E0
    if (ctx->r1 == 0) {
        // 0x80217504: sra         $s2, $t1, 16
        ctx->r18 = S32(SIGNED(ctx->r9) >> 16);
            goto L_802174E0;
    }
    // 0x80217504: sra         $s2, $t1, 16
    ctx->r18 = S32(SIGNED(ctx->r9) >> 16);
    // 0x80217508: lh          $a2, 0xFE($sp)
    ctx->r6 = MEM_H(ctx->r29, 0XFE);
L_8021750C:
    // 0x8021750C: lw          $v1, 0x118($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X118);
    // 0x80217510: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_80217514:
    // 0x80217514: sll         $t4, $s3, 16
    ctx->r12 = S32(ctx->r19 << 16);
    // 0x80217518: sra         $s3, $t4, 16
    ctx->r19 = S32(SIGNED(ctx->r12) >> 16);
    // 0x8021751C: slt         $at, $s3, $a2
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x80217520: bnel        $at, $zero, L_80217254
    if (ctx->r1 != 0) {
        // 0x80217524: sll         $s4, $s3, 3
        ctx->r20 = S32(ctx->r19 << 3);
            goto L_80217254;
    }
    goto skip_3;
    // 0x80217524: sll         $s4, $s3, 3
    ctx->r20 = S32(ctx->r19 << 3);
    skip_3:
    // 0x80217528: swc1        $f26, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f26.u32l;
    // 0x8021752C: swc1        $f24, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f24.u32l;
    // 0x80217530: swc1        $f22, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f22.u32l;
    // 0x80217534: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_80217538:
    // 0x80217538: blezl       $s2, L_80217564
    if (SIGNED(ctx->r18) <= 0) {
        // 0x8021753C: lw          $ra, 0x74($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X74);
            goto L_80217564;
    }
    goto skip_4;
    // 0x8021753C: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    skip_4:
L_80217540:
    // 0x80217540: jal         0x80228D9C
    // 0x80217544: nop

    static_3_80228D9C(rdram, ctx);
        goto after_8;
    // 0x80217544: nop

    after_8:
    // 0x80217548: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x8021754C: sll         $t6, $s3, 16
    ctx->r14 = S32(ctx->r19 << 16);
    // 0x80217550: sra         $s3, $t6, 16
    ctx->r19 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80217554: slt         $at, $s3, $s2
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x80217558: bne         $at, $zero, L_80217540
    if (ctx->r1 != 0) {
        // 0x8021755C: nop
    
            goto L_80217540;
    }
    // 0x8021755C: nop

    // 0x80217560: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
L_80217564:
    // 0x80217564: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x80217568: ldc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X38);
    // 0x8021756C: ldc1        $f24, 0x40($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X40);
    // 0x80217570: ldc1        $f26, 0x48($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X48);
    // 0x80217574: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x80217578: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x8021757C: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x80217580: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x80217584: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x80217588: lw          $s5, 0x64($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X64);
    // 0x8021758C: lw          $s6, 0x68($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X68);
    // 0x80217590: lw          $s7, 0x6C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X6C);
    // 0x80217594: lw          $fp, 0x70($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X70);
    // 0x80217598: addiu       $sp, $sp, 0x100
    ctx->r29 = ADD32(ctx->r29, 0X100);
    // 0x8021759C: jr          $ra
    // 0x802175A0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    return;
    // 0x802175A0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
;}
RECOMP_FUNC void D_8029A1D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029A254: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8029A258: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8029A25C: sw          $s7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r23;
    // 0x8029A260: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8029A264: or          $s7, $a0, $zero
    ctx->r23 = ctx->r4 | 0;
    // 0x8029A268: sw          $s6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r22;
    // 0x8029A26C: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x8029A270: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x8029A274: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x8029A278: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x8029A27C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x8029A280: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x8029A284: jal         0x802CB994
    // 0x8029A288: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    static_3_802CB994(rdram, ctx);
        goto after_0;
    // 0x8029A288: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    after_0:
    // 0x8029A28C: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x8029A290: jal         0x802CB8E0
    // 0x8029A294: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    static_3_802CB8E0(rdram, ctx);
        goto after_1;
    // 0x8029A294: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    after_1:
    // 0x8029A298: lw          $t6, 0x28($s7)
    ctx->r14 = MEM_W(ctx->r23, 0X28);
    // 0x8029A29C: lbu         $t7, 0x1B($s7)
    ctx->r15 = MEM_BU(ctx->r23, 0X1B);
    // 0x8029A2A0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8029A2A4: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x8029A2A8: lbu         $t8, 0x0($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X0);
    // 0x8029A2AC: slti        $at, $t8, 0x2
    ctx->r1 = SIGNED(ctx->r24) < 0X2 ? 1 : 0;
    // 0x8029A2B0: bne         $at, $zero, L_8029A2BC
    if (ctx->r1 != 0) {
        // 0x8029A2B4: nop
    
            goto L_8029A2BC;
    }
    // 0x8029A2B4: nop

    // 0x8029A2B8: sb          $t9, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r25;
L_8029A2BC:
    // 0x8029A2BC: jal         0x8021E66C
    // 0x8029A2C0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_8021E66C(rdram, ctx);
        goto after_2;
    // 0x8029A2C0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x8029A2C4: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x8029A2C8: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x8029A2CC: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x8029A2D0: jal         0x8021E708
    // 0x8029A2D4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_3;
    // 0x8029A2D4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_3:
    // 0x8029A2D8: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x8029A2DC: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x8029A2E0: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    // 0x8029A2E4: jal         0x8021E87C
    // 0x8029A2E8: addiu       $a1, $zero, 0x7E
    ctx->r5 = ADD32(0, 0X7E);
    static_3_8021E87C(rdram, ctx);
        goto after_4;
    // 0x8029A2E8: addiu       $a1, $zero, 0x7E
    ctx->r5 = ADD32(0, 0X7E);
    after_4:
    // 0x8029A2EC: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x8029A2F0: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x8029A2F4: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    // 0x8029A2F8: jal         0x8021E87C
    // 0x8029A2FC: addiu       $a1, $zero, 0x74
    ctx->r5 = ADD32(0, 0X74);
    static_3_8021E87C(rdram, ctx);
        goto after_5;
    // 0x8029A2FC: addiu       $a1, $zero, 0x74
    ctx->r5 = ADD32(0, 0X74);
    after_5:
    // 0x8029A300: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x8029A304: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x8029A308: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    // 0x8029A30C: jal         0x8021E87C
    // 0x8029A310: addiu       $a1, $zero, 0x6A
    ctx->r5 = ADD32(0, 0X6A);
    static_3_8021E87C(rdram, ctx);
        goto after_6;
    // 0x8029A310: addiu       $a1, $zero, 0x6A
    ctx->r5 = ADD32(0, 0X6A);
    after_6:
    // 0x8029A314: lui         $s5, 0x0
    ctx->r21 = S32(0X0 << 16);
    // 0x8029A318: addiu       $s3, $zero, 0x7B
    ctx->r19 = ADD32(0, 0X7B);
    // 0x8029A31C: addiu       $s6, $zero, 0x48
    ctx->r22 = ADD32(0, 0X48);
    // 0x8029A320: addiu       $s5, $s5, 0x0
    ctx->r21 = ADD32(ctx->r21, 0X0);
    // 0x8029A324: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8029A328: addiu       $s4, $zero, 0x2
    ctx->r20 = ADD32(0, 0X2);
    // 0x8029A32C: lw          $s2, 0x44($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X44);
L_8029A330:
    // 0x8029A330: bne         $s2, $zero, L_8029A37C
    if (ctx->r18 != 0) {
        // 0x8029A334: sll         $t0, $s2, 3
        ctx->r8 = S32(ctx->r18 << 3);
            goto L_8029A37C;
    }
    // 0x8029A334: sll         $t0, $s2, 3
    ctx->r8 = S32(ctx->r18 << 3);
    // 0x8029A338: addu        $t1, $s5, $t0
    ctx->r9 = ADD32(ctx->r21, ctx->r8);
    // 0x8029A33C: sll         $t2, $s1, 2
    ctx->r10 = S32(ctx->r17 << 2);
    // 0x8029A340: addu        $s0, $t1, $t2
    ctx->r16 = ADD32(ctx->r9, ctx->r10);
    // 0x8029A344: jal         0x8022FF90
    // 0x8029A348: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    static_3_8022FF90(rdram, ctx);
        goto after_7;
    // 0x8029A348: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_7:
    // 0x8029A34C: beq         $v0, $zero, L_8029A36C
    if (ctx->r2 == 0) {
        // 0x8029A350: or          $a0, $s7, $zero
        ctx->r4 = ctx->r23 | 0;
            goto L_8029A36C;
    }
    // 0x8029A350: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x8029A354: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x8029A358: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x8029A35C: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    // 0x8029A360: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x8029A364: jal         0x802CB7B0
    // 0x8029A368: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    static_3_802CB7B0(rdram, ctx);
        goto after_8;
    // 0x8029A368: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_8:
L_8029A36C:
    // 0x8029A36C: jal         0x8021E83C
    // 0x8029A370: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    static_3_8021E83C(rdram, ctx);
        goto after_9;
    // 0x8029A370: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_9:
    // 0x8029A374: addu        $s3, $s3, $v0
    ctx->r19 = ADD32(ctx->r19, ctx->r2);
    // 0x8029A378: addiu       $s3, $s3, 0x5
    ctx->r19 = ADD32(ctx->r19, 0X5);
L_8029A37C:
    // 0x8029A37C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8029A380: bne         $s1, $s4, L_8029A330
    if (ctx->r17 != ctx->r20) {
        // 0x8029A384: nop
    
            goto L_8029A330;
    }
    // 0x8029A384: nop

    // 0x8029A388: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8029A38C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x8029A390: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x8029A394: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x8029A398: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x8029A39C: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x8029A3A0: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x8029A3A4: lw          $s6, 0x34($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X34);
    // 0x8029A3A8: lw          $s7, 0x38($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X38);
    // 0x8029A3AC: jr          $ra
    // 0x8029A3B0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x8029A3B0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void D_802A13E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A1468: addiu       $sp, $sp, -0x220
    ctx->r29 = ADD32(ctx->r29, -0X220);
    // 0x802A146C: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802A1470: lbu         $t6, 0x0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X0);
    // 0x802A1474: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802A1478: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802A147C: sw          $a1, 0x224($sp)
    MEM_W(0X224, ctx->r29) = ctx->r5;
    // 0x802A1480: sw          $a2, 0x228($sp)
    MEM_W(0X228, ctx->r29) = ctx->r6;
    // 0x802A1484: sw          $t6, 0x1D0($sp)
    MEM_W(0X1D0, ctx->r29) = ctx->r14;
    // 0x802A1488: lbu         $t7, 0x1C($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X1C);
    // 0x802A148C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802A1490: bnel        $t7, $zero, L_802A1E48
    if (ctx->r15 != 0) {
        // 0x802A1494: mtc1        $zero, $f8
        ctx->f8.u32l = 0;
            goto L_802A1E48;
    }
    goto skip_0;
    // 0x802A1494: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    skip_0:
    // 0x802A1498: lh          $t8, 0xC4($a0)
    ctx->r24 = MEM_H(ctx->r4, 0XC4);
    // 0x802A149C: bne         $t8, $zero, L_802A14D8
    if (ctx->r24 != 0) {
        // 0x802A14A0: nop
    
            goto L_802A14D8;
    }
    // 0x802A14A0: nop

    // 0x802A14A4: jal         0x80300424
    // 0x802A14A8: lwc1        $f12, 0x24($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X24);
    static_3_80300424(rdram, ctx);
        goto after_0;
    // 0x802A14A8: lwc1        $f12, 0x24($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X24);
    after_0:
    // 0x802A14AC: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
    // 0x802A14B0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A14B4: lwc1        $f8, 0x24($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X24);
    // 0x802A14B8: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x802A14BC: swc1        $f6, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->f6.u32l;
    // 0x802A14C0: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A14C4: jal         0x80300424
    // 0x802A14C8: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    static_3_80300424(rdram, ctx);
        goto after_1;
    // 0x802A14C8: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    after_1:
    // 0x802A14CC: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
    // 0x802A14D0: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x802A14D4: swc1        $f6, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f6.u32l;
L_802A14D8:
    // 0x802A14D8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802A14DC: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802A14E0: lw          $a1, 0x5C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X5C);
    // 0x802A14E4: jal         0x802AEF08
    // 0x802A14E8: lw          $a2, 0x60($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X60);
    static_3_802AEF08(rdram, ctx);
        goto after_2;
    // 0x802A14E8: lw          $a2, 0x60($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X60);
    after_2:
    // 0x802A14EC: lwc1        $f8, 0x64($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X64);
    // 0x802A14F0: swc1        $f0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f0.u32l;
    // 0x802A14F4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802A14F8: sub.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x802A14FC: swc1        $f10, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f10.u32l;
    // 0x802A1500: lw          $t9, 0x1D0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1D0);
    // 0x802A1504: beq         $t9, $at, L_802A1530
    if (ctx->r25 == ctx->r1) {
        // 0x802A1508: addiu       $at, $zero, 0x7
        ctx->r1 = ADD32(0, 0X7);
            goto L_802A1530;
    }
    // 0x802A1508: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x802A150C: beql        $t9, $at, L_802A1534
    if (ctx->r25 == ctx->r1) {
        // 0x802A1510: lh          $t0, 0xC4($s0)
        ctx->r8 = MEM_H(ctx->r16, 0XC4);
            goto L_802A1534;
    }
    goto skip_1;
    // 0x802A1510: lh          $t0, 0xC4($s0)
    ctx->r8 = MEM_H(ctx->r16, 0XC4);
    skip_1:
    // 0x802A1514: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x802A1518: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802A151C: nop

    // 0x802A1520: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x802A1524: nop

    // 0x802A1528: bc1fl       L_802A1564
    if (!c1cs) {
        // 0x802A152C: lh          $t3, 0xC4($s0)
        ctx->r11 = MEM_H(ctx->r16, 0XC4);
            goto L_802A1564;
    }
    goto skip_2;
    // 0x802A152C: lh          $t3, 0xC4($s0)
    ctx->r11 = MEM_H(ctx->r16, 0XC4);
    skip_2:
L_802A1530:
    // 0x802A1530: lh          $t0, 0xC4($s0)
    ctx->r8 = MEM_H(ctx->r16, 0XC4);
L_802A1534:
    // 0x802A1534: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802A1538: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x802A153C: bne         $t0, $zero, L_802A1548
    if (ctx->r8 != 0) {
        // 0x802A1540: addiu       $t2, $zero, 0x3
        ctx->r10 = ADD32(0, 0X3);
            goto L_802A1548;
    }
    // 0x802A1540: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x802A1544: sh          $t1, 0xC4($s0)
    MEM_H(0XC4, ctx->r16) = ctx->r9;
L_802A1548:
    // 0x802A1548: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x802A154C: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x802A1550: nop

    // 0x802A1554: bc1fl       L_802A1564
    if (!c1cs) {
        // 0x802A1558: lh          $t3, 0xC4($s0)
        ctx->r11 = MEM_H(ctx->r16, 0XC4);
            goto L_802A1564;
    }
    goto skip_3;
    // 0x802A1558: lh          $t3, 0xC4($s0)
    ctx->r11 = MEM_H(ctx->r16, 0XC4);
    skip_3:
    // 0x802A155C: sh          $t2, 0xC4($s0)
    MEM_H(0XC4, ctx->r16) = ctx->r10;
    // 0x802A1560: lh          $t3, 0xC4($s0)
    ctx->r11 = MEM_H(ctx->r16, 0XC4);
L_802A1564:
    // 0x802A1564: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802A1568: bnel        $t3, $at, L_802A1958
    if (ctx->r11 != ctx->r1) {
        // 0x802A156C: lw          $v0, 0xD8($s0)
        ctx->r2 = MEM_W(ctx->r16, 0XD8);
            goto L_802A1958;
    }
    goto skip_4;
    // 0x802A156C: lw          $v0, 0xD8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD8);
    skip_4:
    // 0x802A1570: lbu         $t4, 0xC9($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0XC9);
    // 0x802A1574: lwc1        $f6, 0x228($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X228);
    // 0x802A1578: bnel        $t4, $zero, L_802A1958
    if (ctx->r12 != 0) {
        // 0x802A157C: lw          $v0, 0xD8($s0)
        ctx->r2 = MEM_W(ctx->r16, 0XD8);
            goto L_802A1958;
    }
    goto skip_5;
    // 0x802A157C: lw          $v0, 0xD8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD8);
    skip_5:
    // 0x802A1580: lwc1        $f0, 0xB8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XB8);
    // 0x802A1584: lwc1        $f4, 0x28($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X28);
    // 0x802A1588: lwc1        $f2, 0xB4($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0XB4);
    // 0x802A158C: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x802A1590: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A1594: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x802A1598: swc1        $f10, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f10.u32l;
    // 0x802A159C: lwc1        $f6, 0x228($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X228);
    // 0x802A15A0: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A15A4: mul.s       $f4, $f2, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x802A15A8: nop

    // 0x802A15AC: mul.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x802A15B0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802A15B4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802A15B8: add.s       $f6, $f0, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f10.fl;
    // 0x802A15BC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802A15C0: swc1        $f6, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f6.u32l;
    // 0x802A15C4: lwc1        $f0, 0xB8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XB8);
    // 0x802A15C8: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x802A15CC: nop

    // 0x802A15D0: bc1f        L_802A15E0
    if (!c1cs) {
        // 0x802A15D4: nop
    
            goto L_802A15E0;
    }
    // 0x802A15D4: nop

    // 0x802A15D8: b           L_802A15E4
    // 0x802A15DC: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
        goto L_802A15E4;
    // 0x802A15DC: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_802A15E0:
    // 0x802A15E0: neg.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = -ctx->f0.fl;
L_802A15E4:
    // 0x802A15E4: c.lt.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl < ctx->f2.fl;
    // 0x802A15E8: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x802A15EC: bc1fl       L_802A1600
    if (!c1cs) {
        // 0x802A15F0: neg.s       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
            goto L_802A1600;
    }
    goto skip_6;
    // 0x802A15F0: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    skip_6:
    // 0x802A15F4: b           L_802A1600
    // 0x802A15F8: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
        goto L_802A1600;
    // 0x802A15F8: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x802A15FC: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
L_802A1600:
    // 0x802A1600: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x802A1604: nop

    // 0x802A1608: bc1fl       L_802A1618
    if (!c1cs) {
        // 0x802A160C: lwc1        $f0, 0x10($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0X10);
            goto L_802A1618;
    }
    goto skip_7;
    // 0x802A160C: lwc1        $f0, 0x10($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X10);
    skip_7:
    // 0x802A1610: swc1        $f2, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f2.u32l;
    // 0x802A1614: lwc1        $f0, 0x10($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X10);
L_802A1618:
    // 0x802A1618: c.eq.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl == ctx->f10.fl;
    // 0x802A161C: nop

    // 0x802A1620: bc1fl       L_802A1630
    if (!c1cs) {
        // 0x802A1624: lui         $at, 0x41A0
        ctx->r1 = S32(0X41A0 << 16);
            goto L_802A1630;
    }
    goto skip_8;
    // 0x802A1624: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    skip_8:
    // 0x802A1628: lwc1        $f0, 0x2BC0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2BC0);
    // 0x802A162C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
L_802A1630:
    // 0x802A1630: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802A1634: lwc1        $f6, 0xCC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XCC);
    // 0x802A1638: lwc1        $f14, 0x224($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X224);
    // 0x802A163C: div.s       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x802A1640: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x802A1644: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x802A1648: c.lt.s      $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f10.fl < ctx->f14.fl;
    // 0x802A164C: nop

    // 0x802A1650: bc1tl       L_802A1674
    if (c1cs) {
        // 0x802A1654: lw          $v0, 0xD8($s0)
        ctx->r2 = MEM_W(ctx->r16, 0XD8);
            goto L_802A1674;
    }
    goto skip_9;
    // 0x802A1654: lw          $v0, 0xD8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD8);
    skip_9:
    // 0x802A1658: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802A165C: lwc1        $f6, 0xBC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XBC);
    // 0x802A1660: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x802A1664: nop

    // 0x802A1668: bc1fl       L_802A17B8
    if (!c1cs) {
        // 0x802A166C: lui         $at, 0x4270
        ctx->r1 = S32(0X4270 << 16);
            goto L_802A17B8;
    }
    goto skip_10;
    // 0x802A166C: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    skip_10:
    // 0x802A1670: lw          $v0, 0xD8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD8);
L_802A1674:
    // 0x802A1674: swc1        $f14, 0xCC($s0)
    MEM_W(0XCC, ctx->r16) = ctx->f14.u32l;
    // 0x802A1678: addiu       $a1, $sp, 0x13C
    ctx->r5 = ADD32(ctx->r29, 0X13C);
    // 0x802A167C: lh          $t5, 0x10($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X10);
    // 0x802A1680: swc1        $f0, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->f0.u32l;
    // 0x802A1684: lw          $t9, 0x14($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X14);
    // 0x802A1688: addu        $a0, $t5, $s0
    ctx->r4 = ADD32(ctx->r13, ctx->r16);
    // 0x802A168C: jalr        $t9
    // 0x802A1690: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x802A1690: nop

    after_3:
    // 0x802A1694: jal         0x8023499C
    // 0x802A1698: nop

    static_3_8023499C(rdram, ctx);
        goto after_4;
    // 0x802A1698: nop

    after_4:
    // 0x802A169C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802A16A0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802A16A4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802A16A8: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x802A16AC: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x802A16B0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802A16B4: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x802A16B8: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x802A16BC: swc1        $f6, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->f6.u32l;
    // 0x802A16C0: lwc1        $f10, 0xBC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XBC);
    // 0x802A16C4: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x802A16C8: nop

    // 0x802A16CC: bc1fl       L_802A1750
    if (!c1cs) {
        // 0x802A16D0: lwc1        $f4, 0x16C($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X16C);
            goto L_802A1750;
    }
    goto skip_11;
    // 0x802A16D0: lwc1        $f4, 0x16C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X16C);
    skip_11:
    // 0x802A16D4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802A16D8: nop

    // 0x802A16DC: mul.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x802A16E0: jal         0x8023499C
    // 0x802A16E4: swc1        $f8, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->f8.u32l;
    static_3_8023499C(rdram, ctx);
        goto after_5;
    // 0x802A16E4: swc1        $f8, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->f8.u32l;
    after_5:
    // 0x802A16E8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802A16EC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802A16F0: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x802A16F4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802A16F8: sub.s       $f10, $f0, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f16.fl;
    // 0x802A16FC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x802A1700: mul.s       $f2, $f10, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x802A1704: c.lt.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl < ctx->f2.fl;
    // 0x802A1708: mov.s       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    ctx->f14.fl = ctx->f2.fl;
    // 0x802A170C: bc1fl       L_802A1720
    if (!c1cs) {
        // 0x802A1710: neg.s       $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = -ctx->f2.fl;
            goto L_802A1720;
    }
    goto skip_12;
    // 0x802A1710: neg.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = -ctx->f2.fl;
    skip_12:
    // 0x802A1714: b           L_802A1720
    // 0x802A1718: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
        goto L_802A1720;
    // 0x802A1718: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
    // 0x802A171C: neg.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = -ctx->f2.fl;
L_802A1720:
    // 0x802A1720: mul.s       $f8, $f12, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f16.fl);
    // 0x802A1724: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x802A1728: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802A172C: mfc1        $a1, $f14
    ctx->r5 = (int32_t)ctx->f14.u32l;
    // 0x802A1730: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x802A1734: addiu       $a0, $sp, 0x13C
    ctx->r4 = ADD32(ctx->r29, 0X13C);
    // 0x802A1738: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x802A173C: neg.s       $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = -ctx->f10.fl;
    // 0x802A1740: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x802A1744: jal         0x8022A0D0
    // 0x802A1748: nop

    static_3_8022A0D0(rdram, ctx);
        goto after_6;
    // 0x802A1748: nop

    after_6:
    // 0x802A174C: lwc1        $f4, 0x16C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X16C);
L_802A1750:
    // 0x802A1750: lwc1        $f8, 0x170($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X170);
    // 0x802A1754: lwc1        $f10, 0x174($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X174);
    // 0x802A1758: addiu       $a0, $sp, 0x1D4
    ctx->r4 = ADD32(ctx->r29, 0X1D4);
    // 0x802A175C: swc1        $f4, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->f4.u32l;
    // 0x802A1760: swc1        $f8, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->f8.u32l;
    // 0x802A1764: jal         0x8022970C
    // 0x802A1768: swc1        $f10, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->f10.u32l;
    func_8022970C(rdram, ctx);
        goto after_7;
    // 0x802A1768: swc1        $f10, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->f10.u32l;
    after_7:
    // 0x802A176C: lwc1        $f6, 0x138($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X138);
    // 0x802A1770: lwc1        $f4, 0x134($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X134);
    // 0x802A1774: lwc1        $f8, 0x130($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X130);
    // 0x802A1778: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802A177C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802A1780: addiu       $a1, $sp, 0x1D4
    ctx->r5 = ADD32(ctx->r29, 0X1D4);
    // 0x802A1784: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802A1788: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802A178C: swc1        $f6, 0x204($sp)
    MEM_W(0X204, ctx->r29) = ctx->f6.u32l;
    // 0x802A1790: swc1        $f4, 0x208($sp)
    MEM_W(0X208, ctx->r29) = ctx->f4.u32l;
    // 0x802A1794: jal         0x802AA2E8
    // 0x802A1798: swc1        $f8, 0x20C($sp)
    MEM_W(0X20C, ctx->r29) = ctx->f8.u32l;
    static_3_802AA2E8(rdram, ctx);
        goto after_8;
    // 0x802A1798: swc1        $f8, 0x20C($sp)
    MEM_W(0X20C, ctx->r29) = ctx->f8.u32l;
    after_8:
    // 0x802A179C: beq         $v0, $zero, L_802A17AC
    if (ctx->r2 == 0) {
        // 0x802A17A0: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802A17AC;
    }
    // 0x802A17A0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802A17A4: jal         0x80287E78
    // 0x802A17A8: lw          $a1, 0x12C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X12C);
    static_3_80287E78(rdram, ctx);
        goto after_9;
    // 0x802A17A8: lw          $a1, 0x12C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X12C);
    after_9:
L_802A17AC:
    // 0x802A17AC: lwc1        $f14, 0x224($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X224);
    // 0x802A17B0: lwc1        $f0, 0x18C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X18C);
    // 0x802A17B4: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
L_802A17B8:
    // 0x802A17B8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802A17BC: lwc1        $f10, 0xD0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XD0);
    // 0x802A17C0: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x802A17C4: div.s       $f4, $f6, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x802A17C8: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x802A17CC: c.lt.s      $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f8.fl < ctx->f14.fl;
    // 0x802A17D0: nop

    // 0x802A17D4: bc1fl       L_802A18FC
    if (!c1cs) {
        // 0x802A17D8: lwc1        $f4, 0xBC($s0)
        ctx->f4.u32l = MEM_W(ctx->r16, 0XBC);
            goto L_802A18FC;
    }
    goto skip_13;
    // 0x802A17D8: lwc1        $f4, 0xBC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XBC);
    skip_13:
    // 0x802A17DC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802A17E0: lwc1        $f10, 0xC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XC);
    // 0x802A17E4: c.lt.s      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.fl < ctx->f10.fl;
    // 0x802A17E8: nop

    // 0x802A17EC: bc1fl       L_802A18FC
    if (!c1cs) {
        // 0x802A17F0: lwc1        $f4, 0xBC($s0)
        ctx->f4.u32l = MEM_W(ctx->r16, 0XBC);
            goto L_802A18FC;
    }
    goto skip_14;
    // 0x802A17F0: lwc1        $f4, 0xBC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XBC);
    skip_14:
    // 0x802A17F4: jal         0x8023499C
    // 0x802A17F8: swc1        $f14, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = ctx->f14.u32l;
    static_3_8023499C(rdram, ctx);
        goto after_10;
    // 0x802A17F8: swc1        $f14, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = ctx->f14.u32l;
    after_10:
    // 0x802A17FC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802A1800: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802A1804: addiu       $a1, $sp, 0xE4
    ctx->r5 = ADD32(ctx->r29, 0XE4);
    // 0x802A1808: mul.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x802A180C: add.s       $f8, $f4, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f2.fl;
    // 0x802A1810: swc1        $f8, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f8.u32l;
    // 0x802A1814: lw          $v0, 0xD8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD8);
    // 0x802A1818: lw          $t9, 0x14($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X14);
    // 0x802A181C: lh          $t6, 0x10($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X10);
    // 0x802A1820: jalr        $t9
    // 0x802A1824: addu        $a0, $t6, $s0
    ctx->r4 = ADD32(ctx->r14, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x802A1824: addu        $a0, $t6, $s0
    ctx->r4 = ADD32(ctx->r14, ctx->r16);
    after_11:
    // 0x802A1828: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802A182C: addiu       $a0, $sp, 0xE4
    ctx->r4 = ADD32(ctx->r29, 0XE4);
    // 0x802A1830: lui         $a2, 0xC1F0
    ctx->r6 = S32(0XC1F0 << 16);
    // 0x802A1834: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802A1838: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x802A183C: jal         0x8022A0D0
    // 0x802A1840: nop

    static_3_8022A0D0(rdram, ctx);
        goto after_12;
    // 0x802A1840: nop

    after_12:
    // 0x802A1844: lwc1        $f6, 0x114($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X114);
    // 0x802A1848: lwc1        $f10, 0x118($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X118);
    // 0x802A184C: lwc1        $f4, 0x11C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X11C);
    // 0x802A1850: addiu       $a0, $sp, 0x1D4
    ctx->r4 = ADD32(ctx->r29, 0X1D4);
    // 0x802A1854: swc1        $f6, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f6.u32l;
    // 0x802A1858: swc1        $f10, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f10.u32l;
    // 0x802A185C: jal         0x8022970C
    // 0x802A1860: swc1        $f4, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f4.u32l;
    func_8022970C(rdram, ctx);
        goto after_13;
    // 0x802A1860: swc1        $f4, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f4.u32l;
    after_13:
    // 0x802A1864: lwc1        $f8, 0xE0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x802A1868: lwc1        $f6, 0xDC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x802A186C: lwc1        $f10, 0xD8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x802A1870: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802A1874: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802A1878: addiu       $a1, $sp, 0x1D4
    ctx->r5 = ADD32(ctx->r29, 0X1D4);
    // 0x802A187C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x802A1880: lui         $a3, 0x4120
    ctx->r7 = S32(0X4120 << 16);
    // 0x802A1884: swc1        $f8, 0x204($sp)
    MEM_W(0X204, ctx->r29) = ctx->f8.u32l;
    // 0x802A1888: swc1        $f6, 0x208($sp)
    MEM_W(0X208, ctx->r29) = ctx->f6.u32l;
    // 0x802A188C: jal         0x802AA2E8
    // 0x802A1890: swc1        $f10, 0x20C($sp)
    MEM_W(0X20C, ctx->r29) = ctx->f10.u32l;
    static_3_802AA2E8(rdram, ctx);
        goto after_14;
    // 0x802A1890: swc1        $f10, 0x20C($sp)
    MEM_W(0X20C, ctx->r29) = ctx->f10.u32l;
    after_14:
    // 0x802A1894: beq         $v0, $zero, L_802A18F8
    if (ctx->r2 == 0) {
        // 0x802A1898: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802A18F8;
    }
    // 0x802A1898: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802A189C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802A18A0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802A18A4: lwc1        $f4, 0xD4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x802A18A8: sw          $v0, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->r2;
    // 0x802A18AC: mul.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x802A18B0: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x802A18B4: jal         0x80287E78
    // 0x802A18B8: nop

    static_3_80287E78(rdram, ctx);
        goto after_15;
    // 0x802A18B8: nop

    after_15:
    // 0x802A18BC: lw          $a0, 0x124($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X124);
    // 0x802A18C0: jal         0x80287DFC
    // 0x802A18C4: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    static_3_80287DFC(rdram, ctx);
        goto after_16;
    // 0x802A18C4: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    after_16:
    // 0x802A18C8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A18CC: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A18D0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802A18D4: lw          $a0, 0x124($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X124);
    // 0x802A18D8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802A18DC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x802A18E0: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x802A18E4: jal         0x80287D54
    // 0x802A18E8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    static_3_80287D54(rdram, ctx);
        goto after_17;
    // 0x802A18E8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_17:
    // 0x802A18EC: lw          $a0, 0x124($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X124);
    // 0x802A18F0: jal         0x80287D40
    // 0x802A18F4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    static_3_80287D40(rdram, ctx);
        goto after_18;
    // 0x802A18F4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_18:
L_802A18F8:
    // 0x802A18F8: lwc1        $f4, 0xBC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XBC);
L_802A18FC:
    // 0x802A18FC: lwc1        $f8, 0x228($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X228);
    // 0x802A1900: lwc1        $f10, 0xB0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XB0);
    // 0x802A1904: lwc1        $f2, 0xAC($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0XAC);
    // 0x802A1908: mul.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x802A190C: sub.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x802A1910: swc1        $f4, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->f4.u32l;
    // 0x802A1914: lwc1        $f0, 0xB0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XB0);
    // 0x802A1918: mul.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x802A191C: nop

    // 0x802A1920: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x802A1924: jal         0x8022AA40
    // 0x802A1928: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    static_3_8022AA40(rdram, ctx);
        goto after_19;
    // 0x802A1928: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    after_19:
    // 0x802A192C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A1930: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A1934: lwc1        $f4, 0xB0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XB0);
    // 0x802A1938: lwc1        $f8, 0xAC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XAC);
    // 0x802A193C: add.s       $f2, $f0, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x802A1940: swc1        $f2, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f2.u32l;
    // 0x802A1944: div.s       $f12, $f4, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = DIV_S(ctx->f4.fl, ctx->f2.fl);
    // 0x802A1948: jal         0x8022AE1C
    // 0x802A194C: div.s       $f14, $f8, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = DIV_S(ctx->f8.fl, ctx->f2.fl);
    static_3_8022AE1C(rdram, ctx);
        goto after_20;
    // 0x802A194C: div.s       $f14, $f8, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = DIV_S(ctx->f8.fl, ctx->f2.fl);
    after_20:
    // 0x802A1950: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    // 0x802A1954: lw          $v0, 0xD8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD8);
L_802A1958:
    // 0x802A1958: addiu       $a1, $sp, 0x190
    ctx->r5 = ADD32(ctx->r29, 0X190);
    // 0x802A195C: lw          $t9, 0x14($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X14);
    // 0x802A1960: lh          $t7, 0x10($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X10);
    // 0x802A1964: jalr        $t9
    // 0x802A1968: addu        $a0, $t7, $s0
    ctx->r4 = ADD32(ctx->r15, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_21;
    // 0x802A1968: addu        $a0, $t7, $s0
    ctx->r4 = ADD32(ctx->r15, ctx->r16);
    after_21:
    // 0x802A196C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802A1970: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    // 0x802A1974: c.eq.s      $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f10.fl == ctx->f6.fl;
    // 0x802A1978: nop

    // 0x802A197C: bc1t        L_802A1A18
    if (c1cs) {
        // 0x802A1980: nop
    
            goto L_802A1A18;
    }
    // 0x802A1980: nop

    // 0x802A1984: lwc1        $f4, 0x5C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X5C);
    // 0x802A1988: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x802A198C: swc1        $f4, 0x21C($sp)
    MEM_W(0X21C, ctx->r29) = ctx->f4.u32l;
    // 0x802A1990: lwc1        $f8, 0x60($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X60);
    // 0x802A1994: swc1        $f8, 0x218($sp)
    MEM_W(0X218, ctx->r29) = ctx->f8.u32l;
    // 0x802A1998: lwc1        $f10, 0x64($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X64);
    // 0x802A199C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x802A19A0: jal         0x8022970C
    // 0x802A19A4: swc1        $f10, 0x214($sp)
    MEM_W(0X214, ctx->r29) = ctx->f10.u32l;
    func_8022970C(rdram, ctx);
        goto after_22;
    // 0x802A19A4: swc1        $f10, 0x214($sp)
    MEM_W(0X214, ctx->r29) = ctx->f10.u32l;
    after_22:
    // 0x802A19A8: lwc1        $f6, 0x21C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X21C);
    // 0x802A19AC: lw          $a1, 0x20($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X20);
    // 0x802A19B0: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    // 0x802A19B4: swc1        $f6, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->f6.u32l;
    // 0x802A19B8: lwc1        $f4, 0x218($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X218);
    // 0x802A19BC: swc1        $f4, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->f4.u32l;
    // 0x802A19C0: lwc1        $f8, 0x214($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X214);
    // 0x802A19C4: swc1        $f8, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f8.u32l;
    // 0x802A19C8: jal         0x802D01D4
    // 0x802A19CC: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    static_3_802D01D4(rdram, ctx);
        goto after_23;
    // 0x802A19CC: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    after_23:
    // 0x802A19D0: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x802A19D4: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    // 0x802A19D8: jal         0x802D01D4
    // 0x802A19DC: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    static_3_802D01D4(rdram, ctx);
        goto after_24;
    // 0x802A19DC: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    after_24:
    // 0x802A19E0: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x802A19E4: lw          $a1, 0x28($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X28);
    // 0x802A19E8: jal         0x802D01D4
    // 0x802A19EC: addiu       $a2, $zero, 0x79
    ctx->r6 = ADD32(0, 0X79);
    static_3_802D01D4(rdram, ctx);
        goto after_25;
    // 0x802A19EC: addiu       $a2, $zero, 0x79
    ctx->r6 = ADD32(0, 0X79);
    after_25:
    // 0x802A19F0: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x802A19F4: lwc1        $f6, 0x228($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X228);
    // 0x802A19F8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802A19FC: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x802A1A00: mul.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x802A1A04: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802A1A08: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x802A1A0C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x802A1A10: jal         0x8022A0D0
    // 0x802A1A14: nop

    static_3_8022A0D0(rdram, ctx);
        goto after_26;
    // 0x802A1A14: nop

    after_26:
L_802A1A18:
    // 0x802A1A18: jal         0x80309DAC
    // 0x802A1A1C: nop

    static_3_80309DAC(rdram, ctx);
        goto after_27;
    // 0x802A1A1C: nop

    after_27:
    // 0x802A1A20: bne         $v0, $zero, L_802A1D0C
    if (ctx->r2 != 0) {
        // 0x802A1A24: lui         $at, 0x4120
        ctx->r1 = S32(0X4120 << 16);
            goto L_802A1D0C;
    }
    // 0x802A1A24: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802A1A28: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802A1A2C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802A1A30: lw          $a1, 0x5C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X5C);
    // 0x802A1A34: jal         0x802AEF08
    // 0x802A1A38: lw          $a2, 0x60($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X60);
    static_3_802AEF08(rdram, ctx);
        goto after_28;
    // 0x802A1A38: lw          $a2, 0x60($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X60);
    after_28:
    // 0x802A1A3C: lwc1        $f2, 0x64($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X64);
    // 0x802A1A40: swc1        $f0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f0.u32l;
    // 0x802A1A44: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x802A1A48: sub.s       $f8, $f2, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x802A1A4C: bc1f        L_802A1A74
    if (!c1cs) {
        // 0x802A1A50: swc1        $f8, 0x8($s0)
        MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
            goto L_802A1A74;
    }
    // 0x802A1A50: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
    // 0x802A1A54: lw          $t8, 0x1D0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1D0);
    // 0x802A1A58: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x802A1A5C: beql        $t8, $at, L_802A1A78
    if (ctx->r24 == ctx->r1) {
        // 0x802A1A60: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_802A1A78;
    }
    goto skip_15;
    // 0x802A1A60: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_15:
    // 0x802A1A64: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802A1A68: lwc1        $f10, 0x4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4);
    // 0x802A1A6C: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
    // 0x802A1A70: swc1        $f10, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f10.u32l;
L_802A1A74:
    // 0x802A1A74: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_802A1A78:
    // 0x802A1A78: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    // 0x802A1A7C: lw          $t0, 0x1D0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1D0);
    // 0x802A1A80: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x802A1A84: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x802A1A88: nop

    // 0x802A1A8C: bc1tl       L_802A1AB4
    if (c1cs) {
        // 0x802A1A90: lwc1        $f8, 0xD4($s0)
        ctx->f8.u32l = MEM_W(ctx->r16, 0XD4);
            goto L_802A1AB4;
    }
    goto skip_16;
    // 0x802A1A90: lwc1        $f8, 0xD4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XD4);
    skip_16:
    // 0x802A1A94: beql        $t0, $at, L_802A1AB4
    if (ctx->r8 == ctx->r1) {
        // 0x802A1A98: lwc1        $f8, 0xD4($s0)
        ctx->f8.u32l = MEM_W(ctx->r16, 0XD4);
            goto L_802A1AB4;
    }
    goto skip_17;
    // 0x802A1A98: lwc1        $f8, 0xD4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XD4);
    skip_17:
    // 0x802A1A9C: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x802A1AA0: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x802A1AA4: nop

    // 0x802A1AA8: bc1fl       L_802A1D58
    if (!c1cs) {
        // 0x802A1AAC: lh          $t6, 0xC4($s0)
        ctx->r14 = MEM_H(ctx->r16, 0XC4);
            goto L_802A1D58;
    }
    goto skip_18;
    // 0x802A1AAC: lh          $t6, 0xC4($s0)
    ctx->r14 = MEM_H(ctx->r16, 0XC4);
    skip_18:
    // 0x802A1AB0: lwc1        $f8, 0xD4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XD4);
L_802A1AB4:
    // 0x802A1AB4: lw          $t1, 0x1D0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1D0);
    // 0x802A1AB8: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x802A1ABC: c.eq.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl == ctx->f8.fl;
    // 0x802A1AC0: nop

    // 0x802A1AC4: bc1fl       L_802A1B04
    if (!c1cs) {
        // 0x802A1AC8: lbu         $t2, 0xC8($s0)
        ctx->r10 = MEM_BU(ctx->r16, 0XC8);
            goto L_802A1B04;
    }
    goto skip_19;
    // 0x802A1AC8: lbu         $t2, 0xC8($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0XC8);
    skip_19:
    // 0x802A1ACC: bne         $t1, $at, L_802A1AEC
    if (ctx->r9 != ctx->r1) {
        // 0x802A1AD0: lwc1        $f8, 0x224($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X224);
            goto L_802A1AEC;
    }
    // 0x802A1AD0: lwc1        $f8, 0x224($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X224);
    // 0x802A1AD4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802A1AD8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802A1ADC: lwc1        $f10, 0x224($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X224);
    // 0x802A1AE0: add.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x802A1AE4: b           L_802A1B00
    // 0x802A1AE8: swc1        $f4, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->f4.u32l;
        goto L_802A1B00;
    // 0x802A1AE8: swc1        $f4, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->f4.u32l;
L_802A1AEC:
    // 0x802A1AEC: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x802A1AF0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802A1AF4: nop

    // 0x802A1AF8: add.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x802A1AFC: swc1        $f6, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->f6.u32l;
L_802A1B00:
    // 0x802A1B00: lbu         $t2, 0xC8($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0XC8);
L_802A1B04:
    // 0x802A1B04: swc1        $f0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f0.u32l;
    // 0x802A1B08: swc1        $f0, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->f0.u32l;
    // 0x802A1B0C: bne         $t2, $zero, L_802A1D54
    if (ctx->r10 != 0) {
        // 0x802A1B10: swc1        $f0, 0xAC($s0)
        MEM_W(0XAC, ctx->r16) = ctx->f0.u32l;
            goto L_802A1D54;
    }
    // 0x802A1B10: swc1        $f0, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f0.u32l;
    // 0x802A1B14: lw          $v0, 0xD8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD8);
    // 0x802A1B18: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x802A1B1C: sb          $t3, 0xC8($s0)
    MEM_B(0XC8, ctx->r16) = ctx->r11;
    // 0x802A1B20: lw          $t9, 0x14($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X14);
    // 0x802A1B24: lh          $t4, 0x10($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X10);
    // 0x802A1B28: addiu       $a1, $sp, 0x1D4
    ctx->r5 = ADD32(ctx->r29, 0X1D4);
    // 0x802A1B2C: jalr        $t9
    // 0x802A1B30: addu        $a0, $t4, $s0
    ctx->r4 = ADD32(ctx->r12, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_29;
    // 0x802A1B30: addu        $a0, $t4, $s0
    ctx->r4 = ADD32(ctx->r12, ctx->r16);
    after_29:
    // 0x802A1B34: jal         0x8030AA30
    // 0x802A1B38: nop

    static_3_8030AA30(rdram, ctx);
        goto after_30;
    // 0x802A1B38: nop

    after_30:
    // 0x802A1B3C: beq         $v0, $zero, L_802A1BA0
    if (ctx->r2 == 0) {
        // 0x802A1B40: lui         $t5, 0x0
        ctx->r13 = S32(0X0 << 16);
            goto L_802A1BA0;
    }
    // 0x802A1B40: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x802A1B44: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802A1B48: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802A1B4C: lwc1        $f4, 0x20C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20C);
    // 0x802A1B50: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802A1B54: addiu       $a1, $sp, 0x1D4
    ctx->r5 = ADD32(ctx->r29, 0X1D4);
    // 0x802A1B58: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x802A1B5C: nop

    // 0x802A1B60: bc1f        L_802A1CB8
    if (!c1cs) {
        // 0x802A1B64: nop
    
            goto L_802A1CB8;
    }
    // 0x802A1B64: nop

    // 0x802A1B68: jal         0x802AABD0
    // 0x802A1B6C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    static_3_802AABD0(rdram, ctx);
        goto after_31;
    // 0x802A1B6C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    after_31:
    // 0x802A1B70: beq         $v0, $zero, L_802A1CB8
    if (ctx->r2 == 0) {
        // 0x802A1B74: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802A1CB8;
    }
    // 0x802A1B74: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802A1B78: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x802A1B7C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802A1B80: nop

    // 0x802A1B84: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802A1B88: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x802A1B8C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x802A1B90: jal         0x80320634
    // 0x802A1B94: nop

    static_3_80320634(rdram, ctx);
        goto after_32;
    // 0x802A1B94: nop

    after_32:
    // 0x802A1B98: b           L_802A1CB8
    // 0x802A1B9C: nop

        goto L_802A1CB8;
    // 0x802A1B9C: nop

L_802A1BA0:
    // 0x802A1BA0: lbu         $t5, 0x0($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X0);
    // 0x802A1BA4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802A1BA8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802A1BAC: bne         $t5, $at, L_802A1CA0
    if (ctx->r13 != ctx->r1) {
        // 0x802A1BB0: addiu       $a1, $sp, 0x1D4
        ctx->r5 = ADD32(ctx->r29, 0X1D4);
            goto L_802A1CA0;
    }
    // 0x802A1BB0: addiu       $a1, $sp, 0x1D4
    ctx->r5 = ADD32(ctx->r29, 0X1D4);
    // 0x802A1BB4: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x802A1BB8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802A1BBC: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x802A1BC0: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x802A1BC4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802A1BC8: c.le.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl <= ctx->f0.fl;
    // 0x802A1BCC: addiu       $a1, $sp, 0x1D4
    ctx->r5 = ADD32(ctx->r29, 0X1D4);
    // 0x802A1BD0: bc1f        L_802A1C80
    if (!c1cs) {
        // 0x802A1BD4: nop
    
            goto L_802A1C80;
    }
    // 0x802A1BD4: nop

    // 0x802A1BD8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802A1BDC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802A1BE0: c.le.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl <= ctx->f6.fl;
    // 0x802A1BE4: nop

    // 0x802A1BE8: bc1f        L_802A1C80
    if (!c1cs) {
        // 0x802A1BEC: nop
    
            goto L_802A1C80;
    }
    // 0x802A1BEC: nop

    // 0x802A1BF0: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x802A1BF4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802A1BF8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x802A1BFC: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x802A1C00: nop

    // 0x802A1C04: bc1fl       L_802A1C14
    if (!c1cs) {
        // 0x802A1C08: mtc1        $v1, $f6
        ctx->f6.u32l = ctx->r3;
            goto L_802A1C14;
    }
    goto skip_20;
    // 0x802A1C08: mtc1        $v1, $f6
    ctx->f6.u32l = ctx->r3;
    skip_20:
    // 0x802A1C0C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802A1C10: mtc1        $v1, $f6
    ctx->f6.u32l = ctx->r3;
L_802A1C14:
    // 0x802A1C14: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802A1C18: negu        $v0, $v1
    ctx->r2 = SUB32(0, ctx->r3);
    // 0x802A1C1C: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x802A1C20: c.lt.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl < ctx->f4.fl;
    // 0x802A1C24: nop

    // 0x802A1C28: bc1f        L_802A1C38
    if (!c1cs) {
        // 0x802A1C2C: nop
    
            goto L_802A1C38;
    }
    // 0x802A1C2C: nop

    // 0x802A1C30: b           L_802A1C38
    // 0x802A1C34: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_802A1C38;
    // 0x802A1C34: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_802A1C38:
    // 0x802A1C38: beq         $v0, $zero, L_802A1C80
    if (ctx->r2 == 0) {
        // 0x802A1C3C: nop
    
            goto L_802A1C80;
    }
    // 0x802A1C3C: nop

    // 0x802A1C40: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802A1C44: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802A1C48: jal         0x802AABD0
    // 0x802A1C4C: addiu       $a1, $sp, 0x1D4
    ctx->r5 = ADD32(ctx->r29, 0X1D4);
    static_3_802AABD0(rdram, ctx);
        goto after_33;
    // 0x802A1C4C: addiu       $a1, $sp, 0x1D4
    ctx->r5 = ADD32(ctx->r29, 0X1D4);
    after_33:
    // 0x802A1C50: beq         $v0, $zero, L_802A1CB8
    if (ctx->r2 == 0) {
        // 0x802A1C54: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802A1CB8;
    }
    // 0x802A1C54: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802A1C58: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x802A1C5C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802A1C60: nop

    // 0x802A1C64: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802A1C68: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x802A1C6C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x802A1C70: jal         0x80320634
    // 0x802A1C74: nop

    static_3_80320634(rdram, ctx);
        goto after_34;
    // 0x802A1C74: nop

    after_34:
    // 0x802A1C78: b           L_802A1CB8
    // 0x802A1C7C: nop

        goto L_802A1CB8;
    // 0x802A1C7C: nop

L_802A1C80:
    // 0x802A1C80: jal         0x802AAB68
    // 0x802A1C84: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    static_3_802AAB68(rdram, ctx);
        goto after_35;
    // 0x802A1C84: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    after_35:
    // 0x802A1C88: beq         $v0, $zero, L_802A1CB8
    if (ctx->r2 == 0) {
        // 0x802A1C8C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802A1CB8;
    }
    // 0x802A1C8C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802A1C90: jal         0x802D717C
    // 0x802A1C94: lui         $a1, 0x40F0
    ctx->r5 = S32(0X40F0 << 16);
    static_3_802D717C(rdram, ctx);
        goto after_36;
    // 0x802A1C94: lui         $a1, 0x40F0
    ctx->r5 = S32(0X40F0 << 16);
    after_36:
    // 0x802A1C98: b           L_802A1CB8
    // 0x802A1C9C: nop

        goto L_802A1CB8;
    // 0x802A1C9C: nop

L_802A1CA0:
    // 0x802A1CA0: jal         0x802AAB68
    // 0x802A1CA4: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    static_3_802AAB68(rdram, ctx);
        goto after_37;
    // 0x802A1CA4: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    after_37:
    // 0x802A1CA8: beq         $v0, $zero, L_802A1CB8
    if (ctx->r2 == 0) {
        // 0x802A1CAC: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802A1CB8;
    }
    // 0x802A1CAC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802A1CB0: jal         0x802D717C
    // 0x802A1CB4: lui         $a1, 0x40F0
    ctx->r5 = S32(0X40F0 << 16);
    static_3_802D717C(rdram, ctx);
        goto after_38;
    // 0x802A1CB4: lui         $a1, 0x40F0
    ctx->r5 = S32(0X40F0 << 16);
    after_38:
L_802A1CB8:
    // 0x802A1CB8: jal         0x8022970C
    // 0x802A1CBC: addiu       $a0, $sp, 0x88
    ctx->r4 = ADD32(ctx->r29, 0X88);
    func_8022970C(rdram, ctx);
        goto after_39;
    // 0x802A1CBC: addiu       $a0, $sp, 0x88
    ctx->r4 = ADD32(ctx->r29, 0X88);
    after_39:
    // 0x802A1CC0: lwc1        $f8, 0x5C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X5C);
    // 0x802A1CC4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802A1CC8: lui         $a3, 0x3DCC
    ctx->r7 = S32(0X3DCC << 16);
    // 0x802A1CCC: swc1        $f8, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f8.u32l;
    // 0x802A1CD0: lwc1        $f6, 0x60($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X60);
    // 0x802A1CD4: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x802A1CD8: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802A1CDC: swc1        $f6, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f6.u32l;
    // 0x802A1CE0: lwc1        $f10, 0x64($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X64);
    // 0x802A1CE4: addiu       $a1, $sp, 0x88
    ctx->r5 = ADD32(ctx->r29, 0X88);
    // 0x802A1CE8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x802A1CEC: jal         0x802AA2E8
    // 0x802A1CF0: swc1        $f10, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f10.u32l;
    static_3_802AA2E8(rdram, ctx);
        goto after_40;
    // 0x802A1CF0: swc1        $f10, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f10.u32l;
    after_40:
    // 0x802A1CF4: beq         $v0, $zero, L_802A1D04
    if (ctx->r2 == 0) {
        // 0x802A1CF8: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802A1D04;
    }
    // 0x802A1CF8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802A1CFC: jal         0x80287E78
    // 0x802A1D00: lw          $a1, 0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10);
    static_3_80287E78(rdram, ctx);
        goto after_41;
    // 0x802A1D00: lw          $a1, 0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10);
    after_41:
L_802A1D04:
    // 0x802A1D04: b           L_802A1D58
    // 0x802A1D08: lh          $t6, 0xC4($s0)
    ctx->r14 = MEM_H(ctx->r16, 0XC4);
        goto L_802A1D58;
    // 0x802A1D08: lh          $t6, 0xC4($s0)
    ctx->r14 = MEM_H(ctx->r16, 0XC4);
L_802A1D0C:
    // 0x802A1D0C: lwc1        $f4, 0x64($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X64);
    // 0x802A1D10: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802A1D14: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802A1D18: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x802A1D1C: lwc1        $f4, 0x224($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X224);
    // 0x802A1D20: bc1tl       L_802A1D44
    if (c1cs) {
        // 0x802A1D24: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_802A1D44;
    }
    goto skip_21;
    // 0x802A1D24: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_21:
    // 0x802A1D28: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    // 0x802A1D2C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802A1D30: nop

    // 0x802A1D34: c.lt.s      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.fl < ctx->f10.fl;
    // 0x802A1D38: nop

    // 0x802A1D3C: bc1f        L_802A1D54
    if (!c1cs) {
        // 0x802A1D40: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_802A1D54;
    }
    // 0x802A1D40: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_802A1D44:
    // 0x802A1D44: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802A1D48: nop

    // 0x802A1D4C: sub.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x802A1D50: swc1        $f6, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->f6.u32l;
L_802A1D54:
    // 0x802A1D54: lh          $t6, 0xC4($s0)
    ctx->r14 = MEM_H(ctx->r16, 0XC4);
L_802A1D58:
    // 0x802A1D58: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802A1D5C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802A1D60: beq         $t6, $at, L_802A1E74
    if (ctx->r14 == ctx->r1) {
        // 0x802A1D64: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_802A1E74;
    }
    // 0x802A1D64: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802A1D68: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802A1D6C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802A1D70: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x802A1D74: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802A1D78: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x802A1D7C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802A1D80: addiu       $a1, $sp, 0x190
    ctx->r5 = ADD32(ctx->r29, 0X190);
    // 0x802A1D84: addiu       $a2, $s0, 0x2C
    ctx->r6 = ADD32(ctx->r16, 0X2C);
    // 0x802A1D88: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802A1D8C: jal         0x802AF31C
    // 0x802A1D90: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    static_3_802AF31C(rdram, ctx);
        goto after_42;
    // 0x802A1D90: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_42:
    // 0x802A1D94: beq         $v0, $zero, L_802A1E74
    if (ctx->r2 == 0) {
        // 0x802A1D98: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_802A1E74;
    }
    // 0x802A1D98: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802A1D9C: beql        $v0, $at, L_802A1E78
    if (ctx->r2 == ctx->r1) {
        // 0x802A1DA0: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_802A1E78;
    }
    goto skip_22;
    // 0x802A1DA0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_22:
    // 0x802A1DA4: jal         0x80309DAC
    // 0x802A1DA8: sw          $v0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r2;
    static_3_80309DAC(rdram, ctx);
        goto after_43;
    // 0x802A1DA8: sw          $v0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r2;
    after_43:
    // 0x802A1DAC: beq         $v0, $zero, L_802A1E74
    if (ctx->r2 == 0) {
        // 0x802A1DB0: lw          $v1, 0x84($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X84);
            goto L_802A1E74;
    }
    // 0x802A1DB0: lw          $v1, 0x84($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X84);
    // 0x802A1DB4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x802A1DB8: beq         $v1, $at, L_802A1E74
    if (ctx->r3 == ctx->r1) {
        // 0x802A1DBC: addiu       $t8, $zero, 0x3
        ctx->r24 = ADD32(0, 0X3);
            goto L_802A1E74;
    }
    // 0x802A1DBC: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x802A1DC0: sh          $t8, 0xC4($s0)
    MEM_H(0XC4, ctx->r16) = ctx->r24;
    // 0x802A1DC4: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x802A1DC8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802A1DCC: lwc1        $f4, 0x224($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X224);
    // 0x802A1DD0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802A1DD4: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x802A1DD8: add.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x802A1DDC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802A1DE0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802A1DE4: swc1        $f10, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f10.u32l;
    // 0x802A1DE8: swc1        $f6, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->f6.u32l;
    // 0x802A1DEC: swc1        $f4, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->f4.u32l;
    // 0x802A1DF0: jal         0x8022970C
    // 0x802A1DF4: swc1        $f8, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f8.u32l;
    func_8022970C(rdram, ctx);
        goto after_44;
    // 0x802A1DF4: swc1        $f8, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f8.u32l;
    after_44:
    // 0x802A1DF8: lwc1        $f6, 0x5C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X5C);
    // 0x802A1DFC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802A1E00: lui         $a3, 0x3DCC
    ctx->r7 = S32(0X3DCC << 16);
    // 0x802A1E04: swc1        $f6, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f6.u32l;
    // 0x802A1E08: lwc1        $f10, 0x60($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X60);
    // 0x802A1E0C: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x802A1E10: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802A1E14: swc1        $f10, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f10.u32l;
    // 0x802A1E18: lwc1        $f4, 0x64($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X64);
    // 0x802A1E1C: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x802A1E20: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x802A1E24: jal         0x802AA2E8
    // 0x802A1E28: swc1        $f4, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f4.u32l;
    static_3_802AA2E8(rdram, ctx);
        goto after_45;
    // 0x802A1E28: swc1        $f4, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f4.u32l;
    after_45:
    // 0x802A1E2C: beq         $v0, $zero, L_802A1E74
    if (ctx->r2 == 0) {
        // 0x802A1E30: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802A1E74;
    }
    // 0x802A1E30: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802A1E34: jal         0x80287E78
    // 0x802A1E38: lw          $a1, 0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10);
    static_3_80287E78(rdram, ctx);
        goto after_46;
    // 0x802A1E38: lw          $a1, 0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10);
    after_46:
    // 0x802A1E3C: b           L_802A1E78
    // 0x802A1E40: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_802A1E78;
    // 0x802A1E40: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802A1E44: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
L_802A1E48:
    // 0x802A1E48: lwc1        $f6, 0xD4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XD4);
    // 0x802A1E4C: lwc1        $f10, 0x224($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X224);
    // 0x802A1E50: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802A1E54: c.eq.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl == ctx->f6.fl;
    // 0x802A1E58: nop

    // 0x802A1E5C: bc1fl       L_802A1E78
    if (!c1cs) {
        // 0x802A1E60: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_802A1E78;
    }
    goto skip_23;
    // 0x802A1E60: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_23:
    // 0x802A1E64: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802A1E68: nop

    // 0x802A1E6C: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x802A1E70: swc1        $f8, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->f8.u32l;
L_802A1E74:
    // 0x802A1E74: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_802A1E78:
    // 0x802A1E78: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802A1E7C: addiu       $sp, $sp, 0x220
    ctx->r29 = ADD32(ctx->r29, 0X220);
    // 0x802A1E80: jr          $ra
    // 0x802A1E84: nop

    return;
    // 0x802A1E84: nop

;}
RECOMP_FUNC void D_8028C79C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028C81C: lw          $t6, 0x78($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X78);
    // 0x8028C820: or          $t7, $t6, $a1
    ctx->r15 = ctx->r14 | ctx->r5;
    // 0x8028C824: jr          $ra
    // 0x8028C828: sw          $t7, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->r15;
    return;
    // 0x8028C828: sw          $t7, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void D_8029E980(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029EA00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8029EA04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8029EA08: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8029EA0C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8029EA10: jal         0x80211650
    // 0x8029EA14: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    static_3_80211650(rdram, ctx);
        goto after_0;
    // 0x8029EA14: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_0:
    // 0x8029EA18: bne         $v0, $zero, L_8029EA64
    if (ctx->r2 != 0) {
        // 0x8029EA1C: lw          $t2, 0x1C($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X1C);
            goto L_8029EA64;
    }
    // 0x8029EA1C: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8029EA20: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8029EA24: jal         0x80231A24
    // 0x8029EA28: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_1;
    // 0x8029EA28: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_1:
    // 0x8029EA2C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8029EA30: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8029EA34: swc1        $f0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f0.u32l;
    // 0x8029EA38: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x8029EA3C: swc1        $f0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f0.u32l;
    // 0x8029EA40: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8029EA44: swc1        $f0, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f0.u32l;
    // 0x8029EA48: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x8029EA4C: swc1        $f0, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f0.u32l;
    // 0x8029EA50: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8029EA54: swc1        $f0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f0.u32l;
    // 0x8029EA58: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x8029EA5C: b           L_8029EAA8
    // 0x8029EA60: swc1        $f0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f0.u32l;
        goto L_8029EAA8;
    // 0x8029EA60: swc1        $f0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f0.u32l;
L_8029EA64:
    // 0x8029EA64: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8029EA68: swc1        $f4, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->f4.u32l;
    // 0x8029EA6C: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x8029EA70: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8029EA74: swc1        $f6, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f6.u32l;
    // 0x8029EA78: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8029EA7C: lwc1        $f8, 0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8029EA80: swc1        $f8, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f8.u32l;
    // 0x8029EA84: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x8029EA88: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8029EA8C: swc1        $f10, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->f10.u32l;
    // 0x8029EA90: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8029EA94: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8029EA98: swc1        $f16, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f16.u32l;
    // 0x8029EA9C: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x8029EAA0: lwc1        $f18, 0x14($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X14);
    // 0x8029EAA4: swc1        $f18, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f18.u32l;
L_8029EAA8:
    // 0x8029EAA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8029EAAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8029EAB0: jr          $ra
    // 0x8029EAB4: nop

    return;
    // 0x8029EAB4: nop

;}
RECOMP_FUNC void D_802EF2F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EF378: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802EF37C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802EF380: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802EF384: bne         $a0, $zero, L_802EF39C
    if (ctx->r4 != 0) {
        // 0x802EF388: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_802EF39C;
    }
    // 0x802EF388: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802EF38C: jal         0x802C67EC
    // 0x802EF390: addiu       $a0, $zero, 0x11C
    ctx->r4 = ADD32(0, 0X11C);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802EF390: addiu       $a0, $zero, 0x11C
    ctx->r4 = ADD32(0, 0X11C);
    after_0:
    // 0x802EF394: beq         $v0, $zero, L_802EF4A8
    if (ctx->r2 == 0) {
        // 0x802EF398: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_802EF4A8;
    }
    // 0x802EF398: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_802EF39C:
    // 0x802EF39C: jal         0x8031F5A0
    // 0x802EF3A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_8031F5A0(rdram, ctx);
        goto after_1;
    // 0x802EF3A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x802EF3A4: addiu       $a0, $s0, 0xEC
    ctx->r4 = ADD32(ctx->r16, 0XEC);
    // 0x802EF3A8: lui         $a3, 0x8029
    ctx->r7 = S32(0X8029 << 16);
    // 0x802EF3AC: addiu       $a3, $a3, -0x5B40
    ctx->r7 = ADD32(ctx->r7, -0X5B40);
    // 0x802EF3B0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x802EF3B4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802EF3B8: jal         0x802C6930
    // 0x802EF3BC: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    static_3_802C6930(rdram, ctx);
        goto after_2;
    // 0x802EF3BC: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_2:
    // 0x802EF3C0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x802EF3C4: sh          $a2, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r6;
    // 0x802EF3C8: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x802EF3CC: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x802EF3D0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802EF3D4: lw          $v1, 0xB0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XB0);
    // 0x802EF3D8: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x802EF3DC: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x802EF3E0: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x802EF3E4: addiu       $t9, $zero, 0x199
    ctx->r25 = ADD32(0, 0X199);
    // 0x802EF3E8: addiu       $t0, $zero, 0xE
    ctx->r8 = ADD32(0, 0XE);
    // 0x802EF3EC: sh          $t7, 0xB4($s0)
    MEM_H(0XB4, ctx->r16) = ctx->r15;
    // 0x802EF3F0: sh          $t8, 0xD6($s0)
    MEM_H(0XD6, ctx->r16) = ctx->r24;
    // 0x802EF3F4: sh          $t0, 0xA6($s0)
    MEM_H(0XA6, ctx->r16) = ctx->r8;
    // 0x802EF3F8: sh          $t9, 0x9C($s0)
    MEM_H(0X9C, ctx->r16) = ctx->r25;
    // 0x802EF3FC: sh          $a3, 0x98($s0)
    MEM_H(0X98, ctx->r16) = ctx->r7;
    // 0x802EF400: sh          $a3, 0x9A($s0)
    MEM_H(0X9A, ctx->r16) = ctx->r7;
    // 0x802EF404: sh          $a2, 0xA4($s0)
    MEM_H(0XA4, ctx->r16) = ctx->r6;
    // 0x802EF408: sw          $t6, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->r14;
    // 0x802EF40C: swc1        $f4, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f4.u32l;
    // 0x802EF410: lw          $t9, 0x54($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X54);
    // 0x802EF414: lh          $t1, 0x50($v1)
    ctx->r9 = MEM_H(ctx->r3, 0X50);
    // 0x802EF418: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    // 0x802EF41C: jalr        $t9
    // 0x802EF420: addu        $a0, $t1, $s0
    ctx->r4 = ADD32(ctx->r9, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x802EF420: addu        $a0, $t1, $s0
    ctx->r4 = ADD32(ctx->r9, ctx->r16);
    after_3:
    // 0x802EF424: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x802EF428: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802EF42C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802EF430: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802EF434: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802EF438: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802EF43C: mul.s       $f6, $f2, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x802EF440: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x802EF444: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802EF448: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x802EF44C: lw          $v1, 0xB0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XB0);
    // 0x802EF450: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802EF454: sh          $t7, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r15;
    // 0x802EF458: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x802EF45C: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x802EF460: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x802EF464: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x802EF468: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x802EF46C: sh          $v0, 0x76($s0)
    MEM_H(0X76, ctx->r16) = ctx->r2;
    // 0x802EF470: sh          $v0, 0x7C($s0)
    MEM_H(0X7C, ctx->r16) = ctx->r2;
    // 0x802EF474: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x802EF478: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    // 0x802EF47C: sh          $v0, 0xE0($s0)
    MEM_H(0XE0, ctx->r16) = ctx->r2;
    // 0x802EF480: sh          $v0, 0xE2($s0)
    MEM_H(0XE2, ctx->r16) = ctx->r2;
    // 0x802EF484: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x802EF488: sh          $v0, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r2;
    // 0x802EF48C: sh          $v0, 0xE6($s0)
    MEM_H(0XE6, ctx->r16) = ctx->r2;
    // 0x802EF490: sh          $t4, 0x78($s0)
    MEM_H(0X78, ctx->r16) = ctx->r12;
    // 0x802EF494: sh          $t6, 0x7A($s0)
    MEM_H(0X7A, ctx->r16) = ctx->r14;
    // 0x802EF498: lw          $t9, 0x6C($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X6C);
    // 0x802EF49C: lh          $t8, 0x68($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X68);
    // 0x802EF4A0: jalr        $t9
    // 0x802EF4A4: addu        $a0, $t8, $s0
    ctx->r4 = ADD32(ctx->r24, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x802EF4A4: addu        $a0, $t8, $s0
    ctx->r4 = ADD32(ctx->r24, ctx->r16);
    after_4:
L_802EF4A8:
    // 0x802EF4A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802EF4AC: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x802EF4B0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802EF4B4: jr          $ra
    // 0x802EF4B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x802EF4B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void D_802081E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802081E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802081E4: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802081E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802081EC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802081F0: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802081F4: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802081F8: jal         0x80238D94
    // 0x802081FC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80238D94(rdram, ctx);
        goto after_0;
    // 0x802081FC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x80208200: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80208204: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80208208: jr          $ra
    // 0x8020820C: nop

    return;
    // 0x8020820C: nop

;}
RECOMP_FUNC void D_802D91FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D927C: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802D9280: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x802D9284: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802D9288: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x802D928C: beq         $v0, $at, L_802D92B4
    if (ctx->r2 == ctx->r1) {
        // 0x802D9290: addiu       $t6, $zero, 0x9
        ctx->r14 = ADD32(0, 0X9);
            goto L_802D92B4;
    }
    // 0x802D9290: addiu       $t6, $zero, 0x9
    ctx->r14 = ADD32(0, 0X9);
    // 0x802D9294: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802D9298: beq         $v0, $at, L_802D92BC
    if (ctx->r2 == ctx->r1) {
        // 0x802D929C: addiu       $t7, $zero, 0x3
        ctx->r15 = ADD32(0, 0X3);
            goto L_802D92BC;
    }
    // 0x802D929C: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x802D92A0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802D92A4: beq         $v0, $at, L_802D92C4
    if (ctx->r2 == ctx->r1) {
        // 0x802D92A8: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_802D92C4;
    }
    // 0x802D92A8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802D92AC: b           L_802D92CC
    // 0x802D92B0: lbu         $v0, 0x7($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X7);
        goto L_802D92CC;
    // 0x802D92B0: lbu         $v0, 0x7($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X7);
L_802D92B4:
    // 0x802D92B4: b           L_802D92C8
    // 0x802D92B8: sb          $t6, 0x7($sp)
    MEM_B(0X7, ctx->r29) = ctx->r14;
        goto L_802D92C8;
    // 0x802D92B8: sb          $t6, 0x7($sp)
    MEM_B(0X7, ctx->r29) = ctx->r14;
L_802D92BC:
    // 0x802D92BC: b           L_802D92C8
    // 0x802D92C0: sb          $t7, 0x7($sp)
    MEM_B(0X7, ctx->r29) = ctx->r15;
        goto L_802D92C8;
    // 0x802D92C0: sb          $t7, 0x7($sp)
    MEM_B(0X7, ctx->r29) = ctx->r15;
L_802D92C4:
    // 0x802D92C4: sb          $t8, 0x7($sp)
    MEM_B(0X7, ctx->r29) = ctx->r24;
L_802D92C8:
    // 0x802D92C8: lbu         $v0, 0x7($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X7);
L_802D92CC:
    // 0x802D92CC: jr          $ra
    // 0x802D92D0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x802D92D0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void D_8029F0F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029F178: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8029F17C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8029F180: lwc1        $f6, 0x30($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X30);
    // 0x8029F184: lwc1        $f4, 0x30($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X30);
    // 0x8029F188: lwc1        $f10, 0x34($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X34);
    // 0x8029F18C: lwc1        $f8, 0x34($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X34);
    // 0x8029F190: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8029F194: lwc1        $f4, 0x38($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X38);
    // 0x8029F198: lwc1        $f18, 0x38($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X38);
    // 0x8029F19C: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8029F1A0: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    // 0x8029F1A4: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x8029F1A8: swc1        $f14, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f14.u32l;
    // 0x8029F1AC: jal         0x8022ADA8
    // 0x8029F1B0: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    static_3_8022ADA8(rdram, ctx);
        goto after_0;
    // 0x8029F1B0: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x8029F1B4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8029F1B8: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8029F1BC: lwc1        $f14, 0x20($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8029F1C0: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
    // 0x8029F1C4: mov.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.fl = ctx->f0.fl;
    // 0x8029F1C8: lwc1        $f8, 0x1C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8029F1CC: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8029F1D0: bc1f        L_8029F204
    if (!c1cs) {
        // 0x8029F1D4: nop
    
            goto L_8029F204;
    }
    // 0x8029F1D4: nop

    // 0x8029F1D8: c.le.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl <= ctx->f8.fl;
    // 0x8029F1DC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8029F1E0: bc1f        L_8029F1F8
    if (!c1cs) {
        // 0x8029F1E4: nop
    
            goto L_8029F1F8;
    }
    // 0x8029F1E4: nop

    // 0x8029F1E8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8029F1EC: lwc1        $f2, 0x0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8029F1F0: b           L_8029F234
    // 0x8029F1F4: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
        goto L_8029F234;
    // 0x8029F1F4: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_8029F1F8:
    // 0x8029F1F8: lwc1        $f2, 0x0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8029F1FC: b           L_8029F234
    // 0x8029F200: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
        goto L_8029F234;
    // 0x8029F200: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_8029F204:
    // 0x8029F204: jal         0x802D05CC
    // 0x8029F208: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    static_3_802D05CC(rdram, ctx);
        goto after_1;
    // 0x8029F208: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    after_1:
    // 0x8029F20C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8029F210: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8029F214: lwc1        $f18, 0x1C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8029F218: lwc1        $f16, 0x18($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8029F21C: div.s       $f2, $f10, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x8029F220: mul.s       $f12, $f18, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x8029F224: nop

    // 0x8029F228: mul.s       $f14, $f16, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x8029F22C: jal         0x8022AE1C
    // 0x8029F230: nop

    static_3_8022AE1C(rdram, ctx);
        goto after_2;
    // 0x8029F230: nop

    after_2:
L_8029F234:
    // 0x8029F234: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8029F238: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8029F23C: jr          $ra
    // 0x8029F240: nop

    return;
    // 0x8029F240: nop

;}
RECOMP_FUNC void D_80216478(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80216478: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x8021647C: lwc1        $f6, 0xC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC);
    // 0x80216480: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80216484: lwc1        $f8, 0x10($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X10);
    // 0x80216488: lwc1        $f10, 0x14($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8021648C: add.s       $f18, $f4, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80216490: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80216494: lwc1        $f4, 0x8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X8);
    // 0x80216498: sub.s       $f0, $f12, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f8.fl;
    // 0x8021649C: mul.s       $f8, $f18, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x802164A0: lwc1        $f6, 0x18($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X18);
    // 0x802164A4: sub.s       $f2, $f14, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f14.fl - ctx->f10.fl;
    // 0x802164A8: mul.s       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x802164AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802164B0: sub.s       $f16, $f4, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x802164B4: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x802164B8: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x802164BC: mul.s       $f10, $f16, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x802164C0: add.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x802164C4: c.le.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl <= ctx->f8.fl;
    // 0x802164C8: nop

    // 0x802164CC: bc1f        L_802164DC
    if (!c1cs) {
        // 0x802164D0: nop
    
            goto L_802164DC;
    }
    // 0x802164D0: nop

    // 0x802164D4: jr          $ra
    // 0x802164D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x802164D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802164DC:
    // 0x802164DC: jr          $ra
    // 0x802164E0: nop

    return;
    // 0x802164E0: nop

;}
RECOMP_FUNC void D_80233170(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80233170: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80233174: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80233178: jal         0x80220C44
    // 0x8023317C: nop

    static_3_80220C44(rdram, ctx);
        goto after_0;
    // 0x8023317C: nop

    after_0:
    // 0x80233180: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80233184: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80233188: jr          $ra
    // 0x8023318C: nop

    return;
    // 0x8023318C: nop

;}
RECOMP_FUNC void D_80237F10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80237F10: jr          $ra
    // 0x80237F14: lw          $v0, 0x2C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2C);
    return;
    // 0x80237F14: lw          $v0, 0x2C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2C);
;}
RECOMP_FUNC void D_802B2618(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B2698: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x802B269C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802B26A0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802B26A4: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x802B26A8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802B26AC: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x802B26B0: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x802B26B4: jal         0x80318510
    // 0x802B26B8: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    static_3_80318510(rdram, ctx);
        goto after_0;
    // 0x802B26B8: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_0:
    // 0x802B26BC: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x802B26C0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802B26C4: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    // 0x802B26C8: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x802B26CC: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x802B26D0: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x802B26D4: bc1fl       L_802B28AC
    if (!c1cs) {
        // 0x802B26D8: mtc1        $zero, $f10
        ctx->f10.u32l = 0;
            goto L_802B28AC;
    }
    goto skip_0;
    // 0x802B26D8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    skip_0:
    // 0x802B26DC: lwc1        $f12, 0x0($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X0);
    // 0x802B26E0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802B26E4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B26E8: c.eq.s      $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f6.fl == ctx->f12.fl;
    // 0x802B26EC: nop

    // 0x802B26F0: bc1tl       L_802B289C
    if (c1cs) {
        // 0x802B26F4: lwc1        $f8, 0x44($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
            goto L_802B289C;
    }
    goto skip_1;
    // 0x802B26F4: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    skip_1:
    // 0x802B26F8: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B26FC: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x802B2700: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802B2704: sub.s       $f8, $f12, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x802B2708: lwc1        $f10, 0x50($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X50);
    // 0x802B270C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802B2710: sub.s       $f18, $f0, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x802B2714: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B2718: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802B271C: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x802B2720: c.lt.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl < ctx->f16.fl;
    // 0x802B2724: div.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x802B2728: bc1fl       L_802B2738
    if (!c1cs) {
        // 0x802B272C: c.lt.s      $f14, $f6
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f14.fl < ctx->f6.fl;
            goto L_802B2738;
    }
    goto skip_2;
    // 0x802B272C: c.lt.s      $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f14.fl < ctx->f6.fl;
    skip_2:
    // 0x802B2730: mov.s       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = ctx->f16.fl;
    // 0x802B2734: c.lt.s      $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f14.fl < ctx->f6.fl;
L_802B2738:
    // 0x802B2738: div.s       $f16, $f18, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = DIV_S(ctx->f18.fl, ctx->f14.fl);
    // 0x802B273C: bc1fl       L_802B274C
    if (!c1cs) {
        // 0x802B2740: lui         $at, 0x4000
        ctx->r1 = S32(0X4000 << 16);
            goto L_802B274C;
    }
    goto skip_3;
    // 0x802B2740: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    skip_3:
    // 0x802B2744: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B2748: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
L_802B274C:
    // 0x802B274C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802B2750: nop

    // 0x802B2754: c.lt.s      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.fl < ctx->f8.fl;
    // 0x802B2758: nop

    // 0x802B275C: bc1fl       L_802B289C
    if (!c1cs) {
        // 0x802B2760: lwc1        $f8, 0x44($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
            goto L_802B289C;
    }
    goto skip_4;
    // 0x802B2760: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    skip_4:
    // 0x802B2764: jal         0x80317EC0
    // 0x802B2768: swc1        $f16, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f16.u32l;
    static_3_80317EC0(rdram, ctx);
        goto after_1;
    // 0x802B2768: swc1        $f16, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f16.u32l;
    after_1:
    // 0x802B276C: lwc1        $f12, 0xB0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XB0);
    // 0x802B2770: jal         0x802CF4D0
    // 0x802B2774: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    static_3_802CF4D0(rdram, ctx);
        goto after_2;
    // 0x802B2774: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    after_2:
    // 0x802B2778: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802B277C: lwc1        $f16, 0x38($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X38);
    // 0x802B2780: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x802B2784: c.le.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl <= ctx->f0.fl;
    // 0x802B2788: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802B278C: bc1fl       L_802B27B4
    if (!c1cs) {
        // 0x802B2790: mtc1        $at, $f12
        ctx->f12.u32l = ctx->r1;
            goto L_802B27B4;
    }
    goto skip_5;
    // 0x802B2790: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    skip_5:
    // 0x802B2794: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x802B2798: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802B279C: lwc1        $f4, 0x9C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X9C);
    // 0x802B27A0: div.s       $f2, $f12, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = DIV_S(ctx->f12.fl, ctx->f16.fl);
    // 0x802B27A4: add.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f2.fl;
    // 0x802B27A8: b           L_802B27C4
    // 0x802B27AC: swc1        $f6, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->f6.u32l;
        goto L_802B27C4;
    // 0x802B27AC: swc1        $f6, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->f6.u32l;
    // 0x802B27B0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
L_802B27B4:
    // 0x802B27B4: lwc1        $f8, 0x9C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X9C);
    // 0x802B27B8: div.s       $f2, $f12, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = DIV_S(ctx->f12.fl, ctx->f16.fl);
    // 0x802B27BC: sub.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f2.fl;
    // 0x802B27C0: swc1        $f10, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->f10.u32l;
L_802B27C4:
    // 0x802B27C4: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x802B27C8: jal         0x8031809C
    // 0x802B27CC: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    static_3_8031809C(rdram, ctx);
        goto after_3;
    // 0x802B27CC: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    after_3:
    // 0x802B27D0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802B27D4: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x802B27D8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802B27DC: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x802B27E0: lwc1        $f2, 0x24($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802B27E4: bc1fl       L_802B2800
    if (!c1cs) {
        // 0x802B27E8: lwc1        $f10, 0xA0($s0)
        ctx->f10.u32l = MEM_W(ctx->r16, 0XA0);
            goto L_802B2800;
    }
    goto skip_6;
    // 0x802B27E8: lwc1        $f10, 0xA0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XA0);
    skip_6:
    // 0x802B27EC: lwc1        $f6, 0xA0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x802B27F0: add.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f2.fl;
    // 0x802B27F4: b           L_802B2808
    // 0x802B27F8: swc1        $f8, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f8.u32l;
        goto L_802B2808;
    // 0x802B27F8: swc1        $f8, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f8.u32l;
    // 0x802B27FC: lwc1        $f10, 0xA0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XA0);
L_802B2800:
    // 0x802B2800: sub.s       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f2.fl;
    // 0x802B2804: swc1        $f4, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f4.u32l;
L_802B2808:
    // 0x802B2808: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x802B280C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802B2810: bne         $v0, $at, L_802B2844
    if (ctx->r2 != ctx->r1) {
        // 0x802B2814: lui         $at, 0x0
        ctx->r1 = S32(0X0 << 16);
            goto L_802B2844;
    }
    // 0x802B2814: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B2818: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B281C: lw          $t7, 0x34($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X34);
    // 0x802B2820: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802B2824: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802B2828: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x802B282C: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x802B2830: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802B2834: mul.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x802B2838: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x802B283C: b           L_802B2878
    // 0x802B2840: swc1        $f4, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f4.u32l;
        goto L_802B2878;
    // 0x802B2840: swc1        $f4, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f4.u32l;
L_802B2844:
    // 0x802B2844: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802B2848: bne         $v0, $at, L_802B2878
    if (ctx->r2 != ctx->r1) {
        // 0x802B284C: lui         $at, 0x0
        ctx->r1 = S32(0X0 << 16);
            goto L_802B2878;
    }
    // 0x802B284C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B2850: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B2854: lw          $t8, 0x34($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X34);
    // 0x802B2858: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802B285C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802B2860: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x802B2864: mul.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x802B2868: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802B286C: mul.s       $f10, $f6, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x802B2870: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x802B2874: swc1        $f4, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f4.u32l;
L_802B2878:
    // 0x802B2878: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B287C: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B2880: lwc1        $f6, 0x38($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X38);
    // 0x802B2884: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B2888: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B288C: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x802B2890: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x802B2894: swc1        $f6, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f6.u32l;
    // 0x802B2898: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
L_802B289C:
    // 0x802B289C: lw          $t9, 0x58($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X58);
    // 0x802B28A0: b           L_802B28B4
    // 0x802B28A4: swc1        $f8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f8.u32l;
        goto L_802B28B4;
    // 0x802B28A4: swc1        $f8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f8.u32l;
    // 0x802B28A8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
L_802B28AC:
    // 0x802B28AC: nop

    // 0x802B28B0: swc1        $f10, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f10.u32l;
L_802B28B4:
    // 0x802B28B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802B28B8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802B28BC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x802B28C0: jr          $ra
    // 0x802B28C4: nop

    return;
    // 0x802B28C4: nop

;}
RECOMP_FUNC void D_80283248(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802832C8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802832CC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802832D0: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x802832D4: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x802832D8: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x802832DC: lw          $s0, 0x1280($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X1280);
    // 0x802832E0: sh          $zero, 0x1590($a0)
    MEM_H(0X1590, ctx->r4) = 0;
    // 0x802832E4: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x802832E8: lh          $t6, 0x50($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X50);
    // 0x802832EC: lw          $t9, 0x54($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X54);
    // 0x802832F0: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x802832F4: addu        $a0, $t6, $a0
    ctx->r4 = ADD32(ctx->r14, ctx->r4);
    // 0x802832F8: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x802832FC: jalr        $t9
    // 0x80283300: addiu       $a0, $a0, 0x11D0
    ctx->r4 = ADD32(ctx->r4, 0X11D0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80283300: addiu       $a0, $a0, 0x11D0
    ctx->r4 = ADD32(ctx->r4, 0X11D0);
    after_0:
    // 0x80283304: lw          $s0, 0x1370($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X1370);
    // 0x80283308: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8028330C: lh          $t7, 0x50($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X50);
    // 0x80283310: lw          $t9, 0x54($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X54);
    // 0x80283314: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    // 0x80283318: jalr        $t9
    // 0x8028331C: addiu       $a0, $a0, 0x12C0
    ctx->r4 = ADD32(ctx->r4, 0X12C0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x8028331C: addiu       $a0, $a0, 0x12C0
    ctx->r4 = ADD32(ctx->r4, 0X12C0);
    after_1:
    // 0x80283320: lw          $s0, 0x1460($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X1460);
    // 0x80283324: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80283328: lh          $t8, 0x50($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X50);
    // 0x8028332C: lw          $t9, 0x54($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X54);
    // 0x80283330: addu        $a0, $t8, $s1
    ctx->r4 = ADD32(ctx->r24, ctx->r17);
    // 0x80283334: jalr        $t9
    // 0x80283338: addiu       $a0, $a0, 0x13B0
    ctx->r4 = ADD32(ctx->r4, 0X13B0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x80283338: addiu       $a0, $a0, 0x13B0
    ctx->r4 = ADD32(ctx->r4, 0X13B0);
    after_2:
    // 0x8028333C: lw          $s0, 0xBF0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0XBF0);
    // 0x80283340: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80283344: lh          $t0, 0x50($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X50);
    // 0x80283348: lw          $t9, 0x54($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X54);
    // 0x8028334C: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    // 0x80283350: jalr        $t9
    // 0x80283354: addiu       $a0, $a0, 0xB40
    ctx->r4 = ADD32(ctx->r4, 0XB40);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x80283354: addiu       $a0, $a0, 0xB40
    ctx->r4 = ADD32(ctx->r4, 0XB40);
    after_3:
    // 0x80283358: lw          $s0, 0x1550($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X1550);
    // 0x8028335C: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80283360: lh          $t1, 0x50($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X50);
    // 0x80283364: lw          $t9, 0x54($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X54);
    // 0x80283368: addu        $a0, $t1, $s1
    ctx->r4 = ADD32(ctx->r9, ctx->r17);
    // 0x8028336C: jalr        $t9
    // 0x80283370: addiu       $a0, $a0, 0x14A0
    ctx->r4 = ADD32(ctx->r4, 0X14A0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x80283370: addiu       $a0, $a0, 0x14A0
    ctx->r4 = ADD32(ctx->r4, 0X14A0);
    after_4:
    // 0x80283374: lw          $s0, 0xB0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0XB0);
    // 0x80283378: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8028337C: lw          $t9, 0x54($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X54);
    // 0x80283380: lh          $t2, 0x50($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X50);
    // 0x80283384: jalr        $t9
    // 0x80283388: addu        $a0, $t2, $s1
    ctx->r4 = ADD32(ctx->r10, ctx->r17);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x80283388: addu        $a0, $t2, $s1
    ctx->r4 = ADD32(ctx->r10, ctx->r17);
    after_5:
    // 0x8028338C: lw          $s0, 0x650($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X650);
    // 0x80283390: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80283394: lh          $t3, 0x50($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X50);
    // 0x80283398: lw          $t9, 0x54($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X54);
    // 0x8028339C: addu        $a0, $t3, $s1
    ctx->r4 = ADD32(ctx->r11, ctx->r17);
    // 0x802833A0: jalr        $t9
    // 0x802833A4: addiu       $a0, $a0, 0x5A0
    ctx->r4 = ADD32(ctx->r4, 0X5A0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x802833A4: addiu       $a0, $a0, 0x5A0
    ctx->r4 = ADD32(ctx->r4, 0X5A0);
    after_6:
    // 0x802833A8: lw          $s0, 0xCE0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0XCE0);
    // 0x802833AC: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x802833B0: lh          $t4, 0x50($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X50);
    // 0x802833B4: lw          $t9, 0x54($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X54);
    // 0x802833B8: addu        $a0, $t4, $s1
    ctx->r4 = ADD32(ctx->r12, ctx->r17);
    // 0x802833BC: jalr        $t9
    // 0x802833C0: addiu       $a0, $a0, 0xC30
    ctx->r4 = ADD32(ctx->r4, 0XC30);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x802833C0: addiu       $a0, $a0, 0xC30
    ctx->r4 = ADD32(ctx->r4, 0XC30);
    after_7:
    // 0x802833C4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802833C8: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x802833CC: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x802833D0: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x802833D4: jr          $ra
    // 0x802833D8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x802833D8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void D_8023DE70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023DE70: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8023DE74: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8023DE78: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8023DE7C: jal         0x80241760
    // 0x8023DE80: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    static_3_80241760(rdram, ctx);
        goto after_0;
    // 0x8023DE80: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x8023DE84: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x8023DE88: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x8023DE8C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8023DE90: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x8023DE94: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8023DE98: sw          $t6, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r14;
    // 0x8023DE9C: lw          $t9, 0x0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X0);
    // 0x8023DEA0: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x8023DEA4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8023DEA8: sh          $t8, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r24;
    // 0x8023DEAC: lw          $t0, 0x0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X0);
    // 0x8023DEB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8023DEB4: lw          $t1, 0x8($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X8);
    // 0x8023DEB8: lw          $t2, 0x4($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X4);
    // 0x8023DEBC: jal         0x80241780
    // 0x8023DEC0: sw          $t2, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r10;
    static_3_80241780(rdram, ctx);
        goto after_1;
    // 0x8023DEC0: sw          $t2, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r10;
    after_1:
    // 0x8023DEC4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8023DEC8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023DECC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8023DED0: jr          $ra
    // 0x8023DED4: nop

    return;
    // 0x8023DED4: nop

;}
RECOMP_FUNC void D_802D2698(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D2718: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x802D271C: addiu       $v0, $t6, 0x1
    ctx->r2 = ADD32(ctx->r14, 0X1);
    // 0x802D2720: jr          $ra
    // 0x802D2724: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    return;
    // 0x802D2724: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void D_80220798(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80220798: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8022079C: addiu       $t6, $sp, 0x50
    ctx->r14 = ADD32(ctx->r29, 0X50);
    // 0x802207A0: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x802207A4: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x802207A8: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x802207AC: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x802207B0: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x802207B4: addiu       $t8, $t6, 0x3C
    ctx->r24 = ADD32(ctx->r14, 0X3C);
    // 0x802207B8: or          $t9, $sp, $zero
    ctx->r25 = ctx->r29 | 0;
L_802207BC:
    // 0x802207BC: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x802207C0: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x802207C4: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x802207C8: sw          $at, -0xC($t9)
    MEM_W(-0XC, ctx->r25) = ctx->r1;
    // 0x802207CC: lw          $at, -0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X8);
    // 0x802207D0: sw          $at, -0x8($t9)
    MEM_W(-0X8, ctx->r25) = ctx->r1;
    // 0x802207D4: lw          $at, -0x4($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X4);
    // 0x802207D8: bne         $t6, $t8, L_802207BC
    if (ctx->r14 != ctx->r24) {
        // 0x802207DC: sw          $at, -0x4($t9)
        MEM_W(-0X4, ctx->r25) = ctx->r1;
            goto L_802207BC;
    }
    // 0x802207DC: sw          $at, -0x4($t9)
    MEM_W(-0X4, ctx->r25) = ctx->r1;
    // 0x802207E0: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x802207E4: sw          $at, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r1;
    // 0x802207E8: lw          $a3, 0xC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC);
    // 0x802207EC: lw          $a2, 0x8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8);
    // 0x802207F0: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x802207F4: jal         0x80222D4C
    // 0x802207F8: lw          $a0, 0x0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X0);
    static_3_80222D4C(rdram, ctx);
        goto after_0;
    // 0x802207F8: lw          $a0, 0x0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X0);
    after_0:
    // 0x802207FC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80220800: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80220804: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80220808: lui         $t1, 0x102
    ctx->r9 = S32(0X102 << 16);
    // 0x8022080C: ori         $t1, $t1, 0x40
    ctx->r9 = ctx->r9 | 0X40;
    // 0x80220810: addiu       $t0, $v0, 0x8
    ctx->r8 = ADD32(ctx->r2, 0X8);
    // 0x80220814: sw          $t0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r8;
    // 0x80220818: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x8022081C: jal         0x80222E24
    // 0x80220820: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    static_3_80222E24(rdram, ctx);
        goto after_1;
    // 0x80220820: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    after_1:
    // 0x80220824: jal         0x802375F0
    // 0x80220828: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    static_3_802375F0(rdram, ctx);
        goto after_2;
    // 0x80220828: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x8022082C: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
    // 0x80220830: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x80220834: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x80220838: sw          $v0, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r2;
    // 0x8022083C: lhu         $t3, 0x0($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0X0);
    // 0x80220840: addiu       $t5, $t5, 0x0
    ctx->r13 = ADD32(ctx->r13, 0X0);
    // 0x80220844: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80220848: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8022084C: addu        $v1, $t4, $t5
    ctx->r3 = ADD32(ctx->r12, ctx->r13);
    // 0x80220850: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x80220854: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x80220858: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8022085C: jr          $ra
    // 0x80220860: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    return;
    // 0x80220860: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
;}
RECOMP_FUNC void D_8027E688(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027E700: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027E704: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027E708: lbu         $t6, 0x3344($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X3344);
    // 0x8027E70C: beql        $t6, $zero, L_8027E72C
    if (ctx->r14 == 0) {
        // 0x8027E710: lh          $v0, 0x362A($a0)
        ctx->r2 = MEM_H(ctx->r4, 0X362A);
            goto L_8027E72C;
    }
    goto skip_0;
    // 0x8027E710: lh          $v0, 0x362A($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X362A);
    skip_0:
    // 0x8027E714: jal         0x8030A4B8
    // 0x8027E718: nop

    static_3_8030A4B8(rdram, ctx);
        goto after_0;
    // 0x8027E718: nop

    after_0:
    // 0x8027E71C: sll         $t7, $v0, 16
    ctx->r15 = S32(ctx->r2 << 16);
    // 0x8027E720: b           L_8027E72C
    // 0x8027E724: sra         $v0, $t7, 16
    ctx->r2 = S32(SIGNED(ctx->r15) >> 16);
        goto L_8027E72C;
    // 0x8027E724: sra         $v0, $t7, 16
    ctx->r2 = S32(SIGNED(ctx->r15) >> 16);
    // 0x8027E728: lh          $v0, 0x362A($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X362A);
L_8027E72C:
    // 0x8027E72C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027E730: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027E734: jr          $ra
    // 0x8027E738: nop

    return;
    // 0x8027E738: nop

;}
RECOMP_FUNC void D_80295D50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80295DD0: addiu       $v0, $a1, 0xF
    ctx->r2 = ADD32(ctx->r5, 0XF);
    // 0x80295DD4: addiu       $at, $zero, -0x10
    ctx->r1 = ADD32(0, -0X10);
    // 0x80295DD8: and         $t6, $v0, $at
    ctx->r14 = ctx->r2 & ctx->r1;
    // 0x80295DDC: subu        $t7, $t6, $a1
    ctx->r15 = SUB32(ctx->r14, ctx->r5);
    // 0x80295DE0: subu        $a2, $a2, $t7
    ctx->r6 = SUB32(ctx->r6, ctx->r15);
    // 0x80295DE4: and         $t8, $a2, $at
    ctx->r24 = ctx->r6 & ctx->r1;
    // 0x80295DE8: addiu       $t9, $t8, -0x10
    ctx->r25 = ADD32(ctx->r24, -0X10);
    // 0x80295DEC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80295DF0: addiu       $t1, $zero, 0x7373
    ctx->r9 = ADD32(0, 0X7373);
    // 0x80295DF4: sw          $zero, 0x8($t6)
    MEM_W(0X8, ctx->r14) = 0;
    // 0x80295DF8: sw          $zero, 0xC($t6)
    MEM_W(0XC, ctx->r14) = 0;
    // 0x80295DFC: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    // 0x80295E00: sh          $t0, 0x2($t6)
    MEM_H(0X2, ctx->r14) = ctx->r8;
    // 0x80295E04: sh          $t1, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r9;
    // 0x80295E08: jr          $ra
    // 0x80295E0C: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    return;
    // 0x80295E0C: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void D_802E367C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E36FC: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x802E3700: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x802E3704: or          $s7, $a0, $zero
    ctx->r23 = ctx->r4 | 0;
    // 0x802E3708: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x802E370C: sw          $a1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r5;
    // 0x802E3710: sll         $a2, $a1, 16
    ctx->r6 = S32(ctx->r5 << 16);
    // 0x802E3714: sra         $a0, $a2, 16
    ctx->r4 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802E3718: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x802E371C: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x802E3720: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x802E3724: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x802E3728: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x802E372C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x802E3730: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x802E3734: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802E3738: jal         0x80234880
    // 0x802E373C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_80234880(rdram, ctx);
        goto after_0;
    // 0x802E373C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x802E3740: jal         0x80223840
    // 0x802E3744: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80223840(rdram, ctx);
        goto after_1;
    // 0x802E3744: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x802E3748: lui         $s0, 0x4741
    ctx->r16 = S32(0X4741 << 16);
    // 0x802E374C: ori         $s0, $s0, 0x5445
    ctx->r16 = ctx->r16 | 0X5445;
    // 0x802E3750: sw          $v0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r2;
    // 0x802E3754: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x802E3758: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802E375C: addiu       $a1, $sp, 0x7C
    ctx->r5 = ADD32(ctx->r29, 0X7C);
    // 0x802E3760: addiu       $a2, $sp, 0x74
    ctx->r6 = ADD32(ctx->r29, 0X74);
    // 0x802E3764: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802E3768: jal         0x80223B30
    // 0x802E376C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    static_3_80223B30(rdram, ctx);
        goto after_2;
    // 0x802E376C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_2:
    // 0x802E3770: bne         $v0, $s0, L_802E38D4
    if (ctx->r2 != ctx->r16) {
        // 0x802E3774: lw          $a0, 0x74($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X74);
            goto L_802E38D4;
    }
    // 0x802E3774: lw          $a0, 0x74($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X74);
    // 0x802E3778: jal         0x8022B5E0
    // 0x802E377C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_8022B5E0(rdram, ctx);
        goto after_3;
    // 0x802E377C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x802E3780: lw          $a0, 0x74($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X74);
    // 0x802E3784: sll         $t8, $v1, 16
    ctx->r24 = S32(ctx->r3 << 16);
    // 0x802E3788: sll         $s6, $v1, 16
    ctx->r22 = S32(ctx->r3 << 16);
    // 0x802E378C: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x802E3790: sra         $t7, $s6, 16
    ctx->r15 = S32(SIGNED(ctx->r22) >> 16);
    // 0x802E3794: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x802E3798: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x802E379C: or          $s6, $t7, $zero
    ctx->r22 = ctx->r15 | 0;
    // 0x802E37A0: blez        $t0, L_802E38D4
    if (SIGNED(ctx->r8) <= 0) {
        // 0x802E37A4: sw          $a0, 0x74($sp)
        MEM_W(0X74, ctx->r29) = ctx->r4;
            goto L_802E38D4;
    }
    // 0x802E37A4: sw          $a0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r4;
    // 0x802E37A8: or          $s4, $s7, $zero
    ctx->r20 = ctx->r23 | 0;
    // 0x802E37AC: sw          $a0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r4;
    // 0x802E37B0: addiu       $fp, $zero, 0x1
    ctx->r30 = ADD32(0, 0X1);
    // 0x802E37B4: addiu       $s3, $zero, 0x6
    ctx->r19 = ADD32(0, 0X6);
    // 0x802E37B8: addiu       $s2, $sp, 0x6C
    ctx->r18 = ADD32(ctx->r29, 0X6C);
    // 0x802E37BC: lw          $a0, 0x74($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X74);
L_802E37C0:
    // 0x802E37C0: jal         0x8022B5E0
    // 0x802E37C4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_8022B5E0(rdram, ctx);
        goto after_4;
    // 0x802E37C4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_4:
    // 0x802E37C8: lw          $t2, 0x74($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X74);
    // 0x802E37CC: sll         $a2, $v1, 16
    ctx->r6 = S32(ctx->r3 << 16);
    // 0x802E37D0: sll         $a0, $v1, 16
    ctx->r4 = S32(ctx->r3 << 16);
    // 0x802E37D4: addiu       $t3, $t2, 0x2
    ctx->r11 = ADD32(ctx->r10, 0X2);
    // 0x802E37D8: sw          $t3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r11;
    // 0x802E37DC: lw          $t5, 0x550($s4)
    ctx->r13 = MEM_W(ctx->r20, 0X550);
    // 0x802E37E0: sra         $t1, $a2, 16
    ctx->r9 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802E37E4: sra         $t4, $a0, 16
    ctx->r12 = S32(SIGNED(ctx->r4) >> 16);
    // 0x802E37E8: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    // 0x802E37EC: beq         $t4, $zero, L_802E3810
    if (ctx->r12 == 0) {
        // 0x802E37F0: sb          $t4, 0x18($t5)
        MEM_B(0X18, ctx->r13) = ctx->r12;
            goto L_802E3810;
    }
    // 0x802E37F0: sb          $t4, 0x18($t5)
    MEM_B(0X18, ctx->r13) = ctx->r12;
    // 0x802E37F4: beq         $t4, $fp, L_802E385C
    if (ctx->r12 == ctx->r30) {
        // 0x802E37F8: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_802E385C;
    }
    // 0x802E37F8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x802E37FC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802E3800: beq         $t4, $at, L_802E38A4
    if (ctx->r12 == ctx->r1) {
        // 0x802E3804: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_802E38A4;
    }
    // 0x802E3804: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E3808: b           L_802E38B4
    // 0x802E380C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
        goto L_802E38B4;
    // 0x802E380C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
L_802E3810:
    // 0x802E3810: addiu       $v1, $s6, -0x1
    ctx->r3 = ADD32(ctx->r22, -0X1);
    // 0x802E3814: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x802E3818: lw          $s1, 0x550($s4)
    ctx->r17 = MEM_W(ctx->r20, 0X550);
    // 0x802E381C: addu        $s5, $t6, $s7
    ctx->r21 = ADD32(ctx->r14, ctx->r23);
    // 0x802E3820: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_802E3824:
    // 0x802E3824: lw          $a0, 0x74($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X74);
    // 0x802E3828: jal         0x8022B5E0
    // 0x802E382C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    static_3_8022B5E0(rdram, ctx);
        goto after_5;
    // 0x802E382C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_5:
    // 0x802E3830: sw          $v1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r3;
    // 0x802E3834: lwc1        $f4, 0x0($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X0);
    // 0x802E3838: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x802E383C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x802E3840: swc1        $f4, -0x4($s1)
    MEM_W(-0X4, ctx->r17) = ctx->f4.u32l;
    // 0x802E3844: lw          $t8, 0x74($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X74);
    // 0x802E3848: addiu       $t9, $t8, 0x4
    ctx->r25 = ADD32(ctx->r24, 0X4);
    // 0x802E384C: bne         $s0, $s3, L_802E3824
    if (ctx->r16 != ctx->r19) {
        // 0x802E3850: sw          $t9, 0x74($sp)
        MEM_W(0X74, ctx->r29) = ctx->r25;
            goto L_802E3824;
    }
    // 0x802E3850: sw          $t9, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r25;
    // 0x802E3854: b           L_802E38C8
    // 0x802E3858: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
        goto L_802E38C8;
    // 0x802E3858: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
L_802E385C:
    // 0x802E385C: addiu       $v1, $s6, -0x1
    ctx->r3 = ADD32(ctx->r22, -0X1);
    // 0x802E3860: sll         $t0, $v1, 2
    ctx->r8 = S32(ctx->r3 << 2);
    // 0x802E3864: lw          $s1, 0x550($s4)
    ctx->r17 = MEM_W(ctx->r20, 0X550);
    // 0x802E3868: addu        $s5, $t0, $s7
    ctx->r21 = ADD32(ctx->r8, ctx->r23);
L_802E386C:
    // 0x802E386C: lw          $a0, 0x74($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X74);
    // 0x802E3870: jal         0x8022B5E0
    // 0x802E3874: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    static_3_8022B5E0(rdram, ctx);
        goto after_6;
    // 0x802E3874: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_6:
    // 0x802E3878: sw          $v1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r3;
    // 0x802E387C: lwc1        $f6, 0x0($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X0);
    // 0x802E3880: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x802E3884: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x802E3888: swc1        $f6, -0x4($s1)
    MEM_W(-0X4, ctx->r17) = ctx->f6.u32l;
    // 0x802E388C: lw          $t2, 0x74($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X74);
    // 0x802E3890: addiu       $t3, $t2, 0x4
    ctx->r11 = ADD32(ctx->r10, 0X4);
    // 0x802E3894: bne         $s0, $s3, L_802E386C
    if (ctx->r16 != ctx->r19) {
        // 0x802E3898: sw          $t3, 0x74($sp)
        MEM_W(0X74, ctx->r29) = ctx->r11;
            goto L_802E386C;
    }
    // 0x802E3898: sw          $t3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r11;
    // 0x802E389C: b           L_802E38C8
    // 0x802E38A0: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
        goto L_802E38C8;
    // 0x802E38A0: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
L_802E38A4:
    // 0x802E38A4: jal         0x802238F0
    // 0x802E38A8: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    static_3_802238F0(rdram, ctx);
        goto after_7;
    // 0x802E38A8: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    after_7:
    // 0x802E38AC: b           L_802E38E0
    // 0x802E38B0: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
        goto L_802E38E0;
    // 0x802E38B0: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_802E38B4:
    // 0x802E38B4: jal         0x80231A24
    // 0x802E38B8: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    static_3_80231A24(rdram, ctx);
        goto after_8;
    // 0x802E38B8: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_8:
    // 0x802E38BC: b           L_802E38E0
    // 0x802E38C0: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
        goto L_802E38E0;
    // 0x802E38C0: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x802E38C4: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
L_802E38C8:
    // 0x802E38C8: sltu        $at, $s4, $s5
    ctx->r1 = ctx->r20 < ctx->r21 ? 1 : 0;
    // 0x802E38CC: bnel        $at, $zero, L_802E37C0
    if (ctx->r1 != 0) {
        // 0x802E38D0: lw          $a0, 0x74($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X74);
            goto L_802E37C0;
    }
    goto skip_0;
    // 0x802E38D0: lw          $a0, 0x74($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X74);
    skip_0:
L_802E38D4:
    // 0x802E38D4: jal         0x802238F0
    // 0x802E38D8: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    static_3_802238F0(rdram, ctx);
        goto after_9;
    // 0x802E38D8: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    after_9:
    // 0x802E38DC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_802E38E0:
    // 0x802E38E0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802E38E4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x802E38E8: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x802E38EC: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x802E38F0: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x802E38F4: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x802E38F8: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x802E38FC: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x802E3900: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x802E3904: jr          $ra
    // 0x802E3908: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    return;
    // 0x802E3908: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
