#include <ultra64.h>
#include "constants.h"
#include "game/camdraw.h"
#include "game/data/data_000000.h"
#include "game/data/data_0083d0.h"
#include "game/data/data_00e460.h"
#include "game/data/data_0160b0.h"
#include "game/data/data_01a3a0.h"
#include "game/data/data_020df0.h"
#include "game/data/data_02da90.h"
#include "game/game_005fd0.h"
#include "game/game_095320.h"
#include "game/game_0b3350.h"
#include "game/game_0e0770.h"
#include "game/game_0e5ce0.h"
#include "game/game_0f09f0.h"
#include "game/game_102240.h"
#include "game/game_1531a0.h"
#include "game/game_167ae0.h"
#include "game/game_19aa80.h"
#include "game/training.h"
#include "game/lang.h"
#include "game/mplayer.h"
#include "game/pdoptions.h"
#include "gvars/gvars.h"
#include "lib/lib_09660.h"
#include "lib/lib_0d520.h"
#include "lib/lib_13130.h"
#include "types.h"

const char var7f1adfa0[] = "brcol";
const char var7f1adfa8[] = "%d: ";
const char var7f1adfb0[] = "%s";

s32 var80071190 = 0x00000000;
s32 var80071194 = 0x00000000;
s32 var80071198 = 0x00000000;
s32 var8007119c = 0x00000000;
s32 var800711a0 = 0;
s32 var800711a4 = 0;
u32 var800711a8 = 0x0000000b;

u8 g_KeyboardKeys[5][10] = {
	{ '0','1','2','3','4','5','6','7','8','9' },
	{ 'A','B','C','D','E','F','G','H','I','J' },
	{ 'K','L','M','N','O','P','Q','R','S','T' },
	{ 'U','V','W','X','Y','Z',' ','?','!','.' },
	{ '1','2','1','2','1','2','3','1','2','3' },
};

u32 var800711e0 = 0x573a573b;
u32 var800711e4 = 0x573c573d;
u32 var800711e8 = 0x00000000;

s32 func0f0e5ce0(s32 value)
{
	if (value < var800711a4) {
		var800711a0++;

		if (var800711a0 > 320) {
			var800711a0 = 0;
		}
	}

	var800711a4 = value;

	return var800711a0;
}

GLOBAL_ASM(
glabel func0f0e5d2c
/*  f0e5d2c:	27bdffa0 */ 	addiu	$sp,$sp,-96
/*  f0e5d30:	afbf002c */ 	sw	$ra,0x2c($sp)
/*  f0e5d34:	afb50028 */ 	sw	$s5,0x28($sp)
/*  f0e5d38:	afb40024 */ 	sw	$s4,0x24($sp)
/*  f0e5d3c:	afb30020 */ 	sw	$s3,0x20($sp)
/*  f0e5d40:	afb2001c */ 	sw	$s2,0x1c($sp)
/*  f0e5d44:	afb10018 */ 	sw	$s1,0x18($sp)
/*  f0e5d48:	afb00014 */ 	sw	$s0,0x14($sp)
/*  f0e5d4c:	8cae0010 */ 	lw	$t6,0x10($a1)
/*  f0e5d50:	00a09825 */ 	or	$s3,$a1,$zero
/*  f0e5d54:	00803825 */ 	or	$a3,$a0,$zero
/*  f0e5d58:	15c00003 */ 	bnez	$t6,.L0f0e5d68
/*  f0e5d5c:	27b50050 */ 	addiu	$s5,$sp,0x50
/*  f0e5d60:	1000005c */ 	b	.L0f0e5ed4
/*  f0e5d64:	00001025 */ 	or	$v0,$zero,$zero
.L0f0e5d68:
/*  f0e5d68:	afa00050 */ 	sw	$zero,0x50($sp)
/*  f0e5d6c:	afa0005c */ 	sw	$zero,0x5c($sp)
/*  f0e5d70:	afa70060 */ 	sw	$a3,0x60($sp)
/*  f0e5d74:	8e790010 */ 	lw	$t9,0x10($s3)
/*  f0e5d78:	24040002 */ 	addiu	$a0,$zero,0x2
/*  f0e5d7c:	02602825 */ 	or	$a1,$s3,$zero
/*  f0e5d80:	0320f809 */ 	jalr	$t9
/*  f0e5d84:	02a03025 */ 	or	$a2,$s5,$zero
/*  f0e5d88:	8fa60050 */ 	lw	$a2,0x50($sp)
/*  f0e5d8c:	8fa70060 */ 	lw	$a3,0x60($sp)
/*  f0e5d90:	54c00011 */ 	bnezl	$a2,.L0f0e5dd8
/*  f0e5d94:	00c0a025 */ 	or	$s4,$a2,$zero
/*  f0e5d98:	3c0f8007 */ 	lui	$t7,%hi(var800711a8)
/*  f0e5d9c:	8def11a8 */ 	lw	$t7,%lo(var800711a8)($t7)
/*  f0e5da0:	00ef001a */ 	div	$zero,$a3,$t7
/*  f0e5da4:	00008812 */ 	mflo	$s1
/*  f0e5da8:	15e00002 */ 	bnez	$t7,.L0f0e5db4
/*  f0e5dac:	00000000 */ 	nop
/*  f0e5db0:	0007000d */ 	break	0x7
.L0f0e5db4:
/*  f0e5db4:	2401ffff */ 	addiu	$at,$zero,-1
/*  f0e5db8:	15e10004 */ 	bne	$t7,$at,.L0f0e5dcc
/*  f0e5dbc:	3c018000 */ 	lui	$at,0x8000
/*  f0e5dc0:	14e10002 */ 	bne	$a3,$at,.L0f0e5dcc
/*  f0e5dc4:	00000000 */ 	nop
/*  f0e5dc8:	0006000d */ 	break	0x6
.L0f0e5dcc:
/*  f0e5dcc:	1000003d */ 	b	.L0f0e5ec4
/*  f0e5dd0:	00000000 */ 	nop
/*  f0e5dd4:	00c0a025 */ 	or	$s4,$a2,$zero
.L0f0e5dd8:
/*  f0e5dd8:	00e08025 */ 	or	$s0,$a3,$zero
/*  f0e5ddc:	00009025 */ 	or	$s2,$zero,$zero
/*  f0e5de0:	00008825 */ 	or	$s1,$zero,$zero
/*  f0e5de4:	00003025 */ 	or	$a2,$zero,$zero
/*  f0e5de8:	afa00054 */ 	sw	$zero,0x54($sp)
/*  f0e5dec:	00d4082a */ 	slt	$at,$a2,$s4
.L0f0e5df0:
/*  f0e5df0:	10200018 */ 	beqz	$at,.L0f0e5e54
/*  f0e5df4:	3c038007 */ 	lui	$v1,%hi(var800711a8)
/*  f0e5df8:	afa60050 */ 	sw	$a2,0x50($sp)
/*  f0e5dfc:	8e790010 */ 	lw	$t9,0x10($s3)
/*  f0e5e00:	02a03025 */ 	or	$a2,$s5,$zero
/*  f0e5e04:	24040005 */ 	addiu	$a0,$zero,0x5
/*  f0e5e08:	0320f809 */ 	jalr	$t9
/*  f0e5e0c:	02602825 */ 	or	$a1,$s3,$zero
/*  f0e5e10:	3c038007 */ 	lui	$v1,%hi(var800711a8)
/*  f0e5e14:	8c6311a8 */ 	lw	$v1,%lo(var800711a8)($v1)
/*  f0e5e18:	8fa40058 */ 	lw	$a0,0x58($sp)
/*  f0e5e1c:	8fa60050 */ 	lw	$a2,0x50($sp)
/*  f0e5e20:	0203001a */ 	div	$zero,$s0,$v1
/*  f0e5e24:	00001012 */ 	mflo	$v0
/*  f0e5e28:	14600002 */ 	bnez	$v1,.L0f0e5e34
/*  f0e5e2c:	00000000 */ 	nop
/*  f0e5e30:	0007000d */ 	break	0x7
.L0f0e5e34:
/*  f0e5e34:	2401ffff */ 	addiu	$at,$zero,-1
/*  f0e5e38:	14610004 */ 	bne	$v1,$at,.L0f0e5e4c
/*  f0e5e3c:	3c018000 */ 	lui	$at,0x8000
/*  f0e5e40:	16010002 */ 	bne	$s0,$at,.L0f0e5e4c
/*  f0e5e44:	00000000 */ 	nop
/*  f0e5e48:	0006000d */ 	break	0x6
.L0f0e5e4c:
/*  f0e5e4c:	1000000f */ 	b	.L0f0e5e8c
/*  f0e5e50:	00512821 */ 	addu	$a1,$v0,$s1
.L0f0e5e54:
/*  f0e5e54:	8c6311a8 */ 	lw	$v1,%lo(var800711a8)($v1)
/*  f0e5e58:	2404270f */ 	addiu	$a0,$zero,0x270f
/*  f0e5e5c:	0203001a */ 	div	$zero,$s0,$v1
/*  f0e5e60:	00001012 */ 	mflo	$v0
/*  f0e5e64:	14600002 */ 	bnez	$v1,.L0f0e5e70
/*  f0e5e68:	00000000 */ 	nop
/*  f0e5e6c:	0007000d */ 	break	0x7
.L0f0e5e70:
/*  f0e5e70:	2401ffff */ 	addiu	$at,$zero,-1
/*  f0e5e74:	14610004 */ 	bne	$v1,$at,.L0f0e5e88
/*  f0e5e78:	3c018000 */ 	lui	$at,0x8000
/*  f0e5e7c:	16010002 */ 	bne	$s0,$at,.L0f0e5e88
/*  f0e5e80:	00000000 */ 	nop
/*  f0e5e84:	0006000d */ 	break	0x6
.L0f0e5e88:
/*  f0e5e88:	00512821 */ 	addu	$a1,$v0,$s1
.L0f0e5e8c:
/*  f0e5e8c:	00a4082a */ 	slt	$at,$a1,$a0
/*  f0e5e90:	14200008 */ 	bnez	$at,.L0f0e5eb4
/*  f0e5e94:	24c60001 */ 	addiu	$a2,$a2,0x1
/*  f0e5e98:	00911023 */ 	subu	$v0,$a0,$s1
/*  f0e5e9c:	00430019 */ 	multu	$v0,$v1
/*  f0e5ea0:	02228821 */ 	addu	$s1,$s1,$v0
/*  f0e5ea4:	0000c012 */ 	mflo	$t8
/*  f0e5ea8:	02188023 */ 	subu	$s0,$s0,$t8
/*  f0e5eac:	10000003 */ 	b	.L0f0e5ebc
/*  f0e5eb0:	2610fff5 */ 	addiu	$s0,$s0,-11
.L0f0e5eb4:
/*  f0e5eb4:	00a08825 */ 	or	$s1,$a1,$zero
/*  f0e5eb8:	24120001 */ 	addiu	$s2,$zero,0x1
.L0f0e5ebc:
/*  f0e5ebc:	5240ffcc */ 	beqzl	$s2,.L0f0e5df0
/*  f0e5ec0:	00d4082a */ 	slt	$at,$a2,$s4
.L0f0e5ec4:
/*  f0e5ec4:	06230003 */ 	bgezl	$s1,.L0f0e5ed4
/*  f0e5ec8:	02201025 */ 	or	$v0,$s1,$zero
/*  f0e5ecc:	00008825 */ 	or	$s1,$zero,$zero
/*  f0e5ed0:	02201025 */ 	or	$v0,$s1,$zero
.L0f0e5ed4:
/*  f0e5ed4:	8fbf002c */ 	lw	$ra,0x2c($sp)
/*  f0e5ed8:	8fb00014 */ 	lw	$s0,0x14($sp)
/*  f0e5edc:	8fb10018 */ 	lw	$s1,0x18($sp)
/*  f0e5ee0:	8fb2001c */ 	lw	$s2,0x1c($sp)
/*  f0e5ee4:	8fb30020 */ 	lw	$s3,0x20($sp)
/*  f0e5ee8:	8fb40024 */ 	lw	$s4,0x24($sp)
/*  f0e5eec:	8fb50028 */ 	lw	$s5,0x28($sp)
/*  f0e5ef0:	03e00008 */ 	jr	$ra
/*  f0e5ef4:	27bd0060 */ 	addiu	$sp,$sp,0x60
);

GLOBAL_ASM(
glabel func0f0e5ef8
/*  f0e5ef8:	27bdffb0 */ 	addiu	$sp,$sp,-80
/*  f0e5efc:	afbf002c */ 	sw	$ra,0x2c($sp)
/*  f0e5f00:	afb50028 */ 	sw	$s5,0x28($sp)
/*  f0e5f04:	afb40024 */ 	sw	$s4,0x24($sp)
/*  f0e5f08:	afb30020 */ 	sw	$s3,0x20($sp)
/*  f0e5f0c:	afb2001c */ 	sw	$s2,0x1c($sp)
/*  f0e5f10:	afb10018 */ 	sw	$s1,0x18($sp)
/*  f0e5f14:	afb00014 */ 	sw	$s0,0x14($sp)
/*  f0e5f18:	afa40050 */ 	sw	$a0,0x50($sp)
/*  f0e5f1c:	8caf0010 */ 	lw	$t7,0x10($a1)
/*  f0e5f20:	0004a400 */ 	sll	$s4,$a0,0x10
/*  f0e5f24:	00147403 */ 	sra	$t6,$s4,0x10
/*  f0e5f28:	01c0a025 */ 	or	$s4,$t6,$zero
/*  f0e5f2c:	15e00003 */ 	bnez	$t7,.L0f0e5f3c
/*  f0e5f30:	00a09025 */ 	or	$s2,$a1,$zero
/*  f0e5f34:	10000037 */ 	b	.L0f0e6014
/*  f0e5f38:	00001025 */ 	or	$v0,$zero,$zero
.L0f0e5f3c:
/*  f0e5f3c:	06810002 */ 	bgez	$s4,.L0f0e5f48
/*  f0e5f40:	27b50040 */ 	addiu	$s5,$sp,0x40
/*  f0e5f44:	0000a025 */ 	or	$s4,$zero,$zero
.L0f0e5f48:
/*  f0e5f48:	afa00040 */ 	sw	$zero,0x40($sp)
/*  f0e5f4c:	afa0004c */ 	sw	$zero,0x4c($sp)
/*  f0e5f50:	8e590010 */ 	lw	$t9,0x10($s2)
/*  f0e5f54:	24040002 */ 	addiu	$a0,$zero,0x2
/*  f0e5f58:	02402825 */ 	or	$a1,$s2,$zero
/*  f0e5f5c:	0320f809 */ 	jalr	$t9
/*  f0e5f60:	02a03025 */ 	or	$a2,$s5,$zero
/*  f0e5f64:	8fa20040 */ 	lw	$v0,0x40($sp)
/*  f0e5f68:	00008025 */ 	or	$s0,$zero,$zero
/*  f0e5f6c:	00008825 */ 	or	$s1,$zero,$zero
/*  f0e5f70:	14400008 */ 	bnez	$v0,.L0f0e5f94
/*  f0e5f74:	00409825 */ 	or	$s3,$v0,$zero
/*  f0e5f78:	3c188007 */ 	lui	$t8,%hi(var800711a8)
/*  f0e5f7c:	8f1811a8 */ 	lw	$t8,%lo(var800711a8)($t8)
/*  f0e5f80:	02980019 */ 	multu	$s4,$t8
/*  f0e5f84:	00001012 */ 	mflo	$v0
/*  f0e5f88:	00024400 */ 	sll	$t0,$v0,0x10
/*  f0e5f8c:	10000021 */ 	b	.L0f0e6014
/*  f0e5f90:	00081403 */ 	sra	$v0,$t0,0x10
.L0f0e5f94:
/*  f0e5f94:	afa00044 */ 	sw	$zero,0x44($sp)
/*  f0e5f98:	1a600013 */ 	blez	$s3,.L0f0e5fe8
/*  f0e5f9c:	afa00040 */ 	sw	$zero,0x40($sp)
.L0f0e5fa0:
/*  f0e5fa0:	8e590010 */ 	lw	$t9,0x10($s2)
/*  f0e5fa4:	24040005 */ 	addiu	$a0,$zero,0x5
/*  f0e5fa8:	02402825 */ 	or	$a1,$s2,$zero
/*  f0e5fac:	0320f809 */ 	jalr	$t9
/*  f0e5fb0:	02a03025 */ 	or	$a2,$s5,$zero
/*  f0e5fb4:	8faa0048 */ 	lw	$t2,0x48($sp)
/*  f0e5fb8:	8fa20040 */ 	lw	$v0,0x40($sp)
/*  f0e5fbc:	028a082a */ 	slt	$at,$s4,$t2
/*  f0e5fc0:	54200004 */ 	bnezl	$at,.L0f0e5fd4
/*  f0e5fc4:	24100001 */ 	addiu	$s0,$zero,0x1
/*  f0e5fc8:	10000002 */ 	b	.L0f0e5fd4
/*  f0e5fcc:	26310001 */ 	addiu	$s1,$s1,0x1
/*  f0e5fd0:	24100001 */ 	addiu	$s0,$zero,0x1
.L0f0e5fd4:
/*  f0e5fd4:	16000004 */ 	bnez	$s0,.L0f0e5fe8
/*  f0e5fd8:	24420001 */ 	addiu	$v0,$v0,0x1
/*  f0e5fdc:	0053082a */ 	slt	$at,$v0,$s3
/*  f0e5fe0:	1420ffef */ 	bnez	$at,.L0f0e5fa0
/*  f0e5fe4:	afa20040 */ 	sw	$v0,0x40($sp)
.L0f0e5fe8:
/*  f0e5fe8:	3c0b8007 */ 	lui	$t3,%hi(var800711a8)
/*  f0e5fec:	8d6b11a8 */ 	lw	$t3,%lo(var800711a8)($t3)
/*  f0e5ff0:	00116880 */ 	sll	$t5,$s1,0x2
/*  f0e5ff4:	01b16823 */ 	subu	$t5,$t5,$s1
/*  f0e5ff8:	028b0019 */ 	multu	$s4,$t3
/*  f0e5ffc:	000d6880 */ 	sll	$t5,$t5,0x2
/*  f0e6000:	01b16823 */ 	subu	$t5,$t5,$s1
/*  f0e6004:	00006012 */ 	mflo	$t4
/*  f0e6008:	018d1021 */ 	addu	$v0,$t4,$t5
/*  f0e600c:	00027400 */ 	sll	$t6,$v0,0x10
/*  f0e6010:	000e1403 */ 	sra	$v0,$t6,0x10
.L0f0e6014:
/*  f0e6014:	8fbf002c */ 	lw	$ra,0x2c($sp)
/*  f0e6018:	8fb00014 */ 	lw	$s0,0x14($sp)
/*  f0e601c:	8fb10018 */ 	lw	$s1,0x18($sp)
/*  f0e6020:	8fb2001c */ 	lw	$s2,0x1c($sp)
/*  f0e6024:	8fb30020 */ 	lw	$s3,0x20($sp)
/*  f0e6028:	8fb40024 */ 	lw	$s4,0x24($sp)
/*  f0e602c:	8fb50028 */ 	lw	$s5,0x28($sp)
/*  f0e6030:	03e00008 */ 	jr	$ra
/*  f0e6034:	27bd0050 */ 	addiu	$sp,$sp,0x50
);

GLOBAL_ASM(
glabel func0f0e6038
/*  f0e6038:	27bdffb0 */ 	addiu	$sp,$sp,-80
/*  f0e603c:	afb10038 */ 	sw	$s1,0x38($sp)
/*  f0e6040:	8fb1006c */ 	lw	$s1,0x6c($sp)
/*  f0e6044:	afbf003c */ 	sw	$ra,0x3c($sp)
/*  f0e6048:	afb00034 */ 	sw	$s0,0x34($sp)
/*  f0e604c:	afa40050 */ 	sw	$a0,0x50($sp)
/*  f0e6050:	afa50054 */ 	sw	$a1,0x54($sp)
/*  f0e6054:	afa60058 */ 	sw	$a2,0x58($sp)
/*  f0e6058:	afa7005c */ 	sw	$a3,0x5c($sp)
/*  f0e605c:	44803000 */ 	mtc1	$zero,$f6
/*  f0e6060:	c6240040 */ 	lwc1	$f4,0x40($s1)
/*  f0e6064:	3c087f1b */ 	lui	$t0,%hi(g_MenuColourPalettes)
/*  f0e6068:	25081fb0 */ 	addiu	$t0,$t0,%lo(g_MenuColourPalettes)
/*  f0e606c:	4606203c */ 	c.lt.s	$f4,$f6
/*  f0e6070:	00000000 */ 	nop
/*  f0e6074:	4502000a */ 	bc1fl	.L0f0e60a0
/*  f0e6078:	9238003d */ 	lbu	$t8,0x3d($s1)
/*  f0e607c:	922e003c */ 	lbu	$t6,0x3c($s1)
/*  f0e6080:	3c107f1b */ 	lui	$s0,%hi(g_MenuColourPalettes+0x2c)
/*  f0e6084:	000e7900 */ 	sll	$t7,$t6,0x4
/*  f0e6088:	01ee7823 */ 	subu	$t7,$t7,$t6
/*  f0e608c:	000f7880 */ 	sll	$t7,$t7,0x2
/*  f0e6090:	020f8021 */ 	addu	$s0,$s0,$t7
/*  f0e6094:	10000010 */ 	b	.L0f0e60d8
/*  f0e6098:	8e101fdc */ 	lw	$s0,%lo(g_MenuColourPalettes+0x2c)($s0)
/*  f0e609c:	9238003d */ 	lbu	$t8,0x3d($s1)
.L0f0e60a0:
/*  f0e60a0:	922a003c */ 	lbu	$t2,0x3c($s1)
/*  f0e60a4:	8e260044 */ 	lw	$a2,0x44($s1)
/*  f0e60a8:	0018c900 */ 	sll	$t9,$t8,0x4
/*  f0e60ac:	000a5900 */ 	sll	$t3,$t2,0x4
/*  f0e60b0:	0338c823 */ 	subu	$t9,$t9,$t8
/*  f0e60b4:	016a5823 */ 	subu	$t3,$t3,$t2
/*  f0e60b8:	000b5880 */ 	sll	$t3,$t3,0x2
/*  f0e60bc:	0019c880 */ 	sll	$t9,$t9,0x2
/*  f0e60c0:	03284821 */ 	addu	$t1,$t9,$t0
/*  f0e60c4:	01686021 */ 	addu	$t4,$t3,$t0
/*  f0e60c8:	8d85002c */ 	lw	$a1,0x2c($t4)
/*  f0e60cc:	0fc01a40 */ 	jal	colourBlend
/*  f0e60d0:	8d24002c */ 	lw	$a0,0x2c($t1)
/*  f0e60d4:	00408025 */ 	or	$s0,$v0,$zero
.L0f0e60d8:
/*  f0e60d8:	8e2d000c */ 	lw	$t5,0xc($s1)
/*  f0e60dc:	02002025 */ 	or	$a0,$s0,$zero
/*  f0e60e0:	00002825 */ 	or	$a1,$zero,$zero
/*  f0e60e4:	11a00007 */ 	beqz	$t5,.L0f0e6104
/*  f0e60e8:	00000000 */ 	nop
/*  f0e60ec:	0fc01a40 */ 	jal	colourBlend
/*  f0e60f0:	2406002c */ 	addiu	$a2,$zero,0x2c
/*  f0e60f4:	2401ff00 */ 	addiu	$at,$zero,-256
/*  f0e60f8:	00417024 */ 	and	$t6,$v0,$at
/*  f0e60fc:	320f00ff */ 	andi	$t7,$s0,0xff
/*  f0e6100:	01cf8025 */ 	or	$s0,$t6,$t7
.L0f0e6104:
/*  f0e6104:	0fc54de0 */ 	jal	func0f153780
/*  f0e6108:	8fa40050 */ 	lw	$a0,0x50($sp)
/*  f0e610c:	87a50056 */ 	lh	$a1,0x56($sp)
/*  f0e6110:	87a6005a */ 	lh	$a2,0x5a($sp)
/*  f0e6114:	87a90066 */ 	lh	$t1,0x66($sp)
/*  f0e6118:	87ab0062 */ 	lh	$t3,0x62($sp)
/*  f0e611c:	87b9005e */ 	lh	$t9,0x5e($sp)
/*  f0e6120:	320c00ff */ 	andi	$t4,$s0,0xff
/*  f0e6124:	00c95021 */ 	addu	$t2,$a2,$t1
/*  f0e6128:	00ab4021 */ 	addu	$t0,$a1,$t3
/*  f0e612c:	afa80014 */ 	sw	$t0,0x14($sp)
/*  f0e6130:	afaa0010 */ 	sw	$t2,0x10($sp)
/*  f0e6134:	afac0018 */ 	sw	$t4,0x18($sp)
/*  f0e6138:	00402025 */ 	or	$a0,$v0,$zero
/*  f0e613c:	0fc38653 */ 	jal	func0f0e194c
/*  f0e6140:	00b93821 */ 	addu	$a3,$a1,$t9
/*  f0e6144:	0fc54d8a */ 	jal	func0f153628
/*  f0e6148:	00402025 */ 	or	$a0,$v0,$zero
/*  f0e614c:	87ad0056 */ 	lh	$t5,0x56($sp)
/*  f0e6150:	87af005a */ 	lh	$t7,0x5a($sp)
/*  f0e6154:	afa20050 */ 	sw	$v0,0x50($sp)
/*  f0e6158:	25ae0003 */ 	addiu	$t6,$t5,0x3
/*  f0e615c:	25f90002 */ 	addiu	$t9,$t7,0x2
/*  f0e6160:	afae004c */ 	sw	$t6,0x4c($sp)
/*  f0e6164:	afb90048 */ 	sw	$t9,0x48($sp)
/*  f0e6168:	c6280040 */ 	lwc1	$f8,0x40($s1)
/*  f0e616c:	44805000 */ 	mtc1	$zero,$f10
/*  f0e6170:	3c027f1b */ 	lui	$v0,%hi(g_MenuColourPalettes)
/*  f0e6174:	24421fb0 */ 	addiu	$v0,$v0,%lo(g_MenuColourPalettes)
/*  f0e6178:	460a403c */ 	c.lt.s	$f8,$f10
/*  f0e617c:	00000000 */ 	nop
/*  f0e6180:	4502000a */ 	bc1fl	.L0f0e61ac
/*  f0e6184:	922a003d */ 	lbu	$t2,0x3d($s1)
/*  f0e6188:	9238003c */ 	lbu	$t8,0x3c($s1)
/*  f0e618c:	3c107f1b */ 	lui	$s0,%hi(g_MenuColourPalettes+0x30)
/*  f0e6190:	00184900 */ 	sll	$t1,$t8,0x4
/*  f0e6194:	01384823 */ 	subu	$t1,$t1,$t8
/*  f0e6198:	00094880 */ 	sll	$t1,$t1,0x2
/*  f0e619c:	02098021 */ 	addu	$s0,$s0,$t1
/*  f0e61a0:	10000010 */ 	b	.L0f0e61e4
/*  f0e61a4:	8e101fe0 */ 	lw	$s0,%lo(g_MenuColourPalettes+0x30)($s0)
/*  f0e61a8:	922a003d */ 	lbu	$t2,0x3d($s1)
.L0f0e61ac:
/*  f0e61ac:	922c003c */ 	lbu	$t4,0x3c($s1)
/*  f0e61b0:	8e260044 */ 	lw	$a2,0x44($s1)
/*  f0e61b4:	000a5900 */ 	sll	$t3,$t2,0x4
/*  f0e61b8:	000c6900 */ 	sll	$t5,$t4,0x4
/*  f0e61bc:	016a5823 */ 	subu	$t3,$t3,$t2
/*  f0e61c0:	01ac6823 */ 	subu	$t5,$t5,$t4
/*  f0e61c4:	000d6880 */ 	sll	$t5,$t5,0x2
/*  f0e61c8:	000b5880 */ 	sll	$t3,$t3,0x2
/*  f0e61cc:	004b4021 */ 	addu	$t0,$v0,$t3
/*  f0e61d0:	004d7021 */ 	addu	$t6,$v0,$t5
/*  f0e61d4:	8dc50030 */ 	lw	$a1,0x30($t6)
/*  f0e61d8:	0fc01a40 */ 	jal	colourBlend
/*  f0e61dc:	8d040030 */ 	lw	$a0,0x30($t0)
/*  f0e61e0:	00408025 */ 	or	$s0,$v0,$zero
.L0f0e61e4:
/*  f0e61e4:	8e2f000c */ 	lw	$t7,0xc($s1)
/*  f0e61e8:	02002025 */ 	or	$a0,$s0,$zero
/*  f0e61ec:	00002825 */ 	or	$a1,$zero,$zero
/*  f0e61f0:	51e00008 */ 	beqzl	$t7,.L0f0e6214
/*  f0e61f4:	9222003c */ 	lbu	$v0,0x3c($s1)
/*  f0e61f8:	0fc01a40 */ 	jal	colourBlend
/*  f0e61fc:	2406002c */ 	addiu	$a2,$zero,0x2c
/*  f0e6200:	2401ff00 */ 	addiu	$at,$zero,-256
/*  f0e6204:	0041c824 */ 	and	$t9,$v0,$at
/*  f0e6208:	321800ff */ 	andi	$t8,$s0,0xff
/*  f0e620c:	03388025 */ 	or	$s0,$t9,$t8
/*  f0e6210:	9222003c */ 	lbu	$v0,0x3c($s1)
.L0f0e6214:
/*  f0e6214:	3c047f1b */ 	lui	$a0,%hi(g_MenuColourPalettes3+0x30)
/*  f0e6218:	3c057f1b */ 	lui	$a1,%hi(g_MenuColourPalettes2+0x30)
/*  f0e621c:	00024900 */ 	sll	$t1,$v0,0x4
/*  f0e6220:	01224823 */ 	subu	$t1,$t1,$v0
/*  f0e6224:	00091080 */ 	sll	$v0,$t1,0x2
/*  f0e6228:	00822021 */ 	addu	$a0,$a0,$v0
/*  f0e622c:	00a22821 */ 	addu	$a1,$a1,$v0
/*  f0e6230:	8ca52148 */ 	lw	$a1,%lo(g_MenuColourPalettes2+0x30)($a1)
/*  f0e6234:	0fc54f8e */ 	jal	func0f153e38
/*  f0e6238:	8c8422b0 */ 	lw	$a0,%lo(g_MenuColourPalettes3+0x30)($a0)
/*  f0e623c:	3c0a8008 */ 	lui	$t2,%hi(var8007fb10)
/*  f0e6240:	3c0b8008 */ 	lui	$t3,%hi(var8007fb0c)
/*  f0e6244:	8d6bfb0c */ 	lw	$t3,%lo(var8007fb0c)($t3)
/*  f0e6248:	8d4afb10 */ 	lw	$t2,%lo(var8007fb10)($t2)
/*  f0e624c:	87a8005e */ 	lh	$t0,0x5e($sp)
/*  f0e6250:	87ac0066 */ 	lh	$t4,0x66($sp)
/*  f0e6254:	8fa40050 */ 	lw	$a0,0x50($sp)
/*  f0e6258:	27a5004c */ 	addiu	$a1,$sp,0x4c
/*  f0e625c:	27a60048 */ 	addiu	$a2,$sp,0x48
/*  f0e6260:	8fa70068 */ 	lw	$a3,0x68($sp)
/*  f0e6264:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f0e6268:	afa00024 */ 	sw	$zero,0x24($sp)
/*  f0e626c:	afa00028 */ 	sw	$zero,0x28($sp)
/*  f0e6270:	afab0014 */ 	sw	$t3,0x14($sp)
/*  f0e6274:	afaa0010 */ 	sw	$t2,0x10($sp)
/*  f0e6278:	afa8001c */ 	sw	$t0,0x1c($sp)
/*  f0e627c:	0fc5580f */ 	jal	textRenderWhite
/*  f0e6280:	afac0020 */ 	sw	$t4,0x20($sp)
/*  f0e6284:	8fbf003c */ 	lw	$ra,0x3c($sp)
/*  f0e6288:	8fb00034 */ 	lw	$s0,0x34($sp)
/*  f0e628c:	8fb10038 */ 	lw	$s1,0x38($sp)
/*  f0e6290:	03e00008 */ 	jr	$ra
/*  f0e6294:	27bd0050 */ 	addiu	$sp,$sp,0x50
);

Gfx *func0f0e6298(Gfx *gdl, s16 x, s16 y, s16 x2, s16 y2)
{
	gDPFillRectangle(gdl++, x * g_ScreenWidthMultiplier, y, (x + x2) * g_ScreenWidthMultiplier, y + y2);
	return gdl;
}

GLOBAL_ASM(
glabel menuRenderItemList
/*  f0e6328:	27bdfe90 */ 	addiu	$sp,$sp,-368
/*  f0e632c:	afbf005c */ 	sw	$ra,0x5c($sp)
/*  f0e6330:	afbe0058 */ 	sw	$s8,0x58($sp)
/*  f0e6334:	afb70054 */ 	sw	$s7,0x54($sp)
/*  f0e6338:	afb60050 */ 	sw	$s6,0x50($sp)
/*  f0e633c:	afb5004c */ 	sw	$s5,0x4c($sp)
/*  f0e6340:	afb40048 */ 	sw	$s4,0x48($sp)
/*  f0e6344:	afb30044 */ 	sw	$s3,0x44($sp)
/*  f0e6348:	afb20040 */ 	sw	$s2,0x40($sp)
/*  f0e634c:	afb1003c */ 	sw	$s1,0x3c($sp)
/*  f0e6350:	afb00038 */ 	sw	$s0,0x38($sp)
/*  f0e6354:	8cae0014 */ 	lw	$t6,0x14($a1)
/*  f0e6358:	afa00120 */ 	sw	$zero,0x120($sp)
/*  f0e635c:	3c0a8008 */ 	lui	$t2,%hi(var8007fb0c)
/*  f0e6360:	afae016c */ 	sw	$t6,0x16c($sp)
/*  f0e6364:	84af0000 */ 	lh	$t7,0x0($a1)
/*  f0e6368:	3c0b8008 */ 	lui	$t3,%hi(var8007fb10)
/*  f0e636c:	8d4afb0c */ 	lw	$t2,%lo(var8007fb0c)($t2)
/*  f0e6370:	8d6bfb10 */ 	lw	$t3,%lo(var8007fb10)($t3)
/*  f0e6374:	2419270f */ 	addiu	$t9,$zero,0x270f
/*  f0e6378:	25f80002 */ 	addiu	$t8,$t7,0x2
/*  f0e637c:	afb8011c */ 	sw	$t8,0x11c($sp)
/*  f0e6380:	afb900fc */ 	sw	$t9,0xfc($sp)
/*  f0e6384:	a3a000ed */ 	sb	$zero,0xed($sp)
/*  f0e6388:	afaa00f4 */ 	sw	$t2,0xf4($sp)
/*  f0e638c:	afab00e8 */ 	sw	$t3,0xe8($sp)
/*  f0e6390:	8ca70008 */ 	lw	$a3,0x8($a1)
/*  f0e6394:	00a08825 */ 	or	$s1,$a1,$zero
/*  f0e6398:	00809025 */ 	or	$s2,$a0,$zero
/*  f0e639c:	8cec0004 */ 	lw	$t4,0x4($a3)
/*  f0e63a0:	000c6a80 */ 	sll	$t5,$t4,0xa
/*  f0e63a4:	05a3000b */ 	bgezl	$t5,.L0f0e63d4
/*  f0e63a8:	240f000b */ 	addiu	$t7,$zero,0xb
/*  f0e63ac:	8cf90010 */ 	lw	$t9,0x10($a3)
/*  f0e63b0:	24040014 */ 	addiu	$a0,$zero,0x14
/*  f0e63b4:	00e02825 */ 	or	$a1,$a3,$zero
/*  f0e63b8:	0320f809 */ 	jalr	$t9
/*  f0e63bc:	27a600d4 */ 	addiu	$a2,$sp,0xd4
/*  f0e63c0:	8fae00d4 */ 	lw	$t6,0xd4($sp)
/*  f0e63c4:	3c018007 */ 	lui	$at,%hi(var800711a8)
/*  f0e63c8:	10000004 */ 	b	.L0f0e63dc
/*  f0e63cc:	ac2e11a8 */ 	sw	$t6,%lo(var800711a8)($at)
/*  f0e63d0:	240f000b */ 	addiu	$t7,$zero,0xb
.L0f0e63d4:
/*  f0e63d4:	3c018007 */ 	lui	$at,%hi(var800711a8)
/*  f0e63d8:	ac2f11a8 */ 	sw	$t7,%lo(var800711a8)($at)
.L0f0e63dc:
/*  f0e63dc:	8e2a0008 */ 	lw	$t2,0x8($s1)
/*  f0e63e0:	8e380010 */ 	lw	$t8,0x10($s1)
/*  f0e63e4:	3c038008 */ 	lui	$v1,%hi(g_ScreenWidthMultiplier)
/*  f0e63e8:	8d4b0004 */ 	lw	$t3,0x4($t2)
/*  f0e63ec:	8705001e */ 	lh	$a1,0x1e($t8)
/*  f0e63f0:	000b6200 */ 	sll	$t4,$t3,0x8
/*  f0e63f4:	05810002 */ 	bgez	$t4,.L0f0e6400
/*  f0e63f8:	00000000 */ 	nop
/*  f0e63fc:	86250004 */ 	lh	$a1,0x4($s1)
.L0f0e6400:
/*  f0e6400:	8c63fac0 */ 	lw	$v1,%lo(g_ScreenWidthMultiplier)($v1)
/*  f0e6404:	862d0000 */ 	lh	$t5,0x0($s1)
/*  f0e6408:	3c028007 */ 	lui	$v0,%hi(var80071190)
/*  f0e640c:	24421190 */ 	addiu	$v0,$v0,%lo(var80071190)
/*  f0e6410:	01a30019 */ 	multu	$t5,$v1
/*  f0e6414:	3c178007 */ 	lui	$s7,%hi(var80071194)
/*  f0e6418:	26f71194 */ 	addiu	$s7,$s7,%lo(var80071194)
/*  f0e641c:	3c048007 */ 	lui	$a0,%hi(var80071198)
/*  f0e6420:	24841198 */ 	addiu	$a0,$a0,%lo(var80071198)
/*  f0e6424:	3c1e8007 */ 	lui	$s8,%hi(var8007119c)
/*  f0e6428:	27de119c */ 	addiu	$s8,$s8,%lo(var8007119c)
/*  f0e642c:	0000c812 */ 	mflo	$t9
/*  f0e6430:	ac590000 */ 	sw	$t9,0x0($v0)
/*  f0e6434:	862e0000 */ 	lh	$t6,0x0($s1)
/*  f0e6438:	01c57821 */ 	addu	$t7,$t6,$a1
/*  f0e643c:	01e30019 */ 	multu	$t7,$v1
/*  f0e6440:	0000c012 */ 	mflo	$t8
/*  f0e6444:	aef80000 */ 	sw	$t8,0x0($s7)
/*  f0e6448:	862a0002 */ 	lh	$t2,0x2($s1)
/*  f0e644c:	ac8a0000 */ 	sw	$t2,0x0($a0)
/*  f0e6450:	862c0006 */ 	lh	$t4,0x6($s1)
/*  f0e6454:	862b0002 */ 	lh	$t3,0x2($s1)
/*  f0e6458:	016c6821 */ 	addu	$t5,$t3,$t4
/*  f0e645c:	07210002 */ 	bgez	$t9,.L0f0e6468
/*  f0e6460:	afcd0000 */ 	sw	$t5,0x0($s8)
/*  f0e6464:	ac400000 */ 	sw	$zero,0x0($v0)
.L0f0e6468:
/*  f0e6468:	8eee0000 */ 	lw	$t6,0x0($s7)
/*  f0e646c:	05c30003 */ 	bgezl	$t6,.L0f0e647c
/*  f0e6470:	8c8f0000 */ 	lw	$t7,0x0($a0)
/*  f0e6474:	aee00000 */ 	sw	$zero,0x0($s7)
/*  f0e6478:	8c8f0000 */ 	lw	$t7,0x0($a0)
.L0f0e647c:
/*  f0e647c:	05e30003 */ 	bgezl	$t7,.L0f0e648c
/*  f0e6480:	8fd80000 */ 	lw	$t8,0x0($s8)
/*  f0e6484:	ac800000 */ 	sw	$zero,0x0($a0)
/*  f0e6488:	8fd80000 */ 	lw	$t8,0x0($s8)
.L0f0e648c:
/*  f0e648c:	07010002 */ 	bgez	$t8,.L0f0e6498
/*  f0e6490:	00000000 */ 	nop
/*  f0e6494:	afc00000 */ 	sw	$zero,0x0($s8)
.L0f0e6498:
/*  f0e6498:	0c002ef1 */ 	jal	viGetBufX
/*  f0e649c:	a7a500ee */ 	sh	$a1,0xee($sp)
/*  f0e64a0:	3c0a8007 */ 	lui	$t2,%hi(var80071190)
/*  f0e64a4:	8d4a1190 */ 	lw	$t2,%lo(var80071190)($t2)
/*  f0e64a8:	004a082a */ 	slt	$at,$v0,$t2
/*  f0e64ac:	10200005 */ 	beqz	$at,.L0f0e64c4
/*  f0e64b0:	00000000 */ 	nop
/*  f0e64b4:	0c002ef1 */ 	jal	viGetBufX
/*  f0e64b8:	00000000 */ 	nop
/*  f0e64bc:	3c018007 */ 	lui	$at,%hi(var80071190)
/*  f0e64c0:	ac221190 */ 	sw	$v0,%lo(var80071190)($at)
.L0f0e64c4:
/*  f0e64c4:	0c002ef1 */ 	jal	viGetBufX
/*  f0e64c8:	00000000 */ 	nop
/*  f0e64cc:	8eeb0000 */ 	lw	$t3,0x0($s7)
/*  f0e64d0:	004b082a */ 	slt	$at,$v0,$t3
/*  f0e64d4:	10200004 */ 	beqz	$at,.L0f0e64e8
/*  f0e64d8:	00000000 */ 	nop
/*  f0e64dc:	0c002ef1 */ 	jal	viGetBufX
/*  f0e64e0:	00000000 */ 	nop
/*  f0e64e4:	aee20000 */ 	sw	$v0,0x0($s7)
.L0f0e64e8:
/*  f0e64e8:	0c002ef5 */ 	jal	viGetBufY
/*  f0e64ec:	00000000 */ 	nop
/*  f0e64f0:	3c0c8007 */ 	lui	$t4,%hi(var80071198)
/*  f0e64f4:	8d8c1198 */ 	lw	$t4,%lo(var80071198)($t4)
/*  f0e64f8:	004c082a */ 	slt	$at,$v0,$t4
/*  f0e64fc:	10200005 */ 	beqz	$at,.L0f0e6514
/*  f0e6500:	00000000 */ 	nop
/*  f0e6504:	0c002ef5 */ 	jal	viGetBufY
/*  f0e6508:	00000000 */ 	nop
/*  f0e650c:	3c018007 */ 	lui	$at,%hi(var80071198)
/*  f0e6510:	ac221198 */ 	sw	$v0,%lo(var80071198)($at)
.L0f0e6514:
/*  f0e6514:	0c002ef5 */ 	jal	viGetBufY
/*  f0e6518:	00000000 */ 	nop
/*  f0e651c:	8fc30000 */ 	lw	$v1,0x0($s8)
/*  f0e6520:	0043082a */ 	slt	$at,$v0,$v1
/*  f0e6524:	10200005 */ 	beqz	$at,.L0f0e653c
/*  f0e6528:	00000000 */ 	nop
/*  f0e652c:	0c002ef5 */ 	jal	viGetBufY
/*  f0e6530:	00000000 */ 	nop
/*  f0e6534:	afc20000 */ 	sw	$v0,0x0($s8)
/*  f0e6538:	00401825 */ 	or	$v1,$v0,$zero
.L0f0e653c:
/*  f0e653c:	3c098007 */ 	lui	$t1,%hi(var80071190)
/*  f0e6540:	8d291190 */ 	lw	$t1,%lo(var80071190)($t1)
/*  f0e6544:	8eed0000 */ 	lw	$t5,0x0($s7)
/*  f0e6548:	3c088007 */ 	lui	$t0,%hi(var80071198)
/*  f0e654c:	44892000 */ 	mtc1	$t1,$f4
/*  f0e6550:	01a9082a */ 	slt	$at,$t5,$t1
/*  f0e6554:	10200002 */ 	beqz	$at,.L0f0e6560
/*  f0e6558:	468021a0 */ 	cvt.s.w	$f6,$f4
/*  f0e655c:	aee90000 */ 	sw	$t1,0x0($s7)
.L0f0e6560:
/*  f0e6560:	8d081198 */ 	lw	$t0,%lo(var80071198)($t0)
/*  f0e6564:	0068082a */ 	slt	$at,$v1,$t0
/*  f0e6568:	50200003 */ 	beqzl	$at,.L0f0e6578
/*  f0e656c:	44888000 */ 	mtc1	$t0,$f16
/*  f0e6570:	afc80000 */ 	sw	$t0,0x0($s8)
/*  f0e6574:	44888000 */ 	mtc1	$t0,$f16
.L0f0e6578:
/*  f0e6578:	3c014080 */ 	lui	$at,0x4080
/*  f0e657c:	44810000 */ 	mtc1	$at,$f0
/*  f0e6580:	468084a0 */ 	cvt.s.w	$f18,$f16
/*  f0e6584:	3c01ed00 */ 	lui	$at,0xed00
/*  f0e6588:	46003202 */ 	mul.s	$f8,$f6,$f0
/*  f0e658c:	02402025 */ 	or	$a0,$s2,$zero
/*  f0e6590:	3c058007 */ 	lui	$a1,%hi(var800711a8)
/*  f0e6594:	26520008 */ 	addiu	$s2,$s2,0x8
/*  f0e6598:	46009102 */ 	mul.s	$f4,$f18,$f0
/*  f0e659c:	4600428d */ 	trunc.w.s	$f10,$f8
/*  f0e65a0:	4600218d */ 	trunc.w.s	$f6,$f4
/*  f0e65a4:	440e5000 */ 	mfc1	$t6,$f10
/*  f0e65a8:	440c3000 */ 	mfc1	$t4,$f6
/*  f0e65ac:	31cf0fff */ 	andi	$t7,$t6,0xfff
/*  f0e65b0:	000fc300 */ 	sll	$t8,$t7,0xc
/*  f0e65b4:	03015025 */ 	or	$t2,$t8,$at
/*  f0e65b8:	318d0fff */ 	andi	$t5,$t4,0xfff
/*  f0e65bc:	014dc825 */ 	or	$t9,$t2,$t5
/*  f0e65c0:	ac990000 */ 	sw	$t9,0x0($a0)
/*  f0e65c4:	8eee0000 */ 	lw	$t6,0x0($s7)
/*  f0e65c8:	8fca0000 */ 	lw	$t2,0x0($s8)
/*  f0e65cc:	448e4000 */ 	mtc1	$t6,$f8
/*  f0e65d0:	448a2000 */ 	mtc1	$t2,$f4
/*  f0e65d4:	468042a0 */ 	cvt.s.w	$f10,$f8
/*  f0e65d8:	468021a0 */ 	cvt.s.w	$f6,$f4
/*  f0e65dc:	46005402 */ 	mul.s	$f16,$f10,$f0
/*  f0e65e0:	00000000 */ 	nop
/*  f0e65e4:	46003202 */ 	mul.s	$f8,$f6,$f0
/*  f0e65e8:	4600848d */ 	trunc.w.s	$f18,$f16
/*  f0e65ec:	4600428d */ 	trunc.w.s	$f10,$f8
/*  f0e65f0:	44189000 */ 	mfc1	$t8,$f18
/*  f0e65f4:	44195000 */ 	mfc1	$t9,$f10
/*  f0e65f8:	330b0fff */ 	andi	$t3,$t8,0xfff
/*  f0e65fc:	000b6300 */ 	sll	$t4,$t3,0xc
/*  f0e6600:	332e0fff */ 	andi	$t6,$t9,0xfff
/*  f0e6604:	018e7825 */ 	or	$t7,$t4,$t6
/*  f0e6608:	ac8f0004 */ 	sw	$t7,0x4($a0)
/*  f0e660c:	86220006 */ 	lh	$v0,0x6($s1)
/*  f0e6610:	8ca511a8 */ 	lw	$a1,%lo(var800711a8)($a1)
/*  f0e6614:	8fb8016c */ 	lw	$t8,0x16c($sp)
/*  f0e6618:	04410003 */ 	bgez	$v0,.L0f0e6628
/*  f0e661c:	0002b043 */ 	sra	$s6,$v0,0x1
/*  f0e6620:	24410001 */ 	addiu	$at,$v0,0x1
/*  f0e6624:	0001b043 */ 	sra	$s6,$at,0x1
.L0f0e6628:
/*  f0e6628:	02c5001a */ 	div	$zero,$s6,$a1
/*  f0e662c:	14a00002 */ 	bnez	$a1,.L0f0e6638
/*  f0e6630:	00000000 */ 	nop
/*  f0e6634:	0007000d */ 	break	0x7
.L0f0e6638:
/*  f0e6638:	2401ffff */ 	addiu	$at,$zero,-1
/*  f0e663c:	14a10004 */ 	bne	$a1,$at,.L0f0e6650
/*  f0e6640:	3c018000 */ 	lui	$at,0x8000
/*  f0e6644:	16c10002 */ 	bne	$s6,$at,.L0f0e6650
/*  f0e6648:	00000000 */ 	nop
/*  f0e664c:	0006000d */ 	break	0x6
.L0f0e6650:
/*  f0e6650:	0000b012 */ 	mflo	$s6
/*  f0e6654:	a7020006 */ 	sh	$v0,0x6($t8)
/*  f0e6658:	8e270008 */ 	lw	$a3,0x8($s1)
/*  f0e665c:	02c50019 */ 	multu	$s6,$a1
/*  f0e6660:	2401000c */ 	addiu	$at,$zero,0xc
/*  f0e6664:	90e30000 */ 	lbu	$v1,0x0($a3)
/*  f0e6668:	02402025 */ 	or	$a0,$s2,$zero
/*  f0e666c:	0000b012 */ 	mflo	$s6
/*  f0e6670:	10610004 */ 	beq	$v1,$at,.L0f0e6684
/*  f0e6674:	00000000 */ 	nop
/*  f0e6678:	2401000f */ 	addiu	$at,$zero,0xf
/*  f0e667c:	54610050 */ 	bnel	$v1,$at,.L0f0e67c0
/*  f0e6680:	8cf90010 */ 	lw	$t9,0x10($a3)
.L0f0e6684:
/*  f0e6684:	86260002 */ 	lh	$a2,0x2($s1)
/*  f0e6688:	862a0006 */ 	lh	$t2,0x6($s1)
/*  f0e668c:	86300000 */ 	lh	$s0,0x0($s1)
/*  f0e6690:	862b0004 */ 	lh	$t3,0x4($s1)
/*  f0e6694:	00ca6821 */ 	addu	$t5,$a2,$t2
/*  f0e6698:	afad0010 */ 	sw	$t5,0x10($sp)
/*  f0e669c:	02002825 */ 	or	$a1,$s0,$zero
/*  f0e66a0:	0fc3859a */ 	jal	func0f0e1668
/*  f0e66a4:	020b3821 */ 	addu	$a3,$s0,$t3
/*  f0e66a8:	86300000 */ 	lh	$s0,0x0($s1)
/*  f0e66ac:	86260002 */ 	lh	$a2,0x2($s1)
/*  f0e66b0:	86390006 */ 	lh	$t9,0x6($s1)
/*  f0e66b4:	240e007f */ 	addiu	$t6,$zero,0x7f
/*  f0e66b8:	240f0001 */ 	addiu	$t7,$zero,0x1
/*  f0e66bc:	2418000f */ 	addiu	$t8,$zero,0xf
/*  f0e66c0:	240b0001 */ 	addiu	$t3,$zero,0x1
/*  f0e66c4:	00d96021 */ 	addu	$t4,$a2,$t9
/*  f0e66c8:	afac0010 */ 	sw	$t4,0x10($sp)
/*  f0e66cc:	afab0020 */ 	sw	$t3,0x20($sp)
/*  f0e66d0:	afb8001c */ 	sw	$t8,0x1c($sp)
/*  f0e66d4:	afaf0018 */ 	sw	$t7,0x18($sp)
/*  f0e66d8:	afae0014 */ 	sw	$t6,0x14($sp)
/*  f0e66dc:	00402025 */ 	or	$a0,$v0,$zero
/*  f0e66e0:	02002825 */ 	or	$a1,$s0,$zero
/*  f0e66e4:	0fc38aa9 */ 	jal	func0f0e2aa4
/*  f0e66e8:	26070001 */ 	addiu	$a3,$s0,0x1
/*  f0e66ec:	862a0000 */ 	lh	$t2,0x0($s1)
/*  f0e66f0:	862d0004 */ 	lh	$t5,0x4($s1)
/*  f0e66f4:	86260002 */ 	lh	$a2,0x2($s1)
/*  f0e66f8:	86390006 */ 	lh	$t9,0x6($s1)
/*  f0e66fc:	240e007f */ 	addiu	$t6,$zero,0x7f
/*  f0e6700:	240f000f */ 	addiu	$t7,$zero,0xf
/*  f0e6704:	24180001 */ 	addiu	$t8,$zero,0x1
/*  f0e6708:	014d2821 */ 	addu	$a1,$t2,$t5
/*  f0e670c:	00d96021 */ 	addu	$t4,$a2,$t9
/*  f0e6710:	afac0010 */ 	sw	$t4,0x10($sp)
/*  f0e6714:	24a70001 */ 	addiu	$a3,$a1,0x1
/*  f0e6718:	afb80020 */ 	sw	$t8,0x20($sp)
/*  f0e671c:	afaf001c */ 	sw	$t7,0x1c($sp)
/*  f0e6720:	afae0014 */ 	sw	$t6,0x14($sp)
/*  f0e6724:	afa00018 */ 	sw	$zero,0x18($sp)
/*  f0e6728:	0fc38aa9 */ 	jal	func0f0e2aa4
/*  f0e672c:	00402025 */ 	or	$a0,$v0,$zero
/*  f0e6730:	86300000 */ 	lh	$s0,0x0($s1)
/*  f0e6734:	86260002 */ 	lh	$a2,0x2($s1)
/*  f0e6738:	862b0004 */ 	lh	$t3,0x4($s1)
/*  f0e673c:	240d007f */ 	addiu	$t5,$zero,0x7f
/*  f0e6740:	2419000f */ 	addiu	$t9,$zero,0xf
/*  f0e6744:	240c0001 */ 	addiu	$t4,$zero,0x1
/*  f0e6748:	24ca0001 */ 	addiu	$t2,$a2,0x1
/*  f0e674c:	afaa0010 */ 	sw	$t2,0x10($sp)
/*  f0e6750:	afac0020 */ 	sw	$t4,0x20($sp)
/*  f0e6754:	afb9001c */ 	sw	$t9,0x1c($sp)
/*  f0e6758:	afad0014 */ 	sw	$t5,0x14($sp)
/*  f0e675c:	afa00018 */ 	sw	$zero,0x18($sp)
/*  f0e6760:	00402025 */ 	or	$a0,$v0,$zero
/*  f0e6764:	02002825 */ 	or	$a1,$s0,$zero
/*  f0e6768:	0fc38aa9 */ 	jal	func0f0e2aa4
/*  f0e676c:	020b3821 */ 	addu	$a3,$s0,$t3
/*  f0e6770:	86300000 */ 	lh	$s0,0x0($s1)
/*  f0e6774:	862e0002 */ 	lh	$t6,0x2($s1)
/*  f0e6778:	862f0006 */ 	lh	$t7,0x6($s1)
/*  f0e677c:	86380004 */ 	lh	$t8,0x4($s1)
/*  f0e6780:	240a007f */ 	addiu	$t2,$zero,0x7f
/*  f0e6784:	01cf3021 */ 	addu	$a2,$t6,$t7
/*  f0e6788:	24cb0001 */ 	addiu	$t3,$a2,0x1
/*  f0e678c:	240d000f */ 	addiu	$t5,$zero,0xf
/*  f0e6790:	afad001c */ 	sw	$t5,0x1c($sp)
/*  f0e6794:	afab0010 */ 	sw	$t3,0x10($sp)
/*  f0e6798:	afaa0014 */ 	sw	$t2,0x14($sp)
/*  f0e679c:	afa00020 */ 	sw	$zero,0x20($sp)
/*  f0e67a0:	afa00018 */ 	sw	$zero,0x18($sp)
/*  f0e67a4:	00402025 */ 	or	$a0,$v0,$zero
/*  f0e67a8:	02002825 */ 	or	$a1,$s0,$zero
/*  f0e67ac:	0fc38aa9 */ 	jal	func0f0e2aa4
/*  f0e67b0:	02183821 */ 	addu	$a3,$s0,$t8
/*  f0e67b4:	00409025 */ 	or	$s2,$v0,$zero
/*  f0e67b8:	8e270008 */ 	lw	$a3,0x8($s1)
/*  f0e67bc:	8cf90010 */ 	lw	$t9,0x10($a3)
.L0f0e67c0:
/*  f0e67c0:	57200004 */ 	bnezl	$t9,.L0f0e67d4
/*  f0e67c4:	afa0015c */ 	sw	$zero,0x15c($sp)
/*  f0e67c8:	10000369 */ 	b	.L0f0e7570
/*  f0e67cc:	02401025 */ 	or	$v0,$s2,$zero
/*  f0e67d0:	afa0015c */ 	sw	$zero,0x15c($sp)
.L0f0e67d4:
/*  f0e67d4:	8e270008 */ 	lw	$a3,0x8($s1)
/*  f0e67d8:	24040007 */ 	addiu	$a0,$zero,0x7
/*  f0e67dc:	27a6015c */ 	addiu	$a2,$sp,0x15c
/*  f0e67e0:	8cf90010 */ 	lw	$t9,0x10($a3)
/*  f0e67e4:	00e02825 */ 	or	$a1,$a3,$zero
/*  f0e67e8:	0320f809 */ 	jalr	$t9
/*  f0e67ec:	00000000 */ 	nop
/*  f0e67f0:	8fa8015c */ 	lw	$t0,0x15c($sp)
/*  f0e67f4:	3c010001 */ 	lui	$at,0x1
/*  f0e67f8:	0101082b */ 	sltu	$at,$t0,$at
/*  f0e67fc:	54200003 */ 	bnezl	$at,.L0f0e680c
/*  f0e6800:	862c0002 */ 	lh	$t4,0x2($s1)
/*  f0e6804:	2408ffff */ 	addiu	$t0,$zero,-1
/*  f0e6808:	862c0002 */ 	lh	$t4,0x2($s1)
.L0f0e680c:
/*  f0e680c:	24040001 */ 	addiu	$a0,$zero,0x1
/*  f0e6810:	27a6015c */ 	addiu	$a2,$sp,0x15c
/*  f0e6814:	258e0001 */ 	addiu	$t6,$t4,0x1
/*  f0e6818:	afae0104 */ 	sw	$t6,0x104($sp)
/*  f0e681c:	8e270008 */ 	lw	$a3,0x8($s1)
/*  f0e6820:	afa800f0 */ 	sw	$t0,0xf0($sp)
/*  f0e6824:	8cf90010 */ 	lw	$t9,0x10($a3)
/*  f0e6828:	00e02825 */ 	or	$a1,$a3,$zero
/*  f0e682c:	0320f809 */ 	jalr	$t9
/*  f0e6830:	00000000 */ 	nop
/*  f0e6834:	8faf015c */ 	lw	$t7,0x15c($sp)
/*  f0e6838:	8fb8016c */ 	lw	$t8,0x16c($sp)
/*  f0e683c:	afaf0108 */ 	sw	$t7,0x108($sp)
/*  f0e6840:	870b0000 */ 	lh	$t3,0x0($t8)
/*  f0e6844:	8e250008 */ 	lw	$a1,0x8($s1)
/*  f0e6848:	01762023 */ 	subu	$a0,$t3,$s6
/*  f0e684c:	0fc3974b */ 	jal	func0f0e5d2c
/*  f0e6850:	00808025 */ 	or	$s0,$a0,$zero
/*  f0e6854:	862a0002 */ 	lh	$t2,0x2($s1)
/*  f0e6858:	0040a825 */ 	or	$s5,$v0,$zero
/*  f0e685c:	02402025 */ 	or	$a0,$s2,$zero
/*  f0e6860:	01506821 */ 	addu	$t5,$t2,$s0
/*  f0e6864:	0fc54d8a */ 	jal	func0f153628
/*  f0e6868:	afad012c */ 	sw	$t5,0x12c($sp)
/*  f0e686c:	00152400 */ 	sll	$a0,$s5,0x10
/*  f0e6870:	afa00160 */ 	sw	$zero,0x160($sp)
/*  f0e6874:	00046403 */ 	sra	$t4,$a0,0x10
/*  f0e6878:	00409025 */ 	or	$s2,$v0,$zero
/*  f0e687c:	02a09825 */ 	or	$s3,$s5,$zero
/*  f0e6880:	01802025 */ 	or	$a0,$t4,$zero
/*  f0e6884:	0fc397be */ 	jal	func0f0e5ef8
/*  f0e6888:	8e250008 */ 	lw	$a1,0x8($s1)
/*  f0e688c:	8fb9016c */ 	lw	$t9,0x16c($sp)
/*  f0e6890:	00567021 */ 	addu	$t6,$v0,$s6
/*  f0e6894:	24040002 */ 	addiu	$a0,$zero,0x2
/*  f0e6898:	872f0000 */ 	lh	$t7,0x0($t9)
/*  f0e689c:	afa0014c */ 	sw	$zero,0x14c($sp)
/*  f0e68a0:	afa00158 */ 	sw	$zero,0x158($sp)
/*  f0e68a4:	8e270008 */ 	lw	$a3,0x8($s1)
/*  f0e68a8:	27a6014c */ 	addiu	$a2,$sp,0x14c
/*  f0e68ac:	01cfa023 */ 	subu	$s4,$t6,$t7
/*  f0e68b0:	8cf90010 */ 	lw	$t9,0x10($a3)
/*  f0e68b4:	00e02825 */ 	or	$a1,$a3,$zero
/*  f0e68b8:	0320f809 */ 	jalr	$t9
/*  f0e68bc:	00000000 */ 	nop
/*  f0e68c0:	8fb80108 */ 	lw	$t8,0x108($sp)
/*  f0e68c4:	8fa3014c */ 	lw	$v1,0x14c($sp)
/*  f0e68c8:	1b0002d7 */ 	blez	$t8,.L0f0e7428
/*  f0e68cc:	afa30100 */ 	sw	$v1,0x100($sp)
/*  f0e68d0:	1060005d */ 	beqz	$v1,.L0f0e6a48
/*  f0e68d4:	00008025 */ 	or	$s0,$zero,$zero
/*  f0e68d8:	00004025 */ 	or	$t0,$zero,$zero
/*  f0e68dc:	afa000fc */ 	sw	$zero,0xfc($sp)
/*  f0e68e0:	afa0014c */ 	sw	$zero,0x14c($sp)
/*  f0e68e4:	1860001a */ 	blez	$v1,.L0f0e6950
/*  f0e68e8:	afa00150 */ 	sw	$zero,0x150($sp)
/*  f0e68ec:	8e270008 */ 	lw	$a3,0x8($s1)
.L0f0e68f0:
/*  f0e68f0:	afa800c8 */ 	sw	$t0,0xc8($sp)
/*  f0e68f4:	24040005 */ 	addiu	$a0,$zero,0x5
/*  f0e68f8:	8cf90010 */ 	lw	$t9,0x10($a3)
/*  f0e68fc:	27a6014c */ 	addiu	$a2,$sp,0x14c
/*  f0e6900:	00e02825 */ 	or	$a1,$a3,$zero
/*  f0e6904:	0320f809 */ 	jalr	$t9
/*  f0e6908:	00000000 */ 	nop
/*  f0e690c:	8fa30154 */ 	lw	$v1,0x154($sp)
/*  f0e6910:	8fa800c8 */ 	lw	$t0,0xc8($sp)
/*  f0e6914:	02a3082a */ 	slt	$at,$s5,$v1
/*  f0e6918:	54200007 */ 	bnezl	$at,.L0f0e6938
/*  f0e691c:	24100001 */ 	addiu	$s0,$zero,0x1
/*  f0e6920:	8fa8014c */ 	lw	$t0,0x14c($sp)
/*  f0e6924:	afa300fc */ 	sw	$v1,0xfc($sp)
/*  f0e6928:	250d0001 */ 	addiu	$t5,$t0,0x1
/*  f0e692c:	10000002 */ 	b	.L0f0e6938
/*  f0e6930:	afad014c */ 	sw	$t5,0x14c($sp)
/*  f0e6934:	24100001 */ 	addiu	$s0,$zero,0x1
.L0f0e6938:
/*  f0e6938:	16000005 */ 	bnez	$s0,.L0f0e6950
/*  f0e693c:	8fac014c */ 	lw	$t4,0x14c($sp)
/*  f0e6940:	8fae0100 */ 	lw	$t6,0x100($sp)
/*  f0e6944:	018e082a */ 	slt	$at,$t4,$t6
/*  f0e6948:	5420ffe9 */ 	bnezl	$at,.L0f0e68f0
/*  f0e694c:	8e270008 */ 	lw	$a3,0x8($s1)
.L0f0e6950:
/*  f0e6950:	8fb800fc */ 	lw	$t8,0xfc($sp)
/*  f0e6954:	8faf0158 */ 	lw	$t7,0x158($sp)
/*  f0e6958:	afa8013c */ 	sw	$t0,0x13c($sp)
/*  f0e695c:	0315082a */ 	slt	$at,$t8,$s5
/*  f0e6960:	afa00140 */ 	sw	$zero,0x140($sp)
/*  f0e6964:	14200004 */ 	bnez	$at,.L0f0e6978
/*  f0e6968:	afaf0148 */ 	sw	$t7,0x148($sp)
/*  f0e696c:	2a81000b */ 	slti	$at,$s4,0xb
/*  f0e6970:	50200036 */ 	beqzl	$at,.L0f0e6a4c
/*  f0e6974:	8faa00fc */ 	lw	$t2,0xfc($sp)
.L0f0e6978:
/*  f0e6978:	8e270008 */ 	lw	$a3,0x8($s1)
/*  f0e697c:	24040004 */ 	addiu	$a0,$zero,0x4
/*  f0e6980:	27a6013c */ 	addiu	$a2,$sp,0x13c
/*  f0e6984:	8cf90010 */ 	lw	$t9,0x10($a3)
/*  f0e6988:	00e02825 */ 	or	$a1,$a3,$zero
/*  f0e698c:	0320f809 */ 	jalr	$t9
/*  f0e6990:	00000000 */ 	nop
/*  f0e6994:	3c0b8007 */ 	lui	$t3,%hi(var800711a8)
/*  f0e6998:	8d6b11a8 */ 	lw	$t3,%lo(var800711a8)($t3)
/*  f0e699c:	87ad00ee */ 	lh	$t5,0xee($sp)
/*  f0e69a0:	240c000b */ 	addiu	$t4,$zero,0xb
/*  f0e69a4:	028b5021 */ 	addu	$t2,$s4,$t3
/*  f0e69a8:	5940000f */ 	blezl	$t2,.L0f0e69e8
/*  f0e69ac:	8fb80104 */ 	lw	$t8,0x104($sp)
/*  f0e69b0:	86250000 */ 	lh	$a1,0x0($s1)
/*  f0e69b4:	86260002 */ 	lh	$a2,0x2($s1)
/*  f0e69b8:	86270004 */ 	lh	$a3,0x4($s1)
/*  f0e69bc:	afa20018 */ 	sw	$v0,0x18($sp)
/*  f0e69c0:	afac0014 */ 	sw	$t4,0x14($sp)
/*  f0e69c4:	afad0010 */ 	sw	$t5,0x10($sp)
/*  f0e69c8:	8e2e0010 */ 	lw	$t6,0x10($s1)
/*  f0e69cc:	02402025 */ 	or	$a0,$s2,$zero
/*  f0e69d0:	0fc3980e */ 	jal	func0f0e6038
/*  f0e69d4:	afae001c */ 	sw	$t6,0x1c($sp)
/*  f0e69d8:	240f0001 */ 	addiu	$t7,$zero,0x1
/*  f0e69dc:	00409025 */ 	or	$s2,$v0,$zero
/*  f0e69e0:	a3af00ed */ 	sb	$t7,0xed($sp)
/*  f0e69e4:	8fb80104 */ 	lw	$t8,0x104($sp)
.L0f0e69e8:
/*  f0e69e8:	8fab013c */ 	lw	$t3,0x13c($sp)
/*  f0e69ec:	8fad014c */ 	lw	$t5,0x14c($sp)
/*  f0e69f0:	8fac0100 */ 	lw	$t4,0x100($sp)
/*  f0e69f4:	2719000b */ 	addiu	$t9,$t8,0xb
/*  f0e69f8:	256a0001 */ 	addiu	$t2,$t3,0x1
/*  f0e69fc:	01ac082a */ 	slt	$at,$t5,$t4
/*  f0e6a00:	afb90104 */ 	sw	$t9,0x104($sp)
/*  f0e6a04:	1020000e */ 	beqz	$at,.L0f0e6a40
/*  f0e6a08:	afaa013c */ 	sw	$t2,0x13c($sp)
/*  f0e6a0c:	8e270008 */ 	lw	$a3,0x8($s1)
/*  f0e6a10:	24040005 */ 	addiu	$a0,$zero,0x5
/*  f0e6a14:	27a6014c */ 	addiu	$a2,$sp,0x14c
/*  f0e6a18:	8cf90010 */ 	lw	$t9,0x10($a3)
/*  f0e6a1c:	00e02825 */ 	or	$a1,$a3,$zero
/*  f0e6a20:	0320f809 */ 	jalr	$t9
/*  f0e6a24:	00000000 */ 	nop
/*  f0e6a28:	8faf014c */ 	lw	$t7,0x14c($sp)
/*  f0e6a2c:	8fae0154 */ 	lw	$t6,0x154($sp)
/*  f0e6a30:	25f80001 */ 	addiu	$t8,$t7,0x1
/*  f0e6a34:	afb8014c */ 	sw	$t8,0x14c($sp)
/*  f0e6a38:	10000003 */ 	b	.L0f0e6a48
/*  f0e6a3c:	afae00fc */ 	sw	$t6,0xfc($sp)
.L0f0e6a40:
/*  f0e6a40:	240b270f */ 	addiu	$t3,$zero,0x270f
/*  f0e6a44:	afab00fc */ 	sw	$t3,0xfc($sp)
.L0f0e6a48:
/*  f0e6a48:	8faa00fc */ 	lw	$t2,0xfc($sp)
.L0f0e6a4c:
/*  f0e6a4c:	3c167f1b */ 	lui	$s6,%hi(g_MenuColourPalettes)
/*  f0e6a50:	26d61fb0 */ 	addiu	$s6,$s6,%lo(g_MenuColourPalettes)
/*  f0e6a54:	56aa0003 */ 	bnel	$s5,$t2,.L0f0e6a64
/*  f0e6a58:	2415003c */ 	addiu	$s5,$zero,0x3c
/*  f0e6a5c:	2694fff5 */ 	addiu	$s4,$s4,-11
/*  f0e6a60:	2415003c */ 	addiu	$s5,$zero,0x3c
.L0f0e6a64:
/*  f0e6a64:	8e230010 */ 	lw	$v1,0x10($s1)
.L0f0e6a68:
/*  f0e6a68:	44809000 */ 	mtc1	$zero,$f18
/*  f0e6a6c:	c4700040 */ 	lwc1	$f16,0x40($v1)
/*  f0e6a70:	4612803c */ 	c.lt.s	$f16,$f18
/*  f0e6a74:	00000000 */ 	nop
/*  f0e6a78:	45020008 */ 	bc1fl	.L0f0e6a9c
/*  f0e6a7c:	906e003d */ 	lbu	$t6,0x3d($v1)
/*  f0e6a80:	906d003c */ 	lbu	$t5,0x3c($v1)
/*  f0e6a84:	01b50019 */ 	multu	$t5,$s5
/*  f0e6a88:	00006012 */ 	mflo	$t4
/*  f0e6a8c:	02ccc821 */ 	addu	$t9,$s6,$t4
/*  f0e6a90:	1000000f */ 	b	.L0f0e6ad0
/*  f0e6a94:	8f300018 */ 	lw	$s0,0x18($t9)
/*  f0e6a98:	906e003d */ 	lbu	$t6,0x3d($v1)
.L0f0e6a9c:
/*  f0e6a9c:	906b003c */ 	lbu	$t3,0x3c($v1)
/*  f0e6aa0:	8c660044 */ 	lw	$a2,0x44($v1)
/*  f0e6aa4:	01d50019 */ 	multu	$t6,$s5
/*  f0e6aa8:	00007812 */ 	mflo	$t7
/*  f0e6aac:	02cfc021 */ 	addu	$t8,$s6,$t7
/*  f0e6ab0:	8f040018 */ 	lw	$a0,0x18($t8)
/*  f0e6ab4:	01750019 */ 	multu	$t3,$s5
/*  f0e6ab8:	00005012 */ 	mflo	$t2
/*  f0e6abc:	02ca6821 */ 	addu	$t5,$s6,$t2
/*  f0e6ac0:	0fc01a40 */ 	jal	colourBlend
/*  f0e6ac4:	8da50018 */ 	lw	$a1,0x18($t5)
/*  f0e6ac8:	00408025 */ 	or	$s0,$v0,$zero
/*  f0e6acc:	8e230010 */ 	lw	$v1,0x10($s1)
.L0f0e6ad0:
/*  f0e6ad0:	8c6c000c */ 	lw	$t4,0xc($v1)
/*  f0e6ad4:	02002025 */ 	or	$a0,$s0,$zero
/*  f0e6ad8:	00002825 */ 	or	$a1,$zero,$zero
/*  f0e6adc:	51800009 */ 	beqzl	$t4,.L0f0e6b04
/*  f0e6ae0:	906f003c */ 	lbu	$t7,0x3c($v1)
/*  f0e6ae4:	0fc01a40 */ 	jal	colourBlend
/*  f0e6ae8:	2406007f */ 	addiu	$a2,$zero,0x7f
/*  f0e6aec:	2401ff00 */ 	addiu	$at,$zero,-256
/*  f0e6af0:	0041c824 */ 	and	$t9,$v0,$at
/*  f0e6af4:	320e00ff */ 	andi	$t6,$s0,0xff
/*  f0e6af8:	032e8025 */ 	or	$s0,$t9,$t6
/*  f0e6afc:	8e230010 */ 	lw	$v1,0x10($s1)
/*  f0e6b00:	906f003c */ 	lbu	$t7,0x3c($v1)
.L0f0e6b04:
/*  f0e6b04:	3c047f1b */ 	lui	$a0,%hi(g_MenuColourPalettes3+0x18)
/*  f0e6b08:	3c057f1b */ 	lui	$a1,%hi(g_MenuColourPalettes2+0x18)
/*  f0e6b0c:	01f50019 */ 	multu	$t7,$s5
/*  f0e6b10:	00001012 */ 	mflo	$v0
/*  f0e6b14:	00822021 */ 	addu	$a0,$a0,$v0
/*  f0e6b18:	00a22821 */ 	addu	$a1,$a1,$v0
/*  f0e6b1c:	8ca52130 */ 	lw	$a1,%lo(g_MenuColourPalettes2+0x18)($a1)
/*  f0e6b20:	0fc54f8e */ 	jal	func0f153e38
/*  f0e6b24:	8c842298 */ 	lw	$a0,%lo(g_MenuColourPalettes3+0x18)($a0)
/*  f0e6b28:	8fb800fc */ 	lw	$t8,0xfc($sp)
/*  f0e6b2c:	8faa0108 */ 	lw	$t2,0x108($sp)
/*  f0e6b30:	1678003f */ 	bne	$s3,$t8,.L0f0e6c30
/*  f0e6b34:	026a082a */ 	slt	$at,$s3,$t2
/*  f0e6b38:	8e270008 */ 	lw	$a3,0x8($s1)
/*  f0e6b3c:	8ceb0004 */ 	lw	$t3,0x4($a3)
/*  f0e6b40:	000b5280 */ 	sll	$t2,$t3,0xa
/*  f0e6b44:	05430006 */ 	bgezl	$t2,.L0f0e6b60
/*  f0e6b48:	8cf90010 */ 	lw	$t9,0x10($a3)
/*  f0e6b4c:	0fc3d43f */ 	jal	func0f0f50fc
/*  f0e6b50:	02402025 */ 	or	$a0,$s2,$zero
/*  f0e6b54:	00409025 */ 	or	$s2,$v0,$zero
/*  f0e6b58:	8e270008 */ 	lw	$a3,0x8($s1)
/*  f0e6b5c:	8cf90010 */ 	lw	$t9,0x10($a3)
.L0f0e6b60:
/*  f0e6b60:	24040004 */ 	addiu	$a0,$zero,0x4
/*  f0e6b64:	00e02825 */ 	or	$a1,$a3,$zero
/*  f0e6b68:	0320f809 */ 	jalr	$t9
/*  f0e6b6c:	27a6013c */ 	addiu	$a2,$sp,0x13c
/*  f0e6b70:	8fad013c */ 	lw	$t5,0x13c($sp)
/*  f0e6b74:	00404025 */ 	or	$t0,$v0,$zero
/*  f0e6b78:	02402025 */ 	or	$a0,$s2,$zero
/*  f0e6b7c:	25ac0001 */ 	addiu	$t4,$t5,0x1
/*  f0e6b80:	afac013c */ 	sw	$t4,0x13c($sp)
/*  f0e6b84:	862e0006 */ 	lh	$t6,0x6($s1)
/*  f0e6b88:	87aa00ee */ 	lh	$t2,0xee($sp)
/*  f0e6b8c:	01d41823 */ 	subu	$v1,$t6,$s4
/*  f0e6b90:	2861000c */ 	slti	$at,$v1,0xc
/*  f0e6b94:	54200003 */ 	bnezl	$at,.L0f0e6ba4
/*  f0e6b98:	862f0002 */ 	lh	$t7,0x2($s1)
/*  f0e6b9c:	2403000b */ 	addiu	$v1,$zero,0xb
/*  f0e6ba0:	862f0002 */ 	lh	$t7,0x2($s1)
.L0f0e6ba4:
/*  f0e6ba4:	86250000 */ 	lh	$a1,0x0($s1)
/*  f0e6ba8:	86270004 */ 	lh	$a3,0x4($s1)
/*  f0e6bac:	afa80018 */ 	sw	$t0,0x18($sp)
/*  f0e6bb0:	afa30014 */ 	sw	$v1,0x14($sp)
/*  f0e6bb4:	afaa0010 */ 	sw	$t2,0x10($sp)
/*  f0e6bb8:	8e390010 */ 	lw	$t9,0x10($s1)
/*  f0e6bbc:	01f43021 */ 	addu	$a2,$t7,$s4
/*  f0e6bc0:	0006c400 */ 	sll	$t8,$a2,0x10
/*  f0e6bc4:	00183403 */ 	sra	$a2,$t8,0x10
/*  f0e6bc8:	0fc3980e */ 	jal	func0f0e6038
/*  f0e6bcc:	afb9001c */ 	sw	$t9,0x1c($sp)
/*  f0e6bd0:	8fad014c */ 	lw	$t5,0x14c($sp)
/*  f0e6bd4:	8fac0100 */ 	lw	$t4,0x100($sp)
/*  f0e6bd8:	00409025 */ 	or	$s2,$v0,$zero
/*  f0e6bdc:	240b270f */ 	addiu	$t3,$zero,0x270f
/*  f0e6be0:	01ac082a */ 	slt	$at,$t5,$t4
/*  f0e6be4:	50200010 */ 	beqzl	$at,.L0f0e6c28
/*  f0e6be8:	afab00fc */ 	sw	$t3,0xfc($sp)
/*  f0e6bec:	8e270008 */ 	lw	$a3,0x8($s1)
/*  f0e6bf0:	24040005 */ 	addiu	$a0,$zero,0x5
/*  f0e6bf4:	27a6014c */ 	addiu	$a2,$sp,0x14c
/*  f0e6bf8:	8cf90010 */ 	lw	$t9,0x10($a3)
/*  f0e6bfc:	00e02825 */ 	or	$a1,$a3,$zero
/*  f0e6c00:	0320f809 */ 	jalr	$t9
/*  f0e6c04:	00000000 */ 	nop
/*  f0e6c08:	8faf014c */ 	lw	$t7,0x14c($sp)
/*  f0e6c0c:	8fae0154 */ 	lw	$t6,0x154($sp)
/*  f0e6c10:	2694000b */ 	addiu	$s4,$s4,0xb
/*  f0e6c14:	25f80001 */ 	addiu	$t8,$t7,0x1
/*  f0e6c18:	afb8014c */ 	sw	$t8,0x14c($sp)
/*  f0e6c1c:	100001f5 */ 	b	.L0f0e73f4
/*  f0e6c20:	afae00fc */ 	sw	$t6,0xfc($sp)
/*  f0e6c24:	afab00fc */ 	sw	$t3,0xfc($sp)
.L0f0e6c28:
/*  f0e6c28:	100001f2 */ 	b	.L0f0e73f4
/*  f0e6c2c:	2694000b */ 	addiu	$s4,$s4,0xb
.L0f0e6c30:
/*  f0e6c30:	502001e8 */ 	beqzl	$at,.L0f0e73d4
/*  f0e6c34:	8fb80108 */ 	lw	$t8,0x108($sp)
/*  f0e6c38:	8fad00f0 */ 	lw	$t5,0xf0($sp)
/*  f0e6c3c:	afa000b4 */ 	sw	$zero,0xb4($sp)
/*  f0e6c40:	2401ff00 */ 	addiu	$at,$zero,-256
/*  f0e6c44:	15b30003 */ 	bne	$t5,$s3,.L0f0e6c54
/*  f0e6c48:	8fb9016c */ 	lw	$t9,0x16c($sp)
/*  f0e6c4c:	02016025 */ 	or	$t4,$s0,$at
/*  f0e6c50:	01808025 */ 	or	$s0,$t4,$zero
.L0f0e6c54:
/*  f0e6c54:	872e0002 */ 	lh	$t6,0x2($t9)
/*  f0e6c58:	566e0069 */ 	bnel	$s3,$t6,.L0f0e6e00
/*  f0e6c5c:	8e2e0008 */ 	lw	$t6,0x8($s1)
/*  f0e6c60:	8e2f000c */ 	lw	$t7,0xc($s1)
/*  f0e6c64:	3c014220 */ 	lui	$at,0x4220
/*  f0e6c68:	51e00065 */ 	beqzl	$t7,.L0f0e6e00
/*  f0e6c6c:	8e2e0008 */ 	lw	$t6,0x8($s1)
/*  f0e6c70:	44816000 */ 	mtc1	$at,$f12
/*  f0e6c74:	0fc01ac2 */ 	jal	func0f006b08
/*  f0e6c78:	00000000 */ 	nop
/*  f0e6c7c:	3c01437f */ 	lui	$at,0x437f
/*  f0e6c80:	44812000 */ 	mtc1	$at,$f4
/*  f0e6c84:	240b0001 */ 	addiu	$t3,$zero,0x1
/*  f0e6c88:	3c014f00 */ 	lui	$at,0x4f00
/*  f0e6c8c:	46040182 */ 	mul.s	$f6,$f0,$f4
/*  f0e6c90:	4458f800 */ 	cfc1	$t8,$31
/*  f0e6c94:	44cbf800 */ 	ctc1	$t3,$31
/*  f0e6c98:	00000000 */ 	nop
/*  f0e6c9c:	46003224 */ 	cvt.w.s	$f8,$f6
/*  f0e6ca0:	444bf800 */ 	cfc1	$t3,$31
/*  f0e6ca4:	00000000 */ 	nop
/*  f0e6ca8:	316b0078 */ 	andi	$t3,$t3,0x78
/*  f0e6cac:	51600013 */ 	beqzl	$t3,.L0f0e6cfc
/*  f0e6cb0:	440b4000 */ 	mfc1	$t3,$f8
/*  f0e6cb4:	44814000 */ 	mtc1	$at,$f8
/*  f0e6cb8:	240b0001 */ 	addiu	$t3,$zero,0x1
/*  f0e6cbc:	46083201 */ 	sub.s	$f8,$f6,$f8
/*  f0e6cc0:	44cbf800 */ 	ctc1	$t3,$31
/*  f0e6cc4:	00000000 */ 	nop
/*  f0e6cc8:	46004224 */ 	cvt.w.s	$f8,$f8
/*  f0e6ccc:	444bf800 */ 	cfc1	$t3,$31
/*  f0e6cd0:	00000000 */ 	nop
/*  f0e6cd4:	316b0078 */ 	andi	$t3,$t3,0x78
/*  f0e6cd8:	15600005 */ 	bnez	$t3,.L0f0e6cf0
/*  f0e6cdc:	00000000 */ 	nop
/*  f0e6ce0:	440b4000 */ 	mfc1	$t3,$f8
/*  f0e6ce4:	3c018000 */ 	lui	$at,0x8000
/*  f0e6ce8:	10000007 */ 	b	.L0f0e6d08
/*  f0e6cec:	01615825 */ 	or	$t3,$t3,$at
.L0f0e6cf0:
/*  f0e6cf0:	10000005 */ 	b	.L0f0e6d08
/*  f0e6cf4:	240bffff */ 	addiu	$t3,$zero,-1
/*  f0e6cf8:	440b4000 */ 	mfc1	$t3,$f8
.L0f0e6cfc:
/*  f0e6cfc:	00000000 */ 	nop
/*  f0e6d00:	0560fffb */ 	bltz	$t3,.L0f0e6cf0
/*  f0e6d04:	00000000 */ 	nop
.L0f0e6d08:
/*  f0e6d08:	afab00ac */ 	sw	$t3,0xac($sp)
/*  f0e6d0c:	8e230010 */ 	lw	$v1,0x10($s1)
/*  f0e6d10:	44d8f800 */ 	ctc1	$t8,$31
/*  f0e6d14:	44808000 */ 	mtc1	$zero,$f16
/*  f0e6d18:	c46a0040 */ 	lwc1	$f10,0x40($v1)
/*  f0e6d1c:	4610503c */ 	c.lt.s	$f10,$f16
/*  f0e6d20:	00000000 */ 	nop
/*  f0e6d24:	45020008 */ 	bc1fl	.L0f0e6d48
/*  f0e6d28:	9079003d */ 	lbu	$t9,0x3d($v1)
/*  f0e6d2c:	906a003c */ 	lbu	$t2,0x3c($v1)
/*  f0e6d30:	01550019 */ 	multu	$t2,$s5
/*  f0e6d34:	00006812 */ 	mflo	$t5
/*  f0e6d38:	02cd6021 */ 	addu	$t4,$s6,$t5
/*  f0e6d3c:	1000000e */ 	b	.L0f0e6d78
/*  f0e6d40:	8d870020 */ 	lw	$a3,0x20($t4)
/*  f0e6d44:	9079003d */ 	lbu	$t9,0x3d($v1)
.L0f0e6d48:
/*  f0e6d48:	9078003c */ 	lbu	$t8,0x3c($v1)
/*  f0e6d4c:	8c660044 */ 	lw	$a2,0x44($v1)
/*  f0e6d50:	03350019 */ 	multu	$t9,$s5
/*  f0e6d54:	00007012 */ 	mflo	$t6
/*  f0e6d58:	02ce7821 */ 	addu	$t7,$s6,$t6
/*  f0e6d5c:	8de40020 */ 	lw	$a0,0x20($t7)
/*  f0e6d60:	03150019 */ 	multu	$t8,$s5
/*  f0e6d64:	00005812 */ 	mflo	$t3
/*  f0e6d68:	02cb5021 */ 	addu	$t2,$s6,$t3
/*  f0e6d6c:	0fc01a40 */ 	jal	colourBlend
/*  f0e6d70:	8d450020 */ 	lw	$a1,0x20($t2)
/*  f0e6d74:	00403825 */ 	or	$a3,$v0,$zero
.L0f0e6d78:
/*  f0e6d78:	02002025 */ 	or	$a0,$s0,$zero
/*  f0e6d7c:	320500ff */ 	andi	$a1,$s0,0xff
/*  f0e6d80:	2406007f */ 	addiu	$a2,$zero,0x7f
/*  f0e6d84:	0fc01a40 */ 	jal	colourBlend
/*  f0e6d88:	afa700b0 */ 	sw	$a3,0xb0($sp)
/*  f0e6d8c:	8fa500b0 */ 	lw	$a1,0xb0($sp)
/*  f0e6d90:	00402025 */ 	or	$a0,$v0,$zero
/*  f0e6d94:	0fc01a40 */ 	jal	colourBlend
/*  f0e6d98:	8fa600ac */ 	lw	$a2,0xac($sp)
/*  f0e6d9c:	8e230010 */ 	lw	$v1,0x10($s1)
/*  f0e6da0:	44809000 */ 	mtc1	$zero,$f18
/*  f0e6da4:	00408025 */ 	or	$s0,$v0,$zero
/*  f0e6da8:	c4600040 */ 	lwc1	$f0,0x40($v1)
/*  f0e6dac:	4600903e */ 	c.le.s	$f18,$f0
/*  f0e6db0:	00000000 */ 	nop
/*  f0e6db4:	45020005 */ 	bc1fl	.L0f0e6dcc
/*  f0e6db8:	44802000 */ 	mtc1	$zero,$f4
/*  f0e6dbc:	906d003d */ 	lbu	$t5,0x3d($v1)
/*  f0e6dc0:	51a0000f */ 	beqzl	$t5,.L0f0e6e00
/*  f0e6dc4:	8e2e0008 */ 	lw	$t6,0x8($s1)
/*  f0e6dc8:	44802000 */ 	mtc1	$zero,$f4
.L0f0e6dcc:
/*  f0e6dcc:	00000000 */ 	nop
/*  f0e6dd0:	4604003c */ 	c.lt.s	$f0,$f4
/*  f0e6dd4:	00000000 */ 	nop
/*  f0e6dd8:	45000004 */ 	bc1f	.L0f0e6dec
/*  f0e6ddc:	00000000 */ 	nop
/*  f0e6de0:	906c003c */ 	lbu	$t4,0x3c($v1)
/*  f0e6de4:	51800006 */ 	beqzl	$t4,.L0f0e6e00
/*  f0e6de8:	8e2e0008 */ 	lw	$t6,0x8($s1)
.L0f0e6dec:
/*  f0e6dec:	0fc55809 */ 	jal	func0f156024
/*  f0e6df0:	24040001 */ 	addiu	$a0,$zero,0x1
/*  f0e6df4:	24190001 */ 	addiu	$t9,$zero,0x1
/*  f0e6df8:	afb900b4 */ 	sw	$t9,0xb4($sp)
/*  f0e6dfc:	8e2e0008 */ 	lw	$t6,0x8($s1)
.L0f0e6e00:
/*  f0e6e00:	8dcf0004 */ 	lw	$t7,0x4($t6)
/*  f0e6e04:	000fc280 */ 	sll	$t8,$t7,0xa
/*  f0e6e08:	07030116 */ 	bgezl	$t8,.L0f0e7264
/*  f0e6e0c:	afb3015c */ 	sw	$s3,0x15c($sp)
/*  f0e6e10:	86240000 */ 	lh	$a0,0x0($s1)
/*  f0e6e14:	8fb9016c */ 	lw	$t9,0x16c($sp)
/*  f0e6e18:	3c0d8007 */ 	lui	$t5,%hi(var800711a8)
/*  f0e6e1c:	afa40098 */ 	sw	$a0,0x98($sp)
/*  f0e6e20:	862a0002 */ 	lh	$t2,0x2($s1)
/*  f0e6e24:	8dad11a8 */ 	lw	$t5,%lo(var800711a8)($t5)
/*  f0e6e28:	8fb80098 */ 	lw	$t8,0x98($sp)
/*  f0e6e2c:	01542821 */ 	addu	$a1,$t2,$s4
/*  f0e6e30:	afa5009c */ 	sw	$a1,0x9c($sp)
/*  f0e6e34:	862c0004 */ 	lh	$t4,0x4($s1)
/*  f0e6e38:	afb000a4 */ 	sw	$s0,0xa4($sp)
/*  f0e6e3c:	afac00a0 */ 	sw	$t4,0xa0($sp)
/*  f0e6e40:	872e0002 */ 	lh	$t6,0x2($t9)
/*  f0e6e44:	008c1821 */ 	addu	$v1,$a0,$t4
/*  f0e6e48:	00ad6021 */ 	addu	$t4,$a1,$t5
/*  f0e6e4c:	026e7826 */ 	xor	$t7,$s3,$t6
/*  f0e6e50:	2def0001 */ 	sltiu	$t7,$t7,0x1
/*  f0e6e54:	a3af00a8 */ 	sb	$t7,0xa8($sp)
/*  f0e6e58:	afac0088 */ 	sw	$t4,0x88($sp)
/*  f0e6e5c:	86260002 */ 	lh	$a2,0x2($s1)
/*  f0e6e60:	27b90098 */ 	addiu	$t9,$sp,0x98
/*  f0e6e64:	00603825 */ 	or	$a3,$v1,$zero
/*  f0e6e68:	00a6082a */ 	slt	$at,$a1,$a2
/*  f0e6e6c:	afb90068 */ 	sw	$t9,0x68($sp)
/*  f0e6e70:	10200002 */ 	beqz	$at,.L0f0e6e7c
/*  f0e6e74:	93af00ed */ 	lbu	$t7,0xed($sp)
/*  f0e6e78:	00c02825 */ 	or	$a1,$a2,$zero
.L0f0e6e7c:
/*  f0e6e7c:	862e0006 */ 	lh	$t6,0x6($s1)
/*  f0e6e80:	8fb00088 */ 	lw	$s0,0x88($sp)
/*  f0e6e84:	00ce1021 */ 	addu	$v0,$a2,$t6
/*  f0e6e88:	2442ffff */ 	addiu	$v0,$v0,-1
/*  f0e6e8c:	0050082a */ 	slt	$at,$v0,$s0
/*  f0e6e90:	10200002 */ 	beqz	$at,.L0f0e6e9c
/*  f0e6e94:	00000000 */ 	nop
/*  f0e6e98:	00408025 */ 	or	$s0,$v0,$zero
.L0f0e6e9c:
/*  f0e6e9c:	11e00005 */ 	beqz	$t7,.L0f0e6eb4
/*  f0e6ea0:	24c2000b */ 	addiu	$v0,$a2,0xb
/*  f0e6ea4:	00a2082a */ 	slt	$at,$a1,$v0
/*  f0e6ea8:	10200002 */ 	beqz	$at,.L0f0e6eb4
/*  f0e6eac:	00000000 */ 	nop
/*  f0e6eb0:	00402825 */ 	or	$a1,$v0,$zero
.L0f0e6eb4:
/*  f0e6eb4:	07010002 */ 	bgez	$t8,.L0f0e6ec0
/*  f0e6eb8:	00000000 */ 	nop
/*  f0e6ebc:	00002025 */ 	or	$a0,$zero,$zero
.L0f0e6ec0:
/*  f0e6ec0:	04630003 */ 	bgezl	$v1,.L0f0e6ed0
/*  f0e6ec4:	afa40094 */ 	sw	$a0,0x94($sp)
/*  f0e6ec8:	00003825 */ 	or	$a3,$zero,$zero
/*  f0e6ecc:	afa40094 */ 	sw	$a0,0x94($sp)
.L0f0e6ed0:
/*  f0e6ed0:	afa50090 */ 	sw	$a1,0x90($sp)
/*  f0e6ed4:	0c002f02 */ 	jal	viGetX
/*  f0e6ed8:	afa7008c */ 	sw	$a3,0x8c($sp)
/*  f0e6edc:	3c0a8008 */ 	lui	$t2,%hi(g_ScreenWidthMultiplier)
/*  f0e6ee0:	8d4afac0 */ 	lw	$t2,%lo(g_ScreenWidthMultiplier)($t2)
/*  f0e6ee4:	8fa40094 */ 	lw	$a0,0x94($sp)
/*  f0e6ee8:	8fa50090 */ 	lw	$a1,0x90($sp)
/*  f0e6eec:	8fa7008c */ 	lw	$a3,0x8c($sp)
/*  f0e6ef0:	008a001a */ 	div	$zero,$a0,$t2
/*  f0e6ef4:	15400002 */ 	bnez	$t2,.L0f0e6f00
/*  f0e6ef8:	00000000 */ 	nop
/*  f0e6efc:	0007000d */ 	break	0x7
.L0f0e6f00:
/*  f0e6f00:	2401ffff */ 	addiu	$at,$zero,-1
/*  f0e6f04:	15410004 */ 	bne	$t2,$at,.L0f0e6f18
/*  f0e6f08:	3c018000 */ 	lui	$at,0x8000
/*  f0e6f0c:	14810002 */ 	bne	$a0,$at,.L0f0e6f18
/*  f0e6f10:	00000000 */ 	nop
/*  f0e6f14:	0006000d */ 	break	0x6
.L0f0e6f18:
/*  f0e6f18:	00006812 */ 	mflo	$t5
/*  f0e6f1c:	004d082a */ 	slt	$at,$v0,$t5
/*  f0e6f20:	50200014 */ 	beqzl	$at,.L0f0e6f74
/*  f0e6f24:	afa40094 */ 	sw	$a0,0x94($sp)
/*  f0e6f28:	afa50090 */ 	sw	$a1,0x90($sp)
/*  f0e6f2c:	0c002f02 */ 	jal	viGetX
/*  f0e6f30:	afa7008c */ 	sw	$a3,0x8c($sp)
/*  f0e6f34:	3c198008 */ 	lui	$t9,%hi(g_ScreenWidthMultiplier)
/*  f0e6f38:	8f39fac0 */ 	lw	$t9,%lo(g_ScreenWidthMultiplier)($t9)
/*  f0e6f3c:	8fa50090 */ 	lw	$a1,0x90($sp)
/*  f0e6f40:	8fa7008c */ 	lw	$a3,0x8c($sp)
/*  f0e6f44:	0059001a */ 	div	$zero,$v0,$t9
/*  f0e6f48:	00002012 */ 	mflo	$a0
/*  f0e6f4c:	17200002 */ 	bnez	$t9,.L0f0e6f58
/*  f0e6f50:	00000000 */ 	nop
/*  f0e6f54:	0007000d */ 	break	0x7
.L0f0e6f58:
/*  f0e6f58:	2401ffff */ 	addiu	$at,$zero,-1
/*  f0e6f5c:	17210004 */ 	bne	$t9,$at,.L0f0e6f70
/*  f0e6f60:	3c018000 */ 	lui	$at,0x8000
/*  f0e6f64:	14410002 */ 	bne	$v0,$at,.L0f0e6f70
/*  f0e6f68:	00000000 */ 	nop
/*  f0e6f6c:	0006000d */ 	break	0x6
.L0f0e6f70:
/*  f0e6f70:	afa40094 */ 	sw	$a0,0x94($sp)
.L0f0e6f74:
/*  f0e6f74:	afa50090 */ 	sw	$a1,0x90($sp)
/*  f0e6f78:	0c002f02 */ 	jal	viGetX
/*  f0e6f7c:	afa7008c */ 	sw	$a3,0x8c($sp)
/*  f0e6f80:	3c0b8008 */ 	lui	$t3,%hi(g_ScreenWidthMultiplier)
/*  f0e6f84:	8d6bfac0 */ 	lw	$t3,%lo(g_ScreenWidthMultiplier)($t3)
/*  f0e6f88:	8fa7008c */ 	lw	$a3,0x8c($sp)
/*  f0e6f8c:	8fa40094 */ 	lw	$a0,0x94($sp)
/*  f0e6f90:	8fa50090 */ 	lw	$a1,0x90($sp)
/*  f0e6f94:	00eb001a */ 	div	$zero,$a3,$t3
/*  f0e6f98:	15600002 */ 	bnez	$t3,.L0f0e6fa4
/*  f0e6f9c:	00000000 */ 	nop
/*  f0e6fa0:	0007000d */ 	break	0x7
.L0f0e6fa4:
/*  f0e6fa4:	2401ffff */ 	addiu	$at,$zero,-1
/*  f0e6fa8:	15610004 */ 	bne	$t3,$at,.L0f0e6fbc
/*  f0e6fac:	3c018000 */ 	lui	$at,0x8000
/*  f0e6fb0:	14e10002 */ 	bne	$a3,$at,.L0f0e6fbc
/*  f0e6fb4:	00000000 */ 	nop
/*  f0e6fb8:	0006000d */ 	break	0x6
.L0f0e6fbc:
/*  f0e6fbc:	00006012 */ 	mflo	$t4
/*  f0e6fc0:	004c082a */ 	slt	$at,$v0,$t4
/*  f0e6fc4:	50200014 */ 	beqzl	$at,.L0f0e7018
/*  f0e6fc8:	02401025 */ 	or	$v0,$s2,$zero
/*  f0e6fcc:	afa40094 */ 	sw	$a0,0x94($sp)
/*  f0e6fd0:	0c002f02 */ 	jal	viGetX
/*  f0e6fd4:	afa50090 */ 	sw	$a1,0x90($sp)
/*  f0e6fd8:	3c0e8008 */ 	lui	$t6,%hi(g_ScreenWidthMultiplier)
/*  f0e6fdc:	8dcefac0 */ 	lw	$t6,%lo(g_ScreenWidthMultiplier)($t6)
/*  f0e6fe0:	8fa40094 */ 	lw	$a0,0x94($sp)
/*  f0e6fe4:	8fa50090 */ 	lw	$a1,0x90($sp)
/*  f0e6fe8:	004e001a */ 	div	$zero,$v0,$t6
/*  f0e6fec:	00003812 */ 	mflo	$a3
/*  f0e6ff0:	15c00002 */ 	bnez	$t6,.L0f0e6ffc
/*  f0e6ff4:	00000000 */ 	nop
/*  f0e6ff8:	0007000d */ 	break	0x7
.L0f0e6ffc:
/*  f0e6ffc:	2401ffff */ 	addiu	$at,$zero,-1
/*  f0e7000:	15c10004 */ 	bne	$t6,$at,.L0f0e7014
/*  f0e7004:	3c018000 */ 	lui	$at,0x8000
/*  f0e7008:	14410002 */ 	bne	$v0,$at,.L0f0e7014
/*  f0e700c:	00000000 */ 	nop
/*  f0e7010:	0006000d */ 	break	0x6
.L0f0e7014:
/*  f0e7014:	02401025 */ 	or	$v0,$s2,$zero
.L0f0e7018:
/*  f0e7018:	3c0fe700 */ 	lui	$t7,0xe700
/*  f0e701c:	ac4f0000 */ 	sw	$t7,0x0($v0)
/*  f0e7020:	ac400004 */ 	sw	$zero,0x4($v0)
/*  f0e7024:	3c038008 */ 	lui	$v1,%hi(g_ScreenWidthMultiplier)
/*  f0e7028:	8c63fac0 */ 	lw	$v1,%lo(g_ScreenWidthMultiplier)($v1)
/*  f0e702c:	3c068007 */ 	lui	$a2,%hi(var80071190)
/*  f0e7030:	24c61190 */ 	addiu	$a2,$a2,%lo(var80071190)
/*  f0e7034:	00830019 */ 	multu	$a0,$v1
/*  f0e7038:	3c018007 */ 	lui	$at,%hi(var80071198)
/*  f0e703c:	26520008 */ 	addiu	$s2,$s2,0x8
/*  f0e7040:	3c0b8007 */ 	lui	$t3,%hi(var80071198)
/*  f0e7044:	0000c012 */ 	mflo	$t8
/*  f0e7048:	acd80000 */ 	sw	$t8,0x0($a2)
/*  f0e704c:	00000000 */ 	nop
/*  f0e7050:	00e30019 */ 	multu	$a3,$v1
/*  f0e7054:	00005012 */ 	mflo	$t2
/*  f0e7058:	aeea0000 */ 	sw	$t2,0x0($s7)
/*  f0e705c:	ac251198 */ 	sw	$a1,%lo(var80071198)($at)
/*  f0e7060:	8ccd0000 */ 	lw	$t5,0x0($a2)
/*  f0e7064:	afd00000 */ 	sw	$s0,0x0($s8)
/*  f0e7068:	3c018007 */ 	lui	$at,%hi(var80071190)
/*  f0e706c:	05a30003 */ 	bgezl	$t5,.L0f0e707c
/*  f0e7070:	8ef90000 */ 	lw	$t9,0x0($s7)
/*  f0e7074:	ac201190 */ 	sw	$zero,%lo(var80071190)($at)
/*  f0e7078:	8ef90000 */ 	lw	$t9,0x0($s7)
.L0f0e707c:
/*  f0e707c:	3c018007 */ 	lui	$at,%hi(var80071198)
/*  f0e7080:	07210002 */ 	bgez	$t9,.L0f0e708c
/*  f0e7084:	00000000 */ 	nop
/*  f0e7088:	aee00000 */ 	sw	$zero,0x0($s7)
.L0f0e708c:
/*  f0e708c:	8d6b1198 */ 	lw	$t3,%lo(var80071198)($t3)
/*  f0e7090:	05630003 */ 	bgezl	$t3,.L0f0e70a0
/*  f0e7094:	8fcc0000 */ 	lw	$t4,0x0($s8)
/*  f0e7098:	ac201198 */ 	sw	$zero,%lo(var80071198)($at)
/*  f0e709c:	8fcc0000 */ 	lw	$t4,0x0($s8)
.L0f0e70a0:
/*  f0e70a0:	05810002 */ 	bgez	$t4,.L0f0e70ac
/*  f0e70a4:	00000000 */ 	nop
/*  f0e70a8:	afc00000 */ 	sw	$zero,0x0($s8)
.L0f0e70ac:
/*  f0e70ac:	0c002ef1 */ 	jal	viGetBufX
/*  f0e70b0:	00000000 */ 	nop
/*  f0e70b4:	3c0e8007 */ 	lui	$t6,%hi(var80071190)
/*  f0e70b8:	8dce1190 */ 	lw	$t6,%lo(var80071190)($t6)
/*  f0e70bc:	004e082a */ 	slt	$at,$v0,$t6
/*  f0e70c0:	10200005 */ 	beqz	$at,.L0f0e70d8
/*  f0e70c4:	00000000 */ 	nop
/*  f0e70c8:	0c002ef1 */ 	jal	viGetBufX
/*  f0e70cc:	00000000 */ 	nop
/*  f0e70d0:	3c018007 */ 	lui	$at,%hi(var80071190)
/*  f0e70d4:	ac221190 */ 	sw	$v0,%lo(var80071190)($at)
.L0f0e70d8:
/*  f0e70d8:	0c002ef1 */ 	jal	viGetBufX
/*  f0e70dc:	00000000 */ 	nop
/*  f0e70e0:	8eef0000 */ 	lw	$t7,0x0($s7)
/*  f0e70e4:	004f082a */ 	slt	$at,$v0,$t7
/*  f0e70e8:	10200004 */ 	beqz	$at,.L0f0e70fc
/*  f0e70ec:	00000000 */ 	nop
/*  f0e70f0:	0c002ef1 */ 	jal	viGetBufX
/*  f0e70f4:	00000000 */ 	nop
/*  f0e70f8:	aee20000 */ 	sw	$v0,0x0($s7)
.L0f0e70fc:
/*  f0e70fc:	0c002ef5 */ 	jal	viGetBufY
/*  f0e7100:	00000000 */ 	nop
/*  f0e7104:	3c188007 */ 	lui	$t8,%hi(var80071198)
/*  f0e7108:	8f181198 */ 	lw	$t8,%lo(var80071198)($t8)
/*  f0e710c:	0058082a */ 	slt	$at,$v0,$t8
/*  f0e7110:	10200005 */ 	beqz	$at,.L0f0e7128
/*  f0e7114:	00000000 */ 	nop
/*  f0e7118:	0c002ef5 */ 	jal	viGetBufY
/*  f0e711c:	00000000 */ 	nop
/*  f0e7120:	3c018007 */ 	lui	$at,%hi(var80071198)
/*  f0e7124:	ac221198 */ 	sw	$v0,%lo(var80071198)($at)
.L0f0e7128:
/*  f0e7128:	0c002ef5 */ 	jal	viGetBufY
/*  f0e712c:	00000000 */ 	nop
/*  f0e7130:	8fc30000 */ 	lw	$v1,0x0($s8)
/*  f0e7134:	0043082a */ 	slt	$at,$v0,$v1
/*  f0e7138:	10200005 */ 	beqz	$at,.L0f0e7150
/*  f0e713c:	00000000 */ 	nop
/*  f0e7140:	0c002ef5 */ 	jal	viGetBufY
/*  f0e7144:	00000000 */ 	nop
/*  f0e7148:	afc20000 */ 	sw	$v0,0x0($s8)
/*  f0e714c:	00401825 */ 	or	$v1,$v0,$zero
.L0f0e7150:
/*  f0e7150:	3c098007 */ 	lui	$t1,%hi(var80071190)
/*  f0e7154:	8d291190 */ 	lw	$t1,%lo(var80071190)($t1)
/*  f0e7158:	8eea0000 */ 	lw	$t2,0x0($s7)
/*  f0e715c:	3c088007 */ 	lui	$t0,%hi(var80071198)
/*  f0e7160:	44893000 */ 	mtc1	$t1,$f6
/*  f0e7164:	0149082a */ 	slt	$at,$t2,$t1
/*  f0e7168:	10200002 */ 	beqz	$at,.L0f0e7174
/*  f0e716c:	46803220 */ 	cvt.s.w	$f8,$f6
/*  f0e7170:	aee90000 */ 	sw	$t1,0x0($s7)
.L0f0e7174:
/*  f0e7174:	8d081198 */ 	lw	$t0,%lo(var80071198)($t0)
/*  f0e7178:	0068082a */ 	slt	$at,$v1,$t0
/*  f0e717c:	50200003 */ 	beqzl	$at,.L0f0e718c
/*  f0e7180:	44889000 */ 	mtc1	$t0,$f18
/*  f0e7184:	afc80000 */ 	sw	$t0,0x0($s8)
/*  f0e7188:	44889000 */ 	mtc1	$t0,$f18
.L0f0e718c:
/*  f0e718c:	3c014080 */ 	lui	$at,0x4080
/*  f0e7190:	44810000 */ 	mtc1	$at,$f0
/*  f0e7194:	46809120 */ 	cvt.s.w	$f4,$f18
/*  f0e7198:	3c01ed00 */ 	lui	$at,0xed00
/*  f0e719c:	46004282 */ 	mul.s	$f10,$f8,$f0
/*  f0e71a0:	02401025 */ 	or	$v0,$s2,$zero
/*  f0e71a4:	26520008 */ 	addiu	$s2,$s2,0x8
/*  f0e71a8:	24040013 */ 	addiu	$a0,$zero,0x13
/*  f0e71ac:	46002182 */ 	mul.s	$f6,$f4,$f0
/*  f0e71b0:	27a600b8 */ 	addiu	$a2,$sp,0xb8
/*  f0e71b4:	4600540d */ 	trunc.w.s	$f16,$f10
/*  f0e71b8:	4600320d */ 	trunc.w.s	$f8,$f6
/*  f0e71bc:	44198000 */ 	mfc1	$t9,$f16
/*  f0e71c0:	44184000 */ 	mfc1	$t8,$f8
/*  f0e71c4:	332b0fff */ 	andi	$t3,$t9,0xfff
/*  f0e71c8:	000b6300 */ 	sll	$t4,$t3,0xc
/*  f0e71cc:	01817025 */ 	or	$t6,$t4,$at
/*  f0e71d0:	330a0fff */ 	andi	$t2,$t8,0xfff
/*  f0e71d4:	01ca6825 */ 	or	$t5,$t6,$t2
/*  f0e71d8:	ac4d0000 */ 	sw	$t5,0x0($v0)
/*  f0e71dc:	8ef90000 */ 	lw	$t9,0x0($s7)
/*  f0e71e0:	8fce0000 */ 	lw	$t6,0x0($s8)
/*  f0e71e4:	44995000 */ 	mtc1	$t9,$f10
/*  f0e71e8:	448e3000 */ 	mtc1	$t6,$f6
/*  f0e71ec:	46805420 */ 	cvt.s.w	$f16,$f10
/*  f0e71f0:	46803220 */ 	cvt.s.w	$f8,$f6
/*  f0e71f4:	46008482 */ 	mul.s	$f18,$f16,$f0
/*  f0e71f8:	00000000 */ 	nop
/*  f0e71fc:	46004282 */ 	mul.s	$f10,$f8,$f0
/*  f0e7200:	4600910d */ 	trunc.w.s	$f4,$f18
/*  f0e7204:	4600540d */ 	trunc.w.s	$f16,$f10
/*  f0e7208:	440c2000 */ 	mfc1	$t4,$f4
/*  f0e720c:	440d8000 */ 	mfc1	$t5,$f16
/*  f0e7210:	318f0fff */ 	andi	$t7,$t4,0xfff
/*  f0e7214:	000fc300 */ 	sll	$t8,$t7,0xc
/*  f0e7218:	31b90fff */ 	andi	$t9,$t5,0xfff
/*  f0e721c:	03195825 */ 	or	$t3,$t8,$t9
/*  f0e7220:	ac4b0004 */ 	sw	$t3,0x4($v0)
/*  f0e7224:	8fac0068 */ 	lw	$t4,0x68($sp)
/*  f0e7228:	8faf0160 */ 	lw	$t7,0x160($sp)
/*  f0e722c:	afb200b8 */ 	sw	$s2,0xb8($sp)
/*  f0e7230:	afb300bc */ 	sw	$s3,0xbc($sp)
/*  f0e7234:	afac00c0 */ 	sw	$t4,0xc0($sp)
/*  f0e7238:	afaf00c4 */ 	sw	$t7,0xc4($sp)
/*  f0e723c:	8e270008 */ 	lw	$a3,0x8($s1)
/*  f0e7240:	8cf90010 */ 	lw	$t9,0x10($a3)
/*  f0e7244:	00e02825 */ 	or	$a1,$a3,$zero
/*  f0e7248:	0320f809 */ 	jalr	$t9
/*  f0e724c:	00000000 */ 	nop
/*  f0e7250:	8fae00c4 */ 	lw	$t6,0xc4($sp)
/*  f0e7254:	00409025 */ 	or	$s2,$v0,$zero
/*  f0e7258:	10000058 */ 	b	.L0f0e73bc
/*  f0e725c:	afae0160 */ 	sw	$t6,0x160($sp)
/*  f0e7260:	afb3015c */ 	sw	$s3,0x15c($sp)
.L0f0e7264:
/*  f0e7264:	8e270008 */ 	lw	$a3,0x8($s1)
/*  f0e7268:	afa00128 */ 	sw	$zero,0x128($sp)
/*  f0e726c:	24040003 */ 	addiu	$a0,$zero,0x3
/*  f0e7270:	8cf90010 */ 	lw	$t9,0x10($a3)
/*  f0e7274:	27a6015c */ 	addiu	$a2,$sp,0x15c
/*  f0e7278:	00004025 */ 	or	$t0,$zero,$zero
/*  f0e727c:	0320f809 */ 	jalr	$t9
/*  f0e7280:	00e02825 */ 	or	$a1,$a3,$zero
/*  f0e7284:	862a0002 */ 	lh	$t2,0x2($s1)
/*  f0e7288:	2401000c */ 	addiu	$at,$zero,0xc
/*  f0e728c:	8fa80128 */ 	lw	$t0,0x128($sp)
/*  f0e7290:	01546821 */ 	addu	$t5,$t2,$s4
/*  f0e7294:	25b80001 */ 	addiu	$t8,$t5,0x1
/*  f0e7298:	afb8012c */ 	sw	$t8,0x12c($sp)
/*  f0e729c:	8e2b0008 */ 	lw	$t3,0x8($s1)
/*  f0e72a0:	00403825 */ 	or	$a3,$v0,$zero
/*  f0e72a4:	8fac011c */ 	lw	$t4,0x11c($sp)
/*  f0e72a8:	91630000 */ 	lbu	$v1,0x0($t3)
/*  f0e72ac:	02402025 */ 	or	$a0,$s2,$zero
/*  f0e72b0:	27a50130 */ 	addiu	$a1,$sp,0x130
/*  f0e72b4:	10610004 */ 	beq	$v1,$at,.L0f0e72c8
/*  f0e72b8:	27a6012c */ 	addiu	$a2,$sp,0x12c
/*  f0e72bc:	2401000f */ 	addiu	$at,$zero,0xf
/*  f0e72c0:	14610003 */ 	bne	$v1,$at,.L0f0e72d0
/*  f0e72c4:	8faf011c */ 	lw	$t7,0x11c($sp)
.L0f0e72c8:
/*  f0e72c8:	10000003 */ 	b	.L0f0e72d8
/*  f0e72cc:	afac0130 */ 	sw	$t4,0x130($sp)
.L0f0e72d0:
/*  f0e72d0:	25ee0008 */ 	addiu	$t6,$t7,0x8
/*  f0e72d4:	afae0130 */ 	sw	$t6,0x130($sp)
.L0f0e72d8:
/*  f0e72d8:	8fa2012c */ 	lw	$v0,0x12c($sp)
/*  f0e72dc:	8fb90104 */ 	lw	$t9,0x104($sp)
/*  f0e72e0:	0059082a */ 	slt	$at,$v0,$t9
/*  f0e72e4:	50200004 */ 	beqzl	$at,.L0f0e72f8
/*  f0e72e8:	862a0002 */ 	lh	$t2,0x2($s1)
/*  f0e72ec:	00594023 */ 	subu	$t0,$v0,$t9
/*  f0e72f0:	afb9012c */ 	sw	$t9,0x12c($sp)
/*  f0e72f4:	862a0002 */ 	lh	$t2,0x2($s1)
.L0f0e72f8:
/*  f0e72f8:	862d0006 */ 	lh	$t5,0x6($s1)
/*  f0e72fc:	8fab012c */ 	lw	$t3,0x12c($sp)
/*  f0e7300:	8fac00e8 */ 	lw	$t4,0xe8($sp)
/*  f0e7304:	014dc021 */ 	addu	$t8,$t2,$t5
/*  f0e7308:	030b1823 */ 	subu	$v1,$t8,$t3
/*  f0e730c:	04630003 */ 	bgezl	$v1,.L0f0e731c
/*  f0e7310:	8faf00f4 */ 	lw	$t7,0xf4($sp)
/*  f0e7314:	00001825 */ 	or	$v1,$zero,$zero
/*  f0e7318:	8faf00f4 */ 	lw	$t7,0xf4($sp)
.L0f0e731c:
/*  f0e731c:	afac0010 */ 	sw	$t4,0x10($sp)
/*  f0e7320:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f0e7324:	afaf0014 */ 	sw	$t7,0x14($sp)
/*  f0e7328:	862e0004 */ 	lh	$t6,0x4($s1)
/*  f0e732c:	8fb9011c */ 	lw	$t9,0x11c($sp)
/*  f0e7330:	862d0000 */ 	lh	$t5,0x0($s1)
/*  f0e7334:	afa00028 */ 	sw	$zero,0x28($sp)
/*  f0e7338:	01d95023 */ 	subu	$t2,$t6,$t9
/*  f0e733c:	014dc021 */ 	addu	$t8,$t2,$t5
/*  f0e7340:	afb8001c */ 	sw	$t8,0x1c($sp)
/*  f0e7344:	afa80024 */ 	sw	$t0,0x24($sp)
/*  f0e7348:	0fc5580f */ 	jal	textRenderWhite
/*  f0e734c:	afa30020 */ 	sw	$v1,0x20($sp)
/*  f0e7350:	240b00ff */ 	addiu	$t3,$zero,0xff
/*  f0e7354:	afb300b8 */ 	sw	$s3,0xb8($sp)
/*  f0e7358:	afab00bc */ 	sw	$t3,0xbc($sp)
/*  f0e735c:	8e270008 */ 	lw	$a3,0x8($s1)
/*  f0e7360:	00409025 */ 	or	$s2,$v0,$zero
/*  f0e7364:	2404000e */ 	addiu	$a0,$zero,0xe
/*  f0e7368:	8cf90010 */ 	lw	$t9,0x10($a3)
/*  f0e736c:	27a600b8 */ 	addiu	$a2,$sp,0xb8
/*  f0e7370:	00e02825 */ 	or	$a1,$a3,$zero
/*  f0e7374:	0320f809 */ 	jalr	$t9
/*  f0e7378:	00000000 */ 	nop
/*  f0e737c:	8fac00bc */ 	lw	$t4,0xbc($sp)
/*  f0e7380:	240100ff */ 	addiu	$at,$zero,0xff
/*  f0e7384:	02402025 */ 	or	$a0,$s2,$zero
/*  f0e7388:	1181000c */ 	beq	$t4,$at,.L0f0e73bc
/*  f0e738c:	8fa5011c */ 	lw	$a1,0x11c($sp)
/*  f0e7390:	862f0002 */ 	lh	$t7,0x2($s1)
/*  f0e7394:	3c0eff00 */ 	lui	$t6,0xff00
/*  f0e7398:	35ce007f */ 	ori	$t6,$t6,0x7f
/*  f0e739c:	01f43021 */ 	addu	$a2,$t7,$s4
/*  f0e73a0:	24c60001 */ 	addiu	$a2,$a2,0x1
/*  f0e73a4:	afae0018 */ 	sw	$t6,0x18($sp)
/*  f0e73a8:	afb00014 */ 	sw	$s0,0x14($sp)
/*  f0e73ac:	afac0010 */ 	sw	$t4,0x10($sp)
/*  f0e73b0:	0fc38dec */ 	jal	renderCheckbox
/*  f0e73b4:	24070006 */ 	addiu	$a3,$zero,0x6
/*  f0e73b8:	00409025 */ 	or	$s2,$v0,$zero
.L0f0e73bc:
/*  f0e73bc:	8faa00b4 */ 	lw	$t2,0xb4($sp)
/*  f0e73c0:	51400004 */ 	beqzl	$t2,.L0f0e73d4
/*  f0e73c4:	8fb80108 */ 	lw	$t8,0x108($sp)
/*  f0e73c8:	0fc55809 */ 	jal	func0f156024
/*  f0e73cc:	00002025 */ 	or	$a0,$zero,$zero
/*  f0e73d0:	8fb80108 */ 	lw	$t8,0x108($sp)
.L0f0e73d4:
/*  f0e73d4:	3c0d8007 */ 	lui	$t5,%hi(var800711a8)
/*  f0e73d8:	8dad11a8 */ 	lw	$t5,%lo(var800711a8)($t5)
/*  f0e73dc:	26730001 */ 	addiu	$s3,$s3,0x1
/*  f0e73e0:	0278082a */ 	slt	$at,$s3,$t8
/*  f0e73e4:	14200003 */ 	bnez	$at,.L0f0e73f4
/*  f0e73e8:	028da021 */ 	addu	$s4,$s4,$t5
/*  f0e73ec:	240b0001 */ 	addiu	$t3,$zero,0x1
/*  f0e73f0:	afab0120 */ 	sw	$t3,0x120($sp)
.L0f0e73f4:
/*  f0e73f4:	86390006 */ 	lh	$t9,0x6($s1)
/*  f0e73f8:	240f0001 */ 	addiu	$t7,$zero,0x1
/*  f0e73fc:	0334082a */ 	slt	$at,$t9,$s4
/*  f0e7400:	50200003 */ 	beqzl	$at,.L0f0e7410
/*  f0e7404:	8fac0120 */ 	lw	$t4,0x120($sp)
/*  f0e7408:	afaf0120 */ 	sw	$t7,0x120($sp)
/*  f0e740c:	8fac0120 */ 	lw	$t4,0x120($sp)
.L0f0e7410:
/*  f0e7410:	5180fd95 */ 	beqzl	$t4,.L0f0e6a68
/*  f0e7414:	8e230010 */ 	lw	$v1,0x10($s1)
/*  f0e7418:	0fc3d43f */ 	jal	func0f0f50fc
/*  f0e741c:	02402025 */ 	or	$a0,$s2,$zero
/*  f0e7420:	10000051 */ 	b	.L0f0e7568
/*  f0e7424:	00409025 */ 	or	$s2,$v0,$zero
.L0f0e7428:
/*  f0e7428:	8e230010 */ 	lw	$v1,0x10($s1)
/*  f0e742c:	44802000 */ 	mtc1	$zero,$f4
/*  f0e7430:	c4720040 */ 	lwc1	$f18,0x40($v1)
/*  f0e7434:	4604903c */ 	c.lt.s	$f18,$f4
/*  f0e7438:	00000000 */ 	nop
/*  f0e743c:	4502000b */ 	bc1fl	.L0f0e746c
/*  f0e7440:	9078003d */ 	lbu	$t8,0x3d($v1)
/*  f0e7444:	906e003c */ 	lbu	$t6,0x3c($v1)
/*  f0e7448:	2415003c */ 	addiu	$s5,$zero,0x3c
/*  f0e744c:	3c167f1b */ 	lui	$s6,%hi(g_MenuColourPalettes)
/*  f0e7450:	01d50019 */ 	multu	$t6,$s5
/*  f0e7454:	26d61fb0 */ 	addiu	$s6,$s6,%lo(g_MenuColourPalettes)
/*  f0e7458:	00005012 */ 	mflo	$t2
/*  f0e745c:	02ca6821 */ 	addu	$t5,$s6,$t2
/*  f0e7460:	10000012 */ 	b	.L0f0e74ac
/*  f0e7464:	8db00018 */ 	lw	$s0,0x18($t5)
/*  f0e7468:	9078003d */ 	lbu	$t8,0x3d($v1)
.L0f0e746c:
/*  f0e746c:	2415003c */ 	addiu	$s5,$zero,0x3c
/*  f0e7470:	906f003c */ 	lbu	$t7,0x3c($v1)
/*  f0e7474:	03150019 */ 	multu	$t8,$s5
/*  f0e7478:	3c167f1b */ 	lui	$s6,%hi(g_MenuColourPalettes)
/*  f0e747c:	26d61fb0 */ 	addiu	$s6,$s6,%lo(g_MenuColourPalettes)
/*  f0e7480:	8c660044 */ 	lw	$a2,0x44($v1)
/*  f0e7484:	00005812 */ 	mflo	$t3
/*  f0e7488:	02cbc821 */ 	addu	$t9,$s6,$t3
/*  f0e748c:	8f240018 */ 	lw	$a0,0x18($t9)
/*  f0e7490:	01f50019 */ 	multu	$t7,$s5
/*  f0e7494:	00006012 */ 	mflo	$t4
/*  f0e7498:	02cc7021 */ 	addu	$t6,$s6,$t4
/*  f0e749c:	0fc01a40 */ 	jal	colourBlend
/*  f0e74a0:	8dc50018 */ 	lw	$a1,0x18($t6)
/*  f0e74a4:	00408025 */ 	or	$s0,$v0,$zero
/*  f0e74a8:	8e230010 */ 	lw	$v1,0x10($s1)
.L0f0e74ac:
/*  f0e74ac:	8c6a000c */ 	lw	$t2,0xc($v1)
/*  f0e74b0:	02002025 */ 	or	$a0,$s0,$zero
/*  f0e74b4:	00002825 */ 	or	$a1,$zero,$zero
/*  f0e74b8:	51400008 */ 	beqzl	$t2,.L0f0e74dc
/*  f0e74bc:	8fab011c */ 	lw	$t3,0x11c($sp)
/*  f0e74c0:	0fc01a40 */ 	jal	colourBlend
/*  f0e74c4:	2406007f */ 	addiu	$a2,$zero,0x7f
/*  f0e74c8:	2401ff00 */ 	addiu	$at,$zero,-256
/*  f0e74cc:	00416824 */ 	and	$t5,$v0,$at
/*  f0e74d0:	321800ff */ 	andi	$t8,$s0,0xff
/*  f0e74d4:	01b88025 */ 	or	$s0,$t5,$t8
/*  f0e74d8:	8fab011c */ 	lw	$t3,0x11c($sp)
.L0f0e74dc:
/*  f0e74dc:	24045739 */ 	addiu	$a0,$zero,0x5739
/*  f0e74e0:	25790008 */ 	addiu	$t9,$t3,0x8
/*  f0e74e4:	afb90130 */ 	sw	$t9,0x130($sp)
/*  f0e74e8:	862c0006 */ 	lh	$t4,0x6($s1)
/*  f0e74ec:	862f0002 */ 	lh	$t7,0x2($s1)
/*  f0e74f0:	05810003 */ 	bgez	$t4,.L0f0e7500
/*  f0e74f4:	000c7043 */ 	sra	$t6,$t4,0x1
/*  f0e74f8:	25810001 */ 	addiu	$at,$t4,0x1
/*  f0e74fc:	00017043 */ 	sra	$t6,$at,0x1
.L0f0e7500:
/*  f0e7500:	01ee5021 */ 	addu	$t2,$t7,$t6
/*  f0e7504:	0fc5b9f1 */ 	jal	langGet
/*  f0e7508:	afaa012c */ 	sw	$t2,0x12c($sp)
/*  f0e750c:	0c002f06 */ 	jal	viGetY
/*  f0e7510:	00409825 */ 	or	$s3,$v0,$zero
/*  f0e7514:	8fad00e8 */ 	lw	$t5,0xe8($sp)
/*  f0e7518:	8fb800f4 */ 	lw	$t8,0xf4($sp)
/*  f0e751c:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f0e7520:	afad0010 */ 	sw	$t5,0x10($sp)
/*  f0e7524:	afb80014 */ 	sw	$t8,0x14($sp)
/*  f0e7528:	862b0004 */ 	lh	$t3,0x4($s1)
/*  f0e752c:	8fb9011c */ 	lw	$t9,0x11c($sp)
/*  f0e7530:	862f0000 */ 	lh	$t7,0x0($s1)
/*  f0e7534:	8fa80128 */ 	lw	$t0,0x128($sp)
/*  f0e7538:	01796023 */ 	subu	$t4,$t3,$t9
/*  f0e753c:	018f7021 */ 	addu	$t6,$t4,$t7
/*  f0e7540:	afae001c */ 	sw	$t6,0x1c($sp)
/*  f0e7544:	afa00028 */ 	sw	$zero,0x28($sp)
/*  f0e7548:	afa20020 */ 	sw	$v0,0x20($sp)
/*  f0e754c:	02402025 */ 	or	$a0,$s2,$zero
/*  f0e7550:	27a50130 */ 	addiu	$a1,$sp,0x130
/*  f0e7554:	27a6012c */ 	addiu	$a2,$sp,0x12c
/*  f0e7558:	02603825 */ 	or	$a3,$s3,$zero
/*  f0e755c:	0fc5580f */ 	jal	textRenderWhite
/*  f0e7560:	afa80024 */ 	sw	$t0,0x24($sp)
/*  f0e7564:	00409025 */ 	or	$s2,$v0,$zero
.L0f0e7568:
/*  f0e7568:	0fc54de0 */ 	jal	func0f153780
/*  f0e756c:	02402025 */ 	or	$a0,$s2,$zero
.L0f0e7570:
/*  f0e7570:	8fbf005c */ 	lw	$ra,0x5c($sp)
/*  f0e7574:	8fb00038 */ 	lw	$s0,0x38($sp)
/*  f0e7578:	8fb1003c */ 	lw	$s1,0x3c($sp)
/*  f0e757c:	8fb20040 */ 	lw	$s2,0x40($sp)
/*  f0e7580:	8fb30044 */ 	lw	$s3,0x44($sp)
/*  f0e7584:	8fb40048 */ 	lw	$s4,0x48($sp)
/*  f0e7588:	8fb5004c */ 	lw	$s5,0x4c($sp)
/*  f0e758c:	8fb60050 */ 	lw	$s6,0x50($sp)
/*  f0e7590:	8fb70054 */ 	lw	$s7,0x54($sp)
/*  f0e7594:	8fbe0058 */ 	lw	$s8,0x58($sp)
/*  f0e7598:	03e00008 */ 	jr	$ra
/*  f0e759c:	27bd0170 */ 	addiu	$sp,$sp,0x170
);

bool menuTickItemList(struct menuitem *item, struct menuinputs *inputs, u32 arg2, union menuitemtickdata *data)
{
	f32 f0;
	union handlerdata handlerdata;
	union handlerdata handlerdata2;
	s16 min;
	s16 max;
	s32 tmp;
	s32 i;
	u32 last;
	s16 prev2;
	s16 prev;

	if (item->handler == NULL) {
		return true;
	}

	if (item->param1 & 0x00200000) {
		item->handler(MENUOP_20, item, &handlerdata2);
		var800711a8 = handlerdata2.list.value;
	} else {
		var800711a8 = 11;
	}

	if (item->type == MENUITEMTYPE_DROPDOWN || item->type == MENUITEMTYPE_PLAYERSTATS) {
		min = data->list.unk06 / 2;
		min = min / (s32)var800711a8;
		min *= (s32)var800711a8;

		data->list.unk04 = func0f0e5ef8(data->list.unk02, item);

		if (data->list.unk04 < min) {
			data->list.unk04 = min;
		}

		item->handler(MENUOP_GETOPTIONCOUNT, item, &handlerdata);

		max = handlerdata.list2.unk02 * (s32)var800711a8 - data->list.unk06 + min;

		if (data->list.unk04 > max) {
			data->list.unk04 = max;
		}
	}

	if (data->list.unk00 != data->list.unk04) {
		f0 = data->list.unk00;
		prev = data->list.unk00;

		for (i = 0; i < g_Vars.diffframe60; i++) {
			f0 = data->list.unk04 * 0.35f + 0.65f * f0;
		}

		data->list.unk00 = f0;

		if (data->list.unk00 != data->list.unk04 && prev == data->list.unk00) {
			if (data->list.unk00 < data->list.unk04) {
				data->list.unk00++;
			} else {
				data->list.unk00--;
			}
		}
	}

	if (arg2 & 2) {
		item->handler(MENUOP_GETOPTIONCOUNT, item, &handlerdata);

		if (handlerdata.list.value) {
			last = handlerdata.list.value - 1;

			if (data->list.unk02 > last) {
				data->list.unk02 = last;
				data->list.unk04 = func0f0e5ef8(data->list.unk02, item);
			}

			if (inputs->updown) {
				prev2 = data->list.unk02;
				data->list.unk02 += inputs->updown;

				if (data->list.unk02 < 0) {
					data->list.unk02 = handlerdata.list.value - 1;
				}

				if (data->list.unk02 >= (s16)handlerdata.list.value) {
					data->list.unk02 = 0;
				}

				data->list.unk04 = func0f0e5ef8(data->list.unk02, item);

				if (prev2 != data->list.unk02) {
					handlerdata.list.value = data->list.unk02;
					item->handler(MENUOP_16, item, &handlerdata);

					menuPlaySound(MENUSOUND_SUBFOCUS);
				}
			}

			if (inputs->select) {
				handlerdata.list.value = data->list.unk02;
				handlerdata.list.unk04 = 0;

				if (inputs->start) {
					handlerdata.list.unk04 = 1;
				}

				item->handler(MENUOP_SET, item, &handlerdata);

				menuPlaySound(MENUSOUND_SELECT);

				if (handlerdata.list.unk04 == 2) {
					inputs->start = false;
				}
			}

			inputs->updown = false;
		}
	}

	tmp = data->list.unk02;
	handlerdata.list.value = tmp;
	handlerdata.list.unk04 = 1;
	handlerdata.list.unk0c = tmp;
	handlerdata.list.groupstartindex = (arg2 & 2) ? 1 : 0;

	item->handler(MENUOP_25, item, &handlerdata);

	if (handlerdata.list.unk0c != handlerdata.list.value) {
		data->list.unk02 = handlerdata.list.value;
		data->list.unk04 = func0f0e5ef8(data->list.unk02, item);
	}

	return true;
}

void menuInitItemDropdown(struct menuitem *item, union menuitemtickdata *data)
{
	s32 (*handler)(u32 operation, struct menuitem *item, union handlerdata *data);
	union handlerdata handlerdata;
	union handlerdata handlerdata2;

	data->dropdown.unk00 = 0;
	data->dropdown.unk02 = 0;
	data->dropdown.unk08 = 0;
	data->dropdown.unk0a = 0;

	handlerdata.dropdown.value = 0;

	handler = item->handler;

	if (item->param1 & 0x00200000) {
		handler(MENUOP_20, item, &handlerdata2);
		var800711a8 = handlerdata2.dropdown.value;
	} else {
		var800711a8 = 11;
	}

	item->handler(MENUOP_GETOPTIONVALUE, item, &handlerdata);

	if (handlerdata.dropdown.value < 0xffff) {
		data->dropdown.unk02 = handlerdata.dropdown.value;
	} else {
		// The value won't fit in unk02.
		// Maybe MENUOP_25 is getting a scaled-down value?
		// But then how does it know the value is scaled?
		handlerdata.dropdown.value = 0;
		handlerdata.dropdown.unk04 = 0;

		item->handler(MENUOP_25, item, &handlerdata);
		data->dropdown.unk02 = handlerdata.dropdown.value;
	}

	data->dropdown.unk04 = func0f0e5ef8(data->dropdown.unk02, item);

	item->handler(MENUOP_16, item, &handlerdata);
}

GLOBAL_ASM(
glabel menuRenderItemDropdown
/*  f0e7a8c:	27bdff80 */ 	addiu	$sp,$sp,-128
/*  f0e7a90:	afbf003c */ 	sw	$ra,0x3c($sp)
/*  f0e7a94:	afb10038 */ 	sw	$s1,0x38($sp)
/*  f0e7a98:	afb00034 */ 	sw	$s0,0x34($sp)
/*  f0e7a9c:	afa40080 */ 	sw	$a0,0x80($sp)
/*  f0e7aa0:	84ae0000 */ 	lh	$t6,0x0($a1)
/*  f0e7aa4:	00a08025 */ 	or	$s0,$a1,$zero
/*  f0e7aa8:	afae0074 */ 	sw	$t6,0x74($sp)
/*  f0e7aac:	84af0002 */ 	lh	$t7,0x2($a1)
/*  f0e7ab0:	afaf0070 */ 	sw	$t7,0x70($sp)
/*  f0e7ab4:	0fc3c557 */ 	jal	menuResolveParam2Text
/*  f0e7ab8:	8ca40008 */ 	lw	$a0,0x8($a1)
/*  f0e7abc:	afa20078 */ 	sw	$v0,0x78($sp)
/*  f0e7ac0:	8e030010 */ 	lw	$v1,0x10($s0)
/*  f0e7ac4:	44803000 */ 	mtc1	$zero,$f6
/*  f0e7ac8:	c4640040 */ 	lwc1	$f4,0x40($v1)
/*  f0e7acc:	4606203c */ 	c.lt.s	$f4,$f6
/*  f0e7ad0:	00000000 */ 	nop
/*  f0e7ad4:	4502000a */ 	bc1fl	.L0f0e7b00
/*  f0e7ad8:	9068003d */ 	lbu	$t0,0x3d($v1)
/*  f0e7adc:	9078003c */ 	lbu	$t8,0x3c($v1)
/*  f0e7ae0:	3c117f1b */ 	lui	$s1,%hi(g_MenuColourPalettes+0x18)
/*  f0e7ae4:	0018c900 */ 	sll	$t9,$t8,0x4
/*  f0e7ae8:	0338c823 */ 	subu	$t9,$t9,$t8
/*  f0e7aec:	0019c880 */ 	sll	$t9,$t9,0x2
/*  f0e7af0:	02398821 */ 	addu	$s1,$s1,$t9
/*  f0e7af4:	10000013 */ 	b	.L0f0e7b44
/*  f0e7af8:	8e311fc8 */ 	lw	$s1,%lo(g_MenuColourPalettes+0x18)($s1)
/*  f0e7afc:	9068003d */ 	lbu	$t0,0x3d($v1)
.L0f0e7b00:
/*  f0e7b00:	906c003c */ 	lbu	$t4,0x3c($v1)
/*  f0e7b04:	3c0a7f1b */ 	lui	$t2,%hi(g_MenuColourPalettes)
/*  f0e7b08:	00084900 */ 	sll	$t1,$t0,0x4
/*  f0e7b0c:	000c6900 */ 	sll	$t5,$t4,0x4
/*  f0e7b10:	254a1fb0 */ 	addiu	$t2,$t2,%lo(g_MenuColourPalettes)
/*  f0e7b14:	01284823 */ 	subu	$t1,$t1,$t0
/*  f0e7b18:	01ac6823 */ 	subu	$t5,$t5,$t4
/*  f0e7b1c:	000d6880 */ 	sll	$t5,$t5,0x2
/*  f0e7b20:	00094880 */ 	sll	$t1,$t1,0x2
/*  f0e7b24:	012a5821 */ 	addu	$t3,$t1,$t2
/*  f0e7b28:	01aa7021 */ 	addu	$t6,$t5,$t2
/*  f0e7b2c:	8dc50018 */ 	lw	$a1,0x18($t6)
/*  f0e7b30:	8d640018 */ 	lw	$a0,0x18($t3)
/*  f0e7b34:	0fc01a40 */ 	jal	colourBlend
/*  f0e7b38:	8c660044 */ 	lw	$a2,0x44($v1)
/*  f0e7b3c:	00408825 */ 	or	$s1,$v0,$zero
/*  f0e7b40:	8e030010 */ 	lw	$v1,0x10($s0)
.L0f0e7b44:
/*  f0e7b44:	8c6f000c */ 	lw	$t7,0xc($v1)
/*  f0e7b48:	02202025 */ 	or	$a0,$s1,$zero
/*  f0e7b4c:	00002825 */ 	or	$a1,$zero,$zero
/*  f0e7b50:	51e00008 */ 	beqzl	$t7,.L0f0e7b74
/*  f0e7b54:	8e02000c */ 	lw	$v0,0xc($s0)
/*  f0e7b58:	0fc01a40 */ 	jal	colourBlend
/*  f0e7b5c:	2406007f */ 	addiu	$a2,$zero,0x7f
/*  f0e7b60:	2401ff00 */ 	addiu	$at,$zero,-256
/*  f0e7b64:	0041c024 */ 	and	$t8,$v0,$at
/*  f0e7b68:	323900ff */ 	andi	$t9,$s1,0xff
/*  f0e7b6c:	03198825 */ 	or	$s1,$t8,$t9
/*  f0e7b70:	8e02000c */ 	lw	$v0,0xc($s0)
.L0f0e7b74:
/*  f0e7b74:	104000b7 */ 	beqz	$v0,.L0f0e7e54
/*  f0e7b78:	30480002 */ 	andi	$t0,$v0,0x2
/*  f0e7b7c:	11000055 */ 	beqz	$t0,.L0f0e7cd4
/*  f0e7b80:	3c014220 */ 	lui	$at,0x4220
/*  f0e7b84:	3c0141a0 */ 	lui	$at,0x41a0
/*  f0e7b88:	44816000 */ 	mtc1	$at,$f12
/*  f0e7b8c:	0fc01ac2 */ 	jal	func0f006b08
/*  f0e7b90:	00000000 */ 	nop
/*  f0e7b94:	3c01437f */ 	lui	$at,0x437f
/*  f0e7b98:	44814000 */ 	mtc1	$at,$f8
/*  f0e7b9c:	240b0001 */ 	addiu	$t3,$zero,0x1
/*  f0e7ba0:	3c027f1b */ 	lui	$v0,%hi(g_MenuColourPalettes)
/*  f0e7ba4:	46080282 */ 	mul.s	$f10,$f0,$f8
/*  f0e7ba8:	24421fb0 */ 	addiu	$v0,$v0,%lo(g_MenuColourPalettes)
/*  f0e7bac:	3c014f00 */ 	lui	$at,0x4f00
/*  f0e7bb0:	4449f800 */ 	cfc1	$t1,$31
/*  f0e7bb4:	44cbf800 */ 	ctc1	$t3,$31
/*  f0e7bb8:	00000000 */ 	nop
/*  f0e7bbc:	46005424 */ 	cvt.w.s	$f16,$f10
/*  f0e7bc0:	444bf800 */ 	cfc1	$t3,$31
/*  f0e7bc4:	00000000 */ 	nop
/*  f0e7bc8:	316b0078 */ 	andi	$t3,$t3,0x78
/*  f0e7bcc:	51600013 */ 	beqzl	$t3,.L0f0e7c1c
/*  f0e7bd0:	440b8000 */ 	mfc1	$t3,$f16
/*  f0e7bd4:	44818000 */ 	mtc1	$at,$f16
/*  f0e7bd8:	240b0001 */ 	addiu	$t3,$zero,0x1
/*  f0e7bdc:	46105401 */ 	sub.s	$f16,$f10,$f16
/*  f0e7be0:	44cbf800 */ 	ctc1	$t3,$31
/*  f0e7be4:	00000000 */ 	nop
/*  f0e7be8:	46008424 */ 	cvt.w.s	$f16,$f16
/*  f0e7bec:	444bf800 */ 	cfc1	$t3,$31
/*  f0e7bf0:	00000000 */ 	nop
/*  f0e7bf4:	316b0078 */ 	andi	$t3,$t3,0x78
/*  f0e7bf8:	15600005 */ 	bnez	$t3,.L0f0e7c10
/*  f0e7bfc:	00000000 */ 	nop
/*  f0e7c00:	440b8000 */ 	mfc1	$t3,$f16
/*  f0e7c04:	3c018000 */ 	lui	$at,0x8000
/*  f0e7c08:	10000007 */ 	b	.L0f0e7c28
/*  f0e7c0c:	01615825 */ 	or	$t3,$t3,$at
.L0f0e7c10:
/*  f0e7c10:	10000005 */ 	b	.L0f0e7c28
/*  f0e7c14:	240bffff */ 	addiu	$t3,$zero,-1
/*  f0e7c18:	440b8000 */ 	mfc1	$t3,$f16
.L0f0e7c1c:
/*  f0e7c1c:	00000000 */ 	nop
/*  f0e7c20:	0560fffb */ 	bltz	$t3,.L0f0e7c10
/*  f0e7c24:	00000000 */ 	nop
.L0f0e7c28:
/*  f0e7c28:	afab0058 */ 	sw	$t3,0x58($sp)
/*  f0e7c2c:	8e030010 */ 	lw	$v1,0x10($s0)
/*  f0e7c30:	44c9f800 */ 	ctc1	$t1,$31
/*  f0e7c34:	44802000 */ 	mtc1	$zero,$f4
/*  f0e7c38:	c4720040 */ 	lwc1	$f18,0x40($v1)
/*  f0e7c3c:	4604903c */ 	c.lt.s	$f18,$f4
/*  f0e7c40:	00000000 */ 	nop
/*  f0e7c44:	4502000a */ 	bc1fl	.L0f0e7c70
/*  f0e7c48:	906a003d */ 	lbu	$t2,0x3d($v1)
/*  f0e7c4c:	906c003c */ 	lbu	$t4,0x3c($v1)
/*  f0e7c50:	3c077f1b */ 	lui	$a3,%hi(g_MenuColourPalettes+0x20)
/*  f0e7c54:	000c6900 */ 	sll	$t5,$t4,0x4
/*  f0e7c58:	01ac6823 */ 	subu	$t5,$t5,$t4
/*  f0e7c5c:	000d6880 */ 	sll	$t5,$t5,0x2
/*  f0e7c60:	00ed3821 */ 	addu	$a3,$a3,$t5
/*  f0e7c64:	10000010 */ 	b	.L0f0e7ca8
/*  f0e7c68:	8ce71fd0 */ 	lw	$a3,%lo(g_MenuColourPalettes+0x20)($a3)
/*  f0e7c6c:	906a003d */ 	lbu	$t2,0x3d($v1)
.L0f0e7c70:
/*  f0e7c70:	9078003c */ 	lbu	$t8,0x3c($v1)
/*  f0e7c74:	8c660044 */ 	lw	$a2,0x44($v1)
/*  f0e7c78:	000a7100 */ 	sll	$t6,$t2,0x4
/*  f0e7c7c:	0018c900 */ 	sll	$t9,$t8,0x4
/*  f0e7c80:	01ca7023 */ 	subu	$t6,$t6,$t2
/*  f0e7c84:	0338c823 */ 	subu	$t9,$t9,$t8
/*  f0e7c88:	0019c880 */ 	sll	$t9,$t9,0x2
/*  f0e7c8c:	000e7080 */ 	sll	$t6,$t6,0x2
/*  f0e7c90:	004e7821 */ 	addu	$t7,$v0,$t6
/*  f0e7c94:	00594021 */ 	addu	$t0,$v0,$t9
/*  f0e7c98:	8d050020 */ 	lw	$a1,0x20($t0)
/*  f0e7c9c:	0fc01a40 */ 	jal	colourBlend
/*  f0e7ca0:	8de40020 */ 	lw	$a0,0x20($t7)
/*  f0e7ca4:	00403825 */ 	or	$a3,$v0,$zero
.L0f0e7ca8:
/*  f0e7ca8:	02202025 */ 	or	$a0,$s1,$zero
/*  f0e7cac:	322500ff */ 	andi	$a1,$s1,0xff
/*  f0e7cb0:	2406007f */ 	addiu	$a2,$zero,0x7f
/*  f0e7cb4:	0fc01a40 */ 	jal	colourBlend
/*  f0e7cb8:	afa7005c */ 	sw	$a3,0x5c($sp)
/*  f0e7cbc:	8fa5005c */ 	lw	$a1,0x5c($sp)
/*  f0e7cc0:	00402025 */ 	or	$a0,$v0,$zero
/*  f0e7cc4:	0fc01a40 */ 	jal	colourBlend
/*  f0e7cc8:	8fa60058 */ 	lw	$a2,0x58($sp)
/*  f0e7ccc:	10000053 */ 	b	.L0f0e7e1c
/*  f0e7cd0:	00408825 */ 	or	$s1,$v0,$zero
.L0f0e7cd4:
/*  f0e7cd4:	44816000 */ 	mtc1	$at,$f12
/*  f0e7cd8:	0fc01ac2 */ 	jal	func0f006b08
/*  f0e7cdc:	00000000 */ 	nop
/*  f0e7ce0:	3c01437f */ 	lui	$at,0x437f
/*  f0e7ce4:	44813000 */ 	mtc1	$at,$f6
/*  f0e7ce8:	240b0001 */ 	addiu	$t3,$zero,0x1
/*  f0e7cec:	3c0f7f1b */ 	lui	$t7,%hi(g_MenuColourPalettes)
/*  f0e7cf0:	46060202 */ 	mul.s	$f8,$f0,$f6
/*  f0e7cf4:	25ef1fb0 */ 	addiu	$t7,$t7,%lo(g_MenuColourPalettes)
/*  f0e7cf8:	3c014f00 */ 	lui	$at,0x4f00
/*  f0e7cfc:	4449f800 */ 	cfc1	$t1,$31
/*  f0e7d00:	44cbf800 */ 	ctc1	$t3,$31
/*  f0e7d04:	00000000 */ 	nop
/*  f0e7d08:	460042a4 */ 	cvt.w.s	$f10,$f8
/*  f0e7d0c:	444bf800 */ 	cfc1	$t3,$31
/*  f0e7d10:	00000000 */ 	nop
/*  f0e7d14:	316b0078 */ 	andi	$t3,$t3,0x78
/*  f0e7d18:	51600013 */ 	beqzl	$t3,.L0f0e7d68
/*  f0e7d1c:	440b5000 */ 	mfc1	$t3,$f10
/*  f0e7d20:	44815000 */ 	mtc1	$at,$f10
/*  f0e7d24:	240b0001 */ 	addiu	$t3,$zero,0x1
/*  f0e7d28:	460a4281 */ 	sub.s	$f10,$f8,$f10
/*  f0e7d2c:	44cbf800 */ 	ctc1	$t3,$31
/*  f0e7d30:	00000000 */ 	nop
/*  f0e7d34:	460052a4 */ 	cvt.w.s	$f10,$f10
/*  f0e7d38:	444bf800 */ 	cfc1	$t3,$31
/*  f0e7d3c:	00000000 */ 	nop
/*  f0e7d40:	316b0078 */ 	andi	$t3,$t3,0x78
/*  f0e7d44:	15600005 */ 	bnez	$t3,.L0f0e7d5c
/*  f0e7d48:	00000000 */ 	nop
/*  f0e7d4c:	440b5000 */ 	mfc1	$t3,$f10
/*  f0e7d50:	3c018000 */ 	lui	$at,0x8000
/*  f0e7d54:	10000007 */ 	b	.L0f0e7d74
/*  f0e7d58:	01615825 */ 	or	$t3,$t3,$at
.L0f0e7d5c:
/*  f0e7d5c:	10000005 */ 	b	.L0f0e7d74
/*  f0e7d60:	240bffff */ 	addiu	$t3,$zero,-1
/*  f0e7d64:	440b5000 */ 	mfc1	$t3,$f10
.L0f0e7d68:
/*  f0e7d68:	00000000 */ 	nop
/*  f0e7d6c:	0560fffb */ 	bltz	$t3,.L0f0e7d5c
/*  f0e7d70:	00000000 */ 	nop
.L0f0e7d74:
/*  f0e7d74:	afab0050 */ 	sw	$t3,0x50($sp)
/*  f0e7d78:	8e030010 */ 	lw	$v1,0x10($s0)
/*  f0e7d7c:	44c9f800 */ 	ctc1	$t1,$31
/*  f0e7d80:	44809000 */ 	mtc1	$zero,$f18
/*  f0e7d84:	c4700040 */ 	lwc1	$f16,0x40($v1)
/*  f0e7d88:	4612803c */ 	c.lt.s	$f16,$f18
/*  f0e7d8c:	00000000 */ 	nop
/*  f0e7d90:	4502000a */ 	bc1fl	.L0f0e7dbc
/*  f0e7d94:	906a003d */ 	lbu	$t2,0x3d($v1)
/*  f0e7d98:	906c003c */ 	lbu	$t4,0x3c($v1)
/*  f0e7d9c:	3c077f1b */ 	lui	$a3,%hi(g_MenuColourPalettes+0x20)
/*  f0e7da0:	000c6900 */ 	sll	$t5,$t4,0x4
/*  f0e7da4:	01ac6823 */ 	subu	$t5,$t5,$t4
/*  f0e7da8:	000d6880 */ 	sll	$t5,$t5,0x2
/*  f0e7dac:	00ed3821 */ 	addu	$a3,$a3,$t5
/*  f0e7db0:	10000010 */ 	b	.L0f0e7df4
/*  f0e7db4:	8ce71fd0 */ 	lw	$a3,%lo(g_MenuColourPalettes+0x20)($a3)
/*  f0e7db8:	906a003d */ 	lbu	$t2,0x3d($v1)
.L0f0e7dbc:
/*  f0e7dbc:	9079003c */ 	lbu	$t9,0x3c($v1)
/*  f0e7dc0:	8c660044 */ 	lw	$a2,0x44($v1)
/*  f0e7dc4:	000a7100 */ 	sll	$t6,$t2,0x4
/*  f0e7dc8:	00194100 */ 	sll	$t0,$t9,0x4
/*  f0e7dcc:	01ca7023 */ 	subu	$t6,$t6,$t2
/*  f0e7dd0:	01194023 */ 	subu	$t0,$t0,$t9
/*  f0e7dd4:	00084080 */ 	sll	$t0,$t0,0x2
/*  f0e7dd8:	000e7080 */ 	sll	$t6,$t6,0x2
/*  f0e7ddc:	01cfc021 */ 	addu	$t8,$t6,$t7
/*  f0e7de0:	010f4821 */ 	addu	$t1,$t0,$t7
/*  f0e7de4:	8d250020 */ 	lw	$a1,0x20($t1)
/*  f0e7de8:	0fc01a40 */ 	jal	colourBlend
/*  f0e7dec:	8f040020 */ 	lw	$a0,0x20($t8)
/*  f0e7df0:	00403825 */ 	or	$a3,$v0,$zero
.L0f0e7df4:
/*  f0e7df4:	02202025 */ 	or	$a0,$s1,$zero
/*  f0e7df8:	322500ff */ 	andi	$a1,$s1,0xff
/*  f0e7dfc:	2406007f */ 	addiu	$a2,$zero,0x7f
/*  f0e7e00:	0fc01a40 */ 	jal	colourBlend
/*  f0e7e04:	afa70054 */ 	sw	$a3,0x54($sp)
/*  f0e7e08:	8fa50054 */ 	lw	$a1,0x54($sp)
/*  f0e7e0c:	00402025 */ 	or	$a0,$v0,$zero
/*  f0e7e10:	0fc01a40 */ 	jal	colourBlend
/*  f0e7e14:	8fa60050 */ 	lw	$a2,0x50($sp)
/*  f0e7e18:	00408825 */ 	or	$s1,$v0,$zero
.L0f0e7e1c:
/*  f0e7e1c:	8e0b0010 */ 	lw	$t3,0x10($s0)
/*  f0e7e20:	3c047f1b */ 	lui	$a0,%hi(g_MenuColourPalettes3+0x20)
/*  f0e7e24:	3c057f1b */ 	lui	$a1,%hi(g_MenuColourPalettes2+0x20)
/*  f0e7e28:	9162003c */ 	lbu	$v0,0x3c($t3)
/*  f0e7e2c:	00026100 */ 	sll	$t4,$v0,0x4
/*  f0e7e30:	01826023 */ 	subu	$t4,$t4,$v0
/*  f0e7e34:	000c1080 */ 	sll	$v0,$t4,0x2
/*  f0e7e38:	00822021 */ 	addu	$a0,$a0,$v0
/*  f0e7e3c:	00a22821 */ 	addu	$a1,$a1,$v0
/*  f0e7e40:	8ca52138 */ 	lw	$a1,%lo(g_MenuColourPalettes2+0x20)($a1)
/*  f0e7e44:	0fc54f8e */ 	jal	func0f153e38
/*  f0e7e48:	8c8422a0 */ 	lw	$a0,%lo(g_MenuColourPalettes3+0x20)($a0)
/*  f0e7e4c:	1000000e */ 	b	.L0f0e7e88
/*  f0e7e50:	8e040008 */ 	lw	$a0,0x8($s0)
.L0f0e7e54:
/*  f0e7e54:	8e0d0010 */ 	lw	$t5,0x10($s0)
/*  f0e7e58:	3c047f1b */ 	lui	$a0,%hi(g_MenuColourPalettes3+0x18)
/*  f0e7e5c:	3c057f1b */ 	lui	$a1,%hi(g_MenuColourPalettes2+0x18)
/*  f0e7e60:	91a2003c */ 	lbu	$v0,0x3c($t5)
/*  f0e7e64:	00025100 */ 	sll	$t2,$v0,0x4
/*  f0e7e68:	01425023 */ 	subu	$t2,$t2,$v0
/*  f0e7e6c:	000a1080 */ 	sll	$v0,$t2,0x2
/*  f0e7e70:	00822021 */ 	addu	$a0,$a0,$v0
/*  f0e7e74:	00a22821 */ 	addu	$a1,$a1,$v0
/*  f0e7e78:	8ca52130 */ 	lw	$a1,%lo(g_MenuColourPalettes2+0x18)($a1)
/*  f0e7e7c:	0fc54f8e */ 	jal	func0f153e38
/*  f0e7e80:	8c842298 */ 	lw	$a0,%lo(g_MenuColourPalettes3+0x18)($a0)
/*  f0e7e84:	8e040008 */ 	lw	$a0,0x8($s0)
.L0f0e7e88:
/*  f0e7e88:	0fc3c962 */ 	jal	menuIsItemDisabled
/*  f0e7e8c:	8e050010 */ 	lw	$a1,0x10($s0)
/*  f0e7e90:	10400038 */ 	beqz	$v0,.L0f0e7f74
/*  f0e7e94:	00000000 */ 	nop
/*  f0e7e98:	8e030010 */ 	lw	$v1,0x10($s0)
/*  f0e7e9c:	44803000 */ 	mtc1	$zero,$f6
/*  f0e7ea0:	c4640040 */ 	lwc1	$f4,0x40($v1)
/*  f0e7ea4:	4606203c */ 	c.lt.s	$f4,$f6
/*  f0e7ea8:	00000000 */ 	nop
/*  f0e7eac:	4502000a */ 	bc1fl	.L0f0e7ed8
/*  f0e7eb0:	9079003d */ 	lbu	$t9,0x3d($v1)
/*  f0e7eb4:	906e003c */ 	lbu	$t6,0x3c($v1)
/*  f0e7eb8:	3c117f1b */ 	lui	$s1,%hi(g_MenuColourPalettes+0x1c)
/*  f0e7ebc:	000ec100 */ 	sll	$t8,$t6,0x4
/*  f0e7ec0:	030ec023 */ 	subu	$t8,$t8,$t6
/*  f0e7ec4:	0018c080 */ 	sll	$t8,$t8,0x2
/*  f0e7ec8:	02388821 */ 	addu	$s1,$s1,$t8
/*  f0e7ecc:	10000012 */ 	b	.L0f0e7f18
/*  f0e7ed0:	8e311fcc */ 	lw	$s1,%lo(g_MenuColourPalettes+0x1c)($s1)
/*  f0e7ed4:	9079003d */ 	lbu	$t9,0x3d($v1)
.L0f0e7ed8:
/*  f0e7ed8:	2407003c */ 	addiu	$a3,$zero,0x3c
/*  f0e7edc:	9069003c */ 	lbu	$t1,0x3c($v1)
/*  f0e7ee0:	03270019 */ 	multu	$t9,$a3
/*  f0e7ee4:	3c027f1b */ 	lui	$v0,%hi(g_MenuColourPalettes)
/*  f0e7ee8:	24421fb0 */ 	addiu	$v0,$v0,%lo(g_MenuColourPalettes)
/*  f0e7eec:	8c660044 */ 	lw	$a2,0x44($v1)
/*  f0e7ef0:	00004012 */ 	mflo	$t0
/*  f0e7ef4:	00487821 */ 	addu	$t7,$v0,$t0
/*  f0e7ef8:	8de4001c */ 	lw	$a0,0x1c($t7)
/*  f0e7efc:	01270019 */ 	multu	$t1,$a3
/*  f0e7f00:	00005812 */ 	mflo	$t3
/*  f0e7f04:	004b6021 */ 	addu	$t4,$v0,$t3
/*  f0e7f08:	0fc01a40 */ 	jal	colourBlend
/*  f0e7f0c:	8d85001c */ 	lw	$a1,0x1c($t4)
/*  f0e7f10:	00408825 */ 	or	$s1,$v0,$zero
/*  f0e7f14:	8e030010 */ 	lw	$v1,0x10($s0)
.L0f0e7f18:
/*  f0e7f18:	8c6d000c */ 	lw	$t5,0xc($v1)
/*  f0e7f1c:	02202025 */ 	or	$a0,$s1,$zero
/*  f0e7f20:	00002825 */ 	or	$a1,$zero,$zero
/*  f0e7f24:	51a00009 */ 	beqzl	$t5,.L0f0e7f4c
/*  f0e7f28:	9062003c */ 	lbu	$v0,0x3c($v1)
/*  f0e7f2c:	0fc01a40 */ 	jal	colourBlend
/*  f0e7f30:	2406007f */ 	addiu	$a2,$zero,0x7f
/*  f0e7f34:	2401ff00 */ 	addiu	$at,$zero,-256
/*  f0e7f38:	00415024 */ 	and	$t2,$v0,$at
/*  f0e7f3c:	322e00ff */ 	andi	$t6,$s1,0xff
/*  f0e7f40:	014e8825 */ 	or	$s1,$t2,$t6
/*  f0e7f44:	8e030010 */ 	lw	$v1,0x10($s0)
/*  f0e7f48:	9062003c */ 	lbu	$v0,0x3c($v1)
.L0f0e7f4c:
/*  f0e7f4c:	3c047f1b */ 	lui	$a0,%hi(g_MenuColourPalettes3+0x1c)
/*  f0e7f50:	3c057f1b */ 	lui	$a1,%hi(g_MenuColourPalettes2+0x1c)
/*  f0e7f54:	0002c100 */ 	sll	$t8,$v0,0x4
/*  f0e7f58:	0302c023 */ 	subu	$t8,$t8,$v0
/*  f0e7f5c:	00181080 */ 	sll	$v0,$t8,0x2
/*  f0e7f60:	00822021 */ 	addu	$a0,$a0,$v0
/*  f0e7f64:	00a22821 */ 	addu	$a1,$a1,$v0
/*  f0e7f68:	8ca52134 */ 	lw	$a1,%lo(g_MenuColourPalettes2+0x1c)($a1)
/*  f0e7f6c:	0fc54f8e */ 	jal	func0f153e38
/*  f0e7f70:	8c84229c */ 	lw	$a0,%lo(g_MenuColourPalettes3+0x1c)($a0)
.L0f0e7f74:
/*  f0e7f74:	0fc54d8a */ 	jal	func0f153628
/*  f0e7f78:	8fa40080 */ 	lw	$a0,0x80($sp)
/*  f0e7f7c:	86190000 */ 	lh	$t9,0x0($s0)
/*  f0e7f80:	3c0b8008 */ 	lui	$t3,%hi(var8007fb10)
/*  f0e7f84:	3c0c8008 */ 	lui	$t4,%hi(var8007fb0c)
/*  f0e7f88:	2728000a */ 	addiu	$t0,$t9,0xa
/*  f0e7f8c:	afa80074 */ 	sw	$t0,0x74($sp)
/*  f0e7f90:	860f0002 */ 	lh	$t7,0x2($s0)
/*  f0e7f94:	8d8cfb0c */ 	lw	$t4,%lo(var8007fb0c)($t4)
/*  f0e7f98:	8d6bfb10 */ 	lw	$t3,%lo(var8007fb10)($t3)
/*  f0e7f9c:	25e90002 */ 	addiu	$t1,$t7,0x2
/*  f0e7fa0:	afa90070 */ 	sw	$t1,0x70($sp)
/*  f0e7fa4:	afb10018 */ 	sw	$s1,0x18($sp)
/*  f0e7fa8:	afac0014 */ 	sw	$t4,0x14($sp)
/*  f0e7fac:	afab0010 */ 	sw	$t3,0x10($sp)
/*  f0e7fb0:	860d0004 */ 	lh	$t5,0x4($s0)
/*  f0e7fb4:	00402025 */ 	or	$a0,$v0,$zero
/*  f0e7fb8:	27a50074 */ 	addiu	$a1,$sp,0x74
/*  f0e7fbc:	afad001c */ 	sw	$t5,0x1c($sp)
/*  f0e7fc0:	860a0006 */ 	lh	$t2,0x6($s0)
/*  f0e7fc4:	afa00028 */ 	sw	$zero,0x28($sp)
/*  f0e7fc8:	afa00024 */ 	sw	$zero,0x24($sp)
/*  f0e7fcc:	27a60070 */ 	addiu	$a2,$sp,0x70
/*  f0e7fd0:	8fa70078 */ 	lw	$a3,0x78($sp)
/*  f0e7fd4:	0fc5580f */ 	jal	textRenderWhite
/*  f0e7fd8:	afaa0020 */ 	sw	$t2,0x20($sp)
/*  f0e7fdc:	afa20080 */ 	sw	$v0,0x80($sp)
/*  f0e7fe0:	8e0e0010 */ 	lw	$t6,0x10($s0)
/*  f0e7fe4:	91d8006e */ 	lbu	$t8,0x6e($t6)
/*  f0e7fe8:	53000006 */ 	beqzl	$t8,.L0f0e8004
/*  f0e7fec:	860f0000 */ 	lh	$t7,0x0($s0)
/*  f0e7ff0:	86190000 */ 	lh	$t9,0x0($s0)
/*  f0e7ff4:	27280050 */ 	addiu	$t0,$t9,0x50
/*  f0e7ff8:	10000006 */ 	b	.L0f0e8014
/*  f0e7ffc:	afa80074 */ 	sw	$t0,0x74($sp)
/*  f0e8000:	860f0000 */ 	lh	$t7,0x0($s0)
.L0f0e8004:
/*  f0e8004:	86090004 */ 	lh	$t1,0x4($s0)
/*  f0e8008:	01e95821 */ 	addu	$t3,$t7,$t1
/*  f0e800c:	256cffc4 */ 	addiu	$t4,$t3,-60
/*  f0e8010:	afac0074 */ 	sw	$t4,0x74($sp)
.L0f0e8014:
/*  f0e8014:	8e0d0008 */ 	lw	$t5,0x8($s0)
/*  f0e8018:	8daa0004 */ 	lw	$t2,0x4($t5)
/*  f0e801c:	314e0080 */ 	andi	$t6,$t2,0x80
/*  f0e8020:	51c00005 */ 	beqzl	$t6,.L0f0e8038
/*  f0e8024:	86080002 */ 	lh	$t0,0x2($s0)
/*  f0e8028:	86180000 */ 	lh	$t8,0x0($s0)
/*  f0e802c:	2719001e */ 	addiu	$t9,$t8,0x1e
/*  f0e8030:	afb90074 */ 	sw	$t9,0x74($sp)
/*  f0e8034:	86080002 */ 	lh	$t0,0x2($s0)
.L0f0e8038:
/*  f0e8038:	250f0002 */ 	addiu	$t7,$t0,0x2
/*  f0e803c:	afaf0070 */ 	sw	$t7,0x70($sp)
/*  f0e8040:	8e090008 */ 	lw	$t1,0x8($s0)
/*  f0e8044:	8d2b0010 */ 	lw	$t3,0x10($t1)
/*  f0e8048:	11600034 */ 	beqz	$t3,.L0f0e811c
/*  f0e804c:	00000000 */ 	nop
/*  f0e8050:	afa00060 */ 	sw	$zero,0x60($sp)
/*  f0e8054:	8e050008 */ 	lw	$a1,0x8($s0)
/*  f0e8058:	24040007 */ 	addiu	$a0,$zero,0x7
/*  f0e805c:	27a60060 */ 	addiu	$a2,$sp,0x60
/*  f0e8060:	8cb90010 */ 	lw	$t9,0x10($a1)
/*  f0e8064:	0320f809 */ 	jalr	$t9
/*  f0e8068:	00000000 */ 	nop
/*  f0e806c:	afa00064 */ 	sw	$zero,0x64($sp)
/*  f0e8070:	8e050008 */ 	lw	$a1,0x8($s0)
/*  f0e8074:	24040003 */ 	addiu	$a0,$zero,0x3
/*  f0e8078:	27a60060 */ 	addiu	$a2,$sp,0x60
/*  f0e807c:	8cb90010 */ 	lw	$t9,0x10($a1)
/*  f0e8080:	0320f809 */ 	jalr	$t9
/*  f0e8084:	00000000 */ 	nop
/*  f0e8088:	3c0c8008 */ 	lui	$t4,%hi(var8007fb0c)
/*  f0e808c:	8d8cfb0c */ 	lw	$t4,%lo(var8007fb0c)($t4)
/*  f0e8090:	3c078008 */ 	lui	$a3,%hi(var8007fb10)
/*  f0e8094:	afa20078 */ 	sw	$v0,0x78($sp)
/*  f0e8098:	8ce7fb10 */ 	lw	$a3,%lo(var8007fb10)($a3)
/*  f0e809c:	27a4004c */ 	addiu	$a0,$sp,0x4c
/*  f0e80a0:	27a50048 */ 	addiu	$a1,$sp,0x48
/*  f0e80a4:	00403025 */ 	or	$a2,$v0,$zero
/*  f0e80a8:	afa00014 */ 	sw	$zero,0x14($sp)
/*  f0e80ac:	0fc55cbe */ 	jal	textMeasure
/*  f0e80b0:	afac0010 */ 	sw	$t4,0x10($sp)
/*  f0e80b4:	860d0000 */ 	lh	$t5,0x0($s0)
/*  f0e80b8:	860a0004 */ 	lh	$t2,0x4($s0)
/*  f0e80bc:	8fb80048 */ 	lw	$t8,0x48($sp)
/*  f0e80c0:	3c098008 */ 	lui	$t1,%hi(var8007fb10)
/*  f0e80c4:	3c0b8008 */ 	lui	$t3,%hi(var8007fb0c)
/*  f0e80c8:	8d6bfb0c */ 	lw	$t3,%lo(var8007fb0c)($t3)
/*  f0e80cc:	8d29fb10 */ 	lw	$t1,%lo(var8007fb10)($t1)
/*  f0e80d0:	01aa7021 */ 	addu	$t6,$t5,$t2
/*  f0e80d4:	01d84023 */ 	subu	$t0,$t6,$t8
/*  f0e80d8:	250ffff6 */ 	addiu	$t7,$t0,-10
/*  f0e80dc:	afaf0074 */ 	sw	$t7,0x74($sp)
/*  f0e80e0:	afb10018 */ 	sw	$s1,0x18($sp)
/*  f0e80e4:	afab0014 */ 	sw	$t3,0x14($sp)
/*  f0e80e8:	afa90010 */ 	sw	$t1,0x10($sp)
/*  f0e80ec:	86190004 */ 	lh	$t9,0x4($s0)
/*  f0e80f0:	8fa40080 */ 	lw	$a0,0x80($sp)
/*  f0e80f4:	27a50074 */ 	addiu	$a1,$sp,0x74
/*  f0e80f8:	afb9001c */ 	sw	$t9,0x1c($sp)
/*  f0e80fc:	860c0006 */ 	lh	$t4,0x6($s0)
/*  f0e8100:	afa00028 */ 	sw	$zero,0x28($sp)
/*  f0e8104:	afa00024 */ 	sw	$zero,0x24($sp)
/*  f0e8108:	27a60070 */ 	addiu	$a2,$sp,0x70
/*  f0e810c:	8fa70078 */ 	lw	$a3,0x78($sp)
/*  f0e8110:	0fc5580f */ 	jal	textRenderWhite
/*  f0e8114:	afac0020 */ 	sw	$t4,0x20($sp)
/*  f0e8118:	afa20080 */ 	sw	$v0,0x80($sp)
.L0f0e811c:
/*  f0e811c:	0fc54de0 */ 	jal	func0f153780
/*  f0e8120:	8fa40080 */ 	lw	$a0,0x80($sp)
/*  f0e8124:	8fbf003c */ 	lw	$ra,0x3c($sp)
/*  f0e8128:	8fb00034 */ 	lw	$s0,0x34($sp)
/*  f0e812c:	8fb10038 */ 	lw	$s1,0x38($sp)
/*  f0e8130:	03e00008 */ 	jr	$ra
/*  f0e8134:	27bd0080 */ 	addiu	$sp,$sp,0x80
);

bool menuTickItemDropdown(struct menuitem *item, struct menuframe *frame, struct menuinputs *inputs, u32 arg3, union menuitemtickdata *data)
{
	u32 stack;

	if ((arg3 & 2) && item->handler) {
		if (frame->dimmed && item == frame->focuseditem) {
			menuTickItemList(item, inputs, arg3, data);

			if (mpIsPlayerLockedOut(g_MpPlayerNum)) {
				if ((item->param1 & 0x00040000) || (frame->dialog->unk10 & 0x10)) {
					frame->dimmed = false;
				}
			}
		}

		if (inputs->back && frame->dimmed) {
			frame->dimmed = false;
			inputs->back = false;
			menuPlaySound(MENUSOUND_TOGGLEOFF);
		}

		if (inputs->select) {
			if (frame->dimmed) {
				frame->dimmed = false;
			} else {
				union handlerdata handlerdata;

				frame->dimmed = true;
				menuInitItemDropdown(item, data);

				handlerdata.dropdown.value = 0;
				item->handler(MENUOP_GETOPTIONVALUE, item, &handlerdata);
				data->dropdown.unk0e = handlerdata.dropdown.value * var800711a8;
				menuPlaySound(MENUSOUND_TOGGLEOFF);
			}
		}
	}

	return true;
}

GLOBAL_ASM(
glabel func0f0e8290
/*  f0e8290:	27bdff60 */ 	addiu	$sp,$sp,-160
/*  f0e8294:	afb0001c */ 	sw	$s0,0x1c($sp)
/*  f0e8298:	8fb000b8 */ 	lw	$s0,0xb8($sp)
/*  f0e829c:	afbf003c */ 	sw	$ra,0x3c($sp)
/*  f0e82a0:	afb70038 */ 	sw	$s7,0x38($sp)
/*  f0e82a4:	afb60034 */ 	sw	$s6,0x34($sp)
/*  f0e82a8:	afb50030 */ 	sw	$s5,0x30($sp)
/*  f0e82ac:	afb4002c */ 	sw	$s4,0x2c($sp)
/*  f0e82b0:	afb30028 */ 	sw	$s3,0x28($sp)
/*  f0e82b4:	afb20024 */ 	sw	$s2,0x24($sp)
/*  f0e82b8:	afb10020 */ 	sw	$s1,0x20($sp)
/*  f0e82bc:	afa400a0 */ 	sw	$a0,0xa0($sp)
/*  f0e82c0:	afa500a4 */ 	sw	$a1,0xa4($sp)
/*  f0e82c4:	afa600a8 */ 	sw	$a2,0xa8($sp)
/*  f0e82c8:	afa700ac */ 	sw	$a3,0xac($sp)
/*  f0e82cc:	9219006e */ 	lbu	$t9,0x6e($s0)
/*  f0e82d0:	00059400 */ 	sll	$s2,$a1,0x10
/*  f0e82d4:	00127403 */ 	sra	$t6,$s2,0x10
/*  f0e82d8:	00067c00 */ 	sll	$t7,$a2,0x10
/*  f0e82dc:	000f3403 */ 	sra	$a2,$t7,0x10
/*  f0e82e0:	13200004 */ 	beqz	$t9,.L0f0e82f4
/*  f0e82e4:	01c09025 */ 	or	$s2,$t6,$zero
/*  f0e82e8:	25c8004e */ 	addiu	$t0,$t6,0x4e
/*  f0e82ec:	1000000a */ 	b	.L0f0e8318
/*  f0e82f0:	a7a8006c */ 	sh	$t0,0x6c($sp)
.L0f0e82f4:
/*  f0e82f4:	87a900ae */ 	lh	$t1,0xae($sp)
/*  f0e82f8:	87ab00ae */ 	lh	$t3,0xae($sp)
/*  f0e82fc:	264a0002 */ 	addiu	$t2,$s2,0x2
/*  f0e8300:	05210003 */ 	bgez	$t1,.L0f0e8310
/*  f0e8304:	024b6021 */ 	addu	$t4,$s2,$t3
/*  f0e8308:	10000003 */ 	b	.L0f0e8318
/*  f0e830c:	a7aa006c */ 	sh	$t2,0x6c($sp)
.L0f0e8310:
/*  f0e8310:	258dffc2 */ 	addiu	$t5,$t4,-62
/*  f0e8314:	a7ad006c */ 	sh	$t5,0x6c($sp)
.L0f0e8318:
/*  f0e8318:	8fb100b4 */ 	lw	$s1,0xb4($sp)
/*  f0e831c:	2658001e */ 	addiu	$t8,$s2,0x1e
/*  f0e8320:	24d90001 */ 	addiu	$t9,$a2,0x1
/*  f0e8324:	8e2e0004 */ 	lw	$t6,0x4($s1)
/*  f0e8328:	24080038 */ 	addiu	$t0,$zero,0x38
/*  f0e832c:	24090001 */ 	addiu	$t1,$zero,0x1
/*  f0e8330:	31cf0080 */ 	andi	$t7,$t6,0x80
/*  f0e8334:	51e00003 */ 	beqzl	$t7,.L0f0e8344
/*  f0e8338:	8faa00bc */ 	lw	$t2,0xbc($sp)
/*  f0e833c:	a7b8006c */ 	sh	$t8,0x6c($sp)
/*  f0e8340:	8faa00bc */ 	lw	$t2,0xbc($sp)
.L0f0e8344:
/*  f0e8344:	a7b9006e */ 	sh	$t9,0x6e($sp)
/*  f0e8348:	a7a80070 */ 	sh	$t0,0x70($sp)
/*  f0e834c:	afb10074 */ 	sw	$s1,0x74($sp)
/*  f0e8350:	afa90078 */ 	sw	$t1,0x78($sp)
/*  f0e8354:	afb0007c */ 	sw	$s0,0x7c($sp)
/*  f0e8358:	afaa0080 */ 	sw	$t2,0x80($sp)
/*  f0e835c:	8e0b000c */ 	lw	$t3,0xc($s0)
/*  f0e8360:	51600073 */ 	beqzl	$t3,.L0f0e8530
/*  f0e8364:	8fbf003c */ 	lw	$ra,0x3c($sp)
/*  f0e8368:	8e220010 */ 	lw	$v0,0x10($s1)
/*  f0e836c:	50400070 */ 	beqzl	$v0,.L0f0e8530
/*  f0e8370:	8fbf003c */ 	lw	$ra,0x3c($sp)
/*  f0e8374:	8e0c0008 */ 	lw	$t4,0x8($s0)
/*  f0e8378:	562c006d */ 	bnel	$s1,$t4,.L0f0e8530
/*  f0e837c:	8fbf003c */ 	lw	$ra,0x3c($sp)
/*  f0e8380:	8e2d0004 */ 	lw	$t5,0x4($s1)
/*  f0e8384:	2418000b */ 	addiu	$t8,$zero,0xb
/*  f0e8388:	3c018007 */ 	lui	$at,%hi(var800711a8)
/*  f0e838c:	000d7280 */ 	sll	$t6,$t5,0xa
/*  f0e8390:	05c10009 */ 	bgez	$t6,.L0f0e83b8
/*  f0e8394:	24040014 */ 	addiu	$a0,$zero,0x14
/*  f0e8398:	02202825 */ 	or	$a1,$s1,$zero
/*  f0e839c:	27a6004c */ 	addiu	$a2,$sp,0x4c
/*  f0e83a0:	0040f809 */ 	jalr	$v0
/*  f0e83a4:	a7b200a6 */ 	sh	$s2,0xa6($sp)
/*  f0e83a8:	8faf004c */ 	lw	$t7,0x4c($sp)
/*  f0e83ac:	3c018007 */ 	lui	$at,%hi(var800711a8)
/*  f0e83b0:	10000003 */ 	b	.L0f0e83c0
/*  f0e83b4:	ac2f11a8 */ 	sw	$t7,%lo(var800711a8)($at)
.L0f0e83b8:
/*  f0e83b8:	ac3811a8 */ 	sw	$t8,%lo(var800711a8)($at)
/*  f0e83bc:	a7b200a6 */ 	sh	$s2,0xa6($sp)
.L0f0e83c0:
/*  f0e83c0:	8e390010 */ 	lw	$t9,0x10($s1)
/*  f0e83c4:	27b7005c */ 	addiu	$s7,$sp,0x5c
/*  f0e83c8:	87b200a6 */ 	lh	$s2,0xa6($sp)
/*  f0e83cc:	02e03025 */ 	or	$a2,$s7,$zero
/*  f0e83d0:	24040001 */ 	addiu	$a0,$zero,0x1
/*  f0e83d4:	0320f809 */ 	jalr	$t9
/*  f0e83d8:	02202825 */ 	or	$a1,$s1,$zero
/*  f0e83dc:	3c088007 */ 	lui	$t0,%hi(var800711a8)
/*  f0e83e0:	8fb6005c */ 	lw	$s6,0x5c($sp)
/*  f0e83e4:	8d0811a8 */ 	lw	$t0,%lo(var800711a8)($t0)
/*  f0e83e8:	a7a00070 */ 	sh	$zero,0x70($sp)
/*  f0e83ec:	00008025 */ 	or	$s0,$zero,$zero
/*  f0e83f0:	01160019 */ 	multu	$t0,$s6
/*  f0e83f4:	00004812 */ 	mflo	$t1
/*  f0e83f8:	a7a90072 */ 	sh	$t1,0x72($sp)
/*  f0e83fc:	52c00021 */ 	beqzl	$s6,.L0f0e8484
/*  f0e8400:	87ac00ae */ 	lh	$t4,0xae($sp)
/*  f0e8404:	3c158008 */ 	lui	$s5,%hi(var8007fb0c)
/*  f0e8408:	3c148008 */ 	lui	$s4,%hi(var8007fb10)
/*  f0e840c:	2694fb10 */ 	addiu	$s4,$s4,%lo(var8007fb10)
/*  f0e8410:	26b5fb0c */ 	addiu	$s5,$s5,%lo(var8007fb0c)
/*  f0e8414:	27b30098 */ 	addiu	$s3,$sp,0x98
/*  f0e8418:	27b20094 */ 	addiu	$s2,$sp,0x94
/*  f0e841c:	afb0005c */ 	sw	$s0,0x5c($sp)
.L0f0e8420:
/*  f0e8420:	8e390010 */ 	lw	$t9,0x10($s1)
/*  f0e8424:	24040003 */ 	addiu	$a0,$zero,0x3
/*  f0e8428:	02202825 */ 	or	$a1,$s1,$zero
/*  f0e842c:	0320f809 */ 	jalr	$t9
/*  f0e8430:	02e03025 */ 	or	$a2,$s7,$zero
/*  f0e8434:	8eaa0000 */ 	lw	$t2,0x0($s5)
/*  f0e8438:	02402025 */ 	or	$a0,$s2,$zero
/*  f0e843c:	02602825 */ 	or	$a1,$s3,$zero
/*  f0e8440:	00403025 */ 	or	$a2,$v0,$zero
/*  f0e8444:	8e870000 */ 	lw	$a3,0x0($s4)
/*  f0e8448:	afa00014 */ 	sw	$zero,0x14($sp)
/*  f0e844c:	0fc55cbe */ 	jal	textMeasure
/*  f0e8450:	afaa0010 */ 	sw	$t2,0x10($sp)
/*  f0e8454:	8fa20098 */ 	lw	$v0,0x98($sp)
/*  f0e8458:	87ab0070 */ 	lh	$t3,0x70($sp)
/*  f0e845c:	26100001 */ 	addiu	$s0,$s0,0x1
/*  f0e8460:	24420006 */ 	addiu	$v0,$v0,0x6
/*  f0e8464:	0162082a */ 	slt	$at,$t3,$v0
/*  f0e8468:	10200003 */ 	beqz	$at,.L0f0e8478
/*  f0e846c:	afa20098 */ 	sw	$v0,0x98($sp)
/*  f0e8470:	a7a20070 */ 	sh	$v0,0x70($sp)
/*  f0e8474:	afa20098 */ 	sw	$v0,0x98($sp)
.L0f0e8478:
/*  f0e8478:	5616ffe9 */ 	bnel	$s0,$s6,.L0f0e8420
/*  f0e847c:	afb0005c */ 	sw	$s0,0x5c($sp)
/*  f0e8480:	87ac00ae */ 	lh	$t4,0xae($sp)
.L0f0e8484:
/*  f0e8484:	87ad00a6 */ 	lh	$t5,0xa6($sp)
/*  f0e8488:	59800007 */ 	blezl	$t4,.L0f0e84a8
/*  f0e848c:	8fa500b8 */ 	lw	$a1,0xb8($sp)
/*  f0e8490:	87af0070 */ 	lh	$t7,0x70($sp)
/*  f0e8494:	01ac7021 */ 	addu	$t6,$t5,$t4
/*  f0e8498:	01cfc023 */ 	subu	$t8,$t6,$t7
/*  f0e849c:	2708fff9 */ 	addiu	$t0,$t8,-7
/*  f0e84a0:	a7a8006c */ 	sh	$t0,0x6c($sp)
/*  f0e84a4:	8fa500b8 */ 	lw	$a1,0xb8($sp)
.L0f0e84a8:
/*  f0e84a8:	87b9006e */ 	lh	$t9,0x6e($sp)
/*  f0e84ac:	87aa0072 */ 	lh	$t2,0x72($sp)
/*  f0e84b0:	8ca30020 */ 	lw	$v1,0x20($a1)
/*  f0e84b4:	8ca90018 */ 	lw	$t1,0x18($a1)
/*  f0e84b8:	032a5821 */ 	addu	$t3,$t9,$t2
/*  f0e84bc:	01232021 */ 	addu	$a0,$t1,$v1
/*  f0e84c0:	248d0002 */ 	addiu	$t5,$a0,0x2
/*  f0e84c4:	01ab082a */ 	slt	$at,$t5,$t3
/*  f0e84c8:	10200014 */ 	beqz	$at,.L0f0e851c
/*  f0e84cc:	006a082a */ 	slt	$at,$v1,$t2
/*  f0e84d0:	1020000e */ 	beqz	$at,.L0f0e850c
/*  f0e84d4:	3c028007 */ 	lui	$v0,%hi(var800711a8)
/*  f0e84d8:	8c4211a8 */ 	lw	$v0,%lo(var800711a8)($v0)
/*  f0e84dc:	00608025 */ 	or	$s0,$v1,$zero
/*  f0e84e0:	0062001b */ 	divu	$zero,$v1,$v0
/*  f0e84e4:	00008012 */ 	mflo	$s0
/*  f0e84e8:	14400002 */ 	bnez	$v0,.L0f0e84f4
/*  f0e84ec:	00000000 */ 	nop
/*  f0e84f0:	0007000d */ 	break	0x7
.L0f0e84f4:
/*  f0e84f4:	02020019 */ 	multu	$s0,$v0
/*  f0e84f8:	00008012 */ 	mflo	$s0
/*  f0e84fc:	a7b00072 */ 	sh	$s0,0x72($sp)
/*  f0e8500:	8cae0020 */ 	lw	$t6,0x20($a1)
/*  f0e8504:	8cac0018 */ 	lw	$t4,0x18($a1)
/*  f0e8508:	018e2021 */ 	addu	$a0,$t4,$t6
.L0f0e850c:
/*  f0e850c:	87af0072 */ 	lh	$t7,0x72($sp)
/*  f0e8510:	008fc023 */ 	subu	$t8,$a0,$t7
/*  f0e8514:	27080002 */ 	addiu	$t0,$t8,0x2
/*  f0e8518:	a7a8006e */ 	sh	$t0,0x6e($sp)
.L0f0e851c:
/*  f0e851c:	8fa400a0 */ 	lw	$a0,0xa0($sp)
/*  f0e8520:	0fc398ca */ 	jal	menuRenderItemList
/*  f0e8524:	27a5006c */ 	addiu	$a1,$sp,0x6c
/*  f0e8528:	afa200a0 */ 	sw	$v0,0xa0($sp)
/*  f0e852c:	8fbf003c */ 	lw	$ra,0x3c($sp)
.L0f0e8530:
/*  f0e8530:	8fa200a0 */ 	lw	$v0,0xa0($sp)
/*  f0e8534:	8fb0001c */ 	lw	$s0,0x1c($sp)
/*  f0e8538:	8fb10020 */ 	lw	$s1,0x20($sp)
/*  f0e853c:	8fb20024 */ 	lw	$s2,0x24($sp)
/*  f0e8540:	8fb30028 */ 	lw	$s3,0x28($sp)
/*  f0e8544:	8fb4002c */ 	lw	$s4,0x2c($sp)
/*  f0e8548:	8fb50030 */ 	lw	$s5,0x30($sp)
/*  f0e854c:	8fb60034 */ 	lw	$s6,0x34($sp)
/*  f0e8550:	8fb70038 */ 	lw	$s7,0x38($sp)
/*  f0e8554:	03e00008 */ 	jr	$ra
/*  f0e8558:	27bd00a0 */ 	addiu	$sp,$sp,0xa0
);

bool menuIsStringEmptyOrSpaces(char *text)
{
	s32 i;

	if (text[0] == '\0') {
		return true;
	}

	i = 0;

	while (text[i] != '\0') {
		if (text[i] != ' ') {
			return false;
		}

		i++;
	}

	return true;
}

GLOBAL_ASM(
glabel menuRenderItemKeyboard
/*  f0e85ac:	27bdff08 */ 	addiu	$sp,$sp,-248
/*  f0e85b0:	afbf0074 */ 	sw	$ra,0x74($sp)
/*  f0e85b4:	afbe0070 */ 	sw	$s8,0x70($sp)
/*  f0e85b8:	afb7006c */ 	sw	$s7,0x6c($sp)
/*  f0e85bc:	afb60068 */ 	sw	$s6,0x68($sp)
/*  f0e85c0:	afb50064 */ 	sw	$s5,0x64($sp)
/*  f0e85c4:	afb40060 */ 	sw	$s4,0x60($sp)
/*  f0e85c8:	afb3005c */ 	sw	$s3,0x5c($sp)
/*  f0e85cc:	afb20058 */ 	sw	$s2,0x58($sp)
/*  f0e85d0:	afb10054 */ 	sw	$s1,0x54($sp)
/*  f0e85d4:	afb00050 */ 	sw	$s0,0x50($sp)
/*  f0e85d8:	f7b80048 */ 	sdc1	$f24,0x48($sp)
/*  f0e85dc:	f7b60040 */ 	sdc1	$f22,0x40($sp)
/*  f0e85e0:	f7b40038 */ 	sdc1	$f20,0x38($sp)
/*  f0e85e4:	afa400f8 */ 	sw	$a0,0xf8($sp)
/*  f0e85e8:	8cae0014 */ 	lw	$t6,0x14($a1)
/*  f0e85ec:	240f000a */ 	addiu	$t7,$zero,0xa
/*  f0e85f0:	a3af00f1 */ 	sb	$t7,0xf1($sp)
/*  f0e85f4:	a3a000f2 */ 	sb	$zero,0xf2($sp)
/*  f0e85f8:	afae00e4 */ 	sw	$t6,0xe4($sp)
/*  f0e85fc:	8cb80010 */ 	lw	$t8,0x10($a1)
/*  f0e8600:	2415003c */ 	addiu	$s5,$zero,0x3c
/*  f0e8604:	00a0a025 */ 	or	$s4,$a1,$zero
/*  f0e8608:	9319003c */ 	lbu	$t9,0x3c($t8)
/*  f0e860c:	3c057f1b */ 	lui	$a1,%hi(g_MenuColourPalettes2+0x18)
/*  f0e8610:	3c047f1b */ 	lui	$a0,%hi(g_MenuColourPalettes3+0x18)
/*  f0e8614:	03350019 */ 	multu	$t9,$s5
/*  f0e8618:	00001012 */ 	mflo	$v0
/*  f0e861c:	00822021 */ 	addu	$a0,$a0,$v0
/*  f0e8620:	00a22821 */ 	addu	$a1,$a1,$v0
/*  f0e8624:	8ca52130 */ 	lw	$a1,%lo(g_MenuColourPalettes2+0x18)($a1)
/*  f0e8628:	0fc54f8e */ 	jal	func0f153e38
/*  f0e862c:	8c842298 */ 	lw	$a0,%lo(g_MenuColourPalettes3+0x18)($a0)
/*  f0e8630:	8fa400f8 */ 	lw	$a0,0xf8($sp)
/*  f0e8634:	0fc54df7 */ 	jal	func0f1537dc
/*  f0e8638:	3405ff7f */ 	dli	$a1,0xff7f
/*  f0e863c:	8e8a0008 */ 	lw	$t2,0x8($s4)
/*  f0e8640:	8d4b000c */ 	lw	$t3,0xc($t2)
/*  f0e8644:	15600021 */ 	bnez	$t3,.L0f0e86cc
/*  f0e8648:	244c0008 */ 	addiu	$t4,$v0,0x8
/*  f0e864c:	3c128008 */ 	lui	$s2,%hi(g_ScreenWidthMultiplier)
/*  f0e8650:	afac00f8 */ 	sw	$t4,0xf8($sp)
/*  f0e8654:	868d0000 */ 	lh	$t5,0x0($s4)
/*  f0e8658:	2652fac0 */ 	addiu	$s2,$s2,%lo(g_ScreenWidthMultiplier)
/*  f0e865c:	8e4f0000 */ 	lw	$t7,0x0($s2)
/*  f0e8660:	25ae003f */ 	addiu	$t6,$t5,0x3f
/*  f0e8664:	868c0002 */ 	lh	$t4,0x2($s4)
/*  f0e8668:	01cf0019 */ 	multu	$t6,$t7
/*  f0e866c:	3c16f600 */ 	lui	$s6,0xf600
/*  f0e8670:	258d000a */ 	addiu	$t5,$t4,0xa
/*  f0e8674:	31ae03ff */ 	andi	$t6,$t5,0x3ff
/*  f0e8678:	000e7880 */ 	sll	$t7,$t6,0x2
/*  f0e867c:	0000c012 */ 	mflo	$t8
/*  f0e8680:	331903ff */ 	andi	$t9,$t8,0x3ff
/*  f0e8684:	00195380 */ 	sll	$t2,$t9,0xe
/*  f0e8688:	01565825 */ 	or	$t3,$t2,$s6
/*  f0e868c:	016fc025 */ 	or	$t8,$t3,$t7
/*  f0e8690:	ac580000 */ 	sw	$t8,0x0($v0)
/*  f0e8694:	86990000 */ 	lh	$t9,0x0($s4)
/*  f0e8698:	8e4c0000 */ 	lw	$t4,0x0($s2)
/*  f0e869c:	868f0002 */ 	lh	$t7,0x2($s4)
/*  f0e86a0:	272a0004 */ 	addiu	$t2,$t9,0x4
/*  f0e86a4:	014c0019 */ 	multu	$t2,$t4
/*  f0e86a8:	25f80001 */ 	addiu	$t8,$t7,0x1
/*  f0e86ac:	331903ff */ 	andi	$t9,$t8,0x3ff
/*  f0e86b0:	00195080 */ 	sll	$t2,$t9,0x2
/*  f0e86b4:	00006812 */ 	mflo	$t5
/*  f0e86b8:	31ae03ff */ 	andi	$t6,$t5,0x3ff
/*  f0e86bc:	000e5b80 */ 	sll	$t3,$t6,0xe
/*  f0e86c0:	016a6025 */ 	or	$t4,$t3,$t2
/*  f0e86c4:	10000021 */ 	b	.L0f0e874c
/*  f0e86c8:	ac4c0004 */ 	sw	$t4,0x4($v0)
.L0f0e86cc:
/*  f0e86cc:	244d0008 */ 	addiu	$t5,$v0,0x8
/*  f0e86d0:	3c128008 */ 	lui	$s2,%hi(g_ScreenWidthMultiplier)
/*  f0e86d4:	afad00f8 */ 	sw	$t5,0xf8($sp)
/*  f0e86d8:	868e0000 */ 	lh	$t6,0x0($s4)
/*  f0e86dc:	2652fac0 */ 	addiu	$s2,$s2,%lo(g_ScreenWidthMultiplier)
/*  f0e86e0:	8e580000 */ 	lw	$t8,0x0($s2)
/*  f0e86e4:	25cf007d */ 	addiu	$t7,$t6,0x7d
/*  f0e86e8:	868d0002 */ 	lh	$t5,0x2($s4)
/*  f0e86ec:	01f80019 */ 	multu	$t7,$t8
/*  f0e86f0:	3c16f600 */ 	lui	$s6,0xf600
/*  f0e86f4:	25ae000a */ 	addiu	$t6,$t5,0xa
/*  f0e86f8:	31cf03ff */ 	andi	$t7,$t6,0x3ff
/*  f0e86fc:	000fc080 */ 	sll	$t8,$t7,0x2
/*  f0e8700:	0000c812 */ 	mflo	$t9
/*  f0e8704:	332b03ff */ 	andi	$t3,$t9,0x3ff
/*  f0e8708:	000b5380 */ 	sll	$t2,$t3,0xe
/*  f0e870c:	01566025 */ 	or	$t4,$t2,$s6
/*  f0e8710:	0198c825 */ 	or	$t9,$t4,$t8
/*  f0e8714:	ac590000 */ 	sw	$t9,0x0($v0)
/*  f0e8718:	868b0000 */ 	lh	$t3,0x0($s4)
/*  f0e871c:	8e4d0000 */ 	lw	$t5,0x0($s2)
/*  f0e8720:	86980002 */ 	lh	$t8,0x2($s4)
/*  f0e8724:	256a0004 */ 	addiu	$t2,$t3,0x4
/*  f0e8728:	014d0019 */ 	multu	$t2,$t5
/*  f0e872c:	27190001 */ 	addiu	$t9,$t8,0x1
/*  f0e8730:	332b03ff */ 	andi	$t3,$t9,0x3ff
/*  f0e8734:	000b5080 */ 	sll	$t2,$t3,0x2
/*  f0e8738:	00007012 */ 	mflo	$t6
/*  f0e873c:	31cf03ff */ 	andi	$t7,$t6,0x3ff
/*  f0e8740:	000f6380 */ 	sll	$t4,$t7,0xe
/*  f0e8744:	018a6825 */ 	or	$t5,$t4,$t2
/*  f0e8748:	ac4d0004 */ 	sw	$t5,0x4($v0)
.L0f0e874c:
/*  f0e874c:	0fc54e0e */ 	jal	func0f153838
/*  f0e8750:	8fa400f8 */ 	lw	$a0,0xf8($sp)
/*  f0e8754:	868e0000 */ 	lh	$t6,0x0($s4)
/*  f0e8758:	00402025 */ 	or	$a0,$v0,$zero
/*  f0e875c:	25cf0004 */ 	addiu	$t7,$t6,0x4
/*  f0e8760:	afaf00ec */ 	sw	$t7,0xec($sp)
/*  f0e8764:	86980002 */ 	lh	$t8,0x2($s4)
/*  f0e8768:	27190002 */ 	addiu	$t9,$t8,0x2
/*  f0e876c:	0fc54d8a */ 	jal	func0f153628
/*  f0e8770:	afb900e8 */ 	sw	$t9,0xe8($sp)
/*  f0e8774:	3c0b8008 */ 	lui	$t3,%hi(var8007fb10)
/*  f0e8778:	3c0c8008 */ 	lui	$t4,%hi(var8007fb0c)
/*  f0e877c:	8d8cfb0c */ 	lw	$t4,%lo(var8007fb0c)($t4)
/*  f0e8780:	8d6bfb10 */ 	lw	$t3,%lo(var8007fb10)($t3)
/*  f0e8784:	240affff */ 	addiu	$t2,$zero,-1
/*  f0e8788:	afaa0018 */ 	sw	$t2,0x18($sp)
/*  f0e878c:	afac0014 */ 	sw	$t4,0x14($sp)
/*  f0e8790:	afab0010 */ 	sw	$t3,0x10($sp)
/*  f0e8794:	868d0004 */ 	lh	$t5,0x4($s4)
/*  f0e8798:	00402025 */ 	or	$a0,$v0,$zero
/*  f0e879c:	27a500ec */ 	addiu	$a1,$sp,0xec
/*  f0e87a0:	afad001c */ 	sw	$t5,0x1c($sp)
/*  f0e87a4:	868e0006 */ 	lh	$t6,0x6($s4)
/*  f0e87a8:	afa00028 */ 	sw	$zero,0x28($sp)
/*  f0e87ac:	afa00024 */ 	sw	$zero,0x24($sp)
/*  f0e87b0:	27a600e8 */ 	addiu	$a2,$sp,0xe8
/*  f0e87b4:	8fa700e4 */ 	lw	$a3,0xe4($sp)
/*  f0e87b8:	0fc5580f */ 	jal	textRenderWhite
/*  f0e87bc:	afae0020 */ 	sw	$t6,0x20($sp)
/*  f0e87c0:	0fc54de0 */ 	jal	func0f153780
/*  f0e87c4:	00402025 */ 	or	$a0,$v0,$zero
/*  f0e87c8:	3c014220 */ 	lui	$at,0x4220
/*  f0e87cc:	4481b000 */ 	mtc1	$at,$f22
/*  f0e87d0:	afa200f8 */ 	sw	$v0,0xf8($sp)
/*  f0e87d4:	0fc01ac2 */ 	jal	func0f006b08
/*  f0e87d8:	4600b306 */ 	mov.s	$f12,$f22
/*  f0e87dc:	3c01437f */ 	lui	$at,0x437f
/*  f0e87e0:	4481c000 */ 	mtc1	$at,$f24
/*  f0e87e4:	24130001 */ 	addiu	$s3,$zero,0x1
/*  f0e87e8:	4480a000 */ 	mtc1	$zero,$f20
/*  f0e87ec:	46180102 */ 	mul.s	$f4,$f0,$f24
/*  f0e87f0:	444ff800 */ 	cfc1	$t7,$31
/*  f0e87f4:	44d3f800 */ 	ctc1	$s3,$31
/*  f0e87f8:	00000000 */ 	nop
/*  f0e87fc:	460021a4 */ 	cvt.w.s	$f6,$f4
/*  f0e8800:	4453f800 */ 	cfc1	$s3,$31
/*  f0e8804:	00000000 */ 	nop
/*  f0e8808:	32730078 */ 	andi	$s3,$s3,0x78
/*  f0e880c:	12600012 */ 	beqz	$s3,.L0f0e8858
/*  f0e8810:	3c014f00 */ 	lui	$at,0x4f00
/*  f0e8814:	44813000 */ 	mtc1	$at,$f6
/*  f0e8818:	24130001 */ 	addiu	$s3,$zero,0x1
/*  f0e881c:	46062181 */ 	sub.s	$f6,$f4,$f6
/*  f0e8820:	44d3f800 */ 	ctc1	$s3,$31
/*  f0e8824:	00000000 */ 	nop
/*  f0e8828:	460031a4 */ 	cvt.w.s	$f6,$f6
/*  f0e882c:	4453f800 */ 	cfc1	$s3,$31
/*  f0e8830:	00000000 */ 	nop
/*  f0e8834:	32730078 */ 	andi	$s3,$s3,0x78
/*  f0e8838:	16600005 */ 	bnez	$s3,.L0f0e8850
/*  f0e883c:	00000000 */ 	nop
/*  f0e8840:	44133000 */ 	mfc1	$s3,$f6
/*  f0e8844:	3c018000 */ 	lui	$at,0x8000
/*  f0e8848:	10000007 */ 	b	.L0f0e8868
/*  f0e884c:	02619825 */ 	or	$s3,$s3,$at
.L0f0e8850:
/*  f0e8850:	10000005 */ 	b	.L0f0e8868
/*  f0e8854:	2413ffff */ 	addiu	$s3,$zero,-1
.L0f0e8858:
/*  f0e8858:	44133000 */ 	mfc1	$s3,$f6
/*  f0e885c:	00000000 */ 	nop
/*  f0e8860:	0660fffb */ 	bltz	$s3,.L0f0e8850
/*  f0e8864:	00000000 */ 	nop
.L0f0e8868:
/*  f0e8868:	8e900010 */ 	lw	$s0,0x10($s4)
/*  f0e886c:	44cff800 */ 	ctc1	$t7,$31
/*  f0e8870:	c6080040 */ 	lwc1	$f8,0x40($s0)
/*  f0e8874:	4614403c */ 	c.lt.s	$f8,$f20
/*  f0e8878:	00000000 */ 	nop
/*  f0e887c:	4502000a */ 	bc1fl	.L0f0e88a8
/*  f0e8880:	920c003d */ 	lbu	$t4,0x3d($s0)
/*  f0e8884:	9218003c */ 	lbu	$t8,0x3c($s0)
/*  f0e8888:	3c1e7f1b */ 	lui	$s8,%hi(g_MenuColourPalettes)
/*  f0e888c:	27de1fb0 */ 	addiu	$s8,$s8,%lo(g_MenuColourPalettes)
/*  f0e8890:	03150019 */ 	multu	$t8,$s5
/*  f0e8894:	0000c812 */ 	mflo	$t9
/*  f0e8898:	03d95821 */ 	addu	$t3,$s8,$t9
/*  f0e889c:	10000010 */ 	b	.L0f0e88e0
/*  f0e88a0:	8d710020 */ 	lw	$s1,0x20($t3)
/*  f0e88a4:	920c003d */ 	lbu	$t4,0x3d($s0)
.L0f0e88a8:
/*  f0e88a8:	920e003c */ 	lbu	$t6,0x3c($s0)
/*  f0e88ac:	3c1e7f1b */ 	lui	$s8,%hi(g_MenuColourPalettes)
/*  f0e88b0:	01950019 */ 	multu	$t4,$s5
/*  f0e88b4:	27de1fb0 */ 	addiu	$s8,$s8,%lo(g_MenuColourPalettes)
/*  f0e88b8:	8e060044 */ 	lw	$a2,0x44($s0)
/*  f0e88bc:	00005012 */ 	mflo	$t2
/*  f0e88c0:	03ca6821 */ 	addu	$t5,$s8,$t2
/*  f0e88c4:	8da40020 */ 	lw	$a0,0x20($t5)
/*  f0e88c8:	01d50019 */ 	multu	$t6,$s5
/*  f0e88cc:	00007812 */ 	mflo	$t7
/*  f0e88d0:	03cfc021 */ 	addu	$t8,$s8,$t7
/*  f0e88d4:	0fc01a40 */ 	jal	colourBlend
/*  f0e88d8:	8f050020 */ 	lw	$a1,0x20($t8)
/*  f0e88dc:	00408825 */ 	or	$s1,$v0,$zero
.L0f0e88e0:
/*  f0e88e0:	3404ffff */ 	dli	$a0,0xffff
/*  f0e88e4:	240500ff */ 	addiu	$a1,$zero,0xff
/*  f0e88e8:	0fc01a40 */ 	jal	colourBlend
/*  f0e88ec:	2406007f */ 	addiu	$a2,$zero,0x7f
/*  f0e88f0:	00402025 */ 	or	$a0,$v0,$zero
/*  f0e88f4:	02202825 */ 	or	$a1,$s1,$zero
/*  f0e88f8:	0fc01a40 */ 	jal	colourBlend
/*  f0e88fc:	02603025 */ 	or	$a2,$s3,$zero
/*  f0e8900:	8fa400f8 */ 	lw	$a0,0xf8($sp)
/*  f0e8904:	0fc54df7 */ 	jal	func0f1537dc
/*  f0e8908:	00402825 */ 	or	$a1,$v0,$zero
/*  f0e890c:	8fb900ec */ 	lw	$t9,0xec($sp)
/*  f0e8910:	8e4c0000 */ 	lw	$t4,0x0($s2)
/*  f0e8914:	86980002 */ 	lh	$t8,0x2($s4)
/*  f0e8918:	272b0003 */ 	addiu	$t3,$t9,0x3
/*  f0e891c:	016c0019 */ 	multu	$t3,$t4
/*  f0e8920:	27190009 */ 	addiu	$t9,$t8,0x9
/*  f0e8924:	332b03ff */ 	andi	$t3,$t9,0x3ff
/*  f0e8928:	000b6080 */ 	sll	$t4,$t3,0x2
/*  f0e892c:	24440008 */ 	addiu	$a0,$v0,0x8
/*  f0e8930:	00005012 */ 	mflo	$t2
/*  f0e8934:	314d03ff */ 	andi	$t5,$t2,0x3ff
/*  f0e8938:	000d7380 */ 	sll	$t6,$t5,0xe
/*  f0e893c:	01d67825 */ 	or	$t7,$t6,$s6
/*  f0e8940:	01ec5025 */ 	or	$t2,$t7,$t4
/*  f0e8944:	ac4a0000 */ 	sw	$t2,0x0($v0)
/*  f0e8948:	8fad00ec */ 	lw	$t5,0xec($sp)
/*  f0e894c:	8e580000 */ 	lw	$t8,0x0($s2)
/*  f0e8950:	868c0002 */ 	lh	$t4,0x2($s4)
/*  f0e8954:	25ae0001 */ 	addiu	$t6,$t5,0x1
/*  f0e8958:	01d80019 */ 	multu	$t6,$t8
/*  f0e895c:	258a0002 */ 	addiu	$t2,$t4,0x2
/*  f0e8960:	314d03ff */ 	andi	$t5,$t2,0x3ff
/*  f0e8964:	000d7080 */ 	sll	$t6,$t5,0x2
/*  f0e8968:	0000c812 */ 	mflo	$t9
/*  f0e896c:	332b03ff */ 	andi	$t3,$t9,0x3ff
/*  f0e8970:	000b7b80 */ 	sll	$t7,$t3,0xe
/*  f0e8974:	01eec025 */ 	or	$t8,$t7,$t6
/*  f0e8978:	0fc54e0e */ 	jal	func0f153838
/*  f0e897c:	ac580004 */ 	sw	$t8,0x4($v0)
/*  f0e8980:	3c1000ff */ 	lui	$s0,0xff
/*  f0e8984:	00402025 */ 	or	$a0,$v0,$zero
/*  f0e8988:	3610ff7f */ 	ori	$s0,$s0,0xff7f
/*  f0e898c:	afa00088 */ 	sw	$zero,0x88($sp)
/*  f0e8990:	24110042 */ 	addiu	$s1,$zero,0x42
.L0f0e8994:
/*  f0e8994:	8fa80088 */ 	lw	$t0,0x88($sp)
/*  f0e8998:	86990002 */ 	lh	$t9,0x2($s4)
/*  f0e899c:	86820000 */ 	lh	$v0,0x0($s4)
/*  f0e89a0:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f0e89a4:	03281821 */ 	addu	$v1,$t9,$t0
/*  f0e89a8:	246b000e */ 	addiu	$t3,$v1,0xe
/*  f0e89ac:	afab0010 */ 	sw	$t3,0x10($sp)
/*  f0e89b0:	2466000d */ 	addiu	$a2,$v1,0xd
/*  f0e89b4:	afb00014 */ 	sw	$s0,0x14($sp)
/*  f0e89b8:	24450004 */ 	addiu	$a1,$v0,0x4
/*  f0e89bc:	0fc38bd7 */ 	jal	renderFilledRect
/*  f0e89c0:	2447007c */ 	addiu	$a3,$v0,0x7c
/*  f0e89c4:	8fa30088 */ 	lw	$v1,0x88($sp)
/*  f0e89c8:	afa200f8 */ 	sw	$v0,0xf8($sp)
/*  f0e89cc:	00402025 */ 	or	$a0,$v0,$zero
/*  f0e89d0:	2463000b */ 	addiu	$v1,$v1,0xb
/*  f0e89d4:	1471ffef */ 	bne	$v1,$s1,.L0f0e8994
/*  f0e89d8:	afa30088 */ 	sw	$v1,0x88($sp)
/*  f0e89dc:	afa00084 */ 	sw	$zero,0x84($sp)
/*  f0e89e0:	24170054 */ 	addiu	$s7,$zero,0x54
/*  f0e89e4:	24160048 */ 	addiu	$s6,$zero,0x48
/*  f0e89e8:	24130030 */ 	addiu	$s3,$zero,0x30
/*  f0e89ec:	24120024 */ 	addiu	$s2,$zero,0x24
/*  f0e89f0:	2411000c */ 	addiu	$s1,$zero,0xc
.L0f0e89f4:
/*  f0e89f4:	8fa80084 */ 	lw	$t0,0x84($sp)
/*  f0e89f8:	24090005 */ 	addiu	$t1,$zero,0x5
/*  f0e89fc:	5111000c */ 	beql	$t0,$s1,.L0f0e8a30
/*  f0e8a00:	24090004 */ 	addiu	$t1,$zero,0x4
/*  f0e8a04:	5112000a */ 	beql	$t0,$s2,.L0f0e8a30
/*  f0e8a08:	24090004 */ 	addiu	$t1,$zero,0x4
/*  f0e8a0c:	51130008 */ 	beql	$t0,$s3,.L0f0e8a30
/*  f0e8a10:	24090004 */ 	addiu	$t1,$zero,0x4
/*  f0e8a14:	51160006 */ 	beql	$t0,$s6,.L0f0e8a30
/*  f0e8a18:	24090004 */ 	addiu	$t1,$zero,0x4
/*  f0e8a1c:	11170003 */ 	beq	$t0,$s7,.L0f0e8a2c
/*  f0e8a20:	2401006c */ 	addiu	$at,$zero,0x6c
/*  f0e8a24:	55010003 */ 	bnel	$t0,$at,.L0f0e8a34
/*  f0e8a28:	00095080 */ 	sll	$t2,$t1,0x2
.L0f0e8a2c:
/*  f0e8a2c:	24090004 */ 	addiu	$t1,$zero,0x4
.L0f0e8a30:
/*  f0e8a30:	00095080 */ 	sll	$t2,$t1,0x2
.L0f0e8a34:
/*  f0e8a34:	86820002 */ 	lh	$v0,0x2($s4)
/*  f0e8a38:	01495023 */ 	subu	$t2,$t2,$t1
/*  f0e8a3c:	868c0000 */ 	lh	$t4,0x0($s4)
/*  f0e8a40:	000a5080 */ 	sll	$t2,$t2,0x2
/*  f0e8a44:	01495023 */ 	subu	$t2,$t2,$t1
/*  f0e8a48:	004a6821 */ 	addu	$t5,$v0,$t2
/*  f0e8a4c:	25af000e */ 	addiu	$t7,$t5,0xe
/*  f0e8a50:	01881821 */ 	addu	$v1,$t4,$t0
/*  f0e8a54:	24650004 */ 	addiu	$a1,$v1,0x4
/*  f0e8a58:	24670005 */ 	addiu	$a3,$v1,0x5
/*  f0e8a5c:	afaf0010 */ 	sw	$t7,0x10($sp)
/*  f0e8a60:	afa80084 */ 	sw	$t0,0x84($sp)
/*  f0e8a64:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f0e8a68:	afb00014 */ 	sw	$s0,0x14($sp)
/*  f0e8a6c:	0fc38bd7 */ 	jal	renderFilledRect
/*  f0e8a70:	2446000d */ 	addiu	$a2,$v0,0xd
/*  f0e8a74:	8fae0084 */ 	lw	$t6,0x84($sp)
/*  f0e8a78:	afa200f8 */ 	sw	$v0,0xf8($sp)
/*  f0e8a7c:	00402025 */ 	or	$a0,$v0,$zero
/*  f0e8a80:	25d8000c */ 	addiu	$t8,$t6,0xc
/*  f0e8a84:	2b010084 */ 	slti	$at,$t8,0x84
/*  f0e8a88:	1420ffda */ 	bnez	$at,.L0f0e89f4
/*  f0e8a8c:	afb80084 */ 	sw	$t8,0x84($sp)
/*  f0e8a90:	0fc54d8a */ 	jal	func0f153628
/*  f0e8a94:	00000000 */ 	nop
/*  f0e8a98:	afa200f8 */ 	sw	$v0,0xf8($sp)
/*  f0e8a9c:	86990000 */ 	lh	$t9,0x0($s4)
/*  f0e8aa0:	0000b825 */ 	or	$s7,$zero,$zero
/*  f0e8aa4:	272b000a */ 	addiu	$t3,$t9,0xa
/*  f0e8aa8:	afab00ec */ 	sw	$t3,0xec($sp)
/*  f0e8aac:	868c0002 */ 	lh	$t4,0x2($s4)
/*  f0e8ab0:	afa00084 */ 	sw	$zero,0x84($sp)
/*  f0e8ab4:	258a0002 */ 	addiu	$t2,$t4,0x2
/*  f0e8ab8:	afaa00e8 */ 	sw	$t2,0xe8($sp)
.L0f0e8abc:
/*  f0e8abc:	0000b025 */ 	or	$s6,$zero,$zero
/*  f0e8ac0:	afa00088 */ 	sw	$zero,0x88($sp)
.L0f0e8ac4:
/*  f0e8ac4:	8e900010 */ 	lw	$s0,0x10($s4)
/*  f0e8ac8:	c60a0040 */ 	lwc1	$f10,0x40($s0)
/*  f0e8acc:	4614503c */ 	c.lt.s	$f10,$f20
/*  f0e8ad0:	00000000 */ 	nop
/*  f0e8ad4:	45020008 */ 	bc1fl	.L0f0e8af8
/*  f0e8ad8:	9218003d */ 	lbu	$t8,0x3d($s0)
/*  f0e8adc:	920d003c */ 	lbu	$t5,0x3c($s0)
/*  f0e8ae0:	01b50019 */ 	multu	$t5,$s5
/*  f0e8ae4:	00007812 */ 	mflo	$t7
/*  f0e8ae8:	03cf7021 */ 	addu	$t6,$s8,$t7
/*  f0e8aec:	1000000f */ 	b	.L0f0e8b2c
/*  f0e8af0:	8dd20018 */ 	lw	$s2,0x18($t6)
/*  f0e8af4:	9218003d */ 	lbu	$t8,0x3d($s0)
.L0f0e8af8:
/*  f0e8af8:	920c003c */ 	lbu	$t4,0x3c($s0)
/*  f0e8afc:	8e060044 */ 	lw	$a2,0x44($s0)
/*  f0e8b00:	03150019 */ 	multu	$t8,$s5
/*  f0e8b04:	0000c812 */ 	mflo	$t9
/*  f0e8b08:	03d95821 */ 	addu	$t3,$s8,$t9
/*  f0e8b0c:	8d640018 */ 	lw	$a0,0x18($t3)
/*  f0e8b10:	01950019 */ 	multu	$t4,$s5
/*  f0e8b14:	00005012 */ 	mflo	$t2
/*  f0e8b18:	03ca6821 */ 	addu	$t5,$s8,$t2
/*  f0e8b1c:	0fc01a40 */ 	jal	colourBlend
/*  f0e8b20:	8da50018 */ 	lw	$a1,0x18($t5)
/*  f0e8b24:	00409025 */ 	or	$s2,$v0,$zero
/*  f0e8b28:	8e900010 */ 	lw	$s0,0x10($s4)
.L0f0e8b2c:
/*  f0e8b2c:	8e0f000c */ 	lw	$t7,0xc($s0)
/*  f0e8b30:	02402025 */ 	or	$a0,$s2,$zero
/*  f0e8b34:	00002825 */ 	or	$a1,$zero,$zero
/*  f0e8b38:	51e00008 */ 	beqzl	$t7,.L0f0e8b5c
/*  f0e8b3c:	8fb900e4 */ 	lw	$t9,0xe4($sp)
/*  f0e8b40:	0fc01a40 */ 	jal	colourBlend
/*  f0e8b44:	2406007f */ 	addiu	$a2,$zero,0x7f
/*  f0e8b48:	2401ff00 */ 	addiu	$at,$zero,-256
/*  f0e8b4c:	00417024 */ 	and	$t6,$v0,$at
/*  f0e8b50:	325800ff */ 	andi	$t8,$s2,0xff
/*  f0e8b54:	01d89025 */ 	or	$s2,$t6,$t8
/*  f0e8b58:	8fb900e4 */ 	lw	$t9,0xe4($sp)
.L0f0e8b5c:
/*  f0e8b5c:	24010002 */ 	addiu	$at,$zero,0x2
/*  f0e8b60:	8fae00e4 */ 	lw	$t6,0xe4($sp)
/*  f0e8b64:	932b000d */ 	lbu	$t3,0xd($t9)
/*  f0e8b68:	000b5640 */ 	sll	$t2,$t3,0x19
/*  f0e8b6c:	05430008 */ 	bgezl	$t2,.L0f0e8b90
/*  f0e8b70:	81d8000b */ 	lb	$t8,0xb($t6)
/*  f0e8b74:	16e10005 */ 	bne	$s7,$at,.L0f0e8b8c
/*  f0e8b78:	24010004 */ 	addiu	$at,$zero,0x4
/*  f0e8b7c:	16c10003 */ 	bne	$s6,$at,.L0f0e8b8c
/*  f0e8b80:	324d00ff */ 	andi	$t5,$s2,0xff
/*  f0e8b84:	3c01ffff */ 	lui	$at,0xffff
/*  f0e8b88:	01a19025 */ 	or	$s2,$t5,$at
.L0f0e8b8c:
/*  f0e8b8c:	81d8000b */ 	lb	$t8,0xb($t6)
.L0f0e8b90:
/*  f0e8b90:	56f8004b */ 	bnel	$s7,$t8,.L0f0e8cc0
/*  f0e8b94:	868a0000 */ 	lh	$t2,0x0($s4)
/*  f0e8b98:	81d9000c */ 	lb	$t9,0xc($t6)
/*  f0e8b9c:	56d90048 */ 	bnel	$s6,$t9,.L0f0e8cc0
/*  f0e8ba0:	868a0000 */ 	lh	$t2,0x0($s4)
/*  f0e8ba4:	0fc01ac2 */ 	jal	func0f006b08
/*  f0e8ba8:	4600b306 */ 	mov.s	$f12,$f22
/*  f0e8bac:	46180402 */ 	mul.s	$f16,$f0,$f24
/*  f0e8bb0:	24130001 */ 	addiu	$s3,$zero,0x1
/*  f0e8bb4:	3c014f00 */ 	lui	$at,0x4f00
/*  f0e8bb8:	444bf800 */ 	cfc1	$t3,$31
/*  f0e8bbc:	44d3f800 */ 	ctc1	$s3,$31
/*  f0e8bc0:	00000000 */ 	nop
/*  f0e8bc4:	460084a4 */ 	cvt.w.s	$f18,$f16
/*  f0e8bc8:	4453f800 */ 	cfc1	$s3,$31
/*  f0e8bcc:	00000000 */ 	nop
/*  f0e8bd0:	32730078 */ 	andi	$s3,$s3,0x78
/*  f0e8bd4:	52600013 */ 	beqzl	$s3,.L0f0e8c24
/*  f0e8bd8:	44139000 */ 	mfc1	$s3,$f18
/*  f0e8bdc:	44819000 */ 	mtc1	$at,$f18
/*  f0e8be0:	24130001 */ 	addiu	$s3,$zero,0x1
/*  f0e8be4:	46128481 */ 	sub.s	$f18,$f16,$f18
/*  f0e8be8:	44d3f800 */ 	ctc1	$s3,$31
/*  f0e8bec:	00000000 */ 	nop
/*  f0e8bf0:	460094a4 */ 	cvt.w.s	$f18,$f18
/*  f0e8bf4:	4453f800 */ 	cfc1	$s3,$31
/*  f0e8bf8:	00000000 */ 	nop
/*  f0e8bfc:	32730078 */ 	andi	$s3,$s3,0x78
/*  f0e8c00:	16600005 */ 	bnez	$s3,.L0f0e8c18
/*  f0e8c04:	00000000 */ 	nop
/*  f0e8c08:	44139000 */ 	mfc1	$s3,$f18
/*  f0e8c0c:	3c018000 */ 	lui	$at,0x8000
/*  f0e8c10:	10000007 */ 	b	.L0f0e8c30
/*  f0e8c14:	02619825 */ 	or	$s3,$s3,$at
.L0f0e8c18:
/*  f0e8c18:	10000005 */ 	b	.L0f0e8c30
/*  f0e8c1c:	2413ffff */ 	addiu	$s3,$zero,-1
/*  f0e8c20:	44139000 */ 	mfc1	$s3,$f18
.L0f0e8c24:
/*  f0e8c24:	00000000 */ 	nop
/*  f0e8c28:	0660fffb */ 	bltz	$s3,.L0f0e8c18
/*  f0e8c2c:	00000000 */ 	nop
.L0f0e8c30:
/*  f0e8c30:	8e900010 */ 	lw	$s0,0x10($s4)
/*  f0e8c34:	44cbf800 */ 	ctc1	$t3,$31
/*  f0e8c38:	c6040040 */ 	lwc1	$f4,0x40($s0)
/*  f0e8c3c:	4614203c */ 	c.lt.s	$f4,$f20
/*  f0e8c40:	00000000 */ 	nop
/*  f0e8c44:	45020008 */ 	bc1fl	.L0f0e8c68
/*  f0e8c48:	920f003d */ 	lbu	$t7,0x3d($s0)
/*  f0e8c4c:	920c003c */ 	lbu	$t4,0x3c($s0)
/*  f0e8c50:	01950019 */ 	multu	$t4,$s5
/*  f0e8c54:	00005012 */ 	mflo	$t2
/*  f0e8c58:	03ca6821 */ 	addu	$t5,$s8,$t2
/*  f0e8c5c:	1000000e */ 	b	.L0f0e8c98
/*  f0e8c60:	8db10020 */ 	lw	$s1,0x20($t5)
/*  f0e8c64:	920f003d */ 	lbu	$t7,0x3d($s0)
.L0f0e8c68:
/*  f0e8c68:	9219003c */ 	lbu	$t9,0x3c($s0)
/*  f0e8c6c:	8e060044 */ 	lw	$a2,0x44($s0)
/*  f0e8c70:	01f50019 */ 	multu	$t7,$s5
/*  f0e8c74:	0000c012 */ 	mflo	$t8
/*  f0e8c78:	03d87021 */ 	addu	$t6,$s8,$t8
/*  f0e8c7c:	8dc40020 */ 	lw	$a0,0x20($t6)
/*  f0e8c80:	03350019 */ 	multu	$t9,$s5
/*  f0e8c84:	00005812 */ 	mflo	$t3
/*  f0e8c88:	03cb6021 */ 	addu	$t4,$s8,$t3
/*  f0e8c8c:	0fc01a40 */ 	jal	colourBlend
/*  f0e8c90:	8d850020 */ 	lw	$a1,0x20($t4)
/*  f0e8c94:	00408825 */ 	or	$s1,$v0,$zero
.L0f0e8c98:
/*  f0e8c98:	02402025 */ 	or	$a0,$s2,$zero
/*  f0e8c9c:	324500ff */ 	andi	$a1,$s2,0xff
/*  f0e8ca0:	0fc01a40 */ 	jal	colourBlend
/*  f0e8ca4:	2406007f */ 	addiu	$a2,$zero,0x7f
/*  f0e8ca8:	00402025 */ 	or	$a0,$v0,$zero
/*  f0e8cac:	02202825 */ 	or	$a1,$s1,$zero
/*  f0e8cb0:	0fc01a40 */ 	jal	colourBlend
/*  f0e8cb4:	02603025 */ 	or	$a2,$s3,$zero
/*  f0e8cb8:	00409025 */ 	or	$s2,$v0,$zero
/*  f0e8cbc:	868a0000 */ 	lh	$t2,0x0($s4)
.L0f0e8cc0:
/*  f0e8cc0:	8fad0084 */ 	lw	$t5,0x84($sp)
/*  f0e8cc4:	8fb90088 */ 	lw	$t9,0x88($sp)
/*  f0e8cc8:	24010004 */ 	addiu	$at,$zero,0x4
/*  f0e8ccc:	014d7821 */ 	addu	$t7,$t2,$t5
/*  f0e8cd0:	25f80004 */ 	addiu	$t8,$t7,0x4
/*  f0e8cd4:	afb800ec */ 	sw	$t8,0xec($sp)
/*  f0e8cd8:	868e0002 */ 	lh	$t6,0x2($s4)
/*  f0e8cdc:	0016c080 */ 	sll	$t8,$s6,0x2
/*  f0e8ce0:	0316c021 */ 	addu	$t8,$t8,$s6
/*  f0e8ce4:	01d95821 */ 	addu	$t3,$t6,$t9
/*  f0e8ce8:	256c000f */ 	addiu	$t4,$t3,0xf
/*  f0e8cec:	16c10095 */ 	bne	$s6,$at,.L0f0e8f44
/*  f0e8cf0:	afac00e8 */ 	sw	$t4,0xe8($sp)
/*  f0e8cf4:	3c0d8007 */ 	lui	$t5,%hi(var800711e0)
/*  f0e8cf8:	25ad11e0 */ 	addiu	$t5,$t5,%lo(var800711e0)
/*  f0e8cfc:	8da10000 */ 	lw	$at,0x0($t5)
/*  f0e8d00:	8db80004 */ 	lw	$t8,0x4($t5)
/*  f0e8d04:	27aa00a8 */ 	addiu	$t2,$sp,0xa8
/*  f0e8d08:	2402ffff */ 	addiu	$v0,$zero,-1
/*  f0e8d0c:	ad410000 */ 	sw	$at,0x0($t2)
/*  f0e8d10:	16e00002 */ 	bnez	$s7,.L0f0e8d1c
/*  f0e8d14:	ad580004 */ 	sw	$t8,0x4($t2)
/*  f0e8d18:	00001025 */ 	or	$v0,$zero,$zero
.L0f0e8d1c:
/*  f0e8d1c:	24010002 */ 	addiu	$at,$zero,0x2
/*  f0e8d20:	16e10002 */ 	bne	$s7,$at,.L0f0e8d2c
/*  f0e8d24:	8fae00e8 */ 	lw	$t6,0xe8($sp)
/*  f0e8d28:	24020001 */ 	addiu	$v0,$zero,0x1
.L0f0e8d2c:
/*  f0e8d2c:	24010005 */ 	addiu	$at,$zero,0x5
/*  f0e8d30:	16e10002 */ 	bne	$s7,$at,.L0f0e8d3c
/*  f0e8d34:	24100018 */ 	addiu	$s0,$zero,0x18
/*  f0e8d38:	24020002 */ 	addiu	$v0,$zero,0x2
.L0f0e8d3c:
/*  f0e8d3c:	24010008 */ 	addiu	$at,$zero,0x8
/*  f0e8d40:	16e10002 */ 	bne	$s7,$at,.L0f0e8d4c
/*  f0e8d44:	25d90001 */ 	addiu	$t9,$t6,0x1
/*  f0e8d48:	24020003 */ 	addiu	$v0,$zero,0x3
.L0f0e8d4c:
/*  f0e8d4c:	044000b5 */ 	bltz	$v0,.L0f0e9024
/*  f0e8d50:	24010001 */ 	addiu	$at,$zero,0x1
/*  f0e8d54:	10410004 */ 	beq	$v0,$at,.L0f0e8d68
/*  f0e8d58:	afb900e8 */ 	sw	$t9,0xe8($sp)
/*  f0e8d5c:	24010002 */ 	addiu	$at,$zero,0x2
/*  f0e8d60:	54410003 */ 	bnel	$v0,$at,.L0f0e8d70
/*  f0e8d64:	00025840 */ 	sll	$t3,$v0,0x1
.L0f0e8d68:
/*  f0e8d68:	24100024 */ 	addiu	$s0,$zero,0x24
/*  f0e8d6c:	00025840 */ 	sll	$t3,$v0,0x1
.L0f0e8d70:
/*  f0e8d70:	27ac00a8 */ 	addiu	$t4,$sp,0xa8
/*  f0e8d74:	016c8821 */ 	addu	$s1,$t3,$t4
/*  f0e8d78:	0fc5b9f1 */ 	jal	langGet
/*  f0e8d7c:	96240000 */ 	lhu	$a0,0x0($s1)
/*  f0e8d80:	3c0f8008 */ 	lui	$t7,%hi(var8007fb04)
/*  f0e8d84:	8deffb04 */ 	lw	$t7,%lo(var8007fb04)($t7)
/*  f0e8d88:	3c078008 */ 	lui	$a3,%hi(var8007fb08)
/*  f0e8d8c:	8ce7fb08 */ 	lw	$a3,%lo(var8007fb08)($a3)
/*  f0e8d90:	27a400c0 */ 	addiu	$a0,$sp,0xc0
/*  f0e8d94:	27a500bc */ 	addiu	$a1,$sp,0xbc
/*  f0e8d98:	00403025 */ 	or	$a2,$v0,$zero
/*  f0e8d9c:	afa00014 */ 	sw	$zero,0x14($sp)
/*  f0e8da0:	0fc55cbe */ 	jal	textMeasure
/*  f0e8da4:	afaf0010 */ 	sw	$t7,0x10($sp)
/*  f0e8da8:	8faa00bc */ 	lw	$t2,0xbc($sp)
/*  f0e8dac:	8fae00ec */ 	lw	$t6,0xec($sp)
/*  f0e8db0:	27ab00ae */ 	addiu	$t3,$sp,0xae
/*  f0e8db4:	020a6823 */ 	subu	$t5,$s0,$t2
/*  f0e8db8:	05a10003 */ 	bgez	$t5,.L0f0e8dc8
/*  f0e8dbc:	000dc043 */ 	sra	$t8,$t5,0x1
/*  f0e8dc0:	25a10001 */ 	addiu	$at,$t5,0x1
/*  f0e8dc4:	0001c043 */ 	sra	$t8,$at,0x1
.L0f0e8dc8:
/*  f0e8dc8:	030ec821 */ 	addu	$t9,$t8,$t6
/*  f0e8dcc:	162b0035 */ 	bne	$s1,$t3,.L0f0e8ea4
/*  f0e8dd0:	afb900ec */ 	sw	$t9,0xec($sp)
/*  f0e8dd4:	0fc3a157 */ 	jal	menuIsStringEmptyOrSpaces
/*  f0e8dd8:	8fa400e4 */ 	lw	$a0,0xe4($sp)
/*  f0e8ddc:	10400031 */ 	beqz	$v0,.L0f0e8ea4
/*  f0e8de0:	00000000 */ 	nop
/*  f0e8de4:	8e900010 */ 	lw	$s0,0x10($s4)
/*  f0e8de8:	c6060040 */ 	lwc1	$f6,0x40($s0)
/*  f0e8dec:	4614303c */ 	c.lt.s	$f6,$f20
/*  f0e8df0:	00000000 */ 	nop
/*  f0e8df4:	45020008 */ 	bc1fl	.L0f0e8e18
/*  f0e8df8:	920d003d */ 	lbu	$t5,0x3d($s0)
/*  f0e8dfc:	920c003c */ 	lbu	$t4,0x3c($s0)
/*  f0e8e00:	01950019 */ 	multu	$t4,$s5
/*  f0e8e04:	00007812 */ 	mflo	$t7
/*  f0e8e08:	03cf5021 */ 	addu	$t2,$s8,$t7
/*  f0e8e0c:	1000000f */ 	b	.L0f0e8e4c
/*  f0e8e10:	8d52001c */ 	lw	$s2,0x1c($t2)
/*  f0e8e14:	920d003d */ 	lbu	$t5,0x3d($s0)
.L0f0e8e18:
/*  f0e8e18:	9219003c */ 	lbu	$t9,0x3c($s0)
/*  f0e8e1c:	8e060044 */ 	lw	$a2,0x44($s0)
/*  f0e8e20:	01b50019 */ 	multu	$t5,$s5
/*  f0e8e24:	0000c012 */ 	mflo	$t8
/*  f0e8e28:	03d87021 */ 	addu	$t6,$s8,$t8
/*  f0e8e2c:	8dc4001c */ 	lw	$a0,0x1c($t6)
/*  f0e8e30:	03350019 */ 	multu	$t9,$s5
/*  f0e8e34:	00005812 */ 	mflo	$t3
/*  f0e8e38:	03cb6021 */ 	addu	$t4,$s8,$t3
/*  f0e8e3c:	0fc01a40 */ 	jal	colourBlend
/*  f0e8e40:	8d85001c */ 	lw	$a1,0x1c($t4)
/*  f0e8e44:	00409025 */ 	or	$s2,$v0,$zero
/*  f0e8e48:	8e900010 */ 	lw	$s0,0x10($s4)
.L0f0e8e4c:
/*  f0e8e4c:	8e0f000c */ 	lw	$t7,0xc($s0)
/*  f0e8e50:	02402025 */ 	or	$a0,$s2,$zero
/*  f0e8e54:	00002825 */ 	or	$a1,$zero,$zero
/*  f0e8e58:	51e00009 */ 	beqzl	$t7,.L0f0e8e80
/*  f0e8e5c:	9218003c */ 	lbu	$t8,0x3c($s0)
/*  f0e8e60:	0fc01a40 */ 	jal	colourBlend
/*  f0e8e64:	2406007f */ 	addiu	$a2,$zero,0x7f
/*  f0e8e68:	2401ff00 */ 	addiu	$at,$zero,-256
/*  f0e8e6c:	00415024 */ 	and	$t2,$v0,$at
/*  f0e8e70:	324d00ff */ 	andi	$t5,$s2,0xff
/*  f0e8e74:	014d9025 */ 	or	$s2,$t2,$t5
/*  f0e8e78:	8e900010 */ 	lw	$s0,0x10($s4)
/*  f0e8e7c:	9218003c */ 	lbu	$t8,0x3c($s0)
.L0f0e8e80:
/*  f0e8e80:	3c047f1b */ 	lui	$a0,%hi(g_MenuColourPalettes3+0x1c)
/*  f0e8e84:	3c057f1b */ 	lui	$a1,%hi(g_MenuColourPalettes2+0x1c)
/*  f0e8e88:	03150019 */ 	multu	$t8,$s5
/*  f0e8e8c:	00001012 */ 	mflo	$v0
/*  f0e8e90:	00822021 */ 	addu	$a0,$a0,$v0
/*  f0e8e94:	00a22821 */ 	addu	$a1,$a1,$v0
/*  f0e8e98:	8ca52134 */ 	lw	$a1,%lo(g_MenuColourPalettes2+0x1c)($a1)
/*  f0e8e9c:	0fc54f8e */ 	jal	func0f153e38
/*  f0e8ea0:	8c84229c */ 	lw	$a0,%lo(g_MenuColourPalettes3+0x1c)($a0)
.L0f0e8ea4:
/*  f0e8ea4:	0fc5b9f1 */ 	jal	langGet
/*  f0e8ea8:	96240000 */ 	lhu	$a0,0x0($s1)
/*  f0e8eac:	3c0e8008 */ 	lui	$t6,%hi(var8007fb08)
/*  f0e8eb0:	3c198008 */ 	lui	$t9,%hi(var8007fb04)
/*  f0e8eb4:	8f39fb04 */ 	lw	$t9,%lo(var8007fb04)($t9)
/*  f0e8eb8:	8dcefb08 */ 	lw	$t6,%lo(var8007fb08)($t6)
/*  f0e8ebc:	afb20018 */ 	sw	$s2,0x18($sp)
/*  f0e8ec0:	afb90014 */ 	sw	$t9,0x14($sp)
/*  f0e8ec4:	afae0010 */ 	sw	$t6,0x10($sp)
/*  f0e8ec8:	868b0004 */ 	lh	$t3,0x4($s4)
/*  f0e8ecc:	8fa400f8 */ 	lw	$a0,0xf8($sp)
/*  f0e8ed0:	27a500ec */ 	addiu	$a1,$sp,0xec
/*  f0e8ed4:	afab001c */ 	sw	$t3,0x1c($sp)
/*  f0e8ed8:	868c0006 */ 	lh	$t4,0x6($s4)
/*  f0e8edc:	afa00028 */ 	sw	$zero,0x28($sp)
/*  f0e8ee0:	afa00024 */ 	sw	$zero,0x24($sp)
/*  f0e8ee4:	27a600e8 */ 	addiu	$a2,$sp,0xe8
/*  f0e8ee8:	00403825 */ 	or	$a3,$v0,$zero
/*  f0e8eec:	0fc5580f */ 	jal	textRenderWhite
/*  f0e8ef0:	afac0020 */ 	sw	$t4,0x20($sp)
/*  f0e8ef4:	27af00ae */ 	addiu	$t7,$sp,0xae
/*  f0e8ef8:	162f004a */ 	bne	$s1,$t7,.L0f0e9024
/*  f0e8efc:	afa200f8 */ 	sw	$v0,0xf8($sp)
/*  f0e8f00:	0fc3a157 */ 	jal	menuIsStringEmptyOrSpaces
/*  f0e8f04:	8fa400e4 */ 	lw	$a0,0xe4($sp)
/*  f0e8f08:	50400047 */ 	beqzl	$v0,.L0f0e9028
/*  f0e8f0c:	8fab0088 */ 	lw	$t3,0x88($sp)
/*  f0e8f10:	8e8a0010 */ 	lw	$t2,0x10($s4)
/*  f0e8f14:	3c047f1b */ 	lui	$a0,%hi(g_MenuColourPalettes3+0x18)
/*  f0e8f18:	3c057f1b */ 	lui	$a1,%hi(g_MenuColourPalettes2+0x18)
/*  f0e8f1c:	914d003c */ 	lbu	$t5,0x3c($t2)
/*  f0e8f20:	01b50019 */ 	multu	$t5,$s5
/*  f0e8f24:	00001012 */ 	mflo	$v0
/*  f0e8f28:	00822021 */ 	addu	$a0,$a0,$v0
/*  f0e8f2c:	00a22821 */ 	addu	$a1,$a1,$v0
/*  f0e8f30:	8ca52130 */ 	lw	$a1,%lo(g_MenuColourPalettes2+0x18)($a1)
/*  f0e8f34:	0fc54f8e */ 	jal	func0f153e38
/*  f0e8f38:	8c842298 */ 	lw	$a0,%lo(g_MenuColourPalettes3+0x18)($a0)
/*  f0e8f3c:	1000003a */ 	b	.L0f0e9028
/*  f0e8f40:	8fab0088 */ 	lw	$t3,0x88($sp)
.L0f0e8f44:
/*  f0e8f44:	0018c040 */ 	sll	$t8,$t8,0x1
/*  f0e8f48:	03177021 */ 	addu	$t6,$t8,$s7
/*  f0e8f4c:	3c198007 */ 	lui	$t9,%hi(g_KeyboardKeys)
/*  f0e8f50:	032ec821 */ 	addu	$t9,$t9,$t6
/*  f0e8f54:	933911ac */ 	lbu	$t9,%lo(g_KeyboardKeys)($t9)
/*  f0e8f58:	8fab00e4 */ 	lw	$t3,0xe4($sp)
/*  f0e8f5c:	27a400c0 */ 	addiu	$a0,$sp,0xc0
/*  f0e8f60:	a3b900f0 */ 	sb	$t9,0xf0($sp)
/*  f0e8f64:	916c000d */ 	lbu	$t4,0xd($t3)
/*  f0e8f68:	27a500bc */ 	addiu	$a1,$sp,0xbc
/*  f0e8f6c:	27a600f0 */ 	addiu	$a2,$sp,0xf0
/*  f0e8f70:	000c5640 */ 	sll	$t2,$t4,0x19
/*  f0e8f74:	05400008 */ 	bltz	$t2,.L0f0e8f98
/*  f0e8f78:	3c078008 */ 	lui	$a3,%hi(var8007fb10)
/*  f0e8f7c:	332200ff */ 	andi	$v0,$t9,0xff
/*  f0e8f80:	28410041 */ 	slti	$at,$v0,0x41
/*  f0e8f84:	14200004 */ 	bnez	$at,.L0f0e8f98
/*  f0e8f88:	2841005b */ 	slti	$at,$v0,0x5b
/*  f0e8f8c:	10200002 */ 	beqz	$at,.L0f0e8f98
/*  f0e8f90:	244d0020 */ 	addiu	$t5,$v0,0x20
/*  f0e8f94:	a3ad00f0 */ 	sb	$t5,0xf0($sp)
.L0f0e8f98:
/*  f0e8f98:	3c188008 */ 	lui	$t8,%hi(var8007fb0c)
/*  f0e8f9c:	8f18fb0c */ 	lw	$t8,%lo(var8007fb0c)($t8)
/*  f0e8fa0:	8ce7fb10 */ 	lw	$a3,%lo(var8007fb10)($a3)
/*  f0e8fa4:	afa00014 */ 	sw	$zero,0x14($sp)
/*  f0e8fa8:	0fc55cbe */ 	jal	textMeasure
/*  f0e8fac:	afb80010 */ 	sw	$t8,0x10($sp)
/*  f0e8fb0:	8fae00bc */ 	lw	$t6,0xbc($sp)
/*  f0e8fb4:	2419000c */ 	addiu	$t9,$zero,0xc
/*  f0e8fb8:	8faf00ec */ 	lw	$t7,0xec($sp)
/*  f0e8fbc:	3c0d8008 */ 	lui	$t5,%hi(var8007fb10)
/*  f0e8fc0:	3c188008 */ 	lui	$t8,%hi(var8007fb0c)
/*  f0e8fc4:	032e5823 */ 	subu	$t3,$t9,$t6
/*  f0e8fc8:	8f18fb0c */ 	lw	$t8,%lo(var8007fb0c)($t8)
/*  f0e8fcc:	8dadfb10 */ 	lw	$t5,%lo(var8007fb10)($t5)
/*  f0e8fd0:	05610003 */ 	bgez	$t3,.L0f0e8fe0
/*  f0e8fd4:	000b6043 */ 	sra	$t4,$t3,0x1
/*  f0e8fd8:	25610001 */ 	addiu	$at,$t3,0x1
/*  f0e8fdc:	00016043 */ 	sra	$t4,$at,0x1
.L0f0e8fe0:
/*  f0e8fe0:	018f5021 */ 	addu	$t2,$t4,$t7
/*  f0e8fe4:	afaa00ec */ 	sw	$t2,0xec($sp)
/*  f0e8fe8:	afb20018 */ 	sw	$s2,0x18($sp)
/*  f0e8fec:	afb80014 */ 	sw	$t8,0x14($sp)
/*  f0e8ff0:	afad0010 */ 	sw	$t5,0x10($sp)
/*  f0e8ff4:	86990004 */ 	lh	$t9,0x4($s4)
/*  f0e8ff8:	8fa400f8 */ 	lw	$a0,0xf8($sp)
/*  f0e8ffc:	27a500ec */ 	addiu	$a1,$sp,0xec
/*  f0e9000:	afb9001c */ 	sw	$t9,0x1c($sp)
/*  f0e9004:	868e0006 */ 	lh	$t6,0x6($s4)
/*  f0e9008:	afa00028 */ 	sw	$zero,0x28($sp)
/*  f0e900c:	afa00024 */ 	sw	$zero,0x24($sp)
/*  f0e9010:	27a600e8 */ 	addiu	$a2,$sp,0xe8
/*  f0e9014:	27a700f0 */ 	addiu	$a3,$sp,0xf0
/*  f0e9018:	0fc5580f */ 	jal	textRenderWhite
/*  f0e901c:	afae0020 */ 	sw	$t6,0x20($sp)
/*  f0e9020:	afa200f8 */ 	sw	$v0,0xf8($sp)
.L0f0e9024:
/*  f0e9024:	8fab0088 */ 	lw	$t3,0x88($sp)
.L0f0e9028:
/*  f0e9028:	26d60001 */ 	addiu	$s6,$s6,0x1
/*  f0e902c:	24010005 */ 	addiu	$at,$zero,0x5
/*  f0e9030:	256c000b */ 	addiu	$t4,$t3,0xb
/*  f0e9034:	16c1fea3 */ 	bne	$s6,$at,.L0f0e8ac4
/*  f0e9038:	afac0088 */ 	sw	$t4,0x88($sp)
/*  f0e903c:	8faf0084 */ 	lw	$t7,0x84($sp)
/*  f0e9040:	26f70001 */ 	addiu	$s7,$s7,0x1
/*  f0e9044:	2401000a */ 	addiu	$at,$zero,0xa
/*  f0e9048:	25ea000c */ 	addiu	$t2,$t7,0xc
/*  f0e904c:	16e1fe9b */ 	bne	$s7,$at,.L0f0e8abc
/*  f0e9050:	afaa0084 */ 	sw	$t2,0x84($sp)
/*  f0e9054:	0fc54de0 */ 	jal	func0f153780
/*  f0e9058:	8fa400f8 */ 	lw	$a0,0xf8($sp)
/*  f0e905c:	8fad00e4 */ 	lw	$t5,0xe4($sp)
/*  f0e9060:	afa200f8 */ 	sw	$v0,0xf8($sp)
/*  f0e9064:	86980000 */ 	lh	$t8,0x0($s4)
/*  f0e9068:	81a3000c */ 	lb	$v1,0xc($t5)
/*  f0e906c:	81a6000b */ 	lb	$a2,0xb($t5)
/*  f0e9070:	868e0002 */ 	lh	$t6,0x2($s4)
/*  f0e9074:	00035880 */ 	sll	$t3,$v1,0x2
/*  f0e9078:	01635823 */ 	subu	$t3,$t3,$v1
/*  f0e907c:	0006c880 */ 	sll	$t9,$a2,0x2
/*  f0e9080:	000b5880 */ 	sll	$t3,$t3,0x2
/*  f0e9084:	0326c823 */ 	subu	$t9,$t9,$a2
/*  f0e9088:	0019c880 */ 	sll	$t9,$t9,0x2
/*  f0e908c:	01635823 */ 	subu	$t3,$t3,$v1
/*  f0e9090:	24010004 */ 	addiu	$at,$zero,0x4
/*  f0e9094:	03192021 */ 	addu	$a0,$t8,$t9
/*  f0e9098:	01cb2821 */ 	addu	$a1,$t6,$t3
/*  f0e909c:	24920004 */ 	addiu	$s2,$a0,0x4
/*  f0e90a0:	24900010 */ 	addiu	$s0,$a0,0x10
/*  f0e90a4:	24b3000d */ 	addiu	$s3,$a1,0xd
/*  f0e90a8:	14610010 */ 	bne	$v1,$at,.L0f0e90ec
/*  f0e90ac:	24b50018 */ 	addiu	$s5,$a1,0x18
/*  f0e90b0:	24010008 */ 	addiu	$at,$zero,0x8
/*  f0e90b4:	54c10003 */ 	bnel	$a2,$at,.L0f0e90c4
/*  f0e90b8:	24010005 */ 	addiu	$at,$zero,0x5
/*  f0e90bc:	2610000c */ 	addiu	$s0,$s0,0xc
/*  f0e90c0:	24010005 */ 	addiu	$at,$zero,0x5
.L0f0e90c4:
/*  f0e90c4:	54c10003 */ 	bnel	$a2,$at,.L0f0e90d4
/*  f0e90c8:	24010002 */ 	addiu	$at,$zero,0x2
/*  f0e90cc:	26100018 */ 	addiu	$s0,$s0,0x18
/*  f0e90d0:	24010002 */ 	addiu	$at,$zero,0x2
.L0f0e90d4:
/*  f0e90d4:	14c10002 */ 	bne	$a2,$at,.L0f0e90e0
/*  f0e90d8:	00000000 */ 	nop
/*  f0e90dc:	26100018 */ 	addiu	$s0,$s0,0x18
.L0f0e90e0:
/*  f0e90e0:	54c00003 */ 	bnezl	$a2,.L0f0e90f0
/*  f0e90e4:	266c0001 */ 	addiu	$t4,$s3,0x1
/*  f0e90e8:	2610000c */ 	addiu	$s0,$s0,0xc
.L0f0e90ec:
/*  f0e90ec:	266c0001 */ 	addiu	$t4,$s3,0x1
.L0f0e90f0:
/*  f0e90f0:	240fffff */ 	addiu	$t7,$zero,-1
/*  f0e90f4:	240affff */ 	addiu	$t2,$zero,-1
/*  f0e90f8:	afaa0018 */ 	sw	$t2,0x18($sp)
/*  f0e90fc:	afaf0014 */ 	sw	$t7,0x14($sp)
/*  f0e9100:	afac0010 */ 	sw	$t4,0x10($sp)
/*  f0e9104:	8fa400f8 */ 	lw	$a0,0xf8($sp)
/*  f0e9108:	02402825 */ 	or	$a1,$s2,$zero
/*  f0e910c:	02603025 */ 	or	$a2,$s3,$zero
/*  f0e9110:	0fc389bb */ 	jal	func0f0e26ec
/*  f0e9114:	02003825 */ 	or	$a3,$s0,$zero
/*  f0e9118:	26b10001 */ 	addiu	$s1,$s5,0x1
/*  f0e911c:	2418ffff */ 	addiu	$t8,$zero,-1
/*  f0e9120:	2419ffff */ 	addiu	$t9,$zero,-1
/*  f0e9124:	afb90018 */ 	sw	$t9,0x18($sp)
/*  f0e9128:	afb80014 */ 	sw	$t8,0x14($sp)
/*  f0e912c:	afb10010 */ 	sw	$s1,0x10($sp)
/*  f0e9130:	00402025 */ 	or	$a0,$v0,$zero
/*  f0e9134:	02002825 */ 	or	$a1,$s0,$zero
/*  f0e9138:	02603025 */ 	or	$a2,$s3,$zero
/*  f0e913c:	0fc389bb */ 	jal	func0f0e26ec
/*  f0e9140:	26070001 */ 	addiu	$a3,$s0,0x1
/*  f0e9144:	240dffff */ 	addiu	$t5,$zero,-1
/*  f0e9148:	240effff */ 	addiu	$t6,$zero,-1
/*  f0e914c:	afae0018 */ 	sw	$t6,0x18($sp)
/*  f0e9150:	afad0014 */ 	sw	$t5,0x14($sp)
/*  f0e9154:	00402025 */ 	or	$a0,$v0,$zero
/*  f0e9158:	02402825 */ 	or	$a1,$s2,$zero
/*  f0e915c:	02a03025 */ 	or	$a2,$s5,$zero
/*  f0e9160:	02003825 */ 	or	$a3,$s0,$zero
/*  f0e9164:	0fc389bb */ 	jal	func0f0e26ec
/*  f0e9168:	afb10010 */ 	sw	$s1,0x10($sp)
/*  f0e916c:	240bffff */ 	addiu	$t3,$zero,-1
/*  f0e9170:	240cffff */ 	addiu	$t4,$zero,-1
/*  f0e9174:	afac0018 */ 	sw	$t4,0x18($sp)
/*  f0e9178:	afab0014 */ 	sw	$t3,0x14($sp)
/*  f0e917c:	00402025 */ 	or	$a0,$v0,$zero
/*  f0e9180:	02402825 */ 	or	$a1,$s2,$zero
/*  f0e9184:	02603025 */ 	or	$a2,$s3,$zero
/*  f0e9188:	26470001 */ 	addiu	$a3,$s2,0x1
/*  f0e918c:	0fc389bb */ 	jal	func0f0e26ec
/*  f0e9190:	afb10010 */ 	sw	$s1,0x10($sp)
/*  f0e9194:	8fbf0074 */ 	lw	$ra,0x74($sp)
/*  f0e9198:	d7b40038 */ 	ldc1	$f20,0x38($sp)
/*  f0e919c:	d7b60040 */ 	ldc1	$f22,0x40($sp)
/*  f0e91a0:	d7b80048 */ 	ldc1	$f24,0x48($sp)
/*  f0e91a4:	8fb00050 */ 	lw	$s0,0x50($sp)
/*  f0e91a8:	8fb10054 */ 	lw	$s1,0x54($sp)
/*  f0e91ac:	8fb20058 */ 	lw	$s2,0x58($sp)
/*  f0e91b0:	8fb3005c */ 	lw	$s3,0x5c($sp)
/*  f0e91b4:	8fb40060 */ 	lw	$s4,0x60($sp)
/*  f0e91b8:	8fb50064 */ 	lw	$s5,0x64($sp)
/*  f0e91bc:	8fb60068 */ 	lw	$s6,0x68($sp)
/*  f0e91c0:	8fb7006c */ 	lw	$s7,0x6c($sp)
/*  f0e91c4:	8fbe0070 */ 	lw	$s8,0x70($sp)
/*  f0e91c8:	03e00008 */ 	jr	$ra
/*  f0e91cc:	27bd00f8 */ 	addiu	$sp,$sp,0xf8
);

/**
 * Keyboard reference:
 * +---------------------------------------+
 * | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 |
 * |---+---+---+---+---+---+---+---+---+---|
 * | a | b | c | d | e | f | g | h | i | j |
 * |---+---+---+---+---+---+---+---+---+---|
 * | k | l | m | n | o | p | q | r | s | t |
 * |---+---+---+---+---+---+---+---+---+---|
 * | u | v | w | x | y | z |   | ? | ! | . |
 * |-------+-----------+-----------+-------|
 * |  DEL  |    CAPS   |   CANCEL  |   OK  |
 * +-------+-----------+-----------+-------+
 */
bool menuTickItemKeyboard(struct menuitem *item, struct menuinputs *inputs, u32 arg2, union menuitemtickdata *data)
{
	struct menuitemtickdata_keyboard *kb = &data->keyboard;
	union handlerdata handlerdata;
	s32 delete = false;

	if (arg2 & 2) {
		s16 prevcol = kb->col;
		s16 prevrow = kb->row;

		// Handle left/right movement
		// In most cases the loop only runs once, but on row 4 the buttons span
		// across multiple columns so the loop will run again until the column
		// number is valid.
		if (inputs->leftright != 0) {
			do {
				kb->col += inputs->leftright;

				if (kb->col < 0) {
					kb->col = 9;
				}

				if (kb->col > 9) {
					kb->col = 0;
				}
			} while (kb->row == 4 && kb->col != 0 && kb->col != 2 && kb->col != 5 && kb->col != 8);
		}

		// Handle up/down movement
		if (inputs->updown) {
			kb->row += inputs->updown;

			if (kb->row < 0) {
				kb->row = 4;
			}

			if (kb->row > 4) {
				kb->row = 0;
			}

			// If moving onto row 4, bump column to a valid one
			if (kb->row == 4) {
				if (kb->col == 9) {
					kb->col = 8;
				}

				if (kb->col == 7 || kb->col == 6) {
					kb->col = 5;
				}

				if (kb->col == 3 || kb->col == 4) {
					kb->col = 2;
				}

				if (kb->col == 1) {
					kb->col = 0;
				}
			}
		}

		if (prevcol != kb->col || prevrow != kb->row) {
			menuPlaySound(MENUSOUND_KEYBOARDFOCUS);
		}

		if (inputs->back2) {
			delete = true;
		}

		if (inputs->start) {
			if (item->handler && !menuIsStringEmptyOrSpaces(kb->string)) {
				menuPlaySound(MENUSOUND_SELECT);

				handlerdata.keyboard.string = kb->string;
				item->handler(MENUOP_SETTEXT, item, &handlerdata);

				menuPopDialog();

				item->handler(MENUOP_SET, item, &handlerdata);
			}

			inputs->start = false;
		}

		if (inputs->select) {
			if (kb->row == 4) {
				// DEL
				if (kb->col == 0) {
					delete = true;
				}

				// CAPS
				if (kb->col == 2) {
					kb->capslock = 1 - kb->capslock;
				}

				// OK
				if (kb->col == 8) {
					if (item->handler && !menuIsStringEmptyOrSpaces(kb->string)) {
						handlerdata.keyboard.string = kb->string;
						item->handler(MENUOP_SETTEXT, item, &handlerdata);
					}
				}

				// OK or CANCEL
				if (kb->col == 8 || kb->col == 5) {
					s32 ok = (kb->col == 8);

					if (kb->col == 5 || !menuIsStringEmptyOrSpaces(kb->string)) {
						menuPopDialog();

						if (ok) {
							item->handler(MENUOP_SET, item, &handlerdata);
							menuPlaySound(MENUSOUND_SELECT);
						} else {
							menuPlaySound(MENUSOUND_KEYBOARDCANCEL);
						}

						inputs->select = false;
					}
				}
			} else {
				// Pressed A on number or letter
				s32 appended = false;
				s32 i;
				s32 textwidth;
				s32 textheight;

				if (kb->string[9] == '\0') {
					// String is not full
					i = 0;

					while (!appended) {
						if (kb->string[i] == '\0') {
							u8 key = g_KeyboardKeys[kb->row][kb->col];
							appended = true;

							if (kb->capseffective == 0 && key >= 'A' && key <= 'Z') {
								// Make lowercase
								key += 32;
							}

							kb->string[i] = key;
						}

						i++;
					}

					textMeasure(&textheight, &textwidth, kb->string, var8007fb10, var8007fb0c, 0);

					if (item->param3 == 0 && textwidth > 58) {
						delete = true;
					}

					if (!delete) {
						menuPlaySound(MENUSOUND_FOCUS);
					}
				}
			}
		}

		// Handle deleting
		if (delete && kb->string[0] != '\0') {
			s32 deleted = false;
			s32 i = 10;

			menuPlaySound(MENUSOUND_FOCUS);

			while (!deleted) {
				if (kb->string[i] != '\0') {
					kb->string[i] = '\0';
					deleted = true;
				}

				i--;
			}
		}
	}

	// Update caps
	if (arg2 & 2) {
		u32 prev = kb->capseffective;
		kb->capseffective = kb->capslock;

		if (inputs->shoulder) {
			// Invert
			kb->capseffective = 1 - kb->capseffective;
		}

		if (kb->capseffective != prev) {
			if (kb->capseffective) {
				menuPlaySound(MENUSOUND_TOGGLEON);
			} else {
				menuPlaySound(MENUSOUND_TOGGLEOFF);
			}
		}
	}

	return true;
}

void menuInitItemKeyboard(struct menuitem *item, union menuitemtickdata *data)
{
	u32 stack;
	s32 i;

	for (i = 0; i < ARRAYCOUNT(data->keyboard.string);) {
		data->keyboard.string[i++] = '\0';
	}

	if (item->handler) {
		union handlerdata handlerdata;
		handlerdata.keyboard.string = data->keyboard.string;
		item->handler(MENUOP_GETTEXT, item, &handlerdata);
	}

	data->keyboard.col = 0;
	data->keyboard.row = 4;
	data->keyboard.capseffective = 0;
	data->keyboard.capslock = 0;
}

Gfx *menuRenderItemSeparator(Gfx *gdl, struct menurenderthing *thing)
{
	u32 colour;

	if (thing->frame->transitiontimer < 0) {
		colour = g_MenuColourPalettes[thing->frame->type].unfocused;
	} else {
		colour = colourBlend(
				g_MenuColourPalettes[thing->frame->type2].unfocused,
				g_MenuColourPalettes[thing->frame->type].unfocused,
				thing->frame->colourweight);
	}

	colour = (colour & 0xffffff00) | 0x3f;

	return renderFilledRect(gdl,
			thing->x, thing->y + 2, thing->x + thing->width, thing->y + 3,
			colour, colour);
}

GLOBAL_ASM(
glabel menuRenderObjective
/*  f0e98ac:	27bdfed0 */ 	addiu	$sp,$sp,-304
/*  f0e98b0:	8fae0154 */ 	lw	$t6,0x154($sp)
/*  f0e98b4:	afbf003c */ 	sw	$ra,0x3c($sp)
/*  f0e98b8:	afb00038 */ 	sw	$s0,0x38($sp)
/*  f0e98bc:	afa40130 */ 	sw	$a0,0x130($sp)
/*  f0e98c0:	afa50134 */ 	sw	$a1,0x134($sp)
/*  f0e98c4:	afa60138 */ 	sw	$a2,0x138($sp)
/*  f0e98c8:	afa7013c */ 	sw	$a3,0x13c($sp)
/*  f0e98cc:	11c00002 */ 	beqz	$t6,.L0f0e98d8
/*  f0e98d0:	00001025 */ 	or	$v0,$zero,$zero
/*  f0e98d4:	2402000c */ 	addiu	$v0,$zero,0xc
.L0f0e98d8:
/*  f0e98d8:	3c047f1b */ 	lui	$a0,%hi(var7f1adfa0)
/*  f0e98dc:	3c058007 */ 	lui	$a1,%hi(var800711e8)
/*  f0e98e0:	24a511e8 */ 	addiu	$a1,$a1,%lo(var800711e8)
/*  f0e98e4:	2484dfa0 */ 	addiu	$a0,$a0,%lo(var7f1adfa0)
/*  f0e98e8:	0c0036cc */ 	jal	func0000db30
/*  f0e98ec:	afa200bc */ 	sw	$v0,0xbc($sp)
/*  f0e98f0:	8faf0138 */ 	lw	$t7,0x138($sp)
/*  f0e98f4:	3c04800a */ 	lui	$a0,%hi(g_Briefing+0x2)
/*  f0e98f8:	000fc040 */ 	sll	$t8,$t7,0x1
/*  f0e98fc:	00982021 */ 	addu	$a0,$a0,$t8
/*  f0e9900:	0fc5b9f1 */ 	jal	langGet
/*  f0e9904:	9484dfca */ 	lhu	$a0,%lo(g_Briefing+0x2)($a0)
/*  f0e9908:	87b90146 */ 	lh	$t9,0x146($sp)
/*  f0e990c:	8fa30134 */ 	lw	$v1,0x134($sp)
/*  f0e9910:	afa20120 */ 	sw	$v0,0x120($sp)
/*  f0e9914:	afb90124 */ 	sw	$t9,0x124($sp)
/*  f0e9918:	44803000 */ 	mtc1	$zero,$f6
/*  f0e991c:	c4640040 */ 	lwc1	$f4,0x40($v1)
/*  f0e9920:	4606203c */ 	c.lt.s	$f4,$f6
/*  f0e9924:	00000000 */ 	nop
/*  f0e9928:	4502000b */ 	bc1fl	.L0f0e9958
/*  f0e992c:	906c003d */ 	lbu	$t4,0x3d($v1)
/*  f0e9930:	9069003c */ 	lbu	$t1,0x3c($v1)
/*  f0e9934:	2410003c */ 	addiu	$s0,$zero,0x3c
/*  f0e9938:	3c0b7f1b */ 	lui	$t3,%hi(g_MenuColourPalettes+0x18)
/*  f0e993c:	01300019 */ 	multu	$t1,$s0
/*  f0e9940:	00005012 */ 	mflo	$t2
/*  f0e9944:	016a5821 */ 	addu	$t3,$t3,$t2
/*  f0e9948:	8d6b1fc8 */ 	lw	$t3,%lo(g_MenuColourPalettes+0x18)($t3)
/*  f0e994c:	10000012 */ 	b	.L0f0e9998
/*  f0e9950:	afab012c */ 	sw	$t3,0x12c($sp)
/*  f0e9954:	906c003d */ 	lbu	$t4,0x3d($v1)
.L0f0e9958:
/*  f0e9958:	2410003c */ 	addiu	$s0,$zero,0x3c
/*  f0e995c:	9078003c */ 	lbu	$t8,0x3c($v1)
/*  f0e9960:	01900019 */ 	multu	$t4,$s0
/*  f0e9964:	3c0e7f1b */ 	lui	$t6,%hi(g_MenuColourPalettes)
/*  f0e9968:	25ce1fb0 */ 	addiu	$t6,$t6,%lo(g_MenuColourPalettes)
/*  f0e996c:	8c660044 */ 	lw	$a2,0x44($v1)
/*  f0e9970:	00006812 */ 	mflo	$t5
/*  f0e9974:	01ae7821 */ 	addu	$t7,$t5,$t6
/*  f0e9978:	8de40018 */ 	lw	$a0,0x18($t7)
/*  f0e997c:	03100019 */ 	multu	$t8,$s0
/*  f0e9980:	0000c812 */ 	mflo	$t9
/*  f0e9984:	032e4821 */ 	addu	$t1,$t9,$t6
/*  f0e9988:	0fc01a40 */ 	jal	colourBlend
/*  f0e998c:	8d250018 */ 	lw	$a1,0x18($t1)
/*  f0e9990:	afa2012c */ 	sw	$v0,0x12c($sp)
/*  f0e9994:	8fa30134 */ 	lw	$v1,0x134($sp)
.L0f0e9998:
/*  f0e9998:	8c6a000c */ 	lw	$t2,0xc($v1)
/*  f0e999c:	8fa4012c */ 	lw	$a0,0x12c($sp)
/*  f0e99a0:	00002825 */ 	or	$a1,$zero,$zero
/*  f0e99a4:	5140000b */ 	beqzl	$t2,.L0f0e99d4
/*  f0e99a8:	9078003c */ 	lbu	$t8,0x3c($v1)
/*  f0e99ac:	0fc01a40 */ 	jal	colourBlend
/*  f0e99b0:	2406002c */ 	addiu	$a2,$zero,0x2c
/*  f0e99b4:	8fac012c */ 	lw	$t4,0x12c($sp)
/*  f0e99b8:	2401ff00 */ 	addiu	$at,$zero,-256
/*  f0e99bc:	00415824 */ 	and	$t3,$v0,$at
/*  f0e99c0:	318d00ff */ 	andi	$t5,$t4,0xff
/*  f0e99c4:	016d7825 */ 	or	$t7,$t3,$t5
/*  f0e99c8:	afaf012c */ 	sw	$t7,0x12c($sp)
/*  f0e99cc:	8fa30134 */ 	lw	$v1,0x134($sp)
/*  f0e99d0:	9078003c */ 	lbu	$t8,0x3c($v1)
.L0f0e99d4:
/*  f0e99d4:	3c047f1b */ 	lui	$a0,%hi(g_MenuColourPalettes3+0x18)
/*  f0e99d8:	3c057f1b */ 	lui	$a1,%hi(g_MenuColourPalettes2+0x18)
/*  f0e99dc:	03100019 */ 	multu	$t8,$s0
/*  f0e99e0:	00001012 */ 	mflo	$v0
/*  f0e99e4:	00822021 */ 	addu	$a0,$a0,$v0
/*  f0e99e8:	00a22821 */ 	addu	$a1,$a1,$v0
/*  f0e99ec:	8ca52130 */ 	lw	$a1,%lo(g_MenuColourPalettes2+0x18)($a1)
/*  f0e99f0:	0fc54f8e */ 	jal	func0f153e38
/*  f0e99f4:	8c842298 */ 	lw	$a0,%lo(g_MenuColourPalettes3+0x18)($a0)
/*  f0e99f8:	a3a000d0 */ 	sb	$zero,0xd0($sp)
/*  f0e99fc:	0fc54d8a */ 	jal	func0f153628
/*  f0e9a00:	8fa40130 */ 	lw	$a0,0x130($sp)
/*  f0e9a04:	27b000d0 */ 	addiu	$s0,$sp,0xd0
/*  f0e9a08:	3c057f1b */ 	lui	$a1,%hi(var7f1adfa8)
/*  f0e9a0c:	afa20130 */ 	sw	$v0,0x130($sp)
/*  f0e9a10:	24a5dfa8 */ 	addiu	$a1,$a1,%lo(var7f1adfa8)
/*  f0e9a14:	02002025 */ 	or	$a0,$s0,$zero
/*  f0e9a18:	0c004dad */ 	jal	sprintf
/*  f0e9a1c:	8fa6013c */ 	lw	$a2,0x13c($sp)
/*  f0e9a20:	3c198008 */ 	lui	$t9,%hi(var8007fb0c)
/*  f0e9a24:	8f39fb0c */ 	lw	$t9,%lo(var8007fb0c)($t9)
/*  f0e9a28:	3c078008 */ 	lui	$a3,%hi(var8007fb10)
/*  f0e9a2c:	8ce7fb10 */ 	lw	$a3,%lo(var8007fb10)($a3)
/*  f0e9a30:	27a400c0 */ 	addiu	$a0,$sp,0xc0
/*  f0e9a34:	27a500c4 */ 	addiu	$a1,$sp,0xc4
/*  f0e9a38:	02003025 */ 	or	$a2,$s0,$zero
/*  f0e9a3c:	afa00014 */ 	sw	$zero,0x14($sp)
/*  f0e9a40:	0fc55cbe */ 	jal	textMeasure
/*  f0e9a44:	afb90010 */ 	sw	$t9,0x10($sp)
/*  f0e9a48:	87ae0142 */ 	lh	$t6,0x142($sp)
/*  f0e9a4c:	8fa900c4 */ 	lw	$t1,0xc4($sp)
/*  f0e9a50:	3c0b8008 */ 	lui	$t3,%hi(var8007fb10)
/*  f0e9a54:	3c0d8008 */ 	lui	$t5,%hi(var8007fb0c)
/*  f0e9a58:	8dadfb0c */ 	lw	$t5,%lo(var8007fb0c)($t5)
/*  f0e9a5c:	8d6bfb10 */ 	lw	$t3,%lo(var8007fb10)($t3)
/*  f0e9a60:	8faf012c */ 	lw	$t7,0x12c($sp)
/*  f0e9a64:	87b8014a */ 	lh	$t8,0x14a($sp)
/*  f0e9a68:	87b9014e */ 	lh	$t9,0x14e($sp)
/*  f0e9a6c:	01c95023 */ 	subu	$t2,$t6,$t1
/*  f0e9a70:	254c0019 */ 	addiu	$t4,$t2,0x19
/*  f0e9a74:	afac0128 */ 	sw	$t4,0x128($sp)
/*  f0e9a78:	8fa40130 */ 	lw	$a0,0x130($sp)
/*  f0e9a7c:	27a50128 */ 	addiu	$a1,$sp,0x128
/*  f0e9a80:	27a60124 */ 	addiu	$a2,$sp,0x124
/*  f0e9a84:	02003825 */ 	or	$a3,$s0,$zero
/*  f0e9a88:	afa00024 */ 	sw	$zero,0x24($sp)
/*  f0e9a8c:	afa00028 */ 	sw	$zero,0x28($sp)
/*  f0e9a90:	afad0014 */ 	sw	$t5,0x14($sp)
/*  f0e9a94:	afab0010 */ 	sw	$t3,0x10($sp)
/*  f0e9a98:	afaf0018 */ 	sw	$t7,0x18($sp)
/*  f0e9a9c:	afb8001c */ 	sw	$t8,0x1c($sp)
/*  f0e9aa0:	0fc5580f */ 	jal	textRenderWhite
/*  f0e9aa4:	afb90020 */ 	sw	$t9,0x20($sp)
/*  f0e9aa8:	87ae0142 */ 	lh	$t6,0x142($sp)
/*  f0e9aac:	8faa0154 */ 	lw	$t2,0x154($sp)
/*  f0e9ab0:	afa20130 */ 	sw	$v0,0x130($sp)
/*  f0e9ab4:	25c90019 */ 	addiu	$t1,$t6,0x19
/*  f0e9ab8:	1140001f */ 	beqz	$t2,.L0f0e9b38
/*  f0e9abc:	afa90128 */ 	sw	$t1,0x128($sp)
/*  f0e9ac0:	3c0c8008 */ 	lui	$t4,%hi(var8007fb04)
/*  f0e9ac4:	8d8cfb04 */ 	lw	$t4,%lo(var8007fb04)($t4)
/*  f0e9ac8:	3c078008 */ 	lui	$a3,%hi(var8007fb08)
/*  f0e9acc:	8ce7fb08 */ 	lw	$a3,%lo(var8007fb08)($a3)
/*  f0e9ad0:	24040055 */ 	addiu	$a0,$zero,0x55
/*  f0e9ad4:	8fa50120 */ 	lw	$a1,0x120($sp)
/*  f0e9ad8:	02003025 */ 	or	$a2,$s0,$zero
/*  f0e9adc:	0fc55d48 */ 	jal	textWrap
/*  f0e9ae0:	afac0010 */ 	sw	$t4,0x10($sp)
/*  f0e9ae4:	3c0b8008 */ 	lui	$t3,%hi(var8007fb08)
/*  f0e9ae8:	3c0d8008 */ 	lui	$t5,%hi(var8007fb04)
/*  f0e9aec:	8dadfb04 */ 	lw	$t5,%lo(var8007fb04)($t5)
/*  f0e9af0:	8d6bfb08 */ 	lw	$t3,%lo(var8007fb08)($t3)
/*  f0e9af4:	8faf012c */ 	lw	$t7,0x12c($sp)
/*  f0e9af8:	87b8014a */ 	lh	$t8,0x14a($sp)
/*  f0e9afc:	87b9014e */ 	lh	$t9,0x14e($sp)
/*  f0e9b00:	8fa40130 */ 	lw	$a0,0x130($sp)
/*  f0e9b04:	27a50128 */ 	addiu	$a1,$sp,0x128
/*  f0e9b08:	27a60124 */ 	addiu	$a2,$sp,0x124
/*  f0e9b0c:	02003825 */ 	or	$a3,$s0,$zero
/*  f0e9b10:	afa00024 */ 	sw	$zero,0x24($sp)
/*  f0e9b14:	afa00028 */ 	sw	$zero,0x28($sp)
/*  f0e9b18:	afad0014 */ 	sw	$t5,0x14($sp)
/*  f0e9b1c:	afab0010 */ 	sw	$t3,0x10($sp)
/*  f0e9b20:	afaf0018 */ 	sw	$t7,0x18($sp)
/*  f0e9b24:	afb8001c */ 	sw	$t8,0x1c($sp)
/*  f0e9b28:	0fc5580f */ 	jal	textRenderWhite
/*  f0e9b2c:	afb90020 */ 	sw	$t9,0x20($sp)
/*  f0e9b30:	1000001a */ 	b	.L0f0e9b9c
/*  f0e9b34:	afa20130 */ 	sw	$v0,0x130($sp)
.L0f0e9b38:
/*  f0e9b38:	3c057f1b */ 	lui	$a1,%hi(var7f1adfb0)
/*  f0e9b3c:	24a5dfb0 */ 	addiu	$a1,$a1,%lo(var7f1adfb0)
/*  f0e9b40:	02002025 */ 	or	$a0,$s0,$zero
/*  f0e9b44:	0c004dad */ 	jal	sprintf
/*  f0e9b48:	8fa60120 */ 	lw	$a2,0x120($sp)
/*  f0e9b4c:	3c0e8008 */ 	lui	$t6,%hi(var8007fb10)
/*  f0e9b50:	3c098008 */ 	lui	$t1,%hi(var8007fb0c)
/*  f0e9b54:	8d29fb0c */ 	lw	$t1,%lo(var8007fb0c)($t1)
/*  f0e9b58:	8dcefb10 */ 	lw	$t6,%lo(var8007fb10)($t6)
/*  f0e9b5c:	8faa012c */ 	lw	$t2,0x12c($sp)
/*  f0e9b60:	87ac014a */ 	lh	$t4,0x14a($sp)
/*  f0e9b64:	87ab014e */ 	lh	$t3,0x14e($sp)
/*  f0e9b68:	8fa40130 */ 	lw	$a0,0x130($sp)
/*  f0e9b6c:	27a50128 */ 	addiu	$a1,$sp,0x128
/*  f0e9b70:	27a60124 */ 	addiu	$a2,$sp,0x124
/*  f0e9b74:	02003825 */ 	or	$a3,$s0,$zero
/*  f0e9b78:	afa00024 */ 	sw	$zero,0x24($sp)
/*  f0e9b7c:	afa00028 */ 	sw	$zero,0x28($sp)
/*  f0e9b80:	afa90014 */ 	sw	$t1,0x14($sp)
/*  f0e9b84:	afae0010 */ 	sw	$t6,0x10($sp)
/*  f0e9b88:	afaa0018 */ 	sw	$t2,0x18($sp)
/*  f0e9b8c:	afac001c */ 	sw	$t4,0x1c($sp)
/*  f0e9b90:	0fc5580f */ 	jal	textRenderWhite
/*  f0e9b94:	afab0020 */ 	sw	$t3,0x20($sp)
/*  f0e9b98:	afa20130 */ 	sw	$v0,0x130($sp)
.L0f0e9b9c:
/*  f0e9b9c:	8fad0150 */ 	lw	$t5,0x150($sp)
/*  f0e9ba0:	27a400c0 */ 	addiu	$a0,$sp,0xc0
/*  f0e9ba4:	27a500c4 */ 	addiu	$a1,$sp,0xc4
/*  f0e9ba8:	11a00141 */ 	beqz	$t5,.L0f0ea0b0
/*  f0e9bac:	3c078008 */ 	lui	$a3,%hi(g_Stages+0x33f)
/*  f0e9bb0:	0fc255a1 */ 	jal	objectiveCheck
/*  f0e9bb4:	8fa40138 */ 	lw	$a0,0x138($sp)
/*  f0e9bb8:	10400007 */ 	beqz	$v0,.L0f0e9bd8
/*  f0e9bbc:	24010001 */ 	addiu	$at,$zero,0x1
/*  f0e9bc0:	1041000c */ 	beq	$v0,$at,.L0f0e9bf4
/*  f0e9bc4:	24010002 */ 	addiu	$at,$zero,0x2
/*  f0e9bc8:	10410011 */ 	beq	$v0,$at,.L0f0e9c10
/*  f0e9bcc:	00000000 */ 	nop
/*  f0e9bd0:	10000015 */ 	b	.L0f0e9c28
/*  f0e9bd4:	00000000 */ 	nop
.L0f0e9bd8:
/*  f0e9bd8:	0fc5b9f1 */ 	jal	langGet
/*  f0e9bdc:	24045601 */ 	addiu	$a0,$zero,0x5601
/*  f0e9be0:	3c0fffff */ 	lui	$t7,0xffff
/*  f0e9be4:	35ef00ff */ 	ori	$t7,$t7,0xff
/*  f0e9be8:	afa200cc */ 	sw	$v0,0xcc($sp)
/*  f0e9bec:	1000000e */ 	b	.L0f0e9c28
/*  f0e9bf0:	afaf00c8 */ 	sw	$t7,0xc8($sp)
.L0f0e9bf4:
/*  f0e9bf4:	0fc5b9f1 */ 	jal	langGet
/*  f0e9bf8:	24045600 */ 	addiu	$a0,$zero,0x5600
/*  f0e9bfc:	3c1800ff */ 	lui	$t8,0xff
/*  f0e9c00:	371800ff */ 	ori	$t8,$t8,0xff
/*  f0e9c04:	afa200cc */ 	sw	$v0,0xcc($sp)
/*  f0e9c08:	10000007 */ 	b	.L0f0e9c28
/*  f0e9c0c:	afb800c8 */ 	sw	$t8,0xc8($sp)
.L0f0e9c10:
/*  f0e9c10:	0fc5b9f1 */ 	jal	langGet
/*  f0e9c14:	24045602 */ 	addiu	$a0,$zero,0x5602
/*  f0e9c18:	3c19ff40 */ 	lui	$t9,0xff40
/*  f0e9c1c:	373940ff */ 	ori	$t9,$t9,0x40ff
/*  f0e9c20:	afa200cc */ 	sw	$v0,0xcc($sp)
/*  f0e9c24:	afb900c8 */ 	sw	$t9,0xc8($sp)
.L0f0e9c28:
/*  f0e9c28:	3c098007 */ 	lui	$t1,%hi(g_MpPlayerNum)
/*  f0e9c2c:	8d291448 */ 	lw	$t1,%lo(g_MpPlayerNum)($t1)
/*  f0e9c30:	3c0c800a */ 	lui	$t4,%hi(g_Menus+0x4f8)
/*  f0e9c34:	8fae0134 */ 	lw	$t6,0x134($sp)
/*  f0e9c38:	000950c0 */ 	sll	$t2,$t1,0x3
/*  f0e9c3c:	01495023 */ 	subu	$t2,$t2,$t1
/*  f0e9c40:	000a5080 */ 	sll	$t2,$t2,0x2
/*  f0e9c44:	01495021 */ 	addu	$t2,$t2,$t1
/*  f0e9c48:	000a50c0 */ 	sll	$t2,$t2,0x3
/*  f0e9c4c:	01495023 */ 	subu	$t2,$t2,$t1
/*  f0e9c50:	000a5100 */ 	sll	$t2,$t2,0x4
/*  f0e9c54:	018a6021 */ 	addu	$t4,$t4,$t2
/*  f0e9c58:	8d8ce4f8 */ 	lw	$t4,%lo(g_Menus+0x4f8)($t4)
/*  f0e9c5c:	27a400c0 */ 	addiu	$a0,$sp,0xc0
/*  f0e9c60:	27a500c4 */ 	addiu	$a1,$sp,0xc4
/*  f0e9c64:	11cc0004 */ 	beq	$t6,$t4,.L0f0e9c78
/*  f0e9c68:	3c078008 */ 	lui	$a3,%hi(var8007fb08)
/*  f0e9c6c:	3c0b7f1b */ 	lui	$t3,%hi(g_MenuColourPalettes+0x18)
/*  f0e9c70:	8d6b1fc8 */ 	lw	$t3,%lo(g_MenuColourPalettes+0x18)($t3)
/*  f0e9c74:	afab00c8 */ 	sw	$t3,0xc8($sp)
.L0f0e9c78:
/*  f0e9c78:	3c0d8008 */ 	lui	$t5,%hi(var8007fb04)
/*  f0e9c7c:	8dadfb04 */ 	lw	$t5,%lo(var8007fb04)($t5)
/*  f0e9c80:	8fa600cc */ 	lw	$a2,0xcc($sp)
/*  f0e9c84:	8ce7fb08 */ 	lw	$a3,%lo(var8007fb08)($a3)
/*  f0e9c88:	afa00014 */ 	sw	$zero,0x14($sp)
/*  f0e9c8c:	0fc55cbe */ 	jal	textMeasure
/*  f0e9c90:	afad0010 */ 	sw	$t5,0x10($sp)
/*  f0e9c94:	3c028007 */ 	lui	$v0,%hi(var800711e8)
/*  f0e9c98:	8c4211e8 */ 	lw	$v0,%lo(var800711e8)($v0)
/*  f0e9c9c:	27a50128 */ 	addiu	$a1,$sp,0x128
/*  f0e9ca0:	27a60124 */ 	addiu	$a2,$sp,0x124
/*  f0e9ca4:	10400002 */ 	beqz	$v0,.L0f0e9cb0
/*  f0e9ca8:	3c0c8008 */ 	lui	$t4,%hi(var8007fb08)
/*  f0e9cac:	afa200c8 */ 	sw	$v0,0xc8($sp)
.L0f0e9cb0:
/*  f0e9cb0:	87a2014a */ 	lh	$v0,0x14a($sp)
/*  f0e9cb4:	87af0142 */ 	lh	$t7,0x142($sp)
/*  f0e9cb8:	8fb800c4 */ 	lw	$t8,0xc4($sp)
/*  f0e9cbc:	87aa0146 */ 	lh	$t2,0x146($sp)
/*  f0e9cc0:	8fae00bc */ 	lw	$t6,0xbc($sp)
/*  f0e9cc4:	01e28021 */ 	addu	$s0,$t7,$v0
/*  f0e9cc8:	3c0b8008 */ 	lui	$t3,%hi(var8007fb04)
/*  f0e9ccc:	8d6bfb04 */ 	lw	$t3,%lo(var8007fb04)($t3)
/*  f0e9cd0:	87af014e */ 	lh	$t7,0x14e($sp)
/*  f0e9cd4:	8d8cfb08 */ 	lw	$t4,%lo(var8007fb08)($t4)
/*  f0e9cd8:	8fad00c8 */ 	lw	$t5,0xc8($sp)
/*  f0e9cdc:	0218c823 */ 	subu	$t9,$s0,$t8
/*  f0e9ce0:	014e1821 */ 	addu	$v1,$t2,$t6
/*  f0e9ce4:	2729fff6 */ 	addiu	$t1,$t9,-10
/*  f0e9ce8:	24630009 */ 	addiu	$v1,$v1,0x9
/*  f0e9cec:	afa90128 */ 	sw	$t1,0x128($sp)
/*  f0e9cf0:	afa30124 */ 	sw	$v1,0x124($sp)
/*  f0e9cf4:	afa30058 */ 	sw	$v1,0x58($sp)
/*  f0e9cf8:	8fa40130 */ 	lw	$a0,0x130($sp)
/*  f0e9cfc:	8fa700cc */ 	lw	$a3,0xcc($sp)
/*  f0e9d00:	afa00024 */ 	sw	$zero,0x24($sp)
/*  f0e9d04:	afa00028 */ 	sw	$zero,0x28($sp)
/*  f0e9d08:	afa2001c */ 	sw	$v0,0x1c($sp)
/*  f0e9d0c:	afab0014 */ 	sw	$t3,0x14($sp)
/*  f0e9d10:	afaf0020 */ 	sw	$t7,0x20($sp)
/*  f0e9d14:	afac0010 */ 	sw	$t4,0x10($sp)
/*  f0e9d18:	0fc5580f */ 	jal	textRenderWhite
/*  f0e9d1c:	afad0018 */ 	sw	$t5,0x18($sp)
/*  f0e9d20:	8fb800c4 */ 	lw	$t8,0xc4($sp)
/*  f0e9d24:	8fac00c8 */ 	lw	$t4,0xc8($sp)
/*  f0e9d28:	3c0a8008 */ 	lui	$t2,%hi(var8007fb08)
/*  f0e9d2c:	3c0e8008 */ 	lui	$t6,%hi(var8007fb04)
/*  f0e9d30:	8fa30058 */ 	lw	$v1,0x58($sp)
/*  f0e9d34:	8dcefb04 */ 	lw	$t6,%lo(var8007fb04)($t6)
/*  f0e9d38:	8d4afb08 */ 	lw	$t2,%lo(var8007fb08)($t2)
/*  f0e9d3c:	87ad014a */ 	lh	$t5,0x14a($sp)
/*  f0e9d40:	87af014e */ 	lh	$t7,0x14e($sp)
/*  f0e9d44:	2401ff7f */ 	addiu	$at,$zero,-129
/*  f0e9d48:	0218c823 */ 	subu	$t9,$s0,$t8
/*  f0e9d4c:	2729fff6 */ 	addiu	$t1,$t9,-10
/*  f0e9d50:	01815824 */ 	and	$t3,$t4,$at
/*  f0e9d54:	afa90128 */ 	sw	$t1,0x128($sp)
/*  f0e9d58:	afab0018 */ 	sw	$t3,0x18($sp)
/*  f0e9d5c:	00402025 */ 	or	$a0,$v0,$zero
/*  f0e9d60:	27a50128 */ 	addiu	$a1,$sp,0x128
/*  f0e9d64:	27a60124 */ 	addiu	$a2,$sp,0x124
/*  f0e9d68:	8fa700cc */ 	lw	$a3,0xcc($sp)
/*  f0e9d6c:	afa00024 */ 	sw	$zero,0x24($sp)
/*  f0e9d70:	afa00028 */ 	sw	$zero,0x28($sp)
/*  f0e9d74:	afa30124 */ 	sw	$v1,0x124($sp)
/*  f0e9d78:	afae0014 */ 	sw	$t6,0x14($sp)
/*  f0e9d7c:	afaa0010 */ 	sw	$t2,0x10($sp)
/*  f0e9d80:	afad001c */ 	sw	$t5,0x1c($sp)
/*  f0e9d84:	0fc5580f */ 	jal	textRenderWhite
/*  f0e9d88:	afaf0020 */ 	sw	$t7,0x20($sp)
/*  f0e9d8c:	8fb800c4 */ 	lw	$t8,0xc4($sp)
/*  f0e9d90:	87b90146 */ 	lh	$t9,0x146($sp)
/*  f0e9d94:	00402025 */ 	or	$a0,$v0,$zero
/*  f0e9d98:	02183023 */ 	subu	$a2,$s0,$t8
/*  f0e9d9c:	24c6fff3 */ 	addiu	$a2,$a2,-13
/*  f0e9da0:	27290009 */ 	addiu	$t1,$t9,0x9
/*  f0e9da4:	afa90124 */ 	sw	$t1,0x124($sp)
/*  f0e9da8:	0fc54de0 */ 	jal	func0f153780
/*  f0e9dac:	afa60128 */ 	sw	$a2,0x128($sp)
/*  f0e9db0:	87a50142 */ 	lh	$a1,0x142($sp)
/*  f0e9db4:	87ae0146 */ 	lh	$t6,0x146($sp)
/*  f0e9db8:	8fa60128 */ 	lw	$a2,0x128($sp)
/*  f0e9dbc:	00054880 */ 	sll	$t1,$a1,0x2
/*  f0e9dc0:	01254823 */ 	subu	$t1,$t1,$a1
/*  f0e9dc4:	25cb0008 */ 	addiu	$t3,$t6,0x8
/*  f0e9dc8:	8fad0124 */ 	lw	$t5,0x124($sp)
/*  f0e9dcc:	8faf00bc */ 	lw	$t7,0xbc($sp)
/*  f0e9dd0:	afab00ac */ 	sw	$t3,0xac($sp)
/*  f0e9dd4:	24aa0016 */ 	addiu	$t2,$a1,0x16
/*  f0e9dd8:	01251821 */ 	addu	$v1,$t1,$a1
/*  f0e9ddc:	8fab013c */ 	lw	$t3,0x13c($sp)
/*  f0e9de0:	afaa00b4 */ 	sw	$t2,0xb4($sp)
/*  f0e9de4:	24630042 */ 	addiu	$v1,$v1,0x42
/*  f0e9de8:	25ccfffe */ 	addiu	$t4,$t6,-2
/*  f0e9dec:	afac00b0 */ 	sw	$t4,0xb0($sp)
/*  f0e9df0:	01afc021 */ 	addu	$t8,$t5,$t7
/*  f0e9df4:	256dffff */ 	addiu	$t5,$t3,-1
/*  f0e9df8:	27190002 */ 	addiu	$t9,$t8,0x2
/*  f0e9dfc:	afb900a8 */ 	sw	$t9,0xa8($sp)
/*  f0e9e00:	00402025 */ 	or	$a0,$v0,$zero
/*  f0e9e04:	afa6009c */ 	sw	$a2,0x9c($sp)
/*  f0e9e08:	04610003 */ 	bgez	$v1,.L0f0e9e18
/*  f0e9e0c:	00035083 */ 	sra	$t2,$v1,0x2
/*  f0e9e10:	24610003 */ 	addiu	$at,$v1,0x3
/*  f0e9e14:	00015083 */ 	sra	$t2,$at,0x2
.L0f0e9e18:
/*  f0e9e18:	00ca6023 */ 	subu	$t4,$a2,$t2
/*  f0e9e1c:	258effe8 */ 	addiu	$t6,$t4,-24
/*  f0e9e20:	01cd0019 */ 	multu	$t6,$t5
/*  f0e9e24:	24010005 */ 	addiu	$at,$zero,0x5
/*  f0e9e28:	afaa005c */ 	sw	$t2,0x5c($sp)
/*  f0e9e2c:	00007812 */ 	mflo	$t7
/*  f0e9e30:	00000000 */ 	nop
/*  f0e9e34:	00000000 */ 	nop
/*  f0e9e38:	01e1001a */ 	div	$zero,$t7,$at
/*  f0e9e3c:	0000c012 */ 	mflo	$t8
/*  f0e9e40:	0158c821 */ 	addu	$t9,$t2,$t8
/*  f0e9e44:	27290013 */ 	addiu	$t1,$t9,0x13
/*  f0e9e48:	0fc38926 */ 	jal	func0f0e2498
/*  f0e9e4c:	afa90098 */ 	sw	$t1,0x98($sp)
/*  f0e9e50:	8fa3012c */ 	lw	$v1,0x12c($sp)
/*  f0e9e54:	8fa600b0 */ 	lw	$a2,0xb0($sp)
/*  f0e9e58:	2401ff00 */ 	addiu	$at,$zero,-256
/*  f0e9e5c:	00616024 */ 	and	$t4,$v1,$at
/*  f0e9e60:	3590003f */ 	ori	$s0,$t4,0x3f
/*  f0e9e64:	24ca0001 */ 	addiu	$t2,$a2,0x1
/*  f0e9e68:	afaa0010 */ 	sw	$t2,0x10($sp)
/*  f0e9e6c:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f0e9e70:	01801825 */ 	or	$v1,$t4,$zero
/*  f0e9e74:	afac0014 */ 	sw	$t4,0x14($sp)
/*  f0e9e78:	afac0054 */ 	sw	$t4,0x54($sp)
/*  f0e9e7c:	00402025 */ 	or	$a0,$v0,$zero
/*  f0e9e80:	87a50142 */ 	lh	$a1,0x142($sp)
/*  f0e9e84:	0fc389d1 */ 	jal	func0f0e2744
/*  f0e9e88:	8fa700b4 */ 	lw	$a3,0xb4($sp)
/*  f0e9e8c:	8fa500b4 */ 	lw	$a1,0xb4($sp)
/*  f0e9e90:	8fab00ac */ 	lw	$t3,0xac($sp)
/*  f0e9e94:	00402025 */ 	or	$a0,$v0,$zero
/*  f0e9e98:	24a70001 */ 	addiu	$a3,$a1,0x1
/*  f0e9e9c:	afa7004c */ 	sw	$a3,0x4c($sp)
/*  f0e9ea0:	8fa600b0 */ 	lw	$a2,0xb0($sp)
/*  f0e9ea4:	afb00014 */ 	sw	$s0,0x14($sp)
/*  f0e9ea8:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f0e9eac:	0fc389d1 */ 	jal	func0f0e2744
/*  f0e9eb0:	afab0010 */ 	sw	$t3,0x10($sp)
/*  f0e9eb4:	8fa600ac */ 	lw	$a2,0xac($sp)
/*  f0e9eb8:	8fa7005c */ 	lw	$a3,0x5c($sp)
/*  f0e9ebc:	8fa30054 */ 	lw	$v1,0x54($sp)
/*  f0e9ec0:	24c80001 */ 	addiu	$t0,$a2,0x1
/*  f0e9ec4:	24e7ffff */ 	addiu	$a3,$a3,%lo(g_Stages+0x33f)
/*  f0e9ec8:	afa70058 */ 	sw	$a3,0x58($sp)
/*  f0e9ecc:	afa80010 */ 	sw	$t0,0x10($sp)
/*  f0e9ed0:	afa80048 */ 	sw	$t0,0x48($sp)
/*  f0e9ed4:	00402025 */ 	or	$a0,$v0,$zero
/*  f0e9ed8:	87a50142 */ 	lh	$a1,0x142($sp)
/*  f0e9edc:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f0e9ee0:	0fc389d1 */ 	jal	func0f0e2744
/*  f0e9ee4:	afa30014 */ 	sw	$v1,0x14($sp)
/*  f0e9ee8:	8fa50058 */ 	lw	$a1,0x58($sp)
/*  f0e9eec:	8fa80048 */ 	lw	$t0,0x48($sp)
/*  f0e9ef0:	00402025 */ 	or	$a0,$v0,$zero
/*  f0e9ef4:	24a50003 */ 	addiu	$a1,$a1,0x3
/*  f0e9ef8:	afa50054 */ 	sw	$a1,0x54($sp)
/*  f0e9efc:	8fa600ac */ 	lw	$a2,0xac($sp)
/*  f0e9f00:	8fa7004c */ 	lw	$a3,0x4c($sp)
/*  f0e9f04:	afb00014 */ 	sw	$s0,0x14($sp)
/*  f0e9f08:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f0e9f0c:	0fc389d1 */ 	jal	func0f0e2744
/*  f0e9f10:	afa80010 */ 	sw	$t0,0x10($sp)
/*  f0e9f14:	8fa300a8 */ 	lw	$v1,0xa8($sp)
/*  f0e9f18:	8fa50058 */ 	lw	$a1,0x58($sp)
/*  f0e9f1c:	00402025 */ 	or	$a0,$v0,$zero
/*  f0e9f20:	24630002 */ 	addiu	$v1,$v1,0x2
/*  f0e9f24:	afa30010 */ 	sw	$v1,0x10($sp)
/*  f0e9f28:	afa3004c */ 	sw	$v1,0x4c($sp)
/*  f0e9f2c:	8fa600ac */ 	lw	$a2,0xac($sp)
/*  f0e9f30:	afb00014 */ 	sw	$s0,0x14($sp)
/*  f0e9f34:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f0e9f38:	0fc389d1 */ 	jal	func0f0e2744
/*  f0e9f3c:	24a70001 */ 	addiu	$a3,$a1,0x1
/*  f0e9f40:	8fa50058 */ 	lw	$a1,0x58($sp)
/*  f0e9f44:	8fae00a8 */ 	lw	$t6,0xa8($sp)
/*  f0e9f48:	00402025 */ 	or	$a0,$v0,$zero
/*  f0e9f4c:	24a50002 */ 	addiu	$a1,$a1,0x2
/*  f0e9f50:	afa50044 */ 	sw	$a1,0x44($sp)
/*  f0e9f54:	8fa600ac */ 	lw	$a2,0xac($sp)
/*  f0e9f58:	8fa70054 */ 	lw	$a3,0x54($sp)
/*  f0e9f5c:	afb00014 */ 	sw	$s0,0x14($sp)
/*  f0e9f60:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f0e9f64:	0fc389d1 */ 	jal	func0f0e2744
/*  f0e9f68:	afae0010 */ 	sw	$t6,0x10($sp)
/*  f0e9f6c:	8fa600a8 */ 	lw	$a2,0xa8($sp)
/*  f0e9f70:	8fa7005c */ 	lw	$a3,0x5c($sp)
/*  f0e9f74:	8fa50044 */ 	lw	$a1,0x44($sp)
/*  f0e9f78:	24c30001 */ 	addiu	$v1,$a2,0x1
/*  f0e9f7c:	24e7000e */ 	addiu	$a3,$a3,0xe
/*  f0e9f80:	afa70054 */ 	sw	$a3,0x54($sp)
/*  f0e9f84:	afa30010 */ 	sw	$v1,0x10($sp)
/*  f0e9f88:	afa30048 */ 	sw	$v1,0x48($sp)
/*  f0e9f8c:	00402025 */ 	or	$a0,$v0,$zero
/*  f0e9f90:	afb00014 */ 	sw	$s0,0x14($sp)
/*  f0e9f94:	0fc389d1 */ 	jal	func0f0e2744
/*  f0e9f98:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f0e9f9c:	8fa300a8 */ 	lw	$v1,0xa8($sp)
/*  f0e9fa0:	00402025 */ 	or	$a0,$v0,$zero
/*  f0e9fa4:	8fa50058 */ 	lw	$a1,0x58($sp)
/*  f0e9fa8:	24630003 */ 	addiu	$v1,$v1,0x3
/*  f0e9fac:	afa30010 */ 	sw	$v1,0x10($sp)
/*  f0e9fb0:	afa30044 */ 	sw	$v1,0x44($sp)
/*  f0e9fb4:	8fa6004c */ 	lw	$a2,0x4c($sp)
/*  f0e9fb8:	8fa70054 */ 	lw	$a3,0x54($sp)
/*  f0e9fbc:	afb00014 */ 	sw	$s0,0x14($sp)
/*  f0e9fc0:	0fc389d1 */ 	jal	func0f0e2744
/*  f0e9fc4:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f0e9fc8:	8fad0048 */ 	lw	$t5,0x48($sp)
/*  f0e9fcc:	00402025 */ 	or	$a0,$v0,$zero
/*  f0e9fd0:	8fa50054 */ 	lw	$a1,0x54($sp)
/*  f0e9fd4:	8fa600a8 */ 	lw	$a2,0xa8($sp)
/*  f0e9fd8:	8fa70098 */ 	lw	$a3,0x98($sp)
/*  f0e9fdc:	afb00014 */ 	sw	$s0,0x14($sp)
/*  f0e9fe0:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f0e9fe4:	0fc389d1 */ 	jal	func0f0e2744
/*  f0e9fe8:	afad0010 */ 	sw	$t5,0x10($sp)
/*  f0e9fec:	8faf0044 */ 	lw	$t7,0x44($sp)
/*  f0e9ff0:	00402025 */ 	or	$a0,$v0,$zero
/*  f0e9ff4:	8fa50054 */ 	lw	$a1,0x54($sp)
/*  f0e9ff8:	8fa6004c */ 	lw	$a2,0x4c($sp)
/*  f0e9ffc:	8fa70098 */ 	lw	$a3,0x98($sp)
/*  f0ea000:	afb00014 */ 	sw	$s0,0x14($sp)
/*  f0ea004:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f0ea008:	0fc389d1 */ 	jal	func0f0e2744
/*  f0ea00c:	afaf0010 */ 	sw	$t7,0x10($sp)
/*  f0ea010:	8fa300c8 */ 	lw	$v1,0xc8($sp)
/*  f0ea014:	8fa50098 */ 	lw	$a1,0x98($sp)
/*  f0ea018:	2401ff00 */ 	addiu	$at,$zero,-256
/*  f0ea01c:	8fb90044 */ 	lw	$t9,0x44($sp)
/*  f0ea020:	00614824 */ 	and	$t1,$v1,$at
/*  f0ea024:	3530003f */ 	ori	$s0,$t1,0x3f
/*  f0ea028:	24a70001 */ 	addiu	$a3,$a1,0x1
/*  f0ea02c:	afa70054 */ 	sw	$a3,0x54($sp)
/*  f0ea030:	afb00014 */ 	sw	$s0,0x14($sp)
/*  f0ea034:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f0ea038:	01201825 */ 	or	$v1,$t1,$zero
/*  f0ea03c:	afa9005c */ 	sw	$t1,0x5c($sp)
/*  f0ea040:	00402025 */ 	or	$a0,$v0,$zero
/*  f0ea044:	8fa600a8 */ 	lw	$a2,0xa8($sp)
/*  f0ea048:	0fc389d1 */ 	jal	func0f0e2744
/*  f0ea04c:	afb90010 */ 	sw	$t9,0x10($sp)
/*  f0ea050:	8fa7009c */ 	lw	$a3,0x9c($sp)
/*  f0ea054:	8faa004c */ 	lw	$t2,0x4c($sp)
/*  f0ea058:	00402025 */ 	or	$a0,$v0,$zero
/*  f0ea05c:	24e7fffc */ 	addiu	$a3,$a3,-4
/*  f0ea060:	afa70050 */ 	sw	$a3,0x50($sp)
/*  f0ea064:	8fa50054 */ 	lw	$a1,0x54($sp)
/*  f0ea068:	8fa60048 */ 	lw	$a2,0x48($sp)
/*  f0ea06c:	afb00014 */ 	sw	$s0,0x14($sp)
/*  f0ea070:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f0ea074:	0fc389d1 */ 	jal	func0f0e2744
/*  f0ea078:	afaa0010 */ 	sw	$t2,0x10($sp)
/*  f0ea07c:	8fab005c */ 	lw	$t3,0x5c($sp)
/*  f0ea080:	8fac004c */ 	lw	$t4,0x4c($sp)
/*  f0ea084:	00402025 */ 	or	$a0,$v0,$zero
/*  f0ea088:	356e00cf */ 	ori	$t6,$t3,0xcf
/*  f0ea08c:	afae0018 */ 	sw	$t6,0x18($sp)
/*  f0ea090:	8fa50050 */ 	lw	$a1,0x50($sp)
/*  f0ea094:	8fa60048 */ 	lw	$a2,0x48($sp)
/*  f0ea098:	8fa7009c */ 	lw	$a3,0x9c($sp)
/*  f0ea09c:	afb00014 */ 	sw	$s0,0x14($sp)
/*  f0ea0a0:	0fc389d1 */ 	jal	func0f0e2744
/*  f0ea0a4:	afac0010 */ 	sw	$t4,0x10($sp)
/*  f0ea0a8:	10000074 */ 	b	.L0f0ea27c
/*  f0ea0ac:	afa20130 */ 	sw	$v0,0x130($sp)
.L0f0ea0b0:
/*  f0ea0b0:	87b80146 */ 	lh	$t8,0x146($sp)
/*  f0ea0b4:	87ad0142 */ 	lh	$t5,0x142($sp)
/*  f0ea0b8:	8faa0124 */ 	lw	$t2,0x124($sp)
/*  f0ea0bc:	3c0b8008 */ 	lui	$t3,%hi(var8007fb0c)
/*  f0ea0c0:	8d6bfb0c */ 	lw	$t3,%lo(var8007fb0c)($t3)
/*  f0ea0c4:	2719fffe */ 	addiu	$t9,$t8,-2
/*  f0ea0c8:	27090008 */ 	addiu	$t1,$t8,0x8
/*  f0ea0cc:	25af0016 */ 	addiu	$t7,$t5,0x16
/*  f0ea0d0:	254c0001 */ 	addiu	$t4,$t2,0x1
/*  f0ea0d4:	afaf0080 */ 	sw	$t7,0x80($sp)
/*  f0ea0d8:	afb9007c */ 	sw	$t9,0x7c($sp)
/*  f0ea0dc:	afa90078 */ 	sw	$t1,0x78($sp)
/*  f0ea0e0:	afac0074 */ 	sw	$t4,0x74($sp)
/*  f0ea0e4:	8fa60120 */ 	lw	$a2,0x120($sp)
/*  f0ea0e8:	8ce7fb10 */ 	lw	$a3,-0x4f0($a3)
/*  f0ea0ec:	afa00014 */ 	sw	$zero,0x14($sp)
/*  f0ea0f0:	0fc55cbe */ 	jal	textMeasure
/*  f0ea0f4:	afab0010 */ 	sw	$t3,0x10($sp)
/*  f0ea0f8:	87ae0142 */ 	lh	$t6,0x142($sp)
/*  f0ea0fc:	8fad00c4 */ 	lw	$t5,0xc4($sp)
/*  f0ea100:	8fa40130 */ 	lw	$a0,0x130($sp)
/*  f0ea104:	01cd7821 */ 	addu	$t7,$t6,$t5
/*  f0ea108:	25f90019 */ 	addiu	$t9,$t7,0x19
/*  f0ea10c:	0fc54de0 */ 	jal	func0f153780
/*  f0ea110:	afb9006c */ 	sw	$t9,0x6c($sp)
/*  f0ea114:	0fc38926 */ 	jal	func0f0e2498
/*  f0ea118:	00402025 */ 	or	$a0,$v0,$zero
/*  f0ea11c:	8fa3012c */ 	lw	$v1,0x12c($sp)
/*  f0ea120:	8fa6007c */ 	lw	$a2,0x7c($sp)
/*  f0ea124:	2401ff00 */ 	addiu	$at,$zero,-256
/*  f0ea128:	00614824 */ 	and	$t1,$v1,$at
/*  f0ea12c:	3530003f */ 	ori	$s0,$t1,0x3f
/*  f0ea130:	24d80001 */ 	addiu	$t8,$a2,0x1
/*  f0ea134:	afb80010 */ 	sw	$t8,0x10($sp)
/*  f0ea138:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f0ea13c:	01201825 */ 	or	$v1,$t1,$zero
/*  f0ea140:	afa90014 */ 	sw	$t1,0x14($sp)
/*  f0ea144:	afa90054 */ 	sw	$t1,0x54($sp)
/*  f0ea148:	00402025 */ 	or	$a0,$v0,$zero
/*  f0ea14c:	87a50142 */ 	lh	$a1,0x142($sp)
/*  f0ea150:	0fc389d1 */ 	jal	func0f0e2744
/*  f0ea154:	8fa70080 */ 	lw	$a3,0x80($sp)
/*  f0ea158:	8fa50080 */ 	lw	$a1,0x80($sp)
/*  f0ea15c:	8fac0078 */ 	lw	$t4,0x78($sp)
/*  f0ea160:	00402025 */ 	or	$a0,$v0,$zero
/*  f0ea164:	24a70001 */ 	addiu	$a3,$a1,0x1
/*  f0ea168:	afa7005c */ 	sw	$a3,0x5c($sp)
/*  f0ea16c:	8fa6007c */ 	lw	$a2,0x7c($sp)
/*  f0ea170:	afb00014 */ 	sw	$s0,0x14($sp)
/*  f0ea174:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f0ea178:	0fc389d1 */ 	jal	func0f0e2744
/*  f0ea17c:	afac0010 */ 	sw	$t4,0x10($sp)
/*  f0ea180:	87ab0142 */ 	lh	$t3,0x142($sp)
/*  f0ea184:	8fa60078 */ 	lw	$a2,0x78($sp)
/*  f0ea188:	8fa30054 */ 	lw	$v1,0x54($sp)
/*  f0ea18c:	000b7080 */ 	sll	$t6,$t3,0x2
/*  f0ea190:	01cb7023 */ 	subu	$t6,$t6,$t3
/*  f0ea194:	01cb3821 */ 	addu	$a3,$t6,$t3
/*  f0ea198:	24e70042 */ 	addiu	$a3,$a3,0x42
/*  f0ea19c:	24c80001 */ 	addiu	$t0,$a2,0x1
/*  f0ea1a0:	afa80010 */ 	sw	$t0,0x10($sp)
/*  f0ea1a4:	afa8004c */ 	sw	$t0,0x4c($sp)
/*  f0ea1a8:	00402025 */ 	or	$a0,$v0,$zero
/*  f0ea1ac:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f0ea1b0:	01602825 */ 	or	$a1,$t3,$zero
/*  f0ea1b4:	04e10003 */ 	bgez	$a3,.L0f0ea1c4
/*  f0ea1b8:	00076883 */ 	sra	$t5,$a3,0x2
/*  f0ea1bc:	24e10003 */ 	addiu	$at,$a3,0x3
/*  f0ea1c0:	00016883 */ 	sra	$t5,$at,0x2
.L0f0ea1c4:
/*  f0ea1c4:	25a7ffff */ 	addiu	$a3,$t5,-1
/*  f0ea1c8:	afa70058 */ 	sw	$a3,0x58($sp)
/*  f0ea1cc:	0fc389d1 */ 	jal	func0f0e2744
/*  f0ea1d0:	afa30014 */ 	sw	$v1,0x14($sp)
/*  f0ea1d4:	8fa50058 */ 	lw	$a1,0x58($sp)
/*  f0ea1d8:	8fa8004c */ 	lw	$t0,0x4c($sp)
/*  f0ea1dc:	00402025 */ 	or	$a0,$v0,$zero
/*  f0ea1e0:	24a50003 */ 	addiu	$a1,$a1,0x3
/*  f0ea1e4:	afa50054 */ 	sw	$a1,0x54($sp)
/*  f0ea1e8:	8fa60078 */ 	lw	$a2,0x78($sp)
/*  f0ea1ec:	8fa7005c */ 	lw	$a3,0x5c($sp)
/*  f0ea1f0:	afb00014 */ 	sw	$s0,0x14($sp)
/*  f0ea1f4:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f0ea1f8:	0fc389d1 */ 	jal	func0f0e2744
/*  f0ea1fc:	afa80010 */ 	sw	$t0,0x10($sp)
/*  f0ea200:	8faf0074 */ 	lw	$t7,0x74($sp)
/*  f0ea204:	8fa50058 */ 	lw	$a1,0x58($sp)
/*  f0ea208:	00402025 */ 	or	$a0,$v0,$zero
/*  f0ea20c:	25f90002 */ 	addiu	$t9,$t7,0x2
/*  f0ea210:	afb90010 */ 	sw	$t9,0x10($sp)
/*  f0ea214:	8fa60078 */ 	lw	$a2,0x78($sp)
/*  f0ea218:	afb00014 */ 	sw	$s0,0x14($sp)
/*  f0ea21c:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f0ea220:	0fc389d1 */ 	jal	func0f0e2744
/*  f0ea224:	24a70001 */ 	addiu	$a3,$a1,0x1
/*  f0ea228:	8fa50058 */ 	lw	$a1,0x58($sp)
/*  f0ea22c:	8fb80074 */ 	lw	$t8,0x74($sp)
/*  f0ea230:	00402025 */ 	or	$a0,$v0,$zero
/*  f0ea234:	24a50002 */ 	addiu	$a1,$a1,0x2
/*  f0ea238:	afa50044 */ 	sw	$a1,0x44($sp)
/*  f0ea23c:	8fa60078 */ 	lw	$a2,0x78($sp)
/*  f0ea240:	8fa70054 */ 	lw	$a3,0x54($sp)
/*  f0ea244:	afb00014 */ 	sw	$s0,0x14($sp)
/*  f0ea248:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f0ea24c:	0fc389d1 */ 	jal	func0f0e2744
/*  f0ea250:	afb80010 */ 	sw	$t8,0x10($sp)
/*  f0ea254:	8fa60074 */ 	lw	$a2,0x74($sp)
/*  f0ea258:	8fa50044 */ 	lw	$a1,0x44($sp)
/*  f0ea25c:	00402025 */ 	or	$a0,$v0,$zero
/*  f0ea260:	24ca0001 */ 	addiu	$t2,$a2,0x1
/*  f0ea264:	afaa0010 */ 	sw	$t2,0x10($sp)
/*  f0ea268:	8fa7006c */ 	lw	$a3,0x6c($sp)
/*  f0ea26c:	afb00014 */ 	sw	$s0,0x14($sp)
/*  f0ea270:	0fc389d1 */ 	jal	func0f0e2744
/*  f0ea274:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f0ea278:	afa20130 */ 	sw	$v0,0x130($sp)
.L0f0ea27c:
/*  f0ea27c:	8fbf003c */ 	lw	$ra,0x3c($sp)
/*  f0ea280:	8fa20130 */ 	lw	$v0,0x130($sp)
/*  f0ea284:	8fb00038 */ 	lw	$s0,0x38($sp)
/*  f0ea288:	03e00008 */ 	jr	$ra
/*  f0ea28c:	27bd0130 */ 	addiu	$sp,$sp,0x130
);

Gfx *menuRenderItemObjectives(Gfx *gdl, struct menurenderthing *thing)
{
	s32 y = thing->y + 5;
	s32 position = 1;
	s32 i;

	for (i = 0; i < 6; i++) {
		if (g_Briefing.objectivenames[i + 1]
				&& g_Briefing.objectivedifficulties[i + 1] & (1 << getDifficulty())) {
			gdl = menuRenderObjective(gdl,
					thing->frame,
					i, position, thing->x, y, thing->width, thing->height,
					thing->item->param != 1,
					thing->item->param == 2);

			position++;

            if (thing->item->param == 0) {
            	y += 18;
            } else if (thing->item->param == 2) {
            	y += 30;
			} else {
				y += 14;
			}
		}
	}

	return gdl;
}

Gfx *menuRenderItemModel(Gfx *gdl, struct menurenderthing *thing)
{
	if (thing->item->param1 & 0x00200000) {
		struct menuitemmodelrenderdata renderdata;
		union handlerdata data;

		renderdata.x = thing->x;
		renderdata.y = thing->y;
		renderdata.width = thing->width;

		if (thing->frame->transitiontimer < 0) {
			renderdata.colour = g_MenuColourPalettes[thing->frame->type].focused;
		} else {
			renderdata.colour = colourBlend(
					g_MenuColourPalettes[thing->frame->type2].focused,
					g_MenuColourPalettes[thing->frame->type].focused,
					thing->frame->colourweight);
		}

		if (thing->frame->dimmed) {
			renderdata.colour = (colourBlend(renderdata.colour, 0, 127) & 0xffffff00) | (renderdata.colour & 0xff);
		}

		renderdata.arg10 = true;

		data.type19.gdl = gdl;
		data.type19.renderdata1 = &renderdata;
		data.type19.renderdata2 = &renderdata;

		gdl = (Gfx *)thing->item->handler(MENUOP_19, thing->item, &data);
	}

	return gdl;
}

Gfx *menuRenderItemLabel(Gfx *gdl, struct menurenderthing *thing)
{
	u32 colour1;
	u32 colour2;
	char *text;
	s32 x;
	s32 y;
	struct menudfc *menudfc;
	u8 savedvalue = var8007fb9c;
	u32 font1 = var8007fb10;
	u32 font2 = var8007fb0c;

	x = thing->x + 10;
	y = thing->y + 2;

	if (thing->item->param1 & 0x00000010) {
		x -= 6;
	}

	text = menuResolveParam2Text(thing->item);

	if (!text) {
		return gdl;
	}

	if (thing->item->param1 & 0x00000200) {
		font1 = var8007fb08;
		font2 = var8007fb04;
		y -= 2;
	}

	if (thing->item->param1 & 0x00000020) {
		// Center
		s32 textheight;
		s32 textwidth;
		textMeasure(&textheight, &textwidth, text, font1, font2, 0);
		x = thing->x + (thing->width - textwidth) / 2;
	}

	if (thing->item->param1 & 0x00000100) {
		if (thing->frame->transitiontimer < 0) {
			colour1 = g_MenuColourPalettes[thing->frame->type].checkedunfocused;
		} else {
			colour1 = colourBlend(
					g_MenuColourPalettes[thing->frame->type2].checkedunfocused,
					g_MenuColourPalettes[thing->frame->type].checkedunfocused,
					thing->frame->colourweight);
		}

		if (thing->frame->dimmed) {
			colour1 = (colourBlend(colour1, 0, 127) & 0xffffff00) | (colour1 & 0xff);
		}

		func0f153e38(
				g_MenuColourPalettes3[thing->frame->type].checkedunfocused,
				g_MenuColourPalettes2[thing->frame->type].checkedunfocused);
	} else {
		if (thing->frame->transitiontimer < 0) {
			colour1 = g_MenuColourPalettes[thing->frame->type].unfocused;
		} else {
			colour1 = colourBlend(
					g_MenuColourPalettes[thing->frame->type2].unfocused,
					g_MenuColourPalettes[thing->frame->type].unfocused,
					thing->frame->colourweight);
		}

		if (thing->frame->dimmed) {
			colour1 = (colourBlend(colour1, 0, 127) & 0xffffff00) | (colour1 & 0xff);
		}

		func0f153e38(
				g_MenuColourPalettes3[thing->frame->type].unfocused,
				g_MenuColourPalettes2[thing->frame->type].unfocused);
	}

	if (menuIsItemDisabled(thing->item, thing->frame)) {
		if (thing->frame->transitiontimer < 0) {
			colour1 = g_MenuColourPalettes[thing->frame->type].disabled;
		} else {
			colour1 = colourBlend(
					g_MenuColourPalettes[thing->frame->type2].disabled,
					g_MenuColourPalettes[thing->frame->type].disabled,
					thing->frame->colourweight);
		}

		if (thing->frame->dimmed) {
			colour1 = (colourBlend(colour1, 0, 127) & 0xffffff00) | (colour1 & 0xff);
		}

		func0f153e38(
				g_MenuColourPalettes3[thing->frame->type].disabled,
				g_MenuColourPalettes2[thing->frame->type].disabled);
	}

	menudfc = func0f0f1338(thing->item);

	if (menudfc) {
		if (menudfc->unk04 < 0) {
			return gdl;
		}

		func0f153c50();
		func0f153c20(x, y, menudfc->unk04 * 300, 0);
		var8007fb9c = 1;
	}

	colour2 = colour1;

	if (thing->item->param1 & 0x01000000) {
		union handlerdata data;
		data.label.colour2 = colour2;
		data.label.colour1 = colour1;

		if (thing->item->handlervoid) {
			thing->item->handlervoid(MENUOP_GETCOLOUR, thing->item, &data);
		}

		if (thing->item->handlervoid) {
		}

		colour2 = data.label.colour2;
		colour1 = data.label.colour1;
	}

	gdl = func0f153628(gdl);
	gdl = textRenderWhite(gdl, &x, &y, text,
			font1, font2, colour1, thing->width, thing->height, 0, 0);

	if ((thing->item->param1 & 0x00008000) == 0) {
		// Right side text
		text = menuResolveText(thing->item->param3, thing->item);

		// This is not how you check if a string is empty...
		if (text != NULL && text != "") {
			s32 textheight;
			s32 textwidth;

			y = thing->y + 2;

			if (thing->item->param1 & 0x00000200) {
				y -= 2;
			}

			textMeasure(&textheight, &textwidth, text, font1, font2, 0);
			x = thing->x + thing->width - textwidth - 10;

			if (thing->item->param1 & 0x00000010) {
				x += 6;
			}

			gdl = textRenderWhite(gdl, &x, &y, text,
					font1, font2, colour2, thing->width, thing->height, 0, 0);
		}
	}

	gdl = func0f153780(gdl);

	if (menudfc) {
		if (thing->width + 200 < menudfc->unk04 * 300 && thing->frame->unk48 < 0) {
			func0f0f13ec(thing->item);
		}

		var8007fb9c = savedvalue;

		func0f153c88();
	}

	if (thing->item->param1 & 0x00200000) {
		struct menuitemmodelrenderdata renderdata;
		union handlerdata data;

		renderdata.x = thing->x;
		renderdata.y = thing->y;
		renderdata.width = thing->width;
		renderdata.colour = colour1;
		renderdata.arg10 = 0;

		data.type19.gdl = gdl;
		data.type19.renderdata1 = NULL;
		data.type19.renderdata2 = &renderdata;

		gdl = (Gfx *) thing->item->handler(MENUOP_19, thing->item, &data);
	}

	return gdl;
}

/**
 * Renders two yellow bars and an optional label. Suspected to be a resource
 * meter but with the calculations ifdeffed out, so the widths are static.
 */
Gfx *menuRenderItemMeter(Gfx *gdl, struct menurenderthing *thing)
{
	u32 a = 9;
	char *text;
	s32 x;
	s32 y;
	u32 colour1;
	u32 colour2;
	u32 colour;
	s32 x1;
	s32 x2;
	s32 x3;

	if (thing->frame->transitiontimer < 0) {
		colour = g_MenuColourPalettes[thing->frame->type].unfocused;
	} else {
		colour = colourBlend(
				g_MenuColourPalettes[thing->frame->type2].unfocused,
				g_MenuColourPalettes[thing->frame->type].unfocused,
				thing->frame->colourweight);
	}

	if (thing->frame->dimmed) {
		colour = (colourBlend(colour, 0, 127) & 0xffffff00) | (colour & 0xff);
	}

	colour2 = 0xffff0000 | (colour & 0xff);
	colour1 = colourBlend(colour2, colour2 & 0xff, 127);

	x1 = thing->x + 32;
	x2 = x1 + a;
	x3 = x2 + 6;

	gdl = func0f1537dc(gdl, colour1);
	gDPFillRectangle(gdl++,
			x1 * g_ScreenWidthMultiplier, thing->y,
			x2 * g_ScreenWidthMultiplier, thing->y + 5);
	gdl = func0f153838(gdl);

	gdl = func0f1537dc(gdl, colour2);
	gDPFillRectangle(gdl++,
			x2 * g_ScreenWidthMultiplier, thing->y,
			x3 * g_ScreenWidthMultiplier, thing->y + 5);
	gdl = func0f153838(gdl);

	text = menuResolveParam2Text(thing->item);

	if (text) {
		gdl = func0f153628(gdl);
		x = thing->x;
		y = thing->y - 1;
		gdl = textRenderWhite(gdl, &x, &y, text, var8007fb08, var8007fb04,
				colour2 & 0xffffff7f, thing->width, thing->height, 0, 0);
		gdl = func0f153780(gdl);
	}

	return gdl;
}

GLOBAL_ASM(
glabel menuRenderItemSelectable
/*  f0eaec0:	27bdff80 */ 	addiu	$sp,$sp,-128
/*  f0eaec4:	afbf003c */ 	sw	$ra,0x3c($sp)
/*  f0eaec8:	afb10038 */ 	sw	$s1,0x38($sp)
/*  f0eaecc:	afb00034 */ 	sw	$s0,0x34($sp)
/*  f0eaed0:	afa40080 */ 	sw	$a0,0x80($sp)
/*  f0eaed4:	84ae0000 */ 	lh	$t6,0x0($a1)
/*  f0eaed8:	3c038008 */ 	lui	$v1,%hi(var8007fb10)
/*  f0eaedc:	3c078008 */ 	lui	$a3,%hi(var8007fb0c)
/*  f0eaee0:	25cf000a */ 	addiu	$t7,$t6,0xa
/*  f0eaee4:	afaf0070 */ 	sw	$t7,0x70($sp)
/*  f0eaee8:	84b80002 */ 	lh	$t8,0x2($a1)
/*  f0eaeec:	00a08025 */ 	or	$s0,$a1,$zero
/*  f0eaef0:	8c63fb10 */ 	lw	$v1,%lo(var8007fb10)($v1)
/*  f0eaef4:	27190002 */ 	addiu	$t9,$t8,0x2
/*  f0eaef8:	afb9006c */ 	sw	$t9,0x6c($sp)
/*  f0eaefc:	8ca60008 */ 	lw	$a2,0x8($a1)
/*  f0eaf00:	8ce7fb0c */ 	lw	$a3,%lo(var8007fb0c)($a3)
/*  f0eaf04:	8cc20004 */ 	lw	$v0,0x4($a2)
/*  f0eaf08:	30480010 */ 	andi	$t0,$v0,0x10
/*  f0eaf0c:	11000004 */ 	beqz	$t0,.L0f0eaf20
/*  f0eaf10:	25eafffa */ 	addiu	$t2,$t7,-6
/*  f0eaf14:	afaa0070 */ 	sw	$t2,0x70($sp)
/*  f0eaf18:	8ca60008 */ 	lw	$a2,0x8($a1)
/*  f0eaf1c:	8cc20004 */ 	lw	$v0,0x4($a2)
.L0f0eaf20:
/*  f0eaf20:	00025a40 */ 	sll	$t3,$v0,0x9
/*  f0eaf24:	05610005 */ 	bgez	$t3,.L0f0eaf3c
/*  f0eaf28:	00c02025 */ 	or	$a0,$a2,$zero
/*  f0eaf2c:	3c038008 */ 	lui	$v1,%hi(var8007fb18)
/*  f0eaf30:	3c078008 */ 	lui	$a3,%hi(var8007fb14)
/*  f0eaf34:	8c63fb18 */ 	lw	$v1,%lo(var8007fb18)($v1)
/*  f0eaf38:	8ce7fb14 */ 	lw	$a3,%lo(var8007fb14)($a3)
.L0f0eaf3c:
/*  f0eaf3c:	afa30068 */ 	sw	$v1,0x68($sp)
/*  f0eaf40:	0fc3c557 */ 	jal	menuResolveParam2Text
/*  f0eaf44:	afa70064 */ 	sw	$a3,0x64($sp)
/*  f0eaf48:	afa20074 */ 	sw	$v0,0x74($sp)
/*  f0eaf4c:	8e030010 */ 	lw	$v1,0x10($s0)
/*  f0eaf50:	44803000 */ 	mtc1	$zero,$f6
/*  f0eaf54:	c4640040 */ 	lwc1	$f4,0x40($v1)
/*  f0eaf58:	4606203c */ 	c.lt.s	$f4,$f6
/*  f0eaf5c:	00000000 */ 	nop
/*  f0eaf60:	4502000a */ 	bc1fl	.L0f0eaf8c
/*  f0eaf64:	906e003d */ 	lbu	$t6,0x3d($v1)
/*  f0eaf68:	906c003c */ 	lbu	$t4,0x3c($v1)
/*  f0eaf6c:	3c117f1b */ 	lui	$s1,%hi(g_MenuColourPalettes+0x18)
/*  f0eaf70:	000c6900 */ 	sll	$t5,$t4,0x4
/*  f0eaf74:	01ac6823 */ 	subu	$t5,$t5,$t4
/*  f0eaf78:	000d6880 */ 	sll	$t5,$t5,0x2
/*  f0eaf7c:	022d8821 */ 	addu	$s1,$s1,$t5
/*  f0eaf80:	10000013 */ 	b	.L0f0eafd0
/*  f0eaf84:	8e311fc8 */ 	lw	$s1,%lo(g_MenuColourPalettes+0x18)($s1)
/*  f0eaf88:	906e003d */ 	lbu	$t6,0x3d($v1)
.L0f0eaf8c:
/*  f0eaf8c:	9068003c */ 	lbu	$t0,0x3c($v1)
/*  f0eaf90:	3c187f1b */ 	lui	$t8,%hi(g_MenuColourPalettes)
/*  f0eaf94:	000e7900 */ 	sll	$t7,$t6,0x4
/*  f0eaf98:	00084900 */ 	sll	$t1,$t0,0x4
/*  f0eaf9c:	27181fb0 */ 	addiu	$t8,$t8,%lo(g_MenuColourPalettes)
/*  f0eafa0:	01ee7823 */ 	subu	$t7,$t7,$t6
/*  f0eafa4:	01284823 */ 	subu	$t1,$t1,$t0
/*  f0eafa8:	00094880 */ 	sll	$t1,$t1,0x2
/*  f0eafac:	000f7880 */ 	sll	$t7,$t7,0x2
/*  f0eafb0:	01f8c821 */ 	addu	$t9,$t7,$t8
/*  f0eafb4:	01385021 */ 	addu	$t2,$t1,$t8
/*  f0eafb8:	8d450018 */ 	lw	$a1,0x18($t2)
/*  f0eafbc:	8f240018 */ 	lw	$a0,0x18($t9)
/*  f0eafc0:	0fc01a40 */ 	jal	colourBlend
/*  f0eafc4:	8c660044 */ 	lw	$a2,0x44($v1)
/*  f0eafc8:	00408825 */ 	or	$s1,$v0,$zero
/*  f0eafcc:	8e030010 */ 	lw	$v1,0x10($s0)
.L0f0eafd0:
/*  f0eafd0:	8c6b000c */ 	lw	$t3,0xc($v1)
/*  f0eafd4:	02202025 */ 	or	$a0,$s1,$zero
/*  f0eafd8:	00002825 */ 	or	$a1,$zero,$zero
/*  f0eafdc:	51600008 */ 	beqzl	$t3,.L0f0eb000
/*  f0eafe0:	afb10078 */ 	sw	$s1,0x78($sp)
/*  f0eafe4:	0fc01a40 */ 	jal	colourBlend
/*  f0eafe8:	2406007f */ 	addiu	$a2,$zero,0x7f
/*  f0eafec:	2401ff00 */ 	addiu	$at,$zero,-256
/*  f0eaff0:	00416024 */ 	and	$t4,$v0,$at
/*  f0eaff4:	322d00ff */ 	andi	$t5,$s1,0xff
/*  f0eaff8:	018d8825 */ 	or	$s1,$t4,$t5
/*  f0eaffc:	afb10078 */ 	sw	$s1,0x78($sp)
.L0f0eb000:
/*  f0eb000:	8e0e000c */ 	lw	$t6,0xc($s0)
/*  f0eb004:	3c014220 */ 	lui	$at,0x4220
/*  f0eb008:	51c00062 */ 	beqzl	$t6,.L0f0eb194
/*  f0eb00c:	8e090010 */ 	lw	$t1,0x10($s0)
/*  f0eb010:	44816000 */ 	mtc1	$at,$f12
/*  f0eb014:	0fc01ac2 */ 	jal	func0f006b08
/*  f0eb018:	00000000 */ 	nop
/*  f0eb01c:	3c01437f */ 	lui	$at,0x437f
/*  f0eb020:	44814000 */ 	mtc1	$at,$f8
/*  f0eb024:	24190001 */ 	addiu	$t9,$zero,0x1
/*  f0eb028:	3c0b7f1b */ 	lui	$t3,%hi(g_MenuColourPalettes)
/*  f0eb02c:	46080282 */ 	mul.s	$f10,$f0,$f8
/*  f0eb030:	256b1fb0 */ 	addiu	$t3,$t3,%lo(g_MenuColourPalettes)
/*  f0eb034:	3c014f00 */ 	lui	$at,0x4f00
/*  f0eb038:	444ff800 */ 	cfc1	$t7,$31
/*  f0eb03c:	44d9f800 */ 	ctc1	$t9,$31
/*  f0eb040:	00000000 */ 	nop
/*  f0eb044:	46005424 */ 	cvt.w.s	$f16,$f10
/*  f0eb048:	4459f800 */ 	cfc1	$t9,$31
/*  f0eb04c:	00000000 */ 	nop
/*  f0eb050:	33390078 */ 	andi	$t9,$t9,0x78
/*  f0eb054:	53200013 */ 	beqzl	$t9,.L0f0eb0a4
/*  f0eb058:	44198000 */ 	mfc1	$t9,$f16
/*  f0eb05c:	44818000 */ 	mtc1	$at,$f16
/*  f0eb060:	24190001 */ 	addiu	$t9,$zero,0x1
/*  f0eb064:	46105401 */ 	sub.s	$f16,$f10,$f16
/*  f0eb068:	44d9f800 */ 	ctc1	$t9,$31
/*  f0eb06c:	00000000 */ 	nop
/*  f0eb070:	46008424 */ 	cvt.w.s	$f16,$f16
/*  f0eb074:	4459f800 */ 	cfc1	$t9,$31
/*  f0eb078:	00000000 */ 	nop
/*  f0eb07c:	33390078 */ 	andi	$t9,$t9,0x78
/*  f0eb080:	17200005 */ 	bnez	$t9,.L0f0eb098
/*  f0eb084:	00000000 */ 	nop
/*  f0eb088:	44198000 */ 	mfc1	$t9,$f16
/*  f0eb08c:	3c018000 */ 	lui	$at,0x8000
/*  f0eb090:	10000007 */ 	b	.L0f0eb0b0
/*  f0eb094:	0321c825 */ 	or	$t9,$t9,$at
.L0f0eb098:
/*  f0eb098:	10000005 */ 	b	.L0f0eb0b0
/*  f0eb09c:	2419ffff */ 	addiu	$t9,$zero,-1
/*  f0eb0a0:	44198000 */ 	mfc1	$t9,$f16
.L0f0eb0a4:
/*  f0eb0a4:	00000000 */ 	nop
/*  f0eb0a8:	0720fffb */ 	bltz	$t9,.L0f0eb098
/*  f0eb0ac:	00000000 */ 	nop
.L0f0eb0b0:
/*  f0eb0b0:	afb9005c */ 	sw	$t9,0x5c($sp)
/*  f0eb0b4:	8e030010 */ 	lw	$v1,0x10($s0)
/*  f0eb0b8:	44cff800 */ 	ctc1	$t7,$31
/*  f0eb0bc:	44802000 */ 	mtc1	$zero,$f4
/*  f0eb0c0:	c4720040 */ 	lwc1	$f18,0x40($v1)
/*  f0eb0c4:	4604903c */ 	c.lt.s	$f18,$f4
/*  f0eb0c8:	00000000 */ 	nop
/*  f0eb0cc:	4502000a */ 	bc1fl	.L0f0eb0f8
/*  f0eb0d0:	9078003d */ 	lbu	$t8,0x3d($v1)
/*  f0eb0d4:	9068003c */ 	lbu	$t0,0x3c($v1)
/*  f0eb0d8:	3c077f1b */ 	lui	$a3,%hi(g_MenuColourPalettes+0x20)
/*  f0eb0dc:	00084900 */ 	sll	$t1,$t0,0x4
/*  f0eb0e0:	01284823 */ 	subu	$t1,$t1,$t0
/*  f0eb0e4:	00094880 */ 	sll	$t1,$t1,0x2
/*  f0eb0e8:	00e93821 */ 	addu	$a3,$a3,$t1
/*  f0eb0ec:	10000010 */ 	b	.L0f0eb130
/*  f0eb0f0:	8ce71fd0 */ 	lw	$a3,%lo(g_MenuColourPalettes+0x20)($a3)
/*  f0eb0f4:	9078003d */ 	lbu	$t8,0x3d($v1)
.L0f0eb0f8:
/*  f0eb0f8:	906d003c */ 	lbu	$t5,0x3c($v1)
/*  f0eb0fc:	8c660044 */ 	lw	$a2,0x44($v1)
/*  f0eb100:	00185100 */ 	sll	$t2,$t8,0x4
/*  f0eb104:	000d7100 */ 	sll	$t6,$t5,0x4
/*  f0eb108:	01585023 */ 	subu	$t2,$t2,$t8
/*  f0eb10c:	01cd7023 */ 	subu	$t6,$t6,$t5
/*  f0eb110:	000e7080 */ 	sll	$t6,$t6,0x2
/*  f0eb114:	000a5080 */ 	sll	$t2,$t2,0x2
/*  f0eb118:	014b6021 */ 	addu	$t4,$t2,$t3
/*  f0eb11c:	01cb7821 */ 	addu	$t7,$t6,$t3
/*  f0eb120:	8de50020 */ 	lw	$a1,0x20($t7)
/*  f0eb124:	0fc01a40 */ 	jal	colourBlend
/*  f0eb128:	8d840020 */ 	lw	$a0,0x20($t4)
/*  f0eb12c:	00403825 */ 	or	$a3,$v0,$zero
.L0f0eb130:
/*  f0eb130:	02202025 */ 	or	$a0,$s1,$zero
/*  f0eb134:	322500ff */ 	andi	$a1,$s1,0xff
/*  f0eb138:	2406007f */ 	addiu	$a2,$zero,0x7f
/*  f0eb13c:	0fc01a40 */ 	jal	colourBlend
/*  f0eb140:	afa70060 */ 	sw	$a3,0x60($sp)
/*  f0eb144:	8fa50060 */ 	lw	$a1,0x60($sp)
/*  f0eb148:	00402025 */ 	or	$a0,$v0,$zero
/*  f0eb14c:	0fc01a40 */ 	jal	colourBlend
/*  f0eb150:	8fa6005c */ 	lw	$a2,0x5c($sp)
/*  f0eb154:	8e190010 */ 	lw	$t9,0x10($s0)
/*  f0eb158:	3c047f1b */ 	lui	$a0,%hi(g_MenuColourPalettes3+0x20)
/*  f0eb15c:	3c057f1b */ 	lui	$a1,%hi(g_MenuColourPalettes2+0x20)
/*  f0eb160:	9326003c */ 	lbu	$a2,0x3c($t9)
/*  f0eb164:	00408825 */ 	or	$s1,$v0,$zero
/*  f0eb168:	00064100 */ 	sll	$t0,$a2,0x4
/*  f0eb16c:	01064023 */ 	subu	$t0,$t0,$a2
/*  f0eb170:	00083080 */ 	sll	$a2,$t0,0x2
/*  f0eb174:	00862021 */ 	addu	$a0,$a0,$a2
/*  f0eb178:	00a62821 */ 	addu	$a1,$a1,$a2
/*  f0eb17c:	8ca52138 */ 	lw	$a1,%lo(g_MenuColourPalettes2+0x20)($a1)
/*  f0eb180:	0fc54f8e */ 	jal	func0f153e38
/*  f0eb184:	8c8422a0 */ 	lw	$a0,%lo(g_MenuColourPalettes3+0x20)($a0)
/*  f0eb188:	1000000e */ 	b	.L0f0eb1c4
/*  f0eb18c:	8e040008 */ 	lw	$a0,0x8($s0)
/*  f0eb190:	8e090010 */ 	lw	$t1,0x10($s0)
.L0f0eb194:
/*  f0eb194:	3c047f1b */ 	lui	$a0,%hi(g_MenuColourPalettes3+0x18)
/*  f0eb198:	3c057f1b */ 	lui	$a1,%hi(g_MenuColourPalettes2+0x18)
/*  f0eb19c:	9126003c */ 	lbu	$a2,0x3c($t1)
/*  f0eb1a0:	0006c100 */ 	sll	$t8,$a2,0x4
/*  f0eb1a4:	0306c023 */ 	subu	$t8,$t8,$a2
/*  f0eb1a8:	00183080 */ 	sll	$a2,$t8,0x2
/*  f0eb1ac:	00862021 */ 	addu	$a0,$a0,$a2
/*  f0eb1b0:	00a62821 */ 	addu	$a1,$a1,$a2
/*  f0eb1b4:	8ca52130 */ 	lw	$a1,%lo(g_MenuColourPalettes2+0x18)($a1)
/*  f0eb1b8:	0fc54f8e */ 	jal	func0f153e38
/*  f0eb1bc:	8c842298 */ 	lw	$a0,%lo(g_MenuColourPalettes3+0x18)($a0)
/*  f0eb1c0:	8e040008 */ 	lw	$a0,0x8($s0)
.L0f0eb1c4:
/*  f0eb1c4:	0fc3c962 */ 	jal	menuIsItemDisabled
/*  f0eb1c8:	8e050010 */ 	lw	$a1,0x10($s0)
/*  f0eb1cc:	5040003b */ 	beqzl	$v0,.L0f0eb2bc
/*  f0eb1d0:	8e0d0008 */ 	lw	$t5,0x8($s0)
/*  f0eb1d4:	8e030010 */ 	lw	$v1,0x10($s0)
/*  f0eb1d8:	44804000 */ 	mtc1	$zero,$f8
/*  f0eb1dc:	3c027f1b */ 	lui	$v0,%hi(g_MenuColourPalettes)
/*  f0eb1e0:	c4660040 */ 	lwc1	$f6,0x40($v1)
/*  f0eb1e4:	24421fb0 */ 	addiu	$v0,$v0,%lo(g_MenuColourPalettes)
/*  f0eb1e8:	4608303c */ 	c.lt.s	$f6,$f8
/*  f0eb1ec:	00000000 */ 	nop
/*  f0eb1f0:	4502000a */ 	bc1fl	.L0f0eb21c
/*  f0eb1f4:	906d003d */ 	lbu	$t5,0x3d($v1)
/*  f0eb1f8:	906a003c */ 	lbu	$t2,0x3c($v1)
/*  f0eb1fc:	3c117f1b */ 	lui	$s1,%hi(g_MenuColourPalettes+0x1c)
/*  f0eb200:	000a6100 */ 	sll	$t4,$t2,0x4
/*  f0eb204:	018a6023 */ 	subu	$t4,$t4,$t2
/*  f0eb208:	000c6080 */ 	sll	$t4,$t4,0x2
/*  f0eb20c:	022c8821 */ 	addu	$s1,$s1,$t4
/*  f0eb210:	10000011 */ 	b	.L0f0eb258
/*  f0eb214:	8e311fcc */ 	lw	$s1,%lo(g_MenuColourPalettes+0x1c)($s1)
/*  f0eb218:	906d003d */ 	lbu	$t5,0x3d($v1)
.L0f0eb21c:
/*  f0eb21c:	906f003c */ 	lbu	$t7,0x3c($v1)
/*  f0eb220:	8c660044 */ 	lw	$a2,0x44($v1)
/*  f0eb224:	000d7100 */ 	sll	$t6,$t5,0x4
/*  f0eb228:	000fc900 */ 	sll	$t9,$t7,0x4
/*  f0eb22c:	01cd7023 */ 	subu	$t6,$t6,$t5
/*  f0eb230:	032fc823 */ 	subu	$t9,$t9,$t7
/*  f0eb234:	0019c880 */ 	sll	$t9,$t9,0x2
/*  f0eb238:	000e7080 */ 	sll	$t6,$t6,0x2
/*  f0eb23c:	004e5821 */ 	addu	$t3,$v0,$t6
/*  f0eb240:	00594021 */ 	addu	$t0,$v0,$t9
/*  f0eb244:	8d05001c */ 	lw	$a1,0x1c($t0)
/*  f0eb248:	0fc01a40 */ 	jal	colourBlend
/*  f0eb24c:	8d64001c */ 	lw	$a0,0x1c($t3)
/*  f0eb250:	00408825 */ 	or	$s1,$v0,$zero
/*  f0eb254:	8e030010 */ 	lw	$v1,0x10($s0)
.L0f0eb258:
/*  f0eb258:	8c69000c */ 	lw	$t1,0xc($v1)
/*  f0eb25c:	02202025 */ 	or	$a0,$s1,$zero
/*  f0eb260:	00002825 */ 	or	$a1,$zero,$zero
/*  f0eb264:	51200009 */ 	beqzl	$t1,.L0f0eb28c
/*  f0eb268:	afb10078 */ 	sw	$s1,0x78($sp)
/*  f0eb26c:	0fc01a40 */ 	jal	colourBlend
/*  f0eb270:	2406007f */ 	addiu	$a2,$zero,0x7f
/*  f0eb274:	2401ff00 */ 	addiu	$at,$zero,-256
/*  f0eb278:	0041c024 */ 	and	$t8,$v0,$at
/*  f0eb27c:	322a00ff */ 	andi	$t2,$s1,0xff
/*  f0eb280:	030a8825 */ 	or	$s1,$t8,$t2
/*  f0eb284:	8e030010 */ 	lw	$v1,0x10($s0)
/*  f0eb288:	afb10078 */ 	sw	$s1,0x78($sp)
.L0f0eb28c:
/*  f0eb28c:	9066003c */ 	lbu	$a2,0x3c($v1)
/*  f0eb290:	3c047f1b */ 	lui	$a0,%hi(g_MenuColourPalettes3+0x1c)
/*  f0eb294:	3c057f1b */ 	lui	$a1,%hi(g_MenuColourPalettes2+0x1c)
/*  f0eb298:	00066100 */ 	sll	$t4,$a2,0x4
/*  f0eb29c:	01866023 */ 	subu	$t4,$t4,$a2
/*  f0eb2a0:	000c3080 */ 	sll	$a2,$t4,0x2
/*  f0eb2a4:	00862021 */ 	addu	$a0,$a0,$a2
/*  f0eb2a8:	00a62821 */ 	addu	$a1,$a1,$a2
/*  f0eb2ac:	8ca52134 */ 	lw	$a1,%lo(g_MenuColourPalettes2+0x1c)($a1)
/*  f0eb2b0:	0fc54f8e */ 	jal	func0f153e38
/*  f0eb2b4:	8c84229c */ 	lw	$a0,%lo(g_MenuColourPalettes3+0x1c)($a0)
/*  f0eb2b8:	8e0d0008 */ 	lw	$t5,0x8($s0)
.L0f0eb2bc:
/*  f0eb2bc:	27a40058 */ 	addiu	$a0,$sp,0x58
/*  f0eb2c0:	27a50054 */ 	addiu	$a1,$sp,0x54
/*  f0eb2c4:	8da20004 */ 	lw	$v0,0x4($t5)
/*  f0eb2c8:	8fa60074 */ 	lw	$a2,0x74($sp)
/*  f0eb2cc:	8fa70068 */ 	lw	$a3,0x68($sp)
/*  f0eb2d0:	304e0020 */ 	andi	$t6,$v0,0x20
/*  f0eb2d4:	11c00010 */ 	beqz	$t6,.L0f0eb318
/*  f0eb2d8:	8fab0064 */ 	lw	$t3,0x64($sp)
/*  f0eb2dc:	afab0010 */ 	sw	$t3,0x10($sp)
/*  f0eb2e0:	0fc55cbe */ 	jal	textMeasure
/*  f0eb2e4:	afa00014 */ 	sw	$zero,0x14($sp)
/*  f0eb2e8:	860f0004 */ 	lh	$t7,0x4($s0)
/*  f0eb2ec:	8fb90054 */ 	lw	$t9,0x54($sp)
/*  f0eb2f0:	86180000 */ 	lh	$t8,0x0($s0)
/*  f0eb2f4:	01f94023 */ 	subu	$t0,$t7,$t9
/*  f0eb2f8:	05010003 */ 	bgez	$t0,.L0f0eb308
/*  f0eb2fc:	00084843 */ 	sra	$t1,$t0,0x1
/*  f0eb300:	25010001 */ 	addiu	$at,$t0,0x1
/*  f0eb304:	00014843 */ 	sra	$t1,$at,0x1
.L0f0eb308:
/*  f0eb308:	03095021 */ 	addu	$t2,$t8,$t1
/*  f0eb30c:	afaa0070 */ 	sw	$t2,0x70($sp)
/*  f0eb310:	8e0c0008 */ 	lw	$t4,0x8($s0)
/*  f0eb314:	8d820004 */ 	lw	$v0,0x4($t4)
.L0f0eb318:
/*  f0eb318:	00026a40 */ 	sll	$t5,$v0,0x9
/*  f0eb31c:	05a10006 */ 	bgez	$t5,.L0f0eb338
/*  f0eb320:	8fae0070 */ 	lw	$t6,0x70($sp)
/*  f0eb324:	8faf006c */ 	lw	$t7,0x6c($sp)
/*  f0eb328:	25cb0023 */ 	addiu	$t3,$t6,0x23
/*  f0eb32c:	afab0070 */ 	sw	$t3,0x70($sp)
/*  f0eb330:	25f90006 */ 	addiu	$t9,$t7,0x6
/*  f0eb334:	afb9006c */ 	sw	$t9,0x6c($sp)
.L0f0eb338:
/*  f0eb338:	0fc54d8a */ 	jal	func0f153628
/*  f0eb33c:	8fa40080 */ 	lw	$a0,0x80($sp)
/*  f0eb340:	8fa80068 */ 	lw	$t0,0x68($sp)
/*  f0eb344:	8fb80064 */ 	lw	$t8,0x64($sp)
/*  f0eb348:	afb10018 */ 	sw	$s1,0x18($sp)
/*  f0eb34c:	afa80010 */ 	sw	$t0,0x10($sp)
/*  f0eb350:	afb80014 */ 	sw	$t8,0x14($sp)
/*  f0eb354:	86090004 */ 	lh	$t1,0x4($s0)
/*  f0eb358:	00402025 */ 	or	$a0,$v0,$zero
/*  f0eb35c:	27a50070 */ 	addiu	$a1,$sp,0x70
/*  f0eb360:	afa9001c */ 	sw	$t1,0x1c($sp)
/*  f0eb364:	860a0006 */ 	lh	$t2,0x6($s0)
/*  f0eb368:	afa00028 */ 	sw	$zero,0x28($sp)
/*  f0eb36c:	afa00024 */ 	sw	$zero,0x24($sp)
/*  f0eb370:	27a6006c */ 	addiu	$a2,$sp,0x6c
/*  f0eb374:	8fa70074 */ 	lw	$a3,0x74($sp)
/*  f0eb378:	0fc5580f */ 	jal	textRenderWhite
/*  f0eb37c:	afaa0020 */ 	sw	$t2,0x20($sp)
/*  f0eb380:	afa20080 */ 	sw	$v0,0x80($sp)
/*  f0eb384:	8e060008 */ 	lw	$a2,0x8($s0)
/*  f0eb388:	3c010040 */ 	lui	$at,0x40
/*  f0eb38c:	34218000 */ 	ori	$at,$at,0x8000
/*  f0eb390:	8ccc0004 */ 	lw	$t4,0x4($a2)
/*  f0eb394:	00c02825 */ 	or	$a1,$a2,$zero
/*  f0eb398:	01816824 */ 	and	$t5,$t4,$at
/*  f0eb39c:	15a0002c */ 	bnez	$t5,.L0f0eb450
/*  f0eb3a0:	00000000 */ 	nop
/*  f0eb3a4:	0fc3c539 */ 	jal	menuResolveText
/*  f0eb3a8:	8cc4000c */ 	lw	$a0,0xc($a2)
/*  f0eb3ac:	10400028 */ 	beqz	$v0,.L0f0eb450
/*  f0eb3b0:	00403025 */ 	or	$a2,$v0,$zero
/*  f0eb3b4:	3c0e7f1b */ 	lui	$t6,%hi(var7f1adfb8)
/*  f0eb3b8:	25cedfb8 */ 	addiu	$t6,$t6,%lo(var7f1adfb8)
/*  f0eb3bc:	104e0024 */ 	beq	$v0,$t6,.L0f0eb450
/*  f0eb3c0:	27a40050 */ 	addiu	$a0,$sp,0x50
/*  f0eb3c4:	860b0002 */ 	lh	$t3,0x2($s0)
/*  f0eb3c8:	8fb90064 */ 	lw	$t9,0x64($sp)
/*  f0eb3cc:	afa20074 */ 	sw	$v0,0x74($sp)
/*  f0eb3d0:	256f0002 */ 	addiu	$t7,$t3,0x2
/*  f0eb3d4:	afaf006c */ 	sw	$t7,0x6c($sp)
/*  f0eb3d8:	afa00014 */ 	sw	$zero,0x14($sp)
/*  f0eb3dc:	27a5004c */ 	addiu	$a1,$sp,0x4c
/*  f0eb3e0:	8fa70068 */ 	lw	$a3,0x68($sp)
/*  f0eb3e4:	0fc55cbe */ 	jal	textMeasure
/*  f0eb3e8:	afb90010 */ 	sw	$t9,0x10($sp)
/*  f0eb3ec:	86080000 */ 	lh	$t0,0x0($s0)
/*  f0eb3f0:	86180004 */ 	lh	$t8,0x4($s0)
/*  f0eb3f4:	8faa004c */ 	lw	$t2,0x4c($sp)
/*  f0eb3f8:	8fae0068 */ 	lw	$t6,0x68($sp)
/*  f0eb3fc:	8fab0064 */ 	lw	$t3,0x64($sp)
/*  f0eb400:	8faf0078 */ 	lw	$t7,0x78($sp)
/*  f0eb404:	01184821 */ 	addu	$t1,$t0,$t8
/*  f0eb408:	012a6023 */ 	subu	$t4,$t1,$t2
/*  f0eb40c:	258dfff6 */ 	addiu	$t5,$t4,-10
/*  f0eb410:	afad0070 */ 	sw	$t5,0x70($sp)
/*  f0eb414:	afae0010 */ 	sw	$t6,0x10($sp)
/*  f0eb418:	afab0014 */ 	sw	$t3,0x14($sp)
/*  f0eb41c:	afaf0018 */ 	sw	$t7,0x18($sp)
/*  f0eb420:	86190004 */ 	lh	$t9,0x4($s0)
/*  f0eb424:	8fa40080 */ 	lw	$a0,0x80($sp)
/*  f0eb428:	27a50070 */ 	addiu	$a1,$sp,0x70
/*  f0eb42c:	afb9001c */ 	sw	$t9,0x1c($sp)
/*  f0eb430:	86080006 */ 	lh	$t0,0x6($s0)
/*  f0eb434:	afa00028 */ 	sw	$zero,0x28($sp)
/*  f0eb438:	afa00024 */ 	sw	$zero,0x24($sp)
/*  f0eb43c:	27a6006c */ 	addiu	$a2,$sp,0x6c
/*  f0eb440:	8fa70074 */ 	lw	$a3,0x74($sp)
/*  f0eb444:	0fc5580f */ 	jal	textRenderWhite
/*  f0eb448:	afa80020 */ 	sw	$t0,0x20($sp)
/*  f0eb44c:	afa20080 */ 	sw	$v0,0x80($sp)
.L0f0eb450:
/*  f0eb450:	0fc54de0 */ 	jal	func0f153780
/*  f0eb454:	8fa40080 */ 	lw	$a0,0x80($sp)
/*  f0eb458:	8fbf003c */ 	lw	$ra,0x3c($sp)
/*  f0eb45c:	8fb00034 */ 	lw	$s0,0x34($sp)
/*  f0eb460:	8fb10038 */ 	lw	$s1,0x38($sp)
/*  f0eb464:	03e00008 */ 	jr	$ra
/*  f0eb468:	27bd0080 */ 	addiu	$sp,$sp,0x80
);

const char var7f1adfb8[] = "";

//Gfx *menuRenderItemSelectable(Gfx *gdl, struct menurenderthing *thing)
//{
//	u32 leftcolour;
//	u32 rightcolour;
//	char *text;
//	s32 x = thing->x + 10;
//	s32 y = thing->y + 2;
//	u32 font1 = var8007fb10;
//	u32 font2 = var8007fb0c;
//
//	if (thing->item->param1 & 0x00000010) {
//		x -= 6;
//	}
//
//	if (thing->item->param1 & 0x00400000) {
//		font1 = var8007fb18;
//		font2 = var8007fb14;
//	}
//
//	text = menuResolveParam2Text(thing->item);
//
//	if (thing->frame->transitiontimer < 0) {
//		leftcolour = g_MenuColourPalettes[thing->frame->type].unfocused;
//	} else {
//		leftcolour = colourBlend(
//				g_MenuColourPalettes[thing->frame->type2].unfocused,
//				g_MenuColourPalettes[thing->frame->type].unfocused,
//				thing->frame->colourweight);
//	}
//
//	if (thing->frame->dimmed) {
//		leftcolour = colourBlend(leftcolour, 0, 127) & 0xffffff00 | leftcolour & 0xff;
//	}
//
//	rightcolour = leftcolour;
//
//	if (thing->focused) {
//		// Mismatch: The addiu and lui at eb030 and eb034 are swapped. The addiu
//		// is adding the lower half of the address of g_MenuColourPalettes for
//		// use in the else branch. The lui is loading a value into $at for the
//		// float to u32 conversion for weight.
//		u32 colour2;
//		u32 weight = func0f006b08(40) * 255;
//
//		if (thing->frame->transitiontimer < 0) {
//			colour2 = g_MenuColourPalettes[thing->frame->type].focused;
//		} else {
//			colour2 = colourBlend(
//					g_MenuColourPalettes[thing->frame->type2].focused,
//					g_MenuColourPalettes[thing->frame->type].focused,
//					thing->frame->colourweight);
//		}
//
//		leftcolour = colourBlend(colourBlend(leftcolour, leftcolour & 0x000000ff, 127), colour2, weight);
//
//		func0f153e38(
//				g_MenuColourPalettes3[thing->frame->type].focused,
//				g_MenuColourPalettes2[thing->frame->type].focused);
//	} else {
//		func0f153e38(
//				g_MenuColourPalettes3[thing->frame->type].unfocused,
//				g_MenuColourPalettes2[thing->frame->type].unfocused);
//	}
//
//	if (menuIsItemDisabled(thing->item, thing->frame)) {
//		if (thing->frame->transitiontimer < 0) {
//			leftcolour = g_MenuColourPalettes[thing->frame->type].disabled;
//		} else {
//			leftcolour = colourBlend(
//					g_MenuColourPalettes[thing->frame->type2].disabled,
//					g_MenuColourPalettes[thing->frame->type].disabled,
//					thing->frame->colourweight);
//		}
//
//		if (thing->frame->dimmed) {
//			leftcolour = colourBlend(leftcolour, 0x00000000, 127) & 0xffffff00 | leftcolour & 0xff;
//		}
//
//		rightcolour = leftcolour;
//
//		func0f153e38(
//				g_MenuColourPalettes3[thing->frame->type].disabled,
//				g_MenuColourPalettes2[thing->frame->type].disabled);
//	}
//
//	if (thing->item->param1 & 0x00000020) {
//		// Center text
//		s32 textheight;
//		s32 textwidth;
//		textMeasure(&textheight, &textwidth, text, font1, font2, 0);
//		x = thing->x + (thing->width - textwidth) / 2;
//	}
//
//	if (thing->item->param1 & 0x00400000) {
//		x += 35;
//		y += 6;
//	}
//
//	gdl = func0f153628(gdl);
//	gdl = textRenderWhite(gdl, &x, &y, text, font1, font2,
//			leftcolour, thing->width, thing->height, 0, 0);
//
//	if ((thing->item->param1 & 0x00408000) == 0) {
//		// Right side text
//		text = menuResolveText(thing->item->param3, thing->item);
//
//		// This is not how you check if a string is empty...
//		if (text != NULL && text != "") {
//			s32 textheight;
//			s32 textwidth;
//
//			y = thing->y + 2;
//			textMeasure(&textheight, &textwidth, text, font1, font2, 0);
//			x = thing->x + thing->width - textwidth - 10;
//
//			gdl = textRenderWhite(gdl, &x, &y, text, font1, font2,
//					rightcolour, thing->width, thing->height, 0, 0);
//		}
//	}
//
//	return func0f153780(gdl);
//}

bool menuTickItemSelectable(struct menuitem *item, struct menuinputs *inputs, u32 arg2)
{
	if ((arg2 & 2) && inputs->select) {
		menuPlaySound(MENUSOUND_SELECT);

		if (item->param1 & 0x00000008) {
			menuPopDialog();
		}

		if (item->param1 & 0x00000004) {
			menuPushDialog((struct menudialog *)item->handler);
		} else if (item->handler) {
			union handlerdata data;
			item->handler(MENUOP_SET, item, &data);
		}
	}

	return true;
}

const char var7f1adfbc[] = "";
const char var7f1adfc0[] = "%d\n";

GLOBAL_ASM(
glabel menuRenderItemSlider
/*  f0eb508:	27bdff50 */ 	addiu	$sp,$sp,-176
/*  f0eb50c:	afbf0044 */ 	sw	$ra,0x44($sp)
/*  f0eb510:	afb20040 */ 	sw	$s2,0x40($sp)
/*  f0eb514:	afb1003c */ 	sw	$s1,0x3c($sp)
/*  f0eb518:	afb00038 */ 	sw	$s0,0x38($sp)
/*  f0eb51c:	afa400b0 */ 	sw	$a0,0xb0($sp)
/*  f0eb520:	afa0008c */ 	sw	$zero,0x8c($sp)
/*  f0eb524:	8ca70008 */ 	lw	$a3,0x8($a1)
/*  f0eb528:	00a08825 */ 	or	$s1,$a1,$zero
/*  f0eb52c:	8ce20010 */ 	lw	$v0,0x10($a3)
/*  f0eb530:	10400008 */ 	beqz	$v0,.L0f0eb554
/*  f0eb534:	24040009 */ 	addiu	$a0,$zero,0x9
/*  f0eb538:	00e02825 */ 	or	$a1,$a3,$zero
/*  f0eb53c:	0040f809 */ 	jalr	$v0
/*  f0eb540:	27a60074 */ 	addiu	$a2,$sp,0x74
/*  f0eb544:	87ae0076 */ 	lh	$t6,0x76($sp)
/*  f0eb548:	afae0070 */ 	sw	$t6,0x70($sp)
/*  f0eb54c:	10000002 */ 	b	.L0f0eb558
/*  f0eb550:	8e270008 */ 	lw	$a3,0x8($s1)
.L0f0eb554:
/*  f0eb554:	afa00070 */ 	sw	$zero,0x70($sp)
.L0f0eb558:
/*  f0eb558:	8e2f0010 */ 	lw	$t7,0x10($s1)
/*  f0eb55c:	91f8006e */ 	lbu	$t8,0x6e($t7)
/*  f0eb560:	13000002 */ 	beqz	$t8,.L0f0eb56c
/*  f0eb564:	2419000a */ 	addiu	$t9,$zero,0xa
/*  f0eb568:	afb9008c */ 	sw	$t9,0x8c($sp)
.L0f0eb56c:
/*  f0eb56c:	8ce80004 */ 	lw	$t0,0x4($a3)
/*  f0eb570:	00084ac0 */ 	sll	$t1,$t0,0xb
/*  f0eb574:	05210002 */ 	bgez	$t1,.L0f0eb580
/*  f0eb578:	240a000a */ 	addiu	$t2,$zero,0xa
/*  f0eb57c:	afaa008c */ 	sw	$t2,0x8c($sp)
.L0f0eb580:
/*  f0eb580:	862b0000 */ 	lh	$t3,0x0($s1)
/*  f0eb584:	256c000a */ 	addiu	$t4,$t3,0xa
/*  f0eb588:	afac0094 */ 	sw	$t4,0x94($sp)
/*  f0eb58c:	862d0002 */ 	lh	$t5,0x2($s1)
/*  f0eb590:	25ae0002 */ 	addiu	$t6,$t5,0x2
/*  f0eb594:	afae0090 */ 	sw	$t6,0x90($sp)
/*  f0eb598:	8e270008 */ 	lw	$a3,0x8($s1)
/*  f0eb59c:	8cef0004 */ 	lw	$t7,0x4($a3)
/*  f0eb5a0:	31f80010 */ 	andi	$t8,$t7,0x10
/*  f0eb5a4:	13000003 */ 	beqz	$t8,.L0f0eb5b4
/*  f0eb5a8:	2588fffa */ 	addiu	$t0,$t4,-6
/*  f0eb5ac:	afa80094 */ 	sw	$t0,0x94($sp)
/*  f0eb5b0:	8e270008 */ 	lw	$a3,0x8($s1)
.L0f0eb5b4:
/*  f0eb5b4:	0fc3c557 */ 	jal	menuResolveParam2Text
/*  f0eb5b8:	00e02025 */ 	or	$a0,$a3,$zero
/*  f0eb5bc:	8fac0070 */ 	lw	$t4,0x70($sp)
/*  f0eb5c0:	afa200a8 */ 	sw	$v0,0xa8($sp)
/*  f0eb5c4:	8e2e0008 */ 	lw	$t6,0x8($s1)
/*  f0eb5c8:	000c6880 */ 	sll	$t5,$t4,0x2
/*  f0eb5cc:	01ac6821 */ 	addu	$t5,$t5,$t4
/*  f0eb5d0:	000d6880 */ 	sll	$t5,$t5,0x2
/*  f0eb5d4:	8dcf000c */ 	lw	$t7,0xc($t6)
/*  f0eb5d8:	01ac6823 */ 	subu	$t5,$t5,$t4
/*  f0eb5dc:	000d6880 */ 	sll	$t5,$t5,0x2
/*  f0eb5e0:	01ac6823 */ 	subu	$t5,$t5,$t4
/*  f0eb5e4:	01af001a */ 	div	$zero,$t5,$t7
/*  f0eb5e8:	862a0004 */ 	lh	$t2,0x4($s1)
/*  f0eb5ec:	86290000 */ 	lh	$t1,0x0($s1)
/*  f0eb5f0:	0000c012 */ 	mflo	$t8
/*  f0eb5f4:	44803000 */ 	mtc1	$zero,$f6
/*  f0eb5f8:	012a5821 */ 	addu	$t3,$t1,$t2
/*  f0eb5fc:	0178c821 */ 	addu	$t9,$t3,$t8
/*  f0eb600:	2728ffae */ 	addiu	$t0,$t9,-82
/*  f0eb604:	afa8006c */ 	sw	$t0,0x6c($sp)
/*  f0eb608:	8e230010 */ 	lw	$v1,0x10($s1)
/*  f0eb60c:	15e00002 */ 	bnez	$t7,.L0f0eb618
/*  f0eb610:	00000000 */ 	nop
/*  f0eb614:	0007000d */ 	break	0x7
.L0f0eb618:
/*  f0eb618:	2401ffff */ 	addiu	$at,$zero,-1
/*  f0eb61c:	15e10004 */ 	bne	$t7,$at,.L0f0eb630
/*  f0eb620:	3c018000 */ 	lui	$at,0x8000
/*  f0eb624:	15a10002 */ 	bne	$t5,$at,.L0f0eb630
/*  f0eb628:	00000000 */ 	nop
/*  f0eb62c:	0006000d */ 	break	0x6
.L0f0eb630:
/*  f0eb630:	c4640040 */ 	lwc1	$f4,0x40($v1)
/*  f0eb634:	4606203c */ 	c.lt.s	$f4,$f6
/*  f0eb638:	00000000 */ 	nop
/*  f0eb63c:	4502000a */ 	bc1fl	.L0f0eb668
/*  f0eb640:	906c003d */ 	lbu	$t4,0x3d($v1)
/*  f0eb644:	9069003c */ 	lbu	$t1,0x3c($v1)
/*  f0eb648:	2412003c */ 	addiu	$s2,$zero,0x3c
/*  f0eb64c:	3c107f1b */ 	lui	$s0,%hi(g_MenuColourPalettes+0x18)
/*  f0eb650:	01320019 */ 	multu	$t1,$s2
/*  f0eb654:	00005012 */ 	mflo	$t2
/*  f0eb658:	020a8021 */ 	addu	$s0,$s0,$t2
/*  f0eb65c:	10000012 */ 	b	.L0f0eb6a8
/*  f0eb660:	8e101fc8 */ 	lw	$s0,%lo(g_MenuColourPalettes+0x18)($s0)
/*  f0eb664:	906c003d */ 	lbu	$t4,0x3d($v1)
.L0f0eb668:
/*  f0eb668:	2412003c */ 	addiu	$s2,$zero,0x3c
/*  f0eb66c:	906b003c */ 	lbu	$t3,0x3c($v1)
/*  f0eb670:	01920019 */ 	multu	$t4,$s2
/*  f0eb674:	3c0d7f1b */ 	lui	$t5,%hi(g_MenuColourPalettes)
/*  f0eb678:	25ad1fb0 */ 	addiu	$t5,$t5,%lo(g_MenuColourPalettes)
/*  f0eb67c:	8c660044 */ 	lw	$a2,0x44($v1)
/*  f0eb680:	00007012 */ 	mflo	$t6
/*  f0eb684:	01cd7821 */ 	addu	$t7,$t6,$t5
/*  f0eb688:	8de40018 */ 	lw	$a0,0x18($t7)
/*  f0eb68c:	01720019 */ 	multu	$t3,$s2
/*  f0eb690:	0000c012 */ 	mflo	$t8
/*  f0eb694:	030dc821 */ 	addu	$t9,$t8,$t5
/*  f0eb698:	0fc01a40 */ 	jal	colourBlend
/*  f0eb69c:	8f250018 */ 	lw	$a1,0x18($t9)
/*  f0eb6a0:	00408025 */ 	or	$s0,$v0,$zero
/*  f0eb6a4:	8e230010 */ 	lw	$v1,0x10($s1)
.L0f0eb6a8:
/*  f0eb6a8:	8c68000c */ 	lw	$t0,0xc($v1)
/*  f0eb6ac:	02002025 */ 	or	$a0,$s0,$zero
/*  f0eb6b0:	00002825 */ 	or	$a1,$zero,$zero
/*  f0eb6b4:	51000008 */ 	beqzl	$t0,.L0f0eb6d8
/*  f0eb6b8:	8e22000c */ 	lw	$v0,0xc($s1)
/*  f0eb6bc:	0fc01a40 */ 	jal	colourBlend
/*  f0eb6c0:	2406007f */ 	addiu	$a2,$zero,0x7f
/*  f0eb6c4:	2401ff00 */ 	addiu	$at,$zero,-256
/*  f0eb6c8:	00414824 */ 	and	$t1,$v0,$at
/*  f0eb6cc:	320a00ff */ 	andi	$t2,$s0,0xff
/*  f0eb6d0:	012a8025 */ 	or	$s0,$t1,$t2
/*  f0eb6d4:	8e22000c */ 	lw	$v0,0xc($s1)
.L0f0eb6d8:
/*  f0eb6d8:	1040005f */ 	beqz	$v0,.L0f0eb858
/*  f0eb6dc:	304c0002 */ 	andi	$t4,$v0,0x2
/*  f0eb6e0:	11800050 */ 	beqz	$t4,.L0f0eb824
/*  f0eb6e4:	3c014220 */ 	lui	$at,0x4220
/*  f0eb6e8:	44816000 */ 	mtc1	$at,$f12
/*  f0eb6ec:	0fc01ac2 */ 	jal	func0f006b08
/*  f0eb6f0:	00000000 */ 	nop
/*  f0eb6f4:	3c01437f */ 	lui	$at,0x437f
/*  f0eb6f8:	44814000 */ 	mtc1	$at,$f8
/*  f0eb6fc:	240f0001 */ 	addiu	$t7,$zero,0x1
/*  f0eb700:	3c014f00 */ 	lui	$at,0x4f00
/*  f0eb704:	46080282 */ 	mul.s	$f10,$f0,$f8
/*  f0eb708:	444ef800 */ 	cfc1	$t6,$31
/*  f0eb70c:	44cff800 */ 	ctc1	$t7,$31
/*  f0eb710:	00000000 */ 	nop
/*  f0eb714:	46005424 */ 	cvt.w.s	$f16,$f10
/*  f0eb718:	444ff800 */ 	cfc1	$t7,$31
/*  f0eb71c:	00000000 */ 	nop
/*  f0eb720:	31ef0078 */ 	andi	$t7,$t7,0x78
/*  f0eb724:	51e00013 */ 	beqzl	$t7,.L0f0eb774
/*  f0eb728:	440f8000 */ 	mfc1	$t7,$f16
/*  f0eb72c:	44818000 */ 	mtc1	$at,$f16
/*  f0eb730:	240f0001 */ 	addiu	$t7,$zero,0x1
/*  f0eb734:	46105401 */ 	sub.s	$f16,$f10,$f16
/*  f0eb738:	44cff800 */ 	ctc1	$t7,$31
/*  f0eb73c:	00000000 */ 	nop
/*  f0eb740:	46008424 */ 	cvt.w.s	$f16,$f16
/*  f0eb744:	444ff800 */ 	cfc1	$t7,$31
/*  f0eb748:	00000000 */ 	nop
/*  f0eb74c:	31ef0078 */ 	andi	$t7,$t7,0x78
/*  f0eb750:	15e00005 */ 	bnez	$t7,.L0f0eb768
/*  f0eb754:	00000000 */ 	nop
/*  f0eb758:	440f8000 */ 	mfc1	$t7,$f16
/*  f0eb75c:	3c018000 */ 	lui	$at,0x8000
/*  f0eb760:	10000007 */ 	b	.L0f0eb780
/*  f0eb764:	01e17825 */ 	or	$t7,$t7,$at
.L0f0eb768:
/*  f0eb768:	10000005 */ 	b	.L0f0eb780
/*  f0eb76c:	240fffff */ 	addiu	$t7,$zero,-1
/*  f0eb770:	440f8000 */ 	mfc1	$t7,$f16
.L0f0eb774:
/*  f0eb774:	00000000 */ 	nop
/*  f0eb778:	05e0fffb */ 	bltz	$t7,.L0f0eb768
/*  f0eb77c:	00000000 */ 	nop
.L0f0eb780:
/*  f0eb780:	afaf0064 */ 	sw	$t7,0x64($sp)
/*  f0eb784:	8e230010 */ 	lw	$v1,0x10($s1)
/*  f0eb788:	44cef800 */ 	ctc1	$t6,$31
/*  f0eb78c:	44802000 */ 	mtc1	$zero,$f4
/*  f0eb790:	c4720040 */ 	lwc1	$f18,0x40($v1)
/*  f0eb794:	4604903c */ 	c.lt.s	$f18,$f4
/*  f0eb798:	00000000 */ 	nop
/*  f0eb79c:	45020009 */ 	bc1fl	.L0f0eb7c4
/*  f0eb7a0:	906d003d */ 	lbu	$t5,0x3d($v1)
/*  f0eb7a4:	906b003c */ 	lbu	$t3,0x3c($v1)
/*  f0eb7a8:	3c077f1b */ 	lui	$a3,%hi(g_MenuColourPalettes+0x20)
/*  f0eb7ac:	01720019 */ 	multu	$t3,$s2
/*  f0eb7b0:	0000c012 */ 	mflo	$t8
/*  f0eb7b4:	00f83821 */ 	addu	$a3,$a3,$t8
/*  f0eb7b8:	10000010 */ 	b	.L0f0eb7fc
/*  f0eb7bc:	8ce71fd0 */ 	lw	$a3,%lo(g_MenuColourPalettes+0x20)($a3)
/*  f0eb7c0:	906d003d */ 	lbu	$t5,0x3d($v1)
.L0f0eb7c4:
/*  f0eb7c4:	906a003c */ 	lbu	$t2,0x3c($v1)
/*  f0eb7c8:	3c087f1b */ 	lui	$t0,%hi(g_MenuColourPalettes)
/*  f0eb7cc:	01b20019 */ 	multu	$t5,$s2
/*  f0eb7d0:	25081fb0 */ 	addiu	$t0,$t0,%lo(g_MenuColourPalettes)
/*  f0eb7d4:	8c660044 */ 	lw	$a2,0x44($v1)
/*  f0eb7d8:	0000c812 */ 	mflo	$t9
/*  f0eb7dc:	03284821 */ 	addu	$t1,$t9,$t0
/*  f0eb7e0:	8d240020 */ 	lw	$a0,0x20($t1)
/*  f0eb7e4:	01520019 */ 	multu	$t2,$s2
/*  f0eb7e8:	00006012 */ 	mflo	$t4
/*  f0eb7ec:	01887021 */ 	addu	$t6,$t4,$t0
/*  f0eb7f0:	0fc01a40 */ 	jal	colourBlend
/*  f0eb7f4:	8dc50020 */ 	lw	$a1,0x20($t6)
/*  f0eb7f8:	00403825 */ 	or	$a3,$v0,$zero
.L0f0eb7fc:
/*  f0eb7fc:	02002025 */ 	or	$a0,$s0,$zero
/*  f0eb800:	320500ff */ 	andi	$a1,$s0,0xff
/*  f0eb804:	2406007f */ 	addiu	$a2,$zero,0x7f
/*  f0eb808:	0fc01a40 */ 	jal	colourBlend
/*  f0eb80c:	afa70068 */ 	sw	$a3,0x68($sp)
/*  f0eb810:	8fa50068 */ 	lw	$a1,0x68($sp)
/*  f0eb814:	00402025 */ 	or	$a0,$v0,$zero
/*  f0eb818:	0fc01a40 */ 	jal	colourBlend
/*  f0eb81c:	8fa60064 */ 	lw	$a2,0x64($sp)
/*  f0eb820:	345000ff */ 	ori	$s0,$v0,0xff
.L0f0eb824:
/*  f0eb824:	8e2f0010 */ 	lw	$t7,0x10($s1)
/*  f0eb828:	3c047f1b */ 	lui	$a0,%hi(g_MenuColourPalettes3+0x20)
/*  f0eb82c:	3c057f1b */ 	lui	$a1,%hi(g_MenuColourPalettes2+0x20)
/*  f0eb830:	91eb003c */ 	lbu	$t3,0x3c($t7)
/*  f0eb834:	01720019 */ 	multu	$t3,$s2
/*  f0eb838:	00001012 */ 	mflo	$v0
/*  f0eb83c:	00822021 */ 	addu	$a0,$a0,$v0
/*  f0eb840:	00a22821 */ 	addu	$a1,$a1,$v0
/*  f0eb844:	8ca52138 */ 	lw	$a1,%lo(g_MenuColourPalettes2+0x20)($a1)
/*  f0eb848:	0fc54f8e */ 	jal	func0f153e38
/*  f0eb84c:	8c8422a0 */ 	lw	$a0,%lo(g_MenuColourPalettes3+0x20)($a0)
/*  f0eb850:	1000000d */ 	b	.L0f0eb888
/*  f0eb854:	862a0002 */ 	lh	$t2,0x2($s1)
.L0f0eb858:
/*  f0eb858:	8e380010 */ 	lw	$t8,0x10($s1)
/*  f0eb85c:	3c047f1b */ 	lui	$a0,%hi(g_MenuColourPalettes3+0x18)
/*  f0eb860:	3c057f1b */ 	lui	$a1,%hi(g_MenuColourPalettes2+0x18)
/*  f0eb864:	930d003c */ 	lbu	$t5,0x3c($t8)
/*  f0eb868:	01b20019 */ 	multu	$t5,$s2
/*  f0eb86c:	00001012 */ 	mflo	$v0
/*  f0eb870:	00822021 */ 	addu	$a0,$a0,$v0
/*  f0eb874:	00a22821 */ 	addu	$a1,$a1,$v0
/*  f0eb878:	8ca52130 */ 	lw	$a1,%lo(g_MenuColourPalettes2+0x18)($a1)
/*  f0eb87c:	0fc54f8e */ 	jal	func0f153e38
/*  f0eb880:	8c842298 */ 	lw	$a0,%lo(g_MenuColourPalettes3+0x18)($a0)
/*  f0eb884:	862a0002 */ 	lh	$t2,0x2($s1)
.L0f0eb888:
/*  f0eb888:	8fac008c */ 	lw	$t4,0x8c($sp)
/*  f0eb88c:	86390000 */ 	lh	$t9,0x0($s1)
/*  f0eb890:	86290004 */ 	lh	$t1,0x4($s1)
/*  f0eb894:	8fae006c */ 	lw	$t6,0x6c($sp)
/*  f0eb898:	014c1821 */ 	addu	$v1,$t2,$t4
/*  f0eb89c:	2468000b */ 	addiu	$t0,$v1,0xb
/*  f0eb8a0:	03291021 */ 	addu	$v0,$t9,$t1
/*  f0eb8a4:	2445ffae */ 	addiu	$a1,$v0,-82
/*  f0eb8a8:	2447fff9 */ 	addiu	$a3,$v0,-7
/*  f0eb8ac:	afa80010 */ 	sw	$t0,0x10($sp)
/*  f0eb8b0:	24660005 */ 	addiu	$a2,$v1,0x5
/*  f0eb8b4:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f0eb8b8:	8fa400b0 */ 	lw	$a0,0xb0($sp)
/*  f0eb8bc:	0fc387eb */ 	jal	func0f0e1fac
/*  f0eb8c0:	afae0014 */ 	sw	$t6,0x14($sp)
/*  f0eb8c4:	afa200b0 */ 	sw	$v0,0xb0($sp)
/*  f0eb8c8:	8e230010 */ 	lw	$v1,0x10($s1)
/*  f0eb8cc:	44804000 */ 	mtc1	$zero,$f8
/*  f0eb8d0:	c4660040 */ 	lwc1	$f6,0x40($v1)
/*  f0eb8d4:	4608303c */ 	c.lt.s	$f6,$f8
/*  f0eb8d8:	00000000 */ 	nop
/*  f0eb8dc:	45020009 */ 	bc1fl	.L0f0eb904
/*  f0eb8e0:	9078003d */ 	lbu	$t8,0x3d($v1)
/*  f0eb8e4:	906f003c */ 	lbu	$t7,0x3c($v1)
/*  f0eb8e8:	3c107f1b */ 	lui	$s0,%hi(g_MenuColourPalettes+0x18)
/*  f0eb8ec:	01f20019 */ 	multu	$t7,$s2
/*  f0eb8f0:	00005812 */ 	mflo	$t3
/*  f0eb8f4:	020b8021 */ 	addu	$s0,$s0,$t3
/*  f0eb8f8:	10000011 */ 	b	.L0f0eb940
/*  f0eb8fc:	8e101fc8 */ 	lw	$s0,%lo(g_MenuColourPalettes+0x18)($s0)
/*  f0eb900:	9078003d */ 	lbu	$t8,0x3d($v1)
.L0f0eb904:
/*  f0eb904:	906a003c */ 	lbu	$t2,0x3c($v1)
/*  f0eb908:	3c197f1b */ 	lui	$t9,%hi(g_MenuColourPalettes)
/*  f0eb90c:	03120019 */ 	multu	$t8,$s2
/*  f0eb910:	27391fb0 */ 	addiu	$t9,$t9,%lo(g_MenuColourPalettes)
/*  f0eb914:	8c660044 */ 	lw	$a2,0x44($v1)
/*  f0eb918:	00006812 */ 	mflo	$t5
/*  f0eb91c:	01b94821 */ 	addu	$t1,$t5,$t9
/*  f0eb920:	8d240018 */ 	lw	$a0,0x18($t1)
/*  f0eb924:	01520019 */ 	multu	$t2,$s2
/*  f0eb928:	00006012 */ 	mflo	$t4
/*  f0eb92c:	01994021 */ 	addu	$t0,$t4,$t9
/*  f0eb930:	0fc01a40 */ 	jal	colourBlend
/*  f0eb934:	8d050018 */ 	lw	$a1,0x18($t0)
/*  f0eb938:	00408025 */ 	or	$s0,$v0,$zero
/*  f0eb93c:	8e230010 */ 	lw	$v1,0x10($s1)
.L0f0eb940:
/*  f0eb940:	8c6e000c */ 	lw	$t6,0xc($v1)
/*  f0eb944:	02002025 */ 	or	$a0,$s0,$zero
/*  f0eb948:	00002825 */ 	or	$a1,$zero,$zero
/*  f0eb94c:	51c00008 */ 	beqzl	$t6,.L0f0eb970
/*  f0eb950:	8e22000c */ 	lw	$v0,0xc($s1)
/*  f0eb954:	0fc01a40 */ 	jal	colourBlend
/*  f0eb958:	2406007f */ 	addiu	$a2,$zero,0x7f
/*  f0eb95c:	2401ff00 */ 	addiu	$at,$zero,-256
/*  f0eb960:	00417824 */ 	and	$t7,$v0,$at
/*  f0eb964:	320b00ff */ 	andi	$t3,$s0,0xff
/*  f0eb968:	01eb8025 */ 	or	$s0,$t7,$t3
/*  f0eb96c:	8e22000c */ 	lw	$v0,0xc($s1)
.L0f0eb970:
/*  f0eb970:	104000b0 */ 	beqz	$v0,.L0f0ebc34
/*  f0eb974:	30580002 */ 	andi	$t8,$v0,0x2
/*  f0eb978:	13000052 */ 	beqz	$t8,.L0f0ebac4
/*  f0eb97c:	3c014220 */ 	lui	$at,0x4220
/*  f0eb980:	3c0141a0 */ 	lui	$at,0x41a0
/*  f0eb984:	44816000 */ 	mtc1	$at,$f12
/*  f0eb988:	0fc01ac2 */ 	jal	func0f006b08
/*  f0eb98c:	00000000 */ 	nop
/*  f0eb990:	3c01437f */ 	lui	$at,0x437f
/*  f0eb994:	44815000 */ 	mtc1	$at,$f10
/*  f0eb998:	24090001 */ 	addiu	$t1,$zero,0x1
/*  f0eb99c:	3c014f00 */ 	lui	$at,0x4f00
/*  f0eb9a0:	460a0402 */ 	mul.s	$f16,$f0,$f10
/*  f0eb9a4:	444df800 */ 	cfc1	$t5,$31
/*  f0eb9a8:	44c9f800 */ 	ctc1	$t1,$31
/*  f0eb9ac:	00000000 */ 	nop
/*  f0eb9b0:	460084a4 */ 	cvt.w.s	$f18,$f16
/*  f0eb9b4:	4449f800 */ 	cfc1	$t1,$31
/*  f0eb9b8:	00000000 */ 	nop
/*  f0eb9bc:	31290078 */ 	andi	$t1,$t1,0x78
/*  f0eb9c0:	51200013 */ 	beqzl	$t1,.L0f0eba10
/*  f0eb9c4:	44099000 */ 	mfc1	$t1,$f18
/*  f0eb9c8:	44819000 */ 	mtc1	$at,$f18
/*  f0eb9cc:	24090001 */ 	addiu	$t1,$zero,0x1
/*  f0eb9d0:	46128481 */ 	sub.s	$f18,$f16,$f18
/*  f0eb9d4:	44c9f800 */ 	ctc1	$t1,$31
/*  f0eb9d8:	00000000 */ 	nop
/*  f0eb9dc:	460094a4 */ 	cvt.w.s	$f18,$f18
/*  f0eb9e0:	4449f800 */ 	cfc1	$t1,$31
/*  f0eb9e4:	00000000 */ 	nop
/*  f0eb9e8:	31290078 */ 	andi	$t1,$t1,0x78
/*  f0eb9ec:	15200005 */ 	bnez	$t1,.L0f0eba04
/*  f0eb9f0:	00000000 */ 	nop
/*  f0eb9f4:	44099000 */ 	mfc1	$t1,$f18
/*  f0eb9f8:	3c018000 */ 	lui	$at,0x8000
/*  f0eb9fc:	10000007 */ 	b	.L0f0eba1c
/*  f0eba00:	01214825 */ 	or	$t1,$t1,$at
.L0f0eba04:
/*  f0eba04:	10000005 */ 	b	.L0f0eba1c
/*  f0eba08:	2409ffff */ 	addiu	$t1,$zero,-1
/*  f0eba0c:	44099000 */ 	mfc1	$t1,$f18
.L0f0eba10:
/*  f0eba10:	00000000 */ 	nop
/*  f0eba14:	0520fffb */ 	bltz	$t1,.L0f0eba04
/*  f0eba18:	00000000 */ 	nop
.L0f0eba1c:
/*  f0eba1c:	afa9005c */ 	sw	$t1,0x5c($sp)
/*  f0eba20:	8e230010 */ 	lw	$v1,0x10($s1)
/*  f0eba24:	44cdf800 */ 	ctc1	$t5,$31
/*  f0eba28:	44803000 */ 	mtc1	$zero,$f6
/*  f0eba2c:	c4640040 */ 	lwc1	$f4,0x40($v1)
/*  f0eba30:	4606203c */ 	c.lt.s	$f4,$f6
/*  f0eba34:	00000000 */ 	nop
/*  f0eba38:	45020009 */ 	bc1fl	.L0f0eba60
/*  f0eba3c:	9079003d */ 	lbu	$t9,0x3d($v1)
/*  f0eba40:	906a003c */ 	lbu	$t2,0x3c($v1)
/*  f0eba44:	3c077f1b */ 	lui	$a3,%hi(g_MenuColourPalettes+0x20)
/*  f0eba48:	01520019 */ 	multu	$t2,$s2
/*  f0eba4c:	00006012 */ 	mflo	$t4
/*  f0eba50:	00ec3821 */ 	addu	$a3,$a3,$t4
/*  f0eba54:	10000010 */ 	b	.L0f0eba98
/*  f0eba58:	8ce71fd0 */ 	lw	$a3,%lo(g_MenuColourPalettes+0x20)($a3)
/*  f0eba5c:	9079003d */ 	lbu	$t9,0x3d($v1)
.L0f0eba60:
/*  f0eba60:	906b003c */ 	lbu	$t3,0x3c($v1)
/*  f0eba64:	3c0e7f1b */ 	lui	$t6,%hi(g_MenuColourPalettes)
/*  f0eba68:	03320019 */ 	multu	$t9,$s2
/*  f0eba6c:	25ce1fb0 */ 	addiu	$t6,$t6,%lo(g_MenuColourPalettes)
/*  f0eba70:	8c660044 */ 	lw	$a2,0x44($v1)
/*  f0eba74:	00004012 */ 	mflo	$t0
/*  f0eba78:	010e7821 */ 	addu	$t7,$t0,$t6
/*  f0eba7c:	8de40020 */ 	lw	$a0,0x20($t7)
/*  f0eba80:	01720019 */ 	multu	$t3,$s2
/*  f0eba84:	0000c012 */ 	mflo	$t8
/*  f0eba88:	030e6821 */ 	addu	$t5,$t8,$t6
/*  f0eba8c:	0fc01a40 */ 	jal	colourBlend
/*  f0eba90:	8da50020 */ 	lw	$a1,0x20($t5)
/*  f0eba94:	00403825 */ 	or	$a3,$v0,$zero
.L0f0eba98:
/*  f0eba98:	02002025 */ 	or	$a0,$s0,$zero
/*  f0eba9c:	320500ff */ 	andi	$a1,$s0,0xff
/*  f0ebaa0:	2406007f */ 	addiu	$a2,$zero,0x7f
/*  f0ebaa4:	0fc01a40 */ 	jal	colourBlend
/*  f0ebaa8:	afa70060 */ 	sw	$a3,0x60($sp)
/*  f0ebaac:	8fa50060 */ 	lw	$a1,0x60($sp)
/*  f0ebab0:	00402025 */ 	or	$a0,$v0,$zero
/*  f0ebab4:	0fc01a40 */ 	jal	colourBlend
/*  f0ebab8:	8fa6005c */ 	lw	$a2,0x5c($sp)
/*  f0ebabc:	10000050 */ 	b	.L0f0ebc00
/*  f0ebac0:	00408025 */ 	or	$s0,$v0,$zero
.L0f0ebac4:
/*  f0ebac4:	44816000 */ 	mtc1	$at,$f12
/*  f0ebac8:	0fc01ac2 */ 	jal	func0f006b08
/*  f0ebacc:	00000000 */ 	nop
/*  f0ebad0:	3c01437f */ 	lui	$at,0x437f
/*  f0ebad4:	44814000 */ 	mtc1	$at,$f8
/*  f0ebad8:	240a0001 */ 	addiu	$t2,$zero,0x1
/*  f0ebadc:	3c014f00 */ 	lui	$at,0x4f00
/*  f0ebae0:	46080282 */ 	mul.s	$f10,$f0,$f8
/*  f0ebae4:	4449f800 */ 	cfc1	$t1,$31
/*  f0ebae8:	44caf800 */ 	ctc1	$t2,$31
/*  f0ebaec:	00000000 */ 	nop
/*  f0ebaf0:	46005424 */ 	cvt.w.s	$f16,$f10
/*  f0ebaf4:	444af800 */ 	cfc1	$t2,$31
/*  f0ebaf8:	00000000 */ 	nop
/*  f0ebafc:	314a0078 */ 	andi	$t2,$t2,0x78
/*  f0ebb00:	51400013 */ 	beqzl	$t2,.L0f0ebb50
/*  f0ebb04:	440a8000 */ 	mfc1	$t2,$f16
/*  f0ebb08:	44818000 */ 	mtc1	$at,$f16
/*  f0ebb0c:	240a0001 */ 	addiu	$t2,$zero,0x1
/*  f0ebb10:	46105401 */ 	sub.s	$f16,$f10,$f16
/*  f0ebb14:	44caf800 */ 	ctc1	$t2,$31
/*  f0ebb18:	00000000 */ 	nop
/*  f0ebb1c:	46008424 */ 	cvt.w.s	$f16,$f16
/*  f0ebb20:	444af800 */ 	cfc1	$t2,$31
/*  f0ebb24:	00000000 */ 	nop
/*  f0ebb28:	314a0078 */ 	andi	$t2,$t2,0x78
/*  f0ebb2c:	15400005 */ 	bnez	$t2,.L0f0ebb44
/*  f0ebb30:	00000000 */ 	nop
/*  f0ebb34:	440a8000 */ 	mfc1	$t2,$f16
/*  f0ebb38:	3c018000 */ 	lui	$at,0x8000
/*  f0ebb3c:	10000007 */ 	b	.L0f0ebb5c
/*  f0ebb40:	01415025 */ 	or	$t2,$t2,$at
.L0f0ebb44:
/*  f0ebb44:	10000005 */ 	b	.L0f0ebb5c
/*  f0ebb48:	240affff */ 	addiu	$t2,$zero,-1
/*  f0ebb4c:	440a8000 */ 	mfc1	$t2,$f16
.L0f0ebb50:
/*  f0ebb50:	00000000 */ 	nop
/*  f0ebb54:	0540fffb */ 	bltz	$t2,.L0f0ebb44
/*  f0ebb58:	00000000 */ 	nop
.L0f0ebb5c:
/*  f0ebb5c:	afaa0054 */ 	sw	$t2,0x54($sp)
/*  f0ebb60:	8e230010 */ 	lw	$v1,0x10($s1)
/*  f0ebb64:	44c9f800 */ 	ctc1	$t1,$31
/*  f0ebb68:	44802000 */ 	mtc1	$zero,$f4
/*  f0ebb6c:	c4720040 */ 	lwc1	$f18,0x40($v1)
/*  f0ebb70:	4604903c */ 	c.lt.s	$f18,$f4
/*  f0ebb74:	00000000 */ 	nop
/*  f0ebb78:	45020009 */ 	bc1fl	.L0f0ebba0
/*  f0ebb7c:	9068003d */ 	lbu	$t0,0x3d($v1)
/*  f0ebb80:	906c003c */ 	lbu	$t4,0x3c($v1)
/*  f0ebb84:	3c077f1b */ 	lui	$a3,%hi(g_MenuColourPalettes+0x20)
/*  f0ebb88:	01920019 */ 	multu	$t4,$s2
/*  f0ebb8c:	0000c812 */ 	mflo	$t9
/*  f0ebb90:	00f93821 */ 	addu	$a3,$a3,$t9
/*  f0ebb94:	10000010 */ 	b	.L0f0ebbd8
/*  f0ebb98:	8ce71fd0 */ 	lw	$a3,%lo(g_MenuColourPalettes+0x20)($a3)
/*  f0ebb9c:	9068003d */ 	lbu	$t0,0x3d($v1)
.L0f0ebba0:
/*  f0ebba0:	906e003c */ 	lbu	$t6,0x3c($v1)
/*  f0ebba4:	3c0b7f1b */ 	lui	$t3,%hi(g_MenuColourPalettes)
/*  f0ebba8:	01120019 */ 	multu	$t0,$s2
/*  f0ebbac:	256b1fb0 */ 	addiu	$t3,$t3,%lo(g_MenuColourPalettes)
/*  f0ebbb0:	8c660044 */ 	lw	$a2,0x44($v1)
/*  f0ebbb4:	00007812 */ 	mflo	$t7
/*  f0ebbb8:	01ebc021 */ 	addu	$t8,$t7,$t3
/*  f0ebbbc:	8f040020 */ 	lw	$a0,0x20($t8)
/*  f0ebbc0:	01d20019 */ 	multu	$t6,$s2
/*  f0ebbc4:	00006812 */ 	mflo	$t5
/*  f0ebbc8:	01ab4821 */ 	addu	$t1,$t5,$t3
/*  f0ebbcc:	0fc01a40 */ 	jal	colourBlend
/*  f0ebbd0:	8d250020 */ 	lw	$a1,0x20($t1)
/*  f0ebbd4:	00403825 */ 	or	$a3,$v0,$zero
.L0f0ebbd8:
/*  f0ebbd8:	02002025 */ 	or	$a0,$s0,$zero
/*  f0ebbdc:	320500ff */ 	andi	$a1,$s0,0xff
/*  f0ebbe0:	2406007f */ 	addiu	$a2,$zero,0x7f
/*  f0ebbe4:	0fc01a40 */ 	jal	colourBlend
/*  f0ebbe8:	afa70058 */ 	sw	$a3,0x58($sp)
/*  f0ebbec:	8fa50058 */ 	lw	$a1,0x58($sp)
/*  f0ebbf0:	00402025 */ 	or	$a0,$v0,$zero
/*  f0ebbf4:	0fc01a40 */ 	jal	colourBlend
/*  f0ebbf8:	8fa60054 */ 	lw	$a2,0x54($sp)
/*  f0ebbfc:	00408025 */ 	or	$s0,$v0,$zero
.L0f0ebc00:
/*  f0ebc00:	8e2a0010 */ 	lw	$t2,0x10($s1)
/*  f0ebc04:	3c047f1b */ 	lui	$a0,%hi(g_MenuColourPalettes3+0x20)
/*  f0ebc08:	3c057f1b */ 	lui	$a1,%hi(g_MenuColourPalettes2+0x20)
/*  f0ebc0c:	914c003c */ 	lbu	$t4,0x3c($t2)
/*  f0ebc10:	01920019 */ 	multu	$t4,$s2
/*  f0ebc14:	00001012 */ 	mflo	$v0
/*  f0ebc18:	00822021 */ 	addu	$a0,$a0,$v0
/*  f0ebc1c:	00a22821 */ 	addu	$a1,$a1,$v0
/*  f0ebc20:	8ca52138 */ 	lw	$a1,%lo(g_MenuColourPalettes2+0x20)($a1)
/*  f0ebc24:	0fc54f8e */ 	jal	func0f153e38
/*  f0ebc28:	8c8422a0 */ 	lw	$a0,%lo(g_MenuColourPalettes3+0x20)($a0)
/*  f0ebc2c:	1000000c */ 	b	.L0f0ebc60
/*  f0ebc30:	00000000 */ 	nop
.L0f0ebc34:
/*  f0ebc34:	8e390010 */ 	lw	$t9,0x10($s1)
/*  f0ebc38:	3c047f1b */ 	lui	$a0,%hi(g_MenuColourPalettes3+0x18)
/*  f0ebc3c:	3c057f1b */ 	lui	$a1,%hi(g_MenuColourPalettes2+0x18)
/*  f0ebc40:	9328003c */ 	lbu	$t0,0x3c($t9)
/*  f0ebc44:	01120019 */ 	multu	$t0,$s2
/*  f0ebc48:	00001012 */ 	mflo	$v0
/*  f0ebc4c:	00822021 */ 	addu	$a0,$a0,$v0
/*  f0ebc50:	00a22821 */ 	addu	$a1,$a1,$v0
/*  f0ebc54:	8ca52130 */ 	lw	$a1,%lo(g_MenuColourPalettes2+0x18)($a1)
/*  f0ebc58:	0fc54f8e */ 	jal	func0f153e38
/*  f0ebc5c:	8c842298 */ 	lw	$a0,%lo(g_MenuColourPalettes3+0x18)($a0)
.L0f0ebc60:
/*  f0ebc60:	0fc54d8a */ 	jal	func0f153628
/*  f0ebc64:	8fa400b0 */ 	lw	$a0,0xb0($sp)
/*  f0ebc68:	3c0f8008 */ 	lui	$t7,%hi(var8007fb10)
/*  f0ebc6c:	3c188008 */ 	lui	$t8,%hi(var8007fb0c)
/*  f0ebc70:	8f18fb0c */ 	lw	$t8,%lo(var8007fb0c)($t8)
/*  f0ebc74:	8deffb10 */ 	lw	$t7,%lo(var8007fb10)($t7)
/*  f0ebc78:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f0ebc7c:	afb80014 */ 	sw	$t8,0x14($sp)
/*  f0ebc80:	afaf0010 */ 	sw	$t7,0x10($sp)
/*  f0ebc84:	862e0004 */ 	lh	$t6,0x4($s1)
/*  f0ebc88:	00402025 */ 	or	$a0,$v0,$zero
/*  f0ebc8c:	27a50094 */ 	addiu	$a1,$sp,0x94
/*  f0ebc90:	afae001c */ 	sw	$t6,0x1c($sp)
/*  f0ebc94:	862d0006 */ 	lh	$t5,0x6($s1)
/*  f0ebc98:	afa00028 */ 	sw	$zero,0x28($sp)
/*  f0ebc9c:	afa00024 */ 	sw	$zero,0x24($sp)
/*  f0ebca0:	27a60090 */ 	addiu	$a2,$sp,0x90
/*  f0ebca4:	8fa700a8 */ 	lw	$a3,0xa8($sp)
/*  f0ebca8:	0fc5580f */ 	jal	textRenderWhite
/*  f0ebcac:	afad0020 */ 	sw	$t5,0x20($sp)
/*  f0ebcb0:	afa200b0 */ 	sw	$v0,0xb0($sp)
/*  f0ebcb4:	8e2b0008 */ 	lw	$t3,0x8($s1)
/*  f0ebcb8:	27a40098 */ 	addiu	$a0,$sp,0x98
/*  f0ebcbc:	3c057f1b */ 	lui	$a1,%hi(var7f1adfbc)
/*  f0ebcc0:	8d690004 */ 	lw	$t1,0x4($t3)
/*  f0ebcc4:	312a2000 */ 	andi	$t2,$t1,0x2000
/*  f0ebcc8:	15400077 */ 	bnez	$t2,.L0f0ebea8
/*  f0ebccc:	00000000 */ 	nop
/*  f0ebcd0:	0c004c4c */ 	jal	strcpy
/*  f0ebcd4:	24a5dfbc */ 	addiu	$a1,$a1,%lo(var7f1adfbc)
/*  f0ebcd8:	3c057f1b */ 	lui	$a1,%hi(var7f1adfc0)
/*  f0ebcdc:	24a5dfc0 */ 	addiu	$a1,$a1,%lo(var7f1adfc0)
/*  f0ebce0:	27a40098 */ 	addiu	$a0,$sp,0x98
/*  f0ebce4:	0c004dad */ 	jal	sprintf
/*  f0ebce8:	8fa60070 */ 	lw	$a2,0x70($sp)
/*  f0ebcec:	8e2c0008 */ 	lw	$t4,0x8($s1)
/*  f0ebcf0:	8fa80070 */ 	lw	$t0,0x70($sp)
/*  f0ebcf4:	27af0098 */ 	addiu	$t7,$sp,0x98
/*  f0ebcf8:	8d990010 */ 	lw	$t9,0x10($t4)
/*  f0ebcfc:	1320000a */ 	beqz	$t9,.L0f0ebd28
/*  f0ebd00:	00000000 */ 	nop
/*  f0ebd04:	afa80074 */ 	sw	$t0,0x74($sp)
/*  f0ebd08:	afaf0078 */ 	sw	$t7,0x78($sp)
/*  f0ebd0c:	8e270008 */ 	lw	$a3,0x8($s1)
/*  f0ebd10:	2404000a */ 	addiu	$a0,$zero,0xa
/*  f0ebd14:	27a60074 */ 	addiu	$a2,$sp,0x74
/*  f0ebd18:	8cf90010 */ 	lw	$t9,0x10($a3)
/*  f0ebd1c:	00e02825 */ 	or	$a1,$a3,$zero
/*  f0ebd20:	0320f809 */ 	jalr	$t9
/*  f0ebd24:	00000000 */ 	nop
.L0f0ebd28:
/*  f0ebd28:	3c188008 */ 	lui	$t8,%hi(var8007fb0c)
/*  f0ebd2c:	8f18fb0c */ 	lw	$t8,%lo(var8007fb0c)($t8)
/*  f0ebd30:	3c078008 */ 	lui	$a3,%hi(var8007fb10)
/*  f0ebd34:	8ce7fb10 */ 	lw	$a3,%lo(var8007fb10)($a3)
/*  f0ebd38:	27a40084 */ 	addiu	$a0,$sp,0x84
/*  f0ebd3c:	27a50088 */ 	addiu	$a1,$sp,0x88
/*  f0ebd40:	27a60098 */ 	addiu	$a2,$sp,0x98
/*  f0ebd44:	afa00014 */ 	sw	$zero,0x14($sp)
/*  f0ebd48:	0fc55cbe */ 	jal	textMeasure
/*  f0ebd4c:	afb80010 */ 	sw	$t8,0x10($sp)
/*  f0ebd50:	862e0000 */ 	lh	$t6,0x0($s1)
/*  f0ebd54:	862d0004 */ 	lh	$t5,0x4($s1)
/*  f0ebd58:	8fa90088 */ 	lw	$t1,0x88($sp)
/*  f0ebd5c:	44804000 */ 	mtc1	$zero,$f8
/*  f0ebd60:	01cd5821 */ 	addu	$t3,$t6,$t5
/*  f0ebd64:	01695023 */ 	subu	$t2,$t3,$t1
/*  f0ebd68:	254cfff9 */ 	addiu	$t4,$t2,-7
/*  f0ebd6c:	afac0094 */ 	sw	$t4,0x94($sp)
/*  f0ebd70:	86280002 */ 	lh	$t0,0x2($s1)
/*  f0ebd74:	250f0002 */ 	addiu	$t7,$t0,0x2
/*  f0ebd78:	afaf0090 */ 	sw	$t7,0x90($sp)
/*  f0ebd7c:	8e230010 */ 	lw	$v1,0x10($s1)
/*  f0ebd80:	c4660040 */ 	lwc1	$f6,0x40($v1)
/*  f0ebd84:	4608303c */ 	c.lt.s	$f6,$f8
/*  f0ebd88:	00000000 */ 	nop
/*  f0ebd8c:	45020009 */ 	bc1fl	.L0f0ebdb4
/*  f0ebd90:	906e003d */ 	lbu	$t6,0x3d($v1)
/*  f0ebd94:	9079003c */ 	lbu	$t9,0x3c($v1)
/*  f0ebd98:	3c107f1b */ 	lui	$s0,%hi(g_MenuColourPalettes+0x18)
/*  f0ebd9c:	03320019 */ 	multu	$t9,$s2
/*  f0ebda0:	0000c012 */ 	mflo	$t8
/*  f0ebda4:	02188021 */ 	addu	$s0,$s0,$t8
/*  f0ebda8:	10000011 */ 	b	.L0f0ebdf0
/*  f0ebdac:	8e101fc8 */ 	lw	$s0,%lo(g_MenuColourPalettes+0x18)($s0)
/*  f0ebdb0:	906e003d */ 	lbu	$t6,0x3d($v1)
.L0f0ebdb4:
/*  f0ebdb4:	9069003c */ 	lbu	$t1,0x3c($v1)
/*  f0ebdb8:	3c027f1b */ 	lui	$v0,%hi(g_MenuColourPalettes)
/*  f0ebdbc:	01d20019 */ 	multu	$t6,$s2
/*  f0ebdc0:	24421fb0 */ 	addiu	$v0,$v0,%lo(g_MenuColourPalettes)
/*  f0ebdc4:	8c660044 */ 	lw	$a2,0x44($v1)
/*  f0ebdc8:	00006812 */ 	mflo	$t5
/*  f0ebdcc:	004d5821 */ 	addu	$t3,$v0,$t5
/*  f0ebdd0:	8d640018 */ 	lw	$a0,0x18($t3)
/*  f0ebdd4:	01320019 */ 	multu	$t1,$s2
/*  f0ebdd8:	00005012 */ 	mflo	$t2
/*  f0ebddc:	004a6021 */ 	addu	$t4,$v0,$t2
/*  f0ebde0:	0fc01a40 */ 	jal	colourBlend
/*  f0ebde4:	8d850018 */ 	lw	$a1,0x18($t4)
/*  f0ebde8:	00408025 */ 	or	$s0,$v0,$zero
/*  f0ebdec:	8e230010 */ 	lw	$v1,0x10($s1)
.L0f0ebdf0:
/*  f0ebdf0:	8c68000c */ 	lw	$t0,0xc($v1)
/*  f0ebdf4:	02002025 */ 	or	$a0,$s0,$zero
/*  f0ebdf8:	00002825 */ 	or	$a1,$zero,$zero
/*  f0ebdfc:	51000009 */ 	beqzl	$t0,.L0f0ebe24
/*  f0ebe00:	9078003c */ 	lbu	$t8,0x3c($v1)
/*  f0ebe04:	0fc01a40 */ 	jal	colourBlend
/*  f0ebe08:	2406007f */ 	addiu	$a2,$zero,0x7f
/*  f0ebe0c:	2401ff00 */ 	addiu	$at,$zero,-256
/*  f0ebe10:	00417824 */ 	and	$t7,$v0,$at
/*  f0ebe14:	321900ff */ 	andi	$t9,$s0,0xff
/*  f0ebe18:	01f98025 */ 	or	$s0,$t7,$t9
/*  f0ebe1c:	8e230010 */ 	lw	$v1,0x10($s1)
/*  f0ebe20:	9078003c */ 	lbu	$t8,0x3c($v1)
.L0f0ebe24:
/*  f0ebe24:	3c047f1b */ 	lui	$a0,%hi(g_MenuColourPalettes3+0x18)
/*  f0ebe28:	3c057f1b */ 	lui	$a1,%hi(g_MenuColourPalettes2+0x18)
/*  f0ebe2c:	03120019 */ 	multu	$t8,$s2
/*  f0ebe30:	00001012 */ 	mflo	$v0
/*  f0ebe34:	00822021 */ 	addu	$a0,$a0,$v0
/*  f0ebe38:	00a22821 */ 	addu	$a1,$a1,$v0
/*  f0ebe3c:	8ca52130 */ 	lw	$a1,%lo(g_MenuColourPalettes2+0x18)($a1)
/*  f0ebe40:	0fc54f8e */ 	jal	func0f153e38
/*  f0ebe44:	8c842298 */ 	lw	$a0,%lo(g_MenuColourPalettes3+0x18)($a0)
/*  f0ebe48:	3c098008 */ 	lui	$t1,%hi(var8007fb10)
/*  f0ebe4c:	3c0a8008 */ 	lui	$t2,%hi(var8007fb0c)
/*  f0ebe50:	8d4afb0c */ 	lw	$t2,%lo(var8007fb0c)($t2)
/*  f0ebe54:	8d29fb10 */ 	lw	$t1,%lo(var8007fb10)($t1)
/*  f0ebe58:	2401ff00 */ 	addiu	$at,$zero,-256
/*  f0ebe5c:	320d00ff */ 	andi	$t5,$s0,0xff
/*  f0ebe60:	000d5842 */ 	srl	$t3,$t5,0x1
/*  f0ebe64:	02017024 */ 	and	$t6,$s0,$at
/*  f0ebe68:	01cb8025 */ 	or	$s0,$t6,$t3
/*  f0ebe6c:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f0ebe70:	afaa0014 */ 	sw	$t2,0x14($sp)
/*  f0ebe74:	afa90010 */ 	sw	$t1,0x10($sp)
/*  f0ebe78:	862c0004 */ 	lh	$t4,0x4($s1)
/*  f0ebe7c:	8fa400b0 */ 	lw	$a0,0xb0($sp)
/*  f0ebe80:	27a50094 */ 	addiu	$a1,$sp,0x94
/*  f0ebe84:	afac001c */ 	sw	$t4,0x1c($sp)
/*  f0ebe88:	86280006 */ 	lh	$t0,0x6($s1)
/*  f0ebe8c:	afa00028 */ 	sw	$zero,0x28($sp)
/*  f0ebe90:	afa00024 */ 	sw	$zero,0x24($sp)
/*  f0ebe94:	27a60090 */ 	addiu	$a2,$sp,0x90
/*  f0ebe98:	27a70098 */ 	addiu	$a3,$sp,0x98
/*  f0ebe9c:	0fc5580f */ 	jal	textRenderWhite
/*  f0ebea0:	afa80020 */ 	sw	$t0,0x20($sp)
/*  f0ebea4:	afa200b0 */ 	sw	$v0,0xb0($sp)
.L0f0ebea8:
/*  f0ebea8:	0fc54de0 */ 	jal	func0f153780
/*  f0ebeac:	8fa400b0 */ 	lw	$a0,0xb0($sp)
/*  f0ebeb0:	8fbf0044 */ 	lw	$ra,0x44($sp)
/*  f0ebeb4:	8fb00038 */ 	lw	$s0,0x38($sp)
/*  f0ebeb8:	8fb1003c */ 	lw	$s1,0x3c($sp)
/*  f0ebebc:	8fb20040 */ 	lw	$s2,0x40($sp)
/*  f0ebec0:	03e00008 */ 	jr	$ra
/*  f0ebec4:	27bd00b0 */ 	addiu	$sp,$sp,0xb0
);

bool menuTickItemSlider(struct menuitem *item, struct menuframe *frame, struct menuinputs *inputs, u32 arg3, union menuitemtickdata *data)
{
	s32 index;
	union handlerdata handlerdata;
	s32 tmp;
	f32 f0;
	f32 f2;
	f32 f14;

	if ((arg3 & 2)) {
		if (arg3 & 4) {
			if (item->handler) {
				item->handler(MENUOP_GETSLIDER, item, &handlerdata);
				index = (s16)handlerdata.slider.value;
			} else {
				index = 0;
			}

			if ((item->param1 & 0x00000800) == 0 && !g_Menus[g_MpPlayerNum].unk82c) {
				index = index + inputs->leftright;
			} else {
				f0 = data->slider.unk00 / 1000.0f;
				f0 = (f0 * 100.0f) / item->param3;
				f0 = f0 + inputs->unk08 * g_Vars.diffframe60;
				f0 = (item->param3 * f0) / 100.0f;

				tmp = f0;
				f0 -= tmp;
				index += tmp;

				data->slider.unk00 = f0 * 1000.0f;
			}

			if (inputs->xaxis < 0) {
				f14 = inputs->xaxis;
				f2 = -f14;
			} else {
				f14 = inputs->xaxis;
				f2 = f14;
			}

			if ((item->param1 & 0x00000800) == 0 && f2 < 40) {
				if (g_Menus[g_MpPlayerNum].unk82c) {
					index = index + inputs->leftright;
				}
			} else {
				f0 = data->slider.unk00 / 1000.0f;
				f0 = (f0 * 100.0f) / item->param3;

				if (inputs->xaxis < 0) {
					f2 = -f14;
				} else {
					f2 = f14;
				}

				if (f2 > 20) {
					f2 = (f2 - 20) * 0.0625f;
					f2 *= g_Vars.diffframe60f;

					if (inputs->xaxis < 0) {
						f0 -= f2;
					} else {
						f0 += f2;
					}
				}

				f0 = (item->param3 * f0) / 100.0f;
				tmp = f0;
				f0 -= tmp;
				index += tmp;
				data->slider.unk00 = f0 * 1000.0f;
			}

			if (index < 0) {
				index = 0;
			}

			if (index > item->param3) {
				index = item->param3;
			}

			inputs->leftright = 0;
			handlerdata.slider.value = index;

			if (item->handler) {
				item->handler(MENUOP_SET, item, &handlerdata);
			}

			if (inputs->select) {
				frame->dimmed = false;
			}
		} else {
			if (inputs->select) {
				frame->dimmed = true;
			}
		}
	}

	return true;
}

void menuInitItemSlider(union menuitemtickdata *data)
{
	data->slider.unk00 = 0;
}

Gfx *menuRenderItemCarousel(Gfx *gdl, struct menurenderthing *thing)
{
	u32 colour = 0xff0000ff;

	if (thing->focused) {
		u32 colour1;
		u32 weight = func0f006b08(40) * 255;

		if (thing->frame->transitiontimer < 0) {
			colour1 = g_MenuColourPalettes[thing->frame->type].focused;
		} else {
			colour1 = colourBlend(
					g_MenuColourPalettes[thing->frame->type2].focused,
					g_MenuColourPalettes[thing->frame->type].focused,
					thing->frame->colourweight);
		}

		colour = colourBlend(colourBlend(colour, 0x000000ff, 127), colour1, weight);
	}

	// Left arrow
	gdl = menuRenderCarouselArrow(gdl, thing->x, thing->y + thing->height / 2, 8, 1, -1, colour);

	// Right arrow
	gdl = menuRenderCarouselArrow(gdl, thing->x + thing->width, thing->y + thing->height / 2, 8, 3, -1, colour);

	// This part of the function is unused because param2 is always zero.
	// Setting it to 0x7b causes a crash.
	// 0x7c and 0x7d don't do anything with the option value, so it's probable
	// that the original source has a commented function call in that block.
	if (thing->item->param2 == 0x7b && thing->item->handler) {
		union handlerdata data;
		s32 headorbodynum = 0;

		thing->item->handler(MENUOP_GETOPTIONVALUE, thing->item, &data);
		headorbodynum += data.carousel.value;

		gdl = func0f14f07c(gdl, headorbodynum,
				thing->x + thing->width / 2 - 32, thing->y,
				thing->x + thing->width / 2 + 32, thing->y + 64);
	} else if ((thing->item->param2 == 0x7c || thing->item->param2 == 0x7d) && thing->item->handler) {
		union handlerdata data;
		thing->item->handler(MENUOP_GETOPTIONVALUE, thing->item, &data);
	}

	return gdl;
}

bool menuTickItemCarousel(struct menuitem *item, struct menuinputs *inputs, u32 arg2)
{
	union handlerdata data;
	s32 index;
	s32 numoptions;
	bool done;
	u32 stack;

	if (((arg2 & 2) || (item->param1 & 0x04000000)) && item->handler) {
		if (inputs->leftright != 0) {
			if (mpIsPlayerLockedOut(g_MpPlayerNum) == 0 || (item->param1 & 0x00020000) == 0) {
				done = false;

				item->handler(MENUOP_GETOPTIONCOUNT, item, &data);

				numoptions = data.carousel.value;
				item->handler(MENUOP_GETOPTIONVALUE, item, &data);

				index = data.carousel.value;

				while (!done) {
					index = index + inputs->leftright;

					if (index >= numoptions) {
						index = 0;
					}

					if (index < 0) {
						index = numoptions - 1;
					}

					// Some kind of option-is-locked check?
					data.carousel.value = index;

					if (!item->handler(MENUOP_21, item, &data)) {
						done = true;
					}
				}

				data.carousel.value = index;
				data.carousel.unk04 = inputs->shoulder;

				item->handler(MENUOP_SET, item, &data);
			}
		}

		if (item->handler) {
			item->handler(MENUOP_11, item, &data);
		}
	}

	return true;
}

GLOBAL_ASM(
glabel menuRenderItemCheckbox
/*  f0ec64c:	27bdff88 */ 	addiu	$sp,$sp,-120
/*  f0ec650:	3c0eff00 */ 	lui	$t6,0xff00
/*  f0ec654:	35ce2faf */ 	ori	$t6,$t6,0x2faf
/*  f0ec658:	afbf003c */ 	sw	$ra,0x3c($sp)
/*  f0ec65c:	afb10038 */ 	sw	$s1,0x38($sp)
/*  f0ec660:	afb00034 */ 	sw	$s0,0x34($sp)
/*  f0ec664:	afa40078 */ 	sw	$a0,0x78($sp)
/*  f0ec668:	afa00060 */ 	sw	$zero,0x60($sp)
/*  f0ec66c:	afae005c */ 	sw	$t6,0x5c($sp)
/*  f0ec670:	8caf0008 */ 	lw	$t7,0x8($a1)
/*  f0ec674:	3c028008 */ 	lui	$v0,%hi(var8007fb0c)
/*  f0ec678:	3c038008 */ 	lui	$v1,%hi(var8007fb10)
/*  f0ec67c:	8df80004 */ 	lw	$t8,0x4($t7)
/*  f0ec680:	00a08825 */ 	or	$s1,$a1,$zero
/*  f0ec684:	8c42fb0c */ 	lw	$v0,%lo(var8007fb0c)($v0)
/*  f0ec688:	33190200 */ 	andi	$t9,$t8,0x200
/*  f0ec68c:	13200005 */ 	beqz	$t9,.L0f0ec6a4
/*  f0ec690:	8c63fb10 */ 	lw	$v1,%lo(var8007fb10)($v1)
/*  f0ec694:	3c028008 */ 	lui	$v0,%hi(var8007fb04)
/*  f0ec698:	3c038008 */ 	lui	$v1,%hi(var8007fb08)
/*  f0ec69c:	8c42fb04 */ 	lw	$v0,%lo(var8007fb04)($v0)
/*  f0ec6a0:	8c63fb08 */ 	lw	$v1,%lo(var8007fb08)($v1)
.L0f0ec6a4:
/*  f0ec6a4:	86280000 */ 	lh	$t0,0x0($s1)
/*  f0ec6a8:	afa8006c */ 	sw	$t0,0x6c($sp)
/*  f0ec6ac:	86290002 */ 	lh	$t1,0x2($s1)
/*  f0ec6b0:	afa90068 */ 	sw	$t1,0x68($sp)
/*  f0ec6b4:	8e240008 */ 	lw	$a0,0x8($s1)
/*  f0ec6b8:	afa30054 */ 	sw	$v1,0x54($sp)
/*  f0ec6bc:	0fc3c557 */ 	jal	menuResolveParam2Text
/*  f0ec6c0:	afa20058 */ 	sw	$v0,0x58($sp)
/*  f0ec6c4:	afa20070 */ 	sw	$v0,0x70($sp)
/*  f0ec6c8:	a3a00064 */ 	sb	$zero,0x64($sp)
/*  f0ec6cc:	8e250008 */ 	lw	$a1,0x8($s1)
/*  f0ec6d0:	24040008 */ 	addiu	$a0,$zero,0x8
/*  f0ec6d4:	8ca30010 */ 	lw	$v1,0x10($a1)
/*  f0ec6d8:	50600042 */ 	beqzl	$v1,.L0f0ec7e4
/*  f0ec6dc:	8e270010 */ 	lw	$a3,0x10($s1)
/*  f0ec6e0:	0060f809 */ 	jalr	$v1
/*  f0ec6e4:	27a60064 */ 	addiu	$a2,$sp,0x64
/*  f0ec6e8:	24010001 */ 	addiu	$at,$zero,0x1
/*  f0ec6ec:	1441003c */ 	bne	$v0,$at,.L0f0ec7e0
/*  f0ec6f0:	240a0001 */ 	addiu	$t2,$zero,0x1
/*  f0ec6f4:	afaa0060 */ 	sw	$t2,0x60($sp)
/*  f0ec6f8:	8e270010 */ 	lw	$a3,0x10($s1)
/*  f0ec6fc:	44803000 */ 	mtc1	$zero,$f6
/*  f0ec700:	3c0f7f1b */ 	lui	$t7,%hi(g_MenuColourPalettes)
/*  f0ec704:	c4e40040 */ 	lwc1	$f4,0x40($a3)
/*  f0ec708:	25ef1fb0 */ 	addiu	$t7,$t7,%lo(g_MenuColourPalettes)
/*  f0ec70c:	4606203c */ 	c.lt.s	$f4,$f6
/*  f0ec710:	00000000 */ 	nop
/*  f0ec714:	4502000a */ 	bc1fl	.L0f0ec740
/*  f0ec718:	90ed003d */ 	lbu	$t5,0x3d($a3)
/*  f0ec71c:	90eb003c */ 	lbu	$t3,0x3c($a3)
/*  f0ec720:	3c107f1b */ 	lui	$s0,%hi(g_MenuColourPalettes+0x24)
/*  f0ec724:	000b6100 */ 	sll	$t4,$t3,0x4
/*  f0ec728:	018b6023 */ 	subu	$t4,$t4,$t3
/*  f0ec72c:	000c6080 */ 	sll	$t4,$t4,0x2
/*  f0ec730:	020c8021 */ 	addu	$s0,$s0,$t4
/*  f0ec734:	10000011 */ 	b	.L0f0ec77c
/*  f0ec738:	8e101fd4 */ 	lw	$s0,%lo(g_MenuColourPalettes+0x24)($s0)
/*  f0ec73c:	90ed003d */ 	lbu	$t5,0x3d($a3)
.L0f0ec740:
/*  f0ec740:	90f9003c */ 	lbu	$t9,0x3c($a3)
/*  f0ec744:	8ce60044 */ 	lw	$a2,0x44($a3)
/*  f0ec748:	000d7100 */ 	sll	$t6,$t5,0x4
/*  f0ec74c:	00194100 */ 	sll	$t0,$t9,0x4
/*  f0ec750:	01cd7023 */ 	subu	$t6,$t6,$t5
/*  f0ec754:	01194023 */ 	subu	$t0,$t0,$t9
/*  f0ec758:	00084080 */ 	sll	$t0,$t0,0x2
/*  f0ec75c:	000e7080 */ 	sll	$t6,$t6,0x2
/*  f0ec760:	01cfc021 */ 	addu	$t8,$t6,$t7
/*  f0ec764:	010f4821 */ 	addu	$t1,$t0,$t7
/*  f0ec768:	8d250024 */ 	lw	$a1,0x24($t1)
/*  f0ec76c:	0fc01a40 */ 	jal	colourBlend
/*  f0ec770:	8f040024 */ 	lw	$a0,0x24($t8)
/*  f0ec774:	00408025 */ 	or	$s0,$v0,$zero
/*  f0ec778:	8e270010 */ 	lw	$a3,0x10($s1)
.L0f0ec77c:
/*  f0ec77c:	8cea000c */ 	lw	$t2,0xc($a3)
/*  f0ec780:	02002025 */ 	or	$a0,$s0,$zero
/*  f0ec784:	00002825 */ 	or	$a1,$zero,$zero
/*  f0ec788:	51400009 */ 	beqzl	$t2,.L0f0ec7b0
/*  f0ec78c:	90e3003c */ 	lbu	$v1,0x3c($a3)
/*  f0ec790:	0fc01a40 */ 	jal	colourBlend
/*  f0ec794:	2406007f */ 	addiu	$a2,$zero,0x7f
/*  f0ec798:	2401ff00 */ 	addiu	$at,$zero,-256
/*  f0ec79c:	00415824 */ 	and	$t3,$v0,$at
/*  f0ec7a0:	320c00ff */ 	andi	$t4,$s0,0xff
/*  f0ec7a4:	016c8025 */ 	or	$s0,$t3,$t4
/*  f0ec7a8:	8e270010 */ 	lw	$a3,0x10($s1)
/*  f0ec7ac:	90e3003c */ 	lbu	$v1,0x3c($a3)
.L0f0ec7b0:
/*  f0ec7b0:	3c047f1b */ 	lui	$a0,%hi(g_MenuColourPalettes3+0x24)
/*  f0ec7b4:	3c057f1b */ 	lui	$a1,%hi(g_MenuColourPalettes2+0x24)
/*  f0ec7b8:	00036900 */ 	sll	$t5,$v1,0x4
/*  f0ec7bc:	01a36823 */ 	subu	$t5,$t5,$v1
/*  f0ec7c0:	000d1880 */ 	sll	$v1,$t5,0x2
/*  f0ec7c4:	00832021 */ 	addu	$a0,$a0,$v1
/*  f0ec7c8:	00a32821 */ 	addu	$a1,$a1,$v1
/*  f0ec7cc:	8ca5213c */ 	lw	$a1,%lo(g_MenuColourPalettes2+0x24)($a1)
/*  f0ec7d0:	0fc54f8e */ 	jal	func0f153e38
/*  f0ec7d4:	8c8422a4 */ 	lw	$a0,%lo(g_MenuColourPalettes3+0x24)($a0)
/*  f0ec7d8:	10000039 */ 	b	.L0f0ec8c0
/*  f0ec7dc:	00000000 */ 	nop
.L0f0ec7e0:
/*  f0ec7e0:	8e270010 */ 	lw	$a3,0x10($s1)
.L0f0ec7e4:
/*  f0ec7e4:	44805000 */ 	mtc1	$zero,$f10
/*  f0ec7e8:	3c0f7f1b */ 	lui	$t7,%hi(g_MenuColourPalettes)
/*  f0ec7ec:	c4e80040 */ 	lwc1	$f8,0x40($a3)
/*  f0ec7f0:	25ef1fb0 */ 	addiu	$t7,$t7,%lo(g_MenuColourPalettes)
/*  f0ec7f4:	460a403c */ 	c.lt.s	$f8,$f10
/*  f0ec7f8:	00000000 */ 	nop
/*  f0ec7fc:	4502000a */ 	bc1fl	.L0f0ec828
/*  f0ec800:	90f9003d */ 	lbu	$t9,0x3d($a3)
/*  f0ec804:	90ee003c */ 	lbu	$t6,0x3c($a3)
/*  f0ec808:	3c107f1b */ 	lui	$s0,%hi(g_MenuColourPalettes+0x18)
/*  f0ec80c:	000ec100 */ 	sll	$t8,$t6,0x4
/*  f0ec810:	030ec023 */ 	subu	$t8,$t8,$t6
/*  f0ec814:	0018c080 */ 	sll	$t8,$t8,0x2
/*  f0ec818:	02188021 */ 	addu	$s0,$s0,$t8
/*  f0ec81c:	10000011 */ 	b	.L0f0ec864
/*  f0ec820:	8e101fc8 */ 	lw	$s0,%lo(g_MenuColourPalettes+0x18)($s0)
/*  f0ec824:	90f9003d */ 	lbu	$t9,0x3d($a3)
.L0f0ec828:
/*  f0ec828:	90ea003c */ 	lbu	$t2,0x3c($a3)
/*  f0ec82c:	8ce60044 */ 	lw	$a2,0x44($a3)
/*  f0ec830:	00194100 */ 	sll	$t0,$t9,0x4
/*  f0ec834:	000a5900 */ 	sll	$t3,$t2,0x4
/*  f0ec838:	01194023 */ 	subu	$t0,$t0,$t9
/*  f0ec83c:	016a5823 */ 	subu	$t3,$t3,$t2
/*  f0ec840:	000b5880 */ 	sll	$t3,$t3,0x2
/*  f0ec844:	00084080 */ 	sll	$t0,$t0,0x2
/*  f0ec848:	010f4821 */ 	addu	$t1,$t0,$t7
/*  f0ec84c:	016f6021 */ 	addu	$t4,$t3,$t7
/*  f0ec850:	8d850018 */ 	lw	$a1,0x18($t4)
/*  f0ec854:	0fc01a40 */ 	jal	colourBlend
/*  f0ec858:	8d240018 */ 	lw	$a0,0x18($t1)
/*  f0ec85c:	00408025 */ 	or	$s0,$v0,$zero
/*  f0ec860:	8e270010 */ 	lw	$a3,0x10($s1)
.L0f0ec864:
/*  f0ec864:	8ced000c */ 	lw	$t5,0xc($a3)
/*  f0ec868:	02002025 */ 	or	$a0,$s0,$zero
/*  f0ec86c:	00002825 */ 	or	$a1,$zero,$zero
/*  f0ec870:	51a00009 */ 	beqzl	$t5,.L0f0ec898
/*  f0ec874:	90e3003c */ 	lbu	$v1,0x3c($a3)
/*  f0ec878:	0fc01a40 */ 	jal	colourBlend
/*  f0ec87c:	2406007f */ 	addiu	$a2,$zero,0x7f
/*  f0ec880:	2401ff00 */ 	addiu	$at,$zero,-256
/*  f0ec884:	00417024 */ 	and	$t6,$v0,$at
/*  f0ec888:	321800ff */ 	andi	$t8,$s0,0xff
/*  f0ec88c:	01d88025 */ 	or	$s0,$t6,$t8
/*  f0ec890:	8e270010 */ 	lw	$a3,0x10($s1)
/*  f0ec894:	90e3003c */ 	lbu	$v1,0x3c($a3)
.L0f0ec898:
/*  f0ec898:	3c047f1b */ 	lui	$a0,%hi(g_MenuColourPalettes3+0x18)
/*  f0ec89c:	3c057f1b */ 	lui	$a1,%hi(g_MenuColourPalettes2+0x18)
/*  f0ec8a0:	0003c900 */ 	sll	$t9,$v1,0x4
/*  f0ec8a4:	0323c823 */ 	subu	$t9,$t9,$v1
/*  f0ec8a8:	00191880 */ 	sll	$v1,$t9,0x2
/*  f0ec8ac:	00832021 */ 	addu	$a0,$a0,$v1
/*  f0ec8b0:	00a32821 */ 	addu	$a1,$a1,$v1
/*  f0ec8b4:	8ca52130 */ 	lw	$a1,%lo(g_MenuColourPalettes2+0x18)($a1)
/*  f0ec8b8:	0fc54f8e */ 	jal	func0f153e38
/*  f0ec8bc:	8c842298 */ 	lw	$a0,%lo(g_MenuColourPalettes3+0x18)($a0)
.L0f0ec8c0:
/*  f0ec8c0:	0fc54d8a */ 	jal	func0f153628
/*  f0ec8c4:	8fa40078 */ 	lw	$a0,0x78($sp)
/*  f0ec8c8:	afa20078 */ 	sw	$v0,0x78($sp)
/*  f0ec8cc:	8e28000c */ 	lw	$t0,0xc($s1)
/*  f0ec8d0:	3c014220 */ 	lui	$at,0x4220
/*  f0ec8d4:	51000060 */ 	beqzl	$t0,.L0f0eca58
/*  f0ec8d8:	8e240008 */ 	lw	$a0,0x8($s1)
/*  f0ec8dc:	44816000 */ 	mtc1	$at,$f12
/*  f0ec8e0:	0fc01ac2 */ 	jal	func0f006b08
/*  f0ec8e4:	00000000 */ 	nop
/*  f0ec8e8:	3c01437f */ 	lui	$at,0x437f
/*  f0ec8ec:	44818000 */ 	mtc1	$at,$f16
/*  f0ec8f0:	240a0001 */ 	addiu	$t2,$zero,0x1
/*  f0ec8f4:	3c027f1b */ 	lui	$v0,%hi(g_MenuColourPalettes)
/*  f0ec8f8:	46100482 */ 	mul.s	$f18,$f0,$f16
/*  f0ec8fc:	24421fb0 */ 	addiu	$v0,$v0,%lo(g_MenuColourPalettes)
/*  f0ec900:	3c014f00 */ 	lui	$at,0x4f00
/*  f0ec904:	4449f800 */ 	cfc1	$t1,$31
/*  f0ec908:	44caf800 */ 	ctc1	$t2,$31
/*  f0ec90c:	00000000 */ 	nop
/*  f0ec910:	46009124 */ 	cvt.w.s	$f4,$f18
/*  f0ec914:	444af800 */ 	cfc1	$t2,$31
/*  f0ec918:	00000000 */ 	nop
/*  f0ec91c:	314a0078 */ 	andi	$t2,$t2,0x78
/*  f0ec920:	51400013 */ 	beqzl	$t2,.L0f0ec970
/*  f0ec924:	440a2000 */ 	mfc1	$t2,$f4
/*  f0ec928:	44812000 */ 	mtc1	$at,$f4
/*  f0ec92c:	240a0001 */ 	addiu	$t2,$zero,0x1
/*  f0ec930:	46049101 */ 	sub.s	$f4,$f18,$f4
/*  f0ec934:	44caf800 */ 	ctc1	$t2,$31
/*  f0ec938:	00000000 */ 	nop
/*  f0ec93c:	46002124 */ 	cvt.w.s	$f4,$f4
/*  f0ec940:	444af800 */ 	cfc1	$t2,$31
/*  f0ec944:	00000000 */ 	nop
/*  f0ec948:	314a0078 */ 	andi	$t2,$t2,0x78
/*  f0ec94c:	15400005 */ 	bnez	$t2,.L0f0ec964
/*  f0ec950:	00000000 */ 	nop
/*  f0ec954:	440a2000 */ 	mfc1	$t2,$f4
/*  f0ec958:	3c018000 */ 	lui	$at,0x8000
/*  f0ec95c:	10000007 */ 	b	.L0f0ec97c
/*  f0ec960:	01415025 */ 	or	$t2,$t2,$at
.L0f0ec964:
/*  f0ec964:	10000005 */ 	b	.L0f0ec97c
/*  f0ec968:	240affff */ 	addiu	$t2,$zero,-1
/*  f0ec96c:	440a2000 */ 	mfc1	$t2,$f4
.L0f0ec970:
/*  f0ec970:	00000000 */ 	nop
/*  f0ec974:	0540fffb */ 	bltz	$t2,.L0f0ec964
/*  f0ec978:	00000000 */ 	nop
.L0f0ec97c:
/*  f0ec97c:	afaa004c */ 	sw	$t2,0x4c($sp)
/*  f0ec980:	8e270010 */ 	lw	$a3,0x10($s1)
/*  f0ec984:	44c9f800 */ 	ctc1	$t1,$31
/*  f0ec988:	44804000 */ 	mtc1	$zero,$f8
/*  f0ec98c:	c4e60040 */ 	lwc1	$f6,0x40($a3)
/*  f0ec990:	4608303c */ 	c.lt.s	$f6,$f8
/*  f0ec994:	00000000 */ 	nop
/*  f0ec998:	4502000b */ 	bc1fl	.L0f0ec9c8
/*  f0ec99c:	90ed003d */ 	lbu	$t5,0x3d($a3)
/*  f0ec9a0:	90eb003c */ 	lbu	$t3,0x3c($a3)
/*  f0ec9a4:	3c0c7f1b */ 	lui	$t4,%hi(g_MenuColourPalettes+0x20)
/*  f0ec9a8:	000b7900 */ 	sll	$t7,$t3,0x4
/*  f0ec9ac:	01eb7823 */ 	subu	$t7,$t7,$t3
/*  f0ec9b0:	000f7880 */ 	sll	$t7,$t7,0x2
/*  f0ec9b4:	018f6021 */ 	addu	$t4,$t4,$t7
/*  f0ec9b8:	8d8c1fd0 */ 	lw	$t4,%lo(g_MenuColourPalettes+0x20)($t4)
/*  f0ec9bc:	10000010 */ 	b	.L0f0eca00
/*  f0ec9c0:	afac0050 */ 	sw	$t4,0x50($sp)
/*  f0ec9c4:	90ed003d */ 	lbu	$t5,0x3d($a3)
.L0f0ec9c8:
/*  f0ec9c8:	90f9003c */ 	lbu	$t9,0x3c($a3)
/*  f0ec9cc:	8ce60044 */ 	lw	$a2,0x44($a3)
/*  f0ec9d0:	000d7100 */ 	sll	$t6,$t5,0x4
/*  f0ec9d4:	00194100 */ 	sll	$t0,$t9,0x4
/*  f0ec9d8:	01cd7023 */ 	subu	$t6,$t6,$t5
/*  f0ec9dc:	01194023 */ 	subu	$t0,$t0,$t9
/*  f0ec9e0:	00084080 */ 	sll	$t0,$t0,0x2
/*  f0ec9e4:	000e7080 */ 	sll	$t6,$t6,0x2
/*  f0ec9e8:	004ec021 */ 	addu	$t8,$v0,$t6
/*  f0ec9ec:	00484821 */ 	addu	$t1,$v0,$t0
/*  f0ec9f0:	8d250020 */ 	lw	$a1,0x20($t1)
/*  f0ec9f4:	0fc01a40 */ 	jal	colourBlend
/*  f0ec9f8:	8f040020 */ 	lw	$a0,0x20($t8)
/*  f0ec9fc:	afa20050 */ 	sw	$v0,0x50($sp)
.L0f0eca00:
/*  f0eca00:	02002025 */ 	or	$a0,$s0,$zero
/*  f0eca04:	320500ff */ 	andi	$a1,$s0,0xff
/*  f0eca08:	0fc01a40 */ 	jal	colourBlend
/*  f0eca0c:	2406007f */ 	addiu	$a2,$zero,0x7f
/*  f0eca10:	00402025 */ 	or	$a0,$v0,$zero
/*  f0eca14:	8fa50050 */ 	lw	$a1,0x50($sp)
/*  f0eca18:	0fc01a40 */ 	jal	colourBlend
/*  f0eca1c:	8fa6004c */ 	lw	$a2,0x4c($sp)
/*  f0eca20:	8e2a0010 */ 	lw	$t2,0x10($s1)
/*  f0eca24:	3c047f1b */ 	lui	$a0,%hi(g_MenuColourPalettes3+0x20)
/*  f0eca28:	3c057f1b */ 	lui	$a1,%hi(g_MenuColourPalettes2+0x20)
/*  f0eca2c:	9143003c */ 	lbu	$v1,0x3c($t2)
/*  f0eca30:	00408025 */ 	or	$s0,$v0,$zero
/*  f0eca34:	00035900 */ 	sll	$t3,$v1,0x4
/*  f0eca38:	01635823 */ 	subu	$t3,$t3,$v1
/*  f0eca3c:	000b1880 */ 	sll	$v1,$t3,0x2
/*  f0eca40:	00832021 */ 	addu	$a0,$a0,$v1
/*  f0eca44:	00a32821 */ 	addu	$a1,$a1,$v1
/*  f0eca48:	8ca52138 */ 	lw	$a1,%lo(g_MenuColourPalettes2+0x20)($a1)
/*  f0eca4c:	0fc54f8e */ 	jal	func0f153e38
/*  f0eca50:	8c8422a0 */ 	lw	$a0,%lo(g_MenuColourPalettes3+0x20)($a0)
/*  f0eca54:	8e240008 */ 	lw	$a0,0x8($s1)
.L0f0eca58:
/*  f0eca58:	0fc3c962 */ 	jal	menuIsItemDisabled
/*  f0eca5c:	8e250010 */ 	lw	$a1,0x10($s1)
/*  f0eca60:	5040003c */ 	beqzl	$v0,.L0f0ecb54
/*  f0eca64:	862e0000 */ 	lh	$t6,0x0($s1)
/*  f0eca68:	8e270010 */ 	lw	$a3,0x10($s1)
/*  f0eca6c:	44808000 */ 	mtc1	$zero,$f16
/*  f0eca70:	c4ea0040 */ 	lwc1	$f10,0x40($a3)
/*  f0eca74:	4610503c */ 	c.lt.s	$f10,$f16
/*  f0eca78:	00000000 */ 	nop
/*  f0eca7c:	4502000a */ 	bc1fl	.L0f0ecaa8
/*  f0eca80:	90ed003d */ 	lbu	$t5,0x3d($a3)
/*  f0eca84:	90ef003c */ 	lbu	$t7,0x3c($a3)
/*  f0eca88:	3c107f1b */ 	lui	$s0,%hi(g_MenuColourPalettes+0x1c)
/*  f0eca8c:	000f6100 */ 	sll	$t4,$t7,0x4
/*  f0eca90:	018f6023 */ 	subu	$t4,$t4,$t7
/*  f0eca94:	000c6080 */ 	sll	$t4,$t4,0x2
/*  f0eca98:	020c8021 */ 	addu	$s0,$s0,$t4
/*  f0eca9c:	10000012 */ 	b	.L0f0ecae8
/*  f0ecaa0:	8e101fcc */ 	lw	$s0,%lo(g_MenuColourPalettes+0x1c)($s0)
/*  f0ecaa4:	90ed003d */ 	lbu	$t5,0x3d($a3)
.L0f0ecaa8:
/*  f0ecaa8:	2403003c */ 	addiu	$v1,$zero,0x3c
/*  f0ecaac:	90f9003c */ 	lbu	$t9,0x3c($a3)
/*  f0ecab0:	01a30019 */ 	multu	$t5,$v1
/*  f0ecab4:	3c027f1b */ 	lui	$v0,%hi(g_MenuColourPalettes)
/*  f0ecab8:	24421fb0 */ 	addiu	$v0,$v0,%lo(g_MenuColourPalettes)
/*  f0ecabc:	8ce60044 */ 	lw	$a2,0x44($a3)
/*  f0ecac0:	00007012 */ 	mflo	$t6
/*  f0ecac4:	004ec021 */ 	addu	$t8,$v0,$t6
/*  f0ecac8:	8f04001c */ 	lw	$a0,0x1c($t8)
/*  f0ecacc:	03230019 */ 	multu	$t9,$v1
/*  f0ecad0:	00004012 */ 	mflo	$t0
/*  f0ecad4:	00484821 */ 	addu	$t1,$v0,$t0
/*  f0ecad8:	0fc01a40 */ 	jal	colourBlend
/*  f0ecadc:	8d25001c */ 	lw	$a1,0x1c($t1)
/*  f0ecae0:	00408025 */ 	or	$s0,$v0,$zero
/*  f0ecae4:	8e270010 */ 	lw	$a3,0x10($s1)
.L0f0ecae8:
/*  f0ecae8:	8cea000c */ 	lw	$t2,0xc($a3)
/*  f0ecaec:	02002025 */ 	or	$a0,$s0,$zero
/*  f0ecaf0:	00002825 */ 	or	$a1,$zero,$zero
/*  f0ecaf4:	51400009 */ 	beqzl	$t2,.L0f0ecb1c
/*  f0ecaf8:	90e3003c */ 	lbu	$v1,0x3c($a3)
/*  f0ecafc:	0fc01a40 */ 	jal	colourBlend
/*  f0ecb00:	2406007f */ 	addiu	$a2,$zero,0x7f
/*  f0ecb04:	2401ff00 */ 	addiu	$at,$zero,-256
/*  f0ecb08:	00415824 */ 	and	$t3,$v0,$at
/*  f0ecb0c:	320f00ff */ 	andi	$t7,$s0,0xff
/*  f0ecb10:	016f8025 */ 	or	$s0,$t3,$t7
/*  f0ecb14:	8e270010 */ 	lw	$a3,0x10($s1)
/*  f0ecb18:	90e3003c */ 	lbu	$v1,0x3c($a3)
.L0f0ecb1c:
/*  f0ecb1c:	3c047f1b */ 	lui	$a0,%hi(g_MenuColourPalettes3+0x1c)
/*  f0ecb20:	3c057f1b */ 	lui	$a1,%hi(g_MenuColourPalettes2+0x1c)
/*  f0ecb24:	00036100 */ 	sll	$t4,$v1,0x4
/*  f0ecb28:	01836023 */ 	subu	$t4,$t4,$v1
/*  f0ecb2c:	000c1880 */ 	sll	$v1,$t4,0x2
/*  f0ecb30:	00832021 */ 	addu	$a0,$a0,$v1
/*  f0ecb34:	00a32821 */ 	addu	$a1,$a1,$v1
/*  f0ecb38:	8ca52134 */ 	lw	$a1,%lo(g_MenuColourPalettes2+0x1c)($a1)
/*  f0ecb3c:	0fc54f8e */ 	jal	func0f153e38
/*  f0ecb40:	8c84229c */ 	lw	$a0,%lo(g_MenuColourPalettes3+0x1c)($a0)
/*  f0ecb44:	3c0d7f00 */ 	lui	$t5,0x7f00
/*  f0ecb48:	35ad2faf */ 	ori	$t5,$t5,0x2faf
/*  f0ecb4c:	afad005c */ 	sw	$t5,0x5c($sp)
/*  f0ecb50:	862e0000 */ 	lh	$t6,0x0($s1)
.L0f0ecb54:
/*  f0ecb54:	86380004 */ 	lh	$t8,0x4($s1)
/*  f0ecb58:	86260002 */ 	lh	$a2,0x2($s1)
/*  f0ecb5c:	8fb90060 */ 	lw	$t9,0x60($sp)
/*  f0ecb60:	8fa8005c */ 	lw	$t0,0x5c($sp)
/*  f0ecb64:	01d82821 */ 	addu	$a1,$t6,$t8
/*  f0ecb68:	24a5fff0 */ 	addiu	$a1,$a1,-16
/*  f0ecb6c:	afb00014 */ 	sw	$s0,0x14($sp)
/*  f0ecb70:	8fa40078 */ 	lw	$a0,0x78($sp)
/*  f0ecb74:	24070006 */ 	addiu	$a3,$zero,0x6
/*  f0ecb78:	24c60002 */ 	addiu	$a2,$a2,0x2
/*  f0ecb7c:	afb90010 */ 	sw	$t9,0x10($sp)
/*  f0ecb80:	0fc38dec */ 	jal	renderCheckbox
/*  f0ecb84:	afa80018 */ 	sw	$t0,0x18($sp)
/*  f0ecb88:	86290000 */ 	lh	$t1,0x0($s1)
/*  f0ecb8c:	8fac0054 */ 	lw	$t4,0x54($sp)
/*  f0ecb90:	8fad0058 */ 	lw	$t5,0x58($sp)
/*  f0ecb94:	252a000a */ 	addiu	$t2,$t1,0xa
/*  f0ecb98:	afaa006c */ 	sw	$t2,0x6c($sp)
/*  f0ecb9c:	862b0002 */ 	lh	$t3,0x2($s1)
/*  f0ecba0:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f0ecba4:	afac0010 */ 	sw	$t4,0x10($sp)
/*  f0ecba8:	256f0002 */ 	addiu	$t7,$t3,0x2
/*  f0ecbac:	afaf0068 */ 	sw	$t7,0x68($sp)
/*  f0ecbb0:	afad0014 */ 	sw	$t5,0x14($sp)
/*  f0ecbb4:	862e0004 */ 	lh	$t6,0x4($s1)
/*  f0ecbb8:	00402025 */ 	or	$a0,$v0,$zero
/*  f0ecbbc:	27a5006c */ 	addiu	$a1,$sp,0x6c
/*  f0ecbc0:	afae001c */ 	sw	$t6,0x1c($sp)
/*  f0ecbc4:	86380006 */ 	lh	$t8,0x6($s1)
/*  f0ecbc8:	afa00028 */ 	sw	$zero,0x28($sp)
/*  f0ecbcc:	afa00024 */ 	sw	$zero,0x24($sp)
/*  f0ecbd0:	27a60068 */ 	addiu	$a2,$sp,0x68
/*  f0ecbd4:	8fa70070 */ 	lw	$a3,0x70($sp)
/*  f0ecbd8:	0fc5580f */ 	jal	textRenderWhite
/*  f0ecbdc:	afb80020 */ 	sw	$t8,0x20($sp)
/*  f0ecbe0:	0fc54de0 */ 	jal	func0f153780
/*  f0ecbe4:	00402025 */ 	or	$a0,$v0,$zero
/*  f0ecbe8:	8fbf003c */ 	lw	$ra,0x3c($sp)
/*  f0ecbec:	8fb00034 */ 	lw	$s0,0x34($sp)
/*  f0ecbf0:	8fb10038 */ 	lw	$s1,0x38($sp)
/*  f0ecbf4:	03e00008 */ 	jr	$ra
/*  f0ecbf8:	27bd0078 */ 	addiu	$sp,$sp,0x78
);

//Gfx *menuRenderItemCheckbox(Gfx *gdl, struct menurenderthing *thing)
//{
//	u32 maincolour = 0x00000000;
//	char *text;
//	s32 x;
//	s32 y;
//	u8 data[3];
//	bool checked = false;
//	u32 fillcolour = 0xff002faf;
//	u32 font2 = var8007fb0c;
//	u32 font1 = var8007fb10;
//
//	if (thing->item->param1 & 0x00000200) {
//		font2 = var8007fb04;
//		font1 = var8007fb08;
//	}
//
//	x = thing->x;
//	y = thing->y;
//	text = menuResolveParam2Text(thing->item);
//	data[0] = 0;
//
//	if (thing->item->handler
//			&& thing->item->handler(MENUOP_GET, thing->item, (union handlerdata *)data) == true) {
//		checked = true;
//
//		if (thing->frame->transitiontimer < 0) {
//			maincolour = g_MenuColourPalettes[thing->frame->type].checkedunfocused;
//		} else {
//			maincolour = colourBlend(
//					g_MenuColourPalettes[thing->frame->type2].checkedunfocused,
//					g_MenuColourPalettes[thing->frame->type].checkedunfocused,
//					thing->frame->colourweight);
//		}
//
//		if (thing->frame->dimmed) {
//			maincolour = colourBlend(maincolour, 0, 127) & 0xffffff00 | maincolour & 0xff;
//		}
//
//		func0f153e38(
//				g_MenuColourPalettes3[thing->frame->type].checkedunfocused,
//				g_MenuColourPalettes2[thing->frame->type].checkedunfocused);
//	} else {
//		if (thing->frame->transitiontimer < 0) {
//			maincolour = g_MenuColourPalettes[thing->frame->type].unfocused;
//		} else {
//			maincolour = colourBlend(
//					g_MenuColourPalettes[thing->frame->type2].unfocused,
//					g_MenuColourPalettes[thing->frame->type].unfocused,
//					thing->frame->colourweight);
//		}
//
//		if (thing->frame->dimmed) {
//			maincolour = colourBlend(maincolour, 0, 127) & 0xffffff00 | maincolour & 0xff;
//		}
//
//		func0f153e38(
//				g_MenuColourPalettes3[thing->frame->type].unfocused,
//				g_MenuColourPalettes2[thing->frame->type].unfocused);
//	}
//
//	gdl = func0f153628(gdl);
//
//	if (thing->focused) {
//		// Mismatch: The addiu and lui at ec8fc and ec900 are swapped. The addiu
//		// is adding the lower half of the address of g_MenuColourPalettes for
//		// use in the else branch. The lui is loading a value into $at for the
//		// float to u32 conversion for weight.
//		u32 focuscolour;
//		u32 weight = func0f006b08(40) * 255;
//
//		if (thing->frame->transitiontimer < 0) {
//			focuscolour = g_MenuColourPalettes[thing->frame->type].focused;
//		} else {
//			focuscolour = colourBlend(
//					g_MenuColourPalettes[thing->frame->type2].focused,
//					g_MenuColourPalettes[thing->frame->type].focused,
//					thing->frame->colourweight);
//		}
//
//		maincolour = colourBlend(colourBlend(maincolour, maincolour & 0xff, 127), focuscolour, weight);
//
//		func0f153e38(
//				g_MenuColourPalettes3[thing->frame->type].focused,
//				g_MenuColourPalettes2[thing->frame->type].focused);
//	}
//
//	if (menuIsItemDisabled(thing->item, thing->frame)) {
//		if (thing->frame->transitiontimer < 0) {
//			maincolour = g_MenuColourPalettes[thing->frame->type].disabled;
//		} else {
//			maincolour = colourBlend(
//					g_MenuColourPalettes[thing->frame->type2].disabled,
//					g_MenuColourPalettes[thing->frame->type].disabled,
//					thing->frame->colourweight);
//		}
//
//		if (thing->frame->dimmed) {
//			maincolour = colourBlend(maincolour, 0, 127) & 0xffffff00 | maincolour & 0xff;
//		}
//
//		func0f153e38(
//				g_MenuColourPalettes3[thing->frame->type].disabled,
//				g_MenuColourPalettes2[thing->frame->type].disabled);
//
//		fillcolour = 0x7f002faf;
//	}
//
//	gdl = renderCheckbox(gdl, thing->x + thing->width - 16, thing->y + 2, 6,
//			checked, maincolour, fillcolour);
//
//	x = thing->x + 10;
//	y = thing->y + 2;
//	gdl = textRenderWhite(gdl, &x, &y, text, font1, font2,
//			maincolour, thing->width, thing->height, 0, 0);
//
//	return func0f153780(gdl);
//}

bool menuTickItemCheckbox(struct menuitem *item, struct menuinputs *inputs, u32 arg2)
{
	union handlerdata data;

	if ((arg2 & 2) && inputs->select) {
		if (item->handler && item->handler(MENUOP_GET, item, &data) == 1) {
			data.checkbox.value = 0;
			menuPlaySound(MENUSOUND_TOGGLEOFF);
		} else {
			data.checkbox.value = 1;
			menuPlaySound(MENUSOUND_TOGGLEON);
		}

		if (item->handler) {
			item->handler(MENUOP_SET, item, &data);
		}
	}

	return true;
}

char *menuItemScrollableGetText(u32 type)
{
	switch (type) {
	case DESCRIPTION_MPCONFIG:
		return mpconfigGetDescription(g_Menus[g_MpPlayerNum].data.train.mpconfig);
	case DESCRIPTION_MPCHALLENGE:
		if (!mpIsChallengeLoaded()) {
			g_Menus[g_MpPlayerNum].unk850 = 0x4fac5ace;
			mpLoadAndStoreCurrentChallenge(g_Menus[g_MpPlayerNum].mpconfigbuffer, g_Menus[g_MpPlayerNum].mpconfigbufferlen);
		}
		return mpGetCurrentChallengeDescription();
	case DESCRIPTION_CHRBIO:         return ciGetChrBioDescription();
	case DESCRIPTION_MISCBIO:        return ciGetMiscBioDescription();
	case DESCRIPTION_DEVICETRAINING: return dtGetDescription();
	case DESCRIPTION_FRWEAPON:       return frGetWeaponDescription();
	case DESCRIPTION_HANGARBIO:      return ciGetHangarBioDescription();
	case DESCRIPTION_HOLOTRAINING:   return htGetDescription();
	case DESCRIPTION_HOLOTIP1:       return htGetTip1();
	case DESCRIPTION_HOLOTIP2:       return htGetTip2();
	case DESCRIPTION_DEVICETIP1:     return dtGetTip1();
	case DESCRIPTION_DEVICETIP2:     return dtGetTip2();
	}

	return langGet(g_Briefing.objectivenames[0]);
}

/**
 * Render a scrollable menu item, such as briefing paragraphs and challenge
 * descriptions.
 *
 * The text returned from menuItemScrollableGetText is first wrapped to fit the
 * width of the dialog. It is then separated into two strings:
 *
 * headings - which are started with the pipe character and ended with a
 * double line break
 * body text - which is anything else
 *
 * Headings are rendered in red, with a dropshadow and are outdented.
 */
Gfx *menuRenderItemScrollable(Gfx *gdl, struct menurenderthing *thing)
{
	char alltext[8000] = "";
	char headingtext[8000];
	char bodytext[8000];
	bool prevwaslinebreak;
	char *streams[2];
	char *inptr;
	s32 inheading;
	s16 *unk14 = thing->unk14.s16;
	u32 colour;
	s32 x;
	s32 y;
	char *rawtext;
	s32 paddingright = 24;

	rawtext = menuItemScrollableGetText(thing->item->param);

	if (menuIsScrollableUnscrollable(thing->item)) {
		paddingright = 10;
	}

	if (rawtext) {
		textWrap(thing->width - paddingright, rawtext, alltext, var8007fb10, var8007fb0c);
	}

	inptr = alltext;
	streams[1] = headingtext;
	streams[0] = bodytext;
	inheading = 0;
	prevwaslinebreak = false;

	while (*inptr != '\0') {
		if (*inptr == '|') {
			// Pipe character - don't append it to either string,
			// but switch the active string to the heading one
			inheading = 1;
		} else if (*inptr == '\n') {
			// Copy line breaks to both strings
			*streams[0] = *inptr;
			streams[0]++;
			*streams[1] = *inptr;
			streams[1]++;

			if (prevwaslinebreak) {
				// Got two line breaks in a row, so switch the active string
				// back to the body one
				inheading = 0;
			}

			prevwaslinebreak = true;
		} else {
			// Append to whichever string is the active one
			prevwaslinebreak = false;
			*streams[inheading] = *inptr;
			streams[inheading]++;
		}

		inptr++;
	}

	*streams[0] = '\0';
	*streams[1] = '\0';

	x = thing->x + 2;
	y = thing->y + 2;

	if (thing->frame->transitiontimer < 0) {
		colour = g_MenuColourPalettes[thing->frame->type].unfocused;
	} else {
		colour = colourBlend(
				g_MenuColourPalettes[thing->frame->type2].unfocused,
				g_MenuColourPalettes[thing->frame->type].unfocused,
				thing->frame->colourweight);
	}

	if (thing->frame->dimmed) {
		colour = colourBlend(colour, 0, 0x7f) & 0xffffff00 | colour & 0xff;
	}

	func0f153e38(
			g_MenuColourPalettes3[thing->frame->type].unfocused,
			g_MenuColourPalettes2[thing->frame->type].unfocused);

	gdl = func0f153628(gdl);

	// Heading text shadow
	x = thing->x + 3;
	y = thing->y + 3;
	gdl = textRenderWhite(gdl, &x, &y, headingtext, var8007fb10, var8007fb0c,
			0x000000ff, thing->width - 4, thing->height - 4, -*unk14, 0);

	// Heading text (red)
	x = thing->x + 2;
	y = thing->y + 2;
	gdl = textRenderWhite(gdl, &x, &y, headingtext, var8007fb10, var8007fb0c,
			0xff4444ff, thing->width - 4, thing->height - 4, -*unk14, 0);

	// Body text
	x = menuIsScrollableUnscrollable(thing->item) ? thing->x + 5 : thing->x + 12;
	y = thing->y + 2;

	gdl = textRenderWhite(gdl, &x, &y, bodytext, var8007fb10, var8007fb0c,
			colour, thing->width - 4, thing->height - 1, -*unk14, 0);

	return func0f153780(gdl);
}

bool menuTickItemScrollable(struct menuitem *item, struct menuframe *frame, struct menuinputs *inputs, u32 arg3, union menuitemtickdata *data)
{
	u32 stack;

	if ((s16)frame->unk20 != data->scrollable.unk06) {
		char wrapped[8000] = "";
		char *rawtext;
		s32 width;
		s32 height;
		u32 index1;
		u32 index2;
		s16 wvalue;
		s16 hvalue;

		func0f0f2354(frame, item, &index1, &index2);

		wvalue = g_Menus[g_MpPlayerNum].unk660[index2][0];
		hvalue = g_Menus[g_MpPlayerNum].unk4fc[index1][0];

		if (menuIsScrollableUnscrollable(item)) {
			width = wvalue - 10;
		} else {
			width = wvalue - 24;
		}

		rawtext = menuItemScrollableGetText(item->param);

		if (rawtext) {
			textWrap(width, rawtext, wrapped, var8007fb10, var8007fb0c);
		}

		textMeasure(&height, &width, wrapped, var8007fb10, var8007fb0c, 0);

		data->scrollable.unk04 = height - hvalue + 5;

		if (data->scrollable.unk04 < -10) {
			data->scrollable.unk04 = -10;
		}

		data->scrollable.unk06 = frame->unk20;
	}

	if (menuIsScrollableUnscrollable(item)) {
		data->scrollable.unk00 = 0;
	} else if (arg3 & 2) {
		f32 floatval;
		s32 intval = 0;

		if (inputs->yaxis < 0) {
			floatval = -(f32)inputs->yaxis;
		} else {
			floatval = inputs->yaxis;
		}

		if (floatval > 20) {
			floatval = (floatval - 20) / 5;
			floatval *= g_Vars.diffframe60f;

			if (inputs->yaxis < 0) {
				intval = floatval;
			} else {
				intval = -(s32)floatval;
			}
		}

		intval += inputs->unk09 * 2 * g_Vars.diffframe60;
		data->scrollable.unk00 += intval;

		if (data->scrollable.unk00 < -10) {
			data->scrollable.unk00 = -10;
		}

		if (data->scrollable.unk00 > data->scrollable.unk04) {
			data->scrollable.unk00 = data->scrollable.unk04;
		}
	}

	return true;
}

void menuInitItemScrollable(union menuitemtickdata *data)
{
	data->scrollable.unk06 = -1;
	data->scrollable.unk00 = -10;
}

GLOBAL_ASM(
glabel menuRenderItemMarquee
/*  f0ed528:	27bdff78 */ 	addiu	$sp,$sp,-136
/*  f0ed52c:	afbf003c */ 	sw	$ra,0x3c($sp)
/*  f0ed530:	afb10038 */ 	sw	$s1,0x38($sp)
/*  f0ed534:	afb00034 */ 	sw	$s0,0x34($sp)
/*  f0ed538:	afa40088 */ 	sw	$a0,0x88($sp)
/*  f0ed53c:	8cae0014 */ 	lw	$t6,0x14($a1)
/*  f0ed540:	00a08825 */ 	or	$s1,$a1,$zero
/*  f0ed544:	afae0084 */ 	sw	$t6,0x84($sp)
/*  f0ed548:	0fc3c557 */ 	jal	menuResolveParam2Text
/*  f0ed54c:	8ca40008 */ 	lw	$a0,0x8($a1)
/*  f0ed550:	3c0f8007 */ 	lui	$t7,%hi(var800711ec)
/*  f0ed554:	3c188008 */ 	lui	$t8,%hi(var8007fb0c)
/*  f0ed558:	3c198008 */ 	lui	$t9,%hi(var8007fb10)
/*  f0ed55c:	95ef11ec */ 	lhu	$t7,%lo(var800711ec)($t7)
/*  f0ed560:	8f18fb0c */ 	lw	$t8,%lo(var8007fb0c)($t8)
/*  f0ed564:	8f39fb10 */ 	lw	$t9,%lo(var8007fb10)($t9)
/*  f0ed568:	afa20080 */ 	sw	$v0,0x80($sp)
/*  f0ed56c:	afa00070 */ 	sw	$zero,0x70($sp)
/*  f0ed570:	a7af0064 */ 	sh	$t7,0x64($sp)
/*  f0ed574:	afb8005c */ 	sw	$t8,0x5c($sp)
/*  f0ed578:	afb90058 */ 	sw	$t9,0x58($sp)
/*  f0ed57c:	8e280008 */ 	lw	$t0,0x8($s1)
/*  f0ed580:	3c0b8008 */ 	lui	$t3,%hi(var8007fb04)
/*  f0ed584:	3c0c8008 */ 	lui	$t4,%hi(var8007fb08)
/*  f0ed588:	8d090004 */ 	lw	$t1,0x4($t0)
/*  f0ed58c:	312a0200 */ 	andi	$t2,$t1,0x200
/*  f0ed590:	11400005 */ 	beqz	$t2,.L0f0ed5a8
/*  f0ed594:	00000000 */ 	nop
/*  f0ed598:	8d6bfb04 */ 	lw	$t3,%lo(var8007fb04)($t3)
/*  f0ed59c:	8d8cfb08 */ 	lw	$t4,%lo(var8007fb08)($t4)
/*  f0ed5a0:	afab005c */ 	sw	$t3,0x5c($sp)
/*  f0ed5a4:	afac0058 */ 	sw	$t4,0x58($sp)
.L0f0ed5a8:
/*  f0ed5a8:	54400004 */ 	bnezl	$v0,.L0f0ed5bc
/*  f0ed5ac:	8e230010 */ 	lw	$v1,0x10($s1)
/*  f0ed5b0:	1000011b */ 	b	.L0f0eda20
/*  f0ed5b4:	8fa20088 */ 	lw	$v0,0x88($sp)
/*  f0ed5b8:	8e230010 */ 	lw	$v1,0x10($s1)
.L0f0ed5bc:
/*  f0ed5bc:	44803000 */ 	mtc1	$zero,$f6
/*  f0ed5c0:	c4640040 */ 	lwc1	$f4,0x40($v1)
/*  f0ed5c4:	4606203c */ 	c.lt.s	$f4,$f6
/*  f0ed5c8:	00000000 */ 	nop
/*  f0ed5cc:	4502000c */ 	bc1fl	.L0f0ed600
/*  f0ed5d0:	9079003d */ 	lbu	$t9,0x3d($v1)
/*  f0ed5d4:	906d003c */ 	lbu	$t5,0x3c($v1)
/*  f0ed5d8:	2407003c */ 	addiu	$a3,$zero,0x3c
/*  f0ed5dc:	3c027f1b */ 	lui	$v0,%hi(g_MenuColourPalettes)
/*  f0ed5e0:	01a70019 */ 	multu	$t5,$a3
/*  f0ed5e4:	24421fb0 */ 	addiu	$v0,$v0,%lo(g_MenuColourPalettes)
/*  f0ed5e8:	00007012 */ 	mflo	$t6
/*  f0ed5ec:	004e7821 */ 	addu	$t7,$v0,$t6
/*  f0ed5f0:	8df80018 */ 	lw	$t8,0x18($t7)
/*  f0ed5f4:	10000012 */ 	b	.L0f0ed640
/*  f0ed5f8:	afb80074 */ 	sw	$t8,0x74($sp)
/*  f0ed5fc:	9079003d */ 	lbu	$t9,0x3d($v1)
.L0f0ed600:
/*  f0ed600:	2407003c */ 	addiu	$a3,$zero,0x3c
/*  f0ed604:	906a003c */ 	lbu	$t2,0x3c($v1)
/*  f0ed608:	03270019 */ 	multu	$t9,$a3
/*  f0ed60c:	3c027f1b */ 	lui	$v0,%hi(g_MenuColourPalettes)
/*  f0ed610:	24421fb0 */ 	addiu	$v0,$v0,%lo(g_MenuColourPalettes)
/*  f0ed614:	8c660044 */ 	lw	$a2,0x44($v1)
/*  f0ed618:	00004012 */ 	mflo	$t0
/*  f0ed61c:	00484821 */ 	addu	$t1,$v0,$t0
/*  f0ed620:	8d240018 */ 	lw	$a0,0x18($t1)
/*  f0ed624:	01470019 */ 	multu	$t2,$a3
/*  f0ed628:	00005812 */ 	mflo	$t3
/*  f0ed62c:	004b6021 */ 	addu	$t4,$v0,$t3
/*  f0ed630:	0fc01a40 */ 	jal	colourBlend
/*  f0ed634:	8d850018 */ 	lw	$a1,0x18($t4)
/*  f0ed638:	afa20074 */ 	sw	$v0,0x74($sp)
/*  f0ed63c:	8e230010 */ 	lw	$v1,0x10($s1)
.L0f0ed640:
/*  f0ed640:	8c6d000c */ 	lw	$t5,0xc($v1)
/*  f0ed644:	51a0000c */ 	beqzl	$t5,.L0f0ed678
/*  f0ed648:	8fab0084 */ 	lw	$t3,0x84($sp)
/*  f0ed64c:	8fa40074 */ 	lw	$a0,0x74($sp)
/*  f0ed650:	00002825 */ 	or	$a1,$zero,$zero
/*  f0ed654:	0fc01a40 */ 	jal	colourBlend
/*  f0ed658:	2406007f */ 	addiu	$a2,$zero,0x7f
/*  f0ed65c:	8faf0074 */ 	lw	$t7,0x74($sp)
/*  f0ed660:	2401ff00 */ 	addiu	$at,$zero,-256
/*  f0ed664:	00417024 */ 	and	$t6,$v0,$at
/*  f0ed668:	31f800ff */ 	andi	$t8,$t7,0xff
/*  f0ed66c:	01d8c825 */ 	or	$t9,$t6,$t8
/*  f0ed670:	afb90074 */ 	sw	$t9,0x74($sp)
/*  f0ed674:	8fab0084 */ 	lw	$t3,0x84($sp)
.L0f0ed678:
/*  f0ed678:	86280000 */ 	lh	$t0,0x0($s1)
/*  f0ed67c:	86290004 */ 	lh	$t1,0x4($s1)
/*  f0ed680:	956c0000 */ 	lhu	$t4,0x0($t3)
/*  f0ed684:	8fb80080 */ 	lw	$t8,0x80($sp)
/*  f0ed688:	01095021 */ 	addu	$t2,$t0,$t1
/*  f0ed68c:	014c6823 */ 	subu	$t5,$t2,$t4
/*  f0ed690:	afad007c */ 	sw	$t5,0x7c($sp)
/*  f0ed694:	862f0002 */ 	lh	$t7,0x2($s1)
/*  f0ed698:	8fb90070 */ 	lw	$t9,0x70($sp)
/*  f0ed69c:	25ee0002 */ 	addiu	$t6,$t7,0x2
/*  f0ed6a0:	afae0078 */ 	sw	$t6,0x78($sp)
/*  f0ed6a4:	03198021 */ 	addu	$s0,$t8,$t9
/*  f0ed6a8:	92020000 */ 	lbu	$v0,0x0($s0)
.L0f0ed6ac:
/*  f0ed6ac:	27a40068 */ 	addiu	$a0,$sp,0x68
/*  f0ed6b0:	27a5006c */ 	addiu	$a1,$sp,0x6c
/*  f0ed6b4:	14400003 */ 	bnez	$v0,.L0f0ed6c4
/*  f0ed6b8:	27a60064 */ 	addiu	$a2,$sp,0x64
/*  f0ed6bc:	10000013 */ 	b	.L0f0ed70c
/*  f0ed6c0:	00001025 */ 	or	$v0,$zero,$zero
.L0f0ed6c4:
/*  f0ed6c4:	8fa8005c */ 	lw	$t0,0x5c($sp)
/*  f0ed6c8:	a3a20064 */ 	sb	$v0,0x64($sp)
/*  f0ed6cc:	8fa70058 */ 	lw	$a3,0x58($sp)
/*  f0ed6d0:	afa00014 */ 	sw	$zero,0x14($sp)
/*  f0ed6d4:	0fc55cbe */ 	jal	textMeasure
/*  f0ed6d8:	afa80010 */ 	sw	$t0,0x10($sp)
/*  f0ed6dc:	8fa9007c */ 	lw	$t1,0x7c($sp)
/*  f0ed6e0:	8fab006c */ 	lw	$t3,0x6c($sp)
/*  f0ed6e4:	862a0000 */ 	lh	$t2,0x0($s1)
/*  f0ed6e8:	24020001 */ 	addiu	$v0,$zero,0x1
/*  f0ed6ec:	012b1821 */ 	addu	$v1,$t1,$t3
/*  f0ed6f0:	0143082a */ 	slt	$at,$t2,$v1
/*  f0ed6f4:	50200004 */ 	beqzl	$at,.L0f0ed708
/*  f0ed6f8:	afa3007c */ 	sw	$v1,0x7c($sp)
/*  f0ed6fc:	10000003 */ 	b	.L0f0ed70c
/*  f0ed700:	00001025 */ 	or	$v0,$zero,$zero
/*  f0ed704:	afa3007c */ 	sw	$v1,0x7c($sp)
.L0f0ed708:
/*  f0ed708:	26100001 */ 	addiu	$s0,$s0,0x1
.L0f0ed70c:
/*  f0ed70c:	24010001 */ 	addiu	$at,$zero,0x1
/*  f0ed710:	5041ffe6 */ 	beql	$v0,$at,.L0f0ed6ac
/*  f0ed714:	92020000 */ 	lbu	$v0,0x0($s0)
/*  f0ed718:	3c028008 */ 	lui	$v0,%hi(g_ScreenWidthMultiplier)
/*  f0ed71c:	8c42fac0 */ 	lw	$v0,%lo(g_ScreenWidthMultiplier)($v0)
/*  f0ed720:	862c0000 */ 	lh	$t4,0x0($s1)
/*  f0ed724:	3c038007 */ 	lui	$v1,%hi(var80071190)
/*  f0ed728:	24631190 */ 	addiu	$v1,$v1,%lo(var80071190)
/*  f0ed72c:	01820019 */ 	multu	$t4,$v0
/*  f0ed730:	3c048007 */ 	lui	$a0,%hi(var80071194)
/*  f0ed734:	24841194 */ 	addiu	$a0,$a0,%lo(var80071194)
/*  f0ed738:	3c068007 */ 	lui	$a2,%hi(var80071198)
/*  f0ed73c:	24c61198 */ 	addiu	$a2,$a2,%lo(var80071198)
/*  f0ed740:	3c058007 */ 	lui	$a1,%hi(var8007119c)
/*  f0ed744:	24a5119c */ 	addiu	$a1,$a1,%lo(var8007119c)
/*  f0ed748:	00006812 */ 	mflo	$t5
/*  f0ed74c:	ac6d0000 */ 	sw	$t5,0x0($v1)
/*  f0ed750:	862e0004 */ 	lh	$t6,0x4($s1)
/*  f0ed754:	862f0000 */ 	lh	$t7,0x0($s1)
/*  f0ed758:	01eec021 */ 	addu	$t8,$t7,$t6
/*  f0ed75c:	03020019 */ 	multu	$t8,$v0
/*  f0ed760:	0000c812 */ 	mflo	$t9
/*  f0ed764:	ac990000 */ 	sw	$t9,0x0($a0)
/*  f0ed768:	86280002 */ 	lh	$t0,0x2($s1)
/*  f0ed76c:	acc80000 */ 	sw	$t0,0x0($a2)
/*  f0ed770:	862b0006 */ 	lh	$t3,0x6($s1)
/*  f0ed774:	86290002 */ 	lh	$t1,0x2($s1)
/*  f0ed778:	012b5021 */ 	addu	$t2,$t1,$t3
/*  f0ed77c:	254cffff */ 	addiu	$t4,$t2,-1
/*  f0ed780:	05a10002 */ 	bgez	$t5,.L0f0ed78c
/*  f0ed784:	acac0000 */ 	sw	$t4,0x0($a1)
/*  f0ed788:	ac600000 */ 	sw	$zero,0x0($v1)
.L0f0ed78c:
/*  f0ed78c:	8c8f0000 */ 	lw	$t7,0x0($a0)
/*  f0ed790:	05e30003 */ 	bgezl	$t7,.L0f0ed7a0
/*  f0ed794:	8cce0000 */ 	lw	$t6,0x0($a2)
/*  f0ed798:	ac800000 */ 	sw	$zero,0x0($a0)
/*  f0ed79c:	8cce0000 */ 	lw	$t6,0x0($a2)
.L0f0ed7a0:
/*  f0ed7a0:	05c30003 */ 	bgezl	$t6,.L0f0ed7b0
/*  f0ed7a4:	8cb80000 */ 	lw	$t8,0x0($a1)
/*  f0ed7a8:	acc00000 */ 	sw	$zero,0x0($a2)
/*  f0ed7ac:	8cb80000 */ 	lw	$t8,0x0($a1)
.L0f0ed7b0:
/*  f0ed7b0:	07010002 */ 	bgez	$t8,.L0f0ed7bc
/*  f0ed7b4:	00000000 */ 	nop
/*  f0ed7b8:	aca00000 */ 	sw	$zero,0x0($a1)
.L0f0ed7bc:
/*  f0ed7bc:	0c002ef1 */ 	jal	viGetBufX
/*  f0ed7c0:	00000000 */ 	nop
/*  f0ed7c4:	3c198007 */ 	lui	$t9,%hi(var80071190)
/*  f0ed7c8:	8f391190 */ 	lw	$t9,%lo(var80071190)($t9)
/*  f0ed7cc:	0059082a */ 	slt	$at,$v0,$t9
/*  f0ed7d0:	10200005 */ 	beqz	$at,.L0f0ed7e8
/*  f0ed7d4:	00000000 */ 	nop
/*  f0ed7d8:	0c002ef1 */ 	jal	viGetBufX
/*  f0ed7dc:	00000000 */ 	nop
/*  f0ed7e0:	3c018007 */ 	lui	$at,%hi(var80071190)
/*  f0ed7e4:	ac221190 */ 	sw	$v0,%lo(var80071190)($at)
.L0f0ed7e8:
/*  f0ed7e8:	0c002ef1 */ 	jal	viGetBufX
/*  f0ed7ec:	00000000 */ 	nop
/*  f0ed7f0:	3c088007 */ 	lui	$t0,%hi(var80071194)
/*  f0ed7f4:	8d081194 */ 	lw	$t0,%lo(var80071194)($t0)
/*  f0ed7f8:	0048082a */ 	slt	$at,$v0,$t0
/*  f0ed7fc:	10200005 */ 	beqz	$at,.L0f0ed814
/*  f0ed800:	00000000 */ 	nop
/*  f0ed804:	0c002ef1 */ 	jal	viGetBufX
/*  f0ed808:	00000000 */ 	nop
/*  f0ed80c:	3c018007 */ 	lui	$at,%hi(var80071194)
/*  f0ed810:	ac221194 */ 	sw	$v0,%lo(var80071194)($at)
.L0f0ed814:
/*  f0ed814:	0c002ef5 */ 	jal	viGetBufY
/*  f0ed818:	00000000 */ 	nop
/*  f0ed81c:	3c098007 */ 	lui	$t1,%hi(var80071198)
/*  f0ed820:	8d291198 */ 	lw	$t1,%lo(var80071198)($t1)
/*  f0ed824:	0049082a */ 	slt	$at,$v0,$t1
/*  f0ed828:	10200005 */ 	beqz	$at,.L0f0ed840
/*  f0ed82c:	00000000 */ 	nop
/*  f0ed830:	0c002ef5 */ 	jal	viGetBufY
/*  f0ed834:	00000000 */ 	nop
/*  f0ed838:	3c018007 */ 	lui	$at,%hi(var80071198)
/*  f0ed83c:	ac221198 */ 	sw	$v0,%lo(var80071198)($at)
.L0f0ed840:
/*  f0ed840:	0c002ef5 */ 	jal	viGetBufY
/*  f0ed844:	00000000 */ 	nop
/*  f0ed848:	3c068007 */ 	lui	$a2,%hi(var8007119c)
/*  f0ed84c:	24c6119c */ 	addiu	$a2,$a2,%lo(var8007119c)
/*  f0ed850:	8cc50000 */ 	lw	$a1,0x0($a2)
/*  f0ed854:	0045082a */ 	slt	$at,$v0,$a1
/*  f0ed858:	10200009 */ 	beqz	$at,.L0f0ed880
/*  f0ed85c:	00000000 */ 	nop
/*  f0ed860:	0c002ef5 */ 	jal	viGetBufY
/*  f0ed864:	00000000 */ 	nop
/*  f0ed868:	3c018007 */ 	lui	$at,%hi(var8007119c)
/*  f0ed86c:	ac22119c */ 	sw	$v0,%lo(var8007119c)($at)
/*  f0ed870:	3c058007 */ 	lui	$a1,%hi(var8007119c)
/*  f0ed874:	3c068007 */ 	lui	$a2,%hi(var8007119c)
/*  f0ed878:	24c6119c */ 	addiu	$a2,$a2,%lo(var8007119c)
/*  f0ed87c:	8ca5119c */ 	lw	$a1,%lo(var8007119c)($a1)
.L0f0ed880:
/*  f0ed880:	3c078007 */ 	lui	$a3,%hi(var80071194)
/*  f0ed884:	3c038007 */ 	lui	$v1,%hi(var80071190)
/*  f0ed888:	8c631190 */ 	lw	$v1,%lo(var80071190)($v1)
/*  f0ed88c:	24e71194 */ 	addiu	$a3,$a3,%lo(var80071194)
/*  f0ed890:	8ceb0000 */ 	lw	$t3,0x0($a3)
/*  f0ed894:	44834000 */ 	mtc1	$v1,$f8
/*  f0ed898:	3c048007 */ 	lui	$a0,%hi(var80071198)
/*  f0ed89c:	0163082a */ 	slt	$at,$t3,$v1
/*  f0ed8a0:	10200002 */ 	beqz	$at,.L0f0ed8ac
/*  f0ed8a4:	468042a0 */ 	cvt.s.w	$f10,$f8
/*  f0ed8a8:	ace30000 */ 	sw	$v1,0x0($a3)
.L0f0ed8ac:
/*  f0ed8ac:	8c841198 */ 	lw	$a0,%lo(var80071198)($a0)
/*  f0ed8b0:	00a4082a */ 	slt	$at,$a1,$a0
/*  f0ed8b4:	50200003 */ 	beqzl	$at,.L0f0ed8c4
/*  f0ed8b8:	44842000 */ 	mtc1	$a0,$f4
/*  f0ed8bc:	acc40000 */ 	sw	$a0,0x0($a2)
/*  f0ed8c0:	44842000 */ 	mtc1	$a0,$f4
.L0f0ed8c4:
/*  f0ed8c4:	3c014080 */ 	lui	$at,0x4080
/*  f0ed8c8:	44810000 */ 	mtc1	$at,$f0
/*  f0ed8cc:	468021a0 */ 	cvt.s.w	$f6,$f4
/*  f0ed8d0:	8fa20088 */ 	lw	$v0,0x88($sp)
/*  f0ed8d4:	46005402 */ 	mul.s	$f16,$f10,$f0
/*  f0ed8d8:	3c01ed00 */ 	lui	$at,0xed00
/*  f0ed8dc:	24450008 */ 	addiu	$a1,$v0,0x8
/*  f0ed8e0:	46003202 */ 	mul.s	$f8,$f6,$f0
/*  f0ed8e4:	4600848d */ 	trunc.w.s	$f18,$f16
/*  f0ed8e8:	4600428d */ 	trunc.w.s	$f10,$f8
/*  f0ed8ec:	440c9000 */ 	mfc1	$t4,$f18
/*  f0ed8f0:	44195000 */ 	mfc1	$t9,$f10
/*  f0ed8f4:	318d0fff */ 	andi	$t5,$t4,0xfff
/*  f0ed8f8:	000d7b00 */ 	sll	$t7,$t5,0xc
/*  f0ed8fc:	01e17025 */ 	or	$t6,$t7,$at
/*  f0ed900:	33280fff */ 	andi	$t0,$t9,0xfff
/*  f0ed904:	01c84825 */ 	or	$t1,$t6,$t0
/*  f0ed908:	ac490000 */ 	sw	$t1,0x0($v0)
/*  f0ed90c:	8ceb0000 */ 	lw	$t3,0x0($a3)
/*  f0ed910:	8cd80000 */ 	lw	$t8,0x0($a2)
/*  f0ed914:	448b8000 */ 	mtc1	$t3,$f16
/*  f0ed918:	44984000 */ 	mtc1	$t8,$f8
/*  f0ed91c:	468084a0 */ 	cvt.s.w	$f18,$f16
/*  f0ed920:	468042a0 */ 	cvt.s.w	$f10,$f8
/*  f0ed924:	46009102 */ 	mul.s	$f4,$f18,$f0
/*  f0ed928:	00000000 */ 	nop
/*  f0ed92c:	46005402 */ 	mul.s	$f16,$f10,$f0
/*  f0ed930:	4600218d */ 	trunc.w.s	$f6,$f4
/*  f0ed934:	4600848d */ 	trunc.w.s	$f18,$f16
/*  f0ed938:	440c3000 */ 	mfc1	$t4,$f6
/*  f0ed93c:	440e9000 */ 	mfc1	$t6,$f18
/*  f0ed940:	318d0fff */ 	andi	$t5,$t4,0xfff
/*  f0ed944:	000d7b00 */ 	sll	$t7,$t5,0xc
/*  f0ed948:	31c80fff */ 	andi	$t0,$t6,0xfff
/*  f0ed94c:	01e84825 */ 	or	$t1,$t7,$t0
/*  f0ed950:	ac490004 */ 	sw	$t1,0x4($v0)
/*  f0ed954:	0fc54f49 */ 	jal	func0f153d24
/*  f0ed958:	afa50088 */ 	sw	$a1,0x88($sp)
/*  f0ed95c:	8e2b0008 */ 	lw	$t3,0x8($s1)
/*  f0ed960:	8d6a0004 */ 	lw	$t2,0x4($t3)
/*  f0ed964:	314c0800 */ 	andi	$t4,$t2,0x800
/*  f0ed968:	51800009 */ 	beqzl	$t4,.L0f0ed990
/*  f0ed96c:	86240000 */ 	lh	$a0,0x0($s1)
/*  f0ed970:	86240000 */ 	lh	$a0,0x0($s1)
/*  f0ed974:	862d0004 */ 	lh	$t5,0x4($s1)
/*  f0ed978:	2406000e */ 	addiu	$a2,$zero,0xe
/*  f0ed97c:	0fc54f3a */ 	jal	func0f153ce8
/*  f0ed980:	008d2821 */ 	addu	$a1,$a0,$t5
/*  f0ed984:	10000005 */ 	b	.L0f0ed99c
/*  f0ed988:	00000000 */ 	nop
/*  f0ed98c:	86240000 */ 	lh	$a0,0x0($s1)
.L0f0ed990:
/*  f0ed990:	2406000e */ 	addiu	$a2,$zero,0xe
/*  f0ed994:	0fc54f3a */ 	jal	func0f153ce8
/*  f0ed998:	00802825 */ 	or	$a1,$a0,$zero
.L0f0ed99c:
/*  f0ed99c:	0fc54d8a */ 	jal	func0f153628
/*  f0ed9a0:	8fa40088 */ 	lw	$a0,0x88($sp)
/*  f0ed9a4:	8fb80058 */ 	lw	$t8,0x58($sp)
/*  f0ed9a8:	8fb9005c */ 	lw	$t9,0x5c($sp)
/*  f0ed9ac:	8fae0074 */ 	lw	$t6,0x74($sp)
/*  f0ed9b0:	afb80010 */ 	sw	$t8,0x10($sp)
/*  f0ed9b4:	afb90014 */ 	sw	$t9,0x14($sp)
/*  f0ed9b8:	afae0018 */ 	sw	$t6,0x18($sp)
/*  f0ed9bc:	86280000 */ 	lh	$t0,0x0($s1)
/*  f0ed9c0:	862f0004 */ 	lh	$t7,0x4($s1)
/*  f0ed9c4:	8fab007c */ 	lw	$t3,0x7c($sp)
/*  f0ed9c8:	00402025 */ 	or	$a0,$v0,$zero
/*  f0ed9cc:	01e84821 */ 	addu	$t1,$t7,$t0
/*  f0ed9d0:	012b5023 */ 	subu	$t2,$t1,$t3
/*  f0ed9d4:	afaa001c */ 	sw	$t2,0x1c($sp)
/*  f0ed9d8:	862c0006 */ 	lh	$t4,0x6($s1)
/*  f0ed9dc:	afa00028 */ 	sw	$zero,0x28($sp)
/*  f0ed9e0:	afa00024 */ 	sw	$zero,0x24($sp)
/*  f0ed9e4:	27a5007c */ 	addiu	$a1,$sp,0x7c
/*  f0ed9e8:	27a60078 */ 	addiu	$a2,$sp,0x78
/*  f0ed9ec:	02003825 */ 	or	$a3,$s0,$zero
/*  f0ed9f0:	0fc5580f */ 	jal	textRenderWhite
/*  f0ed9f4:	afac0020 */ 	sw	$t4,0x20($sp)
/*  f0ed9f8:	0fc54de0 */ 	jal	func0f153780
/*  f0ed9fc:	00402025 */ 	or	$a0,$v0,$zero
/*  f0eda00:	0fc3d43f */ 	jal	func0f0f50fc
/*  f0eda04:	00402025 */ 	or	$a0,$v0,$zero
/*  f0eda08:	0fc54f4f */ 	jal	func0f153d3c
/*  f0eda0c:	afa20088 */ 	sw	$v0,0x88($sp)
/*  f0eda10:	862d0004 */ 	lh	$t5,0x4($s1)
/*  f0eda14:	8fb80084 */ 	lw	$t8,0x84($sp)
/*  f0eda18:	a70d0004 */ 	sh	$t5,0x4($t8)
/*  f0eda1c:	8fa20088 */ 	lw	$v0,0x88($sp)
.L0f0eda20:
/*  f0eda20:	8fbf003c */ 	lw	$ra,0x3c($sp)
/*  f0eda24:	8fb00034 */ 	lw	$s0,0x34($sp)
/*  f0eda28:	8fb10038 */ 	lw	$s1,0x38($sp)
/*  f0eda2c:	03e00008 */ 	jr	$ra
/*  f0eda30:	27bd0088 */ 	addiu	$sp,$sp,0x88
);

u32 var800711ec = 0x20000000;

// Mismatch at 718
//Gfx *menuRenderItemMarquee(Gfx *gdl, struct menurenderthing *thing)
//{
//	u16 *unk14 = thing->unk14.u16; // 84
//	char *text = menuResolveParam2Text(thing->item); // 80
//	s32 x; // 7c
//	s32 y; // 78
//	u32 colour; // 74
//	s32 i = 0; // 70
//	s32 textwidth; // 6c
//	s32 textheight; // 68
//	char string[] = {' ', '\0'}; // 64 - var800711ec
//	s32 hasmore;
//	u32 font2 = var8007fb0c; // 5c
//	u32 font1 = var8007fb10; // 58
//
//	if (thing->item->param1 & 0x00000200) {
//		font2 = var8007fb04;
//		font1 = var8007fb08;
//	}
//
//	if (!text) {
//		return gdl;
//	}
//
//	// 5b8
//	if (thing->frame->transitiontimer < 0) {
//		colour = g_MenuColourPalettes[thing->frame->type].unfocused;
//	} else {
//		colour = colourBlend(
//				g_MenuColourPalettes[thing->frame->type2].unfocused,
//				g_MenuColourPalettes[thing->frame->type].unfocused,
//				thing->frame->colourweight);
//	}
//
//	// 644
//	if (thing->frame->dimmed) {
//		colour = colourBlend(colour, 0, 127) & 0xffffff00 | colour & 0xff;
//	}
//
//	// 674
//	x = thing->x + thing->width - *unk14;
//	y = thing->y + 2;
//	hasmore = true;
//
//	while (hasmore == true) {
//		if (text[i] == '\0') {
//			hasmore = false;
//		} else {
//			string[0] = text[i];
//			textMeasure(&textheight, &textwidth, string, font1, font2, 0);
//
//			if (x + textwidth > thing->x) {
//				hasmore = false;
//			} else {
//				x += textwidth;
//				hasmore = true;
//				i++;
//			}
//		}
//	}
//
//	// 718
//	// thing->x is loaded into a0 but should be t4. Additionally, the loads of
//	// thing->x and g_ScreenWidthMultiplier are swapped.
//	var80071190 = thing->x * g_ScreenWidthMultiplier;
//	var80071194 = (thing->x + thing->width) * g_ScreenWidthMultiplier;
//	var80071198 = thing->y;
//	var8007119c = thing->y + thing->height - 1;
//
//	if (var80071190 < 0) {
//		var80071190 = 0;
//	}
//
//	if (var80071194 < 0) {
//		var80071194 = 0;
//	}
//
//	if (var80071198 < 0) {
//		var80071198 = 0;
//	}
//
//	if (var8007119c < 0) {
//		var8007119c = 0;
//	}
//
//	if (var80071190 > viGetBufX()) {
//		var80071190 = viGetBufX();
//	}
//
//	if (var80071194 > viGetBufX()) {
//		var80071194 = viGetBufX();
//	}
//
//	if (var80071198 > viGetBufY()) {
//		var80071198 = viGetBufY();
//	}
//
//	if (var8007119c > viGetBufY()) {
//		var8007119c = viGetBufY();
//	}
//
//	if (var80071194 < var80071190) {
//		var80071194 = var80071190;
//	}
//
//	if (var8007119c < var80071198) {
//		var8007119c = var80071198;
//	}
//
//	gDPSetScissor(gdl++, G_SC_NON_INTERLACE, var80071190, var80071198, var80071194, var8007119c);
//
//	func0f153d24();
//
//	if (thing->item->param1 & 0x00000800) {
//		func0f153ce8(thing->x, thing->x + thing->width, 0xe);
//	} else {
//		func0f153ce8(thing->x, thing->x, 0xe);
//	}
//
//	gdl = func0f153628(gdl);
//	gdl = textRenderWhite(gdl, &x, &y, &text[i], font1, font2,
//			colour, thing->width + thing->x - x, thing->height, 0, 0);
//	gdl = func0f153780(gdl);
//	gdl = func0f0f50fc(gdl);
//
//	func0f153d3c();
//
//	unk14[2] = thing->width;
//
//	return gdl;
//}

u32 var800711f0 = 0x00000002;
u32 var800711f4 = 0x0000000c;
u32 var800711f8 = 0x0000000a;
u32 var800711fc = 0xffffffff;
u32 var80071200 = 0x00000003;
u32 var80071204 = 0x00000033;
u32 var80071208 = 0x0000000a;
u32 var8007120c = 0xffffffff;
u32 var80071210 = 0x00000003;
u32 var80071214 = 0x0000000c;
u32 var80071218 = 0x00000003;
u32 var8007121c = 0x0000004b;
u32 var80071220 = 0xffffffff;
u32 var80071224 = 0x00000037;
u32 var80071228 = 0x00000013;
u32 var8007122c = 0x00000040;
u32 var80071230 = 0xffffffff;
u32 var80071234 = 0x0000003f;
u32 var80071238 = 0x00000013;
u32 var8007123c = 0xffffffff;
u32 var80071240 = 0x0000000a;
u32 var80071244 = 0x0000003f;
u32 var80071248 = 0x0000000a;
u32 var8007124c = 0x0000004b;
u32 var80071250 = 0xffffffff;
u32 var80071254 = 0x00000033;
u32 var80071258 = 0x00000017;
u32 var8007125c = 0x00000037;
u32 var80071260 = 0xffffffff;
u32 var80071264 = 0x0000003b;
u32 var80071268 = 0x00000017;
u32 var8007126c = 0x00000044;
u32 var80071270 = 0xffffffff;
u32 var80071274 = 0x00000043;
u32 var80071278 = 0x00000017;
u32 var8007127c = 0xffffffff;
u32 var80071280 = 0x00000011;
u32 var80071284 = 0x00000043;
u32 var80071288 = 0x00000011;
u32 var8007128c = 0x0000004b;
u32 var80071290 = 0xffffffff;
u32 var80071294 = 0x00000037;
u32 var80071298 = 0x0000001b;
u32 var8007129c = 0x00000048;
u32 var800712a0 = 0xffffffff;
u32 var800712a4 = 0x00000047;
u32 var800712a8 = 0x0000001b;
u32 var800712ac = 0xffffffff;
u32 var800712b0 = 0x00000018;
u32 var800712b4 = 0x00000047;
u32 var800712b8 = 0x00000018;
u32 var800712bc = 0x0000004b;
u32 var800712c0 = 0xffffffff;
u32 var800712c4 = 0x00000031;
u32 var800712c8 = 0x0000001f;
u32 var800712cc = 0x0000004b;
u32 var800712d0 = 0xffffffff;
u32 var800712d4 = 0x0000002b;
u32 var800712d8 = 0x0000001c;
u32 var800712dc = 0xffffffff;
u32 var800712e0 = 0x00000026;
u32 var800712e4 = 0x0000002b;
u32 var800712e8 = 0x00000026;
u32 var800712ec = 0x0000004b;
u32 var800712f0 = 0xffffffff;
u32 var800712f4 = 0x0000001e;
u32 var800712f8 = 0x00000023;
u32 var800712fc = 0x00000025;
u32 var80071300 = 0xffffffff;
u32 var80071304 = 0x00000025;
u32 var80071308 = 0x00000023;
u32 var8007130c = 0xffffffff;
u32 var80071310 = 0x0000002d;
u32 var80071314 = 0x00000025;
u32 var80071318 = 0x0000002d;
u32 var8007131c = 0x0000004b;
u32 var80071320 = 0xffffffff;
u32 var80071324 = 0x00000022;
u32 var80071328 = 0x00000034;
u32 var8007132c = 0x0000004b;
u32 var80071330 = 0xffffffff;
u32 var80071334 = 0x0000000c;
u32 var80071338 = 0x0000001e;
u32 var8007133c = 0xffffffff;
u32 var80071340 = 0x0000003b;
u32 var80071344 = 0x0000000c;
u32 var80071348 = 0x0000003b;
u32 var8007134c = 0x0000004b;
u32 var80071350 = 0xffffffff;

bool menuTickItemMarquee(struct menuitem *item, union menuitemtickdata *data)
{
	s32 i;
	s32 textheight;
	s32 textwidth;
	u32 font1;
	u32 font2;
	s32 increment;
	u16 sum = 0;
	char *text = menuResolveParam2Text(item);
	s32 limit;

	font2 = var8007fb0c;
	font1 = var8007fb10;

	if (item->param1 & 0x00000200) {
		font2 = var8007fb04;
		font1 = var8007fb08;
	}

	if (!text) {
		return true;
	}

	i = 0;

	while (text[i] != '\0') {
		sum += text[i];
		i++;
	}

	if (data->marquee.sum != sum) {
		data->marquee.totalmoved = 0;
		data->marquee.sum = sum;
	}

	textMeasure(&textheight, &textwidth, text, font1, font2, 0);
	limit = data->marquee.unk04 + textwidth;
	increment = g_Vars.diffframe60 / 2;

	if (increment <= 0) {
		increment = 1;
	}

	data->marquee.totalmoved += increment;

	if (data->marquee.totalmoved > limit) {
		data->marquee.totalmoved = 0;
	}

	return true;
}

void menuInitItemMarquee(union menuitemtickdata *data)
{
	data->marquee.totalmoved = 0;
	data->marquee.unk04 = 50;
	data->marquee.unk06 = 0;
}

Gfx *menuRenderItem07(Gfx *gdl)
{
	return gdl;
}

const char var7f1b1e44[] = "%d\n";
const char var7f1b1e48[] = "%d\n";
const char var7f1b1e4c[] = "%d\n";
const char var7f1b1e50[] = "%d\n";
const char var7f1b1e54[] = "%d\n";

GLOBAL_ASM(
glabel menuRenderItemRanking
/*  f0edb6c:	27bdfe50 */ 	addiu	$sp,$sp,-432
/*  f0edb70:	afbf005c */ 	sw	$ra,0x5c($sp)
/*  f0edb74:	afbe0058 */ 	sw	$s8,0x58($sp)
/*  f0edb78:	afb70054 */ 	sw	$s7,0x54($sp)
/*  f0edb7c:	afb60050 */ 	sw	$s6,0x50($sp)
/*  f0edb80:	afb5004c */ 	sw	$s5,0x4c($sp)
/*  f0edb84:	afb40048 */ 	sw	$s4,0x48($sp)
/*  f0edb88:	afb30044 */ 	sw	$s3,0x44($sp)
/*  f0edb8c:	afb20040 */ 	sw	$s2,0x40($sp)
/*  f0edb90:	afb1003c */ 	sw	$s1,0x3c($sp)
/*  f0edb94:	afb00038 */ 	sw	$s0,0x38($sp)
/*  f0edb98:	afa401b0 */ 	sw	$a0,0x1b0($sp)
/*  f0edb9c:	afa000a0 */ 	sw	$zero,0xa0($sp)
/*  f0edba0:	8cae0014 */ 	lw	$t6,0x14($a1)
/*  f0edba4:	24010001 */ 	addiu	$at,$zero,0x1
/*  f0edba8:	00a0f025 */ 	or	$s8,$a1,$zero
/*  f0edbac:	afae0098 */ 	sw	$t6,0x98($sp)
/*  f0edbb0:	8caf0008 */ 	lw	$t7,0x8($a1)
/*  f0edbb4:	8df80008 */ 	lw	$t8,0x8($t7)
/*  f0edbb8:	17010006 */ 	bne	$t8,$at,.L0f0edbd4
/*  f0edbbc:	24190001 */ 	addiu	$t9,$zero,0x1
/*  f0edbc0:	afb900a0 */ 	sw	$t9,0xa0($sp)
/*  f0edbc4:	0fc622a1 */ 	jal	func0f188a84
/*  f0edbc8:	27a400c0 */ 	addiu	$a0,$sp,0xc0
/*  f0edbcc:	10000004 */ 	b	.L0f0edbe0
/*  f0edbd0:	afa200bc */ 	sw	$v0,0xbc($sp)
.L0f0edbd4:
/*  f0edbd4:	0fc62179 */ 	jal	func0f1885e4
/*  f0edbd8:	27a400c0 */ 	addiu	$a0,$sp,0xc0
/*  f0edbdc:	afa200bc */ 	sw	$v0,0xbc($sp)
.L0f0edbe0:
/*  f0edbe0:	0fc54d8a */ 	jal	func0f153628
/*  f0edbe4:	8fa401b0 */ 	lw	$a0,0x1b0($sp)
/*  f0edbe8:	8fa800bc */ 	lw	$t0,0xbc($sp)
/*  f0edbec:	afa201b0 */ 	sw	$v0,0x1b0($sp)
/*  f0edbf0:	87ca0006 */ 	lh	$t2,0x6($s8)
/*  f0edbf4:	00084880 */ 	sll	$t1,$t0,0x2
/*  f0edbf8:	01284821 */ 	addu	$t1,$t1,$t0
/*  f0edbfc:	00094840 */ 	sll	$t1,$t1,0x1
/*  f0edc00:	012a1823 */ 	subu	$v1,$t1,$t2
/*  f0edc04:	24630012 */ 	addiu	$v1,$v1,0x12
/*  f0edc08:	04610002 */ 	bgez	$v1,.L0f0edc14
/*  f0edc0c:	8fab0098 */ 	lw	$t3,0x98($sp)
/*  f0edc10:	00001825 */ 	or	$v1,$zero,$zero
.L0f0edc14:
/*  f0edc14:	856c0000 */ 	lh	$t4,0x0($t3)
/*  f0edc18:	006c082a */ 	slt	$at,$v1,$t4
/*  f0edc1c:	50200003 */ 	beqzl	$at,.L0f0edc2c
/*  f0edc20:	8fd10010 */ 	lw	$s1,0x10($s8)
/*  f0edc24:	a5630000 */ 	sh	$v1,0x0($t3)
/*  f0edc28:	8fd10010 */ 	lw	$s1,0x10($s8)
.L0f0edc2c:
/*  f0edc2c:	44803000 */ 	mtc1	$zero,$f6
/*  f0edc30:	c6240040 */ 	lwc1	$f4,0x40($s1)
/*  f0edc34:	4606203c */ 	c.lt.s	$f4,$f6
/*  f0edc38:	00000000 */ 	nop
/*  f0edc3c:	4502000b */ 	bc1fl	.L0f0edc6c
/*  f0edc40:	9238003d */ 	lbu	$t8,0x3d($s1)
/*  f0edc44:	922d003c */ 	lbu	$t5,0x3c($s1)
/*  f0edc48:	2414003c */ 	addiu	$s4,$zero,0x3c
/*  f0edc4c:	3c137f1b */ 	lui	$s3,%hi(g_MenuColourPalettes)
/*  f0edc50:	01b40019 */ 	multu	$t5,$s4
/*  f0edc54:	26731fb0 */ 	addiu	$s3,$s3,%lo(g_MenuColourPalettes)
/*  f0edc58:	00007012 */ 	mflo	$t6
/*  f0edc5c:	026e7821 */ 	addu	$t7,$s3,$t6
/*  f0edc60:	10000012 */ 	b	.L0f0edcac
/*  f0edc64:	8df00018 */ 	lw	$s0,0x18($t7)
/*  f0edc68:	9238003d */ 	lbu	$t8,0x3d($s1)
.L0f0edc6c:
/*  f0edc6c:	2414003c */ 	addiu	$s4,$zero,0x3c
/*  f0edc70:	9229003c */ 	lbu	$t1,0x3c($s1)
/*  f0edc74:	03140019 */ 	multu	$t8,$s4
/*  f0edc78:	3c137f1b */ 	lui	$s3,%hi(g_MenuColourPalettes)
/*  f0edc7c:	26731fb0 */ 	addiu	$s3,$s3,%lo(g_MenuColourPalettes)
/*  f0edc80:	8e260044 */ 	lw	$a2,0x44($s1)
/*  f0edc84:	0000c812 */ 	mflo	$t9
/*  f0edc88:	02794021 */ 	addu	$t0,$s3,$t9
/*  f0edc8c:	8d040018 */ 	lw	$a0,0x18($t0)
/*  f0edc90:	01340019 */ 	multu	$t1,$s4
/*  f0edc94:	00005012 */ 	mflo	$t2
/*  f0edc98:	026a6021 */ 	addu	$t4,$s3,$t2
/*  f0edc9c:	0fc01a40 */ 	jal	colourBlend
/*  f0edca0:	8d850018 */ 	lw	$a1,0x18($t4)
/*  f0edca4:	00408025 */ 	or	$s0,$v0,$zero
/*  f0edca8:	8fd10010 */ 	lw	$s1,0x10($s8)
.L0f0edcac:
/*  f0edcac:	8e2b000c */ 	lw	$t3,0xc($s1)
/*  f0edcb0:	11600008 */ 	beqz	$t3,.L0f0edcd4
/*  f0edcb4:	02002025 */ 	or	$a0,$s0,$zero
/*  f0edcb8:	00002825 */ 	or	$a1,$zero,$zero
/*  f0edcbc:	0fc01a40 */ 	jal	colourBlend
/*  f0edcc0:	2406007f */ 	addiu	$a2,$zero,0x7f
/*  f0edcc4:	2415ff00 */ 	addiu	$s5,$zero,-256
/*  f0edcc8:	00556824 */ 	and	$t5,$v0,$s5
/*  f0edccc:	320e00ff */ 	andi	$t6,$s0,0xff
/*  f0edcd0:	01ae8025 */ 	or	$s0,$t5,$t6
.L0f0edcd4:
/*  f0edcd4:	8faf00a0 */ 	lw	$t7,0xa0($sp)
/*  f0edcd8:	2415ff00 */ 	addiu	$s5,$zero,-256
/*  f0edcdc:	15e0002a */ 	bnez	$t7,.L0f0edd88
/*  f0edce0:	00000000 */ 	nop
/*  f0edce4:	0fc5b9f1 */ 	jal	langGet
/*  f0edce8:	24045115 */ 	addiu	$a0,$zero,0x5115
/*  f0edcec:	3c128008 */ 	lui	$s2,%hi(var8007fb04)
/*  f0edcf0:	2652fb04 */ 	addiu	$s2,$s2,%lo(var8007fb04)
/*  f0edcf4:	8e580000 */ 	lw	$t8,0x0($s2)
/*  f0edcf8:	3c118008 */ 	lui	$s1,%hi(var8007fb08)
/*  f0edcfc:	2631fb08 */ 	addiu	$s1,$s1,%lo(var8007fb08)
/*  f0edd00:	8e270000 */ 	lw	$a3,0x0($s1)
/*  f0edd04:	27a400a4 */ 	addiu	$a0,$sp,0xa4
/*  f0edd08:	27a500a8 */ 	addiu	$a1,$sp,0xa8
/*  f0edd0c:	00403025 */ 	or	$a2,$v0,$zero
/*  f0edd10:	afa00014 */ 	sw	$zero,0x14($sp)
/*  f0edd14:	0fc55cbe */ 	jal	textMeasure
/*  f0edd18:	afb80010 */ 	sw	$t8,0x10($sp)
/*  f0edd1c:	87d90000 */ 	lh	$t9,0x0($s8)
/*  f0edd20:	8fa800a8 */ 	lw	$t0,0xa8($sp)
/*  f0edd24:	24045115 */ 	addiu	$a0,$zero,0x5115
/*  f0edd28:	03284823 */ 	subu	$t1,$t9,$t0
/*  f0edd2c:	252a005b */ 	addiu	$t2,$t1,0x5b
/*  f0edd30:	afaa00b4 */ 	sw	$t2,0xb4($sp)
/*  f0edd34:	87cc0002 */ 	lh	$t4,0x2($s8)
/*  f0edd38:	258b0001 */ 	addiu	$t3,$t4,0x1
/*  f0edd3c:	0fc5b9f1 */ 	jal	langGet
/*  f0edd40:	afab00b0 */ 	sw	$t3,0xb0($sp)
/*  f0edd44:	8e2d0000 */ 	lw	$t5,0x0($s1)
/*  f0edd48:	8e4e0000 */ 	lw	$t6,0x0($s2)
/*  f0edd4c:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f0edd50:	afad0010 */ 	sw	$t5,0x10($sp)
/*  f0edd54:	afae0014 */ 	sw	$t6,0x14($sp)
/*  f0edd58:	87cf0004 */ 	lh	$t7,0x4($s8)
/*  f0edd5c:	8fa401b0 */ 	lw	$a0,0x1b0($sp)
/*  f0edd60:	27a500b4 */ 	addiu	$a1,$sp,0xb4
/*  f0edd64:	afaf001c */ 	sw	$t7,0x1c($sp)
/*  f0edd68:	87d80006 */ 	lh	$t8,0x6($s8)
/*  f0edd6c:	afa00028 */ 	sw	$zero,0x28($sp)
/*  f0edd70:	afa00024 */ 	sw	$zero,0x24($sp)
/*  f0edd74:	27a600b0 */ 	addiu	$a2,$sp,0xb0
/*  f0edd78:	00403825 */ 	or	$a3,$v0,$zero
/*  f0edd7c:	0fc5580f */ 	jal	textRenderWhite
/*  f0edd80:	afb80020 */ 	sw	$t8,0x20($sp)
/*  f0edd84:	afa201b0 */ 	sw	$v0,0x1b0($sp)
.L0f0edd88:
/*  f0edd88:	3c118008 */ 	lui	$s1,%hi(var8007fb08)
/*  f0edd8c:	3c128008 */ 	lui	$s2,%hi(var8007fb04)
/*  f0edd90:	2652fb04 */ 	addiu	$s2,$s2,%lo(var8007fb04)
/*  f0edd94:	2631fb08 */ 	addiu	$s1,$s1,%lo(var8007fb08)
/*  f0edd98:	0fc5b9f1 */ 	jal	langGet
/*  f0edd9c:	24045116 */ 	addiu	$a0,$zero,0x5116
/*  f0edda0:	8e590000 */ 	lw	$t9,0x0($s2)
/*  f0edda4:	27a400a4 */ 	addiu	$a0,$sp,0xa4
/*  f0edda8:	27a500a8 */ 	addiu	$a1,$sp,0xa8
/*  f0eddac:	00403025 */ 	or	$a2,$v0,$zero
/*  f0eddb0:	8e270000 */ 	lw	$a3,0x0($s1)
/*  f0eddb4:	afa00014 */ 	sw	$zero,0x14($sp)
/*  f0eddb8:	0fc55cbe */ 	jal	textMeasure
/*  f0eddbc:	afb90010 */ 	sw	$t9,0x10($sp)
/*  f0eddc0:	87c80000 */ 	lh	$t0,0x0($s8)
/*  f0eddc4:	8fa900a8 */ 	lw	$t1,0xa8($sp)
/*  f0eddc8:	24045116 */ 	addiu	$a0,$zero,0x5116
/*  f0eddcc:	01095023 */ 	subu	$t2,$t0,$t1
/*  f0eddd0:	254c0078 */ 	addiu	$t4,$t2,0x78
/*  f0eddd4:	afac00b4 */ 	sw	$t4,0xb4($sp)
/*  f0eddd8:	87cb0002 */ 	lh	$t3,0x2($s8)
/*  f0edddc:	256d0001 */ 	addiu	$t5,$t3,0x1
/*  f0edde0:	0fc5b9f1 */ 	jal	langGet
/*  f0edde4:	afad00b0 */ 	sw	$t5,0xb0($sp)
/*  f0edde8:	8e2e0000 */ 	lw	$t6,0x0($s1)
/*  f0eddec:	8e4f0000 */ 	lw	$t7,0x0($s2)
/*  f0eddf0:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f0eddf4:	afae0010 */ 	sw	$t6,0x10($sp)
/*  f0eddf8:	afaf0014 */ 	sw	$t7,0x14($sp)
/*  f0eddfc:	87d80004 */ 	lh	$t8,0x4($s8)
/*  f0ede00:	8fa401b0 */ 	lw	$a0,0x1b0($sp)
/*  f0ede04:	27a500b4 */ 	addiu	$a1,$sp,0xb4
/*  f0ede08:	afb8001c */ 	sw	$t8,0x1c($sp)
/*  f0ede0c:	87d90006 */ 	lh	$t9,0x6($s8)
/*  f0ede10:	afa00028 */ 	sw	$zero,0x28($sp)
/*  f0ede14:	afa00024 */ 	sw	$zero,0x24($sp)
/*  f0ede18:	27a600b0 */ 	addiu	$a2,$sp,0xb0
/*  f0ede1c:	00403825 */ 	or	$a3,$v0,$zero
/*  f0ede20:	0fc5580f */ 	jal	textRenderWhite
/*  f0ede24:	afb90020 */ 	sw	$t9,0x20($sp)
/*  f0ede28:	0fc54de0 */ 	jal	func0f153780
/*  f0ede2c:	00402025 */ 	or	$a0,$v0,$zero
/*  f0ede30:	afa201b0 */ 	sw	$v0,0x1b0($sp)
/*  f0ede34:	8fd00010 */ 	lw	$s0,0x10($s8)
/*  f0ede38:	44805000 */ 	mtc1	$zero,$f10
/*  f0ede3c:	c6080040 */ 	lwc1	$f8,0x40($s0)
/*  f0ede40:	460a403c */ 	c.lt.s	$f8,$f10
/*  f0ede44:	00000000 */ 	nop
/*  f0ede48:	45020008 */ 	bc1fl	.L0f0ede6c
/*  f0ede4c:	920c003d */ 	lbu	$t4,0x3d($s0)
/*  f0ede50:	9208003c */ 	lbu	$t0,0x3c($s0)
/*  f0ede54:	01140019 */ 	multu	$t0,$s4
/*  f0ede58:	00004812 */ 	mflo	$t1
/*  f0ede5c:	02695021 */ 	addu	$t2,$s3,$t1
/*  f0ede60:	1000000e */ 	b	.L0f0ede9c
/*  f0ede64:	8d520000 */ 	lw	$s2,0x0($t2)
/*  f0ede68:	920c003d */ 	lbu	$t4,0x3d($s0)
.L0f0ede6c:
/*  f0ede6c:	920e003c */ 	lbu	$t6,0x3c($s0)
/*  f0ede70:	8e060044 */ 	lw	$a2,0x44($s0)
/*  f0ede74:	01940019 */ 	multu	$t4,$s4
/*  f0ede78:	00005812 */ 	mflo	$t3
/*  f0ede7c:	026b6821 */ 	addu	$t5,$s3,$t3
/*  f0ede80:	8da40000 */ 	lw	$a0,0x0($t5)
/*  f0ede84:	01d40019 */ 	multu	$t6,$s4
/*  f0ede88:	00007812 */ 	mflo	$t7
/*  f0ede8c:	026fc021 */ 	addu	$t8,$s3,$t7
/*  f0ede90:	0fc01a40 */ 	jal	colourBlend
/*  f0ede94:	8f050000 */ 	lw	$a1,0x0($t8)
/*  f0ede98:	00409025 */ 	or	$s2,$v0,$zero
.L0f0ede9c:
/*  f0ede9c:	8e19000c */ 	lw	$t9,0xc($s0)
/*  f0edea0:	13200007 */ 	beqz	$t9,.L0f0edec0
/*  f0edea4:	02402025 */ 	or	$a0,$s2,$zero
/*  f0edea8:	00002825 */ 	or	$a1,$zero,$zero
/*  f0edeac:	0fc01a40 */ 	jal	colourBlend
/*  f0edeb0:	2406002c */ 	addiu	$a2,$zero,0x2c
/*  f0edeb4:	00554024 */ 	and	$t0,$v0,$s5
/*  f0edeb8:	324900ff */ 	andi	$t1,$s2,0xff
/*  f0edebc:	01099025 */ 	or	$s2,$t0,$t1
.L0f0edec0:
/*  f0edec0:	c6100040 */ 	lwc1	$f16,0x40($s0)
/*  f0edec4:	44809000 */ 	mtc1	$zero,$f18
/*  f0edec8:	920a003c */ 	lbu	$t2,0x3c($s0)
/*  f0edecc:	4612803c */ 	c.lt.s	$f16,$f18
/*  f0eded0:	000a6100 */ 	sll	$t4,$t2,0x4
/*  f0eded4:	018a6023 */ 	subu	$t4,$t4,$t2
/*  f0eded8:	000c6080 */ 	sll	$t4,$t4,0x2
/*  f0ededc:	45000004 */ 	bc1f	.L0f0edef0
/*  f0edee0:	026c1021 */ 	addu	$v0,$s3,$t4
/*  f0edee4:	8c510008 */ 	lw	$s1,0x8($v0)
/*  f0edee8:	1000000b */ 	b	.L0f0edf18
/*  f0edeec:	8e03000c */ 	lw	$v1,0xc($s0)
.L0f0edef0:
/*  f0edef0:	920b003d */ 	lbu	$t3,0x3d($s0)
/*  f0edef4:	8c450008 */ 	lw	$a1,0x8($v0)
/*  f0edef8:	8e060044 */ 	lw	$a2,0x44($s0)
/*  f0edefc:	01740019 */ 	multu	$t3,$s4
/*  f0edf00:	00006812 */ 	mflo	$t5
/*  f0edf04:	026d7021 */ 	addu	$t6,$s3,$t5
/*  f0edf08:	0fc01a40 */ 	jal	colourBlend
/*  f0edf0c:	8dc40008 */ 	lw	$a0,0x8($t6)
/*  f0edf10:	00408825 */ 	or	$s1,$v0,$zero
/*  f0edf14:	8e03000c */ 	lw	$v1,0xc($s0)
.L0f0edf18:
/*  f0edf18:	10600004 */ 	beqz	$v1,.L0f0edf2c
/*  f0edf1c:	02202025 */ 	or	$a0,$s1,$zero
/*  f0edf20:	00002825 */ 	or	$a1,$zero,$zero
/*  f0edf24:	0fc01a40 */ 	jal	colourBlend
/*  f0edf28:	2406002c */ 	addiu	$a2,$zero,0x2c
.L0f0edf2c:
/*  f0edf2c:	87c50002 */ 	lh	$a1,0x2($s8)
/*  f0edf30:	87c40000 */ 	lh	$a0,0x0($s8)
/*  f0edf34:	2406ff7f */ 	addiu	$a2,$zero,-129
/*  f0edf38:	0fc54fa5 */ 	jal	func0f153e94
/*  f0edf3c:	24a50002 */ 	addiu	$a1,$a1,0x2
/*  f0edf40:	87c90000 */ 	lh	$t1,0x0($s8)
/*  f0edf44:	87ca0004 */ 	lh	$t2,0x4($s8)
/*  f0edf48:	87c50002 */ 	lh	$a1,0x2($s8)
/*  f0edf4c:	305900ff */ 	andi	$t9,$v0,0xff
/*  f0edf50:	02554024 */ 	and	$t0,$s2,$s5
/*  f0edf54:	03289025 */ 	or	$s2,$t9,$t0
/*  f0edf58:	2406ff7f */ 	addiu	$a2,$zero,-129
/*  f0edf5c:	012a2021 */ 	addu	$a0,$t1,$t2
/*  f0edf60:	0fc54fa5 */ 	jal	func0f153e94
/*  f0edf64:	24a50002 */ 	addiu	$a1,$a1,0x2
/*  f0edf68:	87c30002 */ 	lh	$v1,0x2($s8)
/*  f0edf6c:	87c50000 */ 	lh	$a1,0x0($s8)
/*  f0edf70:	87cc0004 */ 	lh	$t4,0x4($s8)
/*  f0edf74:	246b000a */ 	addiu	$t3,$v1,0xa
/*  f0edf78:	afab0010 */ 	sw	$t3,0x10($sp)
/*  f0edf7c:	afb20018 */ 	sw	$s2,0x18($sp)
/*  f0edf80:	afb20014 */ 	sw	$s2,0x14($sp)
/*  f0edf84:	8fa401b0 */ 	lw	$a0,0x1b0($sp)
/*  f0edf88:	24660009 */ 	addiu	$a2,$v1,0x9
/*  f0edf8c:	0fc38bd7 */ 	jal	renderFilledRect
/*  f0edf90:	00ac3821 */ 	addu	$a3,$a1,$t4
/*  f0edf94:	244d0008 */ 	addiu	$t5,$v0,0x8
/*  f0edf98:	afad01b0 */ 	sw	$t5,0x1b0($sp)
/*  f0edf9c:	3c0ee700 */ 	lui	$t6,0xe700
/*  f0edfa0:	ac4e0000 */ 	sw	$t6,0x0($v0)
/*  f0edfa4:	ac400004 */ 	sw	$zero,0x4($v0)
/*  f0edfa8:	3c038008 */ 	lui	$v1,%hi(g_ScreenWidthMultiplier)
/*  f0edfac:	8c63fac0 */ 	lw	$v1,%lo(g_ScreenWidthMultiplier)($v1)
/*  f0edfb0:	87cf0000 */ 	lh	$t7,0x0($s8)
/*  f0edfb4:	3c128007 */ 	lui	$s2,%hi(var80071190)
/*  f0edfb8:	26521190 */ 	addiu	$s2,$s2,%lo(var80071190)
/*  f0edfbc:	01e30019 */ 	multu	$t7,$v1
/*  f0edfc0:	3c108007 */ 	lui	$s0,%hi(var80071194)
/*  f0edfc4:	26101194 */ 	addiu	$s0,$s0,%lo(var80071194)
/*  f0edfc8:	3c138007 */ 	lui	$s3,%hi(var80071198)
/*  f0edfcc:	26731198 */ 	addiu	$s3,$s3,%lo(var80071198)
/*  f0edfd0:	3c118007 */ 	lui	$s1,%hi(var8007119c)
/*  f0edfd4:	2631119c */ 	addiu	$s1,$s1,%lo(var8007119c)
/*  f0edfd8:	0000c012 */ 	mflo	$t8
/*  f0edfdc:	ae580000 */ 	sw	$t8,0x0($s2)
/*  f0edfe0:	87c80004 */ 	lh	$t0,0x4($s8)
/*  f0edfe4:	87d90000 */ 	lh	$t9,0x0($s8)
/*  f0edfe8:	03284821 */ 	addu	$t1,$t9,$t0
/*  f0edfec:	01230019 */ 	multu	$t1,$v1
/*  f0edff0:	8e590000 */ 	lw	$t9,0x0($s2)
/*  f0edff4:	00005012 */ 	mflo	$t2
/*  f0edff8:	ae0a0000 */ 	sw	$t2,0x0($s0)
/*  f0edffc:	87cc0002 */ 	lh	$t4,0x2($s8)
/*  f0ee000:	258b000a */ 	addiu	$t3,$t4,0xa
/*  f0ee004:	ae6b0000 */ 	sw	$t3,0x0($s3)
/*  f0ee008:	87ce0006 */ 	lh	$t6,0x6($s8)
/*  f0ee00c:	87cd0002 */ 	lh	$t5,0x2($s8)
/*  f0ee010:	01ae7821 */ 	addu	$t7,$t5,$t6
/*  f0ee014:	25f8ffff */ 	addiu	$t8,$t7,-1
/*  f0ee018:	07210002 */ 	bgez	$t9,.L0f0ee024
/*  f0ee01c:	ae380000 */ 	sw	$t8,0x0($s1)
/*  f0ee020:	ae400000 */ 	sw	$zero,0x0($s2)
.L0f0ee024:
/*  f0ee024:	8e080000 */ 	lw	$t0,0x0($s0)
/*  f0ee028:	05030003 */ 	bgezl	$t0,.L0f0ee038
/*  f0ee02c:	8e690000 */ 	lw	$t1,0x0($s3)
/*  f0ee030:	ae000000 */ 	sw	$zero,0x0($s0)
/*  f0ee034:	8e690000 */ 	lw	$t1,0x0($s3)
.L0f0ee038:
/*  f0ee038:	05230003 */ 	bgezl	$t1,.L0f0ee048
/*  f0ee03c:	8e2a0000 */ 	lw	$t2,0x0($s1)
/*  f0ee040:	ae600000 */ 	sw	$zero,0x0($s3)
/*  f0ee044:	8e2a0000 */ 	lw	$t2,0x0($s1)
.L0f0ee048:
/*  f0ee048:	05410002 */ 	bgez	$t2,.L0f0ee054
/*  f0ee04c:	00000000 */ 	nop
/*  f0ee050:	ae200000 */ 	sw	$zero,0x0($s1)
.L0f0ee054:
/*  f0ee054:	0c002ef1 */ 	jal	viGetBufX
/*  f0ee058:	00000000 */ 	nop
/*  f0ee05c:	8e4c0000 */ 	lw	$t4,0x0($s2)
/*  f0ee060:	004c082a */ 	slt	$at,$v0,$t4
/*  f0ee064:	10200004 */ 	beqz	$at,.L0f0ee078
/*  f0ee068:	00000000 */ 	nop
/*  f0ee06c:	0c002ef1 */ 	jal	viGetBufX
/*  f0ee070:	00000000 */ 	nop
/*  f0ee074:	ae420000 */ 	sw	$v0,0x0($s2)
.L0f0ee078:
/*  f0ee078:	0c002ef1 */ 	jal	viGetBufX
/*  f0ee07c:	00000000 */ 	nop
/*  f0ee080:	8e0b0000 */ 	lw	$t3,0x0($s0)
/*  f0ee084:	004b082a */ 	slt	$at,$v0,$t3
/*  f0ee088:	10200004 */ 	beqz	$at,.L0f0ee09c
/*  f0ee08c:	00000000 */ 	nop
/*  f0ee090:	0c002ef1 */ 	jal	viGetBufX
/*  f0ee094:	00000000 */ 	nop
/*  f0ee098:	ae020000 */ 	sw	$v0,0x0($s0)
.L0f0ee09c:
/*  f0ee09c:	0c002ef5 */ 	jal	viGetBufY
/*  f0ee0a0:	00000000 */ 	nop
/*  f0ee0a4:	8e6d0000 */ 	lw	$t5,0x0($s3)
/*  f0ee0a8:	004d082a */ 	slt	$at,$v0,$t5
/*  f0ee0ac:	10200004 */ 	beqz	$at,.L0f0ee0c0
/*  f0ee0b0:	00000000 */ 	nop
/*  f0ee0b4:	0c002ef5 */ 	jal	viGetBufY
/*  f0ee0b8:	00000000 */ 	nop
/*  f0ee0bc:	ae620000 */ 	sw	$v0,0x0($s3)
.L0f0ee0c0:
/*  f0ee0c0:	0c002ef5 */ 	jal	viGetBufY
/*  f0ee0c4:	00000000 */ 	nop
/*  f0ee0c8:	8e240000 */ 	lw	$a0,0x0($s1)
/*  f0ee0cc:	0044082a */ 	slt	$at,$v0,$a0
/*  f0ee0d0:	50200006 */ 	beqzl	$at,.L0f0ee0ec
/*  f0ee0d4:	8e430000 */ 	lw	$v1,0x0($s2)
/*  f0ee0d8:	0c002ef5 */ 	jal	viGetBufY
/*  f0ee0dc:	00000000 */ 	nop
/*  f0ee0e0:	ae220000 */ 	sw	$v0,0x0($s1)
/*  f0ee0e4:	00402025 */ 	or	$a0,$v0,$zero
/*  f0ee0e8:	8e430000 */ 	lw	$v1,0x0($s2)
.L0f0ee0ec:
/*  f0ee0ec:	8e0e0000 */ 	lw	$t6,0x0($s0)
/*  f0ee0f0:	44832000 */ 	mtc1	$v1,$f4
/*  f0ee0f4:	01c3082a */ 	slt	$at,$t6,$v1
/*  f0ee0f8:	10200002 */ 	beqz	$at,.L0f0ee104
/*  f0ee0fc:	468021a0 */ 	cvt.s.w	$f6,$f4
/*  f0ee100:	ae030000 */ 	sw	$v1,0x0($s0)
.L0f0ee104:
/*  f0ee104:	8e650000 */ 	lw	$a1,0x0($s3)
/*  f0ee108:	0085082a */ 	slt	$at,$a0,$a1
/*  f0ee10c:	50200003 */ 	beqzl	$at,.L0f0ee11c
/*  f0ee110:	44858000 */ 	mtc1	$a1,$f16
/*  f0ee114:	ae250000 */ 	sw	$a1,0x0($s1)
/*  f0ee118:	44858000 */ 	mtc1	$a1,$f16
.L0f0ee11c:
/*  f0ee11c:	3c014080 */ 	lui	$at,0x4080
/*  f0ee120:	44810000 */ 	mtc1	$at,$f0
/*  f0ee124:	468084a0 */ 	cvt.s.w	$f18,$f16
/*  f0ee128:	8fa201b0 */ 	lw	$v0,0x1b0($sp)
/*  f0ee12c:	46003202 */ 	mul.s	$f8,$f6,$f0
/*  f0ee130:	3c01ed00 */ 	lui	$at,0xed00
/*  f0ee134:	24580008 */ 	addiu	$t8,$v0,0x8
/*  f0ee138:	afb801b0 */ 	sw	$t8,0x1b0($sp)
/*  f0ee13c:	46009102 */ 	mul.s	$f4,$f18,$f0
/*  f0ee140:	4600428d */ 	trunc.w.s	$f10,$f8
/*  f0ee144:	4600218d */ 	trunc.w.s	$f6,$f4
/*  f0ee148:	44085000 */ 	mfc1	$t0,$f10
/*  f0ee14c:	440d3000 */ 	mfc1	$t5,$f6
/*  f0ee150:	31090fff */ 	andi	$t1,$t0,0xfff
/*  f0ee154:	00095300 */ 	sll	$t2,$t1,0xc
/*  f0ee158:	01416025 */ 	or	$t4,$t2,$at
/*  f0ee15c:	31ae0fff */ 	andi	$t6,$t5,0xfff
/*  f0ee160:	018e7825 */ 	or	$t7,$t4,$t6
/*  f0ee164:	ac4f0000 */ 	sw	$t7,0x0($v0)
/*  f0ee168:	8e180000 */ 	lw	$t8,0x0($s0)
/*  f0ee16c:	8e2b0000 */ 	lw	$t3,0x0($s1)
/*  f0ee170:	44984000 */ 	mtc1	$t8,$f8
/*  f0ee174:	448b2000 */ 	mtc1	$t3,$f4
/*  f0ee178:	468042a0 */ 	cvt.s.w	$f10,$f8
/*  f0ee17c:	468021a0 */ 	cvt.s.w	$f6,$f4
/*  f0ee180:	46005402 */ 	mul.s	$f16,$f10,$f0
/*  f0ee184:	00000000 */ 	nop
/*  f0ee188:	46003202 */ 	mul.s	$f8,$f6,$f0
/*  f0ee18c:	4600848d */ 	trunc.w.s	$f18,$f16
/*  f0ee190:	4600428d */ 	trunc.w.s	$f10,$f8
/*  f0ee194:	44089000 */ 	mfc1	$t0,$f18
/*  f0ee198:	440c5000 */ 	mfc1	$t4,$f10
/*  f0ee19c:	31090fff */ 	andi	$t1,$t0,0xfff
/*  f0ee1a0:	00095300 */ 	sll	$t2,$t1,0xc
/*  f0ee1a4:	318e0fff */ 	andi	$t6,$t4,0xfff
/*  f0ee1a8:	014e7825 */ 	or	$t7,$t2,$t6
/*  f0ee1ac:	ac4f0004 */ 	sw	$t7,0x4($v0)
/*  f0ee1b0:	0fc54d8a */ 	jal	func0f153628
/*  f0ee1b4:	8fa401b0 */ 	lw	$a0,0x1b0($sp)
/*  f0ee1b8:	8fa300bc */ 	lw	$v1,0xbc($sp)
/*  f0ee1bc:	afa201b0 */ 	sw	$v0,0x1b0($sp)
/*  f0ee1c0:	0000b825 */ 	or	$s7,$zero,$zero
/*  f0ee1c4:	186000dd */ 	blez	$v1,.L0f0ee53c
/*  f0ee1c8:	27b100c0 */ 	addiu	$s1,$sp,0xc0
/*  f0ee1cc:	3c148008 */ 	lui	$s4,%hi(var8007fb0c)
/*  f0ee1d0:	3c138008 */ 	lui	$s3,%hi(var8007fb10)
/*  f0ee1d4:	2673fb10 */ 	addiu	$s3,$s3,%lo(var8007fb10)
/*  f0ee1d8:	2694fb0c */ 	addiu	$s4,$s4,%lo(var8007fb0c)
/*  f0ee1dc:	0000b025 */ 	or	$s6,$zero,$zero
/*  f0ee1e0:	27b50074 */ 	addiu	$s5,$sp,0x74
.L0f0ee1e4:
/*  f0ee1e4:	8fa300bc */ 	lw	$v1,0xbc($sp)
/*  f0ee1e8:	3c040088 */ 	lui	$a0,0x88
/*  f0ee1ec:	00009025 */ 	or	$s2,$zero,$zero
/*  f0ee1f0:	28610002 */ 	slti	$at,$v1,0x2
/*  f0ee1f4:	1420002d */ 	bnez	$at,.L0f0ee2ac
/*  f0ee1f8:	348488ff */ 	ori	$a0,$a0,0x88ff
/*  f0ee1fc:	2478ffff */ 	addiu	$t8,$v1,-1
/*  f0ee200:	44982000 */ 	mtc1	$t8,$f4
/*  f0ee204:	44978000 */ 	mtc1	$s7,$f16
/*  f0ee208:	3c01437f */ 	lui	$at,0x437f
/*  f0ee20c:	468021a0 */ 	cvt.s.w	$f6,$f4
/*  f0ee210:	44815000 */ 	mtc1	$at,$f10
/*  f0ee214:	24120001 */ 	addiu	$s2,$zero,0x1
/*  f0ee218:	3c014f00 */ 	lui	$at,0x4f00
/*  f0ee21c:	468084a0 */ 	cvt.s.w	$f18,$f16
/*  f0ee220:	46069203 */ 	div.s	$f8,$f18,$f6
/*  f0ee224:	460a4402 */ 	mul.s	$f16,$f8,$f10
/*  f0ee228:	4459f800 */ 	cfc1	$t9,$31
/*  f0ee22c:	44d2f800 */ 	ctc1	$s2,$31
/*  f0ee230:	00000000 */ 	nop
/*  f0ee234:	46008124 */ 	cvt.w.s	$f4,$f16
/*  f0ee238:	4452f800 */ 	cfc1	$s2,$31
/*  f0ee23c:	00000000 */ 	nop
/*  f0ee240:	32520078 */ 	andi	$s2,$s2,0x78
/*  f0ee244:	52400013 */ 	beqzl	$s2,.L0f0ee294
/*  f0ee248:	44122000 */ 	mfc1	$s2,$f4
/*  f0ee24c:	44812000 */ 	mtc1	$at,$f4
/*  f0ee250:	24120001 */ 	addiu	$s2,$zero,0x1
/*  f0ee254:	46048101 */ 	sub.s	$f4,$f16,$f4
/*  f0ee258:	44d2f800 */ 	ctc1	$s2,$31
/*  f0ee25c:	00000000 */ 	nop
/*  f0ee260:	46002124 */ 	cvt.w.s	$f4,$f4
/*  f0ee264:	4452f800 */ 	cfc1	$s2,$31
/*  f0ee268:	00000000 */ 	nop
/*  f0ee26c:	32520078 */ 	andi	$s2,$s2,0x78
/*  f0ee270:	16400005 */ 	bnez	$s2,.L0f0ee288
/*  f0ee274:	00000000 */ 	nop
/*  f0ee278:	44122000 */ 	mfc1	$s2,$f4
/*  f0ee27c:	3c018000 */ 	lui	$at,0x8000
/*  f0ee280:	10000007 */ 	b	.L0f0ee2a0
/*  f0ee284:	02419025 */ 	or	$s2,$s2,$at
.L0f0ee288:
/*  f0ee288:	10000005 */ 	b	.L0f0ee2a0
/*  f0ee28c:	2412ffff */ 	addiu	$s2,$zero,-1
/*  f0ee290:	44122000 */ 	mfc1	$s2,$f4
.L0f0ee294:
/*  f0ee294:	00000000 */ 	nop
/*  f0ee298:	0640fffb */ 	bltz	$s2,.L0f0ee288
/*  f0ee29c:	00000000 */ 	nop
.L0f0ee2a0:
/*  f0ee2a0:	44d9f800 */ 	ctc1	$t9,$31
/*  f0ee2a4:	00000000 */ 	nop
/*  f0ee2a8:	00000000 */ 	nop
.L0f0ee2ac:
/*  f0ee2ac:	3c0500ff */ 	lui	$a1,0xff
/*  f0ee2b0:	34a5ffff */ 	ori	$a1,$a1,0xffff
/*  f0ee2b4:	0fc01a40 */ 	jal	colourBlend
/*  f0ee2b8:	02403025 */ 	or	$a2,$s2,$zero
/*  f0ee2bc:	87c80000 */ 	lh	$t0,0x0($s8)
/*  f0ee2c0:	8fac0098 */ 	lw	$t4,0x98($sp)
/*  f0ee2c4:	8fb800a0 */ 	lw	$t8,0xa0($sp)
/*  f0ee2c8:	25090005 */ 	addiu	$t1,$t0,0x5
/*  f0ee2cc:	afa900b4 */ 	sw	$t1,0xb4($sp)
/*  f0ee2d0:	87cb0002 */ 	lh	$t3,0x2($s8)
/*  f0ee2d4:	858a0000 */ 	lh	$t2,0x0($t4)
/*  f0ee2d8:	00408025 */ 	or	$s0,$v0,$zero
/*  f0ee2dc:	01766821 */ 	addu	$t5,$t3,$s6
/*  f0ee2e0:	01aa7023 */ 	subu	$t6,$t5,$t2
/*  f0ee2e4:	25cf000e */ 	addiu	$t7,$t6,0xe
/*  f0ee2e8:	13000019 */ 	beqz	$t8,.L0f0ee350
/*  f0ee2ec:	afaf00b0 */ 	sw	$t7,0xb0($sp)
/*  f0ee2f0:	8e390004 */ 	lw	$t9,0x4($s1)
/*  f0ee2f4:	8e6b0000 */ 	lw	$t3,0x0($s3)
/*  f0ee2f8:	8e8c0000 */ 	lw	$t4,0x0($s4)
/*  f0ee2fc:	afa20018 */ 	sw	$v0,0x18($sp)
/*  f0ee300:	afab0010 */ 	sw	$t3,0x10($sp)
/*  f0ee304:	afac0014 */ 	sw	$t4,0x14($sp)
/*  f0ee308:	87cd0004 */ 	lh	$t5,0x4($s8)
/*  f0ee30c:	00194080 */ 	sll	$t0,$t9,0x2
/*  f0ee310:	3c09800b */ 	lui	$t1,%hi(g_MpSetup+0x28)
/*  f0ee314:	afad001c */ 	sw	$t5,0x1c($sp)
/*  f0ee318:	87ca0006 */ 	lh	$t2,0x6($s8)
/*  f0ee31c:	01194023 */ 	subu	$t0,$t0,$t9
/*  f0ee320:	00084080 */ 	sll	$t0,$t0,0x2
/*  f0ee324:	2529cbb0 */ 	addiu	$t1,$t1,%lo(g_MpSetup+0x28)
/*  f0ee328:	01093821 */ 	addu	$a3,$t0,$t1
/*  f0ee32c:	afa00028 */ 	sw	$zero,0x28($sp)
/*  f0ee330:	afa00024 */ 	sw	$zero,0x24($sp)
/*  f0ee334:	8fa401b0 */ 	lw	$a0,0x1b0($sp)
/*  f0ee338:	27a500b4 */ 	addiu	$a1,$sp,0xb4
/*  f0ee33c:	27a600b0 */ 	addiu	$a2,$sp,0xb0
/*  f0ee340:	0fc5580f */ 	jal	textRenderWhite
/*  f0ee344:	afaa0020 */ 	sw	$t2,0x20($sp)
/*  f0ee348:	10000012 */ 	b	.L0f0ee394
/*  f0ee34c:	afa201b0 */ 	sw	$v0,0x1b0($sp)
.L0f0ee350:
/*  f0ee350:	8e6e0000 */ 	lw	$t6,0x0($s3)
/*  f0ee354:	8e8f0000 */ 	lw	$t7,0x0($s4)
/*  f0ee358:	8e270000 */ 	lw	$a3,0x0($s1)
/*  f0ee35c:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f0ee360:	afae0010 */ 	sw	$t6,0x10($sp)
/*  f0ee364:	afaf0014 */ 	sw	$t7,0x14($sp)
/*  f0ee368:	87d80004 */ 	lh	$t8,0x4($s8)
/*  f0ee36c:	8fa401b0 */ 	lw	$a0,0x1b0($sp)
/*  f0ee370:	27a500b4 */ 	addiu	$a1,$sp,0xb4
/*  f0ee374:	afb8001c */ 	sw	$t8,0x1c($sp)
/*  f0ee378:	87d90006 */ 	lh	$t9,0x6($s8)
/*  f0ee37c:	afa00028 */ 	sw	$zero,0x28($sp)
/*  f0ee380:	afa00024 */ 	sw	$zero,0x24($sp)
/*  f0ee384:	27a600b0 */ 	addiu	$a2,$sp,0xb0
/*  f0ee388:	0fc5580f */ 	jal	textRenderWhite
/*  f0ee38c:	afb90020 */ 	sw	$t9,0x20($sp)
/*  f0ee390:	afa201b0 */ 	sw	$v0,0x1b0($sp)
.L0f0ee394:
/*  f0ee394:	8fa800a0 */ 	lw	$t0,0xa0($sp)
/*  f0ee398:	3c04cf00 */ 	lui	$a0,0xcf00
/*  f0ee39c:	348400ff */ 	ori	$a0,$a0,0xff
/*  f0ee3a0:	15000030 */ 	bnez	$t0,.L0f0ee464
/*  f0ee3a4:	3c05ff40 */ 	lui	$a1,0xff40
/*  f0ee3a8:	34a540ff */ 	ori	$a1,$a1,0x40ff
/*  f0ee3ac:	0fc01a40 */ 	jal	colourBlend
/*  f0ee3b0:	02403025 */ 	or	$a2,$s2,$zero
/*  f0ee3b4:	8e290000 */ 	lw	$t1,0x0($s1)
/*  f0ee3b8:	3c057f1b */ 	lui	$a1,%hi(var7f1b1e44)
/*  f0ee3bc:	00408025 */ 	or	$s0,$v0,$zero
/*  f0ee3c0:	24a51e44 */ 	addiu	$a1,$a1,%lo(var7f1b1e44)
/*  f0ee3c4:	02a02025 */ 	or	$a0,$s5,$zero
/*  f0ee3c8:	0c004dad */ 	jal	sprintf
/*  f0ee3cc:	8526003c */ 	lh	$a2,0x3c($t1)
/*  f0ee3d0:	8e8b0000 */ 	lw	$t3,0x0($s4)
/*  f0ee3d4:	27a400a4 */ 	addiu	$a0,$sp,0xa4
/*  f0ee3d8:	27a500a8 */ 	addiu	$a1,$sp,0xa8
/*  f0ee3dc:	02a03025 */ 	or	$a2,$s5,$zero
/*  f0ee3e0:	8e670000 */ 	lw	$a3,0x0($s3)
/*  f0ee3e4:	afa00014 */ 	sw	$zero,0x14($sp)
/*  f0ee3e8:	0fc55cbe */ 	jal	textMeasure
/*  f0ee3ec:	afab0010 */ 	sw	$t3,0x10($sp)
/*  f0ee3f0:	87cc0000 */ 	lh	$t4,0x0($s8)
/*  f0ee3f4:	8fad00a8 */ 	lw	$t5,0xa8($sp)
/*  f0ee3f8:	8fb90098 */ 	lw	$t9,0x98($sp)
/*  f0ee3fc:	8fa401b0 */ 	lw	$a0,0x1b0($sp)
/*  f0ee400:	018d5023 */ 	subu	$t2,$t4,$t5
/*  f0ee404:	254e005b */ 	addiu	$t6,$t2,0x5b
/*  f0ee408:	afae00b4 */ 	sw	$t6,0xb4($sp)
/*  f0ee40c:	87cf0002 */ 	lh	$t7,0x2($s8)
/*  f0ee410:	87280000 */ 	lh	$t0,0x0($t9)
/*  f0ee414:	8e8d0000 */ 	lw	$t5,0x0($s4)
/*  f0ee418:	8e6c0000 */ 	lw	$t4,0x0($s3)
/*  f0ee41c:	01f6c021 */ 	addu	$t8,$t7,$s6
/*  f0ee420:	03084823 */ 	subu	$t1,$t8,$t0
/*  f0ee424:	252b000e */ 	addiu	$t3,$t1,0xe
/*  f0ee428:	afab00b0 */ 	sw	$t3,0xb0($sp)
/*  f0ee42c:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f0ee430:	afad0014 */ 	sw	$t5,0x14($sp)
/*  f0ee434:	afac0010 */ 	sw	$t4,0x10($sp)
/*  f0ee438:	87ca0004 */ 	lh	$t2,0x4($s8)
/*  f0ee43c:	27a500b4 */ 	addiu	$a1,$sp,0xb4
/*  f0ee440:	27a600b0 */ 	addiu	$a2,$sp,0xb0
/*  f0ee444:	afaa001c */ 	sw	$t2,0x1c($sp)
/*  f0ee448:	87ce0006 */ 	lh	$t6,0x6($s8)
/*  f0ee44c:	afa00028 */ 	sw	$zero,0x28($sp)
/*  f0ee450:	afa00024 */ 	sw	$zero,0x24($sp)
/*  f0ee454:	02a03825 */ 	or	$a3,$s5,$zero
/*  f0ee458:	0fc5580f */ 	jal	textRenderWhite
/*  f0ee45c:	afae0020 */ 	sw	$t6,0x20($sp)
/*  f0ee460:	afa201b0 */ 	sw	$v0,0x1b0($sp)
.L0f0ee464:
/*  f0ee464:	3c04009f */ 	lui	$a0,0x9f
/*  f0ee468:	3c0500ff */ 	lui	$a1,0xff
/*  f0ee46c:	34a500ff */ 	ori	$a1,$a1,0xff
/*  f0ee470:	348400ff */ 	ori	$a0,$a0,0xff
/*  f0ee474:	0fc01a40 */ 	jal	colourBlend
/*  f0ee478:	02403025 */ 	or	$a2,$s2,$zero
/*  f0ee47c:	3c057f1b */ 	lui	$a1,%hi(var7f1b1e48)
/*  f0ee480:	00408025 */ 	or	$s0,$v0,$zero
/*  f0ee484:	24a51e48 */ 	addiu	$a1,$a1,%lo(var7f1b1e48)
/*  f0ee488:	02a02025 */ 	or	$a0,$s5,$zero
/*  f0ee48c:	0c004dad */ 	jal	sprintf
/*  f0ee490:	8e260010 */ 	lw	$a2,0x10($s1)
/*  f0ee494:	8e8f0000 */ 	lw	$t7,0x0($s4)
/*  f0ee498:	27a400a4 */ 	addiu	$a0,$sp,0xa4
/*  f0ee49c:	27a500a8 */ 	addiu	$a1,$sp,0xa8
/*  f0ee4a0:	02a03025 */ 	or	$a2,$s5,$zero
/*  f0ee4a4:	8e670000 */ 	lw	$a3,0x0($s3)
/*  f0ee4a8:	afa00014 */ 	sw	$zero,0x14($sp)
/*  f0ee4ac:	0fc55cbe */ 	jal	textMeasure
/*  f0ee4b0:	afaf0010 */ 	sw	$t7,0x10($sp)
/*  f0ee4b4:	87d90000 */ 	lh	$t9,0x0($s8)
/*  f0ee4b8:	8fb800a8 */ 	lw	$t8,0xa8($sp)
/*  f0ee4bc:	8fad0098 */ 	lw	$t5,0x98($sp)
/*  f0ee4c0:	8fa401b0 */ 	lw	$a0,0x1b0($sp)
/*  f0ee4c4:	03384023 */ 	subu	$t0,$t9,$t8
/*  f0ee4c8:	25090078 */ 	addiu	$t1,$t0,0x78
/*  f0ee4cc:	afa900b4 */ 	sw	$t1,0xb4($sp)
/*  f0ee4d0:	87cb0002 */ 	lh	$t3,0x2($s8)
/*  f0ee4d4:	85aa0000 */ 	lh	$t2,0x0($t5)
/*  f0ee4d8:	8e980000 */ 	lw	$t8,0x0($s4)
/*  f0ee4dc:	8e790000 */ 	lw	$t9,0x0($s3)
/*  f0ee4e0:	01766021 */ 	addu	$t4,$t3,$s6
/*  f0ee4e4:	018a7023 */ 	subu	$t6,$t4,$t2
/*  f0ee4e8:	25cf000e */ 	addiu	$t7,$t6,0xe
/*  f0ee4ec:	afaf00b0 */ 	sw	$t7,0xb0($sp)
/*  f0ee4f0:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f0ee4f4:	afb80014 */ 	sw	$t8,0x14($sp)
/*  f0ee4f8:	afb90010 */ 	sw	$t9,0x10($sp)
/*  f0ee4fc:	87c80004 */ 	lh	$t0,0x4($s8)
/*  f0ee500:	27a500b4 */ 	addiu	$a1,$sp,0xb4
/*  f0ee504:	27a600b0 */ 	addiu	$a2,$sp,0xb0
/*  f0ee508:	afa8001c */ 	sw	$t0,0x1c($sp)
/*  f0ee50c:	87c90006 */ 	lh	$t1,0x6($s8)
/*  f0ee510:	afa00028 */ 	sw	$zero,0x28($sp)
/*  f0ee514:	afa00024 */ 	sw	$zero,0x24($sp)
/*  f0ee518:	02a03825 */ 	or	$a3,$s5,$zero
/*  f0ee51c:	0fc5580f */ 	jal	textRenderWhite
/*  f0ee520:	afa90020 */ 	sw	$t1,0x20($sp)
/*  f0ee524:	8fab00bc */ 	lw	$t3,0xbc($sp)
/*  f0ee528:	26f70001 */ 	addiu	$s7,$s7,0x1
/*  f0ee52c:	26310014 */ 	addiu	$s1,$s1,0x14
/*  f0ee530:	26d6000a */ 	addiu	$s6,$s6,0xa
/*  f0ee534:	16ebff2b */ 	bne	$s7,$t3,.L0f0ee1e4
/*  f0ee538:	afa201b0 */ 	sw	$v0,0x1b0($sp)
.L0f0ee53c:
/*  f0ee53c:	0fc54de0 */ 	jal	func0f153780
/*  f0ee540:	8fa401b0 */ 	lw	$a0,0x1b0($sp)
/*  f0ee544:	8fbf005c */ 	lw	$ra,0x5c($sp)
/*  f0ee548:	8fb00038 */ 	lw	$s0,0x38($sp)
/*  f0ee54c:	8fb1003c */ 	lw	$s1,0x3c($sp)
/*  f0ee550:	8fb20040 */ 	lw	$s2,0x40($sp)
/*  f0ee554:	8fb30044 */ 	lw	$s3,0x44($sp)
/*  f0ee558:	8fb40048 */ 	lw	$s4,0x48($sp)
/*  f0ee55c:	8fb5004c */ 	lw	$s5,0x4c($sp)
/*  f0ee560:	8fb60050 */ 	lw	$s6,0x50($sp)
/*  f0ee564:	8fb70054 */ 	lw	$s7,0x54($sp)
/*  f0ee568:	8fbe0058 */ 	lw	$s8,0x58($sp)
/*  f0ee56c:	03e00008 */ 	jr	$ra
/*  f0ee570:	27bd01b0 */ 	addiu	$sp,$sp,0x1b0
);

bool menuTickItemRanking(struct menuinputs *inputs, u32 arg1, union menuitemtickdata *data)
{
	f32 floatval;
	s32 intval;

	if (arg1 & 2) {
		intval = 0;
		floatval = inputs->yaxis < 0 ? -(f32)inputs->yaxis : inputs->yaxis;

		if (floatval > 20) {
			floatval = (floatval - 20) / 5;
			floatval *= g_Vars.diffframe60f;

			intval = inputs->yaxis < 0 ? (s32)floatval : -(s32)floatval;
		}

		intval += inputs->unk09 * 2 * g_Vars.diffframe60;
		data->ranking.scrolloffset += intval;

		if (data->ranking.scrolloffset < 0) {
			data->ranking.scrolloffset = 0;
		}
	}

	return true;
}

void menuInitItemRanking(union menuitemtickdata *data)
{
	data->ranking.scrolloffset = 0;
}

GLOBAL_ASM(
glabel menuRenderItemPlayerStats
/*  f0ee648:	27bdff38 */ 	addiu	$sp,$sp,-200
/*  f0ee64c:	3c0f8007 */ 	lui	$t7,%hi(g_MpPlayerNum)
/*  f0ee650:	8def1448 */ 	lw	$t7,%lo(g_MpPlayerNum)($t7)
/*  f0ee654:	3c18800a */ 	lui	$t8,%hi(var8009deb0)
/*  f0ee658:	afbf005c */ 	sw	$ra,0x5c($sp)
/*  f0ee65c:	afbe0058 */ 	sw	$s8,0x58($sp)
/*  f0ee660:	afb70054 */ 	sw	$s7,0x54($sp)
/*  f0ee664:	afb60050 */ 	sw	$s6,0x50($sp)
/*  f0ee668:	afb5004c */ 	sw	$s5,0x4c($sp)
/*  f0ee66c:	afb40048 */ 	sw	$s4,0x48($sp)
/*  f0ee670:	afb30044 */ 	sw	$s3,0x44($sp)
/*  f0ee674:	afb20040 */ 	sw	$s2,0x40($sp)
/*  f0ee678:	afb1003c */ 	sw	$s1,0x3c($sp)
/*  f0ee67c:	afb00038 */ 	sw	$s0,0x38($sp)
/*  f0ee680:	030fc021 */ 	addu	$t8,$t8,$t7
/*  f0ee684:	8cae0014 */ 	lw	$t6,0x14($a1)
/*  f0ee688:	9318deb0 */ 	lbu	$t8,%lo(var8009deb0)($t8)
/*  f0ee68c:	00a08825 */ 	or	$s1,$a1,$zero
/*  f0ee690:	0080a025 */ 	or	$s4,$a0,$zero
/*  f0ee694:	afae00c4 */ 	sw	$t6,0xc4($sp)
/*  f0ee698:	0fc6321f */ 	jal	mpGetNumChrs
/*  f0ee69c:	afb800b4 */ 	sw	$t8,0xb4($sp)
/*  f0ee6a0:	8fa300b4 */ 	lw	$v1,0xb4($sp)
/*  f0ee6a4:	afa200a0 */ 	sw	$v0,0xa0($sp)
/*  f0ee6a8:	28610004 */ 	slti	$at,$v1,0x4
/*  f0ee6ac:	10200008 */ 	beqz	$at,.L0f0ee6d0
/*  f0ee6b0:	0003c880 */ 	sll	$t9,$v1,0x2
/*  f0ee6b4:	0323c821 */ 	addu	$t9,$t9,$v1
/*  f0ee6b8:	3c08800b */ 	lui	$t0,%hi(g_MpPlayers)
/*  f0ee6bc:	2508c7b8 */ 	addiu	$t0,$t0,%lo(g_MpPlayers)
/*  f0ee6c0:	0019c940 */ 	sll	$t9,$t9,0x5
/*  f0ee6c4:	03284821 */ 	addu	$t1,$t9,$t0
/*  f0ee6c8:	1000000b */ 	b	.L0f0ee6f8
/*  f0ee6cc:	afa900b0 */ 	sw	$t1,0xb0($sp)
.L0f0ee6d0:
/*  f0ee6d0:	00035080 */ 	sll	$t2,$v1,0x2
/*  f0ee6d4:	01435021 */ 	addu	$t2,$t2,$v1
/*  f0ee6d8:	000a5080 */ 	sll	$t2,$t2,0x2
/*  f0ee6dc:	01435023 */ 	subu	$t2,$t2,$v1
/*  f0ee6e0:	000a5080 */ 	sll	$t2,$t2,0x2
/*  f0ee6e4:	3c0c800b */ 	lui	$t4,%hi(g_MpSimulants)
/*  f0ee6e8:	258cc538 */ 	addiu	$t4,$t4,%lo(g_MpSimulants)
/*  f0ee6ec:	254bfed0 */ 	addiu	$t3,$t2,-304
/*  f0ee6f0:	016c6821 */ 	addu	$t5,$t3,$t4
/*  f0ee6f4:	afad00b0 */ 	sw	$t5,0xb0($sp)
.L0f0ee6f8:
/*  f0ee6f8:	0fc54d8a */ 	jal	func0f153628
/*  f0ee6fc:	02802025 */ 	or	$a0,$s4,$zero
/*  f0ee700:	3c014220 */ 	lui	$at,0x4220
/*  f0ee704:	44816000 */ 	mtc1	$at,$f12
/*  f0ee708:	0fc01ac2 */ 	jal	func0f006b08
/*  f0ee70c:	0040a025 */ 	or	$s4,$v0,$zero
/*  f0ee710:	3c01437f */ 	lui	$at,0x437f
/*  f0ee714:	44812000 */ 	mtc1	$at,$f4
/*  f0ee718:	24130001 */ 	addiu	$s3,$zero,0x1
/*  f0ee71c:	46040182 */ 	mul.s	$f6,$f0,$f4
/*  f0ee720:	444ef800 */ 	cfc1	$t6,$31
/*  f0ee724:	44d3f800 */ 	ctc1	$s3,$31
/*  f0ee728:	00000000 */ 	nop
/*  f0ee72c:	46003224 */ 	cvt.w.s	$f8,$f6
/*  f0ee730:	4453f800 */ 	cfc1	$s3,$31
/*  f0ee734:	00000000 */ 	nop
/*  f0ee738:	32730078 */ 	andi	$s3,$s3,0x78
/*  f0ee73c:	12600012 */ 	beqz	$s3,.L0f0ee788
/*  f0ee740:	3c014f00 */ 	lui	$at,0x4f00
/*  f0ee744:	44814000 */ 	mtc1	$at,$f8
/*  f0ee748:	24130001 */ 	addiu	$s3,$zero,0x1
/*  f0ee74c:	46083201 */ 	sub.s	$f8,$f6,$f8
/*  f0ee750:	44d3f800 */ 	ctc1	$s3,$31
/*  f0ee754:	00000000 */ 	nop
/*  f0ee758:	46004224 */ 	cvt.w.s	$f8,$f8
/*  f0ee75c:	4453f800 */ 	cfc1	$s3,$31
/*  f0ee760:	00000000 */ 	nop
/*  f0ee764:	32730078 */ 	andi	$s3,$s3,0x78
/*  f0ee768:	16600005 */ 	bnez	$s3,.L0f0ee780
/*  f0ee76c:	00000000 */ 	nop
/*  f0ee770:	44134000 */ 	mfc1	$s3,$f8
/*  f0ee774:	3c018000 */ 	lui	$at,0x8000
/*  f0ee778:	10000007 */ 	b	.L0f0ee798
/*  f0ee77c:	02619825 */ 	or	$s3,$s3,$at
.L0f0ee780:
/*  f0ee780:	10000005 */ 	b	.L0f0ee798
/*  f0ee784:	2413ffff */ 	addiu	$s3,$zero,-1
.L0f0ee788:
/*  f0ee788:	44134000 */ 	mfc1	$s3,$f8
/*  f0ee78c:	00000000 */ 	nop
/*  f0ee790:	0660fffb */ 	bltz	$s3,.L0f0ee780
/*  f0ee794:	00000000 */ 	nop
.L0f0ee798:
/*  f0ee798:	8e300010 */ 	lw	$s0,0x10($s1)
/*  f0ee79c:	44cef800 */ 	ctc1	$t6,$31
/*  f0ee7a0:	44808000 */ 	mtc1	$zero,$f16
/*  f0ee7a4:	c60a0040 */ 	lwc1	$f10,0x40($s0)
/*  f0ee7a8:	4610503c */ 	c.lt.s	$f10,$f16
/*  f0ee7ac:	00000000 */ 	nop
/*  f0ee7b0:	4502000a */ 	bc1fl	.L0f0ee7dc
/*  f0ee7b4:	9219003d */ 	lbu	$t9,0x3d($s0)
/*  f0ee7b8:	920f003c */ 	lbu	$t7,0x3c($s0)
/*  f0ee7bc:	3c127f1b */ 	lui	$s2,%hi(g_MenuColourPalettes+0x20)
/*  f0ee7c0:	000fc100 */ 	sll	$t8,$t7,0x4
/*  f0ee7c4:	030fc023 */ 	subu	$t8,$t8,$t7
/*  f0ee7c8:	0018c080 */ 	sll	$t8,$t8,0x2
/*  f0ee7cc:	02589021 */ 	addu	$s2,$s2,$t8
/*  f0ee7d0:	10000012 */ 	b	.L0f0ee81c
/*  f0ee7d4:	8e521fd0 */ 	lw	$s2,%lo(g_MenuColourPalettes+0x20)($s2)
/*  f0ee7d8:	9219003d */ 	lbu	$t9,0x3d($s0)
.L0f0ee7dc:
/*  f0ee7dc:	920b003c */ 	lbu	$t3,0x3c($s0)
/*  f0ee7e0:	3c097f1b */ 	lui	$t1,%hi(g_MenuColourPalettes)
/*  f0ee7e4:	00194100 */ 	sll	$t0,$t9,0x4
/*  f0ee7e8:	000b6100 */ 	sll	$t4,$t3,0x4
/*  f0ee7ec:	25291fb0 */ 	addiu	$t1,$t1,%lo(g_MenuColourPalettes)
/*  f0ee7f0:	01194023 */ 	subu	$t0,$t0,$t9
/*  f0ee7f4:	018b6023 */ 	subu	$t4,$t4,$t3
/*  f0ee7f8:	000c6080 */ 	sll	$t4,$t4,0x2
/*  f0ee7fc:	00084080 */ 	sll	$t0,$t0,0x2
/*  f0ee800:	01095021 */ 	addu	$t2,$t0,$t1
/*  f0ee804:	01896821 */ 	addu	$t5,$t4,$t1
/*  f0ee808:	8da50020 */ 	lw	$a1,0x20($t5)
/*  f0ee80c:	8d440020 */ 	lw	$a0,0x20($t2)
/*  f0ee810:	0fc01a40 */ 	jal	colourBlend
/*  f0ee814:	8e060044 */ 	lw	$a2,0x44($s0)
/*  f0ee818:	00409025 */ 	or	$s2,$v0,$zero
.L0f0ee81c:
/*  f0ee81c:	2404ffff */ 	addiu	$a0,$zero,-1
/*  f0ee820:	240500ff */ 	addiu	$a1,$zero,0xff
/*  f0ee824:	0fc01a40 */ 	jal	colourBlend
/*  f0ee828:	2406007f */ 	addiu	$a2,$zero,0x7f
/*  f0ee82c:	00402025 */ 	or	$a0,$v0,$zero
/*  f0ee830:	02402825 */ 	or	$a1,$s2,$zero
/*  f0ee834:	0fc01a40 */ 	jal	colourBlend
/*  f0ee838:	02603025 */ 	or	$a2,$s3,$zero
/*  f0ee83c:	862e0000 */ 	lh	$t6,0x0($s1)
/*  f0ee840:	3c158008 */ 	lui	$s5,%hi(var8007fb10)
/*  f0ee844:	3c168008 */ 	lui	$s6,%hi(var8007fb0c)
/*  f0ee848:	25cf0002 */ 	addiu	$t7,$t6,0x2
/*  f0ee84c:	afaf00c0 */ 	sw	$t7,0xc0($sp)
/*  f0ee850:	86380002 */ 	lh	$t8,0x2($s1)
/*  f0ee854:	26d6fb0c */ 	addiu	$s6,$s6,%lo(var8007fb0c)
/*  f0ee858:	26b5fb10 */ 	addiu	$s5,$s5,%lo(var8007fb10)
/*  f0ee85c:	8ea80000 */ 	lw	$t0,0x0($s5)
/*  f0ee860:	8eca0000 */ 	lw	$t2,0x0($s6)
/*  f0ee864:	27190001 */ 	addiu	$t9,$t8,0x1
/*  f0ee868:	afb900bc */ 	sw	$t9,0xbc($sp)
/*  f0ee86c:	afa20018 */ 	sw	$v0,0x18($sp)
/*  f0ee870:	afa80010 */ 	sw	$t0,0x10($sp)
/*  f0ee874:	afaa0014 */ 	sw	$t2,0x14($sp)
/*  f0ee878:	862b0004 */ 	lh	$t3,0x4($s1)
/*  f0ee87c:	27b700c0 */ 	addiu	$s7,$sp,0xc0
/*  f0ee880:	27be00bc */ 	addiu	$s8,$sp,0xbc
/*  f0ee884:	afab001c */ 	sw	$t3,0x1c($sp)
/*  f0ee888:	862c0006 */ 	lh	$t4,0x6($s1)
/*  f0ee88c:	afa00028 */ 	sw	$zero,0x28($sp)
/*  f0ee890:	afa00024 */ 	sw	$zero,0x24($sp)
/*  f0ee894:	03c03025 */ 	or	$a2,$s8,$zero
/*  f0ee898:	02e02825 */ 	or	$a1,$s7,$zero
/*  f0ee89c:	02802025 */ 	or	$a0,$s4,$zero
/*  f0ee8a0:	8fa700b0 */ 	lw	$a3,0xb0($sp)
/*  f0ee8a4:	0fc5580f */ 	jal	textRenderWhite
/*  f0ee8a8:	afac0020 */ 	sw	$t4,0x20($sp)
/*  f0ee8ac:	8e300010 */ 	lw	$s0,0x10($s1)
/*  f0ee8b0:	44802000 */ 	mtc1	$zero,$f4
/*  f0ee8b4:	0040a025 */ 	or	$s4,$v0,$zero
/*  f0ee8b8:	c6120040 */ 	lwc1	$f18,0x40($s0)
/*  f0ee8bc:	4604903c */ 	c.lt.s	$f18,$f4
/*  f0ee8c0:	00000000 */ 	nop
/*  f0ee8c4:	4502000b */ 	bc1fl	.L0f0ee8f4
/*  f0ee8c8:	920f003d */ 	lbu	$t7,0x3d($s0)
/*  f0ee8cc:	9209003c */ 	lbu	$t1,0x3c($s0)
/*  f0ee8d0:	3c0e7f1b */ 	lui	$t6,%hi(g_MenuColourPalettes+0x18)
/*  f0ee8d4:	00096900 */ 	sll	$t5,$t1,0x4
/*  f0ee8d8:	01a96823 */ 	subu	$t5,$t5,$t1
/*  f0ee8dc:	000d6880 */ 	sll	$t5,$t5,0x2
/*  f0ee8e0:	01cd7021 */ 	addu	$t6,$t6,$t5
/*  f0ee8e4:	8dce1fc8 */ 	lw	$t6,%lo(g_MenuColourPalettes+0x18)($t6)
/*  f0ee8e8:	10000013 */ 	b	.L0f0ee938
/*  f0ee8ec:	afae00b8 */ 	sw	$t6,0xb8($sp)
/*  f0ee8f0:	920f003d */ 	lbu	$t7,0x3d($s0)
.L0f0ee8f4:
/*  f0ee8f4:	920a003c */ 	lbu	$t2,0x3c($s0)
/*  f0ee8f8:	3c197f1b */ 	lui	$t9,%hi(g_MenuColourPalettes)
/*  f0ee8fc:	000fc100 */ 	sll	$t8,$t7,0x4
/*  f0ee900:	000a5900 */ 	sll	$t3,$t2,0x4
/*  f0ee904:	27391fb0 */ 	addiu	$t9,$t9,%lo(g_MenuColourPalettes)
/*  f0ee908:	030fc023 */ 	subu	$t8,$t8,$t7
/*  f0ee90c:	016a5823 */ 	subu	$t3,$t3,$t2
/*  f0ee910:	000b5880 */ 	sll	$t3,$t3,0x2
/*  f0ee914:	0018c080 */ 	sll	$t8,$t8,0x2
/*  f0ee918:	03194021 */ 	addu	$t0,$t8,$t9
/*  f0ee91c:	01796021 */ 	addu	$t4,$t3,$t9
/*  f0ee920:	8d850018 */ 	lw	$a1,0x18($t4)
/*  f0ee924:	8d040018 */ 	lw	$a0,0x18($t0)
/*  f0ee928:	0fc01a40 */ 	jal	colourBlend
/*  f0ee92c:	8e060044 */ 	lw	$a2,0x44($s0)
/*  f0ee930:	afa200b8 */ 	sw	$v0,0xb8($sp)
/*  f0ee934:	8e300010 */ 	lw	$s0,0x10($s1)
.L0f0ee938:
/*  f0ee938:	8e09000c */ 	lw	$t1,0xc($s0)
/*  f0ee93c:	1120000b */ 	beqz	$t1,.L0f0ee96c
/*  f0ee940:	00000000 */ 	nop
/*  f0ee944:	8fa400b8 */ 	lw	$a0,0xb8($sp)
/*  f0ee948:	00002825 */ 	or	$a1,$zero,$zero
/*  f0ee94c:	0fc01a40 */ 	jal	colourBlend
/*  f0ee950:	2406007f */ 	addiu	$a2,$zero,0x7f
/*  f0ee954:	8fb000b8 */ 	lw	$s0,0xb8($sp)
/*  f0ee958:	2401ff00 */ 	addiu	$at,$zero,-256
/*  f0ee95c:	00416824 */ 	and	$t5,$v0,$at
/*  f0ee960:	320e00ff */ 	andi	$t6,$s0,0xff
/*  f0ee964:	01ae8025 */ 	or	$s0,$t5,$t6
/*  f0ee968:	afb000b8 */ 	sw	$s0,0xb8($sp)
.L0f0ee96c:
/*  f0ee96c:	0fc5b9f1 */ 	jal	langGet
/*  f0ee970:	24045119 */ 	addiu	$a0,$zero,0x5119
/*  f0ee974:	3c0f8008 */ 	lui	$t7,%hi(var8007fb04)
/*  f0ee978:	8deffb04 */ 	lw	$t7,%lo(var8007fb04)($t7)
/*  f0ee97c:	3c078008 */ 	lui	$a3,%hi(var8007fb08)
/*  f0ee980:	8ce7fb08 */ 	lw	$a3,%lo(var8007fb08)($a3)
/*  f0ee984:	8fb000b8 */ 	lw	$s0,0xb8($sp)
/*  f0ee988:	27a400a8 */ 	addiu	$a0,$sp,0xa8
/*  f0ee98c:	27a500a4 */ 	addiu	$a1,$sp,0xa4
/*  f0ee990:	00403025 */ 	or	$a2,$v0,$zero
/*  f0ee994:	afa00014 */ 	sw	$zero,0x14($sp)
/*  f0ee998:	0fc55cbe */ 	jal	textMeasure
/*  f0ee99c:	afaf0010 */ 	sw	$t7,0x10($sp)
/*  f0ee9a0:	86380000 */ 	lh	$t8,0x0($s1)
/*  f0ee9a4:	8fa800a4 */ 	lw	$t0,0xa4($sp)
/*  f0ee9a8:	24045119 */ 	addiu	$a0,$zero,0x5119
/*  f0ee9ac:	03085023 */ 	subu	$t2,$t8,$t0
/*  f0ee9b0:	254b0079 */ 	addiu	$t3,$t2,0x79
/*  f0ee9b4:	afab00c0 */ 	sw	$t3,0xc0($sp)
/*  f0ee9b8:	86390002 */ 	lh	$t9,0x2($s1)
/*  f0ee9bc:	272c0001 */ 	addiu	$t4,$t9,0x1
/*  f0ee9c0:	0fc5b9f1 */ 	jal	langGet
/*  f0ee9c4:	afac00bc */ 	sw	$t4,0xbc($sp)
/*  f0ee9c8:	3c098008 */ 	lui	$t1,%hi(var8007fb08)
/*  f0ee9cc:	3c0d8008 */ 	lui	$t5,%hi(var8007fb04)
/*  f0ee9d0:	8dadfb04 */ 	lw	$t5,%lo(var8007fb04)($t5)
/*  f0ee9d4:	8d29fb08 */ 	lw	$t1,%lo(var8007fb08)($t1)
/*  f0ee9d8:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f0ee9dc:	afad0014 */ 	sw	$t5,0x14($sp)
/*  f0ee9e0:	afa90010 */ 	sw	$t1,0x10($sp)
/*  f0ee9e4:	862e0004 */ 	lh	$t6,0x4($s1)
/*  f0ee9e8:	02802025 */ 	or	$a0,$s4,$zero
/*  f0ee9ec:	02e02825 */ 	or	$a1,$s7,$zero
/*  f0ee9f0:	afae001c */ 	sw	$t6,0x1c($sp)
/*  f0ee9f4:	862f0006 */ 	lh	$t7,0x6($s1)
/*  f0ee9f8:	afa00028 */ 	sw	$zero,0x28($sp)
/*  f0ee9fc:	afa00024 */ 	sw	$zero,0x24($sp)
/*  f0eea00:	03c03025 */ 	or	$a2,$s8,$zero
/*  f0eea04:	00403825 */ 	or	$a3,$v0,$zero
/*  f0eea08:	0fc5580f */ 	jal	textRenderWhite
/*  f0eea0c:	afaf0020 */ 	sw	$t7,0x20($sp)
/*  f0eea10:	86380000 */ 	lh	$t8,0x0($s1)
/*  f0eea14:	8fa800a4 */ 	lw	$t0,0xa4($sp)
/*  f0eea18:	8fa300b4 */ 	lw	$v1,0xb4($sp)
/*  f0eea1c:	8fac00b0 */ 	lw	$t4,0xb0($sp)
/*  f0eea20:	03085023 */ 	subu	$t2,$t8,$t0
/*  f0eea24:	254b0077 */ 	addiu	$t3,$t2,0x77
/*  f0eea28:	0003c840 */ 	sll	$t9,$v1,0x1
/*  f0eea2c:	afab00c0 */ 	sw	$t3,0xc0($sp)
/*  f0eea30:	01994821 */ 	addu	$t1,$t4,$t9
/*  f0eea34:	27b30094 */ 	addiu	$s3,$sp,0x94
/*  f0eea38:	85260024 */ 	lh	$a2,0x24($t1)
/*  f0eea3c:	3c057f1b */ 	lui	$a1,%hi(var7f1b1e4c)
/*  f0eea40:	0040a025 */ 	or	$s4,$v0,$zero
/*  f0eea44:	24a51e4c */ 	addiu	$a1,$a1,%lo(var7f1b1e4c)
/*  f0eea48:	afb9006c */ 	sw	$t9,0x6c($sp)
/*  f0eea4c:	02602025 */ 	or	$a0,$s3,$zero
/*  f0eea50:	0c004dad */ 	jal	sprintf
/*  f0eea54:	03201825 */ 	or	$v1,$t9,$zero
/*  f0eea58:	8ecd0000 */ 	lw	$t5,0x0($s6)
/*  f0eea5c:	27a400a8 */ 	addiu	$a0,$sp,0xa8
/*  f0eea60:	27a500a4 */ 	addiu	$a1,$sp,0xa4
/*  f0eea64:	02603025 */ 	or	$a2,$s3,$zero
/*  f0eea68:	8ea70000 */ 	lw	$a3,0x0($s5)
/*  f0eea6c:	afa00014 */ 	sw	$zero,0x14($sp)
/*  f0eea70:	0fc55cbe */ 	jal	textMeasure
/*  f0eea74:	afad0010 */ 	sw	$t5,0x10($sp)
/*  f0eea78:	8fae00c0 */ 	lw	$t6,0xc0($sp)
/*  f0eea7c:	8faf00a4 */ 	lw	$t7,0xa4($sp)
/*  f0eea80:	8eab0000 */ 	lw	$t3,0x0($s5)
/*  f0eea84:	8ed90000 */ 	lw	$t9,0x0($s6)
/*  f0eea88:	01cfc023 */ 	subu	$t8,$t6,$t7
/*  f0eea8c:	afb800c0 */ 	sw	$t8,0xc0($sp)
/*  f0eea90:	86280002 */ 	lh	$t0,0x2($s1)
/*  f0eea94:	3c0cffff */ 	lui	$t4,0xffff
/*  f0eea98:	358c00ff */ 	ori	$t4,$t4,0xff
/*  f0eea9c:	250a0001 */ 	addiu	$t2,$t0,0x1
/*  f0eeaa0:	afaa00bc */ 	sw	$t2,0xbc($sp)
/*  f0eeaa4:	afac0018 */ 	sw	$t4,0x18($sp)
/*  f0eeaa8:	afab0010 */ 	sw	$t3,0x10($sp)
/*  f0eeaac:	afb90014 */ 	sw	$t9,0x14($sp)
/*  f0eeab0:	86290004 */ 	lh	$t1,0x4($s1)
/*  f0eeab4:	02802025 */ 	or	$a0,$s4,$zero
/*  f0eeab8:	02e02825 */ 	or	$a1,$s7,$zero
/*  f0eeabc:	afa9001c */ 	sw	$t1,0x1c($sp)
/*  f0eeac0:	862d0006 */ 	lh	$t5,0x6($s1)
/*  f0eeac4:	afa00028 */ 	sw	$zero,0x28($sp)
/*  f0eeac8:	afa00024 */ 	sw	$zero,0x24($sp)
/*  f0eeacc:	03c03025 */ 	or	$a2,$s8,$zero
/*  f0eead0:	02603825 */ 	or	$a3,$s3,$zero
/*  f0eead4:	0fc5580f */ 	jal	textRenderWhite
/*  f0eead8:	afad0020 */ 	sw	$t5,0x20($sp)
/*  f0eeadc:	0040a025 */ 	or	$s4,$v0,$zero
/*  f0eeae0:	0fc6321f */ 	jal	mpGetNumChrs
/*  f0eeae4:	2412000c */ 	addiu	$s2,$zero,0xc
/*  f0eeae8:	28410002 */ 	slti	$at,$v0,0x2
/*  f0eeaec:	142001b6 */ 	bnez	$at,.L0f0ef1c8
/*  f0eeaf0:	00000000 */ 	nop
/*  f0eeaf4:	8e300010 */ 	lw	$s0,0x10($s1)
/*  f0eeaf8:	44804000 */ 	mtc1	$zero,$f8
/*  f0eeafc:	c6060040 */ 	lwc1	$f6,0x40($s0)
/*  f0eeb00:	4608303c */ 	c.lt.s	$f6,$f8
/*  f0eeb04:	00000000 */ 	nop
/*  f0eeb08:	4502000b */ 	bc1fl	.L0f0eeb38
/*  f0eeb0c:	9208003d */ 	lbu	$t0,0x3d($s0)
/*  f0eeb10:	920e003c */ 	lbu	$t6,0x3c($s0)
/*  f0eeb14:	3c187f1b */ 	lui	$t8,%hi(g_MenuColourPalettes+0x18)
/*  f0eeb18:	000e7900 */ 	sll	$t7,$t6,0x4
/*  f0eeb1c:	01ee7823 */ 	subu	$t7,$t7,$t6
/*  f0eeb20:	000f7880 */ 	sll	$t7,$t7,0x2
/*  f0eeb24:	030fc021 */ 	addu	$t8,$t8,$t7
/*  f0eeb28:	8f181fc8 */ 	lw	$t8,%lo(g_MenuColourPalettes+0x18)($t8)
/*  f0eeb2c:	10000012 */ 	b	.L0f0eeb78
/*  f0eeb30:	afb800b8 */ 	sw	$t8,0xb8($sp)
/*  f0eeb34:	9208003d */ 	lbu	$t0,0x3d($s0)
.L0f0eeb38:
/*  f0eeb38:	2403003c */ 	addiu	$v1,$zero,0x3c
/*  f0eeb3c:	9219003c */ 	lbu	$t9,0x3c($s0)
/*  f0eeb40:	01030019 */ 	multu	$t0,$v1
/*  f0eeb44:	3c027f1b */ 	lui	$v0,%hi(g_MenuColourPalettes)
/*  f0eeb48:	24421fb0 */ 	addiu	$v0,$v0,%lo(g_MenuColourPalettes)
/*  f0eeb4c:	8e060044 */ 	lw	$a2,0x44($s0)
/*  f0eeb50:	00005012 */ 	mflo	$t2
/*  f0eeb54:	004a5821 */ 	addu	$t3,$v0,$t2
/*  f0eeb58:	8d640018 */ 	lw	$a0,0x18($t3)
/*  f0eeb5c:	03230019 */ 	multu	$t9,$v1
/*  f0eeb60:	00006012 */ 	mflo	$t4
/*  f0eeb64:	004c4821 */ 	addu	$t1,$v0,$t4
/*  f0eeb68:	0fc01a40 */ 	jal	colourBlend
/*  f0eeb6c:	8d250018 */ 	lw	$a1,0x18($t1)
/*  f0eeb70:	afa200b8 */ 	sw	$v0,0xb8($sp)
/*  f0eeb74:	8e300010 */ 	lw	$s0,0x10($s1)
.L0f0eeb78:
/*  f0eeb78:	8e0d000c */ 	lw	$t5,0xc($s0)
/*  f0eeb7c:	11a0000b */ 	beqz	$t5,.L0f0eebac
/*  f0eeb80:	00000000 */ 	nop
/*  f0eeb84:	8fb000b8 */ 	lw	$s0,0xb8($sp)
/*  f0eeb88:	00002825 */ 	or	$a1,$zero,$zero
/*  f0eeb8c:	2406007f */ 	addiu	$a2,$zero,0x7f
/*  f0eeb90:	0fc01a40 */ 	jal	colourBlend
/*  f0eeb94:	02002025 */ 	or	$a0,$s0,$zero
/*  f0eeb98:	2401ff00 */ 	addiu	$at,$zero,-256
/*  f0eeb9c:	00417024 */ 	and	$t6,$v0,$at
/*  f0eeba0:	320f00ff */ 	andi	$t7,$s0,0xff
/*  f0eeba4:	01cf8025 */ 	or	$s0,$t6,$t7
/*  f0eeba8:	afb000b8 */ 	sw	$s0,0xb8($sp)
.L0f0eebac:
/*  f0eebac:	0fc5b9f1 */ 	jal	langGet
/*  f0eebb0:	2404511a */ 	addiu	$a0,$zero,0x511a
/*  f0eebb4:	3c188008 */ 	lui	$t8,%hi(var8007fb04)
/*  f0eebb8:	8f18fb04 */ 	lw	$t8,%lo(var8007fb04)($t8)
/*  f0eebbc:	3c078008 */ 	lui	$a3,%hi(var8007fb08)
/*  f0eebc0:	8ce7fb08 */ 	lw	$a3,%lo(var8007fb08)($a3)
/*  f0eebc4:	8fb000b8 */ 	lw	$s0,0xb8($sp)
/*  f0eebc8:	27a400a8 */ 	addiu	$a0,$sp,0xa8
/*  f0eebcc:	27a500a4 */ 	addiu	$a1,$sp,0xa4
/*  f0eebd0:	00403025 */ 	or	$a2,$v0,$zero
/*  f0eebd4:	afa00014 */ 	sw	$zero,0x14($sp)
/*  f0eebd8:	0fc55cbe */ 	jal	textMeasure
/*  f0eebdc:	afb80010 */ 	sw	$t8,0x10($sp)
/*  f0eebe0:	86280000 */ 	lh	$t0,0x0($s1)
/*  f0eebe4:	8faa00a4 */ 	lw	$t2,0xa4($sp)
/*  f0eebe8:	2404511a */ 	addiu	$a0,$zero,0x511a
/*  f0eebec:	010a5823 */ 	subu	$t3,$t0,$t2
/*  f0eebf0:	25790078 */ 	addiu	$t9,$t3,0x78
/*  f0eebf4:	afb900c0 */ 	sw	$t9,0xc0($sp)
/*  f0eebf8:	862c0002 */ 	lh	$t4,0x2($s1)
/*  f0eebfc:	01924821 */ 	addu	$t1,$t4,$s2
/*  f0eec00:	0fc5b9f1 */ 	jal	langGet
/*  f0eec04:	afa900bc */ 	sw	$t1,0xbc($sp)
/*  f0eec08:	3c0d8008 */ 	lui	$t5,%hi(var8007fb08)
/*  f0eec0c:	3c0e8008 */ 	lui	$t6,%hi(var8007fb04)
/*  f0eec10:	8dcefb04 */ 	lw	$t6,%lo(var8007fb04)($t6)
/*  f0eec14:	8dadfb08 */ 	lw	$t5,%lo(var8007fb08)($t5)
/*  f0eec18:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f0eec1c:	afae0014 */ 	sw	$t6,0x14($sp)
/*  f0eec20:	afad0010 */ 	sw	$t5,0x10($sp)
/*  f0eec24:	862f0004 */ 	lh	$t7,0x4($s1)
/*  f0eec28:	02802025 */ 	or	$a0,$s4,$zero
/*  f0eec2c:	02e02825 */ 	or	$a1,$s7,$zero
/*  f0eec30:	afaf001c */ 	sw	$t7,0x1c($sp)
/*  f0eec34:	86380006 */ 	lh	$t8,0x6($s1)
/*  f0eec38:	afa00028 */ 	sw	$zero,0x28($sp)
/*  f0eec3c:	afa00024 */ 	sw	$zero,0x24($sp)
/*  f0eec40:	03c03025 */ 	or	$a2,$s8,$zero
/*  f0eec44:	00403825 */ 	or	$a3,$v0,$zero
/*  f0eec48:	0fc5580f */ 	jal	textRenderWhite
/*  f0eec4c:	afb80020 */ 	sw	$t8,0x20($sp)
/*  f0eec50:	0040a025 */ 	or	$s4,$v0,$zero
/*  f0eec54:	0fc5b9f1 */ 	jal	langGet
/*  f0eec58:	2404511b */ 	addiu	$a0,$zero,0x511b
/*  f0eec5c:	3c088008 */ 	lui	$t0,%hi(var8007fb04)
/*  f0eec60:	8d08fb04 */ 	lw	$t0,%lo(var8007fb04)($t0)
/*  f0eec64:	3c078008 */ 	lui	$a3,%hi(var8007fb08)
/*  f0eec68:	8ce7fb08 */ 	lw	$a3,%lo(var8007fb08)($a3)
/*  f0eec6c:	27a400a8 */ 	addiu	$a0,$sp,0xa8
/*  f0eec70:	27a500a4 */ 	addiu	$a1,$sp,0xa4
/*  f0eec74:	00403025 */ 	or	$a2,$v0,$zero
/*  f0eec78:	afa00014 */ 	sw	$zero,0x14($sp)
/*  f0eec7c:	0fc55cbe */ 	jal	textMeasure
/*  f0eec80:	afa80010 */ 	sw	$t0,0x10($sp)
/*  f0eec84:	862a0000 */ 	lh	$t2,0x0($s1)
/*  f0eec88:	8fab00a4 */ 	lw	$t3,0xa4($sp)
/*  f0eec8c:	2404511b */ 	addiu	$a0,$zero,0x511b
/*  f0eec90:	014bc823 */ 	subu	$t9,$t2,$t3
/*  f0eec94:	272c0019 */ 	addiu	$t4,$t9,0x19
/*  f0eec98:	afac00c0 */ 	sw	$t4,0xc0($sp)
/*  f0eec9c:	86290002 */ 	lh	$t1,0x2($s1)
/*  f0eeca0:	01326821 */ 	addu	$t5,$t1,$s2
/*  f0eeca4:	0fc5b9f1 */ 	jal	langGet
/*  f0eeca8:	afad00bc */ 	sw	$t5,0xbc($sp)
/*  f0eecac:	3c0e8008 */ 	lui	$t6,%hi(var8007fb08)
/*  f0eecb0:	3c0f8008 */ 	lui	$t7,%hi(var8007fb04)
/*  f0eecb4:	8deffb04 */ 	lw	$t7,%lo(var8007fb04)($t7)
/*  f0eecb8:	8dcefb08 */ 	lw	$t6,%lo(var8007fb08)($t6)
/*  f0eecbc:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f0eecc0:	afaf0014 */ 	sw	$t7,0x14($sp)
/*  f0eecc4:	afae0010 */ 	sw	$t6,0x10($sp)
/*  f0eecc8:	86380004 */ 	lh	$t8,0x4($s1)
/*  f0eeccc:	02802025 */ 	or	$a0,$s4,$zero
/*  f0eecd0:	02e02825 */ 	or	$a1,$s7,$zero
/*  f0eecd4:	afb8001c */ 	sw	$t8,0x1c($sp)
/*  f0eecd8:	86280006 */ 	lh	$t0,0x6($s1)
/*  f0eecdc:	afa00028 */ 	sw	$zero,0x28($sp)
/*  f0eece0:	afa00024 */ 	sw	$zero,0x24($sp)
/*  f0eece4:	03c03025 */ 	or	$a2,$s8,$zero
/*  f0eece8:	00403825 */ 	or	$a3,$v0,$zero
/*  f0eecec:	0fc5580f */ 	jal	textRenderWhite
/*  f0eecf0:	afa80020 */ 	sw	$t0,0x20($sp)
/*  f0eecf4:	8faa00a0 */ 	lw	$t2,0xa0($sp)
/*  f0eecf8:	86390006 */ 	lh	$t9,0x6($s1)
/*  f0eecfc:	26520007 */ 	addiu	$s2,$s2,0x7
/*  f0eed00:	000a5880 */ 	sll	$t3,$t2,0x2
/*  f0eed04:	016a5821 */ 	addu	$t3,$t3,$t2
/*  f0eed08:	000b5840 */ 	sll	$t3,$t3,0x1
/*  f0eed0c:	01796023 */ 	subu	$t4,$t3,$t9
/*  f0eed10:	01921821 */ 	addu	$v1,$t4,$s2
/*  f0eed14:	2463fff6 */ 	addiu	$v1,$v1,-10
/*  f0eed18:	04610002 */ 	bgez	$v1,.L0f0eed24
/*  f0eed1c:	8fa700c4 */ 	lw	$a3,0xc4($sp)
/*  f0eed20:	00001825 */ 	or	$v1,$zero,$zero
.L0f0eed24:
/*  f0eed24:	84e9000c */ 	lh	$t1,0xc($a3)
/*  f0eed28:	3c0de700 */ 	lui	$t5,0xe700
/*  f0eed2c:	3c048008 */ 	lui	$a0,%hi(g_ScreenWidthMultiplier)
/*  f0eed30:	0069082a */ 	slt	$at,$v1,$t1
/*  f0eed34:	50200003 */ 	beqzl	$at,.L0f0eed44
/*  f0eed38:	ac4d0000 */ 	sw	$t5,0x0($v0)
/*  f0eed3c:	a4e3000c */ 	sh	$v1,0xc($a3)
/*  f0eed40:	ac4d0000 */ 	sw	$t5,0x0($v0)
.L0f0eed44:
/*  f0eed44:	ac400004 */ 	sw	$zero,0x4($v0)
/*  f0eed48:	862e0000 */ 	lh	$t6,0x0($s1)
/*  f0eed4c:	8c84fac0 */ 	lw	$a0,%lo(g_ScreenWidthMultiplier)($a0)
/*  f0eed50:	3c108007 */ 	lui	$s0,%hi(var80071190)
/*  f0eed54:	26101190 */ 	addiu	$s0,$s0,%lo(var80071190)
/*  f0eed58:	01c40019 */ 	multu	$t6,$a0
/*  f0eed5c:	3c058007 */ 	lui	$a1,%hi(var80071194)
/*  f0eed60:	24a51194 */ 	addiu	$a1,$a1,%lo(var80071194)
/*  f0eed64:	3c018007 */ 	lui	$at,%hi(var80071198)
/*  f0eed68:	3c068007 */ 	lui	$a2,%hi(var8007119c)
/*  f0eed6c:	24540008 */ 	addiu	$s4,$v0,0x8
/*  f0eed70:	24c6119c */ 	addiu	$a2,$a2,%lo(var8007119c)
/*  f0eed74:	3c028007 */ 	lui	$v0,%hi(var80071198)
/*  f0eed78:	24421198 */ 	addiu	$v0,$v0,%lo(var80071198)
/*  f0eed7c:	00007812 */ 	mflo	$t7
/*  f0eed80:	ae0f0000 */ 	sw	$t7,0x0($s0)
/*  f0eed84:	86280004 */ 	lh	$t0,0x4($s1)
/*  f0eed88:	86380000 */ 	lh	$t8,0x0($s1)
/*  f0eed8c:	03085021 */ 	addu	$t2,$t8,$t0
/*  f0eed90:	01440019 */ 	multu	$t2,$a0
/*  f0eed94:	00005812 */ 	mflo	$t3
/*  f0eed98:	acab0000 */ 	sw	$t3,0x0($a1)
/*  f0eed9c:	86390002 */ 	lh	$t9,0x2($s1)
/*  f0eeda0:	03326021 */ 	addu	$t4,$t9,$s2
/*  f0eeda4:	ac2c1198 */ 	sw	$t4,%lo(var80071198)($at)
/*  f0eeda8:	862d0006 */ 	lh	$t5,0x6($s1)
/*  f0eedac:	86290002 */ 	lh	$t1,0x2($s1)
/*  f0eedb0:	8e0f0000 */ 	lw	$t7,0x0($s0)
/*  f0eedb4:	012d7021 */ 	addu	$t6,$t1,$t5
/*  f0eedb8:	05e10002 */ 	bgez	$t7,.L0f0eedc4
/*  f0eedbc:	acce0000 */ 	sw	$t6,0x0($a2)
/*  f0eedc0:	ae000000 */ 	sw	$zero,0x0($s0)
.L0f0eedc4:
/*  f0eedc4:	8cb80000 */ 	lw	$t8,0x0($a1)
/*  f0eedc8:	07030003 */ 	bgezl	$t8,.L0f0eedd8
/*  f0eedcc:	8c480000 */ 	lw	$t0,0x0($v0)
/*  f0eedd0:	aca00000 */ 	sw	$zero,0x0($a1)
/*  f0eedd4:	8c480000 */ 	lw	$t0,0x0($v0)
.L0f0eedd8:
/*  f0eedd8:	05030003 */ 	bgezl	$t0,.L0f0eede8
/*  f0eeddc:	8cca0000 */ 	lw	$t2,0x0($a2)
/*  f0eede0:	ac400000 */ 	sw	$zero,0x0($v0)
/*  f0eede4:	8cca0000 */ 	lw	$t2,0x0($a2)
.L0f0eede8:
/*  f0eede8:	05410002 */ 	bgez	$t2,.L0f0eedf4
/*  f0eedec:	00000000 */ 	nop
/*  f0eedf0:	acc00000 */ 	sw	$zero,0x0($a2)
.L0f0eedf4:
/*  f0eedf4:	0c002ef1 */ 	jal	viGetBufX
/*  f0eedf8:	00000000 */ 	nop
/*  f0eedfc:	8e0b0000 */ 	lw	$t3,0x0($s0)
/*  f0eee00:	004b082a */ 	slt	$at,$v0,$t3
/*  f0eee04:	10200004 */ 	beqz	$at,.L0f0eee18
/*  f0eee08:	00000000 */ 	nop
/*  f0eee0c:	0c002ef1 */ 	jal	viGetBufX
/*  f0eee10:	00000000 */ 	nop
/*  f0eee14:	ae020000 */ 	sw	$v0,0x0($s0)
.L0f0eee18:
/*  f0eee18:	0c002ef1 */ 	jal	viGetBufX
/*  f0eee1c:	00000000 */ 	nop
/*  f0eee20:	3c198007 */ 	lui	$t9,%hi(var80071194)
/*  f0eee24:	8f391194 */ 	lw	$t9,%lo(var80071194)($t9)
/*  f0eee28:	0059082a */ 	slt	$at,$v0,$t9
/*  f0eee2c:	10200005 */ 	beqz	$at,.L0f0eee44
/*  f0eee30:	00000000 */ 	nop
/*  f0eee34:	0c002ef1 */ 	jal	viGetBufX
/*  f0eee38:	00000000 */ 	nop
/*  f0eee3c:	3c018007 */ 	lui	$at,%hi(var80071194)
/*  f0eee40:	ac221194 */ 	sw	$v0,%lo(var80071194)($at)
.L0f0eee44:
/*  f0eee44:	0c002ef5 */ 	jal	viGetBufY
/*  f0eee48:	00000000 */ 	nop
/*  f0eee4c:	3c0c8007 */ 	lui	$t4,%hi(var80071198)
/*  f0eee50:	8d8c1198 */ 	lw	$t4,%lo(var80071198)($t4)
/*  f0eee54:	004c082a */ 	slt	$at,$v0,$t4
/*  f0eee58:	10200005 */ 	beqz	$at,.L0f0eee70
/*  f0eee5c:	00000000 */ 	nop
/*  f0eee60:	0c002ef5 */ 	jal	viGetBufY
/*  f0eee64:	00000000 */ 	nop
/*  f0eee68:	3c018007 */ 	lui	$at,%hi(var80071198)
/*  f0eee6c:	ac221198 */ 	sw	$v0,%lo(var80071198)($at)
.L0f0eee70:
/*  f0eee70:	0c002ef5 */ 	jal	viGetBufY
/*  f0eee74:	00000000 */ 	nop
/*  f0eee78:	3c058007 */ 	lui	$a1,%hi(var8007119c)
/*  f0eee7c:	8ca5119c */ 	lw	$a1,%lo(var8007119c)($a1)
/*  f0eee80:	0045082a */ 	slt	$at,$v0,$a1
/*  f0eee84:	10200007 */ 	beqz	$at,.L0f0eeea4
/*  f0eee88:	00000000 */ 	nop
/*  f0eee8c:	0c002ef5 */ 	jal	viGetBufY
/*  f0eee90:	00000000 */ 	nop
/*  f0eee94:	3c018007 */ 	lui	$at,%hi(var8007119c)
/*  f0eee98:	ac22119c */ 	sw	$v0,%lo(var8007119c)($at)
/*  f0eee9c:	3c058007 */ 	lui	$a1,%hi(var8007119c)
/*  f0eeea0:	8ca5119c */ 	lw	$a1,%lo(var8007119c)($a1)
.L0f0eeea4:
/*  f0eeea4:	3c068007 */ 	lui	$a2,%hi(var80071194)
/*  f0eeea8:	8e030000 */ 	lw	$v1,0x0($s0)
/*  f0eeeac:	24c61194 */ 	addiu	$a2,$a2,%lo(var80071194)
/*  f0eeeb0:	8cc90000 */ 	lw	$t1,0x0($a2)
/*  f0eeeb4:	44835000 */ 	mtc1	$v1,$f10
/*  f0eeeb8:	3c048007 */ 	lui	$a0,%hi(var80071198)
/*  f0eeebc:	0123082a */ 	slt	$at,$t1,$v1
/*  f0eeec0:	10200002 */ 	beqz	$at,.L0f0eeecc
/*  f0eeec4:	46805420 */ 	cvt.s.w	$f16,$f10
/*  f0eeec8:	acc30000 */ 	sw	$v1,0x0($a2)
.L0f0eeecc:
/*  f0eeecc:	8c841198 */ 	lw	$a0,%lo(var80071198)($a0)
/*  f0eeed0:	00a4082a */ 	slt	$at,$a1,$a0
/*  f0eeed4:	10200002 */ 	beqz	$at,.L0f0eeee0
/*  f0eeed8:	3c018007 */ 	lui	$at,%hi(var8007119c)
/*  f0eeedc:	ac24119c */ 	sw	$a0,%lo(var8007119c)($at)
.L0f0eeee0:
/*  f0eeee0:	44843000 */ 	mtc1	$a0,$f6
/*  f0eeee4:	3c014080 */ 	lui	$at,0x4080
/*  f0eeee8:	44810000 */ 	mtc1	$at,$f0
/*  f0eeeec:	46803220 */ 	cvt.s.w	$f8,$f6
/*  f0eeef0:	3c01ed00 */ 	lui	$at,0xed00
/*  f0eeef4:	46008482 */ 	mul.s	$f18,$f16,$f0
/*  f0eeef8:	02801025 */ 	or	$v0,$s4,$zero
/*  f0eeefc:	3c0a8007 */ 	lui	$t2,%hi(var8007119c)
/*  f0eef00:	26940008 */ 	addiu	$s4,$s4,0x8
/*  f0eef04:	46004282 */ 	mul.s	$f10,$f8,$f0
/*  f0eef08:	00008025 */ 	or	$s0,$zero,$zero
/*  f0eef0c:	4600910d */ 	trunc.w.s	$f4,$f18
/*  f0eef10:	4600540d */ 	trunc.w.s	$f16,$f10
/*  f0eef14:	440e2000 */ 	mfc1	$t6,$f4
/*  f0eef18:	440b8000 */ 	mfc1	$t3,$f16
/*  f0eef1c:	31cf0fff */ 	andi	$t7,$t6,0xfff
/*  f0eef20:	000fc300 */ 	sll	$t8,$t7,0xc
/*  f0eef24:	03014025 */ 	or	$t0,$t8,$at
/*  f0eef28:	31790fff */ 	andi	$t9,$t3,0xfff
/*  f0eef2c:	01196025 */ 	or	$t4,$t0,$t9
/*  f0eef30:	ac4c0000 */ 	sw	$t4,0x0($v0)
/*  f0eef34:	8cc90000 */ 	lw	$t1,0x0($a2)
/*  f0eef38:	8d4a119c */ 	lw	$t2,%lo(var8007119c)($t2)
/*  f0eef3c:	44899000 */ 	mtc1	$t1,$f18
/*  f0eef40:	448a5000 */ 	mtc1	$t2,$f10
/*  f0eef44:	46809120 */ 	cvt.s.w	$f4,$f18
/*  f0eef48:	46805420 */ 	cvt.s.w	$f16,$f10
/*  f0eef4c:	46002182 */ 	mul.s	$f6,$f4,$f0
/*  f0eef50:	00000000 */ 	nop
/*  f0eef54:	46008482 */ 	mul.s	$f18,$f16,$f0
/*  f0eef58:	4600320d */ 	trunc.w.s	$f8,$f6
/*  f0eef5c:	4600910d */ 	trunc.w.s	$f4,$f18
/*  f0eef60:	440e4000 */ 	mfc1	$t6,$f8
/*  f0eef64:	44082000 */ 	mfc1	$t0,$f4
/*  f0eef68:	31cf0fff */ 	andi	$t7,$t6,0xfff
/*  f0eef6c:	000fc300 */ 	sll	$t8,$t7,0xc
/*  f0eef70:	31190fff */ 	andi	$t9,$t0,0xfff
/*  f0eef74:	03196025 */ 	or	$t4,$t8,$t9
/*  f0eef78:	ac4c0004 */ 	sw	$t4,0x4($v0)
/*  f0eef7c:	8fa900c4 */ 	lw	$t1,0xc4($sp)
/*  f0eef80:	852d000c */ 	lh	$t5,0xc($t1)
/*  f0eef84:	024d9023 */ 	subu	$s2,$s2,$t5
.L0f0eef88:
/*  f0eef88:	3c0e800b */ 	lui	$t6,%hi(g_MpSetup+0x16)
/*  f0eef8c:	95cecb9e */ 	lhu	$t6,%lo(g_MpSetup+0x16)($t6)
/*  f0eef90:	240f0001 */ 	addiu	$t7,$zero,0x1
/*  f0eef94:	020f5004 */ 	sllv	$t2,$t7,$s0
/*  f0eef98:	01ca5824 */ 	and	$t3,$t6,$t2
/*  f0eef9c:	11600086 */ 	beqz	$t3,.L0f0ef1b8
/*  f0eefa0:	2a010004 */ 	slti	$at,$s0,0x4
/*  f0eefa4:	10200008 */ 	beqz	$at,.L0f0eefc8
/*  f0eefa8:	8fad00b4 */ 	lw	$t5,0xb4($sp)
/*  f0eefac:	00104080 */ 	sll	$t0,$s0,0x2
/*  f0eefb0:	01104021 */ 	addu	$t0,$t0,$s0
/*  f0eefb4:	3c18800b */ 	lui	$t8,%hi(g_MpPlayers)
/*  f0eefb8:	2718c7b8 */ 	addiu	$t8,$t8,%lo(g_MpPlayers)
/*  f0eefbc:	00084140 */ 	sll	$t0,$t0,0x5
/*  f0eefc0:	1000000a */ 	b	.L0f0eefec
/*  f0eefc4:	01183821 */ 	addu	$a3,$t0,$t8
.L0f0eefc8:
/*  f0eefc8:	0010c880 */ 	sll	$t9,$s0,0x2
/*  f0eefcc:	0330c821 */ 	addu	$t9,$t9,$s0
/*  f0eefd0:	0019c880 */ 	sll	$t9,$t9,0x2
/*  f0eefd4:	0330c823 */ 	subu	$t9,$t9,$s0
/*  f0eefd8:	0019c880 */ 	sll	$t9,$t9,0x2
/*  f0eefdc:	3c09800b */ 	lui	$t1,%hi(g_MpSimulants)
/*  f0eefe0:	2529c538 */ 	addiu	$t1,$t1,%lo(g_MpSimulants)
/*  f0eefe4:	272cfed0 */ 	addiu	$t4,$t9,-304
/*  f0eefe8:	01893821 */ 	addu	$a3,$t4,$t1
.L0f0eefec:
/*  f0eefec:	120d0072 */ 	beq	$s0,$t5,.L0f0ef1b8
/*  f0eeff0:	02802025 */ 	or	$a0,$s4,$zero
/*  f0eeff4:	862f0000 */ 	lh	$t7,0x0($s1)
/*  f0eeff8:	8ea80000 */ 	lw	$t0,0x0($s5)
/*  f0eeffc:	8ed80000 */ 	lw	$t8,0x0($s6)
/*  f0ef000:	25ee001d */ 	addiu	$t6,$t7,0x1d
/*  f0ef004:	afae00c0 */ 	sw	$t6,0xc0($sp)
/*  f0ef008:	862a0002 */ 	lh	$t2,0x2($s1)
/*  f0ef00c:	3c1900ff */ 	lui	$t9,0xff
/*  f0ef010:	3739ffff */ 	ori	$t9,$t9,0xffff
/*  f0ef014:	01525821 */ 	addu	$t3,$t2,$s2
/*  f0ef018:	afab00bc */ 	sw	$t3,0xbc($sp)
/*  f0ef01c:	afb90018 */ 	sw	$t9,0x18($sp)
/*  f0ef020:	afa80010 */ 	sw	$t0,0x10($sp)
/*  f0ef024:	afb80014 */ 	sw	$t8,0x14($sp)
/*  f0ef028:	862c0004 */ 	lh	$t4,0x4($s1)
/*  f0ef02c:	8fad00b0 */ 	lw	$t5,0xb0($sp)
/*  f0ef030:	00107840 */ 	sll	$t7,$s0,0x1
/*  f0ef034:	afac001c */ 	sw	$t4,0x1c($sp)
/*  f0ef038:	86290006 */ 	lh	$t1,0x6($s1)
/*  f0ef03c:	01af7021 */ 	addu	$t6,$t5,$t7
/*  f0ef040:	afae0070 */ 	sw	$t6,0x70($sp)
/*  f0ef044:	afa70078 */ 	sw	$a3,0x78($sp)
/*  f0ef048:	afa00028 */ 	sw	$zero,0x28($sp)
/*  f0ef04c:	afa00024 */ 	sw	$zero,0x24($sp)
/*  f0ef050:	02e02825 */ 	or	$a1,$s7,$zero
/*  f0ef054:	03c03025 */ 	or	$a2,$s8,$zero
/*  f0ef058:	0fc5580f */ 	jal	textRenderWhite
/*  f0ef05c:	afa90020 */ 	sw	$t1,0x20($sp)
/*  f0ef060:	8fa70078 */ 	lw	$a3,0x78($sp)
/*  f0ef064:	8faa006c */ 	lw	$t2,0x6c($sp)
/*  f0ef068:	3c057f1b */ 	lui	$a1,%hi(var7f1b1e50)
/*  f0ef06c:	0040a025 */ 	or	$s4,$v0,$zero
/*  f0ef070:	00ea5821 */ 	addu	$t3,$a3,$t2
/*  f0ef074:	85660024 */ 	lh	$a2,0x24($t3)
/*  f0ef078:	24a51e50 */ 	addiu	$a1,$a1,%lo(var7f1b1e50)
/*  f0ef07c:	0c004dad */ 	jal	sprintf
/*  f0ef080:	02602025 */ 	or	$a0,$s3,$zero
/*  f0ef084:	8ec80000 */ 	lw	$t0,0x0($s6)
/*  f0ef088:	27a400a8 */ 	addiu	$a0,$sp,0xa8
/*  f0ef08c:	27a500a4 */ 	addiu	$a1,$sp,0xa4
/*  f0ef090:	02603025 */ 	or	$a2,$s3,$zero
/*  f0ef094:	8ea70000 */ 	lw	$a3,0x0($s5)
/*  f0ef098:	afa00014 */ 	sw	$zero,0x14($sp)
/*  f0ef09c:	0fc55cbe */ 	jal	textMeasure
/*  f0ef0a0:	afa80010 */ 	sw	$t0,0x10($sp)
/*  f0ef0a4:	86380000 */ 	lh	$t8,0x0($s1)
/*  f0ef0a8:	8fb900a4 */ 	lw	$t9,0xa4($sp)
/*  f0ef0ac:	8eae0000 */ 	lw	$t6,0x0($s5)
/*  f0ef0b0:	8eca0000 */ 	lw	$t2,0x0($s6)
/*  f0ef0b4:	03196023 */ 	subu	$t4,$t8,$t9
/*  f0ef0b8:	25890078 */ 	addiu	$t1,$t4,0x78
/*  f0ef0bc:	afa900c0 */ 	sw	$t1,0xc0($sp)
/*  f0ef0c0:	862d0002 */ 	lh	$t5,0x2($s1)
/*  f0ef0c4:	3c0bff40 */ 	lui	$t3,0xff40
/*  f0ef0c8:	356b40ff */ 	ori	$t3,$t3,0x40ff
/*  f0ef0cc:	01b27821 */ 	addu	$t7,$t5,$s2
/*  f0ef0d0:	afaf00bc */ 	sw	$t7,0xbc($sp)
/*  f0ef0d4:	afab0018 */ 	sw	$t3,0x18($sp)
/*  f0ef0d8:	afae0010 */ 	sw	$t6,0x10($sp)
/*  f0ef0dc:	afaa0014 */ 	sw	$t2,0x14($sp)
/*  f0ef0e0:	86280004 */ 	lh	$t0,0x4($s1)
/*  f0ef0e4:	02802025 */ 	or	$a0,$s4,$zero
/*  f0ef0e8:	02e02825 */ 	or	$a1,$s7,$zero
/*  f0ef0ec:	afa8001c */ 	sw	$t0,0x1c($sp)
/*  f0ef0f0:	86380006 */ 	lh	$t8,0x6($s1)
/*  f0ef0f4:	afa00028 */ 	sw	$zero,0x28($sp)
/*  f0ef0f8:	afa00024 */ 	sw	$zero,0x24($sp)
/*  f0ef0fc:	03c03025 */ 	or	$a2,$s8,$zero
/*  f0ef100:	02603825 */ 	or	$a3,$s3,$zero
/*  f0ef104:	0fc5580f */ 	jal	textRenderWhite
/*  f0ef108:	afb80020 */ 	sw	$t8,0x20($sp)
/*  f0ef10c:	8fb90070 */ 	lw	$t9,0x70($sp)
/*  f0ef110:	3c057f1b */ 	lui	$a1,%hi(var7f1b1e54)
/*  f0ef114:	0040a025 */ 	or	$s4,$v0,$zero
/*  f0ef118:	24a51e54 */ 	addiu	$a1,$a1,%lo(var7f1b1e54)
/*  f0ef11c:	02602025 */ 	or	$a0,$s3,$zero
/*  f0ef120:	0c004dad */ 	jal	sprintf
/*  f0ef124:	87260024 */ 	lh	$a2,0x24($t9)
/*  f0ef128:	8ecc0000 */ 	lw	$t4,0x0($s6)
/*  f0ef12c:	27a400a8 */ 	addiu	$a0,$sp,0xa8
/*  f0ef130:	27a500a4 */ 	addiu	$a1,$sp,0xa4
/*  f0ef134:	02603025 */ 	or	$a2,$s3,$zero
/*  f0ef138:	8ea70000 */ 	lw	$a3,0x0($s5)
/*  f0ef13c:	afa00014 */ 	sw	$zero,0x14($sp)
/*  f0ef140:	0fc55cbe */ 	jal	textMeasure
/*  f0ef144:	afac0010 */ 	sw	$t4,0x10($sp)
/*  f0ef148:	86290000 */ 	lh	$t1,0x0($s1)
/*  f0ef14c:	8fad00a4 */ 	lw	$t5,0xa4($sp)
/*  f0ef150:	8ea80000 */ 	lw	$t0,0x0($s5)
/*  f0ef154:	8ed80000 */ 	lw	$t8,0x0($s6)
/*  f0ef158:	012d7823 */ 	subu	$t7,$t1,$t5
/*  f0ef15c:	25ee0019 */ 	addiu	$t6,$t7,0x19
/*  f0ef160:	afae00c0 */ 	sw	$t6,0xc0($sp)
/*  f0ef164:	862a0002 */ 	lh	$t2,0x2($s1)
/*  f0ef168:	3c1900ff */ 	lui	$t9,0xff
/*  f0ef16c:	373900ff */ 	ori	$t9,$t9,0xff
/*  f0ef170:	01525821 */ 	addu	$t3,$t2,$s2
/*  f0ef174:	afab00bc */ 	sw	$t3,0xbc($sp)
/*  f0ef178:	afb90018 */ 	sw	$t9,0x18($sp)
/*  f0ef17c:	afa80010 */ 	sw	$t0,0x10($sp)
/*  f0ef180:	afb80014 */ 	sw	$t8,0x14($sp)
/*  f0ef184:	862c0004 */ 	lh	$t4,0x4($s1)
/*  f0ef188:	02802025 */ 	or	$a0,$s4,$zero
/*  f0ef18c:	02e02825 */ 	or	$a1,$s7,$zero
/*  f0ef190:	afac001c */ 	sw	$t4,0x1c($sp)
/*  f0ef194:	86290006 */ 	lh	$t1,0x6($s1)
/*  f0ef198:	afa00028 */ 	sw	$zero,0x28($sp)
/*  f0ef19c:	afa00024 */ 	sw	$zero,0x24($sp)
/*  f0ef1a0:	03c03025 */ 	or	$a2,$s8,$zero
/*  f0ef1a4:	02603825 */ 	or	$a3,$s3,$zero
/*  f0ef1a8:	0fc5580f */ 	jal	textRenderWhite
/*  f0ef1ac:	afa90020 */ 	sw	$t1,0x20($sp)
/*  f0ef1b0:	0040a025 */ 	or	$s4,$v0,$zero
/*  f0ef1b4:	2652000a */ 	addiu	$s2,$s2,0xa
.L0f0ef1b8:
/*  f0ef1b8:	26100001 */ 	addiu	$s0,$s0,0x1
/*  f0ef1bc:	2401000c */ 	addiu	$at,$zero,0xc
/*  f0ef1c0:	1601ff71 */ 	bne	$s0,$at,.L0f0eef88
/*  f0ef1c4:	00000000 */ 	nop
.L0f0ef1c8:
/*  f0ef1c8:	0fc54de0 */ 	jal	func0f153780
/*  f0ef1cc:	02802025 */ 	or	$a0,$s4,$zero
/*  f0ef1d0:	8fbf005c */ 	lw	$ra,0x5c($sp)
/*  f0ef1d4:	8fb00038 */ 	lw	$s0,0x38($sp)
/*  f0ef1d8:	8fb1003c */ 	lw	$s1,0x3c($sp)
/*  f0ef1dc:	8fb20040 */ 	lw	$s2,0x40($sp)
/*  f0ef1e0:	8fb30044 */ 	lw	$s3,0x44($sp)
/*  f0ef1e4:	8fb40048 */ 	lw	$s4,0x48($sp)
/*  f0ef1e8:	8fb5004c */ 	lw	$s5,0x4c($sp)
/*  f0ef1ec:	8fb60050 */ 	lw	$s6,0x50($sp)
/*  f0ef1f0:	8fb70054 */ 	lw	$s7,0x54($sp)
/*  f0ef1f4:	8fbe0058 */ 	lw	$s8,0x58($sp)
/*  f0ef1f8:	03e00008 */ 	jr	$ra
/*  f0ef1fc:	27bd00c8 */ 	addiu	$sp,$sp,0xc8
);

bool menuTickItemPlayerStats(struct menuitem *item, struct menuframe *frame, struct menuinputs *inputs, u32 arg3, union menuitemtickdata *data)
{
	f32 floatval;
	s32 intval;

	if ((arg3 & 2) && !frame->dimmed) {
		intval = 0;
		floatval = inputs->yaxis < 0 ? -(f32)inputs->yaxis : inputs->yaxis;

		if (floatval > 20) {
			floatval = (floatval - 20) / 5;
			floatval *= g_Vars.diffframe60f;

			intval = inputs->yaxis < 0 ? (s32)floatval : -(s32)floatval;
		}

		intval += inputs->unk09 * 2 * g_Vars.diffframe60;
		data->dropdown.scrolloffset += intval;

		if (data->dropdown.scrolloffset < 0) {
			data->dropdown.scrolloffset = 0;
		}
	}

	menuTickItemDropdown(item, frame, inputs, arg3, data);
}

Gfx *func0f0ef2fc(Gfx *gdl, s16 x, s16 y, s16 x2, s16 y2, struct menuitem *item, u32 arg6, u32 arg7)
{
	return func0f0e8290(gdl, x + 1, y, -1, y2, item, arg6, arg7);
}

void menuInitItemPlayerStats(struct menuitem *item, union menuitemtickdata *data)
{
	data->dropdown.scrolloffset = 0;
	var8009deb0[g_MpPlayerNum] = g_MpPlayerNum;

	menuInitItemDropdown(item, data);
}

GLOBAL_ASM(
glabel func0f0ef394
/*  f0ef394:	3c098008 */ 	lui	$t1,%hi(g_ScreenWidthMultiplier)
/*  f0ef398:	8faf0010 */ 	lw	$t7,0x10($sp)
/*  f0ef39c:	2529fac0 */ 	addiu	$t1,$t1,%lo(g_ScreenWidthMultiplier)
/*  f0ef3a0:	8d390000 */ 	lw	$t9,0x0($t1)
/*  f0ef3a4:	000fc080 */ 	sll	$t8,$t7,0x2
/*  f0ef3a8:	04c10004 */ 	bgez	$a2,.L0f0ef3bc
/*  f0ef3ac:	30ce0003 */ 	andi	$t6,$a2,0x3
/*  f0ef3b0:	11c00002 */ 	beqz	$t6,.L0f0ef3bc
/*  f0ef3b4:	00000000 */ 	nop
/*  f0ef3b8:	25cefffc */ 	addiu	$t6,$t6,-4
.L0f0ef3bc:
/*  f0ef3bc:	03190019 */ 	multu	$t8,$t9
/*  f0ef3c0:	01c52821 */ 	addu	$a1,$t6,$a1
/*  f0ef3c4:	8fae0014 */ 	lw	$t6,0x14($sp)
/*  f0ef3c8:	3c01e400 */ 	lui	$at,0xe400
/*  f0ef3cc:	00801025 */ 	or	$v0,$a0,$zero
/*  f0ef3d0:	000e7880 */ 	sll	$t7,$t6,0x2
/*  f0ef3d4:	31f80fff */ 	andi	$t8,$t7,0xfff
/*  f0ef3d8:	24840008 */ 	addiu	$a0,$a0,0x8
/*  f0ef3dc:	00801825 */ 	or	$v1,$a0,$zero
/*  f0ef3e0:	24840008 */ 	addiu	$a0,$a0,0x8
/*  f0ef3e4:	00005012 */ 	mflo	$t2
/*  f0ef3e8:	314b0fff */ 	andi	$t3,$t2,0xfff
/*  f0ef3ec:	000b6300 */ 	sll	$t4,$t3,0xc
/*  f0ef3f0:	01816825 */ 	or	$t5,$t4,$at
/*  f0ef3f4:	01b8c825 */ 	or	$t9,$t5,$t8
/*  f0ef3f8:	ac590000 */ 	sw	$t9,0x0($v0)
/*  f0ef3fc:	8d2b0000 */ 	lw	$t3,0x0($t1)
/*  f0ef400:	00065080 */ 	sll	$t2,$a2,0x2
/*  f0ef404:	00076880 */ 	sll	$t5,$a3,0x2
/*  f0ef408:	014b0019 */ 	multu	$t2,$t3
/*  f0ef40c:	31b80fff */ 	andi	$t8,$t5,0xfff
/*  f0ef410:	00055940 */ 	sll	$t3,$a1,0x5
/*  f0ef414:	3c0ab400 */ 	lui	$t2,0xb400
/*  f0ef418:	00804025 */ 	or	$t0,$a0,$zero
/*  f0ef41c:	24840008 */ 	addiu	$a0,$a0,0x8
/*  f0ef420:	00006012 */ 	mflo	$t4
/*  f0ef424:	318e0fff */ 	andi	$t6,$t4,0xfff
/*  f0ef428:	000e7b00 */ 	sll	$t7,$t6,0xc
/*  f0ef42c:	01f8c825 */ 	or	$t9,$t7,$t8
/*  f0ef430:	ac590004 */ 	sw	$t9,0x4($v0)
/*  f0ef434:	01606025 */ 	or	$t4,$t3,$zero
/*  f0ef438:	000c7400 */ 	sll	$t6,$t4,0x10
/*  f0ef43c:	ac6a0000 */ 	sw	$t2,0x0($v1)
/*  f0ef440:	04e10004 */ 	bgez	$a3,.L0f0ef454
/*  f0ef444:	30ed0003 */ 	andi	$t5,$a3,0x3
/*  f0ef448:	11a00002 */ 	beqz	$t5,.L0f0ef454
/*  f0ef44c:	00000000 */ 	nop
/*  f0ef450:	25adfffc */ 	addiu	$t5,$t5,-4
.L0f0ef454:
/*  f0ef454:	000d7940 */ 	sll	$t7,$t5,0x5
/*  f0ef458:	31f8ffff */ 	andi	$t8,$t7,0xffff
/*  f0ef45c:	01d8c825 */ 	or	$t9,$t6,$t8
/*  f0ef460:	ac790004 */ 	sw	$t9,0x4($v1)
/*  f0ef464:	3c0ab300 */ 	lui	$t2,0xb300
/*  f0ef468:	ad0a0000 */ 	sw	$t2,0x0($t0)
/*  f0ef46c:	8d2b0000 */ 	lw	$t3,0x0($t1)
/*  f0ef470:	240c0400 */ 	addiu	$t4,$zero,0x400
/*  f0ef474:	00801025 */ 	or	$v0,$a0,$zero
/*  f0ef478:	018b001a */ 	div	$zero,$t4,$t3
/*  f0ef47c:	00006812 */ 	mflo	$t5
/*  f0ef480:	31afffff */ 	andi	$t7,$t5,0xffff
/*  f0ef484:	000f7400 */ 	sll	$t6,$t7,0x10
/*  f0ef488:	35d80400 */ 	ori	$t8,$t6,0x400
/*  f0ef48c:	15600002 */ 	bnez	$t3,.L0f0ef498
/*  f0ef490:	00000000 */ 	nop
/*  f0ef494:	0007000d */ 	break	0x7
.L0f0ef498:
/*  f0ef498:	2401ffff */ 	addiu	$at,$zero,-1
/*  f0ef49c:	15610004 */ 	bne	$t3,$at,.L0f0ef4b0
/*  f0ef4a0:	3c018000 */ 	lui	$at,0x8000
/*  f0ef4a4:	15810002 */ 	bne	$t4,$at,.L0f0ef4b0
/*  f0ef4a8:	00000000 */ 	nop
/*  f0ef4ac:	0006000d */ 	break	0x6
.L0f0ef4b0:
/*  f0ef4b0:	ad180004 */ 	sw	$t8,0x4($t0)
/*  f0ef4b4:	03e00008 */ 	jr	$ra
/*  f0ef4b8:	00000000 */ 	nop
);

Gfx *menuRenderControllerTexture(Gfx *gdl, s32 x, s32 y, s32 texturenum, u32 alpha)
{
	gDPPipeSync(gdl++);
	gDPSetTexturePersp(gdl++, G_TP_NONE);
	gDPSetAlphaCompare(gdl++, G_AC_NONE);
	gDPSetTextureLOD(gdl++, G_TL_TILE);
	gDPSetTextureConvert(gdl++, G_TC_FILT);

	func0f0b39c0(&gdl, &var800ab5a8[texturenum], 2, 0, 2, 1, 0);

	gDPSetCycleType(gdl++, G_CYC_1CYCLE);
	gDPSetTextureFilter(gdl++, G_TF_POINT);
	gDPSetCombineMode(gdl++, G_CC_DECALRGBA, G_CC_DECALRGBA);

	gDPSetCombineLERP(gdl++,
			TEXEL0, 0, ENVIRONMENT, 0,
			TEXEL0, 0, ENVIRONMENT, 0,
			TEXEL0, 0, ENVIRONMENT, 0,
			TEXEL0, 0, ENVIRONMENT, 0);

	gDPSetColor(gdl++, G_SETENVCOLOR, 0xffffff00 | alpha);

	gSPTextureRectangle(gdl++,
			(x << 2) * g_ScreenWidthMultiplier, y << 2,
			((x + 32) << 2) * g_ScreenWidthMultiplier, (y + 32) << 2,
			0, 16, 1008, 1024 / g_ScreenWidthMultiplier, 0xfc00);

	return gdl;
}

GLOBAL_ASM(
glabel menuRenderControllerLines
/*  f0ef758:	3c018006 */ 	lui	$at,%hi(var80061630)
/*  f0ef75c:	c4241630 */ 	lwc1	$f4,%lo(var80061630)($at)
/*  f0ef760:	3c014080 */ 	lui	$at,0x4080
/*  f0ef764:	44814000 */ 	mtc1	$at,$f8
/*  f0ef768:	46002187 */ 	neg.s	$f6,$f4
/*  f0ef76c:	3c014248 */ 	lui	$at,0x4248
/*  f0ef770:	46083282 */ 	mul.s	$f10,$f6,$f8
/*  f0ef774:	44818000 */ 	mtc1	$at,$f16
/*  f0ef778:	27bdff60 */ 	addiu	$sp,$sp,-160
/*  f0ef77c:	afb5003c */ 	sw	$s5,0x3c($sp)
/*  f0ef780:	afa400a0 */ 	sw	$a0,0xa0($sp)
/*  f0ef784:	8fb900a0 */ 	lw	$t9,0xa0($sp)
/*  f0ef788:	afb00028 */ 	sw	$s0,0x28($sp)
/*  f0ef78c:	46105482 */ 	mul.s	$f18,$f10,$f16
/*  f0ef790:	8fb000b8 */ 	lw	$s0,0xb8($sp)
/*  f0ef794:	272d0008 */ 	addiu	$t5,$t9,0x8
/*  f0ef798:	afbf004c */ 	sw	$ra,0x4c($sp)
/*  f0ef79c:	afbe0048 */ 	sw	$s8,0x48($sp)
/*  f0ef7a0:	afb70044 */ 	sw	$s7,0x44($sp)
/*  f0ef7a4:	afb60040 */ 	sw	$s6,0x40($sp)
/*  f0ef7a8:	4600910d */ 	trunc.w.s	$f4,$f18
/*  f0ef7ac:	afb40038 */ 	sw	$s4,0x38($sp)
/*  f0ef7b0:	afb30034 */ 	sw	$s3,0x34($sp)
/*  f0ef7b4:	afb20030 */ 	sw	$s2,0x30($sp)
/*  f0ef7b8:	44152000 */ 	mfc1	$s5,$f4
/*  f0ef7bc:	afb1002c */ 	sw	$s1,0x2c($sp)
/*  f0ef7c0:	afad00a0 */ 	sw	$t5,0xa0($sp)
/*  f0ef7c4:	3c0ee700 */ 	lui	$t6,0xe700
/*  f0ef7c8:	af2e0000 */ 	sw	$t6,0x0($t9)
/*  f0ef7cc:	af200004 */ 	sw	$zero,0x4($t9)
/*  f0ef7d0:	0010c042 */ 	srl	$t8,$s0,0x1
/*  f0ef7d4:	03008025 */ 	or	$s0,$t8,$zero
/*  f0ef7d8:	3c19ba00 */ 	lui	$t9,0xba00
/*  f0ef7dc:	37391301 */ 	ori	$t9,$t9,0x1301
/*  f0ef7e0:	00a0b025 */ 	or	$s6,$a1,$zero
/*  f0ef7e4:	3c05800b */ 	lui	$a1,%hi(var800ab5a8)
/*  f0ef7e8:	00c09025 */ 	or	$s2,$a2,$zero
/*  f0ef7ec:	00e09825 */ 	or	$s3,$a3,$zero
/*  f0ef7f0:	06a10004 */ 	bgez	$s5,.L0f0ef804
/*  f0ef7f4:	32af0003 */ 	andi	$t7,$s5,0x3
/*  f0ef7f8:	11e00002 */ 	beqz	$t7,.L0f0ef804
/*  f0ef7fc:	00000000 */ 	nop
/*  f0ef800:	25effffc */ 	addiu	$t7,$t7,-4
.L0f0ef804:
/*  f0ef804:	01e0a825 */ 	or	$s5,$t7,$zero
/*  f0ef808:	8faf00a0 */ 	lw	$t7,0xa0($sp)
/*  f0ef80c:	00003825 */ 	or	$a3,$zero,$zero
/*  f0ef810:	24060002 */ 	addiu	$a2,$zero,0x2
/*  f0ef814:	25f80008 */ 	addiu	$t8,$t7,0x8
/*  f0ef818:	afb800a0 */ 	sw	$t8,0xa0($sp)
/*  f0ef81c:	ade00004 */ 	sw	$zero,0x4($t7)
/*  f0ef820:	adf90000 */ 	sw	$t9,0x0($t7)
/*  f0ef824:	8fad00a0 */ 	lw	$t5,0xa0($sp)
/*  f0ef828:	3c0fb900 */ 	lui	$t7,0xb900
/*  f0ef82c:	35ef0002 */ 	ori	$t7,$t7,0x2
/*  f0ef830:	25ae0008 */ 	addiu	$t6,$t5,0x8
/*  f0ef834:	afae00a0 */ 	sw	$t6,0xa0($sp)
/*  f0ef838:	ada00004 */ 	sw	$zero,0x4($t5)
/*  f0ef83c:	adaf0000 */ 	sw	$t7,0x0($t5)
/*  f0ef840:	8fb800a0 */ 	lw	$t8,0xa0($sp)
/*  f0ef844:	3c0dba00 */ 	lui	$t5,0xba00
/*  f0ef848:	35ad1001 */ 	ori	$t5,$t5,0x1001
/*  f0ef84c:	27190008 */ 	addiu	$t9,$t8,0x8
/*  f0ef850:	afb900a0 */ 	sw	$t9,0xa0($sp)
/*  f0ef854:	af000004 */ 	sw	$zero,0x4($t8)
/*  f0ef858:	af0d0000 */ 	sw	$t5,0x0($t8)
/*  f0ef85c:	8fae00a0 */ 	lw	$t6,0xa0($sp)
/*  f0ef860:	3c18ba00 */ 	lui	$t8,0xba00
/*  f0ef864:	37180903 */ 	ori	$t8,$t8,0x903
/*  f0ef868:	25cf0008 */ 	addiu	$t7,$t6,0x8
/*  f0ef86c:	afaf00a0 */ 	sw	$t7,0xa0($sp)
/*  f0ef870:	24190c00 */ 	addiu	$t9,$zero,0xc00
/*  f0ef874:	add90004 */ 	sw	$t9,0x4($t6)
/*  f0ef878:	add80000 */ 	sw	$t8,0x0($t6)
/*  f0ef87c:	8ca5b5a8 */ 	lw	$a1,%lo(var800ab5a8)($a1)
/*  f0ef880:	240e0001 */ 	addiu	$t6,$zero,0x1
/*  f0ef884:	240d0002 */ 	addiu	$t5,$zero,0x2
/*  f0ef888:	afad0010 */ 	sw	$t5,0x10($sp)
/*  f0ef88c:	afae0014 */ 	sw	$t6,0x14($sp)
/*  f0ef890:	afa00018 */ 	sw	$zero,0x18($sp)
/*  f0ef894:	27a400a0 */ 	addiu	$a0,$sp,0xa0
/*  f0ef898:	0fc2ce70 */ 	jal	func0f0b39c0
/*  f0ef89c:	24a50294 */ 	addiu	$a1,$a1,0x0294
/*  f0ef8a0:	8faf00a0 */ 	lw	$t7,0xa0($sp)
/*  f0ef8a4:	3c19ba00 */ 	lui	$t9,0xba00
/*  f0ef8a8:	37391402 */ 	ori	$t9,$t9,0x1402
/*  f0ef8ac:	25f80008 */ 	addiu	$t8,$t7,0x8
/*  f0ef8b0:	afb800a0 */ 	sw	$t8,0xa0($sp)
/*  f0ef8b4:	ade00004 */ 	sw	$zero,0x4($t7)
/*  f0ef8b8:	adf90000 */ 	sw	$t9,0x0($t7)
/*  f0ef8bc:	8fad00a0 */ 	lw	$t5,0xa0($sp)
/*  f0ef8c0:	3c0fba00 */ 	lui	$t7,0xba00
/*  f0ef8c4:	35ef0c02 */ 	ori	$t7,$t7,0xc02
/*  f0ef8c8:	25ae0008 */ 	addiu	$t6,$t5,0x8
/*  f0ef8cc:	afae00a0 */ 	sw	$t6,0xa0($sp)
/*  f0ef8d0:	ada00004 */ 	sw	$zero,0x4($t5)
/*  f0ef8d4:	adaf0000 */ 	sw	$t7,0x0($t5)
/*  f0ef8d8:	8fb800a0 */ 	lw	$t8,0xa0($sp)
/*  f0ef8dc:	3c0dfc12 */ 	lui	$t5,0xfc12
/*  f0ef8e0:	3c0eff37 */ 	lui	$t6,0xff37
/*  f0ef8e4:	27190008 */ 	addiu	$t9,$t8,0x8
/*  f0ef8e8:	afb900a0 */ 	sw	$t9,0xa0($sp)
/*  f0ef8ec:	35ceffff */ 	ori	$t6,$t6,0xffff
/*  f0ef8f0:	35ad9a25 */ 	ori	$t5,$t5,0x9a25
/*  f0ef8f4:	af0d0000 */ 	sw	$t5,0x0($t8)
/*  f0ef8f8:	af0e0004 */ 	sw	$t6,0x4($t8)
/*  f0ef8fc:	8faf00a0 */ 	lw	$t7,0xa0($sp)
/*  f0ef900:	2401ff00 */ 	addiu	$at,$zero,-256
/*  f0ef904:	02016825 */ 	or	$t5,$s0,$at
/*  f0ef908:	25f80008 */ 	addiu	$t8,$t7,0x8
/*  f0ef90c:	afb800a0 */ 	sw	$t8,0xa0($sp)
/*  f0ef910:	3c19fb00 */ 	lui	$t9,0xfb00
/*  f0ef914:	0272082a */ 	slt	$at,$s3,$s2
/*  f0ef918:	02408825 */ 	or	$s1,$s2,$zero
/*  f0ef91c:	adf90000 */ 	sw	$t9,0x0($t7)
/*  f0ef920:	1420004e */ 	bnez	$at,.L0f0efa5c
/*  f0ef924:	aded0004 */ 	sw	$t5,0x4($t7)
/*  f0ef928:	00127100 */ 	sll	$t6,$s2,0x4
/*  f0ef92c:	3c0f8007 */ 	lui	$t7,%hi(var800711f4)
/*  f0ef930:	25ef11f4 */ 	addiu	$t7,$t7,%lo(var800711f4)
/*  f0ef934:	266c0001 */ 	addiu	$t4,$s3,0x1
/*  f0ef938:	8fb300b4 */ 	lw	$s3,0xb4($sp)
/*  f0ef93c:	01cf8021 */ 	addu	$s0,$t6,$t7
/*  f0ef940:	8fb200b0 */ 	lw	$s2,0xb0($sp)
/*  f0ef944:	241e0011 */ 	addiu	$s8,$zero,0x11
/*  f0ef948:	2417000e */ 	addiu	$s7,$zero,0xe
/*  f0ef94c:	2414ffff */ 	addiu	$s4,$zero,-1
.L0f0ef950:
/*  f0ef950:	8e18000c */ 	lw	$t8,0xc($s0)
/*  f0ef954:	02a02825 */ 	or	$a1,$s5,$zero
/*  f0ef958:	56980005 */ 	bnel	$s4,$t8,.L0f0ef970
/*  f0ef95c:	8e080008 */ 	lw	$t0,0x8($s0)
/*  f0ef960:	8e190004 */ 	lw	$t9,0x4($s0)
/*  f0ef964:	272d0001 */ 	addiu	$t5,$t9,0x1
/*  f0ef968:	ae0d000c */ 	sw	$t5,0xc($s0)
/*  f0ef96c:	8e080008 */ 	lw	$t0,0x8($s0)
.L0f0ef970:
/*  f0ef970:	56880005 */ 	bnel	$s4,$t0,.L0f0ef988
/*  f0ef974:	8e0a0000 */ 	lw	$t2,0x0($s0)
/*  f0ef978:	8e0e0000 */ 	lw	$t6,0x0($s0)
/*  f0ef97c:	25c80001 */ 	addiu	$t0,$t6,0x1
/*  f0ef980:	ae080008 */ 	sw	$t0,0x8($s0)
/*  f0ef984:	8e0a0000 */ 	lw	$t2,0x0($s0)
.L0f0ef988:
/*  f0ef988:	150a0002 */ 	bne	$t0,$t2,.L0f0ef994
/*  f0ef98c:	25580001 */ 	addiu	$t8,$t2,0x1
/*  f0ef990:	ae180008 */ 	sw	$t8,0x8($s0)
.L0f0ef994:
/*  f0ef994:	8e090004 */ 	lw	$t1,0x4($s0)
/*  f0ef998:	8e19000c */ 	lw	$t9,0xc($s0)
/*  f0ef99c:	252d0001 */ 	addiu	$t5,$t1,0x1
/*  f0ef9a0:	57290004 */ 	bnel	$t9,$t1,.L0f0ef9b4
/*  f0ef9a4:	8e080008 */ 	lw	$t0,0x8($s0)
/*  f0ef9a8:	ae0d000c */ 	sw	$t5,0xc($s0)
/*  f0ef9ac:	8e0a0000 */ 	lw	$t2,0x0($s0)
/*  f0ef9b0:	8e080008 */ 	lw	$t0,0x8($s0)
.L0f0ef9b4:
/*  f0ef9b4:	010a082a */ 	slt	$at,$t0,$t2
/*  f0ef9b8:	50200005 */ 	beqzl	$at,.L0f0ef9d0
/*  f0ef9bc:	8e0b000c */ 	lw	$t3,0xc($s0)
/*  f0ef9c0:	ae080000 */ 	sw	$t0,0x0($s0)
/*  f0ef9c4:	ae0a0008 */ 	sw	$t2,0x8($s0)
/*  f0ef9c8:	8e090004 */ 	lw	$t1,0x4($s0)
/*  f0ef9cc:	8e0b000c */ 	lw	$t3,0xc($s0)
.L0f0ef9d0:
/*  f0ef9d0:	0169082a */ 	slt	$at,$t3,$t1
/*  f0ef9d4:	50200006 */ 	beqzl	$at,.L0f0ef9f0
/*  f0ef9d8:	8e080008 */ 	lw	$t0,0x8($s0)
/*  f0ef9dc:	ae0b0004 */ 	sw	$t3,0x4($s0)
/*  f0ef9e0:	01205825 */ 	or	$t3,$t1,$zero
/*  f0ef9e4:	ae09000c */ 	sw	$t1,0xc($s0)
/*  f0ef9e8:	8e090004 */ 	lw	$t1,0x4($s0)
/*  f0ef9ec:	8e080008 */ 	lw	$t0,0x8($s0)
.L0f0ef9f0:
/*  f0ef9f0:	12370005 */ 	beq	$s1,$s7,.L0f0efa08
/*  f0ef9f4:	8e0a0000 */ 	lw	$t2,0x0($s0)
/*  f0ef9f8:	123e0003 */ 	beq	$s1,$s8,.L0f0efa08
/*  f0ef9fc:	24010014 */ 	addiu	$at,$zero,0x14
/*  f0efa00:	56210003 */ 	bnel	$s1,$at,.L0f0efa10
/*  f0efa04:	86c20000 */ 	lh	$v0,0x0($s6)
.L0f0efa08:
/*  f0efa08:	00152823 */ 	negu	$a1,$s5
/*  f0efa0c:	86c20000 */ 	lh	$v0,0x0($s6)
.L0f0efa10:
/*  f0efa10:	86c30002 */ 	lh	$v1,0x2($s6)
/*  f0efa14:	afac0050 */ 	sw	$t4,0x50($sp)
/*  f0efa18:	01427021 */ 	addu	$t6,$t2,$v0
/*  f0efa1c:	01d23021 */ 	addu	$a2,$t6,$s2
/*  f0efa20:	0102c021 */ 	addu	$t8,$t0,$v0
/*  f0efa24:	01636821 */ 	addu	$t5,$t3,$v1
/*  f0efa28:	01b37021 */ 	addu	$t6,$t5,$s3
/*  f0efa2c:	0312c821 */ 	addu	$t9,$t8,$s2
/*  f0efa30:	01237821 */ 	addu	$t7,$t1,$v1
/*  f0efa34:	01f33821 */ 	addu	$a3,$t7,$s3
/*  f0efa38:	afb90010 */ 	sw	$t9,0x10($sp)
/*  f0efa3c:	afae0014 */ 	sw	$t6,0x14($sp)
/*  f0efa40:	0fc3bce5 */ 	jal	func0f0ef394
/*  f0efa44:	8fa400a0 */ 	lw	$a0,0xa0($sp)
/*  f0efa48:	8fac0050 */ 	lw	$t4,0x50($sp)
/*  f0efa4c:	26310001 */ 	addiu	$s1,$s1,0x1
/*  f0efa50:	26100010 */ 	addiu	$s0,$s0,0x10
/*  f0efa54:	1591ffbe */ 	bne	$t4,$s1,.L0f0ef950
/*  f0efa58:	afa200a0 */ 	sw	$v0,0xa0($sp)
.L0f0efa5c:
/*  f0efa5c:	8fbf004c */ 	lw	$ra,0x4c($sp)
/*  f0efa60:	8fa200a0 */ 	lw	$v0,0xa0($sp)
/*  f0efa64:	8fb00028 */ 	lw	$s0,0x28($sp)
/*  f0efa68:	8fb1002c */ 	lw	$s1,0x2c($sp)
/*  f0efa6c:	8fb20030 */ 	lw	$s2,0x30($sp)
/*  f0efa70:	8fb30034 */ 	lw	$s3,0x34($sp)
/*  f0efa74:	8fb40038 */ 	lw	$s4,0x38($sp)
/*  f0efa78:	8fb5003c */ 	lw	$s5,0x3c($sp)
/*  f0efa7c:	8fb60040 */ 	lw	$s6,0x40($sp)
/*  f0efa80:	8fb70044 */ 	lw	$s7,0x44($sp)
/*  f0efa84:	8fbe0048 */ 	lw	$s8,0x48($sp)
/*  f0efa88:	03e00008 */ 	jr	$ra
/*  f0efa8c:	27bd00a0 */ 	addiu	$sp,$sp,0xa0
);

// These are the action names, like "AIM", and "LOOK UP"
u16 var80071354[][9] = {
	/*0*/  { L_MPWEAPONS(194), L_MPWEAPONS(196), L_MPWEAPONS(202), L_MPWEAPONS(197), L_MPWEAPONS(203), L_MPWEAPONS(204), L_MPWEAPONS(206), L_MPWEAPONS(205), L_MPWEAPONS(210) },
	/*1*/  { L_MPWEAPONS(194), L_MPWEAPONS(200), L_MPWEAPONS(202), L_MPWEAPONS(201), L_MPWEAPONS(203), L_MPWEAPONS(204), L_MPWEAPONS(207), L_MPWEAPONS(205), L_MPWEAPONS(210) },
	/*2*/  { L_MPWEAPONS(203), L_MPWEAPONS(196), L_MPWEAPONS(202), L_MPWEAPONS(197), L_MPWEAPONS(205), L_MPWEAPONS(204), L_MPWEAPONS(206), L_MPWEAPONS(194), L_MPWEAPONS(210) },
	/*3*/  { L_MPWEAPONS(203), L_MPWEAPONS(200), L_MPWEAPONS(202), L_MPWEAPONS(201), L_MPWEAPONS(205), L_MPWEAPONS(204), L_MPWEAPONS(207), L_MPWEAPONS(194), L_MPWEAPONS(210) },
	/*4*/  { L_OPTIONS(3),     L_OPTIONS(3),     L_MPWEAPONS(211), L_OPTIONS(3),     L_MPWEAPONS(203), L_MPWEAPONS(204), L_MPWEAPONS(206), L_MPWEAPONS(205), L_OPTIONS(3)     },
	/*5*/  { L_OPTIONS(3),     L_OPTIONS(3),     L_MPWEAPONS(211), L_OPTIONS(3),     L_MPWEAPONS(203), L_MPWEAPONS(204), L_MPWEAPONS(207), L_MPWEAPONS(205), L_OPTIONS(3)     },
	/*6*/  { L_OPTIONS(3),     L_OPTIONS(3),     L_MPWEAPONS(211), L_OPTIONS(3),     L_MPWEAPONS(203), L_MPWEAPONS(204), L_MPWEAPONS(206), L_MPWEAPONS(194), L_OPTIONS(3)     },
	/*7*/  { L_OPTIONS(3),     L_OPTIONS(3),     L_MPWEAPONS(211), L_OPTIONS(3),     L_MPWEAPONS(203), L_MPWEAPONS(204), L_MPWEAPONS(207), L_MPWEAPONS(194), L_OPTIONS(3)     },
	/*8*/  { L_OPTIONS(3),     L_OPTIONS(3),     L_MPWEAPONS(212), L_OPTIONS(3),     L_MPWEAPONS(203), L_MPWEAPONS(204), L_MPWEAPONS(209), L_MPWEAPONS(194), L_OPTIONS(3)     },
	/*9*/  { L_OPTIONS(3),     L_OPTIONS(3),     L_MPWEAPONS(212), L_OPTIONS(3),     L_MPWEAPONS(203), L_MPWEAPONS(204), L_MPWEAPONS(208), L_MPWEAPONS(194), L_OPTIONS(3)     },
	/*10*/ { L_OPTIONS(3),     L_OPTIONS(3),     L_MPWEAPONS(212), L_OPTIONS(3),     L_MPWEAPONS(203), L_MPWEAPONS(204), L_MPWEAPONS(209), L_MPWEAPONS(205), L_OPTIONS(3)     },
	/*11*/ { L_OPTIONS(3),     L_OPTIONS(3),     L_MPWEAPONS(212), L_OPTIONS(3),     L_MPWEAPONS(203), L_MPWEAPONS(204), L_MPWEAPONS(208), L_MPWEAPONS(205), L_OPTIONS(3)     },
};

u16 menuControllerGetButtonAction(s32 mode, s32 buttonnum)
{
	u32 textid = var80071354[mode][buttonnum];

	if (textid == L_MPWEAPONS(194) // "AIM"
			&& optionsGetAimControl(g_Menus[g_MpPlayerNum].data.main.mpindex) == AIMCONTROL_TOGGLE) {
		textid = L_MPWEAPONS(195); // "AIM TOGGLE"
	}

	if (textid == L_MPWEAPONS(196) // "LOOK UP"
			&& optionsGetForwardPitch(g_Menus[g_MpPlayerNum].data.main.mpindex) == false) {
		textid = L_MPWEAPONS(198); // "LOOK DOWN"
	}

	if (textid == L_MPWEAPONS(197) // "LOOK DOWN"
			&& optionsGetForwardPitch(g_Menus[g_MpPlayerNum].data.main.mpindex) == false) {
		textid = L_MPWEAPONS(199); // "LOOK UP"
	}

	return textid;
}

/**
 * Renders the button labels and actions for the control style dialog.
 *
 * When switching modes (control styles), a fade effect is used to fade in the
 * action names, but only if they differ from the previous mode.
 *
 * Note that the valuecolour argument is mostly unused - only the alpha channel
 * is used because the rest is bitwise or'ed to white.
 */
Gfx *menuRenderControllerText(Gfx *gdl, s32 curmode, struct menurenderthing *thing, s32 x, s32 y, u32 valuecolour, u32 labelcolour, s8 prevmode)
{
	s32 rx;
	s32 ry;
	u16 textnum;
	u32 colour;

	u16 labels[] = {
		/*0*/ L_MPWEAPONS(185), // "L/R BUTTONS:"
		/*1*/ L_MPWEAPONS(186), // "UP C BUTTON:"
		/*2*/ L_MPWEAPONS(187), // "LEFT/RIGHT C BUTTONS:"
		/*3*/ L_MPWEAPONS(188), // "DOWN C BUTTON:"
		/*4*/ L_MPWEAPONS(189), // "A BUTTON:"
		/*5*/ L_MPWEAPONS(190), // "B BUTTON:"
		/*6*/ L_MPWEAPONS(191), // "CONTROL STICK:"
		/*7*/ L_MPWEAPONS(192), // "Z BUTTON:"
		/*8*/ L_MPWEAPONS(193), // "+ CONTROL PAD:"
	};

	s32 i;

	gdl = func0f153628(gdl);

	for (i = 0; i < ARRAYCOUNT(labels); i++) {
		ry = i * 7 + thing->y + y;

		// For the 2.x styles, only labels 4-7 are shown
		if (curmode < CONTROLMODE_21 || (i >= 4 && i <= 7)) {
			// Rendering a label such as "L/R BUTTONS:"
			rx = thing->x + x + 76;
			gdl = textRenderWhite(gdl, &rx, &ry, langGet(labels[i]),
					var8007fb08, var8007fb04, labelcolour, viGetX(), viGetY(), 0, 0);
		}

		textnum = menuControllerGetButtonAction(curmode, i);
		colour = valuecolour;

		// If there's a prevmode, get the text ID that was in this position for
		// prevmode. If it's the same text as curmode, don't fade the text.
		if (prevmode >= 0) {
			// I don't see how curmode can ever be > CONTROLMODE_24. Perhaps
			// during development the second player in the 2.x styles had to
			// choose their control style separately to player 1, in which case
			// there would have been 2.5, 2.6, 2.7 and 2.8 for player 2.
			if (curmode > CONTROLMODE_24) {
				if (textnum == menuControllerGetButtonAction(prevmode + 4, i)) {
					colour = labelcolour;
				}
			} else {
				if (textnum == menuControllerGetButtonAction(prevmode, i)) {
					colour = labelcolour;
				}
			}
		}

		if (curmode >= CONTROLMODE_21 && i == 2) {
			// Rendering a "CONTROLLER 1" or "CONTROLLER 2" heading
			rx = thing->x + x + 63;
			colour = labelcolour;
		} else {
			// Rendering a value such as "WALK/TURN"
			// Make it white but preserve alpha
			colour |= 0xffffff00;
		}

		gdl = textRenderWhite(gdl, &rx, &ry, langGet(textnum),
				var8007fb08, var8007fb04, colour, viGetX(), viGetY(), 0, 0);
	}

	return func0f153780(gdl);
}

Gfx *menuRenderControllerInfo(Gfx *gdl, struct menurenderthing *thing, s32 x, s32 y, s32 curmode, u32 alpha, u32 colour1, u32 colour2, s8 prevmode)
{
	s32 rx = thing->x + x;
	s32 ry = thing->y + y + 4;

	// The controller graphic is split into 4 textures
	gdl = menuRenderControllerTexture(gdl, rx, ry, 0x33, alpha);
	gdl = menuRenderControllerTexture(gdl, rx + 32, ry, 0x34, alpha);
	gdl = menuRenderControllerTexture(gdl, rx, ry + 32, 0x35, alpha);
	gdl = menuRenderControllerTexture(gdl, rx + 32, ry + 32, 0x36, alpha);

	if (curmode >= CONTROLMODE_21) {
		gdl = menuRenderControllerLines(gdl, thing, 13, 19, x, y, alpha);
	} else {
		gdl = menuRenderControllerLines(gdl, thing, 0, 21, x, y, alpha);
	}

	return menuRenderControllerText(gdl, curmode, thing, x, y, colour1, colour2, prevmode);
}

Gfx *menuRenderItemController(Gfx *gdl, struct menurenderthing *thing)
{
	struct menurenderthing14_controller *data = thing->unk14.controller;
	u32 colour;
	u32 textcolour;
	s32 x;
	s32 y;
	char text[32];
	struct menuframe *frame = thing->frame;
	u32 contalpha;
	u32 textalpha;

	func0f153d24();

	// If changing modes within the same group (eg. within 1.x)
	if (data->curmode != (g_Menus[g_MpPlayerNum].data.main.controlmode & 0xff)) {
		data->prevmode = data->curmode;
		data->curmode = g_Menus[g_MpPlayerNum].data.main.controlmode;
		data->textfadetimer = 0;
	}

	// If changing control group (eg. 1.4 -> 2.1)
	if (data->controlgroup == 1) {
		if (g_Menus[g_MpPlayerNum].data.main.controlmode < CONTROLMODE_21) {
			data->controlgroup = 2;
			data->contfadetimer = 0;
			data->prevmode = -1;
		}
	} else {
		if (g_Menus[g_MpPlayerNum].data.main.controlmode >= CONTROLMODE_21) {
			data->controlgroup = 1;
			data->contfadetimer = 0;
			data->prevmode = -1;
		}
	}

	// If text is fading in (eg. recently changed 1.1 -> 1.2)
	if (data->textfadetimer < 255) {
		s32 value = data->textfadetimer + g_Vars.diffframe240 * 2;

		if (value > 255) {
			value = 255;
		}

		data->textfadetimer = value;
	}

	// If controller is fading in (eg. recently changed 1.4 -> 2.1)
	if (data->contfadetimer < 255) {
		s32 value = data->contfadetimer + g_Vars.diffframe240 * 2;

		if (value > 255) {
			value = 255;
		}

		data->contfadetimer = value;
	}

	textalpha = data->textfadetimer;
	contalpha = data->contfadetimer;
	gdl = func0f153628(gdl);

	if (frame->transitiontimer < 0) {
		colour = g_MenuColourPalettes[frame->type].unfocused;
	} else {
		colour = colourBlend(
				g_MenuColourPalettes[frame->type2].unfocused,
				g_MenuColourPalettes[frame->type].unfocused,
				frame->colourweight);
	}

	if (frame->dimmed) {
		colour = colourBlend(colour, 0, 44) & 0xffffff00 | colour & 0xff;
	}

	func0f153e38(
			g_MenuColourPalettes3[frame->type].unfocused,
			g_MenuColourPalettes2[frame->type].unfocused);

	if (g_Menus[g_MpPlayerNum].data.main.controlmode >= CONTROLMODE_21) {
		sprintf(text, langGet(L_MPWEAPONS(213)), // "Control Style %s %s"
				langGet(g_ControlStyleOptions[g_Menus[g_MpPlayerNum].data.main.controlmode]),
				langGet(L_MPWEAPONS(215))); // "(Two-Handed)"
	} else {
		sprintf(text, langGet(L_MPWEAPONS(213)), // "Control Style %s %s"
				langGet(g_ControlStyleOptions[g_Menus[g_MpPlayerNum].data.main.controlmode]),
				langGet(L_MPWEAPONS(214))); // "(One-Handed)"
	}

	x = thing->x + 2;
	y = thing->y + 2;
	gdl = textRenderWhite(gdl, &x, &y, text,
			var8007fb10, var8007fb0c, colour, viGetX(), viGetY(), 0, 0);
	gdl = func0f153780(gdl);

	textcolour = colourBlend(colour, colour & 0xffffff00, textalpha);
	colour = colourBlend(colour, colour & 0xffffff00, contalpha);

	if (g_Menus[g_MpPlayerNum].data.main.controlmode >= CONTROLMODE_21) {
		gdl = menuRenderControllerInfo(gdl, thing, 0, 12,
				g_Menus[g_MpPlayerNum].data.main.controlmode,
				contalpha, textcolour, colour, data->prevmode);
		gdl = menuRenderControllerInfo(gdl, thing, 0, 80,
				g_Menus[g_MpPlayerNum].data.main.controlmode + 4,
				contalpha, textcolour, colour, data->prevmode);
	} else {
		gdl = menuRenderControllerInfo(gdl, thing, 0, 15,
				g_Menus[g_MpPlayerNum].data.main.controlmode,
				contalpha, textcolour, colour, data->prevmode);

		x = thing->x;
		y = thing->y + 92;
		gdl = func0f153628(gdl);
		gdl = textRenderWhite(gdl, &x, &y, langGet(L_MPWEAPONS(216)), // "Hold weapon button for ..."
				var8007fb10, var8007fb0c, colour, viGetX(), viGetY(), 0, 0);
		gdl = func0f153780(gdl);
	}

	func0f153d3c();

	return gdl;
}

void menuInitItemController(union menuitemtickdata *data)
{
	data->controller.unk00 = 0;
	data->controller.unk01 = 0;
	data->controller.unk02 = 255;
	data->controller.unk03 = 255;
	data->controller.unk04 = -1;
}

Gfx *menuRenderItem(Gfx *gdl, struct menurenderthing *thing)
{
	switch (thing->item->type) {
	case MENUITEMTYPE_LIST:        return menuRenderItemList(gdl);
	case MENUITEMTYPE_SELECTABLE:  return menuRenderItemSelectable(gdl, thing);
	case MENUITEMTYPE_SLIDER:      return menuRenderItemSlider(gdl);
	case MENUITEMTYPE_CHECKBOX:    return menuRenderItemCheckbox(gdl, thing);
	case MENUITEMTYPE_SCROLLABLE:  return menuRenderItemScrollable(gdl, thing);
	case MENUITEMTYPE_MARQUEE:     return menuRenderItemMarquee(gdl, thing);
	case MENUITEMTYPE_LABEL:       return menuRenderItemLabel(gdl, thing);
	case MENUITEMTYPE_METER:       return menuRenderItemMeter(gdl, thing);
	case MENUITEMTYPE_SEPARATOR:   return menuRenderItemSeparator(gdl, thing);
	case MENUITEMTYPE_OBJECTIVES:  return menuRenderItemObjectives(gdl, thing);
	case MENUITEMTYPE_07:          return menuRenderItem07(gdl);
	case MENUITEMTYPE_DROPDOWN:    return menuRenderItemDropdown(gdl);
	case MENUITEMTYPE_KEYBOARD:    return menuRenderItemKeyboard(gdl);
	case MENUITEMTYPE_RANKING:     return menuRenderItemRanking(gdl);
	case MENUITEMTYPE_PLAYERSTATS: return menuRenderItemPlayerStats(gdl);
	case MENUITEMTYPE_CAROUSEL:    return menuRenderItemCarousel(gdl, thing);
	case MENUITEMTYPE_MODEL:       return menuRenderItemModel(gdl, thing);
	case MENUITEMTYPE_CONTROLLER:  return menuRenderItemController(gdl, thing);
	}

	return gdl;
}

/**
 * Return true if default up/down/left/right/back behaviour should be used.
 */
bool menuTickItem(struct menuitem *item, struct menuframe *frame, struct menuinputs *inputs, u32 arg3, union menuitemtickdata *data)
{
	switch (item->type) {
	case MENUITEMTYPE_LIST:        return menuTickItemList(item, inputs, arg3, data);
	case MENUITEMTYPE_SELECTABLE:  return menuTickItemSelectable(item, inputs, arg3);
	case MENUITEMTYPE_SLIDER:      return menuTickItemSlider(item, frame, inputs, arg3, data);
	case MENUITEMTYPE_CHECKBOX:    return menuTickItemCheckbox(item, inputs, arg3);
	case MENUITEMTYPE_SCROLLABLE:  return menuTickItemScrollable(item, frame, inputs, arg3, data);
	case MENUITEMTYPE_MARQUEE:     return menuTickItemMarquee(item, data);
	case MENUITEMTYPE_RANKING:     return menuTickItemRanking(inputs, arg3, data);
	case MENUITEMTYPE_DROPDOWN:    return menuTickItemDropdown(item, frame, inputs, arg3, data);
	case MENUITEMTYPE_KEYBOARD:    return menuTickItemKeyboard(item, inputs, arg3, data);
	case MENUITEMTYPE_CAROUSEL:    return menuTickItemCarousel(item, inputs, arg3);
	case MENUITEMTYPE_PLAYERSTATS: return menuTickItemPlayerStats(item, frame, inputs, arg3, data);
	}

	return true;
}

void menuInitItem(struct menuitem *item, union menuitemtickdata *data)
{
	switch (item->type) {
	case MENUITEMTYPE_LIST:
	case MENUITEMTYPE_DROPDOWN:
		menuInitItemDropdown(item, data);
		break;
	case MENUITEMTYPE_SCROLLABLE:
		menuInitItemScrollable(data);
		break;
	case MENUITEMTYPE_MARQUEE:
		menuInitItemMarquee(data);
		break;
	case MENUITEMTYPE_RANKING:
		menuInitItemRanking(data);
		break;
	case MENUITEMTYPE_SLIDER:
		menuInitItemSlider(data);
		break;
	case MENUITEMTYPE_PLAYERSTATS:
		menuInitItemPlayerStats(item, data);
		break;
	case MENUITEMTYPE_KEYBOARD:
		menuInitItemKeyboard(item, data);
		break;
	case MENUITEMTYPE_CONTROLLER:
		menuInitItemController(data);
		break;
	}
}

Gfx *func0f0f0918(Gfx *gdl, s16 x, s16 y, s16 x2, s16 y2, struct menuitem *item, u32 arg6, u32 arg7)
{
	switch (item->type) {
	case MENUITEMTYPE_LIST:        return func0f0e6298(gdl, x, y, x2, y2);
	case MENUITEMTYPE_DROPDOWN:    return func0f0e8290(gdl, x, y, x2, y2, item, arg6, arg7);
	case MENUITEMTYPE_PLAYERSTATS: return func0f0ef2fc(gdl, x, y, x2, y2, item, arg6, arg7);
	}

	return gdl;
}
