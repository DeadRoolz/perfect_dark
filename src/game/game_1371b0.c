#include <ultra64.h>
#include "constants.h"
#include "game/data/data_000000.h"
#include "game/data/data_0083d0.h"
#include "game/data/data_00e460.h"
#include "game/data/data_0160b0.h"
#include "game/data/data_01a3a0.h"
#include "game/data/data_020df0.h"
#include "game/data/data_02da90.h"
#include "game/game_005fd0.h"
#include "game/title.h"
#include "game/game_0b3350.h"
#include "game/game_0b63b0.h"
#include "game/game_0d4690.h"
#include "game/game_0e0770.h"
#include "game/game_0f09f0.h"
#include "game/game_1371b0.h"
#include "game/game_1531a0.h"
#include "game/game_166e40.h"
#include "game/game_167ae0.h"
#include "game/music.h"
#include "game/lang.h"
#include "gvars/gvars.h"
#include "lib/lib_09660.h"
#include "lib/lib_0d520.h"
#include "lib/lib_121e0.h"
#include "lib/lib_12dc0.h"
#include "lib/lib_13900.h"
#include "lib/lib_159b0.h"
#include "lib/lib_16110.h"
#include "lib/lib_4b480.h"
#include "types.h"

const u32 var7f1b57c0[] = {0x746c6f61};
const u32 var7f1b57c4[] = {0x64000000};

const char var7f1b57c8[] = "dump";
const char var7f1b57d0[] = "for";
const char var7f1b57d4[] = "flick";

GLOBAL_ASM(
glabel func0f1371b0
.late_rodata
glabel var7f1b57dc
.word 0x3fc90fdb
glabel var7f1b57e0
.word 0x40490fdb
glabel var7f1b57e4
.word 0x4096cbe4
.text
/*  f1371b0:	27bdffc0 */ 	addiu	$sp,$sp,-64
/*  f1371b4:	afbf002c */ 	sw	$ra,0x2c($sp)
/*  f1371b8:	afb00028 */ 	sw	$s0,0x28($sp)
/*  f1371bc:	afa50044 */ 	sw	$a1,0x44($sp)
/*  f1371c0:	00808025 */ 	or	$s0,$a0,$zero
/*  f1371c4:	f7b60020 */ 	sdc1	$f22,0x20($sp)
/*  f1371c8:	f7b40018 */ 	sdc1	$f20,0x18($sp)
/*  f1371cc:	afa60048 */ 	sw	$a2,0x48($sp)
/*  f1371d0:	afa7004c */ 	sw	$a3,0x4c($sp)
/*  f1371d4:	0c0068f7 */ 	jal	sinf
/*  f1371d8:	c7ac0044 */ 	lwc1	$f12,0x44($sp)
/*  f1371dc:	c7b60044 */ 	lwc1	$f22,0x44($sp)
/*  f1371e0:	46000506 */ 	mov.s	$f20,$f0
/*  f1371e4:	0c0068f4 */ 	jal	cosf
/*  f1371e8:	4600b306 */ 	mov.s	$f12,$f22
/*  f1371ec:	c7a4004c */ 	lwc1	$f4,0x4c($sp)
/*  f1371f0:	c7a80048 */ 	lwc1	$f8,0x48($sp)
/*  f1371f4:	4600b306 */ 	mov.s	$f12,$f22
/*  f1371f8:	46040182 */ 	mul.s	$f6,$f0,$f4
/*  f1371fc:	00000000 */ 	nop
/*  f137200:	46144282 */ 	mul.s	$f10,$f8,$f20
/*  f137204:	460a3400 */ 	add.s	$f16,$f6,$f10
/*  f137208:	0c0068f4 */ 	jal	cosf
/*  f13720c:	e7b0003c */ 	swc1	$f16,0x3c($sp)
/*  f137210:	46000506 */ 	mov.s	$f20,$f0
/*  f137214:	0c0068f7 */ 	jal	sinf
/*  f137218:	4600b306 */ 	mov.s	$f12,$f22
/*  f13721c:	c7b20048 */ 	lwc1	$f18,0x48($sp)
/*  f137220:	c7a8004c */ 	lwc1	$f8,0x4c($sp)
/*  f137224:	c7b60050 */ 	lwc1	$f22,0x50($sp)
/*  f137228:	46149102 */ 	mul.s	$f4,$f18,$f20
/*  f13722c:	4600b306 */ 	mov.s	$f12,$f22
/*  f137230:	46080182 */ 	mul.s	$f6,$f0,$f8
/*  f137234:	46062281 */ 	sub.s	$f10,$f4,$f6
/*  f137238:	0c0068f7 */ 	jal	sinf
/*  f13723c:	e7aa0038 */ 	swc1	$f10,0x38($sp)
/*  f137240:	46000506 */ 	mov.s	$f20,$f0
/*  f137244:	0c0068f4 */ 	jal	cosf
/*  f137248:	4600b306 */ 	mov.s	$f12,$f22
/*  f13724c:	46140400 */ 	add.s	$f16,$f0,$f20
/*  f137250:	c7b20054 */ 	lwc1	$f18,0x54($sp)
/*  f137254:	c7a4003c */ 	lwc1	$f4,0x3c($sp)
/*  f137258:	4600b306 */ 	mov.s	$f12,$f22
/*  f13725c:	46128202 */ 	mul.s	$f8,$f16,$f18
/*  f137260:	46044180 */ 	add.s	$f6,$f8,$f4
/*  f137264:	4600328d */ 	trunc.w.s	$f10,$f6
/*  f137268:	440f5000 */ 	mfc1	$t7,$f10
/*  f13726c:	0c0068f4 */ 	jal	cosf
/*  f137270:	a60f0008 */ 	sh	$t7,0x8($s0)
/*  f137274:	46000506 */ 	mov.s	$f20,$f0
/*  f137278:	0c0068f7 */ 	jal	sinf
/*  f13727c:	4600b306 */ 	mov.s	$f12,$f22
/*  f137280:	4600a401 */ 	sub.s	$f16,$f20,$f0
/*  f137284:	c7b20058 */ 	lwc1	$f18,0x58($sp)
/*  f137288:	c7a40038 */ 	lwc1	$f4,0x38($sp)
/*  f13728c:	3c017f1b */ 	lui	$at,%hi(var7f1b57dc)
/*  f137290:	46128202 */ 	mul.s	$f8,$f16,$f18
/*  f137294:	46044180 */ 	add.s	$f6,$f8,$f4
/*  f137298:	4600328d */ 	trunc.w.s	$f10,$f6
/*  f13729c:	44195000 */ 	mfc1	$t9,$f10
/*  f1372a0:	00000000 */ 	nop
/*  f1372a4:	a619000a */ 	sh	$t9,0xa($s0)
/*  f1372a8:	c43057dc */ 	lwc1	$f16,%lo(var7f1b57dc)($at)
/*  f1372ac:	4610b300 */ 	add.s	$f12,$f22,$f16
/*  f1372b0:	0c0068f7 */ 	jal	sinf
/*  f1372b4:	e7ac0030 */ 	swc1	$f12,0x30($sp)
/*  f1372b8:	46000506 */ 	mov.s	$f20,$f0
/*  f1372bc:	0c0068f4 */ 	jal	cosf
/*  f1372c0:	c7ac0030 */ 	lwc1	$f12,0x30($sp)
/*  f1372c4:	46140480 */ 	add.s	$f18,$f0,$f20
/*  f1372c8:	c7a80054 */ 	lwc1	$f8,0x54($sp)
/*  f1372cc:	c7a6003c */ 	lwc1	$f6,0x3c($sp)
/*  f1372d0:	46089102 */ 	mul.s	$f4,$f18,$f8
/*  f1372d4:	46062280 */ 	add.s	$f10,$f4,$f6
/*  f1372d8:	4600540d */ 	trunc.w.s	$f16,$f10
/*  f1372dc:	44098000 */ 	mfc1	$t1,$f16
/*  f1372e0:	00000000 */ 	nop
/*  f1372e4:	a6090014 */ 	sh	$t1,0x14($s0)
/*  f1372e8:	0c0068f4 */ 	jal	cosf
/*  f1372ec:	c7ac0030 */ 	lwc1	$f12,0x30($sp)
/*  f1372f0:	46000506 */ 	mov.s	$f20,$f0
/*  f1372f4:	0c0068f7 */ 	jal	sinf
/*  f1372f8:	c7ac0030 */ 	lwc1	$f12,0x30($sp)
/*  f1372fc:	4600a481 */ 	sub.s	$f18,$f20,$f0
/*  f137300:	c7a80058 */ 	lwc1	$f8,0x58($sp)
/*  f137304:	c7a60038 */ 	lwc1	$f6,0x38($sp)
/*  f137308:	3c017f1b */ 	lui	$at,%hi(var7f1b57e0)
/*  f13730c:	46089102 */ 	mul.s	$f4,$f18,$f8
/*  f137310:	46062280 */ 	add.s	$f10,$f4,$f6
/*  f137314:	4600540d */ 	trunc.w.s	$f16,$f10
/*  f137318:	440b8000 */ 	mfc1	$t3,$f16
/*  f13731c:	00000000 */ 	nop
/*  f137320:	a60b0016 */ 	sh	$t3,0x16($s0)
/*  f137324:	c43257e0 */ 	lwc1	$f18,%lo(var7f1b57e0)($at)
/*  f137328:	4612b300 */ 	add.s	$f12,$f22,$f18
/*  f13732c:	0c0068f7 */ 	jal	sinf
/*  f137330:	e7ac0030 */ 	swc1	$f12,0x30($sp)
/*  f137334:	46000506 */ 	mov.s	$f20,$f0
/*  f137338:	0c0068f4 */ 	jal	cosf
/*  f13733c:	c7ac0030 */ 	lwc1	$f12,0x30($sp)
/*  f137340:	46140200 */ 	add.s	$f8,$f0,$f20
/*  f137344:	c7a40054 */ 	lwc1	$f4,0x54($sp)
/*  f137348:	c7aa003c */ 	lwc1	$f10,0x3c($sp)
/*  f13734c:	46044182 */ 	mul.s	$f6,$f8,$f4
/*  f137350:	460a3400 */ 	add.s	$f16,$f6,$f10
/*  f137354:	4600848d */ 	trunc.w.s	$f18,$f16
/*  f137358:	440d9000 */ 	mfc1	$t5,$f18
/*  f13735c:	00000000 */ 	nop
/*  f137360:	a60d0020 */ 	sh	$t5,0x20($s0)
/*  f137364:	0c0068f4 */ 	jal	cosf
/*  f137368:	c7ac0030 */ 	lwc1	$f12,0x30($sp)
/*  f13736c:	46000506 */ 	mov.s	$f20,$f0
/*  f137370:	0c0068f7 */ 	jal	sinf
/*  f137374:	c7ac0030 */ 	lwc1	$f12,0x30($sp)
/*  f137378:	4600a201 */ 	sub.s	$f8,$f20,$f0
/*  f13737c:	c7a40058 */ 	lwc1	$f4,0x58($sp)
/*  f137380:	c7aa0038 */ 	lwc1	$f10,0x38($sp)
/*  f137384:	3c017f1b */ 	lui	$at,%hi(var7f1b57e4)
/*  f137388:	46044182 */ 	mul.s	$f6,$f8,$f4
/*  f13738c:	460a3400 */ 	add.s	$f16,$f6,$f10
/*  f137390:	4600848d */ 	trunc.w.s	$f18,$f16
/*  f137394:	440f9000 */ 	mfc1	$t7,$f18
/*  f137398:	00000000 */ 	nop
/*  f13739c:	a60f0022 */ 	sh	$t7,0x22($s0)
/*  f1373a0:	c42857e4 */ 	lwc1	$f8,%lo(var7f1b57e4)($at)
/*  f1373a4:	4608b300 */ 	add.s	$f12,$f22,$f8
/*  f1373a8:	0c0068f7 */ 	jal	sinf
/*  f1373ac:	e7ac0030 */ 	swc1	$f12,0x30($sp)
/*  f1373b0:	c7b60030 */ 	lwc1	$f22,0x30($sp)
/*  f1373b4:	46000506 */ 	mov.s	$f20,$f0
/*  f1373b8:	0c0068f4 */ 	jal	cosf
/*  f1373bc:	4600b306 */ 	mov.s	$f12,$f22
/*  f1373c0:	46140100 */ 	add.s	$f4,$f0,$f20
/*  f1373c4:	c7a60054 */ 	lwc1	$f6,0x54($sp)
/*  f1373c8:	c7b0003c */ 	lwc1	$f16,0x3c($sp)
/*  f1373cc:	4600b306 */ 	mov.s	$f12,$f22
/*  f1373d0:	46062282 */ 	mul.s	$f10,$f4,$f6
/*  f1373d4:	46105480 */ 	add.s	$f18,$f10,$f16
/*  f1373d8:	4600920d */ 	trunc.w.s	$f8,$f18
/*  f1373dc:	44194000 */ 	mfc1	$t9,$f8
/*  f1373e0:	0c0068f4 */ 	jal	cosf
/*  f1373e4:	a619002c */ 	sh	$t9,0x2c($s0)
/*  f1373e8:	46000506 */ 	mov.s	$f20,$f0
/*  f1373ec:	0c0068f7 */ 	jal	sinf
/*  f1373f0:	4600b306 */ 	mov.s	$f12,$f22
/*  f1373f4:	4600a101 */ 	sub.s	$f4,$f20,$f0
/*  f1373f8:	c7a60058 */ 	lwc1	$f6,0x58($sp)
/*  f1373fc:	c7b00038 */ 	lwc1	$f16,0x38($sp)
/*  f137400:	46062282 */ 	mul.s	$f10,$f4,$f6
/*  f137404:	46105480 */ 	add.s	$f18,$f10,$f16
/*  f137408:	4600920d */ 	trunc.w.s	$f8,$f18
/*  f13740c:	44094000 */ 	mfc1	$t1,$f8
/*  f137410:	00000000 */ 	nop
/*  f137414:	a609002e */ 	sh	$t1,0x2e($s0)
/*  f137418:	8fbf002c */ 	lw	$ra,0x2c($sp)
/*  f13741c:	8fb00028 */ 	lw	$s0,0x28($sp)
/*  f137420:	d7b60020 */ 	ldc1	$f22,0x20($sp)
/*  f137424:	d7b40018 */ 	ldc1	$f20,0x18($sp)
/*  f137428:	03e00008 */ 	jr	$ra
/*  f13742c:	27bd0040 */ 	addiu	$sp,$sp,0x40
);

GLOBAL_ASM(
glabel func0f137430
.late_rodata
glabel var7f1b57e8
.word 0x3fc90fdb
glabel var7f1b57ec
.word 0x40490fdb
glabel var7f1b57f0
.word 0x4096cbe4
.text
/*  f137430:	27bdffc0 */ 	addiu	$sp,$sp,-64
/*  f137434:	afbf002c */ 	sw	$ra,0x2c($sp)
/*  f137438:	afb00028 */ 	sw	$s0,0x28($sp)
/*  f13743c:	afa50044 */ 	sw	$a1,0x44($sp)
/*  f137440:	00808025 */ 	or	$s0,$a0,$zero
/*  f137444:	f7b60020 */ 	sdc1	$f22,0x20($sp)
/*  f137448:	f7b40018 */ 	sdc1	$f20,0x18($sp)
/*  f13744c:	afa60048 */ 	sw	$a2,0x48($sp)
/*  f137450:	afa7004c */ 	sw	$a3,0x4c($sp)
/*  f137454:	0c0068f7 */ 	jal	sinf
/*  f137458:	c7ac0044 */ 	lwc1	$f12,0x44($sp)
/*  f13745c:	c7b60044 */ 	lwc1	$f22,0x44($sp)
/*  f137460:	46000506 */ 	mov.s	$f20,$f0
/*  f137464:	0c0068f4 */ 	jal	cosf
/*  f137468:	4600b306 */ 	mov.s	$f12,$f22
/*  f13746c:	c7a4004c */ 	lwc1	$f4,0x4c($sp)
/*  f137470:	c7a80048 */ 	lwc1	$f8,0x48($sp)
/*  f137474:	4600b306 */ 	mov.s	$f12,$f22
/*  f137478:	46040182 */ 	mul.s	$f6,$f0,$f4
/*  f13747c:	00000000 */ 	nop
/*  f137480:	46144282 */ 	mul.s	$f10,$f8,$f20
/*  f137484:	460a3400 */ 	add.s	$f16,$f6,$f10
/*  f137488:	0c0068f4 */ 	jal	cosf
/*  f13748c:	e7b0003c */ 	swc1	$f16,0x3c($sp)
/*  f137490:	46000506 */ 	mov.s	$f20,$f0
/*  f137494:	0c0068f7 */ 	jal	sinf
/*  f137498:	4600b306 */ 	mov.s	$f12,$f22
/*  f13749c:	c7b20048 */ 	lwc1	$f18,0x48($sp)
/*  f1374a0:	c7a8004c */ 	lwc1	$f8,0x4c($sp)
/*  f1374a4:	c7b60050 */ 	lwc1	$f22,0x50($sp)
/*  f1374a8:	46149102 */ 	mul.s	$f4,$f18,$f20
/*  f1374ac:	4600b306 */ 	mov.s	$f12,$f22
/*  f1374b0:	46080182 */ 	mul.s	$f6,$f0,$f8
/*  f1374b4:	46062281 */ 	sub.s	$f10,$f4,$f6
/*  f1374b8:	0c0068f7 */ 	jal	sinf
/*  f1374bc:	e7aa0038 */ 	swc1	$f10,0x38($sp)
/*  f1374c0:	46000506 */ 	mov.s	$f20,$f0
/*  f1374c4:	0c0068f4 */ 	jal	cosf
/*  f1374c8:	4600b306 */ 	mov.s	$f12,$f22
/*  f1374cc:	46140400 */ 	add.s	$f16,$f0,$f20
/*  f1374d0:	c7b20054 */ 	lwc1	$f18,0x54($sp)
/*  f1374d4:	c7a4003c */ 	lwc1	$f4,0x3c($sp)
/*  f1374d8:	4600b306 */ 	mov.s	$f12,$f22
/*  f1374dc:	46128202 */ 	mul.s	$f8,$f16,$f18
/*  f1374e0:	46044180 */ 	add.s	$f6,$f8,$f4
/*  f1374e4:	4600328d */ 	trunc.w.s	$f10,$f6
/*  f1374e8:	440f5000 */ 	mfc1	$t7,$f10
/*  f1374ec:	0c0068f4 */ 	jal	cosf
/*  f1374f0:	a60f0008 */ 	sh	$t7,0x8($s0)
/*  f1374f4:	46000506 */ 	mov.s	$f20,$f0
/*  f1374f8:	0c0068f7 */ 	jal	sinf
/*  f1374fc:	4600b306 */ 	mov.s	$f12,$f22
/*  f137500:	4600a401 */ 	sub.s	$f16,$f20,$f0
/*  f137504:	c7b20058 */ 	lwc1	$f18,0x58($sp)
/*  f137508:	c7a40038 */ 	lwc1	$f4,0x38($sp)
/*  f13750c:	3c017f1b */ 	lui	$at,%hi(var7f1b57e8)
/*  f137510:	46128202 */ 	mul.s	$f8,$f16,$f18
/*  f137514:	46044180 */ 	add.s	$f6,$f8,$f4
/*  f137518:	4600328d */ 	trunc.w.s	$f10,$f6
/*  f13751c:	44195000 */ 	mfc1	$t9,$f10
/*  f137520:	00000000 */ 	nop
/*  f137524:	a619000a */ 	sh	$t9,0xa($s0)
/*  f137528:	c43057e8 */ 	lwc1	$f16,%lo(var7f1b57e8)($at)
/*  f13752c:	4610b300 */ 	add.s	$f12,$f22,$f16
/*  f137530:	0c0068f7 */ 	jal	sinf
/*  f137534:	e7ac0030 */ 	swc1	$f12,0x30($sp)
/*  f137538:	46000506 */ 	mov.s	$f20,$f0
/*  f13753c:	0c0068f4 */ 	jal	cosf
/*  f137540:	c7ac0030 */ 	lwc1	$f12,0x30($sp)
/*  f137544:	46140480 */ 	add.s	$f18,$f0,$f20
/*  f137548:	c7a80054 */ 	lwc1	$f8,0x54($sp)
/*  f13754c:	c7a6003c */ 	lwc1	$f6,0x3c($sp)
/*  f137550:	46089102 */ 	mul.s	$f4,$f18,$f8
/*  f137554:	46062280 */ 	add.s	$f10,$f4,$f6
/*  f137558:	4600540d */ 	trunc.w.s	$f16,$f10
/*  f13755c:	440a8000 */ 	mfc1	$t2,$f16
/*  f137560:	00000000 */ 	nop
/*  f137564:	a60a0020 */ 	sh	$t2,0x20($s0)
/*  f137568:	0c0068f4 */ 	jal	cosf
/*  f13756c:	c7ac0030 */ 	lwc1	$f12,0x30($sp)
/*  f137570:	46000506 */ 	mov.s	$f20,$f0
/*  f137574:	0c0068f7 */ 	jal	sinf
/*  f137578:	c7ac0030 */ 	lwc1	$f12,0x30($sp)
/*  f13757c:	4600a481 */ 	sub.s	$f18,$f20,$f0
/*  f137580:	c7a80058 */ 	lwc1	$f8,0x58($sp)
/*  f137584:	c7a60038 */ 	lwc1	$f6,0x38($sp)
/*  f137588:	3c017f1b */ 	lui	$at,%hi(var7f1b57ec)
/*  f13758c:	46089102 */ 	mul.s	$f4,$f18,$f8
/*  f137590:	46062280 */ 	add.s	$f10,$f4,$f6
/*  f137594:	4600540d */ 	trunc.w.s	$f16,$f10
/*  f137598:	440c8000 */ 	mfc1	$t4,$f16
/*  f13759c:	00000000 */ 	nop
/*  f1375a0:	a60c0022 */ 	sh	$t4,0x22($s0)
/*  f1375a4:	c43257ec */ 	lwc1	$f18,%lo(var7f1b57ec)($at)
/*  f1375a8:	4612b300 */ 	add.s	$f12,$f22,$f18
/*  f1375ac:	0c0068f7 */ 	jal	sinf
/*  f1375b0:	e7ac0030 */ 	swc1	$f12,0x30($sp)
/*  f1375b4:	46000506 */ 	mov.s	$f20,$f0
/*  f1375b8:	0c0068f4 */ 	jal	cosf
/*  f1375bc:	c7ac0030 */ 	lwc1	$f12,0x30($sp)
/*  f1375c0:	46140200 */ 	add.s	$f8,$f0,$f20
/*  f1375c4:	c7a40054 */ 	lwc1	$f4,0x54($sp)
/*  f1375c8:	c7aa003c */ 	lwc1	$f10,0x3c($sp)
/*  f1375cc:	46044182 */ 	mul.s	$f6,$f8,$f4
/*  f1375d0:	460a3400 */ 	add.s	$f16,$f6,$f10
/*  f1375d4:	4600848d */ 	trunc.w.s	$f18,$f16
/*  f1375d8:	440e9000 */ 	mfc1	$t6,$f18
/*  f1375dc:	00000000 */ 	nop
/*  f1375e0:	a60e0068 */ 	sh	$t6,0x68($s0)
/*  f1375e4:	0c0068f4 */ 	jal	cosf
/*  f1375e8:	c7ac0030 */ 	lwc1	$f12,0x30($sp)
/*  f1375ec:	46000506 */ 	mov.s	$f20,$f0
/*  f1375f0:	0c0068f7 */ 	jal	sinf
/*  f1375f4:	c7ac0030 */ 	lwc1	$f12,0x30($sp)
/*  f1375f8:	4600a201 */ 	sub.s	$f8,$f20,$f0
/*  f1375fc:	c7a40058 */ 	lwc1	$f4,0x58($sp)
/*  f137600:	c7aa0038 */ 	lwc1	$f10,0x38($sp)
/*  f137604:	3c017f1b */ 	lui	$at,%hi(var7f1b57f0)
/*  f137608:	46044182 */ 	mul.s	$f6,$f8,$f4
/*  f13760c:	460a3400 */ 	add.s	$f16,$f6,$f10
/*  f137610:	4600848d */ 	trunc.w.s	$f18,$f16
/*  f137614:	44189000 */ 	mfc1	$t8,$f18
/*  f137618:	00000000 */ 	nop
/*  f13761c:	a618006a */ 	sh	$t8,0x6a($s0)
/*  f137620:	c42857f0 */ 	lwc1	$f8,%lo(var7f1b57f0)($at)
/*  f137624:	4608b300 */ 	add.s	$f12,$f22,$f8
/*  f137628:	0c0068f7 */ 	jal	sinf
/*  f13762c:	e7ac0030 */ 	swc1	$f12,0x30($sp)
/*  f137630:	c7b60030 */ 	lwc1	$f22,0x30($sp)
/*  f137634:	46000506 */ 	mov.s	$f20,$f0
/*  f137638:	0c0068f4 */ 	jal	cosf
/*  f13763c:	4600b306 */ 	mov.s	$f12,$f22
/*  f137640:	46140100 */ 	add.s	$f4,$f0,$f20
/*  f137644:	c7a60054 */ 	lwc1	$f6,0x54($sp)
/*  f137648:	c7b0003c */ 	lwc1	$f16,0x3c($sp)
/*  f13764c:	4600b306 */ 	mov.s	$f12,$f22
/*  f137650:	46062282 */ 	mul.s	$f10,$f4,$f6
/*  f137654:	46105480 */ 	add.s	$f18,$f10,$f16
/*  f137658:	4600920d */ 	trunc.w.s	$f8,$f18
/*  f13765c:	44094000 */ 	mfc1	$t1,$f8
/*  f137660:	0c0068f4 */ 	jal	cosf
/*  f137664:	a6090050 */ 	sh	$t1,0x50($s0)
/*  f137668:	46000506 */ 	mov.s	$f20,$f0
/*  f13766c:	0c0068f7 */ 	jal	sinf
/*  f137670:	4600b306 */ 	mov.s	$f12,$f22
/*  f137674:	4600a101 */ 	sub.s	$f4,$f20,$f0
/*  f137678:	c7a60058 */ 	lwc1	$f6,0x58($sp)
/*  f13767c:	c7b00038 */ 	lwc1	$f16,0x38($sp)
/*  f137680:	86020020 */ 	lh	$v0,0x20($s0)
/*  f137684:	46062282 */ 	mul.s	$f10,$f4,$f6
/*  f137688:	86030008 */ 	lh	$v1,0x8($s0)
/*  f13768c:	86050022 */ 	lh	$a1,0x22($s0)
/*  f137690:	8604000a */ 	lh	$a0,0xa($s0)
/*  f137694:	00436021 */ 	addu	$t4,$v0,$v1
/*  f137698:	86060050 */ 	lh	$a2,0x50($s0)
/*  f13769c:	00a47021 */ 	addu	$t6,$a1,$a0
/*  f1376a0:	46105480 */ 	add.s	$f18,$f10,$f16
/*  f1376a4:	86080068 */ 	lh	$t0,0x68($s0)
/*  f1376a8:	00c3c021 */ 	addu	$t8,$a2,$v1
/*  f1376ac:	4600920d */ 	trunc.w.s	$f8,$f18
/*  f1376b0:	440b4000 */ 	mfc1	$t3,$f8
/*  f1376b4:	00000000 */ 	nop
/*  f1376b8:	a60b0052 */ 	sh	$t3,0x52($s0)
/*  f1376bc:	05810003 */ 	bgez	$t4,.L0f1376cc
/*  f1376c0:	000c6843 */ 	sra	$t5,$t4,0x1
/*  f1376c4:	25810001 */ 	addiu	$at,$t4,0x1
/*  f1376c8:	00016843 */ 	sra	$t5,$at,0x1
.L0f1376cc:
/*  f1376cc:	86070052 */ 	lh	$a3,0x52($s0)
/*  f1376d0:	00485821 */ 	addu	$t3,$v0,$t0
/*  f1376d4:	8602006a */ 	lh	$v0,0x6a($s0)
/*  f1376d8:	00e44821 */ 	addu	$t1,$a3,$a0
/*  f1376dc:	a60d0014 */ 	sh	$t5,0x14($s0)
/*  f1376e0:	05c10003 */ 	bgez	$t6,.L0f1376f0
/*  f1376e4:	000e7843 */ 	sra	$t7,$t6,0x1
/*  f1376e8:	25c10001 */ 	addiu	$at,$t6,0x1
/*  f1376ec:	00017843 */ 	sra	$t7,$at,0x1
.L0f1376f0:
/*  f1376f0:	00a26821 */ 	addu	$t5,$a1,$v0
/*  f1376f4:	a60f0016 */ 	sh	$t7,0x16($s0)
/*  f1376f8:	07010003 */ 	bgez	$t8,.L0f137708
/*  f1376fc:	0018c843 */ 	sra	$t9,$t8,0x1
/*  f137700:	27010001 */ 	addiu	$at,$t8,0x1
/*  f137704:	0001c843 */ 	sra	$t9,$at,0x1
.L0f137708:
/*  f137708:	01067821 */ 	addu	$t7,$t0,$a2
/*  f13770c:	a619002c */ 	sh	$t9,0x2c($s0)
/*  f137710:	05210003 */ 	bgez	$t1,.L0f137720
/*  f137714:	00095043 */ 	sra	$t2,$t1,0x1
/*  f137718:	25210001 */ 	addiu	$at,$t1,0x1
/*  f13771c:	00015043 */ 	sra	$t2,$at,0x1
.L0f137720:
/*  f137720:	a60a002e */ 	sh	$t2,0x2e($s0)
/*  f137724:	05610003 */ 	bgez	$t3,.L0f137734
/*  f137728:	000b6043 */ 	sra	$t4,$t3,0x1
/*  f13772c:	25610001 */ 	addiu	$at,$t3,0x1
/*  f137730:	00016043 */ 	sra	$t4,$at,0x1
.L0f137734:
/*  f137734:	a60c0044 */ 	sh	$t4,0x44($s0)
/*  f137738:	05a10003 */ 	bgez	$t5,.L0f137748
/*  f13773c:	000d7043 */ 	sra	$t6,$t5,0x1
/*  f137740:	25a10001 */ 	addiu	$at,$t5,0x1
/*  f137744:	00017043 */ 	sra	$t6,$at,0x1
.L0f137748:
/*  f137748:	0047c821 */ 	addu	$t9,$v0,$a3
/*  f13774c:	860a0044 */ 	lh	$t2,0x44($s0)
/*  f137750:	860b002c */ 	lh	$t3,0x2c($s0)
/*  f137754:	a60e0046 */ 	sh	$t6,0x46($s0)
/*  f137758:	05e10003 */ 	bgez	$t7,.L0f137768
/*  f13775c:	000fc043 */ 	sra	$t8,$t7,0x1
/*  f137760:	25e10001 */ 	addiu	$at,$t7,0x1
/*  f137764:	0001c043 */ 	sra	$t8,$at,0x1
.L0f137768:
/*  f137768:	014b6021 */ 	addu	$t4,$t2,$t3
/*  f13776c:	860f002e */ 	lh	$t7,0x2e($s0)
/*  f137770:	860e0046 */ 	lh	$t6,0x46($s0)
/*  f137774:	a618005c */ 	sh	$t8,0x5c($s0)
/*  f137778:	07210003 */ 	bgez	$t9,.L0f137788
/*  f13777c:	00194843 */ 	sra	$t1,$t9,0x1
/*  f137780:	27210001 */ 	addiu	$at,$t9,0x1
/*  f137784:	00014843 */ 	sra	$t1,$at,0x1
.L0f137788:
/*  f137788:	01cfc021 */ 	addu	$t8,$t6,$t7
/*  f13778c:	a609005e */ 	sh	$t1,0x5e($s0)
/*  f137790:	05810003 */ 	bgez	$t4,.L0f1377a0
/*  f137794:	000c6843 */ 	sra	$t5,$t4,0x1
/*  f137798:	25810001 */ 	addiu	$at,$t4,0x1
/*  f13779c:	00016843 */ 	sra	$t5,$at,0x1
.L0f1377a0:
/*  f1377a0:	a60d0038 */ 	sh	$t5,0x38($s0)
/*  f1377a4:	07010003 */ 	bgez	$t8,.L0f1377b4
/*  f1377a8:	0018c843 */ 	sra	$t9,$t8,0x1
/*  f1377ac:	27010001 */ 	addiu	$at,$t8,0x1
/*  f1377b0:	0001c843 */ 	sra	$t9,$at,0x1
.L0f1377b4:
/*  f1377b4:	a619003a */ 	sh	$t9,0x3a($s0)
/*  f1377b8:	8fbf002c */ 	lw	$ra,0x2c($sp)
/*  f1377bc:	8fb00028 */ 	lw	$s0,0x28($sp)
/*  f1377c0:	d7b60020 */ 	ldc1	$f22,0x20($sp)
/*  f1377c4:	d7b40018 */ 	ldc1	$f20,0x18($sp)
/*  f1377c8:	03e00008 */ 	jr	$ra
/*  f1377cc:	27bd0040 */ 	addiu	$sp,$sp,0x40
);

GLOBAL_ASM(
glabel func0f1377d0
/*  f1377d0:	00801825 */ 	or	$v1,$a0,$zero
/*  f1377d4:	24040003 */ 	addiu	$a0,$zero,0x3
/*  f1377d8:	00001025 */ 	or	$v0,$zero,$zero
/*  f1377dc:	24070009 */ 	addiu	$a3,$zero,0x9
/*  f1377e0:	24060708 */ 	addiu	$a2,$zero,0x708
.L0f1377e4:
/*  f1377e4:	0044001a */ 	div	$zero,$v0,$a0
/*  f1377e8:	00007010 */ 	mfhi	$t6
/*  f1377ec:	2463000c */ 	addiu	$v1,$v1,0xc
/*  f1377f0:	14800002 */ 	bnez	$a0,.L0f1377fc
/*  f1377f4:	00000000 */ 	nop
/*  f1377f8:	0007000d */ 	break	0x7
.L0f1377fc:
/*  f1377fc:	2401ffff */ 	addiu	$at,$zero,-1
/*  f137800:	14810004 */ 	bne	$a0,$at,.L0f137814
/*  f137804:	3c018000 */ 	lui	$at,0x8000
/*  f137808:	14410002 */ 	bne	$v0,$at,.L0f137814
/*  f13780c:	00000000 */ 	nop
/*  f137810:	0006000d */ 	break	0x6
.L0f137814:
/*  f137814:	01c60019 */ 	multu	$t6,$a2
/*  f137818:	a465fff8 */ 	sh	$a1,-0x8($v1)
/*  f13781c:	00007812 */ 	mflo	$t7
/*  f137820:	25f8f8f8 */ 	addiu	$t8,$t7,-1800
/*  f137824:	a478fff4 */ 	sh	$t8,-0xc($v1)
/*  f137828:	0044001a */ 	div	$zero,$v0,$a0
/*  f13782c:	0000c812 */ 	mflo	$t9
/*  f137830:	14800002 */ 	bnez	$a0,.L0f13783c
/*  f137834:	00000000 */ 	nop
/*  f137838:	0007000d */ 	break	0x7
.L0f13783c:
/*  f13783c:	2401ffff */ 	addiu	$at,$zero,-1
/*  f137840:	14810004 */ 	bne	$a0,$at,.L0f137854
/*  f137844:	3c018000 */ 	lui	$at,0x8000
/*  f137848:	14410002 */ 	bne	$v0,$at,.L0f137854
/*  f13784c:	00000000 */ 	nop
/*  f137850:	0006000d */ 	break	0x6
.L0f137854:
/*  f137854:	03260019 */ 	multu	$t9,$a2
/*  f137858:	24420001 */ 	addiu	$v0,$v0,0x1
/*  f13785c:	00004012 */ 	mflo	$t0
/*  f137860:	2509f8f8 */ 	addiu	$t1,$t0,-1800
/*  f137864:	1447ffdf */ 	bne	$v0,$a3,.L0f1377e4
/*  f137868:	a469fff6 */ 	sh	$t1,-0xa($v1)
/*  f13786c:	03e00008 */ 	jr	$ra
/*  f137870:	00000000 */ 	nop
);

GLOBAL_ASM(
glabel func0f137874
/*  f137874:	00067080 */ 	sll	$t6,$a2,0x2
/*  f137878:	3c0f800a */ 	lui	$t7,%hi(var800a416c)
/*  f13787c:	8def416c */ 	lw	$t7,%lo(var800a416c)($t7)
/*  f137880:	01c67023 */ 	subu	$t6,$t6,$a2
/*  f137884:	000e7080 */ 	sll	$t6,$t6,0x2
/*  f137888:	27bdffc0 */ 	addiu	$sp,$sp,-64
/*  f13788c:	01c67021 */ 	addu	$t6,$t6,$a2
/*  f137890:	448f3000 */ 	mtc1	$t7,$f6
/*  f137894:	000e7080 */ 	sll	$t6,$t6,0x2
/*  f137898:	3c018008 */ 	lui	$at,%hi(var8007f13c)
/*  f13789c:	002e0821 */ 	addu	$at,$at,$t6
/*  f1378a0:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f1378a4:	afa40040 */ 	sw	$a0,0x40($sp)
/*  f1378a8:	afa50044 */ 	sw	$a1,0x44($sp)
/*  f1378ac:	afa7004c */ 	sw	$a3,0x4c($sp)
/*  f1378b0:	240c003c */ 	addiu	$t4,$zero,0x3c
/*  f1378b4:	c424f13c */ 	lwc1	$f4,%lo(var8007f13c)($at)
/*  f1378b8:	05e10005 */ 	bgez	$t7,.L0f1378d0
/*  f1378bc:	46803220 */ 	cvt.s.w	$f8,$f6
/*  f1378c0:	3c014f80 */ 	lui	$at,0x4f80
/*  f1378c4:	44815000 */ 	mtc1	$at,$f10
/*  f1378c8:	00000000 */ 	nop
/*  f1378cc:	460a4200 */ 	add.s	$f8,$f8,$f10
.L0f1378d0:
/*  f1378d0:	46082402 */ 	mul.s	$f16,$f4,$f8
/*  f1378d4:	8fb80050 */ 	lw	$t8,0x50($sp)
/*  f1378d8:	3c013e80 */ 	lui	$at,0x3e80
/*  f1378dc:	44819000 */ 	mtc1	$at,$f18
/*  f1378e0:	44985000 */ 	mtc1	$t8,$f10
/*  f1378e4:	240100b4 */ 	addiu	$at,$zero,0xb4
/*  f1378e8:	00067080 */ 	sll	$t6,$a2,0x2
/*  f1378ec:	46128182 */ 	mul.s	$f6,$f16,$f18
/*  f1378f0:	01c67023 */ 	subu	$t6,$t6,$a2
/*  f1378f4:	000e7080 */ 	sll	$t6,$t6,0x2
/*  f1378f8:	01c67021 */ 	addu	$t6,$t6,$a2
/*  f1378fc:	3c0f8008 */ 	lui	$t7,%hi(var8007f13c)
/*  f137900:	25eff13c */ 	addiu	$t7,$t7,%lo(var8007f13c)
/*  f137904:	46805120 */ 	cvt.s.w	$f4,$f10
/*  f137908:	000e7080 */ 	sll	$t6,$t6,0x2
/*  f13790c:	01cf3821 */ 	addu	$a3,$t6,$t7
/*  f137910:	00e02025 */ 	or	$a0,$a3,$zero
/*  f137914:	8fa30040 */ 	lw	$v1,0x40($sp)
/*  f137918:	24050009 */ 	addiu	$a1,$zero,0x9
/*  f13791c:	46043200 */ 	add.s	$f8,$f6,$f4
/*  f137920:	240b000c */ 	addiu	$t3,$zero,0xc
/*  f137924:	4600440d */ 	trunc.w.s	$f16,$f8
/*  f137928:	44098000 */ 	mfc1	$t1,$f16
/*  f13792c:	00000000 */ 	nop
/*  f137930:	0121001a */ 	div	$zero,$t1,$at
/*  f137934:	00006810 */ 	mfhi	$t5
/*  f137938:	01a04825 */ 	or	$t1,$t5,$zero
/*  f13793c:	00000000 */ 	nop
/*  f137940:	01ac001a */ 	div	$zero,$t5,$t4
/*  f137944:	15800002 */ 	bnez	$t4,.L0f137950
/*  f137948:	00000000 */ 	nop
/*  f13794c:	0007000d */ 	break	0x7
.L0f137950:
/*  f137950:	2401ffff */ 	addiu	$at,$zero,-1
/*  f137954:	15810004 */ 	bne	$t4,$at,.L0f137968
/*  f137958:	3c018000 */ 	lui	$at,0x8000
/*  f13795c:	15210002 */ 	bne	$t1,$at,.L0f137968
/*  f137960:	00000000 */ 	nop
/*  f137964:	0006000d */ 	break	0x6
.L0f137968:
/*  f137968:	00001012 */ 	mflo	$v0
/*  f13796c:	28410003 */ 	slti	$at,$v0,0x3
/*  f137970:	14200002 */ 	bnez	$at,.L0f13797c
/*  f137974:	00404025 */ 	or	$t0,$v0,$zero
/*  f137978:	00004025 */ 	or	$t0,$zero,$zero
.L0f13797c:
/*  f13797c:	250a0001 */ 	addiu	$t2,$t0,0x1
/*  f137980:	29410003 */ 	slti	$at,$t2,0x3
/*  f137984:	14200002 */ 	bnez	$at,.L0f137990
/*  f137988:	00001025 */ 	or	$v0,$zero,$zero
/*  f13798c:	00005025 */ 	or	$t2,$zero,$zero
.L0f137990:
/*  f137990:	90980004 */ 	lbu	$t8,0x4($a0)
/*  f137994:	24420001 */ 	addiu	$v0,$v0,0x1
/*  f137998:	2463000c */ 	addiu	$v1,$v1,0xc
/*  f13799c:	0018c880 */ 	sll	$t9,$t8,0x2
/*  f1379a0:	a079fffb */ 	sb	$t9,-0x5($v1)
/*  f1379a4:	1445fffa */ 	bne	$v0,$a1,.L0f137990
/*  f1379a8:	24840001 */ 	addiu	$a0,$a0,0x1
/*  f1379ac:	014b0019 */ 	multu	$t2,$t3
/*  f1379b0:	24060001 */ 	addiu	$a2,$zero,0x1
/*  f1379b4:	00006812 */ 	mflo	$t5
/*  f1379b8:	00ed1021 */ 	addu	$v0,$a3,$t5
/*  f1379bc:	8c440010 */ 	lw	$a0,0x10($v0)
/*  f1379c0:	010b0019 */ 	multu	$t0,$t3
/*  f1379c4:	00047200 */ 	sll	$t6,$a0,0x8
/*  f1379c8:	01c02025 */ 	or	$a0,$t6,$zero
/*  f1379cc:	00007812 */ 	mflo	$t7
/*  f1379d0:	00ef1821 */ 	addu	$v1,$a3,$t7
/*  f1379d4:	8c650010 */ 	lw	$a1,0x10($v1)
/*  f1379d8:	012c001a */ 	div	$zero,$t1,$t4
/*  f1379dc:	0000c810 */ 	mfhi	$t9
/*  f1379e0:	44999000 */ 	mtc1	$t9,$f18
/*  f1379e4:	0005c200 */ 	sll	$t8,$a1,0x8
/*  f1379e8:	03002825 */ 	or	$a1,$t8,$zero
/*  f1379ec:	15800002 */ 	bnez	$t4,.L0f1379f8
/*  f1379f0:	00000000 */ 	nop
/*  f1379f4:	0007000d */ 	break	0x7
.L0f1379f8:
/*  f1379f8:	2401ffff */ 	addiu	$at,$zero,-1
/*  f1379fc:	15810004 */ 	bne	$t4,$at,.L0f137a10
/*  f137a00:	3c018000 */ 	lui	$at,0x8000
/*  f137a04:	15210002 */ 	bne	$t1,$at,.L0f137a10
/*  f137a08:	00000000 */ 	nop
/*  f137a0c:	0006000d */ 	break	0x6
.L0f137a10:
/*  f137a10:	468092a0 */ 	cvt.s.w	$f10,$f18
/*  f137a14:	3c014270 */ 	lui	$at,0x4270
/*  f137a18:	44813000 */ 	mtc1	$at,$f6
/*  f137a1c:	3c01437f */ 	lui	$at,0x437f
/*  f137a20:	44814000 */ 	mtc1	$at,$f8
/*  f137a24:	46065103 */ 	div.s	$f4,$f10,$f6
/*  f137a28:	46044402 */ 	mul.s	$f16,$f8,$f4
/*  f137a2c:	444df800 */ 	cfc1	$t5,$31
/*  f137a30:	44c6f800 */ 	ctc1	$a2,$31
/*  f137a34:	00000000 */ 	nop
/*  f137a38:	460084a4 */ 	cvt.w.s	$f18,$f16
/*  f137a3c:	4446f800 */ 	cfc1	$a2,$31
/*  f137a40:	00000000 */ 	nop
/*  f137a44:	30c10004 */ 	andi	$at,$a2,0x4
/*  f137a48:	30c60078 */ 	andi	$a2,$a2,0x78
/*  f137a4c:	10c00012 */ 	beqz	$a2,.L0f137a98
/*  f137a50:	3c014f00 */ 	lui	$at,0x4f00
/*  f137a54:	44819000 */ 	mtc1	$at,$f18
/*  f137a58:	24060001 */ 	addiu	$a2,$zero,0x1
/*  f137a5c:	46128481 */ 	sub.s	$f18,$f16,$f18
/*  f137a60:	44c6f800 */ 	ctc1	$a2,$31
/*  f137a64:	00000000 */ 	nop
/*  f137a68:	460094a4 */ 	cvt.w.s	$f18,$f18
/*  f137a6c:	4446f800 */ 	cfc1	$a2,$31
/*  f137a70:	00000000 */ 	nop
/*  f137a74:	30c60078 */ 	andi	$a2,$a2,0x78
/*  f137a78:	14c00005 */ 	bnez	$a2,.L0f137a90
/*  f137a7c:	00000000 */ 	nop
/*  f137a80:	44069000 */ 	mfc1	$a2,$f18
/*  f137a84:	3c018000 */ 	lui	$at,0x8000
/*  f137a88:	10000007 */ 	b	.L0f137aa8
/*  f137a8c:	00c13025 */ 	or	$a2,$a2,$at
.L0f137a90:
/*  f137a90:	10000005 */ 	b	.L0f137aa8
/*  f137a94:	2406ffff */ 	addiu	$a2,$zero,-1
.L0f137a98:
/*  f137a98:	44069000 */ 	mfc1	$a2,$f18
/*  f137a9c:	00000000 */ 	nop
/*  f137aa0:	04c0fffb */ 	bltz	$a2,.L0f137a90
/*  f137aa4:	00000000 */ 	nop
.L0f137aa8:
/*  f137aa8:	44cdf800 */ 	ctc1	$t5,$31
/*  f137aac:	afa2001c */ 	sw	$v0,0x1c($sp)
/*  f137ab0:	afa30018 */ 	sw	$v1,0x18($sp)
/*  f137ab4:	0fc01a40 */ 	jal	colourBlend
/*  f137ab8:	afa60024 */ 	sw	$a2,0x24($sp)
/*  f137abc:	8fae004c */ 	lw	$t6,0x4c($sp)
/*  f137ac0:	8fb80044 */ 	lw	$t8,0x44($sp)
/*  f137ac4:	004e7825 */ 	or	$t7,$v0,$t6
/*  f137ac8:	af0f0000 */ 	sw	$t7,0x0($t8)
/*  f137acc:	8fae0018 */ 	lw	$t6,0x18($sp)
/*  f137ad0:	8fb9001c */ 	lw	$t9,0x1c($sp)
/*  f137ad4:	8fa60024 */ 	lw	$a2,0x24($sp)
/*  f137ad8:	8dc50014 */ 	lw	$a1,0x14($t6)
/*  f137adc:	8f240014 */ 	lw	$a0,0x14($t9)
/*  f137ae0:	00057a00 */ 	sll	$t7,$a1,0x8
/*  f137ae4:	00046a00 */ 	sll	$t5,$a0,0x8
/*  f137ae8:	01a02025 */ 	or	$a0,$t5,$zero
/*  f137aec:	0fc01a40 */ 	jal	colourBlend
/*  f137af0:	01e02825 */ 	or	$a1,$t7,$zero
/*  f137af4:	8fb8004c */ 	lw	$t8,0x4c($sp)
/*  f137af8:	8fad0044 */ 	lw	$t5,0x44($sp)
/*  f137afc:	0058c825 */ 	or	$t9,$v0,$t8
/*  f137b00:	adb90004 */ 	sw	$t9,0x4($t5)
/*  f137b04:	8fb80018 */ 	lw	$t8,0x18($sp)
/*  f137b08:	8fae001c */ 	lw	$t6,0x1c($sp)
/*  f137b0c:	8fa60024 */ 	lw	$a2,0x24($sp)
/*  f137b10:	8f050018 */ 	lw	$a1,0x18($t8)
/*  f137b14:	8dc40018 */ 	lw	$a0,0x18($t6)
/*  f137b18:	0005ca00 */ 	sll	$t9,$a1,0x8
/*  f137b1c:	00047a00 */ 	sll	$t7,$a0,0x8
/*  f137b20:	01e02025 */ 	or	$a0,$t7,$zero
/*  f137b24:	0fc01a40 */ 	jal	colourBlend
/*  f137b28:	03202825 */ 	or	$a1,$t9,$zero
/*  f137b2c:	8fad004c */ 	lw	$t5,0x4c($sp)
/*  f137b30:	8faf0044 */ 	lw	$t7,0x44($sp)
/*  f137b34:	004d7025 */ 	or	$t6,$v0,$t5
/*  f137b38:	adee0008 */ 	sw	$t6,0x8($t7)
/*  f137b3c:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f137b40:	27bd0040 */ 	addiu	$sp,$sp,0x40
/*  f137b44:	03e00008 */ 	jr	$ra
/*  f137b48:	00000000 */ 	nop
);

GLOBAL_ASM(
glabel func0f137b4c
/*  f137b4c:	27bdff80 */ 	addiu	$sp,$sp,-128
/*  f137b50:	afbf002c */ 	sw	$ra,0x2c($sp)
/*  f137b54:	afb00028 */ 	sw	$s0,0x28($sp)
/*  f137b58:	afa40080 */ 	sw	$a0,0x80($sp)
/*  f137b5c:	afa50084 */ 	sw	$a1,0x84($sp)
/*  f137b60:	afa60088 */ 	sw	$a2,0x88($sp)
/*  f137b64:	0fc38926 */ 	jal	func0f0e2498
/*  f137b68:	afa7008c */ 	sw	$a3,0x8c($sp)
/*  f137b6c:	244e0008 */ 	addiu	$t6,$v0,0x8
/*  f137b70:	afae0080 */ 	sw	$t6,0x80($sp)
/*  f137b74:	3c0fe700 */ 	lui	$t7,0xe700
/*  f137b78:	ac4f0000 */ 	sw	$t7,0x0($v0)
/*  f137b7c:	ac400004 */ 	sw	$zero,0x4($v0)
/*  f137b80:	8fb80080 */ 	lw	$t8,0x80($sp)
/*  f137b84:	3c0bba00 */ 	lui	$t3,0xba00
/*  f137b88:	356b1402 */ 	ori	$t3,$t3,0x1402
/*  f137b8c:	27190008 */ 	addiu	$t9,$t8,0x8
/*  f137b90:	afb90080 */ 	sw	$t9,0x80($sp)
/*  f137b94:	af000004 */ 	sw	$zero,0x4($t8)
/*  f137b98:	af0b0000 */ 	sw	$t3,0x0($t8)
/*  f137b9c:	8fac0080 */ 	lw	$t4,0x80($sp)
/*  f137ba0:	3c0eb900 */ 	lui	$t6,0xb900
/*  f137ba4:	35ce0002 */ 	ori	$t6,$t6,0x2
/*  f137ba8:	258d0008 */ 	addiu	$t5,$t4,0x8
/*  f137bac:	afad0080 */ 	sw	$t5,0x80($sp)
/*  f137bb0:	ad800004 */ 	sw	$zero,0x4($t4)
/*  f137bb4:	ad8e0000 */ 	sw	$t6,0x0($t4)
/*  f137bb8:	8faf0080 */ 	lw	$t7,0x80($sp)
/*  f137bbc:	3c19fc12 */ 	lui	$t9,0xfc12
/*  f137bc0:	37397e24 */ 	ori	$t9,$t9,0x7e24
/*  f137bc4:	25f80008 */ 	addiu	$t8,$t7,0x8
/*  f137bc8:	afb80080 */ 	sw	$t8,0x80($sp)
/*  f137bcc:	240bf9fc */ 	addiu	$t3,$zero,-1540
/*  f137bd0:	adeb0004 */ 	sw	$t3,0x4($t7)
/*  f137bd4:	adf90000 */ 	sw	$t9,0x0($t7)
/*  f137bd8:	8fac0080 */ 	lw	$t4,0x80($sp)
/*  f137bdc:	240f3000 */ 	addiu	$t7,$zero,0x3000
/*  f137be0:	3c0eb600 */ 	lui	$t6,0xb600
/*  f137be4:	258d0008 */ 	addiu	$t5,$t4,0x8
/*  f137be8:	afad0080 */ 	sw	$t5,0x80($sp)
/*  f137bec:	ad8f0004 */ 	sw	$t7,0x4($t4)
/*  f137bf0:	ad8e0000 */ 	sw	$t6,0x0($t4)
/*  f137bf4:	93b80087 */ 	lbu	$t8,0x87($sp)
/*  f137bf8:	3c0b8008 */ 	lui	$t3,%hi(var8007f2dc)
/*  f137bfc:	256bf2dc */ 	addiu	$t3,$t3,%lo(var8007f2dc)
/*  f137c00:	0018c880 */ 	sll	$t9,$t8,0x2
/*  f137c04:	0338c821 */ 	addu	$t9,$t9,$t8
/*  f137c08:	0019c880 */ 	sll	$t9,$t9,0x2
/*  f137c0c:	032b8021 */ 	addu	$s0,$t9,$t3
/*  f137c10:	8e0c0008 */ 	lw	$t4,0x8($s0)
/*  f137c14:	3c0e800b */ 	lui	$t6,%hi(var800ab5a8)
/*  f137c18:	8dceb5a8 */ 	lw	$t6,%lo(var800ab5a8)($t6)
/*  f137c1c:	000c6880 */ 	sll	$t5,$t4,0x2
/*  f137c20:	01ac6823 */ 	subu	$t5,$t5,$t4
/*  f137c24:	000d6880 */ 	sll	$t5,$t5,0x2
/*  f137c28:	24180001 */ 	addiu	$t8,$zero,0x1
/*  f137c2c:	240f0002 */ 	addiu	$t7,$zero,0x2
/*  f137c30:	afaf0010 */ 	sw	$t7,0x10($sp)
/*  f137c34:	afb80014 */ 	sw	$t8,0x14($sp)
/*  f137c38:	afa00018 */ 	sw	$zero,0x18($sp)
/*  f137c3c:	27a40080 */ 	addiu	$a0,$sp,0x80
/*  f137c40:	24060001 */ 	addiu	$a2,$zero,0x1
/*  f137c44:	24070001 */ 	addiu	$a3,$zero,0x1
/*  f137c48:	0fc2ce70 */ 	jal	func0f0b39c0
/*  f137c4c:	01ae2821 */ 	addu	$a1,$t5,$t6
/*  f137c50:	8fb90080 */ 	lw	$t9,0x80($sp)
/*  f137c54:	3c0cb900 */ 	lui	$t4,0xb900
/*  f137c58:	3c0d0050 */ 	lui	$t5,0x50
/*  f137c5c:	272b0008 */ 	addiu	$t3,$t9,0x8
/*  f137c60:	afab0080 */ 	sw	$t3,0x80($sp)
/*  f137c64:	35ad4240 */ 	ori	$t5,$t5,0x4240
/*  f137c68:	358c031d */ 	ori	$t4,$t4,0x31d
/*  f137c6c:	24040003 */ 	addiu	$a0,$zero,0x3
/*  f137c70:	af2c0000 */ 	sw	$t4,0x0($t9)
/*  f137c74:	0fc59e73 */ 	jal	func0f1679cc
/*  f137c78:	af2d0004 */ 	sw	$t5,0x4($t9)
/*  f137c7c:	afa20078 */ 	sw	$v0,0x78($sp)
/*  f137c80:	0fc59e59 */ 	jal	func0f167964
/*  f137c84:	24040009 */ 	addiu	$a0,$zero,0x9
/*  f137c88:	860e0004 */ 	lh	$t6,0x4($s0)
/*  f137c8c:	c7a8008c */ 	lwc1	$f8,0x8c($sp)
/*  f137c90:	afa2007c */ 	sw	$v0,0x7c($sp)
/*  f137c94:	25cf07d0 */ 	addiu	$t7,$t6,0x7d0
/*  f137c98:	448f2000 */ 	mtc1	$t7,$f4
/*  f137c9c:	00402025 */ 	or	$a0,$v0,$zero
/*  f137ca0:	468021a0 */ 	cvt.s.w	$f6,$f4
/*  f137ca4:	46083282 */ 	mul.s	$f10,$f6,$f8
/*  f137ca8:	4600510d */ 	trunc.w.s	$f4,$f10
/*  f137cac:	44052000 */ 	mfc1	$a1,$f4
/*  f137cb0:	0fc4ddf4 */ 	jal	func0f1377d0
/*  f137cb4:	24a5f830 */ 	addiu	$a1,$a1,-2000
/*  f137cb8:	3c0c800a */ 	lui	$t4,%hi(var800a416c)
/*  f137cbc:	8d8c416c */ 	lw	$t4,%lo(var800a416c)($t4)
/*  f137cc0:	93a3008b */ 	lbu	$v1,0x8b($sp)
/*  f137cc4:	3c0b800a */ 	lui	$t3,%hi(var800a4170)
/*  f137cc8:	8d6b4170 */ 	lw	$t3,%lo(var800a4170)($t3)
/*  f137ccc:	448c3000 */ 	mtc1	$t4,$f6
/*  f137cd0:	3c013e80 */ 	lui	$at,0x3e80
/*  f137cd4:	44819000 */ 	mtc1	$at,$f18
/*  f137cd8:	0003c900 */ 	sll	$t9,$v1,0x4
/*  f137cdc:	03201825 */ 	or	$v1,$t9,$zero
/*  f137ce0:	01791021 */ 	addu	$v0,$t3,$t9
/*  f137ce4:	05810005 */ 	bgez	$t4,.L0f137cfc
/*  f137ce8:	46803020 */ 	cvt.s.w	$f0,$f6
/*  f137cec:	3c014f80 */ 	lui	$at,0x4f80
/*  f137cf0:	44814000 */ 	mtc1	$at,$f8
/*  f137cf4:	00000000 */ 	nop
/*  f137cf8:	46080000 */ 	add.s	$f0,$f0,$f8
.L0f137cfc:
/*  f137cfc:	c44a41b8 */ 	lwc1	$f10,0x41b8($v0)
/*  f137d00:	c44641bc */ 	lwc1	$f6,0x41bc($v0)
/*  f137d04:	3c014200 */ 	lui	$at,0x4200
/*  f137d08:	46005102 */ 	mul.s	$f4,$f10,$f0
/*  f137d0c:	c60a000c */ 	lwc1	$f10,0xc($s0)
/*  f137d10:	860d0000 */ 	lh	$t5,0x0($s0)
/*  f137d14:	860e0002 */ 	lh	$t6,0x2($s0)
/*  f137d18:	afa30030 */ 	sw	$v1,0x30($sp)
/*  f137d1c:	8fa4007c */ 	lw	$a0,0x7c($sp)
/*  f137d20:	46122082 */ 	mul.s	$f2,$f4,$f18
/*  f137d24:	44812000 */ 	mtc1	$at,$f4
/*  f137d28:	46003202 */ 	mul.s	$f8,$f6,$f0
/*  f137d2c:	c6060010 */ 	lwc1	$f6,0x10($s0)
/*  f137d30:	e7a20010 */ 	swc1	$f2,0x10($sp)
/*  f137d34:	46124302 */ 	mul.s	$f12,$f8,$f18
/*  f137d38:	44814000 */ 	mtc1	$at,$f8
/*  f137d3c:	46045382 */ 	mul.s	$f14,$f10,$f4
/*  f137d40:	448d5000 */ 	mtc1	$t5,$f10
/*  f137d44:	46083402 */ 	mul.s	$f16,$f6,$f8
/*  f137d48:	448e3000 */ 	mtc1	$t6,$f6
/*  f137d4c:	44056000 */ 	mfc1	$a1,$f12
/*  f137d50:	44067000 */ 	mfc1	$a2,$f14
/*  f137d54:	46805120 */ 	cvt.s.w	$f4,$f10
/*  f137d58:	44078000 */ 	mfc1	$a3,$f16
/*  f137d5c:	46803220 */ 	cvt.s.w	$f8,$f6
/*  f137d60:	e7a40014 */ 	swc1	$f4,0x14($sp)
/*  f137d64:	0fc4dd0c */ 	jal	func0f137430
/*  f137d68:	e7a80018 */ 	swc1	$f8,0x18($sp)
/*  f137d6c:	8e020008 */ 	lw	$v0,0x8($s0)
/*  f137d70:	24010004 */ 	addiu	$at,$zero,0x4
/*  f137d74:	8fa30030 */ 	lw	$v1,0x30($sp)
/*  f137d78:	14410008 */ 	bne	$v0,$at,.L0f137d9c
/*  f137d7c:	3c0c800a */ 	lui	$t4,%hi(var800a4170)
/*  f137d80:	8fa70090 */ 	lw	$a3,0x90($sp)
/*  f137d84:	24010003 */ 	addiu	$at,$zero,0x3
/*  f137d88:	00077840 */ 	sll	$t7,$a3,0x1
/*  f137d8c:	01e1001b */ 	divu	$zero,$t7,$at
/*  f137d90:	0000c012 */ 	mflo	$t8
/*  f137d94:	afb80090 */ 	sw	$t8,0x90($sp)
/*  f137d98:	00000000 */ 	nop
.L0f137d9c:
/*  f137d9c:	24010026 */ 	addiu	$at,$zero,0x26
/*  f137da0:	14410007 */ 	bne	$v0,$at,.L0f137dc0
/*  f137da4:	8fa70090 */ 	lw	$a3,0x90($sp)
/*  f137da8:	0007c840 */ 	sll	$t9,$a3,0x1
/*  f137dac:	24010003 */ 	addiu	$at,$zero,0x3
/*  f137db0:	0321001b */ 	divu	$zero,$t9,$at
/*  f137db4:	00003812 */ 	mflo	$a3
/*  f137db8:	00000000 */ 	nop
/*  f137dbc:	00000000 */ 	nop
.L0f137dc0:
/*  f137dc0:	8fae0094 */ 	lw	$t6,0x94($sp)
/*  f137dc4:	8d8c4170 */ 	lw	$t4,%lo(var800a4170)($t4)
/*  f137dc8:	8fa4007c */ 	lw	$a0,0x7c($sp)
/*  f137dcc:	000e7880 */ 	sll	$t7,$t6,0x2
/*  f137dd0:	01ee7823 */ 	subu	$t7,$t7,$t6
/*  f137dd4:	000f7880 */ 	sll	$t7,$t7,0x2
/*  f137dd8:	01ee7823 */ 	subu	$t7,$t7,$t6
/*  f137ddc:	000f7880 */ 	sll	$t7,$t7,0x2
/*  f137de0:	01ee7821 */ 	addu	$t7,$t7,$t6
/*  f137de4:	01836821 */ 	addu	$t5,$t4,$v1
/*  f137de8:	8da641c0 */ 	lw	$a2,0x41c0($t5)
/*  f137dec:	000f7840 */ 	sll	$t7,$t7,0x1
/*  f137df0:	afaf0010 */ 	sw	$t7,0x10($sp)
/*  f137df4:	0fc4de1d */ 	jal	func0f137874
/*  f137df8:	8fa50078 */ 	lw	$a1,0x78($sp)
/*  f137dfc:	8fb00080 */ 	lw	$s0,0x80($sp)
/*  f137e00:	3c0b0708 */ 	lui	$t3,0x708
/*  f137e04:	356b000c */ 	ori	$t3,$t3,0xc
/*  f137e08:	26190008 */ 	addiu	$t9,$s0,0x8
/*  f137e0c:	afb90080 */ 	sw	$t9,0x80($sp)
/*  f137e10:	ae0b0000 */ 	sw	$t3,0x0($s0)
/*  f137e14:	0c012d20 */ 	jal	osVirtualToPhysical
/*  f137e18:	8fa40078 */ 	lw	$a0,0x78($sp)
/*  f137e1c:	ae020004 */ 	sw	$v0,0x4($s0)
/*  f137e20:	8fac0080 */ 	lw	$t4,0x80($sp)
/*  f137e24:	3c0e0480 */ 	lui	$t6,0x480
/*  f137e28:	35ce006c */ 	ori	$t6,$t6,0x6c
/*  f137e2c:	258d0008 */ 	addiu	$t5,$t4,0x8
/*  f137e30:	afad0080 */ 	sw	$t5,0x80($sp)
/*  f137e34:	ad8e0000 */ 	sw	$t6,0x0($t4)
/*  f137e38:	8fa4007c */ 	lw	$a0,0x7c($sp)
/*  f137e3c:	0c012d20 */ 	jal	osVirtualToPhysical
/*  f137e40:	afac0044 */ 	sw	$t4,0x44($sp)
/*  f137e44:	8fa50044 */ 	lw	$a1,0x44($sp)
/*  f137e48:	3c19b100 */ 	lui	$t9,0xb100
/*  f137e4c:	3c0b4521 */ 	lui	$t3,0x4521
/*  f137e50:	aca20004 */ 	sw	$v0,0x4($a1)
/*  f137e54:	8faf0080 */ 	lw	$t7,0x80($sp)
/*  f137e58:	356b4110 */ 	ori	$t3,$t3,0x4110
/*  f137e5c:	37391533 */ 	ori	$t9,$t9,0x1533
/*  f137e60:	25f80008 */ 	addiu	$t8,$t7,0x8
/*  f137e64:	afb80080 */ 	sw	$t8,0x80($sp)
/*  f137e68:	adeb0004 */ 	sw	$t3,0x4($t7)
/*  f137e6c:	adf90000 */ 	sw	$t9,0x0($t7)
/*  f137e70:	8fac0080 */ 	lw	$t4,0x80($sp)
/*  f137e74:	3c0f8554 */ 	lui	$t7,0x8554
/*  f137e78:	3c0eb100 */ 	lui	$t6,0xb100
/*  f137e7c:	258d0008 */ 	addiu	$t5,$t4,0x8
/*  f137e80:	afad0080 */ 	sw	$t5,0x80($sp)
/*  f137e84:	35ce7737 */ 	ori	$t6,$t6,0x7737
/*  f137e88:	35ef6743 */ 	ori	$t7,$t7,0x6743
/*  f137e8c:	ad8f0004 */ 	sw	$t7,0x4($t4)
/*  f137e90:	ad8e0000 */ 	sw	$t6,0x0($t4)
/*  f137e94:	8fbf002c */ 	lw	$ra,0x2c($sp)
/*  f137e98:	8fb00028 */ 	lw	$s0,0x28($sp)
/*  f137e9c:	8fa20080 */ 	lw	$v0,0x80($sp)
/*  f137ea0:	03e00008 */ 	jr	$ra
/*  f137ea4:	27bd0080 */ 	addiu	$sp,$sp,0x80
);

GLOBAL_ASM(
glabel func0f137ea8
/*  f137ea8:	3c08800a */ 	lui	$t0,%hi(var800a4170)
/*  f137eac:	25084170 */ 	addiu	$t0,$t0,%lo(var800a4170)
/*  f137eb0:	8d020000 */ 	lw	$v0,0x0($t0)
/*  f137eb4:	00043900 */ 	sll	$a3,$a0,0x4
/*  f137eb8:	00051900 */ 	sll	$v1,$a1,0x4
/*  f137ebc:	00477021 */ 	addu	$t6,$v0,$a3
/*  f137ec0:	8dcf41b4 */ 	lw	$t7,0x41b4($t6)
/*  f137ec4:	0043c021 */ 	addu	$t8,$v0,$v1
/*  f137ec8:	af0f41b4 */ 	sw	$t7,0x41b4($t8)
/*  f137ecc:	8d020000 */ 	lw	$v0,0x0($t0)
/*  f137ed0:	0047c821 */ 	addu	$t9,$v0,$a3
/*  f137ed4:	c72441b8 */ 	lwc1	$f4,0x41b8($t9)
/*  f137ed8:	00434821 */ 	addu	$t1,$v0,$v1
/*  f137edc:	e52441b8 */ 	swc1	$f4,0x41b8($t1)
/*  f137ee0:	8d020000 */ 	lw	$v0,0x0($t0)
/*  f137ee4:	00475021 */ 	addu	$t2,$v0,$a3
/*  f137ee8:	c54641bc */ 	lwc1	$f6,0x41bc($t2)
/*  f137eec:	00435821 */ 	addu	$t3,$v0,$v1
/*  f137ef0:	e56641bc */ 	swc1	$f6,0x41bc($t3)
/*  f137ef4:	8d020000 */ 	lw	$v0,0x0($t0)
/*  f137ef8:	00476021 */ 	addu	$t4,$v0,$a3
/*  f137efc:	8d8d41c0 */ 	lw	$t5,0x41c0($t4)
/*  f137f00:	00437021 */ 	addu	$t6,$v0,$v1
/*  f137f04:	10c00005 */ 	beqz	$a2,.L0f137f1c
/*  f137f08:	adcd41c0 */ 	sw	$t5,0x41c0($t6)
/*  f137f0c:	8d180000 */ 	lw	$t8,0x0($t0)
/*  f137f10:	240fffff */ 	addiu	$t7,$zero,-1
/*  f137f14:	0307c821 */ 	addu	$t9,$t8,$a3
/*  f137f18:	af2f41b4 */ 	sw	$t7,0x41b4($t9)
.L0f137f1c:
/*  f137f1c:	03e00008 */ 	jr	$ra
/*  f137f20:	00000000 */ 	nop
);

GLOBAL_ASM(
glabel func0f137f24
.late_rodata
glabel var7f1b57f4
.word 0x3e4ccccd
glabel var7f1b57f8
.word 0x3f4ccccd
.text
/*  f137f24:	27bdff08 */ 	addiu	$sp,$sp,-248
/*  f137f28:	3c0f8008 */ 	lui	$t7,%hi(var8007f3cc)
/*  f137f2c:	afbf0074 */ 	sw	$ra,0x74($sp)
/*  f137f30:	afbe0070 */ 	sw	$s8,0x70($sp)
/*  f137f34:	afb7006c */ 	sw	$s7,0x6c($sp)
/*  f137f38:	afb60068 */ 	sw	$s6,0x68($sp)
/*  f137f3c:	afb50064 */ 	sw	$s5,0x64($sp)
/*  f137f40:	afb40060 */ 	sw	$s4,0x60($sp)
/*  f137f44:	afb3005c */ 	sw	$s3,0x5c($sp)
/*  f137f48:	afb20058 */ 	sw	$s2,0x58($sp)
/*  f137f4c:	afb10054 */ 	sw	$s1,0x54($sp)
/*  f137f50:	afb00050 */ 	sw	$s0,0x50($sp)
/*  f137f54:	f7be0048 */ 	sdc1	$f30,0x48($sp)
/*  f137f58:	f7bc0040 */ 	sdc1	$f28,0x40($sp)
/*  f137f5c:	f7ba0038 */ 	sdc1	$f26,0x38($sp)
/*  f137f60:	f7b80030 */ 	sdc1	$f24,0x30($sp)
/*  f137f64:	f7b60028 */ 	sdc1	$f22,0x28($sp)
/*  f137f68:	f7b40020 */ 	sdc1	$f20,0x20($sp)
/*  f137f6c:	afa400f8 */ 	sw	$a0,0xf8($sp)
/*  f137f70:	25eff3cc */ 	addiu	$t7,$t7,%lo(var8007f3cc)
/*  f137f74:	8de10000 */ 	lw	$at,0x0($t7)
/*  f137f78:	8de90004 */ 	lw	$t1,0x4($t7)
/*  f137f7c:	27ae00e8 */ 	addiu	$t6,$sp,0xe8
/*  f137f80:	adc10000 */ 	sw	$at,0x0($t6)
/*  f137f84:	adc90004 */ 	sw	$t1,0x4($t6)
/*  f137f88:	8de9000c */ 	lw	$t1,0xc($t7)
/*  f137f8c:	8de10008 */ 	lw	$at,0x8($t7)
/*  f137f90:	3c0a800a */ 	lui	$t2,%hi(var800a416c)
/*  f137f94:	adc9000c */ 	sw	$t1,0xc($t6)
/*  f137f98:	adc10008 */ 	sw	$at,0x8($t6)
/*  f137f9c:	8d4a416c */ 	lw	$t2,%lo(var800a416c)($t2)
/*  f137fa0:	00009825 */ 	or	$s3,$zero,$zero
/*  f137fa4:	00008025 */ 	or	$s0,$zero,$zero
/*  f137fa8:	448a2000 */ 	mtc1	$t2,$f4
/*  f137fac:	27b100e8 */ 	addiu	$s1,$sp,0xe8
/*  f137fb0:	05410005 */ 	bgez	$t2,.L0f137fc8
/*  f137fb4:	468021a0 */ 	cvt.s.w	$f6,$f4
/*  f137fb8:	3c014f80 */ 	lui	$at,0x4f80
/*  f137fbc:	44814000 */ 	mtc1	$at,$f8
/*  f137fc0:	00000000 */ 	nop
/*  f137fc4:	46083180 */ 	add.s	$f6,$f6,$f8
.L0f137fc8:
/*  f137fc8:	3c014496 */ 	lui	$at,0x4496
/*  f137fcc:	44815000 */ 	mtc1	$at,$f10
/*  f137fd0:	3c01437f */ 	lui	$at,0x437f
/*  f137fd4:	4481f000 */ 	mtc1	$at,$f30
/*  f137fd8:	3c017f1b */ 	lui	$at,%hi(var7f1b57f4)
/*  f137fdc:	c43c57f4 */ 	lwc1	$f28,%lo(var7f1b57f4)($at)
/*  f137fe0:	3c013f00 */ 	lui	$at,0x3f00
/*  f137fe4:	4481d000 */ 	mtc1	$at,$f26
/*  f137fe8:	3c017f1b */ 	lui	$at,%hi(var7f1b57f8)
/*  f137fec:	c43657f8 */ 	lwc1	$f22,%lo(var7f1b57f8)($at)
/*  f137ff0:	27b200b8 */ 	addiu	$s2,$sp,0xb8
/*  f137ff4:	27b400c8 */ 	addiu	$s4,$sp,0xc8
/*  f137ff8:	27b500d8 */ 	addiu	$s5,$sp,0xd8
/*  f137ffc:	241e0002 */ 	addiu	$s8,$zero,0x2
/*  f138000:	241700ff */ 	addiu	$s7,$zero,0xff
/*  f138004:	24160001 */ 	addiu	$s6,$zero,0x1
/*  f138008:	2408ffff */ 	addiu	$t0,$zero,-1
/*  f13800c:	460a3603 */ 	div.s	$f24,$f6,$f10
/*  f138010:	44908000 */ 	mtc1	$s0,$f16
.L0f138014:
/*  f138014:	3c02800a */ 	lui	$v0,%hi(var800a4170)
/*  f138018:	3c0b800a */ 	lui	$t3,%hi(var800a4170)
/*  f13801c:	468084a0 */ 	cvt.s.w	$f18,$f16
/*  f138020:	461a9102 */ 	mul.s	$f4,$f18,$f26
/*  f138024:	46182000 */ 	add.s	$f0,$f4,$f24
/*  f138028:	4600020d */ 	trunc.w.s	$f8,$f0
/*  f13802c:	440c4000 */ 	mfc1	$t4,$f8
/*  f138030:	00000000 */ 	nop
/*  f138034:	448c3000 */ 	mtc1	$t4,$f6
/*  f138038:	00000000 */ 	nop
/*  f13803c:	468032a0 */ 	cvt.s.w	$f10,$f6
/*  f138040:	460a0501 */ 	sub.s	$f20,$f0,$f10
/*  f138044:	4614b03c */ 	c.lt.s	$f22,$f20
/*  f138048:	00000000 */ 	nop
/*  f13804c:	45000043 */ 	bc1f	.L0f13815c
/*  f138050:	00000000 */ 	nop
/*  f138054:	8c424170 */ 	lw	$v0,%lo(var800a4170)($v0)
/*  f138058:	00106900 */ 	sll	$t5,$s0,0x4
/*  f13805c:	4616a401 */ 	sub.s	$f16,$f20,$f22
/*  f138060:	004dc821 */ 	addu	$t9,$v0,$t5
/*  f138064:	8f3841d4 */ 	lw	$t8,0x41d4($t9)
/*  f138068:	02001825 */ 	or	$v1,$s0,$zero
/*  f13806c:	461c8483 */ 	div.s	$f18,$f16,$f28
/*  f138070:	11180005 */ 	beq	$t0,$t8,.L0f138088
/*  f138074:	26730002 */ 	addiu	$s3,$s3,0x2
/*  f138078:	00507021 */ 	addu	$t6,$v0,$s0
/*  f13807c:	26030002 */ 	addiu	$v1,$s0,0x2
/*  f138080:	10000003 */ 	b	.L0f138090
/*  f138084:	a1d641b0 */ 	sb	$s6,0x41b0($t6)
.L0f138088:
/*  f138088:	00507821 */ 	addu	$t7,$v0,$s0
/*  f13808c:	a1fe41b0 */ 	sb	$s8,0x41b0($t7)
.L0f138090:
/*  f138090:	461e9102 */ 	mul.s	$f4,$f18,$f30
/*  f138094:	24020001 */ 	addiu	$v0,$zero,0x1
/*  f138098:	ae230000 */ 	sw	$v1,0x0($s1)
/*  f13809c:	3c014f00 */ 	lui	$at,0x4f00
/*  f1380a0:	4449f800 */ 	cfc1	$t1,$31
/*  f1380a4:	44c2f800 */ 	ctc1	$v0,$31
/*  f1380a8:	00000000 */ 	nop
/*  f1380ac:	46002224 */ 	cvt.w.s	$f8,$f4
/*  f1380b0:	4442f800 */ 	cfc1	$v0,$31
/*  f1380b4:	00000000 */ 	nop
/*  f1380b8:	30420078 */ 	andi	$v0,$v0,0x78
/*  f1380bc:	50400013 */ 	beqzl	$v0,.L0f13810c
/*  f1380c0:	44024000 */ 	mfc1	$v0,$f8
/*  f1380c4:	44814000 */ 	mtc1	$at,$f8
/*  f1380c8:	24020001 */ 	addiu	$v0,$zero,0x1
/*  f1380cc:	46082201 */ 	sub.s	$f8,$f4,$f8
/*  f1380d0:	44c2f800 */ 	ctc1	$v0,$31
/*  f1380d4:	00000000 */ 	nop
/*  f1380d8:	46004224 */ 	cvt.w.s	$f8,$f8
/*  f1380dc:	4442f800 */ 	cfc1	$v0,$31
/*  f1380e0:	00000000 */ 	nop
/*  f1380e4:	30420078 */ 	andi	$v0,$v0,0x78
/*  f1380e8:	14400005 */ 	bnez	$v0,.L0f138100
/*  f1380ec:	00000000 */ 	nop
/*  f1380f0:	44024000 */ 	mfc1	$v0,$f8
/*  f1380f4:	3c018000 */ 	lui	$at,0x8000
/*  f1380f8:	10000007 */ 	b	.L0f138118
/*  f1380fc:	00411025 */ 	or	$v0,$v0,$at
.L0f138100:
/*  f138100:	10000005 */ 	b	.L0f138118
/*  f138104:	2402ffff */ 	addiu	$v0,$zero,-1
/*  f138108:	44024000 */ 	mfc1	$v0,$f8
.L0f13810c:
/*  f13810c:	00000000 */ 	nop
/*  f138110:	0440fffb */ 	bltz	$v0,.L0f138100
/*  f138114:	00000000 */ 	nop
.L0f138118:
/*  f138118:	3c013f80 */ 	lui	$at,0x3f80
/*  f13811c:	44c9f800 */ 	ctc1	$t1,$31
/*  f138120:	44813000 */ 	mtc1	$at,$f6
/*  f138124:	02e25023 */ 	subu	$t2,$s7,$v0
/*  f138128:	ae420000 */ 	sw	$v0,0x0($s2)
/*  f13812c:	4606a281 */ 	sub.s	$f10,$f20,$f6
/*  f138130:	aeb00000 */ 	sw	$s0,0x0($s5)
/*  f138134:	ae300004 */ 	sw	$s0,0x4($s1)
/*  f138138:	ae4a0004 */ 	sw	$t2,0x4($s2)
/*  f13813c:	e68a0000 */ 	swc1	$f10,0x0($s4)
/*  f138140:	e6940004 */ 	swc1	$f20,0x4($s4)
/*  f138144:	aeb00004 */ 	sw	$s0,0x4($s5)
/*  f138148:	26310008 */ 	addiu	$s1,$s1,0x8
/*  f13814c:	26520008 */ 	addiu	$s2,$s2,0x8
/*  f138150:	26940008 */ 	addiu	$s4,$s4,0x8
/*  f138154:	10000018 */ 	b	.L0f1381b8
/*  f138158:	26b50008 */ 	addiu	$s5,$s5,0x8
.L0f13815c:
/*  f13815c:	8d6b4170 */ 	lw	$t3,%lo(var800a4170)($t3)
/*  f138160:	26040002 */ 	addiu	$a0,$s0,0x2
/*  f138164:	02002825 */ 	or	$a1,$s0,$zero
/*  f138168:	01701021 */ 	addu	$v0,$t3,$s0
/*  f13816c:	804c41b0 */ 	lb	$t4,0x41b0($v0)
/*  f138170:	56cc0008 */ 	bnel	$s6,$t4,.L0f138194
/*  f138174:	a04041b0 */ 	sb	$zero,0x41b0($v0)
/*  f138178:	0fc4dfaa */ 	jal	func0f137ea8
/*  f13817c:	02c03025 */ 	or	$a2,$s6,$zero
/*  f138180:	3c0d800a */ 	lui	$t5,%hi(var800a4170)
/*  f138184:	8dad4170 */ 	lw	$t5,%lo(var800a4170)($t5)
/*  f138188:	2408ffff */ 	addiu	$t0,$zero,-1
/*  f13818c:	01b01021 */ 	addu	$v0,$t5,$s0
/*  f138190:	a04041b0 */ 	sb	$zero,0x41b0($v0)
.L0f138194:
/*  f138194:	ae300000 */ 	sw	$s0,0x0($s1)
/*  f138198:	ae570000 */ 	sw	$s7,0x0($s2)
/*  f13819c:	e6940000 */ 	swc1	$f20,0x0($s4)
/*  f1381a0:	aeb00000 */ 	sw	$s0,0x0($s5)
/*  f1381a4:	26730001 */ 	addiu	$s3,$s3,0x1
/*  f1381a8:	26310004 */ 	addiu	$s1,$s1,0x4
/*  f1381ac:	26520004 */ 	addiu	$s2,$s2,0x4
/*  f1381b0:	26940004 */ 	addiu	$s4,$s4,0x4
/*  f1381b4:	26b50004 */ 	addiu	$s5,$s5,0x4
.L0f1381b8:
/*  f1381b8:	26100001 */ 	addiu	$s0,$s0,0x1
/*  f1381bc:	561eff95 */ 	bnel	$s0,$s8,.L0f138014
/*  f1381c0:	44908000 */ 	mtc1	$s0,$f16
/*  f1381c4:	3c014120 */ 	lui	$at,0x4120
/*  f1381c8:	4481a000 */ 	mtc1	$at,$f20
/*  f1381cc:	27b500d8 */ 	addiu	$s5,$sp,0xd8
/*  f1381d0:	27b400b8 */ 	addiu	$s4,$sp,0xb8
/*  f1381d4:	27b200c8 */ 	addiu	$s2,$sp,0xc8
/*  f1381d8:	4600a086 */ 	mov.s	$f2,$f20
.L0f1381dc:
/*  f1381dc:	01008825 */ 	or	$s1,$t0,$zero
/*  f1381e0:	1a600012 */ 	blez	$s3,.L0f13822c
/*  f1381e4:	00008025 */ 	or	$s0,$zero,$zero
/*  f1381e8:	00001025 */ 	or	$v0,$zero,$zero
/*  f1381ec:	27a300e8 */ 	addiu	$v1,$sp,0xe8
.L0f1381f0:
/*  f1381f0:	8c790000 */ 	lw	$t9,0x0($v1)
/*  f1381f4:	24630004 */ 	addiu	$v1,$v1,0x4
/*  f1381f8:	0242c021 */ 	addu	$t8,$s2,$v0
/*  f1381fc:	07220009 */ 	bltzl	$t9,.L0f138224
/*  f138200:	26100001 */ 	addiu	$s0,$s0,0x1
/*  f138204:	c7000000 */ 	lwc1	$f0,0x0($t8)
/*  f138208:	4602003c */ 	c.lt.s	$f0,$f2
/*  f13820c:	00000000 */ 	nop
/*  f138210:	45020004 */ 	bc1fl	.L0f138224
/*  f138214:	26100001 */ 	addiu	$s0,$s0,0x1
/*  f138218:	02008825 */ 	or	$s1,$s0,$zero
/*  f13821c:	46000086 */ 	mov.s	$f2,$f0
/*  f138220:	26100001 */ 	addiu	$s0,$s0,0x1
.L0f138224:
/*  f138224:	1613fff2 */ 	bne	$s0,$s3,.L0f1381f0
/*  f138228:	24420004 */ 	addiu	$v0,$v0,4
.L0f13822c:
/*  f13822c:	06200017 */ 	bltz	$s1,.L0f13828c
/*  f138230:	8fa400f8 */ 	lw	$a0,0xf8($sp)
/*  f138234:	00111080 */ 	sll	$v0,$s1,0x2
/*  f138238:	27ae00e8 */ 	addiu	$t6,$sp,0xe8
/*  f13823c:	004e8021 */ 	addu	$s0,$v0,$t6
/*  f138240:	8e030000 */ 	lw	$v1,0x0($s0)
/*  f138244:	3c0f800a */ 	lui	$t7,%hi(var800a4170)
/*  f138248:	8def4170 */ 	lw	$t7,%lo(var800a4170)($t7)
/*  f13824c:	02826021 */ 	addu	$t4,$s4,$v0
/*  f138250:	8d8d0000 */ 	lw	$t5,0x0($t4)
/*  f138254:	00034900 */ 	sll	$t1,$v1,0x4
/*  f138258:	02425821 */ 	addu	$t3,$s2,$v0
/*  f13825c:	01e95021 */ 	addu	$t2,$t7,$t1
/*  f138260:	914541b7 */ 	lbu	$a1,0x41b7($t2)
/*  f138264:	8d670000 */ 	lw	$a3,0x0($t3)
/*  f138268:	02a2c821 */ 	addu	$t9,$s5,$v0
/*  f13826c:	afad0010 */ 	sw	$t5,0x10($sp)
/*  f138270:	8f380000 */ 	lw	$t8,0x0($t9)
/*  f138274:	306600ff */ 	andi	$a2,$v1,0xff
/*  f138278:	0fc4ded3 */ 	jal	func0f137b4c
/*  f13827c:	afb80014 */ 	sw	$t8,0x14($sp)
/*  f138280:	2408ffff */ 	addiu	$t0,$zero,-1
/*  f138284:	afa200f8 */ 	sw	$v0,0xf8($sp)
/*  f138288:	ae080000 */ 	sw	$t0,0x0($s0)
.L0f13828c:
/*  f13828c:	5628ffd3 */ 	bnel	$s1,$t0,.L0f1381dc
/*  f138290:	4600a086 */ 	mov.s	$f2,$f20
/*  f138294:	8fbf0074 */ 	lw	$ra,0x74($sp)
/*  f138298:	8fa200f8 */ 	lw	$v0,0xf8($sp)
/*  f13829c:	d7b40020 */ 	ldc1	$f20,0x20($sp)
/*  f1382a0:	d7b60028 */ 	ldc1	$f22,0x28($sp)
/*  f1382a4:	d7b80030 */ 	ldc1	$f24,0x30($sp)
/*  f1382a8:	d7ba0038 */ 	ldc1	$f26,0x38($sp)
/*  f1382ac:	d7bc0040 */ 	ldc1	$f28,0x40($sp)
/*  f1382b0:	d7be0048 */ 	ldc1	$f30,0x48($sp)
/*  f1382b4:	8fb00050 */ 	lw	$s0,0x50($sp)
/*  f1382b8:	8fb10054 */ 	lw	$s1,0x54($sp)
/*  f1382bc:	8fb20058 */ 	lw	$s2,0x58($sp)
/*  f1382c0:	8fb3005c */ 	lw	$s3,0x5c($sp)
/*  f1382c4:	8fb40060 */ 	lw	$s4,0x60($sp)
/*  f1382c8:	8fb50064 */ 	lw	$s5,0x64($sp)
/*  f1382cc:	8fb60068 */ 	lw	$s6,0x68($sp)
/*  f1382d0:	8fb7006c */ 	lw	$s7,0x6c($sp)
/*  f1382d4:	8fbe0070 */ 	lw	$s8,0x70($sp)
/*  f1382d8:	03e00008 */ 	jr	$ra
/*  f1382dc:	27bd00f8 */ 	addiu	$sp,$sp,0xf8
);

GLOBAL_ASM(
glabel func0f1382e0
.late_rodata
glabel var7f1b57fc
.word 0xb8d1b717
glabel var7f1b5800
.word 0x38d1b717
.text
/*  f1382e0:	27bdffc8 */ 	addiu	$sp,$sp,-56
/*  f1382e4:	f7ba0028 */ 	sdc1	$f26,0x28($sp)
/*  f1382e8:	3c017f1b */ 	lui	$at,%hi(var7f1b57fc)
/*  f1382ec:	c43a57fc */ 	lwc1	$f26,%lo(var7f1b57fc)($at)
/*  f1382f0:	f7b80020 */ 	sdc1	$f24,0x20($sp)
/*  f1382f4:	3c017f1b */ 	lui	$at,%hi(var7f1b5800)
/*  f1382f8:	c4385800 */ 	lwc1	$f24,%lo(var7f1b5800)($at)
/*  f1382fc:	f7b60018 */ 	sdc1	$f22,0x18($sp)
/*  f138300:	3c012f80 */ 	lui	$at,0x2f80
/*  f138304:	f7b40010 */ 	sdc1	$f20,0x10($sp)
/*  f138308:	4481b000 */ 	mtc1	$at,$f22
/*  f13830c:	46006506 */ 	mov.s	$f20,$f12
/*  f138310:	afbf0034 */ 	sw	$ra,0x34($sp)
.L0f138314:
/*  f138314:	0c004b70 */ 	jal	random
/*  f138318:	00000000 */ 	nop
/*  f13831c:	44822000 */ 	mtc1	$v0,$f4
/*  f138320:	3c014f80 */ 	lui	$at,0x4f80
/*  f138324:	04410004 */ 	bgez	$v0,.L0f138338
/*  f138328:	468021a0 */ 	cvt.s.w	$f6,$f4
/*  f13832c:	44814000 */ 	mtc1	$at,$f8
/*  f138330:	00000000 */ 	nop
/*  f138334:	46083180 */ 	add.s	$f6,$f6,$f8
.L0f138338:
/*  f138338:	46163282 */ 	mul.s	$f10,$f6,$f22
/*  f13833c:	00000000 */ 	nop
/*  f138340:	46145002 */ 	mul.s	$f0,$f10,$f20
/*  f138344:	46000400 */ 	add.s	$f16,$f0,$f0
/*  f138348:	46148081 */ 	sub.s	$f2,$f16,$f20
/*  f13834c:	4618103c */ 	c.lt.s	$f2,$f24
/*  f138350:	46001306 */ 	mov.s	$f12,$f2
/*  f138354:	45000005 */ 	bc1f	.L0f13836c
/*  f138358:	00000000 */ 	nop
/*  f13835c:	460cd03c */ 	c.lt.s	$f26,$f12
/*  f138360:	00000000 */ 	nop
/*  f138364:	4501ffeb */ 	bc1t	.L0f138314
/*  f138368:	00000000 */ 	nop
.L0f13836c:
/*  f13836c:	8fbf0034 */ 	lw	$ra,0x34($sp)
/*  f138370:	d7b40010 */ 	ldc1	$f20,0x10($sp)
/*  f138374:	d7b60018 */ 	ldc1	$f22,0x18($sp)
/*  f138378:	d7b80020 */ 	ldc1	$f24,0x20($sp)
/*  f13837c:	d7ba0028 */ 	ldc1	$f26,0x28($sp)
/*  f138380:	27bd0038 */ 	addiu	$sp,$sp,0x38
/*  f138384:	03e00008 */ 	jr	$ra
/*  f138388:	46001006 */ 	mov.s	$f0,$f2
);

GLOBAL_ASM(
glabel func0f13838c
.late_rodata
glabel var7f1b5804
.word 0x3b122531
.text
/*  f13838c:	27bdffc0 */ 	addiu	$sp,$sp,-64
/*  f138390:	afb20024 */ 	sw	$s2,0x24($sp)
/*  f138394:	afb70038 */ 	sw	$s7,0x38($sp)
/*  f138398:	afb60034 */ 	sw	$s6,0x34($sp)
/*  f13839c:	afb50030 */ 	sw	$s5,0x30($sp)
/*  f1383a0:	afb4002c */ 	sw	$s4,0x2c($sp)
/*  f1383a4:	afb0001c */ 	sw	$s0,0x1c($sp)
/*  f1383a8:	f7b40010 */ 	sdc1	$f20,0x10($sp)
/*  f1383ac:	3c12800a */ 	lui	$s2,%hi(var800a4170)
/*  f1383b0:	3c017f1b */ 	lui	$at,%hi(var7f1b5804)
/*  f1383b4:	0080a025 */ 	or	$s4,$a0,$zero
/*  f1383b8:	afbf003c */ 	sw	$ra,0x3c($sp)
/*  f1383bc:	afb30028 */ 	sw	$s3,0x28($sp)
/*  f1383c0:	afb10020 */ 	sw	$s1,0x20($sp)
/*  f1383c4:	c4345804 */ 	lwc1	$f20,%lo(var7f1b5804)($at)
/*  f1383c8:	26524170 */ 	addiu	$s2,$s2,%lo(var800a4170)
/*  f1383cc:	00008025 */ 	or	$s0,$zero,$zero
/*  f1383d0:	2415000c */ 	addiu	$s5,$zero,0xc
/*  f1383d4:	24160006 */ 	addiu	$s6,$zero,0x6
/*  f1383d8:	24170002 */ 	addiu	$s7,$zero,0x2
/*  f1383dc:	8e4e0000 */ 	lw	$t6,0x0($s2)
.L0f1383e0:
/*  f1383e0:	001098c0 */ 	sll	$s3,$s0,0x3
/*  f1383e4:	01d07821 */ 	addu	$t7,$t6,$s0
/*  f1383e8:	81f841b0 */ 	lb	$t8,0x41b0($t7)
/*  f1383ec:	57000023 */ 	bnezl	$t8,.L0f13847c
/*  f1383f0:	26100001 */ 	addiu	$s0,$s0,0x1
/*  f1383f4:	0c004b70 */ 	jal	random
/*  f1383f8:	00108900 */ 	sll	$s1,$s0,0x4
/*  f1383fc:	0055001b */ 	divu	$zero,$v0,$s5
/*  f138400:	8e480000 */ 	lw	$t0,0x0($s2)
/*  f138404:	0000c810 */ 	mfhi	$t9
/*  f138408:	4600a306 */ 	mov.s	$f12,$f20
/*  f13840c:	16a00002 */ 	bnez	$s5,.L0f138418
/*  f138410:	00000000 */ 	nop
/*  f138414:	0007000d */ 	break	0x7
.L0f138418:
/*  f138418:	01114821 */ 	addu	$t1,$t0,$s1
/*  f13841c:	0fc4e0b8 */ 	jal	func0f1382e0
/*  f138420:	ad3941d4 */ 	sw	$t9,0x41d4($t1)
/*  f138424:	8e4a0000 */ 	lw	$t2,0x0($s2)
/*  f138428:	4600a306 */ 	mov.s	$f12,$f20
/*  f13842c:	01515821 */ 	addu	$t3,$t2,$s1
/*  f138430:	0fc4e0b8 */ 	jal	func0f1382e0
/*  f138434:	e56041d8 */ 	swc1	$f0,0x41d8($t3)
/*  f138438:	8e4c0000 */ 	lw	$t4,0x0($s2)
/*  f13843c:	02747806 */ 	srlv	$t7,$s4,$s3
/*  f138440:	31f80002 */ 	andi	$t8,$t7,0x2
/*  f138444:	01916821 */ 	addu	$t5,$t4,$s1
/*  f138448:	1300000b */ 	beqz	$t8,.L0f138478
/*  f13844c:	e5a041dc */ 	swc1	$f0,0x41dc($t5)
/*  f138450:	0c004b70 */ 	jal	random
/*  f138454:	00000000 */ 	nop
/*  f138458:	0056001b */ 	divu	$zero,$v0,$s6
/*  f13845c:	8e590000 */ 	lw	$t9,0x0($s2)
/*  f138460:	00004010 */ 	mfhi	$t0
/*  f138464:	03314821 */ 	addu	$t1,$t9,$s1
/*  f138468:	ad2841e0 */ 	sw	$t0,0x41e0($t1)
/*  f13846c:	16c00002 */ 	bnez	$s6,.L0f138478
/*  f138470:	00000000 */ 	nop
/*  f138474:	0007000d */ 	break	0x7
.L0f138478:
/*  f138478:	26100001 */ 	addiu	$s0,$s0,0x1
.L0f13847c:
/*  f13847c:	5617ffd8 */ 	bnel	$s0,$s7,.L0f1383e0
/*  f138480:	8e4e0000 */ 	lw	$t6,0x0($s2)
/*  f138484:	8fbf003c */ 	lw	$ra,0x3c($sp)
/*  f138488:	d7b40010 */ 	ldc1	$f20,0x10($sp)
/*  f13848c:	8fb0001c */ 	lw	$s0,0x1c($sp)
/*  f138490:	8fb10020 */ 	lw	$s1,0x20($sp)
/*  f138494:	8fb20024 */ 	lw	$s2,0x24($sp)
/*  f138498:	8fb30028 */ 	lw	$s3,0x28($sp)
/*  f13849c:	8fb4002c */ 	lw	$s4,0x2c($sp)
/*  f1384a0:	8fb50030 */ 	lw	$s5,0x30($sp)
/*  f1384a4:	8fb60034 */ 	lw	$s6,0x34($sp)
/*  f1384a8:	8fb70038 */ 	lw	$s7,0x38($sp)
/*  f1384ac:	03e00008 */ 	jr	$ra
/*  f1384b0:	27bd0040 */ 	addiu	$sp,$sp,0x40
);

GLOBAL_ASM(
glabel func0f1384b4
/*  f1384b4:	27bdffd0 */ 	addiu	$sp,$sp,-48
/*  f1384b8:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f1384bc:	afbf001c */ 	sw	$ra,0x1c($sp)
/*  f1384c0:	3c0f8006 */ 	lui	$t7,%hi(var800613a0)
/*  f1384c4:	25ef13a0 */ 	addiu	$t7,$t7,%lo(var800613a0)
/*  f1384c8:	3c0e0600 */ 	lui	$t6,0x600
/*  f1384cc:	ac8e0000 */ 	sw	$t6,0x0($a0)
/*  f1384d0:	ac8f0004 */ 	sw	$t7,0x4($a0)
/*  f1384d4:	24900008 */ 	addiu	$s0,$a0,0x8
/*  f1384d8:	0fc54df7 */ 	jal	func0f1537dc
/*  f1384dc:	02002025 */ 	or	$a0,$s0,$zero
/*  f1384e0:	afa20028 */ 	sw	$v0,0x28($sp)
/*  f1384e4:	0c002f02 */ 	jal	viGetX
/*  f1384e8:	24500008 */ 	addiu	$s0,$v0,0x8
/*  f1384ec:	0c002f06 */ 	jal	viGetY
/*  f1384f0:	a7a20026 */ 	sh	$v0,0x26($sp)
/*  f1384f4:	87a90026 */ 	lh	$t1,0x26($sp)
/*  f1384f8:	305803ff */ 	andi	$t8,$v0,0x3ff
/*  f1384fc:	8fa30028 */ 	lw	$v1,0x28($sp)
/*  f138500:	0018c880 */ 	sll	$t9,$t8,0x2
/*  f138504:	3c01f600 */ 	lui	$at,0xf600
/*  f138508:	312a03ff */ 	andi	$t2,$t1,0x3ff
/*  f13850c:	000a5b80 */ 	sll	$t3,$t2,0xe
/*  f138510:	03214025 */ 	or	$t0,$t9,$at
/*  f138514:	010b6025 */ 	or	$t4,$t0,$t3
/*  f138518:	02002025 */ 	or	$a0,$s0,$zero
/*  f13851c:	ac6c0000 */ 	sw	$t4,0x0($v1)
/*  f138520:	0fc54e0e */ 	jal	func0f153838
/*  f138524:	ac600004 */ 	sw	$zero,0x4($v1)
/*  f138528:	8fbf001c */ 	lw	$ra,0x1c($sp)
/*  f13852c:	8fb00018 */ 	lw	$s0,0x18($sp)
/*  f138530:	27bd0030 */ 	addiu	$sp,$sp,0x30
/*  f138534:	03e00008 */ 	jr	$ra
/*  f138538:	00000000 */ 	nop
/*  f13853c:	27bdffd0 */ 	addiu	$sp,$sp,-48
/*  f138540:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f138544:	00808025 */ 	or	$s0,$a0,$zero
/*  f138548:	afbf001c */ 	sw	$ra,0x1c($sp)
/*  f13854c:	24040002 */ 	addiu	$a0,$zero,0x2
/*  f138550:	afa50034 */ 	sw	$a1,0x34($sp)
/*  f138554:	0fc59e73 */ 	jal	func0f1679cc
/*  f138558:	afa60038 */ 	sw	$a2,0x38($sp)
/*  f13855c:	24040004 */ 	addiu	$a0,$zero,0x4
/*  f138560:	0fc59e59 */ 	jal	func0f167964
/*  f138564:	afa20028 */ 	sw	$v0,0x28($sp)
/*  f138568:	8fa50034 */ 	lw	$a1,0x34($sp)
/*  f13856c:	afa2002c */ 	sw	$v0,0x2c($sp)
/*  f138570:	8fa60038 */ 	lw	$a2,0x38($sp)
/*  f138574:	c4a40000 */ 	lwc1	$f4,0x0($a1)
/*  f138578:	8fa40028 */ 	lw	$a0,0x28($sp)
/*  f13857c:	3c014120 */ 	lui	$at,0x4120
/*  f138580:	4600218d */ 	trunc.w.s	$f6,$f4
/*  f138584:	44810000 */ 	mtc1	$at,$f0
/*  f138588:	24080004 */ 	addiu	$t0,$zero,0x4
/*  f13858c:	2409ffff */ 	addiu	$t1,$zero,-1
/*  f138590:	440f3000 */ 	mfc1	$t7,$f6
/*  f138594:	3c0e0704 */ 	lui	$t6,0x704
/*  f138598:	35ce0008 */ 	ori	$t6,$t6,0x8
/*  f13859c:	a44f0000 */ 	sh	$t7,0x0($v0)
/*  f1385a0:	c4a80004 */ 	lwc1	$f8,0x4($a1)
/*  f1385a4:	02001825 */ 	or	$v1,$s0,$zero
/*  f1385a8:	26100008 */ 	addiu	$s0,$s0,0x8
/*  f1385ac:	4600428d */ 	trunc.w.s	$f10,$f8
/*  f1385b0:	44195000 */ 	mfc1	$t9,$f10
/*  f1385b4:	00000000 */ 	nop
/*  f1385b8:	a4590002 */ 	sh	$t9,0x2($v0)
/*  f1385bc:	c4b00008 */ 	lwc1	$f16,0x8($a1)
/*  f1385c0:	4600848d */ 	trunc.w.s	$f18,$f16
/*  f1385c4:	440b9000 */ 	mfc1	$t3,$f18
/*  f1385c8:	00000000 */ 	nop
/*  f1385cc:	a44b0004 */ 	sh	$t3,0x4($v0)
/*  f1385d0:	c4a40000 */ 	lwc1	$f4,0x0($a1)
/*  f1385d4:	4600218d */ 	trunc.w.s	$f6,$f4
/*  f1385d8:	440d3000 */ 	mfc1	$t5,$f6
/*  f1385dc:	00000000 */ 	nop
/*  f1385e0:	a44d000c */ 	sh	$t5,0xc($v0)
/*  f1385e4:	c4a80004 */ 	lwc1	$f8,0x4($a1)
/*  f1385e8:	46004280 */ 	add.s	$f10,$f8,$f0
/*  f1385ec:	4600540d */ 	trunc.w.s	$f16,$f10
/*  f1385f0:	440f8000 */ 	mfc1	$t7,$f16
/*  f1385f4:	00000000 */ 	nop
/*  f1385f8:	a44f000e */ 	sh	$t7,0xe($v0)
/*  f1385fc:	c4b20008 */ 	lwc1	$f18,0x8($a1)
/*  f138600:	4600910d */ 	trunc.w.s	$f4,$f18
/*  f138604:	44192000 */ 	mfc1	$t9,$f4
/*  f138608:	00000000 */ 	nop
/*  f13860c:	a4590010 */ 	sh	$t9,0x10($v0)
/*  f138610:	c4c60000 */ 	lwc1	$f6,0x0($a2)
/*  f138614:	4600320d */ 	trunc.w.s	$f8,$f6
/*  f138618:	440b4000 */ 	mfc1	$t3,$f8
/*  f13861c:	00000000 */ 	nop
/*  f138620:	a44b0018 */ 	sh	$t3,0x18($v0)
/*  f138624:	c4ca0004 */ 	lwc1	$f10,0x4($a2)
/*  f138628:	46005400 */ 	add.s	$f16,$f10,$f0
/*  f13862c:	4600848d */ 	trunc.w.s	$f18,$f16
/*  f138630:	440d9000 */ 	mfc1	$t5,$f18
/*  f138634:	00000000 */ 	nop
/*  f138638:	a44d001a */ 	sh	$t5,0x1a($v0)
/*  f13863c:	c4c40008 */ 	lwc1	$f4,0x8($a2)
/*  f138640:	4600218d */ 	trunc.w.s	$f6,$f4
/*  f138644:	440f3000 */ 	mfc1	$t7,$f6
/*  f138648:	00000000 */ 	nop
/*  f13864c:	a44f001c */ 	sh	$t7,0x1c($v0)
/*  f138650:	c4c80000 */ 	lwc1	$f8,0x0($a2)
/*  f138654:	4600428d */ 	trunc.w.s	$f10,$f8
/*  f138658:	44195000 */ 	mfc1	$t9,$f10
/*  f13865c:	00000000 */ 	nop
/*  f138660:	a4590024 */ 	sh	$t9,0x24($v0)
/*  f138664:	c4d00004 */ 	lwc1	$f16,0x4($a2)
/*  f138668:	4600848d */ 	trunc.w.s	$f18,$f16
/*  f13866c:	440b9000 */ 	mfc1	$t3,$f18
/*  f138670:	00000000 */ 	nop
/*  f138674:	a44b0026 */ 	sh	$t3,0x26($v0)
/*  f138678:	c4c40008 */ 	lwc1	$f4,0x8($a2)
/*  f13867c:	a0400007 */ 	sb	$zero,0x7($v0)
/*  f138680:	a0480013 */ 	sb	$t0,0x13($v0)
/*  f138684:	4600218d */ 	trunc.w.s	$f6,$f4
/*  f138688:	a048001f */ 	sb	$t0,0x1f($v0)
/*  f13868c:	a040002b */ 	sb	$zero,0x2b($v0)
/*  f138690:	440d3000 */ 	mfc1	$t5,$f6
/*  f138694:	00000000 */ 	nop
/*  f138698:	a44d0028 */ 	sh	$t5,0x28($v0)
/*  f13869c:	ac890000 */ 	sw	$t1,0x0($a0)
/*  f1386a0:	ac890004 */ 	sw	$t1,0x4($a0)
/*  f1386a4:	ac6e0000 */ 	sw	$t6,0x0($v1)
/*  f1386a8:	0c012d20 */ 	jal	osVirtualToPhysical
/*  f1386ac:	afa30024 */ 	sw	$v1,0x24($sp)
/*  f1386b0:	8fa30024 */ 	lw	$v1,0x24($sp)
/*  f1386b4:	3c0f0430 */ 	lui	$t7,0x430
/*  f1386b8:	35ef0030 */ 	ori	$t7,$t7,0x30
/*  f1386bc:	02002825 */ 	or	$a1,$s0,$zero
/*  f1386c0:	ac620004 */ 	sw	$v0,0x4($v1)
/*  f1386c4:	acaf0000 */ 	sw	$t7,0x0($a1)
/*  f1386c8:	afa50020 */ 	sw	$a1,0x20($sp)
/*  f1386cc:	8fa4002c */ 	lw	$a0,0x2c($sp)
/*  f1386d0:	0c012d20 */ 	jal	osVirtualToPhysical
/*  f1386d4:	26100008 */ 	addiu	$s0,$s0,0x8
/*  f1386d8:	8fa50020 */ 	lw	$a1,0x20($sp)
/*  f1386dc:	02001825 */ 	or	$v1,$s0,$zero
/*  f1386e0:	3c18b100 */ 	lui	$t8,0xb100
/*  f1386e4:	aca20004 */ 	sw	$v0,0x4($a1)
/*  f1386e8:	37180002 */ 	ori	$t8,$t8,0x2
/*  f1386ec:	24193210 */ 	addiu	$t9,$zero,0x3210
/*  f1386f0:	ac790004 */ 	sw	$t9,0x4($v1)
/*  f1386f4:	ac780000 */ 	sw	$t8,0x0($v1)
/*  f1386f8:	8fbf001c */ 	lw	$ra,0x1c($sp)
/*  f1386fc:	26020008 */ 	addiu	$v0,$s0,0x8
/*  f138700:	8fb00018 */ 	lw	$s0,0x18($sp)
/*  f138704:	03e00008 */ 	jr	$ra
/*  f138708:	27bd0030 */ 	addiu	$sp,$sp,0x30
);

GLOBAL_ASM(
glabel func0f13870c
.late_rodata
glabel var7f1b5808
.word 0x40c907a9
glabel var7f1b580c
.word 0x453b8000
.text
/*  f13870c:	27bdffb0 */ 	addiu	$sp,$sp,-80
/*  f138710:	afb10040 */ 	sw	$s1,0x40($sp)
/*  f138714:	3c11800a */ 	lui	$s1,%hi(var800a4170)
/*  f138718:	26314170 */ 	addiu	$s1,$s1,%lo(var800a4170)
/*  f13871c:	8e2f0000 */ 	lw	$t7,0x0($s1)
/*  f138720:	afbf004c */ 	sw	$ra,0x4c($sp)
/*  f138724:	afb30048 */ 	sw	$s3,0x48($sp)
/*  f138728:	afb20044 */ 	sw	$s2,0x44($sp)
/*  f13872c:	afb0003c */ 	sw	$s0,0x3c($sp)
/*  f138730:	f7bc0030 */ 	sdc1	$f28,0x30($sp)
/*  f138734:	f7ba0028 */ 	sdc1	$f26,0x28($sp)
/*  f138738:	f7b80020 */ 	sdc1	$f24,0x20($sp)
/*  f13873c:	f7b60018 */ 	sdc1	$f22,0x18($sp)
/*  f138740:	f7b40010 */ 	sdc1	$f20,0x10($sp)
/*  f138744:	240effff */ 	addiu	$t6,$zero,-1
/*  f138748:	a1ee41f5 */ 	sb	$t6,0x41f5($t7)
/*  f13874c:	8e380000 */ 	lw	$t8,0x0($s1)
/*  f138750:	3c01c5fa */ 	lui	$at,0xc5fa
/*  f138754:	240b0007 */ 	addiu	$t3,$zero,0x7
/*  f138758:	a30041f6 */ 	sb	$zero,0x41f6($t8)
/*  f13875c:	8e390000 */ 	lw	$t9,0x0($s1)
/*  f138760:	4481e000 */ 	mtc1	$at,$f28
/*  f138764:	3c017f1b */ 	lui	$at,%hi(var7f1b5808)
/*  f138768:	a32041fc */ 	sb	$zero,0x41fc($t9)
/*  f13876c:	8e280000 */ 	lw	$t0,0x0($s1)
/*  f138770:	00008025 */ 	or	$s0,$zero,$zero
/*  f138774:	24120001 */ 	addiu	$s2,$zero,0x1
/*  f138778:	a10041fd */ 	sb	$zero,0x41fd($t0)
/*  f13877c:	8e290000 */ 	lw	$t1,0x0($s1)
/*  f138780:	24132ee0 */ 	addiu	$s3,$zero,0x2ee0
/*  f138784:	a12041fe */ 	sb	$zero,0x41fe($t1)
/*  f138788:	8e2a0000 */ 	lw	$t2,0x0($s1)
/*  f13878c:	a1404200 */ 	sb	$zero,0x4200($t2)
/*  f138790:	8e2c0000 */ 	lw	$t4,0x0($s1)
/*  f138794:	a18b41ff */ 	sb	$t3,0x41ff($t4)
/*  f138798:	c43a5808 */ 	lwc1	$f26,%lo(var7f1b5808)($at)
/*  f13879c:	3c017f1b */ 	lui	$at,%hi(var7f1b580c)
/*  f1387a0:	c438580c */ 	lwc1	$f24,%lo(var7f1b580c)($at)
/*  f1387a4:	3c012f80 */ 	lui	$at,0x2f80
/*  f1387a8:	4481b000 */ 	mtc1	$at,$f22
/*  f1387ac:	00000000 */ 	nop
.L0f1387b0:
/*  f1387b0:	0c004b70 */ 	jal	random
/*  f1387b4:	00000000 */ 	nop
/*  f1387b8:	44822000 */ 	mtc1	$v0,$f4
/*  f1387bc:	3c014f80 */ 	lui	$at,0x4f80
/*  f1387c0:	04410004 */ 	bgez	$v0,.L0f1387d4
/*  f1387c4:	468021a0 */ 	cvt.s.w	$f6,$f4
/*  f1387c8:	44814000 */ 	mtc1	$at,$f8
/*  f1387cc:	00000000 */ 	nop
/*  f1387d0:	46083180 */ 	add.s	$f6,$f6,$f8
.L0f1387d4:
/*  f1387d4:	46163502 */ 	mul.s	$f20,$f6,$f22
/*  f1387d8:	8e2d0000 */ 	lw	$t5,0x0($s1)
/*  f1387dc:	01b07021 */ 	addu	$t6,$t5,$s0
/*  f1387e0:	4614a280 */ 	add.s	$f10,$f20,$f20
/*  f1387e4:	46185402 */ 	mul.s	$f16,$f10,$f24
/*  f1387e8:	46188481 */ 	sub.s	$f18,$f16,$f24
/*  f1387ec:	0c004b70 */ 	jal	random
/*  f1387f0:	e5d2000c */ 	swc1	$f18,0xc($t6)
/*  f1387f4:	44822000 */ 	mtc1	$v0,$f4
/*  f1387f8:	3c014f80 */ 	lui	$at,0x4f80
/*  f1387fc:	04410004 */ 	bgez	$v0,.L0f138810
/*  f138800:	46802220 */ 	cvt.s.w	$f8,$f4
/*  f138804:	44813000 */ 	mtc1	$at,$f6
/*  f138808:	00000000 */ 	nop
/*  f13880c:	46064200 */ 	add.s	$f8,$f8,$f6
.L0f138810:
/*  f138810:	46164502 */ 	mul.s	$f20,$f8,$f22
/*  f138814:	8e2f0000 */ 	lw	$t7,0x0($s1)
/*  f138818:	01f0c021 */ 	addu	$t8,$t7,$s0
/*  f13881c:	4614a280 */ 	add.s	$f10,$f20,$f20
/*  f138820:	46185402 */ 	mul.s	$f16,$f10,$f24
/*  f138824:	46188481 */ 	sub.s	$f18,$f16,$f24
/*  f138828:	0c004b70 */ 	jal	random
/*  f13882c:	e7120010 */ 	swc1	$f18,0x10($t8)
/*  f138830:	8e280000 */ 	lw	$t0,0x0($s1)
/*  f138834:	30590003 */ 	andi	$t9,$v0,0x3
/*  f138838:	01104821 */ 	addu	$t1,$t0,$s0
/*  f13883c:	0c004b70 */ 	jal	random
/*  f138840:	a139001e */ 	sb	$t9,0x1e($t1)
/*  f138844:	8e2b0000 */ 	lw	$t3,0x0($s1)
/*  f138848:	304a0003 */ 	andi	$t2,$v0,0x3
/*  f13884c:	01706021 */ 	addu	$t4,$t3,$s0
/*  f138850:	0c004b70 */ 	jal	random
/*  f138854:	a18a0020 */ 	sb	$t2,0x20($t4)
/*  f138858:	44822000 */ 	mtc1	$v0,$f4
/*  f13885c:	3c014f80 */ 	lui	$at,0x4f80
/*  f138860:	04410004 */ 	bgez	$v0,.L0f138874
/*  f138864:	468021a0 */ 	cvt.s.w	$f6,$f4
/*  f138868:	44814000 */ 	mtc1	$at,$f8
/*  f13886c:	00000000 */ 	nop
/*  f138870:	46083180 */ 	add.s	$f6,$f6,$f8
.L0f138874:
/*  f138874:	46163282 */ 	mul.s	$f10,$f6,$f22
/*  f138878:	8e2d0000 */ 	lw	$t5,0x0($s1)
/*  f13887c:	01b07021 */ 	addu	$t6,$t5,$s0
/*  f138880:	461a5402 */ 	mul.s	$f16,$f10,$f26
/*  f138884:	e5d00018 */ 	swc1	$f16,0x18($t6)
/*  f138888:	8e230000 */ 	lw	$v1,0x0($s1)
/*  f13888c:	90644200 */ 	lbu	$a0,0x4200($v1)
/*  f138890:	906f41ff */ 	lbu	$t7,0x41ff($v1)
/*  f138894:	00705021 */ 	addu	$t2,$v1,$s0
/*  f138898:	008f082a */ 	slt	$at,$a0,$t7
/*  f13889c:	50200012 */ 	beqzl	$at,.L0f1388e8
/*  f1388a0:	a144001f */ 	sb	$a0,0x1f($t2)
/*  f1388a4:	0c004b70 */ 	jal	random
/*  f1388a8:	00000000 */ 	nop
/*  f1388ac:	8e230000 */ 	lw	$v1,0x0($s1)
/*  f1388b0:	90644200 */ 	lbu	$a0,0x4200($v1)
/*  f1388b4:	907841ff */ 	lbu	$t8,0x41ff($v1)
/*  f1388b8:	00705821 */ 	addu	$t3,$v1,$s0
/*  f1388bc:	03044023 */ 	subu	$t0,$t8,$a0
/*  f1388c0:	0048001b */ 	divu	$zero,$v0,$t0
/*  f1388c4:	0000c810 */ 	mfhi	$t9
/*  f1388c8:	03244821 */ 	addu	$t1,$t9,$a0
/*  f1388cc:	15000002 */ 	bnez	$t0,.L0f1388d8
/*  f1388d0:	00000000 */ 	nop
/*  f1388d4:	0007000d */ 	break	0x7
.L0f1388d8:
/*  f1388d8:	a169001f */ 	sb	$t1,0x1f($t3)
/*  f1388dc:	10000003 */ 	b	.L0f1388ec
/*  f1388e0:	8e230000 */ 	lw	$v1,0x0($s1)
/*  f1388e4:	a144001f */ 	sb	$a0,0x1f($t2)
.L0f1388e8:
/*  f1388e8:	8e230000 */ 	lw	$v1,0x0($s1)
.L0f1388ec:
/*  f1388ec:	906c41fc */ 	lbu	$t4,0x41fc($v1)
/*  f1388f0:	00706821 */ 	addu	$t5,$v1,$s0
/*  f1388f4:	0c004b70 */ 	jal	random
/*  f1388f8:	a1ac001c */ 	sb	$t4,0x1c($t5)
/*  f1388fc:	304e0001 */ 	andi	$t6,$v0,0x1
/*  f138900:	564e0007 */ 	bnel	$s2,$t6,.L0f138920
/*  f138904:	8e230000 */ 	lw	$v1,0x0($s1)
/*  f138908:	8e230000 */ 	lw	$v1,0x0($s1)
/*  f13890c:	906f41fd */ 	lbu	$t7,0x41fd($v1)
/*  f138910:	0070c021 */ 	addu	$t8,$v1,$s0
/*  f138914:	10000005 */ 	b	.L0f13892c
/*  f138918:	a30f001d */ 	sb	$t7,0x1d($t8)
/*  f13891c:	8e230000 */ 	lw	$v1,0x0($s1)
.L0f138920:
/*  f138920:	906841fe */ 	lbu	$t0,0x41fe($v1)
/*  f138924:	0070c821 */ 	addu	$t9,$v1,$s0
/*  f138928:	a328001d */ 	sb	$t0,0x1d($t9)
.L0f13892c:
/*  f13892c:	0c004b70 */ 	jal	random
/*  f138930:	00000000 */ 	nop
/*  f138934:	44829000 */ 	mtc1	$v0,$f18
/*  f138938:	3c014f80 */ 	lui	$at,0x4f80
/*  f13893c:	04410004 */ 	bgez	$v0,.L0f138950
/*  f138940:	46809120 */ 	cvt.s.w	$f4,$f18
/*  f138944:	44814000 */ 	mtc1	$at,$f8
/*  f138948:	00000000 */ 	nop
/*  f13894c:	46082100 */ 	add.s	$f4,$f4,$f8
.L0f138950:
/*  f138950:	46162182 */ 	mul.s	$f6,$f4,$f22
/*  f138954:	8e290000 */ 	lw	$t1,0x0($s1)
/*  f138958:	01305821 */ 	addu	$t3,$t1,$s0
/*  f13895c:	26100018 */ 	addiu	$s0,$s0,0x18
/*  f138960:	461c3282 */ 	mul.s	$f10,$f6,$f28
/*  f138964:	1613ff92 */ 	bne	$s0,$s3,.L0f1387b0
/*  f138968:	e56a0014 */ 	swc1	$f10,0x14($t3)
/*  f13896c:	8fbf004c */ 	lw	$ra,0x4c($sp)
/*  f138970:	d7b40010 */ 	ldc1	$f20,0x10($sp)
/*  f138974:	d7b60018 */ 	ldc1	$f22,0x18($sp)
/*  f138978:	d7b80020 */ 	ldc1	$f24,0x20($sp)
/*  f13897c:	d7ba0028 */ 	ldc1	$f26,0x28($sp)
/*  f138980:	d7bc0030 */ 	ldc1	$f28,0x30($sp)
/*  f138984:	8fb0003c */ 	lw	$s0,0x3c($sp)
/*  f138988:	8fb10040 */ 	lw	$s1,0x40($sp)
/*  f13898c:	8fb20044 */ 	lw	$s2,0x44($sp)
/*  f138990:	8fb30048 */ 	lw	$s3,0x48($sp)
/*  f138994:	03e00008 */ 	jr	$ra
/*  f138998:	27bd0050 */ 	addiu	$sp,$sp,0x50
);

GLOBAL_ASM(
glabel func0f13899c
.late_rodata
glabel var7f1b5810
.word 0x3be56042
glabel var7f1b5814
.word 0x3b03126f
glabel var7f1b5818
.word 0x3be56042
glabel var7f1b581c
.word 0x453b8000
glabel var7f1b5820
.word 0x3c23d70a
glabel var7f1b5824
.word 0x40c907a9
.text
/*  f13899c:	27bdffb8 */ 	addiu	$sp,$sp,-72
/*  f1389a0:	afb1003c */ 	sw	$s1,0x3c($sp)
/*  f1389a4:	3c11800a */ 	lui	$s1,%hi(var800a4170)
/*  f1389a8:	26314170 */ 	addiu	$s1,$s1,%lo(var800a4170)
/*  f1389ac:	8e230000 */ 	lw	$v1,0x0($s1)
/*  f1389b0:	afbf0044 */ 	sw	$ra,0x44($sp)
/*  f1389b4:	afb20040 */ 	sw	$s2,0x40($sp)
/*  f1389b8:	afb00038 */ 	sw	$s0,0x38($sp)
/*  f1389bc:	f7ba0030 */ 	sdc1	$f26,0x30($sp)
/*  f1389c0:	f7b80028 */ 	sdc1	$f24,0x28($sp)
/*  f1389c4:	f7b60020 */ 	sdc1	$f22,0x20($sp)
/*  f1389c8:	f7b40018 */ 	sdc1	$f20,0x18($sp)
/*  f1389cc:	806e41f5 */ 	lb	$t6,0x41f5($v1)
/*  f1389d0:	05c00019 */ 	bltz	$t6,.L0f138a38
/*  f1389d4:	3c01800a */ 	lui	$at,%hi(g_Vars+0x48)
/*  f1389d8:	c424a008 */ 	lwc1	$f4,%lo(g_Vars+0x48)($at)
/*  f1389dc:	3c014434 */ 	lui	$at,0x4434
/*  f1389e0:	44813000 */ 	mtc1	$at,$f6
/*  f1389e4:	c46a41f8 */ 	lwc1	$f10,0x41f8($v1)
/*  f1389e8:	3c013f80 */ 	lui	$at,0x3f80
/*  f1389ec:	46062203 */ 	div.s	$f8,$f4,$f6
/*  f1389f0:	44819000 */ 	mtc1	$at,$f18
/*  f1389f4:	3c012f80 */ 	lui	$at,0x2f80
/*  f1389f8:	4481d000 */ 	mtc1	$at,$f26
/*  f1389fc:	46085400 */ 	add.s	$f16,$f10,$f8
/*  f138a00:	e47041f8 */ 	swc1	$f16,0x41f8($v1)
/*  f138a04:	8e230000 */ 	lw	$v1,0x0($s1)
/*  f138a08:	c46441f8 */ 	lwc1	$f4,0x41f8($v1)
/*  f138a0c:	4604903c */ 	c.lt.s	$f18,$f4
/*  f138a10:	00000000 */ 	nop
/*  f138a14:	45000006 */ 	bc1f	.L0f138a30
/*  f138a18:	00000000 */ 	nop
/*  f138a1c:	806f41f5 */ 	lb	$t7,0x41f5($v1)
/*  f138a20:	2418ffff */ 	addiu	$t8,$zero,-1
/*  f138a24:	a06f41f6 */ 	sb	$t7,0x41f6($v1)
/*  f138a28:	8e390000 */ 	lw	$t9,0x0($s1)
/*  f138a2c:	a33841f5 */ 	sb	$t8,0x41f5($t9)
.L0f138a30:
/*  f138a30:	10000020 */ 	b	.L0f138ab4
/*  f138a34:	00000000 */ 	nop
.L0f138a38:
/*  f138a38:	0c004b70 */ 	jal	random
/*  f138a3c:	00000000 */ 	nop
/*  f138a40:	44823000 */ 	mtc1	$v0,$f6
/*  f138a44:	3c012f80 */ 	lui	$at,0x2f80
/*  f138a48:	4481d000 */ 	mtc1	$at,$f26
/*  f138a4c:	04410005 */ 	bgez	$v0,.L0f138a64
/*  f138a50:	468032a0 */ 	cvt.s.w	$f10,$f6
/*  f138a54:	3c014f80 */ 	lui	$at,0x4f80
/*  f138a58:	44814000 */ 	mtc1	$at,$f8
/*  f138a5c:	00000000 */ 	nop
/*  f138a60:	46085280 */ 	add.s	$f10,$f10,$f8
.L0f138a64:
/*  f138a64:	461a5402 */ 	mul.s	$f16,$f10,$f26
/*  f138a68:	3c017f1b */ 	lui	$at,%hi(var7f1b5810)
/*  f138a6c:	c4325810 */ 	lwc1	$f18,%lo(var7f1b5810)($at)
/*  f138a70:	00002025 */ 	or	$a0,$zero,$zero
/*  f138a74:	4612803c */ 	c.lt.s	$f16,$f18
/*  f138a78:	00000000 */ 	nop
/*  f138a7c:	4500000d */ 	bc1f	.L0f138ab4
/*  f138a80:	00000000 */ 	nop
/*  f138a84:	0c0053d8 */ 	jal	func00014f60
/*  f138a88:	24050030 */ 	addiu	$a1,$zero,0x30
/*  f138a8c:	14400009 */ 	bnez	$v0,.L0f138ab4
/*  f138a90:	00000000 */ 	nop
/*  f138a94:	0c004b70 */ 	jal	random
/*  f138a98:	00000000 */ 	nop
/*  f138a9c:	8e290000 */ 	lw	$t1,0x0($s1)
/*  f138aa0:	30480003 */ 	andi	$t0,$v0,0x3
/*  f138aa4:	44802000 */ 	mtc1	$zero,$f4
/*  f138aa8:	a12841f5 */ 	sb	$t0,0x41f5($t1)
/*  f138aac:	8e2a0000 */ 	lw	$t2,0x0($s1)
/*  f138ab0:	e54441f8 */ 	swc1	$f4,0x41f8($t2)
.L0f138ab4:
/*  f138ab4:	0c004b70 */ 	jal	random
/*  f138ab8:	00000000 */ 	nop
/*  f138abc:	44823000 */ 	mtc1	$v0,$f6
/*  f138ac0:	3c014f80 */ 	lui	$at,0x4f80
/*  f138ac4:	04410004 */ 	bgez	$v0,.L0f138ad8
/*  f138ac8:	46803220 */ 	cvt.s.w	$f8,$f6
/*  f138acc:	44815000 */ 	mtc1	$at,$f10
/*  f138ad0:	00000000 */ 	nop
/*  f138ad4:	460a4200 */ 	add.s	$f8,$f8,$f10
.L0f138ad8:
/*  f138ad8:	461a4402 */ 	mul.s	$f16,$f8,$f26
/*  f138adc:	3c017f1b */ 	lui	$at,%hi(var7f1b5814)
/*  f138ae0:	c4325814 */ 	lwc1	$f18,%lo(var7f1b5814)($at)
/*  f138ae4:	00002025 */ 	or	$a0,$zero,$zero
/*  f138ae8:	4612803c */ 	c.lt.s	$f16,$f18
/*  f138aec:	00000000 */ 	nop
/*  f138af0:	4502000e */ 	bc1fl	.L0f138b2c
/*  f138af4:	00002025 */ 	or	$a0,$zero,$zero
/*  f138af8:	0c0053d8 */ 	jal	func00014f60
/*  f138afc:	24050030 */ 	addiu	$a1,$zero,0x30
/*  f138b00:	5440000a */ 	bnezl	$v0,.L0f138b2c
/*  f138b04:	00002025 */ 	or	$a0,$zero,$zero
/*  f138b08:	0c004b70 */ 	jal	random
/*  f138b0c:	00000000 */ 	nop
/*  f138b10:	24010005 */ 	addiu	$at,$zero,0x5
/*  f138b14:	0041001b */ 	divu	$zero,$v0,$at
/*  f138b18:	8e2c0000 */ 	lw	$t4,0x0($s1)
/*  f138b1c:	00005810 */ 	mfhi	$t3
/*  f138b20:	a18b41fc */ 	sb	$t3,0x41fc($t4)
/*  f138b24:	00000000 */ 	nop
/*  f138b28:	00002025 */ 	or	$a0,$zero,$zero
.L0f138b2c:
/*  f138b2c:	0c005408 */ 	jal	func00015020
/*  f138b30:	24050010 */ 	addiu	$a1,$zero,0x10
/*  f138b34:	10400014 */ 	beqz	$v0,.L0f138b88
/*  f138b38:	00000000 */ 	nop
/*  f138b3c:	0c004b70 */ 	jal	random
/*  f138b40:	00000000 */ 	nop
/*  f138b44:	24010005 */ 	addiu	$at,$zero,0x5
/*  f138b48:	0041001b */ 	divu	$zero,$v0,$at
/*  f138b4c:	8e2e0000 */ 	lw	$t6,0x0($s1)
/*  f138b50:	00006810 */ 	mfhi	$t5
/*  f138b54:	a1cd41fc */ 	sb	$t5,0x41fc($t6)
/*  f138b58:	8e2f0000 */ 	lw	$t7,0x0($s1)
/*  f138b5c:	81f841f5 */ 	lb	$t8,0x41f5($t7)
/*  f138b60:	07010009 */ 	bgez	$t8,.L0f138b88
/*  f138b64:	00000000 */ 	nop
/*  f138b68:	0c004b70 */ 	jal	random
/*  f138b6c:	00000000 */ 	nop
/*  f138b70:	8e280000 */ 	lw	$t0,0x0($s1)
/*  f138b74:	30590003 */ 	andi	$t9,$v0,0x3
/*  f138b78:	44802000 */ 	mtc1	$zero,$f4
/*  f138b7c:	a11941f5 */ 	sb	$t9,0x41f5($t0)
/*  f138b80:	8e290000 */ 	lw	$t1,0x0($s1)
/*  f138b84:	e52441f8 */ 	swc1	$f4,0x41f8($t1)
.L0f138b88:
/*  f138b88:	0c004b70 */ 	jal	random
/*  f138b8c:	00000000 */ 	nop
/*  f138b90:	44823000 */ 	mtc1	$v0,$f6
/*  f138b94:	3c014f80 */ 	lui	$at,0x4f80
/*  f138b98:	04410004 */ 	bgez	$v0,.L0f138bac
/*  f138b9c:	468032a0 */ 	cvt.s.w	$f10,$f6
/*  f138ba0:	44814000 */ 	mtc1	$at,$f8
/*  f138ba4:	00000000 */ 	nop
/*  f138ba8:	46085280 */ 	add.s	$f10,$f10,$f8
.L0f138bac:
/*  f138bac:	461a5402 */ 	mul.s	$f16,$f10,$f26
/*  f138bb0:	3c017f1b */ 	lui	$at,%hi(var7f1b5818)
/*  f138bb4:	c4325818 */ 	lwc1	$f18,%lo(var7f1b5818)($at)
/*  f138bb8:	4612803c */ 	c.lt.s	$f16,$f18
/*  f138bbc:	00000000 */ 	nop
/*  f138bc0:	4502000b */ 	bc1fl	.L0f138bf0
/*  f138bc4:	3c0141f0 */ 	lui	$at,0x41f0
/*  f138bc8:	0c004b70 */ 	jal	random
/*  f138bcc:	00000000 */ 	nop
/*  f138bd0:	8e2b0000 */ 	lw	$t3,0x0($s1)
/*  f138bd4:	304a0001 */ 	andi	$t2,$v0,0x1
/*  f138bd8:	0c004b70 */ 	jal	random
/*  f138bdc:	a16a41fd */ 	sb	$t2,0x41fd($t3)
/*  f138be0:	8e2d0000 */ 	lw	$t5,0x0($s1)
/*  f138be4:	304c0001 */ 	andi	$t4,$v0,0x1
/*  f138be8:	a1ac41fe */ 	sb	$t4,0x41fe($t5)
/*  f138bec:	3c0141f0 */ 	lui	$at,0x41f0
.L0f138bf0:
/*  f138bf0:	4481c000 */ 	mtc1	$at,$f24
/*  f138bf4:	3c017f1b */ 	lui	$at,%hi(var7f1b581c)
/*  f138bf8:	c436581c */ 	lwc1	$f22,%lo(var7f1b581c)($at)
/*  f138bfc:	00009025 */ 	or	$s2,$zero,$zero
/*  f138c00:	00008025 */ 	or	$s0,$zero,$zero
.L0f138c04:
/*  f138c04:	324e0007 */ 	andi	$t6,$s2,0x7
/*  f138c08:	25cf0001 */ 	addiu	$t7,$t6,0x1
/*  f138c0c:	448f2000 */ 	mtc1	$t7,$f4
/*  f138c10:	3c017f1b */ 	lui	$at,%hi(var7f1b5820)
/*  f138c14:	c4285820 */ 	lwc1	$f8,%lo(var7f1b5820)($at)
/*  f138c18:	468021a0 */ 	cvt.s.w	$f6,$f4
/*  f138c1c:	8e380000 */ 	lw	$t8,0x0($s1)
/*  f138c20:	32590008 */ 	andi	$t9,$s2,0x8
/*  f138c24:	03101021 */ 	addu	$v0,$t8,$s0
/*  f138c28:	46083082 */ 	mul.s	$f2,$f6,$f8
/*  f138c2c:	17200002 */ 	bnez	$t9,.L0f138c38
/*  f138c30:	46001006 */ 	mov.s	$f0,$f2
/*  f138c34:	46001007 */ 	neg.s	$f0,$f2
.L0f138c38:
/*  f138c38:	c44a0018 */ 	lwc1	$f10,0x18($v0)
/*  f138c3c:	3c01800a */ 	lui	$at,%hi(g_Vars+0x48)
/*  f138c40:	46005400 */ 	add.s	$f16,$f10,$f0
/*  f138c44:	e4500018 */ 	swc1	$f16,0x18($v0)
/*  f138c48:	c432a008 */ 	lwc1	$f18,%lo(g_Vars+0x48)($at)
/*  f138c4c:	3c013e80 */ 	lui	$at,0x3e80
/*  f138c50:	44813000 */ 	mtc1	$at,$f6
/*  f138c54:	46189102 */ 	mul.s	$f4,$f18,$f24
/*  f138c58:	8e280000 */ 	lw	$t0,0x0($s1)
/*  f138c5c:	44808000 */ 	mtc1	$zero,$f16
/*  f138c60:	01101021 */ 	addu	$v0,$t0,$s0
/*  f138c64:	c4480014 */ 	lwc1	$f8,0x14($v0)
/*  f138c68:	46062002 */ 	mul.s	$f0,$f4,$f6
/*  f138c6c:	46004280 */ 	add.s	$f10,$f8,$f0
/*  f138c70:	e44a0014 */ 	swc1	$f10,0x14($v0)
/*  f138c74:	8e290000 */ 	lw	$t1,0x0($s1)
/*  f138c78:	01305021 */ 	addu	$t2,$t1,$s0
/*  f138c7c:	c5520014 */ 	lwc1	$f18,0x14($t2)
/*  f138c80:	4612803c */ 	c.lt.s	$f16,$f18
/*  f138c84:	00000000 */ 	nop
/*  f138c88:	4502006b */ 	bc1fl	.L0f138e38
/*  f138c8c:	26520001 */ 	addiu	$s2,$s2,0x1
/*  f138c90:	0c004b70 */ 	jal	random
/*  f138c94:	00000000 */ 	nop
/*  f138c98:	44822000 */ 	mtc1	$v0,$f4
/*  f138c9c:	3c014f80 */ 	lui	$at,0x4f80
/*  f138ca0:	04410004 */ 	bgez	$v0,.L0f138cb4
/*  f138ca4:	468021a0 */ 	cvt.s.w	$f6,$f4
/*  f138ca8:	44814000 */ 	mtc1	$at,$f8
/*  f138cac:	00000000 */ 	nop
/*  f138cb0:	46083180 */ 	add.s	$f6,$f6,$f8
.L0f138cb4:
/*  f138cb4:	461a3502 */ 	mul.s	$f20,$f6,$f26
/*  f138cb8:	8e2b0000 */ 	lw	$t3,0x0($s1)
/*  f138cbc:	01706021 */ 	addu	$t4,$t3,$s0
/*  f138cc0:	4614a280 */ 	add.s	$f10,$f20,$f20
/*  f138cc4:	46165402 */ 	mul.s	$f16,$f10,$f22
/*  f138cc8:	46168481 */ 	sub.s	$f18,$f16,$f22
/*  f138ccc:	0c004b70 */ 	jal	random
/*  f138cd0:	e592000c */ 	swc1	$f18,0xc($t4)
/*  f138cd4:	44822000 */ 	mtc1	$v0,$f4
/*  f138cd8:	3c014f80 */ 	lui	$at,0x4f80
/*  f138cdc:	04410004 */ 	bgez	$v0,.L0f138cf0
/*  f138ce0:	46802220 */ 	cvt.s.w	$f8,$f4
/*  f138ce4:	44813000 */ 	mtc1	$at,$f6
/*  f138ce8:	00000000 */ 	nop
/*  f138cec:	46064200 */ 	add.s	$f8,$f8,$f6
.L0f138cf0:
/*  f138cf0:	461a4502 */ 	mul.s	$f20,$f8,$f26
/*  f138cf4:	8e2d0000 */ 	lw	$t5,0x0($s1)
/*  f138cf8:	01b07021 */ 	addu	$t6,$t5,$s0
/*  f138cfc:	4614a280 */ 	add.s	$f10,$f20,$f20
/*  f138d00:	46165402 */ 	mul.s	$f16,$f10,$f22
/*  f138d04:	46168481 */ 	sub.s	$f18,$f16,$f22
/*  f138d08:	0c004b70 */ 	jal	random
/*  f138d0c:	e5d20010 */ 	swc1	$f18,0x10($t6)
/*  f138d10:	8e380000 */ 	lw	$t8,0x0($s1)
/*  f138d14:	304f0003 */ 	andi	$t7,$v0,0x3
/*  f138d18:	0310c821 */ 	addu	$t9,$t8,$s0
/*  f138d1c:	0c004b70 */ 	jal	random
/*  f138d20:	a32f001e */ 	sb	$t7,0x1e($t9)
/*  f138d24:	8e290000 */ 	lw	$t1,0x0($s1)
/*  f138d28:	30480003 */ 	andi	$t0,$v0,0x3
/*  f138d2c:	01305021 */ 	addu	$t2,$t1,$s0
/*  f138d30:	0c004b70 */ 	jal	random
/*  f138d34:	a1480020 */ 	sb	$t0,0x20($t2)
/*  f138d38:	44822000 */ 	mtc1	$v0,$f4
/*  f138d3c:	3c014f80 */ 	lui	$at,0x4f80
/*  f138d40:	04410004 */ 	bgez	$v0,.L0f138d54
/*  f138d44:	468021a0 */ 	cvt.s.w	$f6,$f4
/*  f138d48:	44814000 */ 	mtc1	$at,$f8
/*  f138d4c:	00000000 */ 	nop
/*  f138d50:	46083180 */ 	add.s	$f6,$f6,$f8
.L0f138d54:
/*  f138d54:	461a3282 */ 	mul.s	$f10,$f6,$f26
/*  f138d58:	3c017f1b */ 	lui	$at,%hi(var7f1b5824)
/*  f138d5c:	c4305824 */ 	lwc1	$f16,%lo(var7f1b5824)($at)
/*  f138d60:	8e2b0000 */ 	lw	$t3,0x0($s1)
/*  f138d64:	01706021 */ 	addu	$t4,$t3,$s0
/*  f138d68:	46105482 */ 	mul.s	$f18,$f10,$f16
/*  f138d6c:	e5920018 */ 	swc1	$f18,0x18($t4)
/*  f138d70:	8e230000 */ 	lw	$v1,0x0($s1)
/*  f138d74:	90644200 */ 	lbu	$a0,0x4200($v1)
/*  f138d78:	906d41ff */ 	lbu	$t5,0x41ff($v1)
/*  f138d7c:	00704021 */ 	addu	$t0,$v1,$s0
/*  f138d80:	008d082a */ 	slt	$at,$a0,$t5
/*  f138d84:	50200012 */ 	beqzl	$at,.L0f138dd0
/*  f138d88:	a104001f */ 	sb	$a0,0x1f($t0)
/*  f138d8c:	0c004b70 */ 	jal	random
/*  f138d90:	00000000 */ 	nop
/*  f138d94:	8e230000 */ 	lw	$v1,0x0($s1)
/*  f138d98:	90644200 */ 	lbu	$a0,0x4200($v1)
/*  f138d9c:	906e41ff */ 	lbu	$t6,0x41ff($v1)
/*  f138da0:	00704821 */ 	addu	$t1,$v1,$s0
/*  f138da4:	01c4c023 */ 	subu	$t8,$t6,$a0
/*  f138da8:	0058001b */ 	divu	$zero,$v0,$t8
/*  f138dac:	00007810 */ 	mfhi	$t7
/*  f138db0:	01e4c821 */ 	addu	$t9,$t7,$a0
/*  f138db4:	17000002 */ 	bnez	$t8,.L0f138dc0
/*  f138db8:	00000000 */ 	nop
/*  f138dbc:	0007000d */ 	break	0x7
.L0f138dc0:
/*  f138dc0:	a139001f */ 	sb	$t9,0x1f($t1)
/*  f138dc4:	10000003 */ 	b	.L0f138dd4
/*  f138dc8:	8e230000 */ 	lw	$v1,0x0($s1)
/*  f138dcc:	a104001f */ 	sb	$a0,0x1f($t0)
.L0f138dd0:
/*  f138dd0:	8e230000 */ 	lw	$v1,0x0($s1)
.L0f138dd4:
/*  f138dd4:	906a41fc */ 	lbu	$t2,0x41fc($v1)
/*  f138dd8:	00705821 */ 	addu	$t3,$v1,$s0
/*  f138ddc:	0c004b70 */ 	jal	random
/*  f138de0:	a16a001c */ 	sb	$t2,0x1c($t3)
/*  f138de4:	304c0001 */ 	andi	$t4,$v0,0x1
/*  f138de8:	24010001 */ 	addiu	$at,$zero,0x1
/*  f138dec:	55810007 */ 	bnel	$t4,$at,.L0f138e0c
/*  f138df0:	8e230000 */ 	lw	$v1,0x0($s1)
/*  f138df4:	8e230000 */ 	lw	$v1,0x0($s1)
/*  f138df8:	906d41fd */ 	lbu	$t5,0x41fd($v1)
/*  f138dfc:	00707021 */ 	addu	$t6,$v1,$s0
/*  f138e00:	10000005 */ 	b	.L0f138e18
/*  f138e04:	a1cd001d */ 	sb	$t5,0x1d($t6)
/*  f138e08:	8e230000 */ 	lw	$v1,0x0($s1)
.L0f138e0c:
/*  f138e0c:	907841fe */ 	lbu	$t8,0x41fe($v1)
/*  f138e10:	00707821 */ 	addu	$t7,$v1,$s0
/*  f138e14:	a1f8001d */ 	sb	$t8,0x1d($t7)
.L0f138e18:
/*  f138e18:	8e390000 */ 	lw	$t9,0x0($s1)
/*  f138e1c:	3c01c5fa */ 	lui	$at,0xc5fa
/*  f138e20:	44814000 */ 	mtc1	$at,$f8
/*  f138e24:	03301021 */ 	addu	$v0,$t9,$s0
/*  f138e28:	c4440014 */ 	lwc1	$f4,0x14($v0)
/*  f138e2c:	46082180 */ 	add.s	$f6,$f4,$f8
/*  f138e30:	e4460014 */ 	swc1	$f6,0x14($v0)
/*  f138e34:	26520001 */ 	addiu	$s2,$s2,0x1
.L0f138e38:
/*  f138e38:	240101f4 */ 	addiu	$at,$zero,0x1f4
/*  f138e3c:	1641ff71 */ 	bne	$s2,$at,.L0f138c04
/*  f138e40:	26100018 */ 	addiu	$s0,$s0,0x18
/*  f138e44:	8fbf0044 */ 	lw	$ra,0x44($sp)
/*  f138e48:	d7b40018 */ 	ldc1	$f20,0x18($sp)
/*  f138e4c:	d7b60020 */ 	ldc1	$f22,0x20($sp)
/*  f138e50:	d7b80028 */ 	ldc1	$f24,0x28($sp)
/*  f138e54:	d7ba0030 */ 	ldc1	$f26,0x30($sp)
/*  f138e58:	8fb00038 */ 	lw	$s0,0x38($sp)
/*  f138e5c:	8fb1003c */ 	lw	$s1,0x3c($sp)
/*  f138e60:	8fb20040 */ 	lw	$s2,0x40($sp)
/*  f138e64:	03e00008 */ 	jr	$ra
/*  f138e68:	27bd0048 */ 	addiu	$sp,$sp,0x48
);

GLOBAL_ASM(
glabel func0f138e6c
.late_rodata
glabel var7f1b5828
.word func0f138e6c+0x3f4 # f139260
glabel var7f1b582c
.word func0f138e6c+0x60 # f138ecc
glabel var7f1b5830
.word func0f138e6c+0x158 # f138fc4
glabel var7f1b5834
.word func0f138e6c+0x1f4 # f139060
glabel var7f1b5838
.word func0f138e6c+0x2f0 # f13915c
glabel var7f1b583c
.word 0x40c907a9
glabel var7f1b5840
.word 0x40c907a9
glabel var7f1b5844
.word 0x40c907a9
.text
/*  f138e6c:	27bdffb0 */ 	addiu	$sp,$sp,-80
/*  f138e70:	afbf0024 */ 	sw	$ra,0x24($sp)
/*  f138e74:	afb10020 */ 	sw	$s1,0x20($sp)
/*  f138e78:	afb0001c */ 	sw	$s0,0x1c($sp)
/*  f138e7c:	f7b40010 */ 	sdc1	$f20,0x10($sp)
/*  f138e80:	afa60058 */ 	sw	$a2,0x58($sp)
/*  f138e84:	90a20010 */ 	lbu	$v0,0x10($a1)
/*  f138e88:	00a08025 */ 	or	$s0,$a1,$zero
/*  f138e8c:	00808825 */ 	or	$s1,$a0,$zero
/*  f138e90:	28410005 */ 	slti	$at,$v0,0x5
/*  f138e94:	14200005 */ 	bnez	$at,.L0f138eac
/*  f138e98:	24010063 */ 	addiu	$at,$zero,0x63
/*  f138e9c:	504100e6 */ 	beql	$v0,$at,.L0f139238
/*  f138ea0:	3c01c57a */ 	lui	$at,0xc57a
/*  f138ea4:	100000ef */ 	b	.L0f139264
/*  f138ea8:	c6080000 */ 	lwc1	$f8,0x0($s0)
.L0f138eac:
/*  f138eac:	2c410005 */ 	sltiu	$at,$v0,0x5
/*  f138eb0:	102000eb */ 	beqz	$at,.L0f139260
/*  f138eb4:	00027080 */ 	sll	$t6,$v0,0x2
/*  f138eb8:	3c017f1b */ 	lui	$at,%hi(var7f1b5828)
/*  f138ebc:	002e0821 */ 	addu	$at,$at,$t6
/*  f138ec0:	8c2e5828 */ 	lw	$t6,%lo(var7f1b5828)($at)
/*  f138ec4:	01c00008 */ 	jr	$t6
/*  f138ec8:	00000000 */ 	nop
/*  f138ecc:	3c017f1b */ 	lui	$at,%hi(var7f1b583c)
/*  f138ed0:	c430583c */ 	lwc1	$f16,%lo(var7f1b583c)($at)
/*  f138ed4:	3c01800a */ 	lui	$at,%hi(var800a4160)
/*  f138ed8:	c4244160 */ 	lwc1	$f4,%lo(var800a4160)($at)
/*  f138edc:	3c014396 */ 	lui	$at,0x4396
/*  f138ee0:	44814000 */ 	mtc1	$at,$f8
/*  f138ee4:	46102182 */ 	mul.s	$f6,$f4,$f16
/*  f138ee8:	e7a60044 */ 	swc1	$f6,0x44($sp)
/*  f138eec:	c6000000 */ 	lwc1	$f0,0x0($s0)
/*  f138ef0:	e7a0004c */ 	swc1	$f0,0x4c($sp)
/*  f138ef4:	0c0068f7 */ 	jal	sinf
/*  f138ef8:	46080303 */ 	div.s	$f12,$f0,$f8
/*  f138efc:	3c014396 */ 	lui	$at,0x4396
/*  f138f00:	44812000 */ 	mtc1	$at,$f4
/*  f138f04:	c60a0008 */ 	lwc1	$f10,0x8($s0)
/*  f138f08:	46000506 */ 	mov.s	$f20,$f0
/*  f138f0c:	0c0068f4 */ 	jal	cosf
/*  f138f10:	46045303 */ 	div.s	$f12,$f10,$f4
/*  f138f14:	46140180 */ 	add.s	$f6,$f0,$f20
/*  f138f18:	3c0142c8 */ 	lui	$at,0x42c8
/*  f138f1c:	44814000 */ 	mtc1	$at,$f8
/*  f138f20:	3c01c3c8 */ 	lui	$at,0xc3c8
/*  f138f24:	44812000 */ 	mtc1	$at,$f4
/*  f138f28:	46083282 */ 	mul.s	$f10,$f6,$f8
/*  f138f2c:	8faf0058 */ 	lw	$t7,0x58($sp)
/*  f138f30:	24010001 */ 	addiu	$at,$zero,0x1
/*  f138f34:	31f80001 */ 	andi	$t8,$t7,0x1
/*  f138f38:	46045080 */ 	add.s	$f2,$f10,$f4
/*  f138f3c:	17010005 */ 	bne	$t8,$at,.L0f138f54
/*  f138f40:	46001386 */ 	mov.s	$f14,$f2
/*  f138f44:	3c014448 */ 	lui	$at,0x4448
/*  f138f48:	44813000 */ 	mtc1	$at,$f6
/*  f138f4c:	00000000 */ 	nop
/*  f138f50:	46061380 */ 	add.s	$f14,$f2,$f6
.L0f138f54:
/*  f138f54:	c6080008 */ 	lwc1	$f8,0x8($s0)
/*  f138f58:	e6280008 */ 	swc1	$f8,0x8($s1)
/*  f138f5c:	e7ae0048 */ 	swc1	$f14,0x48($sp)
/*  f138f60:	0c0068f7 */ 	jal	sinf
/*  f138f64:	c7ac0044 */ 	lwc1	$f12,0x44($sp)
/*  f138f68:	46000506 */ 	mov.s	$f20,$f0
/*  f138f6c:	0c0068f4 */ 	jal	cosf
/*  f138f70:	c7ac0044 */ 	lwc1	$f12,0x44($sp)
/*  f138f74:	c7aa0048 */ 	lwc1	$f10,0x48($sp)
/*  f138f78:	c7a6004c */ 	lwc1	$f6,0x4c($sp)
/*  f138f7c:	460a0102 */ 	mul.s	$f4,$f0,$f10
/*  f138f80:	00000000 */ 	nop
/*  f138f84:	4606a202 */ 	mul.s	$f8,$f20,$f6
/*  f138f88:	46082280 */ 	add.s	$f10,$f4,$f8
/*  f138f8c:	e62a0000 */ 	swc1	$f10,0x0($s1)
/*  f138f90:	0c0068f4 */ 	jal	cosf
/*  f138f94:	c7ac0044 */ 	lwc1	$f12,0x44($sp)
/*  f138f98:	46000506 */ 	mov.s	$f20,$f0
/*  f138f9c:	0c0068f7 */ 	jal	sinf
/*  f138fa0:	c7ac0044 */ 	lwc1	$f12,0x44($sp)
/*  f138fa4:	c7a6004c */ 	lwc1	$f6,0x4c($sp)
/*  f138fa8:	c7a80048 */ 	lwc1	$f8,0x48($sp)
/*  f138fac:	4606a102 */ 	mul.s	$f4,$f20,$f6
/*  f138fb0:	00000000 */ 	nop
/*  f138fb4:	46080282 */ 	mul.s	$f10,$f0,$f8
/*  f138fb8:	460a2181 */ 	sub.s	$f6,$f4,$f10
/*  f138fbc:	100000ae */ 	b	.L0f139278
/*  f138fc0:	e6260004 */ 	swc1	$f6,0x4($s1)
/*  f138fc4:	3c014396 */ 	lui	$at,0x4396
/*  f138fc8:	44812000 */ 	mtc1	$at,$f4
/*  f138fcc:	c6080004 */ 	lwc1	$f8,0x4($s0)
/*  f138fd0:	0c0068f4 */ 	jal	cosf
/*  f138fd4:	46044303 */ 	div.s	$f12,$f8,$f4
/*  f138fd8:	3c014396 */ 	lui	$at,0x4396
/*  f138fdc:	44813000 */ 	mtc1	$at,$f6
/*  f138fe0:	c60a0008 */ 	lwc1	$f10,0x8($s0)
/*  f138fe4:	46000506 */ 	mov.s	$f20,$f0
/*  f138fe8:	0c0068f7 */ 	jal	sinf
/*  f138fec:	46065303 */ 	div.s	$f12,$f10,$f6
/*  f138ff0:	46140200 */ 	add.s	$f8,$f0,$f20
/*  f138ff4:	3c0142c8 */ 	lui	$at,0x42c8
/*  f138ff8:	44812000 */ 	mtc1	$at,$f4
/*  f138ffc:	c6060000 */ 	lwc1	$f6,0x0($s0)
/*  f139000:	3c014396 */ 	lui	$at,0x4396
/*  f139004:	46044282 */ 	mul.s	$f10,$f8,$f4
/*  f139008:	46065200 */ 	add.s	$f8,$f10,$f6
/*  f13900c:	44815000 */ 	mtc1	$at,$f10
/*  f139010:	e6280000 */ 	swc1	$f8,0x0($s1)
/*  f139014:	c6040000 */ 	lwc1	$f4,0x0($s0)
/*  f139018:	0c0068f7 */ 	jal	sinf
/*  f13901c:	460a2303 */ 	div.s	$f12,$f4,$f10
/*  f139020:	3c014396 */ 	lui	$at,0x4396
/*  f139024:	44814000 */ 	mtc1	$at,$f8
/*  f139028:	c6060008 */ 	lwc1	$f6,0x8($s0)
/*  f13902c:	46000506 */ 	mov.s	$f20,$f0
/*  f139030:	0c0068f4 */ 	jal	cosf
/*  f139034:	46083303 */ 	div.s	$f12,$f6,$f8
/*  f139038:	46140100 */ 	add.s	$f4,$f0,$f20
/*  f13903c:	3c0142c8 */ 	lui	$at,0x42c8
/*  f139040:	44815000 */ 	mtc1	$at,$f10
/*  f139044:	c6080004 */ 	lwc1	$f8,0x4($s0)
/*  f139048:	460a2182 */ 	mul.s	$f6,$f4,$f10
/*  f13904c:	46083100 */ 	add.s	$f4,$f6,$f8
/*  f139050:	e6240004 */ 	swc1	$f4,0x4($s1)
/*  f139054:	c60a0008 */ 	lwc1	$f10,0x8($s0)
/*  f139058:	10000087 */ 	b	.L0f139278
/*  f13905c:	e62a0008 */ 	swc1	$f10,0x8($s1)
/*  f139060:	3c017f1b */ 	lui	$at,%hi(var7f1b5840)
/*  f139064:	c4305840 */ 	lwc1	$f16,%lo(var7f1b5840)($at)
/*  f139068:	3c0140a0 */ 	lui	$at,0x40a0
/*  f13906c:	44819000 */ 	mtc1	$at,$f18
/*  f139070:	3c01c5fa */ 	lui	$at,0xc5fa
/*  f139074:	44815000 */ 	mtc1	$at,$f10
/*  f139078:	c6040008 */ 	lwc1	$f4,0x8($s0)
/*  f13907c:	c6060000 */ 	lwc1	$f6,0x0($s0)
/*  f139080:	4480a000 */ 	mtc1	$zero,$f20
/*  f139084:	460a2303 */ 	div.s	$f12,$f4,$f10
/*  f139088:	c6080004 */ 	lwc1	$f8,0x4($s0)
/*  f13908c:	3c0143d2 */ 	lui	$at,0x43d2
/*  f139090:	46123083 */ 	div.s	$f2,$f6,$f18
/*  f139094:	460c6182 */ 	mul.s	$f6,$f12,$f12
/*  f139098:	00000000 */ 	nop
/*  f13909c:	46103302 */ 	mul.s	$f12,$f6,$f16
/*  f1390a0:	4614103c */ 	c.lt.s	$f2,$f20
/*  f1390a4:	00000000 */ 	nop
/*  f1390a8:	45000005 */ 	bc1f	.L0f1390c0
/*  f1390ac:	46124383 */ 	div.s	$f14,$f8,$f18
/*  f1390b0:	3c0143d2 */ 	lui	$at,0x43d2
/*  f1390b4:	44810000 */ 	mtc1	$at,$f0
/*  f1390b8:	10000004 */ 	b	.L0f1390cc
/*  f1390bc:	46001081 */ 	sub.s	$f2,$f2,$f0
.L0f1390c0:
/*  f1390c0:	44810000 */ 	mtc1	$at,$f0
/*  f1390c4:	00000000 */ 	nop
/*  f1390c8:	46001080 */ 	add.s	$f2,$f2,$f0
.L0f1390cc:
/*  f1390cc:	4614703c */ 	c.lt.s	$f14,$f20
/*  f1390d0:	00000000 */ 	nop
/*  f1390d4:	45020004 */ 	bc1fl	.L0f1390e8
/*  f1390d8:	46007380 */ 	add.s	$f14,$f14,$f0
/*  f1390dc:	10000002 */ 	b	.L0f1390e8
/*  f1390e0:	46007381 */ 	sub.s	$f14,$f14,$f0
/*  f1390e4:	46007380 */ 	add.s	$f14,$f14,$f0
.L0f1390e8:
/*  f1390e8:	e7a20040 */ 	swc1	$f2,0x40($sp)
/*  f1390ec:	e7ac0038 */ 	swc1	$f12,0x38($sp)
/*  f1390f0:	0c0068f7 */ 	jal	sinf
/*  f1390f4:	e7ae003c */ 	swc1	$f14,0x3c($sp)
/*  f1390f8:	c7ac0038 */ 	lwc1	$f12,0x38($sp)
/*  f1390fc:	0c0068f4 */ 	jal	cosf
/*  f139100:	46000506 */ 	mov.s	$f20,$f0
/*  f139104:	c7ae003c */ 	lwc1	$f14,0x3c($sp)
/*  f139108:	c7a20040 */ 	lwc1	$f2,0x40($sp)
/*  f13910c:	c7ac0038 */ 	lwc1	$f12,0x38($sp)
/*  f139110:	460e0202 */ 	mul.s	$f8,$f0,$f14
/*  f139114:	00000000 */ 	nop
/*  f139118:	4602a102 */ 	mul.s	$f4,$f20,$f2
/*  f13911c:	46044280 */ 	add.s	$f10,$f8,$f4
/*  f139120:	0c0068f4 */ 	jal	cosf
/*  f139124:	e62a0000 */ 	swc1	$f10,0x0($s1)
/*  f139128:	c7ac0038 */ 	lwc1	$f12,0x38($sp)
/*  f13912c:	0c0068f7 */ 	jal	sinf
/*  f139130:	46000506 */ 	mov.s	$f20,$f0
/*  f139134:	c7a20040 */ 	lwc1	$f2,0x40($sp)
/*  f139138:	c7ae003c */ 	lwc1	$f14,0x3c($sp)
/*  f13913c:	4602a182 */ 	mul.s	$f6,$f20,$f2
/*  f139140:	00000000 */ 	nop
/*  f139144:	460e0202 */ 	mul.s	$f8,$f0,$f14
/*  f139148:	46083101 */ 	sub.s	$f4,$f6,$f8
/*  f13914c:	e6240004 */ 	swc1	$f4,0x4($s1)
/*  f139150:	c60a0008 */ 	lwc1	$f10,0x8($s0)
/*  f139154:	10000048 */ 	b	.L0f139278
/*  f139158:	e62a0008 */ 	swc1	$f10,0x8($s1)
/*  f13915c:	3c0143c8 */ 	lui	$at,0x43c8
/*  f139160:	44811000 */ 	mtc1	$at,$f2
/*  f139164:	3c0140a0 */ 	lui	$at,0x40a0
/*  f139168:	44819000 */ 	mtc1	$at,$f18
/*  f13916c:	c6060000 */ 	lwc1	$f6,0x0($s0)
/*  f139170:	8fb90058 */ 	lw	$t9,0x58($sp)
/*  f139174:	3c01c5fa */ 	lui	$at,0xc5fa
/*  f139178:	46123203 */ 	div.s	$f8,$f6,$f18
/*  f13917c:	44815000 */ 	mtc1	$at,$f10
/*  f139180:	24010001 */ 	addiu	$at,$zero,0x1
/*  f139184:	33280001 */ 	andi	$t0,$t9,0x1
/*  f139188:	46001006 */ 	mov.s	$f0,$f2
/*  f13918c:	e7a80034 */ 	swc1	$f8,0x34($sp)
/*  f139190:	c6040008 */ 	lwc1	$f4,0x8($s0)
/*  f139194:	15010002 */ 	bne	$t0,$at,.L0f1391a0
/*  f139198:	460a2303 */ 	div.s	$f12,$f4,$f10
/*  f13919c:	46001007 */ 	neg.s	$f0,$f2
.L0f1391a0:
/*  f1391a0:	460c6182 */ 	mul.s	$f6,$f12,$f12
/*  f1391a4:	3c017f1b */ 	lui	$at,%hi(var7f1b5844)
/*  f1391a8:	c4305844 */ 	lwc1	$f16,%lo(var7f1b5844)($at)
/*  f1391ac:	3c01800a */ 	lui	$at,%hi(var800a4160)
/*  f1391b0:	c4244160 */ 	lwc1	$f4,%lo(var800a4160)($at)
/*  f1391b4:	e7a00030 */ 	swc1	$f0,0x30($sp)
/*  f1391b8:	46103202 */ 	mul.s	$f8,$f6,$f16
/*  f1391bc:	00000000 */ 	nop
/*  f1391c0:	46102282 */ 	mul.s	$f10,$f4,$f16
/*  f1391c4:	460a4300 */ 	add.s	$f12,$f8,$f10
/*  f1391c8:	0c0068f7 */ 	jal	sinf
/*  f1391cc:	e7ac002c */ 	swc1	$f12,0x2c($sp)
/*  f1391d0:	c7ac002c */ 	lwc1	$f12,0x2c($sp)
/*  f1391d4:	0c0068f4 */ 	jal	cosf
/*  f1391d8:	46000506 */ 	mov.s	$f20,$f0
/*  f1391dc:	c7a60030 */ 	lwc1	$f6,0x30($sp)
/*  f1391e0:	c7a80034 */ 	lwc1	$f8,0x34($sp)
/*  f1391e4:	c7ac002c */ 	lwc1	$f12,0x2c($sp)
/*  f1391e8:	46060102 */ 	mul.s	$f4,$f0,$f6
/*  f1391ec:	00000000 */ 	nop
/*  f1391f0:	4608a282 */ 	mul.s	$f10,$f20,$f8
/*  f1391f4:	460a2180 */ 	add.s	$f6,$f4,$f10
/*  f1391f8:	0c0068f4 */ 	jal	cosf
/*  f1391fc:	e6260000 */ 	swc1	$f6,0x0($s1)
/*  f139200:	c7ac002c */ 	lwc1	$f12,0x2c($sp)
/*  f139204:	0c0068f7 */ 	jal	sinf
/*  f139208:	46000506 */ 	mov.s	$f20,$f0
/*  f13920c:	c7a80034 */ 	lwc1	$f8,0x34($sp)
/*  f139210:	c7aa0030 */ 	lwc1	$f10,0x30($sp)
/*  f139214:	4608a102 */ 	mul.s	$f4,$f20,$f8
/*  f139218:	00000000 */ 	nop
/*  f13921c:	460a0182 */ 	mul.s	$f6,$f0,$f10
/*  f139220:	46062201 */ 	sub.s	$f8,$f4,$f6
/*  f139224:	e6280004 */ 	swc1	$f8,0x4($s1)
/*  f139228:	c60a0008 */ 	lwc1	$f10,0x8($s0)
/*  f13922c:	10000012 */ 	b	.L0f139278
/*  f139230:	e62a0008 */ 	swc1	$f10,0x8($s1)
/*  f139234:	3c01c57a */ 	lui	$at,0xc57a
.L0f139238:
/*  f139238:	44813000 */ 	mtc1	$at,$f6
/*  f13923c:	c6040008 */ 	lwc1	$f4,0x8($s0)
/*  f139240:	46062201 */ 	sub.s	$f8,$f4,$f6
/*  f139244:	46004287 */ 	neg.s	$f10,$f8
/*  f139248:	e62a0004 */ 	swc1	$f10,0x4($s1)
/*  f13924c:	c6040000 */ 	lwc1	$f4,0x0($s0)
/*  f139250:	e6240000 */ 	swc1	$f4,0x0($s1)
/*  f139254:	c6060004 */ 	lwc1	$f6,0x4($s0)
/*  f139258:	10000007 */ 	b	.L0f139278
/*  f13925c:	e6260008 */ 	swc1	$f6,0x8($s1)
.L0f139260:
/*  f139260:	c6080000 */ 	lwc1	$f8,0x0($s0)
.L0f139264:
/*  f139264:	e6280000 */ 	swc1	$f8,0x0($s1)
/*  f139268:	c60a0004 */ 	lwc1	$f10,0x4($s0)
/*  f13926c:	e62a0004 */ 	swc1	$f10,0x4($s1)
/*  f139270:	c6040008 */ 	lwc1	$f4,0x8($s0)
/*  f139274:	e6240008 */ 	swc1	$f4,0x8($s1)
.L0f139278:
/*  f139278:	8fbf0024 */ 	lw	$ra,0x24($sp)
/*  f13927c:	d7b40010 */ 	ldc1	$f20,0x10($sp)
/*  f139280:	8fb0001c */ 	lw	$s0,0x1c($sp)
/*  f139284:	8fb10020 */ 	lw	$s1,0x20($sp)
/*  f139288:	03e00008 */ 	jr	$ra
/*  f13928c:	27bd0050 */ 	addiu	$sp,$sp,0x50
);

GLOBAL_ASM(
glabel func0f139290
.late_rodata
glabel var7f1b5848
.word 0xc58ca000
glabel var7f1b584c
.word 0x455ac000
glabel var7f1b5850
.word 0x416fd70a
.text
/*  f139290:	27bdfee8 */ 	addiu	$sp,$sp,-280
/*  f139294:	afa40118 */ 	sw	$a0,0x118($sp)
/*  f139298:	afbf007c */ 	sw	$ra,0x7c($sp)
/*  f13929c:	3c047f1b */ 	lui	$a0,%hi(var7f1b57c0)
/*  f1392a0:	3c058008 */ 	lui	$a1,%hi(var8007f468)
/*  f1392a4:	afbe0078 */ 	sw	$s8,0x78($sp)
/*  f1392a8:	afb70074 */ 	sw	$s7,0x74($sp)
/*  f1392ac:	afb60070 */ 	sw	$s6,0x70($sp)
/*  f1392b0:	afb5006c */ 	sw	$s5,0x6c($sp)
/*  f1392b4:	afb40068 */ 	sw	$s4,0x68($sp)
/*  f1392b8:	afb30064 */ 	sw	$s3,0x64($sp)
/*  f1392bc:	afb20060 */ 	sw	$s2,0x60($sp)
/*  f1392c0:	afb1005c */ 	sw	$s1,0x5c($sp)
/*  f1392c4:	afb00058 */ 	sw	$s0,0x58($sp)
/*  f1392c8:	f7be0050 */ 	sdc1	$f30,0x50($sp)
/*  f1392cc:	f7bc0048 */ 	sdc1	$f28,0x48($sp)
/*  f1392d0:	f7ba0040 */ 	sdc1	$f26,0x40($sp)
/*  f1392d4:	f7b80038 */ 	sdc1	$f24,0x38($sp)
/*  f1392d8:	f7b60030 */ 	sdc1	$f22,0x30($sp)
/*  f1392dc:	f7b40028 */ 	sdc1	$f20,0x28($sp)
/*  f1392e0:	24a5f468 */ 	addiu	$a1,$a1,%lo(var8007f468)
/*  f1392e4:	0c0036cc */ 	jal	func0000db30
/*  f1392e8:	248457c0 */ 	addiu	$a0,$a0,%lo(var7f1b57c0)
/*  f1392ec:	3c047f1b */ 	lui	$a0,%hi(var7f1b57c8)
/*  f1392f0:	3c058008 */ 	lui	$a1,%hi(var8007f46c)
/*  f1392f4:	24a5f46c */ 	addiu	$a1,$a1,%lo(var8007f46c)
/*  f1392f8:	0c0036cc */ 	jal	func0000db30
/*  f1392fc:	248457c8 */ 	addiu	$a0,$a0,%lo(var7f1b57c8)
/*  f139300:	0fc59e73 */ 	jal	func0f1679cc
/*  f139304:	2404003c */ 	addiu	$a0,$zero,0x3c
/*  f139308:	3c01437f */ 	lui	$at,0x437f
/*  f13930c:	3c13800a */ 	lui	$s3,%hi(var800a4170)
/*  f139310:	3c128008 */ 	lui	$s2,%hi(var8007f410)
/*  f139314:	4481a000 */ 	mtc1	$at,$f20
/*  f139318:	0040f025 */ 	or	$s8,$v0,$zero
/*  f13931c:	2652f410 */ 	addiu	$s2,$s2,%lo(var8007f410)
/*  f139320:	26734170 */ 	addiu	$s3,$s3,%lo(var800a4170)
/*  f139324:	0000a025 */ 	or	$s4,$zero,$zero
/*  f139328:	0040a825 */ 	or	$s5,$v0,$zero
/*  f13932c:	24170010 */ 	addiu	$s7,$zero,0x10
/*  f139330:	24160028 */ 	addiu	$s6,$zero,0x28
/*  f139334:	2411000f */ 	addiu	$s1,$zero,0xf
/*  f139338:	2410000f */ 	addiu	$s0,$zero,0xf
.L0f13933c:
/*  f13933c:	8e620000 */ 	lw	$v0,0x0($s3)
/*  f139340:	804341f5 */ 	lb	$v1,0x41f5($v0)
/*  f139344:	0460002f */ 	bltz	$v1,.L0f139404
/*  f139348:	00037900 */ 	sll	$t7,$v1,0x4
/*  f13934c:	c44441f8 */ 	lwc1	$f4,0x41f8($v0)
/*  f139350:	24060001 */ 	addiu	$a2,$zero,0x1
/*  f139354:	024fc021 */ 	addu	$t8,$s2,$t7
/*  f139358:	46142182 */ 	mul.s	$f6,$f4,$f20
/*  f13935c:	3c014f00 */ 	lui	$at,0x4f00
/*  f139360:	0314c821 */ 	addu	$t9,$t8,$s4
/*  f139364:	444ef800 */ 	cfc1	$t6,$31
/*  f139368:	44c6f800 */ 	ctc1	$a2,$31
/*  f13936c:	00000000 */ 	nop
/*  f139370:	46003224 */ 	cvt.w.s	$f8,$f6
/*  f139374:	4446f800 */ 	cfc1	$a2,$31
/*  f139378:	00000000 */ 	nop
/*  f13937c:	30c60078 */ 	andi	$a2,$a2,0x78
/*  f139380:	50c00013 */ 	beqzl	$a2,.L0f1393d0
/*  f139384:	44064000 */ 	mfc1	$a2,$f8
/*  f139388:	44814000 */ 	mtc1	$at,$f8
/*  f13938c:	24060001 */ 	addiu	$a2,$zero,0x1
/*  f139390:	46083201 */ 	sub.s	$f8,$f6,$f8
/*  f139394:	44c6f800 */ 	ctc1	$a2,$31
/*  f139398:	00000000 */ 	nop
/*  f13939c:	46004224 */ 	cvt.w.s	$f8,$f8
/*  f1393a0:	4446f800 */ 	cfc1	$a2,$31
/*  f1393a4:	00000000 */ 	nop
/*  f1393a8:	30c60078 */ 	andi	$a2,$a2,0x78
/*  f1393ac:	14c00005 */ 	bnez	$a2,.L0f1393c4
/*  f1393b0:	00000000 */ 	nop
/*  f1393b4:	44064000 */ 	mfc1	$a2,$f8
/*  f1393b8:	3c018000 */ 	lui	$at,0x8000
/*  f1393bc:	10000007 */ 	b	.L0f1393dc
/*  f1393c0:	00c13025 */ 	or	$a2,$a2,$at
.L0f1393c4:
/*  f1393c4:	10000005 */ 	b	.L0f1393dc
/*  f1393c8:	2406ffff */ 	addiu	$a2,$zero,-1
/*  f1393cc:	44064000 */ 	mfc1	$a2,$f8
.L0f1393d0:
/*  f1393d0:	00000000 */ 	nop
/*  f1393d4:	04c0fffb */ 	bltz	$a2,.L0f1393c4
/*  f1393d8:	00000000 */ 	nop
.L0f1393dc:
/*  f1393dc:	804841f6 */ 	lb	$t0,0x41f6($v0)
/*  f1393e0:	44cef800 */ 	ctc1	$t6,$31
/*  f1393e4:	8f240000 */ 	lw	$a0,0x0($t9)
/*  f1393e8:	00084900 */ 	sll	$t1,$t0,0x4
/*  f1393ec:	02495021 */ 	addu	$t2,$s2,$t1
/*  f1393f0:	01545821 */ 	addu	$t3,$t2,$s4
/*  f1393f4:	0fc01a40 */ 	jal	colourBlend
/*  f1393f8:	8d650000 */ 	lw	$a1,0x0($t3)
/*  f1393fc:	10000006 */ 	b	.L0f139418
/*  f139400:	00403025 */ 	or	$a2,$v0,$zero
.L0f139404:
/*  f139404:	804c41f6 */ 	lb	$t4,0x41f6($v0)
/*  f139408:	000c6900 */ 	sll	$t5,$t4,0x4
/*  f13940c:	024d7021 */ 	addu	$t6,$s2,$t5
/*  f139410:	01d47821 */ 	addu	$t7,$t6,$s4
/*  f139414:	8de60000 */ 	lw	$a2,0x0($t7)
.L0f139418:
/*  f139418:	3c188008 */ 	lui	$t8,%hi(var8007f468)
/*  f13941c:	8f18f468 */ 	lw	$t8,%lo(var8007f468)($t8)
/*  f139420:	00001025 */ 	or	$v0,$zero,$zero
/*  f139424:	02a01825 */ 	or	$v1,$s5,$zero
/*  f139428:	17160002 */ 	bne	$t8,$s6,.L0f139434
/*  f13942c:	2401ff00 */ 	addiu	$at,$zero,-256
/*  f139430:	2406ffff */ 	addiu	$a2,$zero,-1
.L0f139434:
/*  f139434:	00c12024 */ 	and	$a0,$a2,$at
/*  f139438:	30c500ff */ 	andi	$a1,$a2,0xff
/*  f13943c:	0202c823 */ 	subu	$t9,$s0,$v0
.L0f139440:
/*  f139440:	00b90019 */ 	multu	$a1,$t9
/*  f139444:	24420001 */ 	addiu	$v0,$v0,0x1
/*  f139448:	24630010 */ 	addiu	$v1,$v1,0x10
/*  f13944c:	00004012 */ 	mflo	$t0
/*  f139450:	00000000 */ 	nop
/*  f139454:	00000000 */ 	nop
/*  f139458:	0111001b */ 	divu	$zero,$t0,$s1
/*  f13945c:	00004812 */ 	mflo	$t1
/*  f139460:	00895025 */ 	or	$t2,$a0,$t1
/*  f139464:	16200002 */ 	bnez	$s1,.L0f139470
/*  f139468:	00000000 */ 	nop
/*  f13946c:	0007000d */ 	break	0x7
.L0f139470:
/*  f139470:	ac6afff0 */ 	sw	$t2,-0x10($v1)
/*  f139474:	5450fff2 */ 	bnel	$v0,$s0,.L0f139440
/*  f139478:	0202c823 */ 	subu	$t9,$s0,$v0
/*  f13947c:	26940004 */ 	addiu	$s4,$s4,0x4
/*  f139480:	1697ffae */ 	bne	$s4,$s7,.L0f13933c
/*  f139484:	26b50004 */ 	addiu	$s5,$s5,0x4
/*  f139488:	8fb00118 */ 	lw	$s0,0x118($sp)
/*  f13948c:	3c0d07ec */ 	lui	$t5,0x7ec
/*  f139490:	35ad00f0 */ 	ori	$t5,$t5,0xf0
/*  f139494:	260c0008 */ 	addiu	$t4,$s0,0x8
/*  f139498:	afac0118 */ 	sw	$t4,0x118($sp)
/*  f13949c:	03c02025 */ 	or	$a0,$s8,$zero
/*  f1394a0:	0c012d20 */ 	jal	osVirtualToPhysical
/*  f1394a4:	ae0d0000 */ 	sw	$t5,0x0($s0)
/*  f1394a8:	3c013f80 */ 	lui	$at,0x3f80
/*  f1394ac:	3c1e800b */ 	lui	$s8,%hi(var800ab5a8)
/*  f1394b0:	4481e000 */ 	mtc1	$at,$f28
/*  f1394b4:	4480f000 */ 	mtc1	$zero,$f30
/*  f1394b8:	ae020004 */ 	sw	$v0,0x4($s0)
/*  f1394bc:	27deb5a8 */ 	addiu	$s8,$s8,%lo(var800ab5a8)
/*  f1394c0:	0000a825 */ 	or	$s5,$zero,$zero
/*  f1394c4:	2417000c */ 	addiu	$s7,$zero,0xc
/*  f1394c8:	27b60118 */ 	addiu	$s6,$sp,0x118
/*  f1394cc:	0000a025 */ 	or	$s4,$zero,$zero
.L0f1394d0:
/*  f1394d0:	00009025 */ 	or	$s2,$zero,$zero
/*  f1394d4:	00008825 */ 	or	$s1,$zero,$zero
.L0f1394d8:
/*  f1394d8:	8e6e0000 */ 	lw	$t6,0x0($s3)
/*  f1394dc:	0015c080 */ 	sll	$t8,$s5,0x2
/*  f1394e0:	0315c023 */ 	subu	$t8,$t8,$s5
/*  f1394e4:	01d11021 */ 	addu	$v0,$t6,$s1
/*  f1394e8:	904f001d */ 	lbu	$t7,0x1d($v0)
/*  f1394ec:	3c198008 */ 	lui	$t9,%hi(var8007f450)
/*  f1394f0:	2739f450 */ 	addiu	$t9,$t9,%lo(var8007f450)
/*  f1394f4:	16af011b */ 	bne	$s5,$t7,.L0f139964
/*  f1394f8:	0018c080 */ 	sll	$t8,$t8,0x2
/*  f1394fc:	c44c0018 */ 	lwc1	$f12,0x18($v0)
/*  f139500:	0c0068f7 */ 	jal	sinf
/*  f139504:	03198021 */ 	addu	$s0,$t8,$t9
/*  f139508:	8e680000 */ 	lw	$t0,0x0($s3)
/*  f13950c:	46000686 */ 	mov.s	$f26,$f0
/*  f139510:	01114821 */ 	addu	$t1,$t0,$s1
/*  f139514:	0c0068f4 */ 	jal	cosf
/*  f139518:	c52c0018 */ 	lwc1	$f12,0x18($t1)
/*  f13951c:	8e6a0000 */ 	lw	$t2,0x0($s3)
/*  f139520:	46000586 */ 	mov.s	$f22,$f0
/*  f139524:	3c014f80 */ 	lui	$at,0x4f80
/*  f139528:	01511021 */ 	addu	$v0,$t2,$s1
/*  f13952c:	904b001f */ 	lbu	$t3,0x1f($v0)
/*  f139530:	448b5000 */ 	mtc1	$t3,$f10
/*  f139534:	05610004 */ 	bgez	$t3,.L0f139548
/*  f139538:	46805420 */ 	cvt.s.w	$f16,$f10
/*  f13953c:	44819000 */ 	mtc1	$at,$f18
/*  f139540:	00000000 */ 	nop
/*  f139544:	46128400 */ 	add.s	$f16,$f16,$f18
.L0f139548:
/*  f139548:	3c014120 */ 	lui	$at,0x4120
/*  f13954c:	44812000 */ 	mtc1	$at,$f4
/*  f139550:	3c0141c8 */ 	lui	$at,0x41c8
/*  f139554:	44814000 */ 	mtc1	$at,$f8
/*  f139558:	46048182 */ 	mul.s	$f6,$f16,$f4
/*  f13955c:	1680005a */ 	bnez	$s4,.L0f1396c8
/*  f139560:	46083500 */ 	add.s	$f20,$f6,$f8
/*  f139564:	8e0c0000 */ 	lw	$t4,0x0($s0)
/*  f139568:	8fce0000 */ 	lw	$t6,0x0($s8)
/*  f13956c:	240f0002 */ 	addiu	$t7,$zero,0x2
/*  f139570:	01970019 */ 	multu	$t4,$s7
/*  f139574:	24180001 */ 	addiu	$t8,$zero,0x1
/*  f139578:	afb80014 */ 	sw	$t8,0x14($sp)
/*  f13957c:	afaf0010 */ 	sw	$t7,0x10($sp)
/*  f139580:	02c02025 */ 	or	$a0,$s6,$zero
/*  f139584:	24060002 */ 	addiu	$a2,$zero,0x2
/*  f139588:	24070001 */ 	addiu	$a3,$zero,0x1
/*  f13958c:	afa00018 */ 	sw	$zero,0x18($sp)
/*  f139590:	24140001 */ 	addiu	$s4,$zero,0x1
/*  f139594:	00006812 */ 	mflo	$t5
/*  f139598:	01ae2821 */ 	addu	$a1,$t5,$t6
/*  f13959c:	0fc2ce70 */ 	jal	func0f0b39c0
/*  f1395a0:	00000000 */ 	nop
/*  f1395a4:	8fb90118 */ 	lw	$t9,0x118($sp)
/*  f1395a8:	3c09ba00 */ 	lui	$t1,0xba00
/*  f1395ac:	35291402 */ 	ori	$t1,$t1,0x1402
/*  f1395b0:	27280008 */ 	addiu	$t0,$t9,0x8
/*  f1395b4:	afa80118 */ 	sw	$t0,0x118($sp)
/*  f1395b8:	af200004 */ 	sw	$zero,0x4($t9)
/*  f1395bc:	af290000 */ 	sw	$t1,0x0($t9)
/*  f1395c0:	8faa0118 */ 	lw	$t2,0x118($sp)
/*  f1395c4:	3c0cba00 */ 	lui	$t4,0xba00
/*  f1395c8:	358c0602 */ 	ori	$t4,$t4,0x602
/*  f1395cc:	254b0008 */ 	addiu	$t3,$t2,0x8
/*  f1395d0:	afab0118 */ 	sw	$t3,0x118($sp)
/*  f1395d4:	240d00c0 */ 	addiu	$t5,$zero,0xc0
/*  f1395d8:	ad4d0004 */ 	sw	$t5,0x4($t2)
/*  f1395dc:	ad4c0000 */ 	sw	$t4,0x0($t2)
/*  f1395e0:	8fae0118 */ 	lw	$t6,0x118($sp)
/*  f1395e4:	3c190050 */ 	lui	$t9,0x50
/*  f1395e8:	3c18b900 */ 	lui	$t8,0xb900
/*  f1395ec:	25cf0008 */ 	addiu	$t7,$t6,0x8
/*  f1395f0:	afaf0118 */ 	sw	$t7,0x118($sp)
/*  f1395f4:	3718031d */ 	ori	$t8,$t8,0x31d
/*  f1395f8:	37394240 */ 	ori	$t9,$t9,0x4240
/*  f1395fc:	add90004 */ 	sw	$t9,0x4($t6)
/*  f139600:	add80000 */ 	sw	$t8,0x0($t6)
/*  f139604:	8fa80118 */ 	lw	$t0,0x118($sp)
/*  f139608:	3c0ab900 */ 	lui	$t2,0xb900
/*  f13960c:	354a0002 */ 	ori	$t2,$t2,0x2
/*  f139610:	25090008 */ 	addiu	$t1,$t0,0x8
/*  f139614:	afa90118 */ 	sw	$t1,0x118($sp)
/*  f139618:	ad000004 */ 	sw	$zero,0x4($t0)
/*  f13961c:	ad0a0000 */ 	sw	$t2,0x0($t0)
/*  f139620:	8fab0118 */ 	lw	$t3,0x118($sp)
/*  f139624:	3c0dba00 */ 	lui	$t5,0xba00
/*  f139628:	35ad1001 */ 	ori	$t5,$t5,0x1001
/*  f13962c:	256c0008 */ 	addiu	$t4,$t3,0x8
/*  f139630:	afac0118 */ 	sw	$t4,0x118($sp)
/*  f139634:	ad600004 */ 	sw	$zero,0x4($t3)
/*  f139638:	ad6d0000 */ 	sw	$t5,0x0($t3)
/*  f13963c:	8fae0118 */ 	lw	$t6,0x118($sp)
/*  f139640:	3c18ba00 */ 	lui	$t8,0xba00
/*  f139644:	37180903 */ 	ori	$t8,$t8,0x903
/*  f139648:	25cf0008 */ 	addiu	$t7,$t6,0x8
/*  f13964c:	afaf0118 */ 	sw	$t7,0x118($sp)
/*  f139650:	24190c00 */ 	addiu	$t9,$zero,0xc00
/*  f139654:	add90004 */ 	sw	$t9,0x4($t6)
/*  f139658:	add80000 */ 	sw	$t8,0x0($t6)
/*  f13965c:	8fa80118 */ 	lw	$t0,0x118($sp)
/*  f139660:	3c0bff32 */ 	lui	$t3,0xff32
/*  f139664:	3c0afcff */ 	lui	$t2,0xfcff
/*  f139668:	25090008 */ 	addiu	$t1,$t0,0x8
/*  f13966c:	afa90118 */ 	sw	$t1,0x118($sp)
/*  f139670:	354a99ff */ 	ori	$t2,$t2,0x99ff
/*  f139674:	356b7f3f */ 	ori	$t3,$t3,0x7f3f
/*  f139678:	ad0b0004 */ 	sw	$t3,0x4($t0)
/*  f13967c:	ad0a0000 */ 	sw	$t2,0x0($t0)
/*  f139680:	8fac0118 */ 	lw	$t4,0x118($sp)
/*  f139684:	3c0eba00 */ 	lui	$t6,0xba00
/*  f139688:	35ce0c02 */ 	ori	$t6,$t6,0xc02
/*  f13968c:	258d0008 */ 	addiu	$t5,$t4,0x8
/*  f139690:	afad0118 */ 	sw	$t5,0x118($sp)
/*  f139694:	240f2000 */ 	addiu	$t7,$zero,0x2000
/*  f139698:	ad8f0004 */ 	sw	$t7,0x4($t4)
/*  f13969c:	ad8e0000 */ 	sw	$t6,0x0($t4)
/*  f1396a0:	8fb80118 */ 	lw	$t8,0x118($sp)
/*  f1396a4:	3c08ba00 */ 	lui	$t0,0xba00
/*  f1396a8:	35081301 */ 	ori	$t0,$t0,0x1301
/*  f1396ac:	27190008 */ 	addiu	$t9,$t8,0x8
/*  f1396b0:	afb90118 */ 	sw	$t9,0x118($sp)
/*  f1396b4:	3c090008 */ 	lui	$t1,0x8
/*  f1396b8:	af090004 */ 	sw	$t1,0x4($t8)
/*  f1396bc:	af080000 */ 	sw	$t0,0x0($t8)
/*  f1396c0:	8e6a0000 */ 	lw	$t2,0x0($s3)
/*  f1396c4:	01511021 */ 	addu	$v0,$t2,$s1
.L0f1396c8:
/*  f1396c8:	27a400d4 */ 	addiu	$a0,$sp,0xd4
/*  f1396cc:	2445000c */ 	addiu	$a1,$v0,0xc
/*  f1396d0:	0fc4e39b */ 	jal	func0f138e6c
/*  f1396d4:	02403025 */ 	or	$a2,$s2,$zero
/*  f1396d8:	3c017f1b */ 	lui	$at,%hi(var7f1b5848)
/*  f1396dc:	c4325848 */ 	lwc1	$f18,%lo(var7f1b5848)($at)
/*  f1396e0:	c7aa00dc */ 	lwc1	$f10,0xdc($sp)
/*  f1396e4:	3c017f1b */ 	lui	$at,%hi(var7f1b584c)
/*  f1396e8:	c424584c */ 	lwc1	$f4,%lo(var7f1b584c)($at)
/*  f1396ec:	46125401 */ 	sub.s	$f16,$f10,$f18
/*  f1396f0:	46048183 */ 	div.s	$f6,$f16,$f4
/*  f1396f4:	4606e601 */ 	sub.s	$f24,$f28,$f6
/*  f1396f8:	461ec03c */ 	c.lt.s	$f24,$f30
/*  f1396fc:	00000000 */ 	nop
/*  f139700:	45020003 */ 	bc1fl	.L0f139710
/*  f139704:	4618e03c */ 	c.lt.s	$f28,$f24
/*  f139708:	4600f606 */ 	mov.s	$f24,$f30
/*  f13970c:	4618e03c */ 	c.lt.s	$f28,$f24
.L0f139710:
/*  f139710:	00000000 */ 	nop
/*  f139714:	45000002 */ 	bc1f	.L0f139720
/*  f139718:	00000000 */ 	nop
/*  f13971c:	4600e606 */ 	mov.s	$f24,$f28
.L0f139720:
/*  f139720:	0fc59e59 */ 	jal	func0f167964
/*  f139724:	24040004 */ 	addiu	$a0,$zero,0x4
/*  f139728:	4616d280 */ 	add.s	$f10,$f26,$f22
/*  f13972c:	c7a800d4 */ 	lwc1	$f8,0xd4($sp)
/*  f139730:	3c017f1b */ 	lui	$at,%hi(var7f1b5850)
/*  f139734:	4600d007 */ 	neg.s	$f0,$f26
/*  f139738:	460aa482 */ 	mul.s	$f18,$f20,$f10
/*  f13973c:	4600b280 */ 	add.s	$f10,$f22,$f0
/*  f139740:	00402025 */ 	or	$a0,$v0,$zero
/*  f139744:	4600b087 */ 	neg.s	$f2,$f22
/*  f139748:	46124400 */ 	add.s	$f16,$f8,$f18
/*  f13974c:	460aa202 */ 	mul.s	$f8,$f20,$f10
/*  f139750:	4600810d */ 	trunc.w.s	$f4,$f16
/*  f139754:	440c2000 */ 	mfc1	$t4,$f4
/*  f139758:	00000000 */ 	nop
/*  f13975c:	a44c0000 */ 	sh	$t4,0x0($v0)
/*  f139760:	c7a600d8 */ 	lwc1	$f6,0xd8($sp)
/*  f139764:	46083480 */ 	add.s	$f18,$f6,$f8
/*  f139768:	4616d201 */ 	sub.s	$f8,$f26,$f22
/*  f13976c:	4600940d */ 	trunc.w.s	$f16,$f18
/*  f139770:	4608a482 */ 	mul.s	$f18,$f20,$f8
/*  f139774:	4600b201 */ 	sub.s	$f8,$f22,$f0
/*  f139778:	440e8000 */ 	mfc1	$t6,$f16
/*  f13977c:	00000000 */ 	nop
/*  f139780:	a44e0002 */ 	sh	$t6,0x2($v0)
/*  f139784:	c7a400dc */ 	lwc1	$f4,0xdc($sp)
/*  f139788:	4600228d */ 	trunc.w.s	$f10,$f4
/*  f13978c:	44185000 */ 	mfc1	$t8,$f10
/*  f139790:	00000000 */ 	nop
/*  f139794:	a4580004 */ 	sh	$t8,0x4($v0)
/*  f139798:	c7a600d4 */ 	lwc1	$f6,0xd4($sp)
/*  f13979c:	46123400 */ 	add.s	$f16,$f6,$f18
/*  f1397a0:	4608a182 */ 	mul.s	$f6,$f20,$f8
/*  f1397a4:	4600810d */ 	trunc.w.s	$f4,$f16
/*  f1397a8:	44082000 */ 	mfc1	$t0,$f4
/*  f1397ac:	00000000 */ 	nop
/*  f1397b0:	a448000c */ 	sh	$t0,0xc($v0)
/*  f1397b4:	c7aa00d8 */ 	lwc1	$f10,0xd8($sp)
/*  f1397b8:	46065480 */ 	add.s	$f18,$f10,$f6
/*  f1397bc:	46160181 */ 	sub.s	$f6,$f0,$f22
/*  f1397c0:	4600940d */ 	trunc.w.s	$f16,$f18
/*  f1397c4:	4606a482 */ 	mul.s	$f18,$f20,$f6
/*  f1397c8:	46001181 */ 	sub.s	$f6,$f2,$f0
/*  f1397cc:	440a8000 */ 	mfc1	$t2,$f16
/*  f1397d0:	00000000 */ 	nop
/*  f1397d4:	a44a000e */ 	sh	$t2,0xe($v0)
/*  f1397d8:	c7a400dc */ 	lwc1	$f4,0xdc($sp)
/*  f1397dc:	4600220d */ 	trunc.w.s	$f8,$f4
/*  f1397e0:	440c4000 */ 	mfc1	$t4,$f8
/*  f1397e4:	00000000 */ 	nop
/*  f1397e8:	a44c0010 */ 	sh	$t4,0x10($v0)
/*  f1397ec:	c7aa00d4 */ 	lwc1	$f10,0xd4($sp)
/*  f1397f0:	46125400 */ 	add.s	$f16,$f10,$f18
/*  f1397f4:	4606a282 */ 	mul.s	$f10,$f20,$f6
/*  f1397f8:	4600810d */ 	trunc.w.s	$f4,$f16
/*  f1397fc:	440e2000 */ 	mfc1	$t6,$f4
/*  f139800:	00000000 */ 	nop
/*  f139804:	a44e0018 */ 	sh	$t6,0x18($v0)
/*  f139808:	c7a800d8 */ 	lwc1	$f8,0xd8($sp)
/*  f13980c:	460a4480 */ 	add.s	$f18,$f8,$f10
/*  f139810:	46160280 */ 	add.s	$f10,$f0,$f22
/*  f139814:	4600940d */ 	trunc.w.s	$f16,$f18
/*  f139818:	460aa482 */ 	mul.s	$f18,$f20,$f10
/*  f13981c:	46001280 */ 	add.s	$f10,$f2,$f0
/*  f139820:	44188000 */ 	mfc1	$t8,$f16
/*  f139824:	00000000 */ 	nop
/*  f139828:	a458001a */ 	sh	$t8,0x1a($v0)
/*  f13982c:	c7a400dc */ 	lwc1	$f4,0xdc($sp)
/*  f139830:	4600218d */ 	trunc.w.s	$f6,$f4
/*  f139834:	44083000 */ 	mfc1	$t0,$f6
/*  f139838:	00000000 */ 	nop
/*  f13983c:	a448001c */ 	sh	$t0,0x1c($v0)
/*  f139840:	c7a800d4 */ 	lwc1	$f8,0xd4($sp)
/*  f139844:	46124400 */ 	add.s	$f16,$f8,$f18
/*  f139848:	460aa202 */ 	mul.s	$f8,$f20,$f10
/*  f13984c:	4600810d */ 	trunc.w.s	$f4,$f16
/*  f139850:	440a2000 */ 	mfc1	$t2,$f4
/*  f139854:	00000000 */ 	nop
/*  f139858:	a44a0024 */ 	sh	$t2,0x24($v0)
/*  f13985c:	c7a600d8 */ 	lwc1	$f6,0xd8($sp)
/*  f139860:	46083480 */ 	add.s	$f18,$f6,$f8
/*  f139864:	4600940d */ 	trunc.w.s	$f16,$f18
/*  f139868:	440c8000 */ 	mfc1	$t4,$f16
/*  f13986c:	00000000 */ 	nop
/*  f139870:	a44c0026 */ 	sh	$t4,0x26($v0)
/*  f139874:	c7a400dc */ 	lwc1	$f4,0xdc($sp)
/*  f139878:	4600228d */ 	trunc.w.s	$f10,$f4
/*  f13987c:	440e5000 */ 	mfc1	$t6,$f10
/*  f139880:	00000000 */ 	nop
/*  f139884:	a44e0028 */ 	sh	$t6,0x28($v0)
/*  f139888:	860f0004 */ 	lh	$t7,0x4($s0)
/*  f13988c:	000fc140 */ 	sll	$t8,$t7,0x5
/*  f139890:	a4580008 */ 	sh	$t8,0x8($v0)
/*  f139894:	86190006 */ 	lh	$t9,0x6($s0)
/*  f139898:	00194140 */ 	sll	$t0,$t9,0x5
/*  f13989c:	a448000a */ 	sh	$t0,0xa($v0)
/*  f1398a0:	86090004 */ 	lh	$t1,0x4($s0)
/*  f1398a4:	00095140 */ 	sll	$t2,$t1,0x5
/*  f1398a8:	a44a0014 */ 	sh	$t2,0x14($v0)
/*  f1398ac:	860b000a */ 	lh	$t3,0xa($s0)
/*  f1398b0:	000b6140 */ 	sll	$t4,$t3,0x5
/*  f1398b4:	a44c0016 */ 	sh	$t4,0x16($v0)
/*  f1398b8:	860d0008 */ 	lh	$t5,0x8($s0)
/*  f1398bc:	000d7140 */ 	sll	$t6,$t5,0x5
/*  f1398c0:	a44e0020 */ 	sh	$t6,0x20($v0)
/*  f1398c4:	860f000a */ 	lh	$t7,0xa($s0)
/*  f1398c8:	000fc140 */ 	sll	$t8,$t7,0x5
/*  f1398cc:	a4580022 */ 	sh	$t8,0x22($v0)
/*  f1398d0:	86190008 */ 	lh	$t9,0x8($s0)
/*  f1398d4:	00194140 */ 	sll	$t0,$t9,0x5
/*  f1398d8:	a448002c */ 	sh	$t0,0x2c($v0)
/*  f1398dc:	86090006 */ 	lh	$t1,0x6($s0)
/*  f1398e0:	00095140 */ 	sll	$t2,$t1,0x5
/*  f1398e4:	a44a002e */ 	sh	$t2,0x2e($v0)
/*  f1398e8:	c4265850 */ 	lwc1	$f6,%lo(var7f1b5850)($at)
/*  f1398ec:	8e6b0000 */ 	lw	$t3,0x0($s3)
/*  f1398f0:	3c0a0430 */ 	lui	$t2,0x430
/*  f1398f4:	4606c202 */ 	mul.s	$f8,$f24,$f6
/*  f1398f8:	01716021 */ 	addu	$t4,$t3,$s1
/*  f1398fc:	918d0020 */ 	lbu	$t5,0x20($t4)
/*  f139900:	354a0030 */ 	ori	$t2,$t2,0x30
/*  f139904:	4600448d */ 	trunc.w.s	$f18,$f8
/*  f139908:	440f9000 */ 	mfc1	$t7,$f18
/*  f13990c:	00000000 */ 	nop
/*  f139910:	000fc080 */ 	sll	$t8,$t7,0x2
/*  f139914:	01b81021 */ 	addu	$v0,$t5,$t8
/*  f139918:	0002c880 */ 	sll	$t9,$v0,0x2
/*  f13991c:	a0990007 */ 	sb	$t9,0x7($a0)
/*  f139920:	a0990013 */ 	sb	$t9,0x13($a0)
/*  f139924:	a099001f */ 	sb	$t9,0x1f($a0)
/*  f139928:	a099002b */ 	sb	$t9,0x2b($a0)
/*  f13992c:	8fb00118 */ 	lw	$s0,0x118($sp)
/*  f139930:	26090008 */ 	addiu	$t1,$s0,0x8
/*  f139934:	afa90118 */ 	sw	$t1,0x118($sp)
/*  f139938:	0c012d20 */ 	jal	osVirtualToPhysical
/*  f13993c:	ae0a0000 */ 	sw	$t2,0x0($s0)
/*  f139940:	ae020004 */ 	sw	$v0,0x4($s0)
/*  f139944:	8fab0118 */ 	lw	$t3,0x118($sp)
/*  f139948:	3c0eb100 */ 	lui	$t6,0xb100
/*  f13994c:	35ce0002 */ 	ori	$t6,$t6,0x2
/*  f139950:	256c0008 */ 	addiu	$t4,$t3,0x8
/*  f139954:	afac0118 */ 	sw	$t4,0x118($sp)
/*  f139958:	240f3210 */ 	addiu	$t7,$zero,0x3210
/*  f13995c:	ad6f0004 */ 	sw	$t7,0x4($t3)
/*  f139960:	ad6e0000 */ 	sw	$t6,0x0($t3)
.L0f139964:
/*  f139964:	26520001 */ 	addiu	$s2,$s2,0x1
/*  f139968:	240101f4 */ 	addiu	$at,$zero,0x1f4
/*  f13996c:	1641feda */ 	bne	$s2,$at,.L0f1394d8
/*  f139970:	26310018 */ 	addiu	$s1,$s1,0x18
/*  f139974:	26b50001 */ 	addiu	$s5,$s5,0x1
/*  f139978:	24010002 */ 	addiu	$at,$zero,0x2
/*  f13997c:	56a1fed4 */ 	bnel	$s5,$at,.L0f1394d0
/*  f139980:	0000a025 */ 	or	$s4,$zero,$zero
/*  f139984:	8fbf007c */ 	lw	$ra,0x7c($sp)
/*  f139988:	8fa20118 */ 	lw	$v0,0x118($sp)
/*  f13998c:	d7b40028 */ 	ldc1	$f20,0x28($sp)
/*  f139990:	d7b60030 */ 	ldc1	$f22,0x30($sp)
/*  f139994:	d7b80038 */ 	ldc1	$f24,0x38($sp)
/*  f139998:	d7ba0040 */ 	ldc1	$f26,0x40($sp)
/*  f13999c:	d7bc0048 */ 	ldc1	$f28,0x48($sp)
/*  f1399a0:	d7be0050 */ 	ldc1	$f30,0x50($sp)
/*  f1399a4:	8fb00058 */ 	lw	$s0,0x58($sp)
/*  f1399a8:	8fb1005c */ 	lw	$s1,0x5c($sp)
/*  f1399ac:	8fb20060 */ 	lw	$s2,0x60($sp)
/*  f1399b0:	8fb30064 */ 	lw	$s3,0x64($sp)
/*  f1399b4:	8fb40068 */ 	lw	$s4,0x68($sp)
/*  f1399b8:	8fb5006c */ 	lw	$s5,0x6c($sp)
/*  f1399bc:	8fb60070 */ 	lw	$s6,0x70($sp)
/*  f1399c0:	8fb70074 */ 	lw	$s7,0x74($sp)
/*  f1399c4:	8fbe0078 */ 	lw	$s8,0x78($sp)
/*  f1399c8:	03e00008 */ 	jr	$ra
/*  f1399cc:	27bd0118 */ 	addiu	$sp,$sp,0x118
);

GLOBAL_ASM(
glabel func0f1399d0
.late_rodata
glabel var7f1b5854
.word 0x40c907a9
glabel var7f1b5858
.word 0x40c907a9
glabel var7f1b585c
.word 0x3e4ccccd
glabel var7f1b5860
.word 0x3dcccccd
glabel var7f1b5864
.word 0x408ccccd
glabel var7f1b5868
.word 0x3e99999a
.text
/*  f1399d0:	27bdff30 */ 	addiu	$sp,$sp,-208
/*  f1399d4:	f7b40038 */ 	sdc1	$f20,0x38($sp)
/*  f1399d8:	3c01437f */ 	lui	$at,0x437f
/*  f1399dc:	c7b400f0 */ 	lwc1	$f20,0xf0($sp)
/*  f1399e0:	44812000 */ 	mtc1	$at,$f4
/*  f1399e4:	afb00068 */ 	sw	$s0,0x68($sp)
/*  f1399e8:	24100001 */ 	addiu	$s0,$zero,0x1
/*  f1399ec:	46142182 */ 	mul.s	$f6,$f4,$f20
/*  f1399f0:	afb40078 */ 	sw	$s4,0x78($sp)
/*  f1399f4:	0080a025 */ 	or	$s4,$a0,$zero
/*  f1399f8:	afbe0088 */ 	sw	$s8,0x88($sp)
/*  f1399fc:	00a0f025 */ 	or	$s8,$a1,$zero
/*  f139a00:	afb5007c */ 	sw	$s5,0x7c($sp)
/*  f139a04:	3c0400ff */ 	lui	$a0,0xff
/*  f139a08:	444ef800 */ 	cfc1	$t6,$31
/*  f139a0c:	44d0f800 */ 	ctc1	$s0,$31
/*  f139a10:	00c0a825 */ 	or	$s5,$a2,$zero
/*  f139a14:	afbf008c */ 	sw	$ra,0x8c($sp)
/*  f139a18:	46003224 */ 	cvt.w.s	$f8,$f6
/*  f139a1c:	afb70084 */ 	sw	$s7,0x84($sp)
/*  f139a20:	afb60080 */ 	sw	$s6,0x80($sp)
/*  f139a24:	afb30074 */ 	sw	$s3,0x74($sp)
/*  f139a28:	4450f800 */ 	cfc1	$s0,$31
/*  f139a2c:	afb20070 */ 	sw	$s2,0x70($sp)
/*  f139a30:	afb1006c */ 	sw	$s1,0x6c($sp)
/*  f139a34:	32100078 */ 	andi	$s0,$s0,0x78
/*  f139a38:	f7be0060 */ 	sdc1	$f30,0x60($sp)
/*  f139a3c:	f7bc0058 */ 	sdc1	$f28,0x58($sp)
/*  f139a40:	f7ba0050 */ 	sdc1	$f26,0x50($sp)
/*  f139a44:	f7b80048 */ 	sdc1	$f24,0x48($sp)
/*  f139a48:	f7b60040 */ 	sdc1	$f22,0x40($sp)
/*  f139a4c:	afa700dc */ 	sw	$a3,0xdc($sp)
/*  f139a50:	3484ff00 */ 	ori	$a0,$a0,0xff00
/*  f139a54:	12000013 */ 	beqz	$s0,.L0f139aa4
/*  f139a58:	2405ff00 */ 	addiu	$a1,$zero,-256
/*  f139a5c:	3c014f00 */ 	lui	$at,0x4f00
/*  f139a60:	44814000 */ 	mtc1	$at,$f8
/*  f139a64:	24100001 */ 	addiu	$s0,$zero,0x1
/*  f139a68:	46083201 */ 	sub.s	$f8,$f6,$f8
/*  f139a6c:	44d0f800 */ 	ctc1	$s0,$31
/*  f139a70:	00000000 */ 	nop
/*  f139a74:	46004224 */ 	cvt.w.s	$f8,$f8
/*  f139a78:	4450f800 */ 	cfc1	$s0,$31
/*  f139a7c:	00000000 */ 	nop
/*  f139a80:	32100078 */ 	andi	$s0,$s0,0x78
/*  f139a84:	16000005 */ 	bnez	$s0,.L0f139a9c
/*  f139a88:	00000000 */ 	nop
/*  f139a8c:	44104000 */ 	mfc1	$s0,$f8
/*  f139a90:	3c018000 */ 	lui	$at,0x8000
/*  f139a94:	10000007 */ 	b	.L0f139ab4
/*  f139a98:	02018025 */ 	or	$s0,$s0,$at
.L0f139a9c:
/*  f139a9c:	10000005 */ 	b	.L0f139ab4
/*  f139aa0:	2410ffff */ 	addiu	$s0,$zero,-1
.L0f139aa4:
/*  f139aa4:	44104000 */ 	mfc1	$s0,$f8
/*  f139aa8:	00000000 */ 	nop
/*  f139aac:	0600fffb */ 	bltz	$s0,.L0f139a9c
/*  f139ab0:	00000000 */ 	nop
.L0f139ab4:
/*  f139ab4:	44cef800 */ 	ctc1	$t6,$31
/*  f139ab8:	0fc01a40 */ 	jal	colourBlend
/*  f139abc:	02003025 */ 	or	$a2,$s0,$zero
/*  f139ac0:	0040b025 */ 	or	$s6,$v0,$zero
/*  f139ac4:	3404af00 */ 	dli	$a0,0xaf00
/*  f139ac8:	2405ff00 */ 	addiu	$a1,$zero,-256
/*  f139acc:	0fc01a40 */ 	jal	colourBlend
/*  f139ad0:	02003025 */ 	or	$a2,$s0,$zero
/*  f139ad4:	0040b825 */ 	or	$s7,$v0,$zero
/*  f139ad8:	24100004 */ 	addiu	$s0,$zero,0x4
/*  f139adc:	06a10003 */ 	bgez	$s5,.L0f139aec
/*  f139ae0:	00157843 */ 	sra	$t7,$s5,0x1
/*  f139ae4:	26a10001 */ 	addiu	$at,$s5,0x1
/*  f139ae8:	00017843 */ 	sra	$t7,$at,0x1
.L0f139aec:
/*  f139aec:	24010064 */ 	addiu	$at,$zero,0x64
/*  f139af0:	01e1001a */ 	div	$zero,$t7,$at
/*  f139af4:	0000c010 */ 	mfhi	$t8
/*  f139af8:	44985000 */ 	mtc1	$t8,$f10
/*  f139afc:	3c017f1b */ 	lui	$at,%hi(var7f1b5854)
/*  f139b00:	c4325854 */ 	lwc1	$f18,%lo(var7f1b5854)($at)
/*  f139b04:	46805420 */ 	cvt.s.w	$f16,$f10
/*  f139b08:	3c0142c8 */ 	lui	$at,0x42c8
/*  f139b0c:	44813000 */ 	mtc1	$at,$f6
/*  f139b10:	3c013f00 */ 	lui	$at,0x3f00
/*  f139b14:	44815000 */ 	mtc1	$at,$f10
/*  f139b18:	241200fc */ 	addiu	$s2,$zero,0xfc
/*  f139b1c:	46128102 */ 	mul.s	$f4,$f16,$f18
/*  f139b20:	460aa400 */ 	add.s	$f16,$f20,$f10
/*  f139b24:	00009825 */ 	or	$s3,$zero,$zero
/*  f139b28:	e7b00090 */ 	swc1	$f16,0x90($sp)
/*  f139b2c:	46062203 */ 	div.s	$f8,$f4,$f6
/*  f139b30:	e7a80098 */ 	swc1	$f8,0x98($sp)
.L0f139b34:
/*  f139b34:	3c01800a */ 	lui	$at,%hi(var800a4160)
/*  f139b38:	c4244160 */ 	lwc1	$f4,%lo(var800a4160)($at)
/*  f139b3c:	3c014120 */ 	lui	$at,0x4120
/*  f139b40:	44813000 */ 	mtc1	$at,$f6
/*  f139b44:	44909000 */ 	mtc1	$s0,$f18
/*  f139b48:	3c017f1b */ 	lui	$at,%hi(var7f1b5858)
/*  f139b4c:	46062202 */ 	mul.s	$f8,$f4,$f6
/*  f139b50:	c42a5858 */ 	lwc1	$f10,%lo(var7f1b5858)($at)
/*  f139b54:	3c017f1b */ 	lui	$at,%hi(var7f1b585c)
/*  f139b58:	468095a0 */ 	cvt.s.w	$f22,$f18
/*  f139b5c:	460a4402 */ 	mul.s	$f16,$f8,$f10
/*  f139b60:	c432585c */ 	lwc1	$f18,%lo(var7f1b585c)($at)
/*  f139b64:	3c017f1b */ 	lui	$at,%hi(var7f1b5860)
/*  f139b68:	c42a5860 */ 	lwc1	$f10,%lo(var7f1b5860)($at)
/*  f139b6c:	c7a80098 */ 	lwc1	$f8,0x98($sp)
/*  f139b70:	4612b102 */ 	mul.s	$f4,$f22,$f18
/*  f139b74:	3c013f80 */ 	lui	$at,0x3f80
/*  f139b78:	460ab482 */ 	mul.s	$f18,$f22,$f10
/*  f139b7c:	46102180 */ 	add.s	$f6,$f4,$f16
/*  f139b80:	c7a40090 */ 	lwc1	$f4,0x90($sp)
/*  f139b84:	46049402 */ 	mul.s	$f16,$f18,$f4
/*  f139b88:	46083600 */ 	add.s	$f24,$f6,$f8
/*  f139b8c:	44813000 */ 	mtc1	$at,$f6
/*  f139b90:	00000000 */ 	nop
/*  f139b94:	46068500 */ 	add.s	$f20,$f16,$f6
/*  f139b98:	0c004b70 */ 	jal	random
/*  f139b9c:	4600a686 */ 	mov.s	$f26,$f20
/*  f139ba0:	305900ff */ 	andi	$t9,$v0,0xff
/*  f139ba4:	24010001 */ 	addiu	$at,$zero,0x1
/*  f139ba8:	17210006 */ 	bne	$t9,$at,.L0f139bc4
/*  f139bac:	02e02025 */ 	or	$a0,$s7,$zero
/*  f139bb0:	3c014120 */ 	lui	$at,0x4120
/*  f139bb4:	44814000 */ 	mtc1	$at,$f8
/*  f139bb8:	00000000 */ 	nop
/*  f139bbc:	4608a682 */ 	mul.s	$f26,$f20,$f8
/*  f139bc0:	00000000 */ 	nop
.L0f139bc4:
/*  f139bc4:	02c02825 */ 	or	$a1,$s6,$zero
/*  f139bc8:	0fc01a40 */ 	jal	colourBlend
/*  f139bcc:	02403025 */ 	or	$a2,$s2,$zero
/*  f139bd0:	44939000 */ 	mtc1	$s3,$f18
/*  f139bd4:	3c01427c */ 	lui	$at,0x427c
/*  f139bd8:	44815000 */ 	mtc1	$at,$f10
/*  f139bdc:	46809120 */ 	cvt.s.w	$f4,$f18
/*  f139be0:	c7a600e8 */ 	lwc1	$f6,0xe8($sp)
/*  f139be4:	24090001 */ 	addiu	$t1,$zero,0x1
/*  f139be8:	3c014f00 */ 	lui	$at,0x4f00
/*  f139bec:	46045400 */ 	add.s	$f16,$f10,$f4
/*  f139bf0:	46068202 */ 	mul.s	$f8,$f16,$f6
/*  f139bf4:	4448f800 */ 	cfc1	$t0,$31
/*  f139bf8:	44c9f800 */ 	ctc1	$t1,$31
/*  f139bfc:	00000000 */ 	nop
/*  f139c00:	460044a4 */ 	cvt.w.s	$f18,$f8
/*  f139c04:	4449f800 */ 	cfc1	$t1,$31
/*  f139c08:	00000000 */ 	nop
/*  f139c0c:	31290078 */ 	andi	$t1,$t1,0x78
/*  f139c10:	51200013 */ 	beqzl	$t1,.L0f139c60
/*  f139c14:	44099000 */ 	mfc1	$t1,$f18
/*  f139c18:	44819000 */ 	mtc1	$at,$f18
/*  f139c1c:	24090001 */ 	addiu	$t1,$zero,0x1
/*  f139c20:	46124481 */ 	sub.s	$f18,$f8,$f18
/*  f139c24:	44c9f800 */ 	ctc1	$t1,$31
/*  f139c28:	00000000 */ 	nop
/*  f139c2c:	460094a4 */ 	cvt.w.s	$f18,$f18
/*  f139c30:	4449f800 */ 	cfc1	$t1,$31
/*  f139c34:	00000000 */ 	nop
/*  f139c38:	31290078 */ 	andi	$t1,$t1,0x78
/*  f139c3c:	15200005 */ 	bnez	$t1,.L0f139c54
/*  f139c40:	00000000 */ 	nop
/*  f139c44:	44099000 */ 	mfc1	$t1,$f18
/*  f139c48:	3c018000 */ 	lui	$at,0x8000
/*  f139c4c:	10000007 */ 	b	.L0f139c6c
/*  f139c50:	01214825 */ 	or	$t1,$t1,$at
.L0f139c54:
/*  f139c54:	10000005 */ 	b	.L0f139c6c
/*  f139c58:	2409ffff */ 	addiu	$t1,$zero,-1
/*  f139c5c:	44099000 */ 	mfc1	$t1,$f18
.L0f139c60:
/*  f139c60:	00000000 */ 	nop
/*  f139c64:	0520fffb */ 	bltz	$t1,.L0f139c54
/*  f139c68:	00000000 */ 	nop
.L0f139c6c:
/*  f139c6c:	00498825 */ 	or	$s1,$v0,$t1
/*  f139c70:	44c8f800 */ 	ctc1	$t0,$31
/*  f139c74:	322a00ff */ 	andi	$t2,$s1,0xff
/*  f139c78:	51400032 */ 	beqzl	$t2,.L0f139d44
/*  f139c7c:	2610ffff */ 	addiu	$s0,$s0,-1
/*  f139c80:	449e5000 */ 	mtc1	$s8,$f10
/*  f139c84:	44952000 */ 	mtc1	$s5,$f4
/*  f139c88:	4600c306 */ 	mov.s	$f12,$f24
/*  f139c8c:	46805720 */ 	cvt.s.w	$f28,$f10
/*  f139c90:	0c0068f7 */ 	jal	sinf
/*  f139c94:	468027a0 */ 	cvt.s.w	$f30,$f4
/*  f139c98:	46000506 */ 	mov.s	$f20,$f0
/*  f139c9c:	0c0068f4 */ 	jal	cosf
/*  f139ca0:	4600c306 */ 	mov.s	$f12,$f24
/*  f139ca4:	260b0001 */ 	addiu	$t3,$s0,0x1
/*  f139ca8:	448b8000 */ 	mtc1	$t3,$f16
/*  f139cac:	3c017f1b */ 	lui	$at,%hi(var7f1b5864)
/*  f139cb0:	c4285864 */ 	lwc1	$f8,%lo(var7f1b5864)($at)
/*  f139cb4:	468081a0 */ 	cvt.s.w	$f6,$f16
/*  f139cb8:	c7aa00ec */ 	lwc1	$f10,0xec($sp)
/*  f139cbc:	3c017f1b */ 	lui	$at,%hi(var7f1b5868)
/*  f139cc0:	8fac00dc */ 	lw	$t4,0xdc($sp)
/*  f139cc4:	8fad00e0 */ 	lw	$t5,0xe0($sp)
/*  f139cc8:	8fae00e4 */ 	lw	$t6,0xe4($sp)
/*  f139ccc:	46083482 */ 	mul.s	$f18,$f6,$f8
/*  f139cd0:	4407d000 */ 	mfc1	$a3,$f26
/*  f139cd4:	240f0001 */ 	addiu	$t7,$zero,0x1
/*  f139cd8:	afaf0028 */ 	sw	$t7,0x28($sp)
/*  f139cdc:	02802025 */ 	or	$a0,$s4,$zero
/*  f139ce0:	afb10020 */ 	sw	$s1,0x20($sp)
/*  f139ce4:	afa00024 */ 	sw	$zero,0x24($sp)
/*  f139ce8:	460a9082 */ 	mul.s	$f2,$f18,$f10
/*  f139cec:	c4325868 */ 	lwc1	$f18,%lo(var7f1b5868)($at)
/*  f139cf0:	3c013f80 */ 	lui	$at,0x3f80
/*  f139cf4:	afac0014 */ 	sw	$t4,0x14($sp)
/*  f139cf8:	afad0018 */ 	sw	$t5,0x18($sp)
/*  f139cfc:	afae001c */ 	sw	$t6,0x1c($sp)
/*  f139d00:	4602a102 */ 	mul.s	$f4,$f20,$f2
/*  f139d04:	00000000 */ 	nop
/*  f139d08:	46020182 */ 	mul.s	$f6,$f0,$f2
/*  f139d0c:	00000000 */ 	nop
/*  f139d10:	4612b282 */ 	mul.s	$f10,$f22,$f18
/*  f139d14:	461c2400 */ 	add.s	$f16,$f4,$f28
/*  f139d18:	c7a40090 */ 	lwc1	$f4,0x90($sp)
/*  f139d1c:	461e3200 */ 	add.s	$f8,$f6,$f30
/*  f139d20:	44058000 */ 	mfc1	$a1,$f16
/*  f139d24:	46045402 */ 	mul.s	$f16,$f10,$f4
/*  f139d28:	44813000 */ 	mtc1	$at,$f6
/*  f139d2c:	44064000 */ 	mfc1	$a2,$f8
/*  f139d30:	46068200 */ 	add.s	$f8,$f16,$f6
/*  f139d34:	0fc554b5 */ 	jal	func0f1552d4
/*  f139d38:	e7a80010 */ 	swc1	$f8,0x10($sp)
/*  f139d3c:	0040a025 */ 	or	$s4,$v0,$zero
/*  f139d40:	2610ffff */ 	addiu	$s0,$s0,-1
.L0f139d44:
/*  f139d44:	2652ffc1 */ 	addiu	$s2,$s2,-63
/*  f139d48:	0601ff7a */ 	bgez	$s0,.L0f139b34
/*  f139d4c:	26730010 */ 	addiu	$s3,$s3,0x10
/*  f139d50:	8fbf008c */ 	lw	$ra,0x8c($sp)
/*  f139d54:	02801025 */ 	or	$v0,$s4,$zero
/*  f139d58:	8fb40078 */ 	lw	$s4,0x78($sp)
/*  f139d5c:	d7b40038 */ 	ldc1	$f20,0x38($sp)
/*  f139d60:	d7b60040 */ 	ldc1	$f22,0x40($sp)
/*  f139d64:	d7b80048 */ 	ldc1	$f24,0x48($sp)
/*  f139d68:	d7ba0050 */ 	ldc1	$f26,0x50($sp)
/*  f139d6c:	d7bc0058 */ 	ldc1	$f28,0x58($sp)
/*  f139d70:	d7be0060 */ 	ldc1	$f30,0x60($sp)
/*  f139d74:	8fb00068 */ 	lw	$s0,0x68($sp)
/*  f139d78:	8fb1006c */ 	lw	$s1,0x6c($sp)
/*  f139d7c:	8fb20070 */ 	lw	$s2,0x70($sp)
/*  f139d80:	8fb30074 */ 	lw	$s3,0x74($sp)
/*  f139d84:	8fb5007c */ 	lw	$s5,0x7c($sp)
/*  f139d88:	8fb60080 */ 	lw	$s6,0x80($sp)
/*  f139d8c:	8fb70084 */ 	lw	$s7,0x84($sp)
/*  f139d90:	8fbe0088 */ 	lw	$s8,0x88($sp)
/*  f139d94:	03e00008 */ 	jr	$ra
/*  f139d98:	27bd00d0 */ 	addiu	$sp,$sp,0xd0
);

GLOBAL_ASM(
glabel func0f139d9c
.late_rodata
glabel var7f1b586c
.word 0x3eae147b
glabel var7f1b5870
.word 0x3eae147b
.text
/*  f139d9c:	27bdffc0 */ 	addiu	$sp,$sp,-64
/*  f139da0:	c7ac0058 */ 	lwc1	$f12,0x58($sp)
/*  f139da4:	3c014000 */ 	lui	$at,0x4000
/*  f139da8:	44812000 */ 	mtc1	$at,$f4
/*  f139dac:	460c6000 */ 	add.s	$f0,$f12,$f12
/*  f139db0:	8fae0064 */ 	lw	$t6,0x64($sp)
/*  f139db4:	afbf0034 */ 	sw	$ra,0x34($sp)
/*  f139db8:	afa50044 */ 	sw	$a1,0x44($sp)
/*  f139dbc:	46002401 */ 	sub.s	$f16,$f4,$f0
/*  f139dc0:	afa60048 */ 	sw	$a2,0x48($sp)
/*  f139dc4:	afa7004c */ 	sw	$a3,0x4c($sp)
/*  f139dc8:	11c0000b */ 	beqz	$t6,.L0f139df8
/*  f139dcc:	46008386 */ 	mov.s	$f14,$f16
/*  f139dd0:	24010001 */ 	addiu	$at,$zero,0x1
/*  f139dd4:	11c10015 */ 	beq	$t6,$at,.L0f139e2c
/*  f139dd8:	24010002 */ 	addiu	$at,$zero,0x2
/*  f139ddc:	11c1001c */ 	beq	$t6,$at,.L0f139e50
/*  f139de0:	24010003 */ 	addiu	$at,$zero,0x3
/*  f139de4:	11c1002b */ 	beq	$t6,$at,.L0f139e94
/*  f139de8:	3c013f80 */ 	lui	$at,0x3f80
/*  f139dec:	44811000 */ 	mtc1	$at,$f2
/*  f139df0:	10000037 */ 	b	.L0f139ed0
/*  f139df4:	c7b2003c */ 	lwc1	$f18,0x3c($sp)
.L0f139df8:
/*  f139df8:	3c013f80 */ 	lui	$at,0x3f80
/*  f139dfc:	44811000 */ 	mtc1	$at,$f2
/*  f139e00:	3c014170 */ 	lui	$at,0x4170
/*  f139e04:	44813000 */ 	mtc1	$at,$f6
/*  f139e08:	3c014080 */ 	lui	$at,0x4080
/*  f139e0c:	44815000 */ 	mtc1	$at,$f10
/*  f139e10:	460c3202 */ 	mul.s	$f8,$f6,$f12
/*  f139e14:	00000000 */ 	nop
/*  f139e18:	460c5102 */ 	mul.s	$f4,$f10,$f12
/*  f139e1c:	46024480 */ 	add.s	$f18,$f8,$f2
/*  f139e20:	46022180 */ 	add.s	$f6,$f4,$f2
/*  f139e24:	1000002a */ 	b	.L0f139ed0
/*  f139e28:	e7a60038 */ 	swc1	$f6,0x38($sp)
.L0f139e2c:
/*  f139e2c:	3c013f80 */ 	lui	$at,0x3f80
/*  f139e30:	44811000 */ 	mtc1	$at,$f2
/*  f139e34:	3c014296 */ 	lui	$at,0x4296
/*  f139e38:	44814000 */ 	mtc1	$at,$f8
/*  f139e3c:	46020480 */ 	add.s	$f18,$f0,$f2
/*  f139e40:	460c4282 */ 	mul.s	$f10,$f8,$f12
/*  f139e44:	46025100 */ 	add.s	$f4,$f10,$f2
/*  f139e48:	10000021 */ 	b	.L0f139ed0
/*  f139e4c:	e7a40038 */ 	swc1	$f4,0x38($sp)
.L0f139e50:
/*  f139e50:	3c013f80 */ 	lui	$at,0x3f80
/*  f139e54:	44811000 */ 	mtc1	$at,$f2
/*  f139e58:	3c014170 */ 	lui	$at,0x4170
/*  f139e5c:	44813000 */ 	mtc1	$at,$f6
/*  f139e60:	3c017f1b */ 	lui	$at,%hi(var7f1b586c)
/*  f139e64:	c42a586c */ 	lwc1	$f10,%lo(var7f1b586c)($at)
/*  f139e68:	460c3202 */ 	mul.s	$f8,$f6,$f12
/*  f139e6c:	460a6101 */ 	sub.s	$f4,$f12,$f10
/*  f139e70:	46041001 */ 	sub.s	$f0,$f2,$f4
/*  f139e74:	46024480 */ 	add.s	$f18,$f8,$f2
/*  f139e78:	e7a00038 */ 	swc1	$f0,0x38($sp)
/*  f139e7c:	4600103c */ 	c.lt.s	$f2,$f0
/*  f139e80:	00000000 */ 	nop
/*  f139e84:	45020013 */ 	bc1fl	.L0f139ed4
/*  f139e88:	4610103c */ 	c.lt.s	$f2,$f16
/*  f139e8c:	10000010 */ 	b	.L0f139ed0
/*  f139e90:	e7a20038 */ 	swc1	$f2,0x38($sp)
.L0f139e94:
/*  f139e94:	3c013f80 */ 	lui	$at,0x3f80
/*  f139e98:	44811000 */ 	mtc1	$at,$f2
/*  f139e9c:	3c01425c */ 	lui	$at,0x425c
/*  f139ea0:	44813000 */ 	mtc1	$at,$f6
/*  f139ea4:	3c017f1b */ 	lui	$at,%hi(var7f1b5870)
/*  f139ea8:	c4245870 */ 	lwc1	$f4,%lo(var7f1b5870)($at)
/*  f139eac:	460c3202 */ 	mul.s	$f8,$f6,$f12
/*  f139eb0:	46046181 */ 	sub.s	$f6,$f12,$f4
/*  f139eb4:	46061481 */ 	sub.s	$f18,$f2,$f6
/*  f139eb8:	46024280 */ 	add.s	$f10,$f8,$f2
/*  f139ebc:	4612103c */ 	c.lt.s	$f2,$f18
/*  f139ec0:	e7aa0038 */ 	swc1	$f10,0x38($sp)
/*  f139ec4:	45020003 */ 	bc1fl	.L0f139ed4
/*  f139ec8:	4610103c */ 	c.lt.s	$f2,$f16
/*  f139ecc:	46001486 */ 	mov.s	$f18,$f2
.L0f139ed0:
/*  f139ed0:	4610103c */ 	c.lt.s	$f2,$f16
.L0f139ed4:
/*  f139ed4:	8faf0044 */ 	lw	$t7,0x44($sp)
/*  f139ed8:	45020003 */ 	bc1fl	.L0f139ee8
/*  f139edc:	448f4000 */ 	mtc1	$t7,$f8
/*  f139ee0:	46001386 */ 	mov.s	$f14,$f2
/*  f139ee4:	448f4000 */ 	mtc1	$t7,$f8
.L0f139ee8:
/*  f139ee8:	8fb80048 */ 	lw	$t8,0x48($sp)
/*  f139eec:	3c01437f */ 	lui	$at,0x437f
/*  f139ef0:	46804220 */ 	cvt.s.w	$f8,$f8
/*  f139ef4:	44813000 */ 	mtc1	$at,$f6
/*  f139ef8:	44985000 */ 	mtc1	$t8,$f10
/*  f139efc:	240b0001 */ 	addiu	$t3,$zero,0x1
/*  f139f00:	c7a40038 */ 	lwc1	$f4,0x38($sp)
/*  f139f04:	468052a0 */ 	cvt.s.w	$f10,$f10
/*  f139f08:	44054000 */ 	mfc1	$a1,$f8
/*  f139f0c:	460e3202 */ 	mul.s	$f8,$f6,$f14
/*  f139f10:	8fb9004c */ 	lw	$t9,0x4c($sp)
/*  f139f14:	8fa80050 */ 	lw	$t0,0x50($sp)
/*  f139f18:	8fa90054 */ 	lw	$t1,0x54($sp)
/*  f139f1c:	44065000 */ 	mfc1	$a2,$f10
/*  f139f20:	44079000 */ 	mfc1	$a3,$f18
/*  f139f24:	3c014f00 */ 	lui	$at,0x4f00
/*  f139f28:	444af800 */ 	cfc1	$t2,$31
/*  f139f2c:	44cbf800 */ 	ctc1	$t3,$31
/*  f139f30:	e7a40010 */ 	swc1	$f4,0x10($sp)
/*  f139f34:	afb90014 */ 	sw	$t9,0x14($sp)
/*  f139f38:	460042a4 */ 	cvt.w.s	$f10,$f8
/*  f139f3c:	afa80018 */ 	sw	$t0,0x18($sp)
/*  f139f40:	afa9001c */ 	sw	$t1,0x1c($sp)
/*  f139f44:	444bf800 */ 	cfc1	$t3,$31
/*  f139f48:	00000000 */ 	nop
/*  f139f4c:	316b0078 */ 	andi	$t3,$t3,0x78
/*  f139f50:	51600013 */ 	beqzl	$t3,.L0f139fa0
/*  f139f54:	440b5000 */ 	mfc1	$t3,$f10
/*  f139f58:	44815000 */ 	mtc1	$at,$f10
/*  f139f5c:	240b0001 */ 	addiu	$t3,$zero,0x1
/*  f139f60:	460a4281 */ 	sub.s	$f10,$f8,$f10
/*  f139f64:	44cbf800 */ 	ctc1	$t3,$31
/*  f139f68:	00000000 */ 	nop
/*  f139f6c:	460052a4 */ 	cvt.w.s	$f10,$f10
/*  f139f70:	444bf800 */ 	cfc1	$t3,$31
/*  f139f74:	00000000 */ 	nop
/*  f139f78:	316b0078 */ 	andi	$t3,$t3,0x78
/*  f139f7c:	15600005 */ 	bnez	$t3,.L0f139f94
/*  f139f80:	00000000 */ 	nop
/*  f139f84:	440b5000 */ 	mfc1	$t3,$f10
/*  f139f88:	3c018000 */ 	lui	$at,0x8000
/*  f139f8c:	10000007 */ 	b	.L0f139fac
/*  f139f90:	01615825 */ 	or	$t3,$t3,$at
.L0f139f94:
/*  f139f94:	10000005 */ 	b	.L0f139fac
/*  f139f98:	240bffff */ 	addiu	$t3,$zero,-1
/*  f139f9c:	440b5000 */ 	mfc1	$t3,$f10
.L0f139fa0:
/*  f139fa0:	00000000 */ 	nop
/*  f139fa4:	0560fffb */ 	bltz	$t3,.L0f139f94
/*  f139fa8:	00000000 */ 	nop
.L0f139fac:
/*  f139fac:	8fad005c */ 	lw	$t5,0x5c($sp)
/*  f139fb0:	8fae0060 */ 	lw	$t6,0x60($sp)
/*  f139fb4:	2401ff00 */ 	addiu	$at,$zero,-256
/*  f139fb8:	01616025 */ 	or	$t4,$t3,$at
/*  f139fbc:	44caf800 */ 	ctc1	$t2,$31
/*  f139fc0:	afac0020 */ 	sw	$t4,0x20($sp)
/*  f139fc4:	afad0024 */ 	sw	$t5,0x24($sp)
/*  f139fc8:	0fc554b5 */ 	jal	func0f1552d4
/*  f139fcc:	afae0028 */ 	sw	$t6,0x28($sp)
/*  f139fd0:	8fbf0034 */ 	lw	$ra,0x34($sp)
/*  f139fd4:	27bd0040 */ 	addiu	$sp,$sp,0x40
/*  f139fd8:	03e00008 */ 	jr	$ra
/*  f139fdc:	00000000 */ 	nop
);

GLOBAL_ASM(
glabel func0f139fe0
/*  f139fe0:	27bdffa8 */ 	addiu	$sp,$sp,-88
/*  f139fe4:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f139fe8:	afbf002c */ 	sw	$ra,0x2c($sp)
/*  f139fec:	afb40028 */ 	sw	$s4,0x28($sp)
/*  f139ff0:	afb30024 */ 	sw	$s3,0x24($sp)
/*  f139ff4:	afb20020 */ 	sw	$s2,0x20($sp)
/*  f139ff8:	afb1001c */ 	sw	$s1,0x1c($sp)
/*  f139ffc:	00008025 */ 	or	$s0,$zero,$zero
/*  f13a000:	27a30048 */ 	addiu	$v1,$sp,0x48
.L0f13a004:
/*  f13a004:	26020001 */ 	addiu	$v0,$s0,0x1
/*  f13a008:	28410010 */ 	slti	$at,$v0,0x10
/*  f13a00c:	00408025 */ 	or	$s0,$v0,$zero
/*  f13a010:	24630001 */ 	addiu	$v1,$v1,0x1
/*  f13a014:	1420fffb */ 	bnez	$at,.L0f13a004
/*  f13a018:	a062ffff */ 	sb	$v0,-0x1($v1)
/*  f13a01c:	3c13800a */ 	lui	$s3,%hi(var800a4170)
/*  f13a020:	26734170 */ 	addiu	$s3,$s3,%lo(var800a4170)
/*  f13a024:	00008025 */ 	or	$s0,$zero,$zero
/*  f13a028:	00008825 */ 	or	$s1,$zero,$zero
/*  f13a02c:	27b40048 */ 	addiu	$s4,$sp,0x48
/*  f13a030:	24120010 */ 	addiu	$s2,$zero,0x10
.L0f13a034:
/*  f13a034:	0c004b70 */ 	jal	random
/*  f13a038:	00000000 */ 	nop
/*  f13a03c:	02502023 */ 	subu	$a0,$s2,$s0
/*  f13a040:	0044001b */ 	divu	$zero,$v0,$a0
/*  f13a044:	8e780000 */ 	lw	$t8,0x0($s3)
/*  f13a048:	00002810 */ 	mfhi	$a1
/*  f13a04c:	02857021 */ 	addu	$t6,$s4,$a1
/*  f13a050:	91cf0000 */ 	lbu	$t7,0x0($t6)
/*  f13a054:	14800002 */ 	bnez	$a0,.L0f13a060
/*  f13a058:	00000000 */ 	nop
/*  f13a05c:	0007000d */ 	break	0x7
.L0f13a060:
/*  f13a060:	00a4082a */ 	slt	$at,$a1,$a0
/*  f13a064:	0311c821 */ 	addu	$t9,$t8,$s1
/*  f13a068:	00a01825 */ 	or	$v1,$a1,$zero
/*  f13a06c:	10200007 */ 	beqz	$at,.L0f13a08c
/*  f13a070:	af2f4158 */ 	sw	$t7,0x4158($t9)
/*  f13a074:	02851021 */ 	addu	$v0,$s4,$a1
.L0f13a078:
/*  f13a078:	90480001 */ 	lbu	$t0,0x1($v0)
/*  f13a07c:	24630001 */ 	addiu	$v1,$v1,0x1
/*  f13a080:	24420001 */ 	addiu	$v0,$v0,0x1
/*  f13a084:	1464fffc */ 	bne	$v1,$a0,.L0f13a078
/*  f13a088:	a048ffff */ 	sb	$t0,-0x1($v0)
.L0f13a08c:
/*  f13a08c:	26100001 */ 	addiu	$s0,$s0,0x1
/*  f13a090:	1612ffe8 */ 	bne	$s0,$s2,.L0f13a034
/*  f13a094:	26310004 */ 	addiu	$s1,$s1,0x4
/*  f13a098:	8e690000 */ 	lw	$t1,0x0($s3)
/*  f13a09c:	240a00f0 */ 	addiu	$t2,$zero,0xf0
/*  f13a0a0:	240c0001 */ 	addiu	$t4,$zero,0x1
/*  f13a0a4:	ad204198 */ 	sw	$zero,0x4198($t1)
/*  f13a0a8:	8e6b0000 */ 	lw	$t3,0x0($s3)
/*  f13a0ac:	44802000 */ 	mtc1	$zero,$f4
/*  f13a0b0:	a16a41a8 */ 	sb	$t2,0x41a8($t3)
/*  f13a0b4:	8e6d0000 */ 	lw	$t5,0x0($s3)
/*  f13a0b8:	a1ac419c */ 	sb	$t4,0x419c($t5)
/*  f13a0bc:	8e6e0000 */ 	lw	$t6,0x0($s3)
/*  f13a0c0:	e5c441a0 */ 	swc1	$f4,0x41a0($t6)
/*  f13a0c4:	8fbf002c */ 	lw	$ra,0x2c($sp)
/*  f13a0c8:	8fb40028 */ 	lw	$s4,0x28($sp)
/*  f13a0cc:	8fb30024 */ 	lw	$s3,0x24($sp)
/*  f13a0d0:	8fb20020 */ 	lw	$s2,0x20($sp)
/*  f13a0d4:	8fb1001c */ 	lw	$s1,0x1c($sp)
/*  f13a0d8:	8fb00018 */ 	lw	$s0,0x18($sp)
/*  f13a0dc:	03e00008 */ 	jr	$ra
/*  f13a0e0:	27bd0058 */ 	addiu	$sp,$sp,0x58
);

GLOBAL_ASM(
glabel func0f13a0e4
/*  f13a0e4:	3c03800a */ 	lui	$v1,%hi(var800a4170)
/*  f13a0e8:	8c634170 */ 	lw	$v1,%lo(var800a4170)($v1)
/*  f13a0ec:	00045080 */ 	sll	$t2,$a0,0x2
/*  f13a0f0:	01445023 */ 	subu	$t2,$t2,$a0
/*  f13a0f4:	8c654198 */ 	lw	$a1,0x4198($v1)
/*  f13a0f8:	000a5040 */ 	sll	$t2,$t2,0x1
/*  f13a0fc:	3c0c8008 */ 	lui	$t4,%hi(credits)
/*  f13a100:	18a00010 */ 	blez	$a1,.L0f13a144
/*  f13a104:	28a10011 */ 	slti	$at,$a1,0x11
/*  f13a108:	5020000f */ 	beqzl	$at,.L0f13a148
/*  f13a10c:	00054880 */ 	sll	$t1,$a1,0x2
/*  f13a110:	18800003 */ 	blez	$a0,.L0f13a120
/*  f13a114:	00057080 */ 	sll	$t6,$a1,0x2
/*  f13a118:	03e00008 */ 	jr	$ra
/*  f13a11c:	00001025 */ 	or	$v0,$zero,$zero
.L0f13a120:
/*  f13a120:	006e7821 */ 	addu	$t7,$v1,$t6
/*  f13a124:	8df84154 */ 	lw	$t8,0x4154($t7)
/*  f13a128:	3c088008 */ 	lui	$t0,%hi(credits)
/*  f13a12c:	2508f470 */ 	addiu	$t0,$t0,%lo(credits)
/*  f13a130:	0018c880 */ 	sll	$t9,$t8,0x2
/*  f13a134:	0338c823 */ 	subu	$t9,$t9,$t8
/*  f13a138:	0019c840 */ 	sll	$t9,$t9,0x1
/*  f13a13c:	03e00008 */ 	jr	$ra
/*  f13a140:	03281021 */ 	addu	$v0,$t9,$t0
.L0f13a144:
/*  f13a144:	00054880 */ 	sll	$t1,$a1,0x2
.L0f13a148:
/*  f13a148:	01254823 */ 	subu	$t1,$t1,$a1
/*  f13a14c:	00094840 */ 	sll	$t1,$t1,0x1
/*  f13a150:	012a5821 */ 	addu	$t3,$t1,$t2
/*  f13a154:	258cf470 */ 	addiu	$t4,$t4,%lo(credits)
/*  f13a158:	016c1021 */ 	addu	$v0,$t3,$t4
/*  f13a15c:	03e00008 */ 	jr	$ra
/*  f13a160:	00000000 */ 	nop
);

GLOBAL_ASM(
glabel func0f13a164
.late_rodata
glabel var7f1b5874
.word 0x3e116873
.text
/*  f13a164:	27bdff98 */ 	addiu	$sp,$sp,-104
/*  f13a168:	afbf0034 */ 	sw	$ra,0x34($sp)
/*  f13a16c:	afb50030 */ 	sw	$s5,0x30($sp)
/*  f13a170:	afb4002c */ 	sw	$s4,0x2c($sp)
/*  f13a174:	afb30028 */ 	sw	$s3,0x28($sp)
/*  f13a178:	afb20024 */ 	sw	$s2,0x24($sp)
/*  f13a17c:	afb10020 */ 	sw	$s1,0x20($sp)
/*  f13a180:	afb0001c */ 	sw	$s0,0x1c($sp)
/*  f13a184:	f7b40010 */ 	sdc1	$f20,0x10($sp)
/*  f13a188:	0fc4e839 */ 	jal	func0f13a0e4
/*  f13a18c:	00002025 */ 	or	$a0,$zero,$zero
/*  f13a190:	3c0e8008 */ 	lui	$t6,%hi(var8007f6c4)
/*  f13a194:	25cef6c4 */ 	addiu	$t6,$t6,%lo(var8007f6c4)
/*  f13a198:	8dc10000 */ 	lw	$at,0x0($t6)
/*  f13a19c:	27a40050 */ 	addiu	$a0,$sp,0x50
/*  f13a1a0:	3c11800a */ 	lui	$s1,%hi(var800a4170)
/*  f13a1a4:	ac810000 */ 	sw	$at,0x0($a0)
/*  f13a1a8:	8dd90004 */ 	lw	$t9,0x4($t6)
/*  f13a1ac:	26314170 */ 	addiu	$s1,$s1,%lo(var800a4170)
/*  f13a1b0:	8e230000 */ 	lw	$v1,0x0($s1)
/*  f13a1b4:	ac990004 */ 	sw	$t9,0x4($a0)
/*  f13a1b8:	8dc10008 */ 	lw	$at,0x8($t6)
/*  f13a1bc:	ac810008 */ 	sw	$at,0x8($a0)
/*  f13a1c0:	8dd9000c */ 	lw	$t9,0xc($t6)
/*  f13a1c4:	3c017f1b */ 	lui	$at,%hi(var7f1b5874)
/*  f13a1c8:	ac99000c */ 	sw	$t9,0xc($a0)
/*  f13a1cc:	906d419c */ 	lbu	$t5,0x419c($v1)
/*  f13a1d0:	94480000 */ 	lhu	$t0,0x0($v0)
/*  f13a1d4:	c4245874 */ 	lwc1	$f4,%lo(var7f1b5874)($at)
/*  f13a1d8:	000dc040 */ 	sll	$t8,$t5,0x1
/*  f13a1dc:	270fffff */ 	addiu	$t7,$t8,-1
/*  f13a1e0:	448f3000 */ 	mtc1	$t7,$f6
/*  f13a1e4:	00084cc0 */ 	sll	$t1,$t0,0x13
/*  f13a1e8:	00095782 */ 	srl	$t2,$t1,0x1e
/*  f13a1ec:	46803220 */ 	cvt.s.w	$f8,$f6
/*  f13a1f0:	3c014000 */ 	lui	$at,0x4000
/*  f13a1f4:	44818000 */ 	mtc1	$at,$f16
/*  f13a1f8:	000a5880 */ 	sll	$t3,$t2,0x2
/*  f13a1fc:	008b6021 */ 	addu	$t4,$a0,$t3
/*  f13a200:	3c013f80 */ 	lui	$at,0x3f80
/*  f13a204:	c5800000 */ 	lwc1	$f0,0x0($t4)
/*  f13a208:	44813000 */ 	mtc1	$at,$f6
/*  f13a20c:	46082282 */ 	mul.s	$f10,$f4,$f8
/*  f13a210:	3c01800a */ 	lui	$at,%hi(g_Vars+0x48)
/*  f13a214:	46060100 */ 	add.s	$f4,$f0,$f6
/*  f13a218:	46100480 */ 	add.s	$f18,$f0,$f16
/*  f13a21c:	e46441a4 */ 	swc1	$f4,0x41a4($v1)
/*  f13a220:	c428a008 */ 	lwc1	$f8,%lo(g_Vars+0x48)($at)
/*  f13a224:	3c014370 */ 	lui	$at,0x4370
/*  f13a228:	44818000 */ 	mtc1	$at,$f16
/*  f13a22c:	8e230000 */ 	lw	$v1,0x0($s1)
/*  f13a230:	460a9080 */ 	add.s	$f2,$f18,$f10
/*  f13a234:	c47241a0 */ 	lwc1	$f18,0x41a0($v1)
/*  f13a238:	46104303 */ 	div.s	$f12,$f8,$f16
/*  f13a23c:	460c9280 */ 	add.s	$f10,$f18,$f12
/*  f13a240:	e46a41a0 */ 	swc1	$f10,0x41a0($v1)
/*  f13a244:	8e230000 */ 	lw	$v1,0x0($s1)
/*  f13a248:	c46641a0 */ 	lwc1	$f6,0x41a0($v1)
/*  f13a24c:	4606103c */ 	c.lt.s	$f2,$f6
/*  f13a250:	00000000 */ 	nop
/*  f13a254:	4502005c */ 	bc1fl	.L0f13a3c8
/*  f13a258:	8fbf0034 */ 	lw	$ra,0x34($sp)
/*  f13a25c:	4480a000 */ 	mtc1	$zero,$f20
/*  f13a260:	24120001 */ 	addiu	$s2,$zero,0x1
/*  f13a264:	24140001 */ 	addiu	$s4,$zero,0x1
/*  f13a268:	e47441a0 */ 	swc1	$f20,0x41a0($v1)
/*  f13a26c:	8e230000 */ 	lw	$v1,0x0($s1)
/*  f13a270:	24130014 */ 	addiu	$s3,$zero,0x14
/*  f13a274:	8c6e4198 */ 	lw	$t6,0x4198($v1)
/*  f13a278:	9079419c */ 	lbu	$t9,0x419c($v1)
/*  f13a27c:	01d94021 */ 	addu	$t0,$t6,$t9
/*  f13a280:	ac684198 */ 	sw	$t0,0x4198($v1)
/*  f13a284:	8e290000 */ 	lw	$t1,0x0($s1)
/*  f13a288:	a132419c */ 	sb	$s2,0x419c($t1)
/*  f13a28c:	8e2a0000 */ 	lw	$t2,0x0($s1)
/*  f13a290:	9142419c */ 	lbu	$v0,0x419c($t2)
.L0f13a294:
/*  f13a294:	0fc4e839 */ 	jal	func0f13a0e4
/*  f13a298:	2444ffff */ 	addiu	$a0,$v0,-1
/*  f13a29c:	844c0000 */ 	lh	$t4,0x0($v0)
/*  f13a2a0:	00408025 */ 	or	$s0,$v0,$zero
/*  f13a2a4:	05810005 */ 	bgez	$t4,.L0f13a2bc
/*  f13a2a8:	00000000 */ 	nop
/*  f13a2ac:	8e230000 */ 	lw	$v1,0x0($s1)
/*  f13a2b0:	906d419c */ 	lbu	$t5,0x419c($v1)
/*  f13a2b4:	25b80001 */ 	addiu	$t8,$t5,0x1
/*  f13a2b8:	a078419c */ 	sb	$t8,0x419c($v1)
.L0f13a2bc:
/*  f13a2bc:	10400017 */ 	beqz	$v0,.L0f13a31c
/*  f13a2c0:	00000000 */ 	nop
/*  f13a2c4:	904f0001 */ 	lbu	$t7,0x1($v0)
/*  f13a2c8:	166f0014 */ 	bne	$s3,$t7,.L0f13a31c
/*  f13a2cc:	00000000 */ 	nop
/*  f13a2d0:	8e230000 */ 	lw	$v1,0x0($s1)
/*  f13a2d4:	906e419c */ 	lbu	$t6,0x419c($v1)
/*  f13a2d8:	168e0010 */ 	bne	$s4,$t6,.L0f13a31c
/*  f13a2dc:	00000000 */ 	nop
/*  f13a2e0:	ac604198 */ 	sw	$zero,0x4198($v1)
/*  f13a2e4:	8e390000 */ 	lw	$t9,0x0($s1)
/*  f13a2e8:	00008025 */ 	or	$s0,$zero,$zero
/*  f13a2ec:	a332419c */ 	sb	$s2,0x419c($t9)
/*  f13a2f0:	8e280000 */ 	lw	$t0,0x0($s1)
/*  f13a2f4:	e51441a0 */ 	swc1	$f20,0x41a0($t0)
/*  f13a2f8:	8e290000 */ 	lw	$t1,0x0($s1)
/*  f13a2fc:	a12041f4 */ 	sb	$zero,0x41f4($t1)
/*  f13a300:	8e2a0000 */ 	lw	$t2,0x0($s1)
/*  f13a304:	ad404204 */ 	sw	$zero,0x4204($t2)
/*  f13a308:	8e2b0000 */ 	lw	$t3,0x0($s1)
/*  f13a30c:	0fc5b6cf */ 	jal	func0f16db3c
/*  f13a310:	a1604208 */ 	sb	$zero,0x4208($t3)
/*  f13a314:	0fc5b52e */ 	jal	musicStartPrimary
/*  f13a318:	4600a306 */ 	mov.s	$f12,$f20
.L0f13a31c:
/*  f13a31c:	5200000a */ 	beqzl	$s0,.L0f13a348
/*  f13a320:	00008025 */ 	or	$s0,$zero,$zero
/*  f13a324:	860d0000 */ 	lh	$t5,0x0($s0)
/*  f13a328:	05a30007 */ 	bgezl	$t5,.L0f13a348
/*  f13a32c:	00008025 */ 	or	$s0,$zero,$zero
/*  f13a330:	8e380000 */ 	lw	$t8,0x0($s1)
/*  f13a334:	9302419c */ 	lbu	$v0,0x419c($t8)
/*  f13a338:	28410004 */ 	slti	$at,$v0,0x4
/*  f13a33c:	1420ffd5 */ 	bnez	$at,.L0f13a294
/*  f13a340:	00000000 */ 	nop
/*  f13a344:	00008025 */ 	or	$s0,$zero,$zero
.L0f13a348:
/*  f13a348:	24150008 */ 	addiu	$s5,$zero,0x8
/*  f13a34c:	24140003 */ 	addiu	$s4,$zero,0x3
.L0f13a350:
/*  f13a350:	0c004b70 */ 	jal	random
/*  f13a354:	00000000 */ 	nop
/*  f13a358:	0c004b70 */ 	jal	random
/*  f13a35c:	00409025 */ 	or	$s2,$v0,$zero
/*  f13a360:	0c004b70 */ 	jal	random
/*  f13a364:	00409825 */ 	or	$s3,$v0,$zero
/*  f13a368:	0274001b */ 	divu	$zero,$s3,$s4
/*  f13a36c:	0000c810 */ 	mfhi	$t9
/*  f13a370:	8e2c0000 */ 	lw	$t4,0x0($s1)
/*  f13a374:	304f000f */ 	andi	$t7,$v0,0xf
/*  f13a378:	0254001b */ 	divu	$zero,$s2,$s4
/*  f13a37c:	00004810 */ 	mfhi	$t1
/*  f13a380:	000f7100 */ 	sll	$t6,$t7,0x4
/*  f13a384:	01d94025 */ 	or	$t0,$t6,$t9
/*  f13a388:	00095080 */ 	sll	$t2,$t1,0x2
/*  f13a38c:	01906821 */ 	addu	$t5,$t4,$s0
/*  f13a390:	26100001 */ 	addiu	$s0,$s0,0x1
/*  f13a394:	010a5825 */ 	or	$t3,$t0,$t2
/*  f13a398:	16800002 */ 	bnez	$s4,.L0f13a3a4
/*  f13a39c:	00000000 */ 	nop
/*  f13a3a0:	0007000d */ 	break	0x7
.L0f13a3a4:
/*  f13a3a4:	a1ab41a8 */ 	sb	$t3,0x41a8($t5)
/*  f13a3a8:	16800002 */ 	bnez	$s4,.L0f13a3b4
/*  f13a3ac:	00000000 */ 	nop
/*  f13a3b0:	0007000d */ 	break	0x7
.L0f13a3b4:
/*  f13a3b4:	1615ffe6 */ 	bne	$s0,$s5,.L0f13a350
/*  f13a3b8:	00000000 */ 	nop
/*  f13a3bc:	0fc4e0e3 */ 	jal	func0f13838c
/*  f13a3c0:	2404ffff */ 	addiu	$a0,$zero,-1
/*  f13a3c4:	8fbf0034 */ 	lw	$ra,0x34($sp)
.L0f13a3c8:
/*  f13a3c8:	d7b40010 */ 	ldc1	$f20,0x10($sp)
/*  f13a3cc:	8fb0001c */ 	lw	$s0,0x1c($sp)
/*  f13a3d0:	8fb10020 */ 	lw	$s1,0x20($sp)
/*  f13a3d4:	8fb20024 */ 	lw	$s2,0x24($sp)
/*  f13a3d8:	8fb30028 */ 	lw	$s3,0x28($sp)
/*  f13a3dc:	8fb4002c */ 	lw	$s4,0x2c($sp)
/*  f13a3e0:	8fb50030 */ 	lw	$s5,0x30($sp)
/*  f13a3e4:	03e00008 */ 	jr	$ra
/*  f13a3e8:	27bd0068 */ 	addiu	$sp,$sp,0x68
);

GLOBAL_ASM(
glabel func0f13a3ec
.late_rodata
glabel var7f1b5878
.word func0f13a3ec+0x158 # f13a544
glabel var7f1b587c
.word func0f13a3ec+0x158 # f13a544
glabel var7f1b5880
.word func0f13a3ec+0x158 # f13a544
glabel var7f1b5884
.word func0f13a3ec+0x174 # f13a560
glabel var7f1b5888
.word func0f13a3ec+0x190 # f13a57c
glabel var7f1b588c
.word func0f13a3ec+0x174 # f13a560
glabel var7f1b5890
.word func0f13a3ec+0x158 # f13a544
glabel var7f1b5894
.word func0f13a3ec+0x158 # f13a544
glabel var7f1b5898
.word func0f13a3ec+0x174 # f13a560
glabel var7f1b589c
.word func0f13a3ec+0x158 # f13a544
glabel var7f1b58a0
.word func0f13a3ec+0x174 # f13a560
glabel var7f1b58a4
.word func0f13a3ec+0x2c8 # f13a6b4
glabel var7f1b58a8
.word func0f13a3ec+0x2c8 # f13a6b4
glabel var7f1b58ac
.word func0f13a3ec+0x2c8 # f13a6b4
glabel var7f1b58b0
.word func0f13a3ec+0x2c8 # f13a6b4
glabel var7f1b58b4
.word func0f13a3ec+0x2c8 # f13a6b4
glabel var7f1b58b8
.word func0f13a3ec+0x2c8 # f13a6b4
glabel var7f1b58bc
.word func0f13a3ec+0x300 # f13a6ec
glabel var7f1b58c0
.word func0f13a3ec+0x2ec # f13a6d8
glabel var7f1b58c4
.word func0f13a3ec+0x2ec # f13a6d8
glabel var7f1b58c8
.word func0f13a3ec+0x2c8 # f13a6b4
glabel var7f1b58cc
.word func0f13a3ec+0x300 # f13a6ec
glabel var7f1b58d0
.word func0f13a3ec+0x340 # f13a72c
glabel var7f1b58d4
.word func0f13a3ec+0x35c # f13a748
glabel var7f1b58d8
.word func0f13a3ec+0x35c # f13a748
glabel var7f1b58dc
.word func0f13a3ec+0x35c # f13a748
glabel var7f1b58e0
.word func0f13a3ec+0x35c # f13a748
glabel var7f1b58e4
.word func0f13a3ec+0x35c # f13a748
glabel var7f1b58e8
.word func0f13a3ec+0x394 # f13a780
glabel var7f1b58ec
.word func0f13a3ec+0x380 # f13a76c
glabel var7f1b58f0
.word func0f13a3ec+0x380 # f13a76c
glabel var7f1b58f4
.word func0f13a3ec+0x35c # f13a748
glabel var7f1b58f8
.word func0f13a3ec+0x380 # f13a76c
glabel var7f1b58fc
.word 0x3e116873
glabel var7f1b5900
.word 0x3e116873
glabel var7f1b5904
.word func0f13a3ec+0x8b8 # f13aca4
glabel var7f1b5908
.word func0f13a3ec+0x8bc # f13aca8
glabel var7f1b590c
.word func0f13a3ec+0x8bc # f13aca8
glabel var7f1b5910
.word func0f13a3ec+0x8bc # f13aca8
glabel var7f1b5914
.word func0f13a3ec+0x8bc # f13aca8
glabel var7f1b5918
.word func0f13a3ec+0x8a8 # f13ac94
glabel var7f1b591c
.word func0f13a3ec+0x8b0 # f13ac9c
glabel var7f1b5920
.word func0f13a3ec+0x8b0 # f13ac9c
glabel var7f1b5924
.word func0f13a3ec+0x8bc # f13aca8
glabel var7f1b5928
.word func0f13a3ec+0x8b0 # f13ac9c
glabel var7f1b592c
.word 0x3d4ccccd
.text
/*  f13a3ec:	27bdfe18 */ 	addiu	$sp,$sp,-488
/*  f13a3f0:	3c0f800a */ 	lui	$t7,%hi(var800a4170)
/*  f13a3f4:	8def4170 */ 	lw	$t7,%lo(var800a4170)($t7)
/*  f13a3f8:	240effff */ 	addiu	$t6,$zero,-1
/*  f13a3fc:	afbf006c */ 	sw	$ra,0x6c($sp)
/*  f13a400:	afbe0068 */ 	sw	$s8,0x68($sp)
/*  f13a404:	afb70064 */ 	sw	$s7,0x64($sp)
/*  f13a408:	afb60060 */ 	sw	$s6,0x60($sp)
/*  f13a40c:	afb5005c */ 	sw	$s5,0x5c($sp)
/*  f13a410:	afb40058 */ 	sw	$s4,0x58($sp)
/*  f13a414:	afb30054 */ 	sw	$s3,0x54($sp)
/*  f13a418:	afb20050 */ 	sw	$s2,0x50($sp)
/*  f13a41c:	afb1004c */ 	sw	$s1,0x4c($sp)
/*  f13a420:	afb00048 */ 	sw	$s0,0x48($sp)
/*  f13a424:	f7b80040 */ 	sdc1	$f24,0x40($sp)
/*  f13a428:	f7b60038 */ 	sdc1	$f22,0x38($sp)
/*  f13a42c:	f7b40030 */ 	sdc1	$f20,0x30($sp)
/*  f13a430:	afa401e8 */ 	sw	$a0,0x1e8($sp)
/*  f13a434:	afae00e8 */ 	sw	$t6,0xe8($sp)
/*  f13a438:	91f8419c */ 	lbu	$t8,0x419c($t7)
/*  f13a43c:	0000f025 */ 	or	$s8,$zero,$zero
/*  f13a440:	0000a825 */ 	or	$s5,$zero,$zero
/*  f13a444:	1b0000e3 */ 	blez	$t8,.L0f13a7d4
/*  f13a448:	27b601d4 */ 	addiu	$s6,$sp,0x1d4
/*  f13a44c:	3c014120 */ 	lui	$at,0x4120
/*  f13a450:	4481a000 */ 	mtc1	$at,$f20
/*  f13a454:	afa000a8 */ 	sw	$zero,0xa8($sp)
/*  f13a458:	8fb900a8 */ 	lw	$t9,0xa8($sp)
.L0f13a45c:
/*  f13a45c:	02a02025 */ 	or	$a0,$s5,$zero
/*  f13a460:	0fc4e839 */ 	jal	func0f13a0e4
/*  f13a464:	afb900e4 */ 	sw	$t9,0xe4($sp)
/*  f13a468:	1440000d */ 	bnez	$v0,.L0f13a4a0
/*  f13a46c:	aec20000 */ 	sw	$v0,0x0($s6)
/*  f13a470:	3c03800a */ 	lui	$v1,%hi(var800a4170)
/*  f13a474:	24634170 */ 	addiu	$v1,$v1,%lo(var800a4170)
/*  f13a478:	8c6a0000 */ 	lw	$t2,0x0($v1)
/*  f13a47c:	240b0001 */ 	addiu	$t3,$zero,0x1
/*  f13a480:	4480c000 */ 	mtc1	$zero,$f24
/*  f13a484:	ad404198 */ 	sw	$zero,0x4198($t2)
/*  f13a488:	8c6c0000 */ 	lw	$t4,0x0($v1)
/*  f13a48c:	a18b419c */ 	sb	$t3,0x419c($t4)
/*  f13a490:	8c6d0000 */ 	lw	$t5,0x0($v1)
/*  f13a494:	e5b841a0 */ 	swc1	$f24,0x41a0($t5)
/*  f13a498:	1000024b */ 	b	.L0f13adc8
/*  f13a49c:	8fa201e8 */ 	lw	$v0,0x1e8($sp)
.L0f13a4a0:
/*  f13a4a0:	8fa200a8 */ 	lw	$v0,0xa8($sp)
/*  f13a4a4:	8ece0000 */ 	lw	$t6,0x0($s6)
/*  f13a4a8:	27b80194 */ 	addiu	$t8,$sp,0x194
/*  f13a4ac:	00027880 */ 	sll	$t7,$v0,0x2
/*  f13a4b0:	27b90174 */ 	addiu	$t9,$sp,0x174
/*  f13a4b4:	27ab0110 */ 	addiu	$t3,$sp,0x110
/*  f13a4b8:	95c40002 */ 	lhu	$a0,0x2($t6)
/*  f13a4bc:	27ae00f0 */ 	addiu	$t6,$sp,0xf0
/*  f13a4c0:	01eb9821 */ 	addu	$s3,$t7,$t3
/*  f13a4c4:	01f98821 */ 	addu	$s1,$t7,$t9
/*  f13a4c8:	01f88021 */ 	addu	$s0,$t7,$t8
/*  f13a4cc:	27aa0150 */ 	addiu	$t2,$sp,0x150
/*  f13a4d0:	27ac0130 */ 	addiu	$t4,$sp,0x130
/*  f13a4d4:	01ec6821 */ 	addu	$t5,$t7,$t4
/*  f13a4d8:	01ea9021 */ 	addu	$s2,$t7,$t2
/*  f13a4dc:	01eeb821 */ 	addu	$s7,$t7,$t6
/*  f13a4e0:	01e01025 */ 	or	$v0,$t7,$zero
/*  f13a4e4:	26ef0004 */ 	addiu	$t7,$s7,0x4
/*  f13a4e8:	26780004 */ 	addiu	$t8,$s3,0x4
/*  f13a4ec:	27b901b4 */ 	addiu	$t9,$sp,0x1b4
/*  f13a4f0:	0059a021 */ 	addu	$s4,$v0,$t9
/*  f13a4f4:	afb80080 */ 	sw	$t8,0x80($sp)
/*  f13a4f8:	afaf0084 */ 	sw	$t7,0x84($sp)
/*  f13a4fc:	0fc5b9f1 */ 	jal	langGet
/*  f13a500:	afad008c */ 	sw	$t5,0x8c($sp)
/*  f13a504:	8eca0000 */ 	lw	$t2,0x0($s6)
/*  f13a508:	ae820000 */ 	sw	$v0,0x0($s4)
/*  f13a50c:	0fc5b9f1 */ 	jal	langGet
/*  f13a510:	95440004 */ 	lhu	$a0,0x4($t2)
/*  f13a514:	8ec30000 */ 	lw	$v1,0x0($s6)
/*  f13a518:	ae820004 */ 	sw	$v0,0x4($s4)
/*  f13a51c:	906b0001 */ 	lbu	$t3,0x1($v1)
/*  f13a520:	256cffff */ 	addiu	$t4,$t3,-1
/*  f13a524:	2d81000b */ 	sltiu	$at,$t4,0xb
/*  f13a528:	10200014 */ 	beqz	$at,.L0f13a57c
/*  f13a52c:	000c6080 */ 	sll	$t4,$t4,0x2
/*  f13a530:	3c017f1b */ 	lui	$at,%hi(var7f1b5878)
/*  f13a534:	002c0821 */ 	addu	$at,$at,$t4
/*  f13a538:	8c2c5878 */ 	lw	$t4,%lo(var7f1b5878)($at)
/*  f13a53c:	01800008 */ 	jr	$t4
/*  f13a540:	00000000 */ 	nop
/*  f13a544:	3c0d8008 */ 	lui	$t5,%hi(var8007fb20)
/*  f13a548:	8dadfb20 */ 	lw	$t5,%lo(var8007fb20)($t5)
/*  f13a54c:	3c0e8008 */ 	lui	$t6,%hi(var8007fb1c)
/*  f13a550:	ae0d0000 */ 	sw	$t5,0x0($s0)
/*  f13a554:	8dcefb1c */ 	lw	$t6,%lo(var8007fb1c)($t6)
/*  f13a558:	1000000e */ 	b	.L0f13a594
/*  f13a55c:	ae2e0000 */ 	sw	$t6,0x0($s1)
/*  f13a560:	3c0f8008 */ 	lui	$t7,%hi(var8007fb18)
/*  f13a564:	8deffb18 */ 	lw	$t7,%lo(var8007fb18)($t7)
/*  f13a568:	3c188008 */ 	lui	$t8,%hi(var8007fb14)
/*  f13a56c:	ae0f0000 */ 	sw	$t7,0x0($s0)
/*  f13a570:	8f18fb14 */ 	lw	$t8,%lo(var8007fb14)($t8)
/*  f13a574:	10000007 */ 	b	.L0f13a594
/*  f13a578:	ae380000 */ 	sw	$t8,0x0($s1)
.L0f13a57c:
/*  f13a57c:	3c198008 */ 	lui	$t9,%hi(var8007fb10)
/*  f13a580:	8f39fb10 */ 	lw	$t9,%lo(var8007fb10)($t9)
/*  f13a584:	3c0a8008 */ 	lui	$t2,%hi(var8007fb0c)
/*  f13a588:	ae190000 */ 	sw	$t9,0x0($s0)
/*  f13a58c:	8d4afb0c */ 	lw	$t2,%lo(var8007fb0c)($t2)
/*  f13a590:	ae2a0000 */ 	sw	$t2,0x0($s1)
.L0f13a594:
/*  f13a594:	90620001 */ 	lbu	$v0,0x1($v1)
/*  f13a598:	24010001 */ 	addiu	$at,$zero,0x1
/*  f13a59c:	3c0d8008 */ 	lui	$t5,%hi(var8007fb18)
/*  f13a5a0:	10410013 */ 	beq	$v0,$at,.L0f13a5f0
/*  f13a5a4:	24010006 */ 	addiu	$at,$zero,0x6
/*  f13a5a8:	10410009 */ 	beq	$v0,$at,.L0f13a5d0
/*  f13a5ac:	3c0b8008 */ 	lui	$t3,%hi(var8007fb10)
/*  f13a5b0:	2401000a */ 	addiu	$at,$zero,0xa
/*  f13a5b4:	1041000e */ 	beq	$v0,$at,.L0f13a5f0
/*  f13a5b8:	00000000 */ 	nop
/*  f13a5bc:	8e070000 */ 	lw	$a3,0x0($s0)
/*  f13a5c0:	8e220000 */ 	lw	$v0,0x0($s1)
/*  f13a5c4:	ae070004 */ 	sw	$a3,0x4($s0)
/*  f13a5c8:	10000010 */ 	b	.L0f13a60c
/*  f13a5cc:	ae220004 */ 	sw	$v0,0x4($s1)
.L0f13a5d0:
/*  f13a5d0:	8d6bfb10 */ 	lw	$t3,%lo(var8007fb10)($t3)
/*  f13a5d4:	3c0c8008 */ 	lui	$t4,%hi(var8007fb0c)
/*  f13a5d8:	8e070000 */ 	lw	$a3,0x0($s0)
/*  f13a5dc:	ae0b0004 */ 	sw	$t3,0x4($s0)
/*  f13a5e0:	8d8cfb0c */ 	lw	$t4,%lo(var8007fb0c)($t4)
/*  f13a5e4:	8e220000 */ 	lw	$v0,0x0($s1)
/*  f13a5e8:	10000008 */ 	b	.L0f13a60c
/*  f13a5ec:	ae2c0004 */ 	sw	$t4,0x4($s1)
.L0f13a5f0:
/*  f13a5f0:	8dadfb18 */ 	lw	$t5,%lo(var8007fb18)($t5)
/*  f13a5f4:	3c0e8008 */ 	lui	$t6,%hi(var8007fb14)
/*  f13a5f8:	8e070000 */ 	lw	$a3,0x0($s0)
/*  f13a5fc:	ae0d0004 */ 	sw	$t5,0x4($s0)
/*  f13a600:	8dcefb14 */ 	lw	$t6,%lo(var8007fb14)($t6)
/*  f13a604:	8e220000 */ 	lw	$v0,0x0($s1)
/*  f13a608:	ae2e0004 */ 	sw	$t6,0x4($s1)
.L0f13a60c:
/*  f13a60c:	8faf00e8 */ 	lw	$t7,0xe8($sp)
/*  f13a610:	24010002 */ 	addiu	$at,$zero,0x2
/*  f13a614:	11e10005 */ 	beq	$t7,$at,.L0f13a62c
/*  f13a618:	24010005 */ 	addiu	$at,$zero,0x5
/*  f13a61c:	11e10003 */ 	beq	$t7,$at,.L0f13a62c
/*  f13a620:	24010007 */ 	addiu	$at,$zero,0x7
/*  f13a624:	55e10009 */ 	bnel	$t7,$at,.L0f13a64c
/*  f13a628:	90790001 */ 	lbu	$t9,0x1($v1)
.L0f13a62c:
/*  f13a62c:	449e2000 */ 	mtc1	$s8,$f4
/*  f13a630:	00000000 */ 	nop
/*  f13a634:	468021a0 */ 	cvt.s.w	$f6,$f4
/*  f13a638:	46143200 */ 	add.s	$f8,$f6,$f20
/*  f13a63c:	4600428d */ 	trunc.w.s	$f10,$f8
/*  f13a640:	441e5000 */ 	mfc1	$s8,$f10
/*  f13a644:	00000000 */ 	nop
/*  f13a648:	90790001 */ 	lbu	$t9,0x1($v1)
.L0f13a64c:
/*  f13a64c:	02e02025 */ 	or	$a0,$s7,$zero
/*  f13a650:	02602825 */ 	or	$a1,$s3,$zero
/*  f13a654:	afb900e8 */ 	sw	$t9,0xe8($sp)
/*  f13a658:	8e860000 */ 	lw	$a2,0x0($s4)
/*  f13a65c:	afa00014 */ 	sw	$zero,0x14($sp)
/*  f13a660:	0fc55cbe */ 	jal	textMeasure
/*  f13a664:	afa20010 */ 	sw	$v0,0x10($sp)
/*  f13a668:	8e2a0004 */ 	lw	$t2,0x4($s1)
/*  f13a66c:	8e860004 */ 	lw	$a2,0x4($s4)
/*  f13a670:	8e070004 */ 	lw	$a3,0x4($s0)
/*  f13a674:	afa00014 */ 	sw	$zero,0x14($sp)
/*  f13a678:	8fa40084 */ 	lw	$a0,0x84($sp)
/*  f13a67c:	8fa50080 */ 	lw	$a1,0x80($sp)
/*  f13a680:	0fc55cbe */ 	jal	textMeasure
/*  f13a684:	afaa0010 */ 	sw	$t2,0x10($sp)
/*  f13a688:	8ec30000 */ 	lw	$v1,0x0($s6)
/*  f13a68c:	906b0001 */ 	lbu	$t3,0x1($v1)
/*  f13a690:	256cffff */ 	addiu	$t4,$t3,-1
/*  f13a694:	2d81000b */ 	sltiu	$at,$t4,0xb
/*  f13a698:	10200014 */ 	beqz	$at,.L0f13a6ec
/*  f13a69c:	000c6080 */ 	sll	$t4,$t4,0x2
/*  f13a6a0:	3c017f1b */ 	lui	$at,%hi(var7f1b58a4)
/*  f13a6a4:	002c0821 */ 	addu	$at,$at,$t4
/*  f13a6a8:	8c2c58a4 */ 	lw	$t4,%lo(var7f1b58a4)($at)
/*  f13a6ac:	01800008 */ 	jr	$t4
/*  f13a6b0:	00000000 */ 	nop
/*  f13a6b4:	8e6d0000 */ 	lw	$t5,0x0($s3)
/*  f13a6b8:	240f00a0 */ 	addiu	$t7,$zero,0xa0
/*  f13a6bc:	05a10003 */ 	bgez	$t5,.L0f13a6cc
/*  f13a6c0:	000d7043 */ 	sra	$t6,$t5,0x1
/*  f13a6c4:	25a10001 */ 	addiu	$at,$t5,0x1
/*  f13a6c8:	00017043 */ 	sra	$t6,$at,0x1
.L0f13a6cc:
/*  f13a6cc:	01eec023 */ 	subu	$t8,$t7,$t6
/*  f13a6d0:	10000008 */ 	b	.L0f13a6f4
/*  f13a6d4:	ae580000 */ 	sw	$t8,0x0($s2)
/*  f13a6d8:	8e790000 */ 	lw	$t9,0x0($s3)
/*  f13a6dc:	240a010e */ 	addiu	$t2,$zero,0x10e
/*  f13a6e0:	01595823 */ 	subu	$t3,$t2,$t9
/*  f13a6e4:	10000003 */ 	b	.L0f13a6f4
/*  f13a6e8:	ae4b0000 */ 	sw	$t3,0x0($s2)
.L0f13a6ec:
/*  f13a6ec:	240c0032 */ 	addiu	$t4,$zero,0x32
/*  f13a6f0:	ae4c0000 */ 	sw	$t4,0x0($s2)
.L0f13a6f4:
/*  f13a6f4:	8fad008c */ 	lw	$t5,0x8c($sp)
/*  f13a6f8:	adbe0000 */ 	sw	$s8,0x0($t5)
/*  f13a6fc:	906e0001 */ 	lbu	$t6,0x1($v1)
/*  f13a700:	8eef0000 */ 	lw	$t7,0x0($s7)
/*  f13a704:	25d8ffff */ 	addiu	$t8,$t6,-1
/*  f13a708:	2f01000b */ 	sltiu	$at,$t8,0xb
/*  f13a70c:	1020001c */ 	beqz	$at,.L0f13a780
/*  f13a710:	03cff021 */ 	addu	$s8,$s8,$t7
/*  f13a714:	0018c080 */ 	sll	$t8,$t8,0x2
/*  f13a718:	3c017f1b */ 	lui	$at,%hi(var7f1b58d0)
/*  f13a71c:	00380821 */ 	addu	$at,$at,$t8
/*  f13a720:	8c3858d0 */ 	lw	$t8,%lo(var7f1b58d0)($at)
/*  f13a724:	03000008 */ 	jr	$t8
/*  f13a728:	00000000 */ 	nop
/*  f13a72c:	8e4a0000 */ 	lw	$t2,0x0($s2)
/*  f13a730:	8e790000 */ 	lw	$t9,0x0($s3)
/*  f13a734:	8e6c0004 */ 	lw	$t4,0x4($s3)
/*  f13a738:	01595821 */ 	addu	$t3,$t2,$t9
/*  f13a73c:	016c6823 */ 	subu	$t5,$t3,$t4
/*  f13a740:	10000011 */ 	b	.L0f13a788
/*  f13a744:	ae4d0004 */ 	sw	$t5,0x4($s2)
/*  f13a748:	8e6f0004 */ 	lw	$t7,0x4($s3)
/*  f13a74c:	241800a0 */ 	addiu	$t8,$zero,0xa0
/*  f13a750:	05e10003 */ 	bgez	$t7,.L0f13a760
/*  f13a754:	000f7043 */ 	sra	$t6,$t7,0x1
/*  f13a758:	25e10001 */ 	addiu	$at,$t7,0x1
/*  f13a75c:	00017043 */ 	sra	$t6,$at,0x1
.L0f13a760:
/*  f13a760:	030e5023 */ 	subu	$t2,$t8,$t6
/*  f13a764:	10000008 */ 	b	.L0f13a788
/*  f13a768:	ae4a0004 */ 	sw	$t2,0x4($s2)
/*  f13a76c:	8e790004 */ 	lw	$t9,0x4($s3)
/*  f13a770:	240b010e */ 	addiu	$t3,$zero,0x10e
/*  f13a774:	01796023 */ 	subu	$t4,$t3,$t9
/*  f13a778:	10000003 */ 	b	.L0f13a788
/*  f13a77c:	ae4c0004 */ 	sw	$t4,0x4($s2)
.L0f13a780:
/*  f13a780:	240d0032 */ 	addiu	$t5,$zero,0x32
/*  f13a784:	ae4d0004 */ 	sw	$t5,0x4($s2)
.L0f13a788:
/*  f13a788:	8fa200e4 */ 	lw	$v0,0xe4($sp)
/*  f13a78c:	3c19800a */ 	lui	$t9,%hi(var800a4170)
/*  f13a790:	26b50001 */ 	addiu	$s5,$s5,0x1
/*  f13a794:	00027880 */ 	sll	$t7,$v0,0x2
/*  f13a798:	03afc021 */ 	addu	$t8,$sp,$t7
/*  f13a79c:	af1e0134 */ 	sw	$s8,0x134($t8)
/*  f13a7a0:	8faa00a8 */ 	lw	$t2,0xa8($sp)
/*  f13a7a4:	8f394170 */ 	lw	$t9,%lo(var800a4170)($t9)
/*  f13a7a8:	03af7021 */ 	addu	$t6,$sp,$t7
/*  f13a7ac:	8dce00f4 */ 	lw	$t6,0xf4($t6)
/*  f13a7b0:	254b0002 */ 	addiu	$t3,$t2,0x2
/*  f13a7b4:	afab00a8 */ 	sw	$t3,0xa8($sp)
/*  f13a7b8:	932c419c */ 	lbu	$t4,0x419c($t9)
/*  f13a7bc:	26d60004 */ 	addiu	$s6,$s6,0x4
/*  f13a7c0:	03cef021 */ 	addu	$s8,$s8,$t6
/*  f13a7c4:	02ac082a */ 	slt	$at,$s5,$t4
/*  f13a7c8:	5420ff24 */ 	bnezl	$at,.L0f13a45c
/*  f13a7cc:	8fb900a8 */ 	lw	$t9,0xa8($sp)
/*  f13a7d0:	0000a825 */ 	or	$s5,$zero,$zero
.L0f13a7d4:
/*  f13a7d4:	0fc54d8a */ 	jal	func0f153628
/*  f13a7d8:	8fa401e8 */ 	lw	$a0,0x1e8($sp)
/*  f13a7dc:	3c04800a */ 	lui	$a0,%hi(var800a4170)
/*  f13a7e0:	8c844170 */ 	lw	$a0,%lo(var800a4170)($a0)
/*  f13a7e4:	afa201e8 */ 	sw	$v0,0x1e8($sp)
/*  f13a7e8:	3c0140a0 */ 	lui	$at,0x40a0
/*  f13a7ec:	9086419c */ 	lbu	$a2,0x419c($a0)
/*  f13a7f0:	00066840 */ 	sll	$t5,$a2,0x1
/*  f13a7f4:	19a00091 */ 	blez	$t5,.L0f13aa3c
/*  f13a7f8:	01a03025 */ 	or	$a2,$t5,$zero
/*  f13a7fc:	4481b000 */ 	mtc1	$at,$f22
/*  f13a800:	3c013f80 */ 	lui	$at,0x3f80
/*  f13a804:	4481a000 */ 	mtc1	$at,$f20
/*  f13a808:	4480c000 */ 	mtc1	$zero,$f24
/*  f13a80c:	24050002 */ 	addiu	$a1,$zero,0x2
/*  f13a810:	44959000 */ 	mtc1	$s5,$f18
.L0f13a814:
/*  f13a814:	3c017f1b */ 	lui	$at,%hi(var7f1b58fc)
/*  f13a818:	c42658fc */ 	lwc1	$f6,%lo(var7f1b58fc)($at)
/*  f13a81c:	46809120 */ 	cvt.s.w	$f4,$f18
/*  f13a820:	c48a41a0 */ 	lwc1	$f10,0x41a0($a0)
/*  f13a824:	4600c306 */ 	mov.s	$f12,$f24
/*  f13a828:	4600a386 */ 	mov.s	$f14,$f20
/*  f13a82c:	4600a406 */ 	mov.s	$f16,$f20
/*  f13a830:	46062202 */ 	mul.s	$f8,$f4,$f6
/*  f13a834:	46085001 */ 	sub.s	$f0,$f10,$f8
/*  f13a838:	4600c03c */ 	c.lt.s	$f24,$f0
/*  f13a83c:	00000000 */ 	nop
/*  f13a840:	4503000f */ 	bc1tl	.L0f13a880
/*  f13a844:	c48241a4 */ 	lwc1	$f2,0x41a4($a0)
/*  f13a848:	06a10003 */ 	bgez	$s5,.L0f13a858
/*  f13a84c:	00157843 */ 	sra	$t7,$s5,0x1
/*  f13a850:	26a10001 */ 	addiu	$at,$s5,0x1
/*  f13a854:	00017843 */ 	sra	$t7,$at,0x1
.L0f13a858:
/*  f13a858:	000fc080 */ 	sll	$t8,$t7,0x2
/*  f13a85c:	03b87021 */ 	addu	$t6,$sp,$t8
/*  f13a860:	8dce01d4 */ 	lw	$t6,0x1d4($t6)
/*  f13a864:	95ca0000 */ 	lhu	$t2,0x0($t6)
/*  f13a868:	000a5c40 */ 	sll	$t3,$t2,0x11
/*  f13a86c:	000bcf82 */ 	srl	$t9,$t3,0x1e
/*  f13a870:	332c0002 */ 	andi	$t4,$t9,0x2
/*  f13a874:	54ac006d */ 	bnel	$a1,$t4,.L0f13aa2c
/*  f13a878:	26b50001 */ 	addiu	$s5,$s5,0x1
/*  f13a87c:	c48241a4 */ 	lwc1	$f2,0x41a4($a0)
.L0f13a880:
/*  f13a880:	06a10003 */ 	bgez	$s5,.L0f13a890
/*  f13a884:	00156843 */ 	sra	$t5,$s5,0x1
/*  f13a888:	26a10001 */ 	addiu	$at,$s5,0x1
/*  f13a88c:	00016843 */ 	sra	$t5,$at,0x1
.L0f13a890:
/*  f13a890:	000d7880 */ 	sll	$t7,$t5,0x2
/*  f13a894:	03afc021 */ 	addu	$t8,$sp,$t7
/*  f13a898:	46141480 */ 	add.s	$f18,$f2,$f20
/*  f13a89c:	8f1801d4 */ 	lw	$t8,0x1d4($t8)
/*  f13a8a0:	24010001 */ 	addiu	$at,$zero,0x1
/*  f13a8a4:	00151080 */ 	sll	$v0,$s5,0x2
/*  f13a8a8:	97030000 */ 	lhu	$v1,0x0($t8)
/*  f13a8ac:	4612003c */ 	c.lt.s	$f0,$f18
/*  f13a8b0:	240c0078 */ 	addiu	$t4,$zero,0x78
/*  f13a8b4:	00037440 */ 	sll	$t6,$v1,0x11
/*  f13a8b8:	000e5782 */ 	srl	$t2,$t6,0x1e
/*  f13a8bc:	45010004 */ 	bc1t	.L0f13a8d0
/*  f13a8c0:	01401825 */ 	or	$v1,$t2,$zero
/*  f13a8c4:	314b0001 */ 	andi	$t3,$t2,0x1
/*  f13a8c8:	55610058 */ 	bnel	$t3,$at,.L0f13aa2c
/*  f13a8cc:	26b50001 */ 	addiu	$s5,$s5,0x1
.L0f13a8d0:
/*  f13a8d0:	4614003c */ 	c.lt.s	$f0,$f20
/*  f13a8d4:	27ad0150 */ 	addiu	$t5,$sp,0x150
/*  f13a8d8:	27af0130 */ 	addiu	$t7,$sp,0x130
/*  f13a8dc:	27b801b4 */ 	addiu	$t8,$sp,0x1b4
/*  f13a8e0:	27ae0194 */ 	addiu	$t6,$sp,0x194
/*  f13a8e4:	27aa0174 */ 	addiu	$t2,$sp,0x174
/*  f13a8e8:	00002025 */ 	or	$a0,$zero,$zero
/*  f13a8ec:	07c10003 */ 	bgez	$s8,.L0f13a8fc
/*  f13a8f0:	001ec843 */ 	sra	$t9,$s8,0x1
/*  f13a8f4:	27c10001 */ 	addiu	$at,$s8,0x1
/*  f13a8f8:	0001c843 */ 	sra	$t9,$at,0x1
.L0f13a8fc:
/*  f13a8fc:	01999823 */ 	subu	$s3,$t4,$t9
/*  f13a900:	004a4821 */ 	addu	$t1,$v0,$t2
/*  f13a904:	004e4021 */ 	addu	$t0,$v0,$t6
/*  f13a908:	0058b821 */ 	addu	$s7,$v0,$t8
/*  f13a90c:	004fb021 */ 	addu	$s6,$v0,$t7
/*  f13a910:	45000006 */ 	bc1f	.L0f13a92c
/*  f13a914:	004da021 */ 	addu	$s4,$v0,$t5
/*  f13a918:	306b0002 */ 	andi	$t3,$v1,0x2
/*  f13a91c:	14ab001b */ 	bne	$a1,$t3,.L0f13a98c
/*  f13a920:	00000000 */ 	nop
/*  f13a924:	10000019 */ 	b	.L0f13a98c
/*  f13a928:	24040001 */ 	addiu	$a0,$zero,0x1
.L0f13a92c:
/*  f13a92c:	4600103c */ 	c.lt.s	$f2,$f0
/*  f13a930:	306c0001 */ 	andi	$t4,$v1,0x1
/*  f13a934:	24010001 */ 	addiu	$at,$zero,0x1
/*  f13a938:	30790002 */ 	andi	$t9,$v1,0x2
/*  f13a93c:	45000009 */ 	bc1f	.L0f13a964
/*  f13a940:	00000000 */ 	nop
/*  f13a944:	55810004 */ 	bnel	$t4,$at,.L0f13a958
/*  f13a948:	46020101 */ 	sub.s	$f4,$f0,$f2
/*  f13a94c:	1000000f */ 	b	.L0f13a98c
/*  f13a950:	24040001 */ 	addiu	$a0,$zero,0x1
/*  f13a954:	46020101 */ 	sub.s	$f4,$f0,$f2
.L0f13a958:
/*  f13a958:	46142182 */ 	mul.s	$f6,$f4,$f20
/*  f13a95c:	1000000b */ 	b	.L0f13a98c
/*  f13a960:	4606a301 */ 	sub.s	$f12,$f20,$f6
.L0f13a964:
/*  f13a964:	54b90004 */ 	bnel	$a1,$t9,.L0f13a978
/*  f13a968:	46140281 */ 	sub.s	$f10,$f0,$f20
/*  f13a96c:	10000007 */ 	b	.L0f13a98c
/*  f13a970:	24040001 */ 	addiu	$a0,$zero,0x1
/*  f13a974:	46140281 */ 	sub.s	$f10,$f0,$f20
.L0f13a978:
/*  f13a978:	4600a306 */ 	mov.s	$f12,$f20
/*  f13a97c:	46141201 */ 	sub.s	$f8,$f2,$f20
/*  f13a980:	46085383 */ 	div.s	$f14,$f10,$f8
/*  f13a984:	46167402 */ 	mul.s	$f16,$f14,$f22
/*  f13a988:	00000000 */ 	nop
.L0f13a98c:
/*  f13a98c:	50800005 */ 	beqzl	$a0,.L0f13a9a4
/*  f13a990:	460ca03c */ 	c.lt.s	$f20,$f12
/*  f13a994:	4600a306 */ 	mov.s	$f12,$f20
/*  f13a998:	4600a386 */ 	mov.s	$f14,$f20
/*  f13a99c:	4600a406 */ 	mov.s	$f16,$f20
/*  f13a9a0:	460ca03c */ 	c.lt.s	$f20,$f12
.L0f13a9a4:
/*  f13a9a4:	8fa401e8 */ 	lw	$a0,0x1e8($sp)
/*  f13a9a8:	45020003 */ 	bc1fl	.L0f13a9b8
/*  f13a9ac:	4610a03c */ 	c.lt.s	$f20,$f16
/*  f13a9b0:	4600a306 */ 	mov.s	$f12,$f20
/*  f13a9b4:	4610a03c */ 	c.lt.s	$f20,$f16
.L0f13a9b8:
/*  f13a9b8:	00000000 */ 	nop
/*  f13a9bc:	45020003 */ 	bc1fl	.L0f13a9cc
/*  f13a9c0:	460ea03c */ 	c.lt.s	$f20,$f14
/*  f13a9c4:	4600a406 */ 	mov.s	$f16,$f20
/*  f13a9c8:	460ea03c */ 	c.lt.s	$f20,$f14
.L0f13a9cc:
/*  f13a9cc:	00000000 */ 	nop
/*  f13a9d0:	45020003 */ 	bc1fl	.L0f13a9e0
/*  f13a9d4:	8d0f0000 */ 	lw	$t7,0x0($t0)
/*  f13a9d8:	4600a386 */ 	mov.s	$f14,$f20
/*  f13a9dc:	8d0f0000 */ 	lw	$t7,0x0($t0)
.L0f13a9e0:
/*  f13a9e0:	8ecd0000 */ 	lw	$t5,0x0($s6)
/*  f13a9e4:	8e850000 */ 	lw	$a1,0x0($s4)
/*  f13a9e8:	8ee70000 */ 	lw	$a3,0x0($s7)
/*  f13a9ec:	afaf0010 */ 	sw	$t7,0x10($sp)
/*  f13a9f0:	8d380000 */ 	lw	$t8,0x0($t1)
/*  f13a9f4:	e7b00020 */ 	swc1	$f16,0x20($sp)
/*  f13a9f8:	e7ae001c */ 	swc1	$f14,0x1c($sp)
/*  f13a9fc:	e7ac0018 */ 	swc1	$f12,0x18($sp)
/*  f13aa00:	01b33021 */ 	addu	$a2,$t5,$s3
/*  f13aa04:	0fc4e674 */ 	jal	func0f1399d0
/*  f13aa08:	afb80014 */ 	sw	$t8,0x14($sp)
/*  f13aa0c:	3c04800a */ 	lui	$a0,%hi(var800a4170)
/*  f13aa10:	8c844170 */ 	lw	$a0,%lo(var800a4170)($a0)
/*  f13aa14:	afa201e8 */ 	sw	$v0,0x1e8($sp)
/*  f13aa18:	24050002 */ 	addiu	$a1,$zero,0x2
/*  f13aa1c:	9086419c */ 	lbu	$a2,0x419c($a0)
/*  f13aa20:	00067040 */ 	sll	$t6,$a2,0x1
/*  f13aa24:	01c03025 */ 	or	$a2,$t6,$zero
/*  f13aa28:	26b50001 */ 	addiu	$s5,$s5,0x1
.L0f13aa2c:
/*  f13aa2c:	02a6082a */ 	slt	$at,$s5,$a2
/*  f13aa30:	5420ff78 */ 	bnezl	$at,.L0f13a814
/*  f13aa34:	44959000 */ 	mtc1	$s5,$f18
/*  f13aa38:	0000a825 */ 	or	$s5,$zero,$zero
.L0f13aa3c:
/*  f13aa3c:	3c013f80 */ 	lui	$at,0x3f80
/*  f13aa40:	4481a000 */ 	mtc1	$at,$f20
/*  f13aa44:	4480c000 */ 	mtc1	$zero,$f24
/*  f13aa48:	18c000dd */ 	blez	$a2,.L0f13adc0
/*  f13aa4c:	24050002 */ 	addiu	$a1,$zero,0x2
.L0f13aa50:
/*  f13aa50:	44959000 */ 	mtc1	$s5,$f18
/*  f13aa54:	3c017f1b */ 	lui	$at,%hi(var7f1b5900)
/*  f13aa58:	c4265900 */ 	lwc1	$f6,%lo(var7f1b5900)($at)
/*  f13aa5c:	46809120 */ 	cvt.s.w	$f4,$f18
/*  f13aa60:	c48841a0 */ 	lwc1	$f8,0x41a0($a0)
/*  f13aa64:	4600c586 */ 	mov.s	$f22,$f24
/*  f13aa68:	46062282 */ 	mul.s	$f10,$f4,$f6
/*  f13aa6c:	460a4001 */ 	sub.s	$f0,$f8,$f10
/*  f13aa70:	4600c03c */ 	c.lt.s	$f24,$f0
/*  f13aa74:	00000000 */ 	nop
/*  f13aa78:	4503000f */ 	bc1tl	.L0f13aab8
/*  f13aa7c:	c48241a4 */ 	lwc1	$f2,0x41a4($a0)
/*  f13aa80:	06a10003 */ 	bgez	$s5,.L0f13aa90
/*  f13aa84:	00155043 */ 	sra	$t2,$s5,0x1
/*  f13aa88:	26a10001 */ 	addiu	$at,$s5,0x1
/*  f13aa8c:	00015043 */ 	sra	$t2,$at,0x1
.L0f13aa90:
/*  f13aa90:	000a5880 */ 	sll	$t3,$t2,0x2
/*  f13aa94:	03ab6021 */ 	addu	$t4,$sp,$t3
/*  f13aa98:	8d8c01d4 */ 	lw	$t4,0x1d4($t4)
/*  f13aa9c:	95990000 */ 	lhu	$t9,0x0($t4)
/*  f13aaa0:	00196c40 */ 	sll	$t5,$t9,0x11
/*  f13aaa4:	000d7f82 */ 	srl	$t7,$t5,0x1e
/*  f13aaa8:	31f80002 */ 	andi	$t8,$t7,0x2
/*  f13aaac:	54b800c1 */ 	bnel	$a1,$t8,.L0f13adb4
/*  f13aab0:	26b50001 */ 	addiu	$s5,$s5,0x1
/*  f13aab4:	c48241a4 */ 	lwc1	$f2,0x41a4($a0)
.L0f13aab8:
/*  f13aab8:	06a10003 */ 	bgez	$s5,.L0f13aac8
/*  f13aabc:	00157043 */ 	sra	$t6,$s5,0x1
/*  f13aac0:	26a10001 */ 	addiu	$at,$s5,0x1
/*  f13aac4:	00017043 */ 	sra	$t6,$at,0x1
.L0f13aac8:
/*  f13aac8:	46141480 */ 	add.s	$f18,$f2,$f20
/*  f13aacc:	000e5080 */ 	sll	$t2,$t6,0x2
/*  f13aad0:	03aa2821 */ 	addu	$a1,$sp,$t2
/*  f13aad4:	8ca501d4 */ 	lw	$a1,0x1d4($a1)
/*  f13aad8:	4612003c */ 	c.lt.s	$f0,$f18
/*  f13aadc:	00003825 */ 	or	$a3,$zero,$zero
/*  f13aae0:	00009025 */ 	or	$s2,$zero,$zero
/*  f13aae4:	00957821 */ 	addu	$t7,$a0,$s5
/*  f13aae8:	45010008 */ 	bc1t	.L0f13ab0c
/*  f13aaec:	00151080 */ 	sll	$v0,$s5,0x2
/*  f13aaf0:	94ab0000 */ 	lhu	$t3,0x0($a1)
/*  f13aaf4:	24010001 */ 	addiu	$at,$zero,0x1
/*  f13aaf8:	000b6440 */ 	sll	$t4,$t3,0x11
/*  f13aafc:	000ccf82 */ 	srl	$t9,$t4,0x1e
/*  f13ab00:	332d0001 */ 	andi	$t5,$t9,0x1
/*  f13ab04:	55a100ab */ 	bnel	$t5,$at,.L0f13adb4
/*  f13ab08:	26b50001 */ 	addiu	$s5,$s5,0x1
.L0f13ab0c:
/*  f13ab0c:	91e341a8 */ 	lbu	$v1,0x41a8($t7)
/*  f13ab10:	240a0078 */ 	addiu	$t2,$zero,0x78
/*  f13ab14:	27ab0150 */ 	addiu	$t3,$sp,0x150
/*  f13ab18:	00038883 */ 	sra	$s1,$v1,0x2
/*  f13ab1c:	32380003 */ 	andi	$t8,$s1,0x3
/*  f13ab20:	03008825 */ 	or	$s1,$t8,$zero
/*  f13ab24:	27b80174 */ 	addiu	$t8,$sp,0x174
/*  f13ab28:	004ba021 */ 	addu	$s4,$v0,$t3
/*  f13ab2c:	27ad0194 */ 	addiu	$t5,$sp,0x194
/*  f13ab30:	8c864198 */ 	lw	$a2,0x4198($a0)
/*  f13ab34:	004d7821 */ 	addu	$t7,$v0,$t5
/*  f13ab38:	27ac0130 */ 	addiu	$t4,$sp,0x130
/*  f13ab3c:	27b901b4 */ 	addiu	$t9,$sp,0x1b4
/*  f13ab40:	0059b821 */ 	addu	$s7,$v0,$t9
/*  f13ab44:	004cb021 */ 	addu	$s6,$v0,$t4
/*  f13ab48:	afaf0084 */ 	sw	$t7,0x84($sp)
/*  f13ab4c:	30700003 */ 	andi	$s0,$v1,0x3
/*  f13ab50:	07c10003 */ 	bgez	$s8,.L0f13ab60
/*  f13ab54:	001e7043 */ 	sra	$t6,$s8,0x1
/*  f13ab58:	27c10001 */ 	addiu	$at,$s8,0x1
/*  f13ab5c:	00017043 */ 	sra	$t6,$at,0x1
.L0f13ab60:
/*  f13ab60:	014e9823 */ 	subu	$s3,$t2,$t6
/*  f13ab64:	00037103 */ 	sra	$t6,$v1,0x4
/*  f13ab68:	31cb0001 */ 	andi	$t3,$t6,0x1
/*  f13ab6c:	00585021 */ 	addu	$t2,$v0,$t8
/*  f13ab70:	24010001 */ 	addiu	$at,$zero,0x1
/*  f13ab74:	15610007 */ 	bne	$t3,$at,.L0f13ab94
/*  f13ab78:	afaa0080 */ 	sw	$t2,0x80($sp)
/*  f13ab7c:	90ac0001 */ 	lbu	$t4,0x1($a1)
/*  f13ab80:	24010009 */ 	addiu	$at,$zero,0x9
/*  f13ab84:	51810004 */ 	beql	$t4,$at,.L0f13ab98
/*  f13ab88:	4614003c */ 	c.lt.s	$f0,$f20
/*  f13ab8c:	24120001 */ 	addiu	$s2,$zero,0x1
/*  f13ab90:	24110001 */ 	addiu	$s1,$zero,0x1
.L0f13ab94:
/*  f13ab94:	4614003c */ 	c.lt.s	$f0,$f20
.L0f13ab98:
/*  f13ab98:	90a60001 */ 	lbu	$a2,0x1($a1)
/*  f13ab9c:	4502000f */ 	bc1fl	.L0f13abdc
/*  f13aba0:	4600103c */ 	c.lt.s	$f2,$f0
/*  f13aba4:	94b90000 */ 	lhu	$t9,0x0($a1)
/*  f13aba8:	24010002 */ 	addiu	$at,$zero,0x2
/*  f13abac:	00196c40 */ 	sll	$t5,$t9,0x11
/*  f13abb0:	000d7f82 */ 	srl	$t7,$t5,0x1e
/*  f13abb4:	31f80002 */ 	andi	$t8,$t7,0x2
/*  f13abb8:	13010005 */ 	beq	$t8,$at,.L0f13abd0
/*  f13abbc:	00000000 */ 	nop
/*  f13abc0:	4600a101 */ 	sub.s	$f4,$f20,$f0
/*  f13abc4:	46142582 */ 	mul.s	$f22,$f4,$f20
/*  f13abc8:	1000002a */ 	b	.L0f13ac74
/*  f13abcc:	24d9fffe */ 	addiu	$t9,$a2,-2
.L0f13abd0:
/*  f13abd0:	10000027 */ 	b	.L0f13ac70
/*  f13abd4:	24070001 */ 	addiu	$a3,$zero,0x1
/*  f13abd8:	4600103c */ 	c.lt.s	$f2,$f0
.L0f13abdc:
/*  f13abdc:	00000000 */ 	nop
/*  f13abe0:	45020023 */ 	bc1fl	.L0f13ac70
/*  f13abe4:	24070001 */ 	addiu	$a3,$zero,0x1
/*  f13abe8:	94a30000 */ 	lhu	$v1,0x0($a1)
/*  f13abec:	24010001 */ 	addiu	$at,$zero,0x1
/*  f13abf0:	24040001 */ 	addiu	$a0,$zero,0x1
/*  f13abf4:	00035440 */ 	sll	$t2,$v1,0x11
/*  f13abf8:	000a1f82 */ 	srl	$v1,$t2,0x1e
/*  f13abfc:	306b0001 */ 	andi	$t3,$v1,0x1
/*  f13ac00:	11610018 */ 	beq	$t3,$at,.L0f13ac64
/*  f13ac04:	00000000 */ 	nop
/*  f13ac08:	46020181 */ 	sub.s	$f6,$f0,$f2
/*  f13ac0c:	24010001 */ 	addiu	$at,$zero,0x1
/*  f13ac10:	00c01025 */ 	or	$v0,$a2,$zero
/*  f13ac14:	32ac0001 */ 	andi	$t4,$s5,0x1
/*  f13ac18:	46143582 */ 	mul.s	$f22,$f6,$f20
/*  f13ac1c:	10c10007 */ 	beq	$a2,$at,.L0f13ac3c
/*  f13ac20:	24010002 */ 	addiu	$at,$zero,0x2
/*  f13ac24:	10410003 */ 	beq	$v0,$at,.L0f13ac34
/*  f13ac28:	24010007 */ 	addiu	$at,$zero,0x7
/*  f13ac2c:	14410006 */ 	bne	$v0,$at,.L0f13ac48
/*  f13ac30:	00000000 */ 	nop
.L0f13ac34:
/*  f13ac34:	10000004 */ 	b	.L0f13ac48
/*  f13ac38:	00002025 */ 	or	$a0,$zero,$zero
.L0f13ac3c:
/*  f13ac3c:	15800002 */ 	bnez	$t4,.L0f13ac48
/*  f13ac40:	00000000 */ 	nop
/*  f13ac44:	00002025 */ 	or	$a0,$zero,$zero
.L0f13ac48:
/*  f13ac48:	5460000a */ 	bnezl	$v1,.L0f13ac74
/*  f13ac4c:	24d9fffe */ 	addiu	$t9,$a2,-2
/*  f13ac50:	50800008 */ 	beqzl	$a0,.L0f13ac74
/*  f13ac54:	24d9fffe */ 	addiu	$t9,$a2,-2
/*  f13ac58:	24120002 */ 	addiu	$s2,$zero,0x2
/*  f13ac5c:	10000004 */ 	b	.L0f13ac70
/*  f13ac60:	24110001 */ 	addiu	$s1,$zero,0x1
.L0f13ac64:
/*  f13ac64:	10000002 */ 	b	.L0f13ac70
/*  f13ac68:	24070001 */ 	addiu	$a3,$zero,0x1
/*  f13ac6c:	24070001 */ 	addiu	$a3,$zero,0x1
.L0f13ac70:
/*  f13ac70:	24d9fffe */ 	addiu	$t9,$a2,-2
.L0f13ac74:
/*  f13ac74:	2f21000a */ 	sltiu	$at,$t9,0xa
/*  f13ac78:	1020000b */ 	beqz	$at,.L0f13aca8
/*  f13ac7c:	0019c880 */ 	sll	$t9,$t9,0x2
/*  f13ac80:	3c017f1b */ 	lui	$at,%hi(var7f1b5904)
/*  f13ac84:	00390821 */ 	addu	$at,$at,$t9
/*  f13ac88:	8c395904 */ 	lw	$t9,%lo(var7f1b5904)($at)
/*  f13ac8c:	03200008 */ 	jr	$t9
/*  f13ac90:	00000000 */ 	nop
/*  f13ac94:	10000004 */ 	b	.L0f13aca8
/*  f13ac98:	00008025 */ 	or	$s0,$zero,$zero
/*  f13ac9c:	10000002 */ 	b	.L0f13aca8
/*  f13aca0:	24100002 */ 	addiu	$s0,$zero,0x2
/*  f13aca4:	24100001 */ 	addiu	$s0,$zero,0x1
.L0f13aca8:
/*  f13aca8:	50e0002c */ 	beqzl	$a3,.L0f13ad5c
/*  f13acac:	8fab0084 */ 	lw	$t3,0x84($sp)
/*  f13acb0:	0c004b70 */ 	jal	random
/*  f13acb4:	00000000 */ 	nop
/*  f13acb8:	3c0d800a */ 	lui	$t5,%hi(var800a4170)
/*  f13acbc:	8dad4170 */ 	lw	$t5,%lo(var800a4170)($t5)
/*  f13acc0:	24010001 */ 	addiu	$at,$zero,0x1
/*  f13acc4:	91af419c */ 	lbu	$t7,0x419c($t5)
/*  f13acc8:	000fc100 */ 	sll	$t8,$t7,0x4
/*  f13accc:	0058001b */ 	divu	$zero,$v0,$t8
/*  f13acd0:	00005010 */ 	mfhi	$t2
/*  f13acd4:	17000002 */ 	bnez	$t8,.L0f13ace0
/*  f13acd8:	00000000 */ 	nop
/*  f13acdc:	0007000d */ 	break	0x7
.L0f13ace0:
/*  f13ace0:	5541001e */ 	bnel	$t2,$at,.L0f13ad5c
/*  f13ace4:	8fab0084 */ 	lw	$t3,0x84($sp)
/*  f13ace8:	0c004b70 */ 	jal	random
/*  f13acec:	00000000 */ 	nop
/*  f13acf0:	44824000 */ 	mtc1	$v0,$f8
/*  f13acf4:	3c014f80 */ 	lui	$at,0x4f80
/*  f13acf8:	04410004 */ 	bgez	$v0,.L0f13ad0c
/*  f13acfc:	468042a0 */ 	cvt.s.w	$f10,$f8
/*  f13ad00:	44819000 */ 	mtc1	$at,$f18
/*  f13ad04:	00000000 */ 	nop
/*  f13ad08:	46125280 */ 	add.s	$f10,$f10,$f18
.L0f13ad0c:
/*  f13ad0c:	3c012f80 */ 	lui	$at,0x2f80
/*  f13ad10:	44812000 */ 	mtc1	$at,$f4
/*  f13ad14:	3c017f1b */ 	lui	$at,%hi(var7f1b592c)
/*  f13ad18:	c428592c */ 	lwc1	$f8,%lo(var7f1b592c)($at)
/*  f13ad1c:	46045182 */ 	mul.s	$f6,$f10,$f4
/*  f13ad20:	00000000 */ 	nop
/*  f13ad24:	46083582 */ 	mul.s	$f22,$f6,$f8
/*  f13ad28:	0c004b70 */ 	jal	random
/*  f13ad2c:	00000000 */ 	nop
/*  f13ad30:	24010003 */ 	addiu	$at,$zero,0x3
/*  f13ad34:	0041001b */ 	divu	$zero,$v0,$at
/*  f13ad38:	00008010 */ 	mfhi	$s0
/*  f13ad3c:	0c004b70 */ 	jal	random
/*  f13ad40:	00000000 */ 	nop
/*  f13ad44:	24010003 */ 	addiu	$at,$zero,0x3
/*  f13ad48:	0041001b */ 	divu	$zero,$v0,$at
/*  f13ad4c:	00008810 */ 	mfhi	$s1
/*  f13ad50:	00000000 */ 	nop
/*  f13ad54:	00000000 */ 	nop
/*  f13ad58:	8fab0084 */ 	lw	$t3,0x84($sp)
.L0f13ad5c:
/*  f13ad5c:	8fb90080 */ 	lw	$t9,0x80($sp)
/*  f13ad60:	8ece0000 */ 	lw	$t6,0x0($s6)
/*  f13ad64:	8d6c0000 */ 	lw	$t4,0x0($t3)
/*  f13ad68:	8e850000 */ 	lw	$a1,0x0($s4)
/*  f13ad6c:	8ee70000 */ 	lw	$a3,0x0($s7)
/*  f13ad70:	afac0010 */ 	sw	$t4,0x10($sp)
/*  f13ad74:	8f2d0000 */ 	lw	$t5,0x0($t9)
/*  f13ad78:	afb20024 */ 	sw	$s2,0x24($sp)
/*  f13ad7c:	afb10020 */ 	sw	$s1,0x20($sp)
/*  f13ad80:	afb0001c */ 	sw	$s0,0x1c($sp)
/*  f13ad84:	e7b60018 */ 	swc1	$f22,0x18($sp)
/*  f13ad88:	8fa401e8 */ 	lw	$a0,0x1e8($sp)
/*  f13ad8c:	01d33021 */ 	addu	$a2,$t6,$s3
/*  f13ad90:	0fc4e767 */ 	jal	func0f139d9c
/*  f13ad94:	afad0014 */ 	sw	$t5,0x14($sp)
/*  f13ad98:	3c04800a */ 	lui	$a0,%hi(var800a4170)
/*  f13ad9c:	8c844170 */ 	lw	$a0,%lo(var800a4170)($a0)
/*  f13ada0:	afa201e8 */ 	sw	$v0,0x1e8($sp)
/*  f13ada4:	9086419c */ 	lbu	$a2,0x419c($a0)
/*  f13ada8:	00067840 */ 	sll	$t7,$a2,0x1
/*  f13adac:	01e03025 */ 	or	$a2,$t7,$zero
/*  f13adb0:	26b50001 */ 	addiu	$s5,$s5,0x1
.L0f13adb4:
/*  f13adb4:	02a6082a */ 	slt	$at,$s5,$a2
/*  f13adb8:	1420ff25 */ 	bnez	$at,.L0f13aa50
/*  f13adbc:	24050002 */ 	addiu	$a1,$zero,0x2
.L0f13adc0:
/*  f13adc0:	0fc54de0 */ 	jal	func0f153780
/*  f13adc4:	8fa401e8 */ 	lw	$a0,0x1e8($sp)
.L0f13adc8:
/*  f13adc8:	8fbf006c */ 	lw	$ra,0x6c($sp)
/*  f13adcc:	d7b40030 */ 	ldc1	$f20,0x30($sp)
/*  f13add0:	d7b60038 */ 	ldc1	$f22,0x38($sp)
/*  f13add4:	d7b80040 */ 	ldc1	$f24,0x40($sp)
/*  f13add8:	8fb00048 */ 	lw	$s0,0x48($sp)
/*  f13addc:	8fb1004c */ 	lw	$s1,0x4c($sp)
/*  f13ade0:	8fb20050 */ 	lw	$s2,0x50($sp)
/*  f13ade4:	8fb30054 */ 	lw	$s3,0x54($sp)
/*  f13ade8:	8fb40058 */ 	lw	$s4,0x58($sp)
/*  f13adec:	8fb5005c */ 	lw	$s5,0x5c($sp)
/*  f13adf0:	8fb60060 */ 	lw	$s6,0x60($sp)
/*  f13adf4:	8fb70064 */ 	lw	$s7,0x64($sp)
/*  f13adf8:	8fbe0068 */ 	lw	$s8,0x68($sp)
/*  f13adfc:	03e00008 */ 	jr	$ra
/*  f13ae00:	27bd01e8 */ 	addiu	$sp,$sp,0x1e8
);

GLOBAL_ASM(
glabel func0f13ae04
/*  f13ae04:	03e00008 */ 	jr	$ra
/*  f13ae08:	afa40000 */ 	sw	$a0,0x0($sp)
);

GLOBAL_ASM(
glabel func0f13ae0c
.late_rodata
glabel var7f1b5930
.word 0x3c23d70a
.text
/*  f13ae0c:	27bdffe0 */ 	addiu	$sp,$sp,-32
/*  f13ae10:	afbf001c */ 	sw	$ra,0x1c($sp)
/*  f13ae14:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f13ae18:	00002025 */ 	or	$a0,$zero,$zero
/*  f13ae1c:	0c005408 */ 	jal	func00015020
/*  f13ae20:	24050020 */ 	addiu	$a1,$zero,0x20
/*  f13ae24:	10400003 */ 	beqz	$v0,.L0f13ae34
/*  f13ae28:	00000000 */ 	nop
/*  f13ae2c:	0fc4e0e3 */ 	jal	func0f13838c
/*  f13ae30:	2404ffff */ 	addiu	$a0,$zero,-1
.L0f13ae34:
/*  f13ae34:	3c047f1b */ 	lui	$a0,%hi(var7f1b57d0)
/*  f13ae38:	3c058008 */ 	lui	$a1,%hi(var8007f6d8)
/*  f13ae3c:	24a5f6d8 */ 	addiu	$a1,$a1,%lo(var8007f6d8)
/*  f13ae40:	0c0036cc */ 	jal	func0000db30
/*  f13ae44:	248457d0 */ 	addiu	$a0,$a0,%lo(var7f1b57d0)
/*  f13ae48:	3c0e8008 */ 	lui	$t6,%hi(var8007f6d8)
/*  f13ae4c:	8dcef6d8 */ 	lw	$t6,%lo(var8007f6d8)($t6)
/*  f13ae50:	3401ffff */ 	dli	$at,0xffff
/*  f13ae54:	3c047f1b */ 	lui	$a0,%hi(var7f1b57d4)
/*  f13ae58:	01c1082b */ 	sltu	$at,$t6,$at
/*  f13ae5c:	1020000c */ 	beqz	$at,.L0f13ae90
/*  f13ae60:	248457d4 */ 	addiu	$a0,$a0,%lo(var7f1b57d4)
/*  f13ae64:	3c10800a */ 	lui	$s0,%hi(var800a4170)
/*  f13ae68:	26104170 */ 	addiu	$s0,$s0,%lo(var800a4170)
/*  f13ae6c:	00001025 */ 	or	$v0,$zero,$zero
/*  f13ae70:	24030040 */ 	addiu	$v1,$zero,0x40
.L0f13ae74:
/*  f13ae74:	8e180000 */ 	lw	$t8,0x0($s0)
/*  f13ae78:	3c0f8008 */ 	lui	$t7,%hi(var8007f6d8)
/*  f13ae7c:	8deff6d8 */ 	lw	$t7,%lo(var8007f6d8)($t7)
/*  f13ae80:	0302c821 */ 	addu	$t9,$t8,$v0
/*  f13ae84:	24420010 */ 	addiu	$v0,$v0,0x10
/*  f13ae88:	1443fffa */ 	bne	$v0,$v1,.L0f13ae74
/*  f13ae8c:	af2f41b4 */ 	sw	$t7,0x41b4($t9)
.L0f13ae90:
/*  f13ae90:	3c10800a */ 	lui	$s0,%hi(var800a4170)
/*  f13ae94:	3c058008 */ 	lui	$a1,%hi(var8007f6d4)
/*  f13ae98:	26104170 */ 	addiu	$s0,$s0,%lo(var800a4170)
/*  f13ae9c:	0c0036cc */ 	jal	func0000db30
/*  f13aea0:	24a5f6d4 */ 	addiu	$a1,$a1,%lo(var8007f6d4)
/*  f13aea4:	3c088008 */ 	lui	$t0,%hi(var8007f6d4)
/*  f13aea8:	8d08f6d4 */ 	lw	$t0,%lo(var8007f6d4)($t0)
/*  f13aeac:	11000005 */ 	beqz	$t0,.L0f13aec4
/*  f13aeb0:	00000000 */ 	nop
/*  f13aeb4:	0fc4e0e3 */ 	jal	func0f13838c
/*  f13aeb8:	2404ffff */ 	addiu	$a0,$zero,-1
/*  f13aebc:	3c018008 */ 	lui	$at,%hi(var8007f6d4)
/*  f13aec0:	ac20f6d4 */ 	sw	$zero,%lo(var8007f6d4)($at)
.L0f13aec4:
/*  f13aec4:	3c06800a */ 	lui	$a2,%hi(var800a416c)
/*  f13aec8:	24c6416c */ 	addiu	$a2,$a2,%lo(var800a416c)
/*  f13aecc:	8cc40000 */ 	lw	$a0,0x0($a2)
/*  f13aed0:	3c098008 */ 	lui	$t1,%hi(var8007f138)
/*  f13aed4:	14800016 */ 	bnez	$a0,.L0f13af30
/*  f13aed8:	00000000 */ 	nop
/*  f13aedc:	8d29f138 */ 	lw	$t1,%lo(var8007f138)($t1)
/*  f13aee0:	1120000b */ 	beqz	$t1,.L0f13af10
/*  f13aee4:	00000000 */ 	nop
/*  f13aee8:	0fc5b67c */ 	jal	musicSetStage
/*  f13aeec:	2404005c */ 	addiu	$a0,$zero,0x5c
/*  f13aef0:	44806000 */ 	mtc1	$zero,$f12
/*  f13aef4:	0fc5b52e */ 	jal	musicStartPrimary
/*  f13aef8:	00000000 */ 	nop
/*  f13aefc:	3c04800a */ 	lui	$a0,%hi(var800a416c)
/*  f13af00:	3c06800a */ 	lui	$a2,%hi(var800a416c)
/*  f13af04:	24c6416c */ 	addiu	$a2,$a2,%lo(var800a416c)
/*  f13af08:	10000009 */ 	b	.L0f13af30
/*  f13af0c:	8c84416c */ 	lw	$a0,%lo(var800a416c)($a0)
.L0f13af10:
/*  f13af10:	0fc5b67c */ 	jal	musicSetStage
/*  f13af14:	2404005c */ 	addiu	$a0,$zero,0x5c
/*  f13af18:	0fc5b647 */ 	jal	musicStartMenu2
/*  f13af1c:	24040058 */ 	addiu	$a0,$zero,0x58
/*  f13af20:	3c04800a */ 	lui	$a0,%hi(var800a416c)
/*  f13af24:	3c06800a */ 	lui	$a2,%hi(var800a416c)
/*  f13af28:	24c6416c */ 	addiu	$a2,$a2,%lo(var800a416c)
/*  f13af2c:	8c84416c */ 	lw	$a0,%lo(var800a416c)($a0)
.L0f13af30:
/*  f13af30:	3c05800a */ 	lui	$a1,%hi(var800a4164)
/*  f13af34:	24a54164 */ 	addiu	$a1,$a1,%lo(var800a4164)
/*  f13af38:	8ca20000 */ 	lw	$v0,0x0($a1)
/*  f13af3c:	3c03800a */ 	lui	$v1,%hi(g_Vars+0x40)
/*  f13af40:	8c63a000 */ 	lw	$v1,%lo(g_Vars+0x40)($v1)
/*  f13af44:	3c01800a */ 	lui	$at,%hi(var800a4168)
/*  f13af48:	ac224168 */ 	sw	$v0,%lo(var800a4168)($at)
/*  f13af4c:	240112c0 */ 	addiu	$at,$zero,0x12c0
/*  f13af50:	00835821 */ 	addu	$t3,$a0,$v1
/*  f13af54:	0161001b */ 	divu	$zero,$t3,$at
/*  f13af58:	00006810 */ 	mfhi	$t5
/*  f13af5c:	448d2000 */ 	mtc1	$t5,$f4
/*  f13af60:	00435021 */ 	addu	$t2,$v0,$v1
/*  f13af64:	acaa0000 */ 	sw	$t2,0x0($a1)
/*  f13af68:	accb0000 */ 	sw	$t3,0x0($a2)
/*  f13af6c:	05a10005 */ 	bgez	$t5,.L0f13af84
/*  f13af70:	468021a0 */ 	cvt.s.w	$f6,$f4
/*  f13af74:	3c014f80 */ 	lui	$at,0x4f80
/*  f13af78:	44814000 */ 	mtc1	$at,$f8
/*  f13af7c:	00000000 */ 	nop
/*  f13af80:	46083180 */ 	add.s	$f6,$f6,$f8
.L0f13af84:
/*  f13af84:	3c014596 */ 	lui	$at,0x4596
/*  f13af88:	44815000 */ 	mtc1	$at,$f10
/*  f13af8c:	3c01800a */ 	lui	$at,%hi(var800a4160)
/*  f13af90:	460a3403 */ 	div.s	$f16,$f6,$f10
/*  f13af94:	0fc4e267 */ 	jal	func0f13899c
/*  f13af98:	e4304160 */ 	swc1	$f16,%lo(var800a4160)($at)
/*  f13af9c:	8e0e0000 */ 	lw	$t6,0x0($s0)
/*  f13afa0:	91d841f4 */ 	lbu	$t8,0x41f4($t6)
/*  f13afa4:	13000005 */ 	beqz	$t8,.L0f13afbc
/*  f13afa8:	00000000 */ 	nop
/*  f13afac:	0fc4e859 */ 	jal	func0f13a164
/*  f13afb0:	00000000 */ 	nop
/*  f13afb4:	1000001b */ 	b	.L0f13b024
/*  f13afb8:	8e020000 */ 	lw	$v0,0x0($s0)
.L0f13afbc:
/*  f13afbc:	0c004b70 */ 	jal	random
/*  f13afc0:	00000000 */ 	nop
/*  f13afc4:	44829000 */ 	mtc1	$v0,$f18
/*  f13afc8:	3c014f80 */ 	lui	$at,0x4f80
/*  f13afcc:	04410004 */ 	bgez	$v0,.L0f13afe0
/*  f13afd0:	46809120 */ 	cvt.s.w	$f4,$f18
/*  f13afd4:	44814000 */ 	mtc1	$at,$f8
/*  f13afd8:	00000000 */ 	nop
/*  f13afdc:	46082100 */ 	add.s	$f4,$f4,$f8
.L0f13afe0:
/*  f13afe0:	3c012f80 */ 	lui	$at,0x2f80
/*  f13afe4:	44813000 */ 	mtc1	$at,$f6
/*  f13afe8:	3c017f1b */ 	lui	$at,%hi(var7f1b5930)
/*  f13afec:	c4305930 */ 	lwc1	$f16,%lo(var7f1b5930)($at)
/*  f13aff0:	46062282 */ 	mul.s	$f10,$f4,$f6
/*  f13aff4:	00002025 */ 	or	$a0,$zero,$zero
/*  f13aff8:	4610503c */ 	c.lt.s	$f10,$f16
/*  f13affc:	00000000 */ 	nop
/*  f13b000:	45020008 */ 	bc1fl	.L0f13b024
/*  f13b004:	8e020000 */ 	lw	$v0,0x0($s0)
/*  f13b008:	0c0053d8 */ 	jal	func00014f60
/*  f13b00c:	24050030 */ 	addiu	$a1,$zero,0x30
/*  f13b010:	54400004 */ 	bnezl	$v0,.L0f13b024
/*  f13b014:	8e020000 */ 	lw	$v0,0x0($s0)
/*  f13b018:	0fc4e0e3 */ 	jal	func0f13838c
/*  f13b01c:	2404ffff */ 	addiu	$a0,$zero,-1
/*  f13b020:	8e020000 */ 	lw	$v0,0x0($s0)
.L0f13b024:
/*  f13b024:	904f41f4 */ 	lbu	$t7,0x41f4($v0)
/*  f13b028:	55e0000a */ 	bnezl	$t7,.L0f13b054
/*  f13b02c:	8fbf001c */ 	lw	$ra,0x1c($sp)
/*  f13b030:	8c434204 */ 	lw	$v1,0x4204($v0)
/*  f13b034:	3c19800a */ 	lui	$t9,%hi(g_Vars)
/*  f13b038:	2c610550 */ 	sltiu	$at,$v1,0x550
/*  f13b03c:	50200005 */ 	beqzl	$at,.L0f13b054
/*  f13b040:	8fbf001c */ 	lw	$ra,0x1c($sp)
/*  f13b044:	8f399fc0 */ 	lw	$t9,%lo(g_Vars)($t9)
/*  f13b048:	00794021 */ 	addu	$t0,$v1,$t9
/*  f13b04c:	ac484204 */ 	sw	$t0,0x4204($v0)
/*  f13b050:	8fbf001c */ 	lw	$ra,0x1c($sp)
.L0f13b054:
/*  f13b054:	8fb00018 */ 	lw	$s0,0x18($sp)
/*  f13b058:	27bd0020 */ 	addiu	$sp,$sp,0x20
/*  f13b05c:	03e00008 */ 	jr	$ra
/*  f13b060:	00000000 */ 	nop
);

GLOBAL_ASM(
glabel func0f13b064
.late_rodata
glabel var7f1b5934
.word 0xbe86051b
glabel var7f1b5938
.word 0x4516d000
glabel var7f1b593c
.word 0x44504000
glabel var7f1b5940
.word 0x428db852
glabel var7f1b5944
.word 0xc5002000
glabel var7f1b5948
.word 0x3fbbc6a8
.text
/*  f13b064:	27bdff58 */ 	addiu	$sp,$sp,-168
/*  f13b068:	afbf001c */ 	sw	$ra,0x1c($sp)
/*  f13b06c:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f13b070:	0fc59e66 */ 	jal	func0f167998
/*  f13b074:	00808025 */ 	or	$s0,$a0,$zero
/*  f13b078:	afa20064 */ 	sw	$v0,0x64($sp)
/*  f13b07c:	0fc54c77 */ 	jal	func0f1531dc
/*  f13b080:	00002025 */ 	or	$a0,$zero,$zero
/*  f13b084:	240e0001 */ 	addiu	$t6,$zero,0x1
/*  f13b088:	3c018008 */ 	lui	$at,%hi(g_ScreenWidthMultiplier)
/*  f13b08c:	ac2efac0 */ 	sw	$t6,%lo(g_ScreenWidthMultiplier)($at)
/*  f13b090:	0c002ca0 */ 	jal	func0000b280
/*  f13b094:	02002025 */ 	or	$a0,$s0,$zero
/*  f13b098:	0c002c74 */ 	jal	func0000b1d0
/*  f13b09c:	00402025 */ 	or	$a0,$v0,$zero
/*  f13b0a0:	00402025 */ 	or	$a0,$v0,$zero
/*  f13b0a4:	0fc4e12d */ 	jal	func0f1384b4
/*  f13b0a8:	240500ff */ 	addiu	$a1,$zero,0xff
/*  f13b0ac:	3c0fed00 */ 	lui	$t7,0xed00
/*  f13b0b0:	35ef0078 */ 	ori	$t7,$t7,0x78
/*  f13b0b4:	afa20048 */ 	sw	$v0,0x48($sp)
/*  f13b0b8:	ac4f0000 */ 	sw	$t7,0x0($v0)
/*  f13b0bc:	0c002f02 */ 	jal	viGetX
/*  f13b0c0:	24500008 */ 	addiu	$s0,$v0,0x8
/*  f13b0c4:	0c002f06 */ 	jal	viGetY
/*  f13b0c8:	a7a20036 */ 	sh	$v0,0x36($sp)
/*  f13b0cc:	2458ffe2 */ 	addiu	$t8,$v0,-30
/*  f13b0d0:	44982000 */ 	mtc1	$t8,$f4
/*  f13b0d4:	87aa0036 */ 	lh	$t2,0x36($sp)
/*  f13b0d8:	3c014080 */ 	lui	$at,0x4080
/*  f13b0dc:	468021a0 */ 	cvt.s.w	$f6,$f4
/*  f13b0e0:	448a8000 */ 	mtc1	$t2,$f16
/*  f13b0e4:	44810000 */ 	mtc1	$at,$f0
/*  f13b0e8:	8fb80048 */ 	lw	$t8,0x48($sp)
/*  f13b0ec:	468084a0 */ 	cvt.s.w	$f18,$f16
/*  f13b0f0:	46003202 */ 	mul.s	$f8,$f6,$f0
/*  f13b0f4:	00000000 */ 	nop
/*  f13b0f8:	46009102 */ 	mul.s	$f4,$f18,$f0
/*  f13b0fc:	4600428d */ 	trunc.w.s	$f10,$f8
/*  f13b100:	4600218d */ 	trunc.w.s	$f6,$f4
/*  f13b104:	44085000 */ 	mfc1	$t0,$f10
/*  f13b108:	440c3000 */ 	mfc1	$t4,$f6
/*  f13b10c:	31090fff */ 	andi	$t1,$t0,0xfff
/*  f13b110:	318d0fff */ 	andi	$t5,$t4,0xfff
/*  f13b114:	000d7300 */ 	sll	$t6,$t5,0xc
/*  f13b118:	012e7825 */ 	or	$t7,$t1,$t6
/*  f13b11c:	0fc4eb83 */ 	jal	func0f13ae0c
/*  f13b120:	af0f0004 */ 	sw	$t7,0x4($t8)
/*  f13b124:	3c07800a */ 	lui	$a3,%hi(var800a4170)
/*  f13b128:	24e74170 */ 	addiu	$a3,$a3,%lo(var800a4170)
/*  f13b12c:	8ce30000 */ 	lw	$v1,0x0($a3)
/*  f13b130:	906441f4 */ 	lbu	$a0,0x41f4($v1)
/*  f13b134:	14800007 */ 	bnez	$a0,.L0f13b154
/*  f13b138:	00000000 */ 	nop
/*  f13b13c:	8c624204 */ 	lw	$v0,0x4204($v1)
/*  f13b140:	2c41003c */ 	sltiu	$at,$v0,0x3c
/*  f13b144:	14200003 */ 	bnez	$at,.L0f13b154
/*  f13b148:	2c4104b1 */ 	sltiu	$at,$v0,0x4b1
/*  f13b14c:	142000bd */ 	bnez	$at,.L0f13b444
/*  f13b150:	00000000 */ 	nop
.L0f13b154:
/*  f13b154:	14800066 */ 	bnez	$a0,.L0f13b2f0
/*  f13b158:	00000000 */ 	nop
/*  f13b15c:	8c794204 */ 	lw	$t9,0x4204($v1)
/*  f13b160:	3c058008 */ 	lui	$a1,%hi(var8007f130)
/*  f13b164:	24a5f130 */ 	addiu	$a1,$a1,%lo(var8007f130)
/*  f13b168:	2f2104b1 */ 	sltiu	$at,$t9,0x4b1
/*  f13b16c:	14200060 */ 	bnez	$at,.L0f13b2f0
/*  f13b170:	00000000 */ 	nop
/*  f13b174:	8ca80000 */ 	lw	$t0,0x0($a1)
/*  f13b178:	240a0001 */ 	addiu	$t2,$zero,0x1
/*  f13b17c:	24642ef0 */ 	addiu	$a0,$v1,0x2ef0
/*  f13b180:	15000007 */ 	bnez	$t0,.L0f13b1a0
/*  f13b184:	3c018008 */ 	lui	$at,%hi(var8007f6dc)
/*  f13b188:	acaa0000 */ 	sw	$t2,0x0($a1)
/*  f13b18c:	0fc3cde9 */ 	jal	func0f0f37a4
/*  f13b190:	ac20f6dc */ 	sw	$zero,%lo(var8007f6dc)($at)
/*  f13b194:	3c07800a */ 	lui	$a3,%hi(var800a4170)
/*  f13b198:	24e74170 */ 	addiu	$a3,$a3,%lo(var800a4170)
/*  f13b19c:	8ce30000 */ 	lw	$v1,0x0($a3)
.L0f13b1a0:
/*  f13b1a0:	3c028008 */ 	lui	$v0,%hi(var8007f6dc)
/*  f13b1a4:	3c0b800a */ 	lui	$t3,%hi(g_Vars+0x40)
/*  f13b1a8:	8c42f6dc */ 	lw	$v0,%lo(var8007f6dc)($v0)
/*  f13b1ac:	8d6ba000 */ 	lw	$t3,%lo(g_Vars+0x40)($t3)
/*  f13b1b0:	44800000 */ 	mtc1	$zero,$f0
/*  f13b1b4:	004b1021 */ 	addu	$v0,$v0,$t3
/*  f13b1b8:	2c413841 */ 	sltiu	$at,$v0,0x3841
/*  f13b1bc:	54200003 */ 	bnezl	$at,.L0f13b1cc
/*  f13b1c0:	e460343c */ 	swc1	$f0,0x343c($v1)
/*  f13b1c4:	00001025 */ 	or	$v0,$zero,$zero
/*  f13b1c8:	e460343c */ 	swc1	$f0,0x343c($v1)
.L0f13b1cc:
/*  f13b1cc:	8cec0000 */ 	lw	$t4,0x0($a3)
/*  f13b1d0:	3c017f1b */ 	lui	$at,%hi(var7f1b5934)
/*  f13b1d4:	44829000 */ 	mtc1	$v0,$f18
/*  f13b1d8:	e5803414 */ 	swc1	$f0,0x3414($t4)
/*  f13b1dc:	8ced0000 */ 	lw	$t5,0x0($a3)
/*  f13b1e0:	c4285934 */ 	lwc1	$f8,%lo(var7f1b5934)($at)
/*  f13b1e4:	3c014f80 */ 	lui	$at,0x4f80
/*  f13b1e8:	46809120 */ 	cvt.s.w	$f4,$f18
/*  f13b1ec:	e5a83438 */ 	swc1	$f8,0x3438($t5)
/*  f13b1f0:	8ce30000 */ 	lw	$v1,0x0($a3)
/*  f13b1f4:	c46a3438 */ 	lwc1	$f10,0x3438($v1)
/*  f13b1f8:	e46a3410 */ 	swc1	$f10,0x3410($v1)
/*  f13b1fc:	8ce90000 */ 	lw	$t1,0x0($a3)
/*  f13b200:	e5203440 */ 	swc1	$f0,0x3440($t1)
/*  f13b204:	8ce30000 */ 	lw	$v1,0x0($a3)
/*  f13b208:	c4703440 */ 	lwc1	$f16,0x3440($v1)
/*  f13b20c:	04410004 */ 	bgez	$v0,.L0f13b220
/*  f13b210:	e4703418 */ 	swc1	$f16,0x3418($v1)
/*  f13b214:	44813000 */ 	mtc1	$at,$f6
/*  f13b218:	00000000 */ 	nop
/*  f13b21c:	46062100 */ 	add.s	$f4,$f4,$f6
.L0f13b220:
/*  f13b220:	3c014661 */ 	lui	$at,0x4661
/*  f13b224:	44814000 */ 	mtc1	$at,$f8
/*  f13b228:	3c017f1b */ 	lui	$at,%hi(var7f1b5938)
/*  f13b22c:	c4305938 */ 	lwc1	$f16,%lo(var7f1b5938)($at)
/*  f13b230:	46082283 */ 	div.s	$f10,$f4,$f8
/*  f13b234:	3c017f1b */ 	lui	$at,%hi(var7f1b593c)
/*  f13b238:	c426593c */ 	lwc1	$f6,%lo(var7f1b593c)($at)
/*  f13b23c:	8cee0000 */ 	lw	$t6,0x0($a3)
/*  f13b240:	3c017f1b */ 	lui	$at,%hi(var7f1b5940)
/*  f13b244:	240804b0 */ 	addiu	$t0,$zero,0x4b0
/*  f13b248:	02002025 */ 	or	$a0,$s0,$zero
/*  f13b24c:	24060004 */ 	addiu	$a2,$zero,0x4
/*  f13b250:	46105482 */ 	mul.s	$f18,$f10,$f16
/*  f13b254:	46123101 */ 	sub.s	$f4,$f6,$f18
/*  f13b258:	e5c43428 */ 	swc1	$f4,0x3428($t6)
/*  f13b25c:	8cef0000 */ 	lw	$t7,0x0($a3)
/*  f13b260:	c4285940 */ 	lwc1	$f8,%lo(var7f1b5940)($at)
/*  f13b264:	3c017f1b */ 	lui	$at,%hi(var7f1b5944)
/*  f13b268:	e5e8342c */ 	swc1	$f8,0x342c($t7)
/*  f13b26c:	8cf80000 */ 	lw	$t8,0x0($a3)
/*  f13b270:	c42a5944 */ 	lwc1	$f10,%lo(var7f1b5944)($at)
/*  f13b274:	3c017f1b */ 	lui	$at,%hi(var7f1b5948)
/*  f13b278:	e70a3430 */ 	swc1	$f10,0x3430($t8)
/*  f13b27c:	8cf90000 */ 	lw	$t9,0x0($a3)
/*  f13b280:	c4305948 */ 	lwc1	$f16,%lo(var7f1b5948)($at)
/*  f13b284:	3c018008 */ 	lui	$at,%hi(var8007f6dc)
/*  f13b288:	e7303434 */ 	swc1	$f16,0x3434($t9)
/*  f13b28c:	8cea0000 */ 	lw	$t2,0x0($a3)
/*  f13b290:	ad482efc */ 	sw	$t0,0x2efc($t2)
/*  f13b294:	8ce30000 */ 	lw	$v1,0x0($a3)
/*  f13b298:	906c34a1 */ 	lbu	$t4,0x34a1($v1)
/*  f13b29c:	358d0002 */ 	ori	$t5,$t4,0x2
/*  f13b2a0:	a06d34a1 */ 	sb	$t5,0x34a1($v1)
/*  f13b2a4:	8ce90000 */ 	lw	$t1,0x0($a3)
/*  f13b2a8:	ad2034a4 */ 	sw	$zero,0x34a4($t1)
/*  f13b2ac:	8ce50000 */ 	lw	$a1,0x0($a3)
/*  f13b2b0:	ac22f6dc */ 	sw	$v0,%lo(var8007f6dc)($at)
/*  f13b2b4:	0fc3ce2c */ 	jal	func0f0f38b0
/*  f13b2b8:	24a52ef0 */ 	addiu	$a1,$a1,0x2ef0
/*  f13b2bc:	3c0e0102 */ 	lui	$t6,0x102
/*  f13b2c0:	35ce0040 */ 	ori	$t6,$t6,0x40
/*  f13b2c4:	afa20040 */ 	sw	$v0,0x40($sp)
/*  f13b2c8:	ac4e0000 */ 	sw	$t6,0x0($v0)
/*  f13b2cc:	8fa40064 */ 	lw	$a0,0x64($sp)
/*  f13b2d0:	0c012d20 */ 	jal	osVirtualToPhysical
/*  f13b2d4:	24500008 */ 	addiu	$s0,$v0,0x8
/*  f13b2d8:	8faf0040 */ 	lw	$t7,0x40($sp)
/*  f13b2dc:	02002025 */ 	or	$a0,$s0,$zero
/*  f13b2e0:	240500d8 */ 	addiu	$a1,$zero,0xd8
/*  f13b2e4:	0fc4e12d */ 	jal	func0f1384b4
/*  f13b2e8:	ade20004 */ 	sw	$v0,0x4($t7)
/*  f13b2ec:	00408025 */ 	or	$s0,$v0,$zero
.L0f13b2f0:
/*  f13b2f0:	0c00566c */ 	jal	func000159b0
/*  f13b2f4:	27a40068 */ 	addiu	$a0,$sp,0x68
/*  f13b2f8:	27a40068 */ 	addiu	$a0,$sp,0x68
/*  f13b2fc:	0c005815 */ 	jal	func00016054
/*  f13b300:	8fa50064 */ 	lw	$a1,0x64($sp)
/*  f13b304:	0fc2d406 */ 	jal	currentPlayerSetMatrix
/*  f13b308:	27a40068 */ 	addiu	$a0,$sp,0x68
/*  f13b30c:	3c180102 */ 	lui	$t8,0x102
/*  f13b310:	37180040 */ 	ori	$t8,$t8,0x40
/*  f13b314:	02001825 */ 	or	$v1,$s0,$zero
/*  f13b318:	ac780000 */ 	sw	$t8,0x0($v1)
/*  f13b31c:	afa3003c */ 	sw	$v1,0x3c($sp)
/*  f13b320:	8fa40064 */ 	lw	$a0,0x64($sp)
/*  f13b324:	0c012d20 */ 	jal	osVirtualToPhysical
/*  f13b328:	26100008 */ 	addiu	$s0,$s0,0x8
/*  f13b32c:	8fa3003c */ 	lw	$v1,0x3c($sp)
/*  f13b330:	3c01c47a */ 	lui	$at,0xc47a
/*  f13b334:	44810000 */ 	mtc1	$at,$f0
/*  f13b338:	ac620004 */ 	sw	$v0,0x4($v1)
/*  f13b33c:	3c01c2c8 */ 	lui	$at,0xc2c8
/*  f13b340:	44803000 */ 	mtc1	$zero,$f6
/*  f13b344:	44809000 */ 	mtc1	$zero,$f18
/*  f13b348:	44812000 */ 	mtc1	$at,$f4
/*  f13b34c:	02002025 */ 	or	$a0,$s0,$zero
/*  f13b350:	e7a00058 */ 	swc1	$f0,0x58($sp)
/*  f13b354:	e7a0005c */ 	swc1	$f0,0x5c($sp)
/*  f13b358:	e7a00060 */ 	swc1	$f0,0x60($sp)
/*  f13b35c:	e7a6004c */ 	swc1	$f6,0x4c($sp)
/*  f13b360:	e7b20050 */ 	swc1	$f18,0x50($sp)
/*  f13b364:	0fc4dfc9 */ 	jal	func0f137f24
/*  f13b368:	e7a40054 */ 	swc1	$f4,0x54($sp)
/*  f13b36c:	0fc4e4a4 */ 	jal	func0f139290
/*  f13b370:	00402025 */ 	or	$a0,$v0,$zero
/*  f13b374:	3c07800a */ 	lui	$a3,%hi(var800a4170)
/*  f13b378:	24e74170 */ 	addiu	$a3,$a3,%lo(var800a4170)
/*  f13b37c:	8ce30000 */ 	lw	$v1,0x0($a3)
/*  f13b380:	00408025 */ 	or	$s0,$v0,$zero
/*  f13b384:	906441f4 */ 	lbu	$a0,0x41f4($v1)
/*  f13b388:	10800009 */ 	beqz	$a0,.L0f13b3b0
/*  f13b38c:	00000000 */ 	nop
/*  f13b390:	0fc351e7 */ 	jal	func0f0d479c
/*  f13b394:	00402025 */ 	or	$a0,$v0,$zero
/*  f13b398:	0fc4e8fb */ 	jal	func0f13a3ec
/*  f13b39c:	00402025 */ 	or	$a0,$v0,$zero
/*  f13b3a0:	3c03800a */ 	lui	$v1,%hi(var800a4170)
/*  f13b3a4:	8c634170 */ 	lw	$v1,%lo(var800a4170)($v1)
/*  f13b3a8:	00408025 */ 	or	$s0,$v0,$zero
/*  f13b3ac:	906441f4 */ 	lbu	$a0,0x41f4($v1)
.L0f13b3b0:
/*  f13b3b0:	14800024 */ 	bnez	$a0,.L0f13b444
/*  f13b3b4:	00000000 */ 	nop
/*  f13b3b8:	8c624204 */ 	lw	$v0,0x4204($v1)
/*  f13b3bc:	00002825 */ 	or	$a1,$zero,$zero
/*  f13b3c0:	240300ff */ 	addiu	$v1,$zero,0xff
/*  f13b3c4:	2c41003c */ 	sltiu	$at,$v0,0x3c
/*  f13b3c8:	5020000b */ 	beqzl	$at,.L0f13b3f8
/*  f13b3cc:	2c4104b1 */ 	sltiu	$at,$v0,0x4b1
/*  f13b3d0:	00430019 */ 	multu	$v0,$v1
/*  f13b3d4:	2401003c */ 	addiu	$at,$zero,0x3c
/*  f13b3d8:	00002812 */ 	mflo	$a1
/*  f13b3dc:	00000000 */ 	nop
/*  f13b3e0:	00000000 */ 	nop
/*  f13b3e4:	00a1001b */ 	divu	$zero,$a1,$at
/*  f13b3e8:	00002812 */ 	mflo	$a1
/*  f13b3ec:	00000000 */ 	nop
/*  f13b3f0:	00000000 */ 	nop
/*  f13b3f4:	2c4104b1 */ 	sltiu	$at,$v0,0x4b1
.L0f13b3f8:
/*  f13b3f8:	1420000d */ 	bnez	$at,.L0f13b430
/*  f13b3fc:	240300ff */ 	addiu	$v1,$zero,0xff
/*  f13b400:	2c4104ec */ 	sltiu	$at,$v0,0x4ec
/*  f13b404:	1020000a */ 	beqz	$at,.L0f13b430
/*  f13b408:	2448fb50 */ 	addiu	$t0,$v0,-1200
/*  f13b40c:	01030019 */ 	multu	$t0,$v1
/*  f13b410:	2401003c */ 	addiu	$at,$zero,0x3c
/*  f13b414:	00005012 */ 	mflo	$t2
/*  f13b418:	00000000 */ 	nop
/*  f13b41c:	00000000 */ 	nop
/*  f13b420:	0141001b */ 	divu	$zero,$t2,$at
/*  f13b424:	00005812 */ 	mflo	$t3
/*  f13b428:	006b2823 */ 	subu	$a1,$v1,$t3
/*  f13b42c:	00000000 */ 	nop
.L0f13b430:
/*  f13b430:	10a00004 */ 	beqz	$a1,.L0f13b444
/*  f13b434:	00000000 */ 	nop
/*  f13b438:	0fc4e12d */ 	jal	func0f1384b4
/*  f13b43c:	02002025 */ 	or	$a0,$s0,$zero
/*  f13b440:	00408025 */ 	or	$s0,$v0,$zero
.L0f13b444:
/*  f13b444:	3c0c8008 */ 	lui	$t4,%hi(var8007f138)
/*  f13b448:	8d8cf138 */ 	lw	$t4,%lo(var8007f138)($t4)
/*  f13b44c:	00002025 */ 	or	$a0,$zero,$zero
/*  f13b450:	51800018 */ 	beqzl	$t4,.L0f13b4b4
/*  f13b454:	8fbf001c */ 	lw	$ra,0x1c($sp)
/*  f13b458:	0c005408 */ 	jal	func00015020
/*  f13b45c:	3405ffcf */ 	dli	$a1,0xffcf
/*  f13b460:	10400013 */ 	beqz	$v0,.L0f13b4b0
/*  f13b464:	240d0026 */ 	addiu	$t5,$zero,0x26
/*  f13b468:	3c018006 */ 	lui	$at,%hi(g_TitleNextStage)
/*  f13b46c:	ac2d24e4 */ 	sw	$t5,%lo(g_TitleNextStage)($at)
/*  f13b470:	0fc068d5 */ 	jal	setNumPlayers
/*  f13b474:	24040001 */ 	addiu	$a0,$zero,0x1
/*  f13b478:	3c048006 */ 	lui	$a0,%hi(g_TitleNextStage)
/*  f13b47c:	0c003a57 */ 	jal	func0000e95c
/*  f13b480:	8c8424e4 */ 	lw	$a0,%lo(g_TitleNextStage)($a0)
/*  f13b484:	3c01800a */ 	lui	$at,%hi(g_Vars+0x294)
/*  f13b488:	ac20a254 */ 	sw	$zero,%lo(g_Vars+0x294)($at)
/*  f13b48c:	2402ffff */ 	addiu	$v0,$zero,-1
/*  f13b490:	3c01800a */ 	lui	$at,%hi(g_Vars+0x298)
/*  f13b494:	ac22a258 */ 	sw	$v0,%lo(g_Vars+0x298)($at)
/*  f13b498:	3c01800a */ 	lui	$at,%hi(g_Vars+0x29c)
/*  f13b49c:	ac22a25c */ 	sw	$v0,%lo(g_Vars+0x29c)($at)
/*  f13b4a0:	0fc5b36a */ 	jal	setDifficulty
/*  f13b4a4:	00002025 */ 	or	$a0,$zero,$zero
/*  f13b4a8:	0c0027b1 */ 	jal	func00009ec4
/*  f13b4ac:	24040001 */ 	addiu	$a0,$zero,0x1
.L0f13b4b0:
/*  f13b4b0:	8fbf001c */ 	lw	$ra,0x1c($sp)
.L0f13b4b4:
/*  f13b4b4:	02001025 */ 	or	$v0,$s0,$zero
/*  f13b4b8:	8fb00018 */ 	lw	$s0,0x18($sp)
/*  f13b4bc:	03e00008 */ 	jr	$ra
/*  f13b4c0:	27bd00a8 */ 	addiu	$sp,$sp,0xa8
);

GLOBAL_ASM(
glabel func0f13b4c4
.late_rodata
glabel var7f1b594c
.word 0x41033333
glabel var7f1b5950
.word 0xc0833333
glabel var7f1b5954
.word 0x3b80c73b
.text
/*  f13b4c4:	3c01800a */ 	lui	$at,%hi(var800a4164)
/*  f13b4c8:	ac204164 */ 	sw	$zero,%lo(var800a4164)($at)
/*  f13b4cc:	3c01800a */ 	lui	$at,%hi(var800a416c)
/*  f13b4d0:	27bdffc8 */ 	addiu	$sp,$sp,-56
/*  f13b4d4:	ac20416c */ 	sw	$zero,%lo(var800a416c)($at)
/*  f13b4d8:	afbf0034 */ 	sw	$ra,0x34($sp)
/*  f13b4dc:	3c018008 */ 	lui	$at,%hi(var8007f130)
/*  f13b4e0:	afb00030 */ 	sw	$s0,0x30($sp)
/*  f13b4e4:	ac20f130 */ 	sw	$zero,%lo(var8007f130)($at)
/*  f13b4e8:	24044240 */ 	addiu	$a0,$zero,0x4240
/*  f13b4ec:	0c0048f2 */ 	jal	malloc
/*  f13b4f0:	24050004 */ 	addiu	$a1,$zero,0x4
/*  f13b4f4:	3c10800a */ 	lui	$s0,%hi(var800a4170)
/*  f13b4f8:	26104170 */ 	addiu	$s0,$s0,%lo(var800a4170)
/*  f13b4fc:	ae020000 */ 	sw	$v0,0x0($s0)
/*  f13b500:	a0402eec */ 	sb	$zero,0x2eec($v0)
/*  f13b504:	8e0f0000 */ 	lw	$t7,0x0($s0)
/*  f13b508:	2404ffff */ 	addiu	$a0,$zero,-1
/*  f13b50c:	a1e041b0 */ 	sb	$zero,0x41b0($t7)
/*  f13b510:	8e180000 */ 	lw	$t8,0x0($s0)
/*  f13b514:	0fc4e0e3 */ 	jal	func0f13838c
/*  f13b518:	a30041b1 */ 	sb	$zero,0x41b1($t8)
/*  f13b51c:	24040002 */ 	addiu	$a0,$zero,0x2
/*  f13b520:	00002825 */ 	or	$a1,$zero,$zero
/*  f13b524:	0fc4dfaa */ 	jal	func0f137ea8
/*  f13b528:	24060001 */ 	addiu	$a2,$zero,0x1
/*  f13b52c:	24040003 */ 	addiu	$a0,$zero,0x3
/*  f13b530:	24050001 */ 	addiu	$a1,$zero,0x1
/*  f13b534:	0fc4dfaa */ 	jal	func0f137ea8
/*  f13b538:	24060001 */ 	addiu	$a2,$zero,0x1
/*  f13b53c:	8e080000 */ 	lw	$t0,0x0($s0)
/*  f13b540:	24190001 */ 	addiu	$t9,$zero,0x1
/*  f13b544:	0fc4e1c3 */ 	jal	func0f13870c
/*  f13b548:	a11941f4 */ 	sb	$t9,0x41f4($t0)
/*  f13b54c:	0fc4e7f8 */ 	jal	func0f139fe0
/*  f13b550:	00000000 */ 	nop
/*  f13b554:	8e040000 */ 	lw	$a0,0x0($s0)
/*  f13b558:	3c050002 */ 	lui	$a1,0x2
/*  f13b55c:	34a55800 */ 	ori	$a1,$a1,0x5800
/*  f13b560:	24060001 */ 	addiu	$a2,$zero,0x1
/*  f13b564:	0fc3e2ed */ 	jal	func0f0f8bb4
/*  f13b568:	24842ef0 */ 	addiu	$a0,$a0,0x2ef0
/*  f13b56c:	8e090000 */ 	lw	$t1,0x0($s0)
/*  f13b570:	44800000 */ 	mtc1	$zero,$f0
/*  f13b574:	3c013f80 */ 	lui	$at,0x3f80
/*  f13b578:	ad203470 */ 	sw	$zero,0x3470($t1)
/*  f13b57c:	8e040000 */ 	lw	$a0,0x0($s0)
/*  f13b580:	44812000 */ 	mtc1	$at,$f4
/*  f13b584:	240a0005 */ 	addiu	$t2,$zero,0x5
/*  f13b588:	44050000 */ 	mfc1	$a1,$f0
/*  f13b58c:	44060000 */ 	mfc1	$a2,$f0
/*  f13b590:	44070000 */ 	mfc1	$a3,$f0
/*  f13b594:	afaa0020 */ 	sw	$t2,0x20($sp)
/*  f13b598:	e7a00018 */ 	swc1	$f0,0x18($sp)
/*  f13b59c:	e7a00014 */ 	swc1	$f0,0x14($sp)
/*  f13b5a0:	e7a00010 */ 	swc1	$f0,0x10($sp)
/*  f13b5a4:	24842ef0 */ 	addiu	$a0,$a0,0x2ef0
/*  f13b5a8:	0fc3cdcb */ 	jal	func0f0f372c
/*  f13b5ac:	e7a4001c */ 	swc1	$f4,0x1c($sp)
/*  f13b5b0:	3c0142b4 */ 	lui	$at,0x42b4
/*  f13b5b4:	44813000 */ 	mtc1	$at,$f6
/*  f13b5b8:	8e0b0000 */ 	lw	$t3,0x0($s0)
/*  f13b5bc:	3c017f1b */ 	lui	$at,%hi(var7f1b594c)
/*  f13b5c0:	44800000 */ 	mtc1	$zero,$f0
/*  f13b5c4:	e566342c */ 	swc1	$f6,0x342c($t3)
/*  f13b5c8:	8e0c0000 */ 	lw	$t4,0x0($s0)
/*  f13b5cc:	c428594c */ 	lwc1	$f8,%lo(var7f1b594c)($at)
/*  f13b5d0:	3c017f1b */ 	lui	$at,%hi(var7f1b5950)
/*  f13b5d4:	3c048008 */ 	lui	$a0,%hi(var8007f134)
/*  f13b5d8:	e5883400 */ 	swc1	$f8,0x3400($t4)
/*  f13b5dc:	8e0d0000 */ 	lw	$t5,0x0($s0)
/*  f13b5e0:	c42a5950 */ 	lwc1	$f10,%lo(var7f1b5950)($at)
/*  f13b5e4:	3c017f1b */ 	lui	$at,%hi(var7f1b5954)
/*  f13b5e8:	2418003c */ 	addiu	$t8,$zero,0x3c
/*  f13b5ec:	e5aa3404 */ 	swc1	$f10,0x3404($t5)
/*  f13b5f0:	8e0e0000 */ 	lw	$t6,0x0($s0)
/*  f13b5f4:	c4305954 */ 	lwc1	$f16,%lo(var7f1b5954)($at)
/*  f13b5f8:	2484f134 */ 	addiu	$a0,$a0,%lo(var8007f134)
/*  f13b5fc:	3c018008 */ 	lui	$at,%hi(var8007f138)
/*  f13b600:	e5d0340c */ 	swc1	$f16,0x340c($t6)
/*  f13b604:	8e0f0000 */ 	lw	$t7,0x0($s0)
/*  f13b608:	e5e0343c */ 	swc1	$f0,0x343c($t7)
/*  f13b60c:	8e020000 */ 	lw	$v0,0x0($s0)
/*  f13b610:	c452343c */ 	lwc1	$f18,0x343c($v0)
/*  f13b614:	e4523414 */ 	swc1	$f18,0x3414($v0)
/*  f13b618:	8e190000 */ 	lw	$t9,0x0($s0)
/*  f13b61c:	af383468 */ 	sw	$t8,0x3468($t9)
/*  f13b620:	8c830000 */ 	lw	$v1,0x0($a0)
/*  f13b624:	10600007 */ 	beqz	$v1,.L0f13b644
/*  f13b628:	ac23f138 */ 	sw	$v1,%lo(var8007f138)($at)
/*  f13b62c:	8e080000 */ 	lw	$t0,0x0($s0)
/*  f13b630:	ac800000 */ 	sw	$zero,0x0($a0)
/*  f13b634:	24090474 */ 	addiu	$t1,$zero,0x474
/*  f13b638:	a10041f4 */ 	sb	$zero,0x41f4($t0)
/*  f13b63c:	8e0a0000 */ 	lw	$t2,0x0($s0)
/*  f13b640:	ad494204 */ 	sw	$t1,0x4204($t2)
.L0f13b644:
/*  f13b644:	0fc2f5d9 */ 	jal	func0f0bd764
/*  f13b648:	00000000 */ 	nop
/*  f13b64c:	8fbf0034 */ 	lw	$ra,0x34($sp)
/*  f13b650:	8fb00030 */ 	lw	$s0,0x30($sp)
/*  f13b654:	27bd0038 */ 	addiu	$sp,$sp,0x38
/*  f13b658:	03e00008 */ 	jr	$ra
/*  f13b65c:	00000000 */ 	nop
);

GLOBAL_ASM(
glabel func0f13b660
/*  f13b660:	240e0001 */ 	addiu	$t6,$zero,0x1
/*  f13b664:	3c018008 */ 	lui	$at,%hi(var8007f134)
/*  f13b668:	03e00008 */ 	jr	$ra
/*  f13b66c:	ac2ef134 */ 	sw	$t6,%lo(var8007f134)($at)
);
