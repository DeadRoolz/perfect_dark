#include <ultra64.h>
#include "constants.h"
#include "game/bondbike.h"
#include "game/bondmove.h"
#include "game/chr/chraction.h"
#include "game/data/data_000000.h"
#include "game/data/data_0083d0.h"
#include "game/data/data_00e460.h"
#include "game/data/data_0160b0.h"
#include "game/data/data_01a3a0.h"
#include "game/data/data_020df0.h"
#include "game/data/data_02da90.h"
#include "game/game_0601b0.h"
#include "game/game_091e10.h"
#include "game/game_092610.h"
#include "game/game_095320.h"
#include "game/game_096ca0.h"
#include "game/game_097ba0.h"
#include "game/game_0b3350.h"
#include "game/game_0b63b0.h"
#include "game/game_113220.h"
#include "game/game_167ae0.h"
#include "game/pdoptions.h"
#include "game/propobj.h"
#include "gvars/gvars.h"
#include "lib/lib_04790.h"
#include "lib/lib_13900.h"
#include "lib/lib_159b0.h"
#include "lib/lib_16110.h"
#include "lib/lib_233c0.h"
#include "lib/lib_4a360.h"
#include "types.h"

const char var7f1adb10[] = "bondbike.c";

u32 var80070ee0 = 0x00000000;
u32 var80070ee4 = 0x00000000;
u32 var80070ee8 = 0x00000000;
u32 var80070eec = 0x00000000;
u32 var80070ef0 = 0x00000000;
u32 var80070ef4 = 0x00000000;

void currentPlayerBikeInit(void)
{
	struct hoverbikeobj *hoverbike = (struct hoverbikeobj *)g_Vars.currentplayer->hoverbike->obj;
	f32 matrix[16];

	g_Vars.currentplayer->bondmovemode = MOVEMODE_BIKE;
	g_Vars.currentplayer->unk1a7c = 0;
	g_Vars.currentplayer->guncloseroffset = 0;
	g_Vars.currentplayer->gunextraaimx = 0;
	g_Vars.currentplayer->gunextraaimy = 0;

	func0f0d2294();

	g_Vars.currentplayer->unk1a80 = 0;
	g_Vars.currentplayer->unk1a84 = 1;
	g_Vars.currentplayer->bondenterpos.x = g_Vars.currentplayer->prop->pos.x;
	g_Vars.currentplayer->bondenterpos.y = g_Vars.currentplayer->prop->pos.y;
	g_Vars.currentplayer->bondenterpos.z = g_Vars.currentplayer->prop->pos.z;

	func00015d54(hoverbike->base.realrot, matrix);
	func00015dd4(&hoverbike->base.prop->pos, matrix);
	func00015b68(matrix, &g_Vars.currentplayer->unk1a70, &g_Vars.currentplayer->bondenteraim);
	func00016b58(g_Vars.currentplayer->bondentermtx,
			0, 0, 0,
			-g_Vars.currentplayer->bond2.unk1c.x, -g_Vars.currentplayer->bond2.unk1c.y, -g_Vars.currentplayer->bond2.unk1c.z,
			g_Vars.currentplayer->bond2.unk28.x, g_Vars.currentplayer->bond2.unk28.y, g_Vars.currentplayer->bond2.unk28.z);

	g_Vars.currentplayer->speedtheta = 0;
	g_Vars.currentplayer->speedthetacontrol = 0;
	g_Vars.currentplayer->speedforwards = 0;
	g_Vars.currentplayer->speedsideways = 0;

	if (hoverbike->base.hidden & OBJHFLAG_00000080) {
		struct obj48 *obj48 = hoverbike->base.unk48;
		hoverbike->speed[0] = obj48->unk004.x;
		hoverbike->speed[1] = obj48->unk004.z;
		hoverbike->w = obj48->unk0dc;
	}

	func0f06ac90(g_Vars.currentplayer->hoverbike);

	hoverbike->base.hidden |= OBJHFLAG_04000000;
}

GLOBAL_ASM(
glabel func0f0d2184
/*  f0d2184:	3c0e800a */ 	lui	$t6,%hi(g_Vars+0x284)
/*  f0d2188:	8dcea244 */ 	lw	$t6,%lo(g_Vars+0x284)($t6)
/*  f0d218c:	27bdff98 */ 	addiu	$sp,$sp,-104
/*  f0d2190:	afbf0044 */ 	sw	$ra,0x44($sp)
/*  f0d2194:	8dcf1a6c */ 	lw	$t7,0x1a6c($t6)
/*  f0d2198:	3c01fbff */ 	lui	$at,0xfbff
/*  f0d219c:	3421ffff */ 	ori	$at,$at,0xffff
/*  f0d21a0:	8de40004 */ 	lw	$a0,0x4($t7)
/*  f0d21a4:	44803000 */ 	mtc1	$zero,$f6
/*  f0d21a8:	27a50054 */ 	addiu	$a1,$sp,0x54
/*  f0d21ac:	8c980040 */ 	lw	$t8,0x40($a0)
/*  f0d21b0:	c484009c */ 	lwc1	$f4,0x9c($a0)
/*  f0d21b4:	00003825 */ 	or	$a3,$zero,$zero
/*  f0d21b8:	0301c824 */ 	and	$t9,$t8,$at
/*  f0d21bc:	ac990040 */ 	sw	$t9,0x40($a0)
/*  f0d21c0:	e7a60058 */ 	swc1	$f6,0x58($sp)
/*  f0d21c4:	e7a40054 */ 	swc1	$f4,0x54($sp)
/*  f0d21c8:	c48800a0 */ 	lwc1	$f8,0xa0($a0)
/*  f0d21cc:	e7a8005c */ 	swc1	$f8,0x5c($sp)
/*  f0d21d0:	c48000ac */ 	lwc1	$f0,0xac($a0)
/*  f0d21d4:	afa00010 */ 	sw	$zero,0x10($sp)
/*  f0d21d8:	afa40064 */ 	sw	$a0,0x64($sp)
/*  f0d21dc:	44060000 */ 	mfc1	$a2,$f0
/*  f0d21e0:	0fc20a87 */ 	jal	func0f082a1c
/*  f0d21e4:	00000000 */ 	nop
/*  f0d21e8:	3c08800a */ 	lui	$t0,%hi(g_Vars+0x284)
/*  f0d21ec:	8d08a244 */ 	lw	$t0,%lo(g_Vars+0x284)($t0)
/*  f0d21f0:	24050001 */ 	addiu	$a1,$zero,0x1
/*  f0d21f4:	3406ffff */ 	dli	$a2,0xffff
/*  f0d21f8:	0fc249af */ 	jal	func0f0926bc
/*  f0d21fc:	8d041a6c */ 	lw	$a0,0x1a6c($t0)
/*  f0d2200:	3c09800a */ 	lui	$t1,%hi(g_Vars+0x284)
/*  f0d2204:	8d29a244 */ 	lw	$t1,%lo(g_Vars+0x284)($t1)
/*  f0d2208:	24050001 */ 	addiu	$a1,$zero,0x1
/*  f0d220c:	3406ffff */ 	dli	$a2,0xffff
/*  f0d2210:	0fc249af */ 	jal	func0f0926bc
/*  f0d2214:	8d2400bc */ 	lw	$a0,0xbc($t1)
/*  f0d2218:	3c0a800a */ 	lui	$t2,%hi(g_Vars+0x284)
/*  f0d221c:	8d4aa244 */ 	lw	$t2,%lo(g_Vars+0x284)($t2)
/*  f0d2220:	3c01bf80 */ 	lui	$at,0xbf80
/*  f0d2224:	44810000 */ 	mtc1	$at,$f0
/*  f0d2228:	8d451a6c */ 	lw	$a1,0x1a6c($t2)
/*  f0d222c:	240bffff */ 	addiu	$t3,$zero,-1
/*  f0d2230:	240cffff */ 	addiu	$t4,$zero,-1
/*  f0d2234:	afac002c */ 	sw	$t4,0x2c($sp)
/*  f0d2238:	afab0010 */ 	sw	$t3,0x10($sp)
/*  f0d223c:	afa00028 */ 	sw	$zero,0x28($sp)
/*  f0d2240:	afa00020 */ 	sw	$zero,0x20($sp)
/*  f0d2244:	afa0001c */ 	sw	$zero,0x1c($sp)
/*  f0d2248:	afa00018 */ 	sw	$zero,0x18($sp)
/*  f0d224c:	afa00014 */ 	sw	$zero,0x14($sp)
/*  f0d2250:	00002025 */ 	or	$a0,$zero,$zero
/*  f0d2254:	240680af */ 	addiu	$a2,$zero,-32593
/*  f0d2258:	2407ffff */ 	addiu	$a3,$zero,-1
/*  f0d225c:	e7a00038 */ 	swc1	$f0,0x38($sp)
/*  f0d2260:	e7a00034 */ 	swc1	$f0,0x34($sp)
/*  f0d2264:	e7a00030 */ 	swc1	$f0,0x30($sp)
/*  f0d2268:	0fc24e7e */ 	jal	func0f0939f8
/*  f0d226c:	e7a00024 */ 	swc1	$f0,0x24($sp)
/*  f0d2270:	8fa20064 */ 	lw	$v0,0x64($sp)
/*  f0d2274:	3c014000 */ 	lui	$at,0x4000
/*  f0d2278:	8c4d0008 */ 	lw	$t5,0x8($v0)
/*  f0d227c:	01a17025 */ 	or	$t6,$t5,$at
/*  f0d2280:	ac4e0008 */ 	sw	$t6,0x8($v0)
/*  f0d2284:	8fbf0044 */ 	lw	$ra,0x44($sp)
/*  f0d2288:	27bd0068 */ 	addiu	$sp,$sp,0x68
/*  f0d228c:	03e00008 */ 	jr	$ra
/*  f0d2290:	00000000 */ 	nop
);

void func0f0d2294(void)
{
	struct defaultobj *hoverbike = g_Vars.currentplayer->hoverbike->obj;

	g_Vars.currentplayer->unk1a70.x = 0.0f / hoverbike->model->unk14;
	g_Vars.currentplayer->unk1a70.y = 80.0f / hoverbike->model->unk14;
	g_Vars.currentplayer->unk1a70.z = -50.0f / hoverbike->model->unk14;
}

GLOBAL_ASM(
glabel func0f0d22f8
.late_rodata
glabel var7f1adb34
.word 0x40c907a9
.text
/*  f0d22f8:	27bdff90 */ 	addiu	$sp,$sp,-112
/*  f0d22fc:	afb00028 */ 	sw	$s0,0x28($sp)
/*  f0d2300:	3c10800a */ 	lui	$s0,%hi(g_Vars)
/*  f0d2304:	26109fc0 */ 	addiu	$s0,$s0,%lo(g_Vars)
/*  f0d2308:	8e020284 */ 	lw	$v0,0x284($s0)
/*  f0d230c:	afbf002c */ 	sw	$ra,0x2c($sp)
/*  f0d2310:	e7ac0070 */ 	swc1	$f12,0x70($sp)
/*  f0d2314:	e7ae0074 */ 	swc1	$f14,0x74($sp)
/*  f0d2318:	8c4e1af8 */ 	lw	$t6,0x1af8($v0)
/*  f0d231c:	55c0008a */ 	bnezl	$t6,.L0f0d2548
/*  f0d2320:	8fbf002c */ 	lw	$ra,0x2c($sp)
/*  f0d2324:	8c4f1a6c */ 	lw	$t7,0x1a6c($v0)
/*  f0d2328:	8de40004 */ 	lw	$a0,0x4($t7)
/*  f0d232c:	0fc1c836 */ 	jal	hoverpropGetTurnAngle
/*  f0d2330:	afa40068 */ 	sw	$a0,0x68($sp)
/*  f0d2334:	8e180284 */ 	lw	$t8,0x284($s0)
/*  f0d2338:	27a50038 */ 	addiu	$a1,$sp,0x38
/*  f0d233c:	27a60040 */ 	addiu	$a2,$sp,0x40
/*  f0d2340:	8f0400bc */ 	lw	$a0,0xbc($t8)
/*  f0d2344:	e7a00064 */ 	swc1	$f0,0x64($sp)
/*  f0d2348:	0fc3082e */ 	jal	propPlayerGetBbox
/*  f0d234c:	27a7003c */ 	addiu	$a3,$sp,0x3c
/*  f0d2350:	3c017f1b */ 	lui	$at,%hi(var7f1adb34)
/*  f0d2354:	c420db34 */ 	lwc1	$f0,%lo(var7f1adb34)($at)
/*  f0d2358:	c7ac0064 */ 	lwc1	$f12,0x64($sp)
/*  f0d235c:	c7b20070 */ 	lwc1	$f18,0x70($sp)
/*  f0d2360:	3c014120 */ 	lui	$at,0x4120
/*  f0d2364:	44813000 */ 	mtc1	$at,$f6
/*  f0d2368:	c7a40038 */ 	lwc1	$f4,0x38($sp)
/*  f0d236c:	46126300 */ 	add.s	$f12,$f12,$f18
/*  f0d2370:	c7aa0074 */ 	lwc1	$f10,0x74($sp)
/*  f0d2374:	46062200 */ 	add.s	$f8,$f4,$f6
/*  f0d2378:	460c003e */ 	c.le.s	$f0,$f12
/*  f0d237c:	46085400 */ 	add.s	$f16,$f10,$f8
/*  f0d2380:	45000002 */ 	bc1f	.L0f0d238c
/*  f0d2384:	e7b00074 */ 	swc1	$f16,0x74($sp)
/*  f0d2388:	46006301 */ 	sub.s	$f12,$f12,$f0
.L0f0d238c:
/*  f0d238c:	0c0068f7 */ 	jal	sinf
/*  f0d2390:	e7ac0064 */ 	swc1	$f12,0x64($sp)
/*  f0d2394:	c7a40074 */ 	lwc1	$f4,0x74($sp)
/*  f0d2398:	8e020284 */ 	lw	$v0,0x284($s0)
/*  f0d239c:	c7ac0064 */ 	lwc1	$f12,0x64($sp)
/*  f0d23a0:	46040182 */ 	mul.s	$f6,$f0,$f4
/*  f0d23a4:	8c591a6c */ 	lw	$t9,0x1a6c($v0)
/*  f0d23a8:	c72a0008 */ 	lwc1	$f10,0x8($t9)
/*  f0d23ac:	460a3200 */ 	add.s	$f8,$f6,$f10
/*  f0d23b0:	e7a80058 */ 	swc1	$f8,0x58($sp)
/*  f0d23b4:	8c491a6c */ 	lw	$t1,0x1a6c($v0)
/*  f0d23b8:	c530000c */ 	lwc1	$f16,0xc($t1)
/*  f0d23bc:	0c0068f4 */ 	jal	cosf
/*  f0d23c0:	e7b0005c */ 	swc1	$f16,0x5c($sp)
/*  f0d23c4:	c7b20074 */ 	lwc1	$f18,0x74($sp)
/*  f0d23c8:	8e020284 */ 	lw	$v0,0x284($s0)
/*  f0d23cc:	00002825 */ 	or	$a1,$zero,$zero
/*  f0d23d0:	46120102 */ 	mul.s	$f4,$f0,$f18
/*  f0d23d4:	8c4a1a6c */ 	lw	$t2,0x1a6c($v0)
/*  f0d23d8:	c5460010 */ 	lwc1	$f6,0x10($t2)
/*  f0d23dc:	46062280 */ 	add.s	$f10,$f4,$f6
/*  f0d23e0:	e7aa0060 */ 	swc1	$f10,0x60($sp)
/*  f0d23e4:	0fc1905e */ 	jal	func0f064178
/*  f0d23e8:	8c441a6c */ 	lw	$a0,0x1a6c($v0)
/*  f0d23ec:	8e0b0284 */ 	lw	$t3,0x284($s0)
/*  f0d23f0:	00002825 */ 	or	$a1,$zero,$zero
/*  f0d23f4:	0fc1905e */ 	jal	func0f064178
/*  f0d23f8:	8d6400bc */ 	lw	$a0,0xbc($t3)
/*  f0d23fc:	8e0c0284 */ 	lw	$t4,0x284($s0)
/*  f0d2400:	27a60058 */ 	addiu	$a2,$sp,0x58
/*  f0d2404:	27a70048 */ 	addiu	$a3,$sp,0x48
/*  f0d2408:	8d8200bc */ 	lw	$v0,0xbc($t4)
/*  f0d240c:	24440008 */ 	addiu	$a0,$v0,0x8
/*  f0d2410:	0fc1979d */ 	jal	func0f065e74
/*  f0d2414:	24450028 */ 	addiu	$a1,$v0,0x28
/*  f0d2418:	8e040284 */ 	lw	$a0,0x284($s0)
/*  f0d241c:	27a50058 */ 	addiu	$a1,$sp,0x58
/*  f0d2420:	0fc32de7 */ 	jal	func0f0cb79c
/*  f0d2424:	27a60048 */ 	addiu	$a2,$sp,0x48
/*  f0d2428:	8e0d0284 */ 	lw	$t5,0x284($s0)
/*  f0d242c:	240e003f */ 	addiu	$t6,$zero,0x3f
/*  f0d2430:	240f0001 */ 	addiu	$t7,$zero,0x1
/*  f0d2434:	8da200bc */ 	lw	$v0,0xbc($t5)
/*  f0d2438:	afaf0014 */ 	sw	$t7,0x14($sp)
/*  f0d243c:	afae0010 */ 	sw	$t6,0x10($sp)
/*  f0d2440:	c440000c */ 	lwc1	$f0,0xc($v0)
/*  f0d2444:	c7a80040 */ 	lwc1	$f8,0x40($sp)
/*  f0d2448:	c7b2003c */ 	lwc1	$f18,0x3c($sp)
/*  f0d244c:	27a60058 */ 	addiu	$a2,$sp,0x58
/*  f0d2450:	46004401 */ 	sub.s	$f16,$f8,$f0
/*  f0d2454:	27a70048 */ 	addiu	$a3,$sp,0x48
/*  f0d2458:	24440008 */ 	addiu	$a0,$v0,0x8
/*  f0d245c:	46009101 */ 	sub.s	$f4,$f18,$f0
/*  f0d2460:	e7b00018 */ 	swc1	$f16,0x18($sp)
/*  f0d2464:	24450028 */ 	addiu	$a1,$v0,0x28
/*  f0d2468:	0c00b5cb */ 	jal	func0002d72c
/*  f0d246c:	e7a4001c */ 	swc1	$f4,0x1c($sp)
/*  f0d2470:	8e180284 */ 	lw	$t8,0x284($s0)
/*  f0d2474:	24050001 */ 	addiu	$a1,$zero,0x1
/*  f0d2478:	8f041a6c */ 	lw	$a0,0x1a6c($t8)
/*  f0d247c:	0fc1905e */ 	jal	func0f064178
/*  f0d2480:	afa20044 */ 	sw	$v0,0x44($sp)
/*  f0d2484:	8fa30044 */ 	lw	$v1,0x44($sp)
/*  f0d2488:	24080001 */ 	addiu	$t0,$zero,0x1
/*  f0d248c:	14680012 */ 	bne	$v1,$t0,.L0f0d24d8
/*  f0d2490:	00000000 */ 	nop
/*  f0d2494:	8e190284 */ 	lw	$t9,0x284($s0)
/*  f0d2498:	afa80010 */ 	sw	$t0,0x10($sp)
/*  f0d249c:	c7a60040 */ 	lwc1	$f6,0x40($sp)
/*  f0d24a0:	8f2900bc */ 	lw	$t1,0xbc($t9)
/*  f0d24a4:	c7a8003c */ 	lwc1	$f8,0x3c($sp)
/*  f0d24a8:	27a40058 */ 	addiu	$a0,$sp,0x58
/*  f0d24ac:	c520000c */ 	lwc1	$f0,0xc($t1)
/*  f0d24b0:	8fa50038 */ 	lw	$a1,0x38($sp)
/*  f0d24b4:	27a60048 */ 	addiu	$a2,$sp,0x48
/*  f0d24b8:	46003281 */ 	sub.s	$f10,$f6,$f0
/*  f0d24bc:	2407003f */ 	addiu	$a3,$zero,0x3f
/*  f0d24c0:	46004401 */ 	sub.s	$f16,$f8,$f0
/*  f0d24c4:	e7aa0014 */ 	swc1	$f10,0x14($sp)
/*  f0d24c8:	0c00a9a1 */ 	jal	func0002a684
/*  f0d24cc:	e7b00018 */ 	swc1	$f16,0x18($sp)
/*  f0d24d0:	24080001 */ 	addiu	$t0,$zero,0x1
/*  f0d24d4:	00401825 */ 	or	$v1,$v0,$zero
.L0f0d24d8:
/*  f0d24d8:	54680017 */ 	bnel	$v1,$t0,.L0f0d2538
/*  f0d24dc:	8e190284 */ 	lw	$t9,0x284($s0)
/*  f0d24e0:	8e0a0284 */ 	lw	$t2,0x284($s0)
/*  f0d24e4:	8fa20068 */ 	lw	$v0,0x68($sp)
/*  f0d24e8:	44804000 */ 	mtc1	$zero,$f8
/*  f0d24ec:	ad481af8 */ 	sw	$t0,0x1af8($t2)
/*  f0d24f0:	8e0b0284 */ 	lw	$t3,0x284($s0)
/*  f0d24f4:	c7b20058 */ 	lwc1	$f18,0x58($sp)
/*  f0d24f8:	e5721afc */ 	swc1	$f18,0x1afc($t3)
/*  f0d24fc:	8e0c0284 */ 	lw	$t4,0x284($s0)
/*  f0d2500:	c7a4005c */ 	lwc1	$f4,0x5c($sp)
/*  f0d2504:	e5841b00 */ 	swc1	$f4,0x1b00($t4)
/*  f0d2508:	8e0d0284 */ 	lw	$t5,0x284($s0)
/*  f0d250c:	c7a60060 */ 	lwc1	$f6,0x60($sp)
/*  f0d2510:	e5a61b04 */ 	swc1	$f6,0x1b04($t5)
/*  f0d2514:	8e0e0284 */ 	lw	$t6,0x284($s0)
/*  f0d2518:	c44a009c */ 	lwc1	$f10,0x9c($v0)
/*  f0d251c:	e5ca01a4 */ 	swc1	$f10,0x1a4($t6)
/*  f0d2520:	8e0f0284 */ 	lw	$t7,0x284($s0)
/*  f0d2524:	e5e801a8 */ 	swc1	$f8,0x1a8($t7)
/*  f0d2528:	8e180284 */ 	lw	$t8,0x284($s0)
/*  f0d252c:	c45000a0 */ 	lwc1	$f16,0xa0($v0)
/*  f0d2530:	e71001ac */ 	swc1	$f16,0x1ac($t8)
/*  f0d2534:	8e190284 */ 	lw	$t9,0x284($s0)
.L0f0d2538:
/*  f0d2538:	24050001 */ 	addiu	$a1,$zero,0x1
/*  f0d253c:	0fc1905e */ 	jal	func0f064178
/*  f0d2540:	8f2400bc */ 	lw	$a0,0xbc($t9)
/*  f0d2544:	8fbf002c */ 	lw	$ra,0x2c($sp)
.L0f0d2548:
/*  f0d2548:	8fb00028 */ 	lw	$s0,0x28($sp)
/*  f0d254c:	27bd0070 */ 	addiu	$sp,$sp,0x70
/*  f0d2550:	03e00008 */ 	jr	$ra
/*  f0d2554:	00000000 */ 	nop
);

GLOBAL_ASM(
glabel func0f0d2558
.late_rodata
glabel var7f1adb38
.word 0x3fc907a9
glabel var7f1adb3c
.word 0x4096c5bf
glabel var7f1adb40
.word 0x3f4907a9
glabel var7f1adb44
.word 0x40afe6b4
glabel var7f1adb48
.word 0x4016c5bf
glabel var7f1adb4c
.word 0x407b4993
glabel var7f1adb50
.word 0x404907a9
.text
/*  f0d2558:	3c03800a */ 	lui	$v1,%hi(g_Vars)
/*  f0d255c:	24639fc0 */ 	addiu	$v1,$v1,%lo(g_Vars)
/*  f0d2560:	27bdffc8 */ 	addiu	$sp,$sp,-56
/*  f0d2564:	8c620284 */ 	lw	$v0,0x284($v1)
/*  f0d2568:	afbf0024 */ 	sw	$ra,0x24($sp)
/*  f0d256c:	f7b60018 */ 	sdc1	$f22,0x18($sp)
/*  f0d2570:	f7b40010 */ 	sdc1	$f20,0x10($sp)
/*  f0d2574:	8c4e1a7c */ 	lw	$t6,0x1a7c($v0)
/*  f0d2578:	24010002 */ 	addiu	$at,$zero,0x2
/*  f0d257c:	55c10047 */ 	bnel	$t6,$at,.L0f0d269c
/*  f0d2580:	8fbf0024 */ 	lw	$ra,0x24($sp)
/*  f0d2584:	8c6f0008 */ 	lw	$t7,0x8($v1)
/*  f0d2588:	8c58019c */ 	lw	$t8,0x19c($v0)
/*  f0d258c:	01f8c823 */ 	subu	$t9,$t7,$t8
/*  f0d2590:	2b210019 */ 	slti	$at,$t9,0x19
/*  f0d2594:	50200041 */ 	beqzl	$at,.L0f0d269c
/*  f0d2598:	8fbf0024 */ 	lw	$ra,0x24($sp)
/*  f0d259c:	8c481a6c */ 	lw	$t0,0x1a6c($v0)
/*  f0d25a0:	8d040004 */ 	lw	$a0,0x4($t0)
/*  f0d25a4:	0fc1a2bd */ 	jal	func0f068af4
/*  f0d25a8:	afa40034 */ 	sw	$a0,0x34($sp)
/*  f0d25ac:	8fa40034 */ 	lw	$a0,0x34($sp)
/*  f0d25b0:	c4440008 */ 	lwc1	$f4,0x8($v0)
/*  f0d25b4:	c4460018 */ 	lwc1	$f6,0x18($v0)
/*  f0d25b8:	8c890018 */ 	lw	$t1,0x18($a0)
/*  f0d25bc:	c5200014 */ 	lwc1	$f0,0x14($t1)
/*  f0d25c0:	46002382 */ 	mul.s	$f14,$f4,$f0
/*  f0d25c4:	00000000 */ 	nop
/*  f0d25c8:	46003502 */ 	mul.s	$f20,$f6,$f0
/*  f0d25cc:	00000000 */ 	nop
/*  f0d25d0:	460e7202 */ 	mul.s	$f8,$f14,$f14
/*  f0d25d4:	e7ae002c */ 	swc1	$f14,0x2c($sp)
/*  f0d25d8:	4614a282 */ 	mul.s	$f10,$f20,$f20
/*  f0d25dc:	0c012974 */ 	jal	sqrtf
/*  f0d25e0:	460a4300 */ 	add.s	$f12,$f8,$f10
/*  f0d25e4:	3c0a800a */ 	lui	$t2,%hi(g_Vars+0x284)
/*  f0d25e8:	8d4aa244 */ 	lw	$t2,%lo(g_Vars+0x284)($t2)
/*  f0d25ec:	c7ae002c */ 	lwc1	$f14,0x2c($sp)
/*  f0d25f0:	3c017f1b */ 	lui	$at,%hi(var7f1adb38)
/*  f0d25f4:	ad401af8 */ 	sw	$zero,0x1af8($t2)
/*  f0d25f8:	46000586 */ 	mov.s	$f22,$f0
/*  f0d25fc:	0fc348be */ 	jal	func0f0d22f8
/*  f0d2600:	c42cdb38 */ 	lwc1	$f12,%lo(var7f1adb38)($at)
/*  f0d2604:	3c017f1b */ 	lui	$at,%hi(var7f1adb3c)
/*  f0d2608:	c7ae002c */ 	lwc1	$f14,0x2c($sp)
/*  f0d260c:	0fc348be */ 	jal	func0f0d22f8
/*  f0d2610:	c42cdb3c */ 	lwc1	$f12,%lo(var7f1adb3c)($at)
/*  f0d2614:	3c017f1b */ 	lui	$at,%hi(var7f1adb40)
/*  f0d2618:	c42cdb40 */ 	lwc1	$f12,%lo(var7f1adb40)($at)
/*  f0d261c:	0fc348be */ 	jal	func0f0d22f8
/*  f0d2620:	4600b386 */ 	mov.s	$f14,$f22
/*  f0d2624:	3c017f1b */ 	lui	$at,%hi(var7f1adb44)
/*  f0d2628:	c42cdb44 */ 	lwc1	$f12,%lo(var7f1adb44)($at)
/*  f0d262c:	0fc348be */ 	jal	func0f0d22f8
/*  f0d2630:	4600b386 */ 	mov.s	$f14,$f22
/*  f0d2634:	3c017f1b */ 	lui	$at,%hi(var7f1adb48)
/*  f0d2638:	c42cdb48 */ 	lwc1	$f12,%lo(var7f1adb48)($at)
/*  f0d263c:	0fc348be */ 	jal	func0f0d22f8
/*  f0d2640:	4600b386 */ 	mov.s	$f14,$f22
/*  f0d2644:	3c017f1b */ 	lui	$at,%hi(var7f1adb4c)
/*  f0d2648:	c42cdb4c */ 	lwc1	$f12,%lo(var7f1adb4c)($at)
/*  f0d264c:	0fc348be */ 	jal	func0f0d22f8
/*  f0d2650:	4600b386 */ 	mov.s	$f14,$f22
/*  f0d2654:	44806000 */ 	mtc1	$zero,$f12
/*  f0d2658:	0fc348be */ 	jal	func0f0d22f8
/*  f0d265c:	4600a386 */ 	mov.s	$f14,$f20
/*  f0d2660:	3c017f1b */ 	lui	$at,%hi(var7f1adb50)
/*  f0d2664:	c42cdb50 */ 	lwc1	$f12,%lo(var7f1adb50)($at)
/*  f0d2668:	0fc348be */ 	jal	func0f0d22f8
/*  f0d266c:	4600a386 */ 	mov.s	$f14,$f20
/*  f0d2670:	3c02800a */ 	lui	$v0,%hi(g_Vars+0x284)
/*  f0d2674:	8c42a244 */ 	lw	$v0,%lo(g_Vars+0x284)($v0)
/*  f0d2678:	8c4b1af8 */ 	lw	$t3,0x1af8($v0)
/*  f0d267c:	51600006 */ 	beqzl	$t3,.L0f0d2698
/*  f0d2680:	ac4000d0 */ 	sw	$zero,0xd0($v0)
/*  f0d2684:	0fc31f4c */ 	jal	currentPlayerSetMoveMode
/*  f0d2688:	00002025 */ 	or	$a0,$zero,$zero
/*  f0d268c:	3c02800a */ 	lui	$v0,%hi(g_Vars+0x284)
/*  f0d2690:	8c42a244 */ 	lw	$v0,%lo(g_Vars+0x284)($v0)
/*  f0d2694:	ac4000d0 */ 	sw	$zero,0xd0($v0)
.L0f0d2698:
/*  f0d2698:	8fbf0024 */ 	lw	$ra,0x24($sp)
.L0f0d269c:
/*  f0d269c:	d7b40010 */ 	ldc1	$f20,0x10($sp)
/*  f0d26a0:	d7b60018 */ 	ldc1	$f22,0x18($sp)
/*  f0d26a4:	03e00008 */ 	jr	$ra
/*  f0d26a8:	27bd0038 */ 	addiu	$sp,$sp,0x38
);

GLOBAL_ASM(
glabel currentPlayerUpdateSpeedBike
.late_rodata
glabel var7f1adb54
.word 0x3dcccccd
glabel var7f1adb58
.word 0xbdcccccd
glabel var7f1adb5c
.word 0xbdcccccd
glabel var7f1adb60
.word 0x3dcccccd
glabel var7f1adb64
.word 0x40490fdb
glabel var7f1adb68
.word 0x3f4ccccd
glabel var7f1adb6c
.word 0x40c907a9
glabel var7f1adb70
.word 0x40c907a9
glabel var7f1adb74
.word 0x3f4ccccd
.text
/*  f0d26ac:	3c02800a */ 	lui	$v0,%hi(g_Vars)
/*  f0d26b0:	24429fc0 */ 	addiu	$v0,$v0,%lo(g_Vars)
/*  f0d26b4:	8c4e0284 */ 	lw	$t6,0x284($v0)
/*  f0d26b8:	27bdffa0 */ 	addiu	$sp,$sp,-96
/*  f0d26bc:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f0d26c0:	afa40060 */ 	sw	$a0,0x60($sp)
/*  f0d26c4:	8dcf1a6c */ 	lw	$t7,0x1a6c($t6)
/*  f0d26c8:	8c590288 */ 	lw	$t9,0x288($v0)
/*  f0d26cc:	8df80004 */ 	lw	$t8,0x4($t7)
/*  f0d26d0:	afb8005c */ 	sw	$t8,0x5c($sp)
/*  f0d26d4:	0fc549d2 */ 	jal	optionsGetContpadNum1
/*  f0d26d8:	8f240070 */ 	lw	$a0,0x70($t9)
/*  f0d26dc:	3c08800a */ 	lui	$t0,%hi(g_Vars+0x288)
/*  f0d26e0:	8d08a248 */ 	lw	$t0,%lo(g_Vars+0x288)($t0)
/*  f0d26e4:	a3a2005b */ 	sb	$v0,0x5b($sp)
/*  f0d26e8:	0fc549c4 */ 	jal	optionsGetControlMode
/*  f0d26ec:	8d040070 */ 	lw	$a0,0x70($t0)
/*  f0d26f0:	24010001 */ 	addiu	$at,$zero,0x1
/*  f0d26f4:	10410012 */ 	beq	$v0,$at,.L0f0d2740
/*  f0d26f8:	3c09800a */ 	lui	$t1,%hi(g_Vars+0x288)
/*  f0d26fc:	8d29a248 */ 	lw	$t1,%lo(g_Vars+0x288)($t1)
/*  f0d2700:	0fc549c4 */ 	jal	optionsGetControlMode
/*  f0d2704:	8d240070 */ 	lw	$a0,0x70($t1)
/*  f0d2708:	24010003 */ 	addiu	$at,$zero,0x3
/*  f0d270c:	1041000c */ 	beq	$v0,$at,.L0f0d2740
/*  f0d2710:	3c0a800a */ 	lui	$t2,%hi(g_Vars+0x288)
/*  f0d2714:	8d4aa248 */ 	lw	$t2,%lo(g_Vars+0x288)($t2)
/*  f0d2718:	0fc549c4 */ 	jal	optionsGetControlMode
/*  f0d271c:	8d440070 */ 	lw	$a0,0x70($t2)
/*  f0d2720:	24010002 */ 	addiu	$at,$zero,0x2
/*  f0d2724:	10410006 */ 	beq	$v0,$at,.L0f0d2740
/*  f0d2728:	3c0b800a */ 	lui	$t3,%hi(g_Vars+0x288)
/*  f0d272c:	8d6ba248 */ 	lw	$t3,%lo(g_Vars+0x288)($t3)
/*  f0d2730:	0fc549c4 */ 	jal	optionsGetControlMode
/*  f0d2734:	8d640070 */ 	lw	$a0,0x70($t3)
/*  f0d2738:	14400011 */ 	bnez	$v0,.L0f0d2780
/*  f0d273c:	8fa70060 */ 	lw	$a3,0x60($sp)
.L0f0d2740:
/*  f0d2740:	0fc5b364 */ 	jal	soloIsPaused
/*  f0d2744:	00000000 */ 	nop
/*  f0d2748:	1440000d */ 	bnez	$v0,.L0f0d2780
/*  f0d274c:	8fa70060 */ 	lw	$a3,0x60($sp)
/*  f0d2750:	00002025 */ 	or	$a0,$zero,$zero
/*  f0d2754:	83a5005b */ 	lb	$a1,0x5b($sp)
/*  f0d2758:	0c005326 */ 	jal	func00014c98
/*  f0d275c:	24060202 */ 	addiu	$a2,$zero,0x202
/*  f0d2760:	8fac0060 */ 	lw	$t4,0x60($sp)
/*  f0d2764:	00002025 */ 	or	$a0,$zero,$zero
/*  f0d2768:	24060101 */ 	addiu	$a2,$zero,0x101
/*  f0d276c:	ad820028 */ 	sw	$v0,0x28($t4)
/*  f0d2770:	0c005326 */ 	jal	func00014c98
/*  f0d2774:	83a5005b */ 	lb	$a1,0x5b($sp)
/*  f0d2778:	8fa70060 */ 	lw	$a3,0x60($sp)
/*  f0d277c:	ace2002c */ 	sw	$v0,0x2c($a3)
.L0f0d2780:
/*  f0d2780:	8ced0020 */ 	lw	$t5,0x20($a3)
/*  f0d2784:	3c04800a */ 	lui	$a0,%hi(g_Vars)
/*  f0d2788:	24849fc0 */ 	addiu	$a0,$a0,%lo(g_Vars)
/*  f0d278c:	11a00015 */ 	beqz	$t5,.L0f0d27e4
/*  f0d2790:	3c013f80 */ 	lui	$at,0x3f80
/*  f0d2794:	44819000 */ 	mtc1	$at,$f18
/*  f0d2798:	3c017f1b */ 	lui	$at,%hi(var7f1adb54)
/*  f0d279c:	8c820284 */ 	lw	$v0,0x284($a0)
/*  f0d27a0:	c424db54 */ 	lwc1	$f4,%lo(var7f1adb54)($at)
/*  f0d27a4:	c486004c */ 	lwc1	$f6,0x4c($a0)
/*  f0d27a8:	c4400170 */ 	lwc1	$f0,0x170($v0)
/*  f0d27ac:	46062302 */ 	mul.s	$f12,$f4,$f6
/*  f0d27b0:	46009081 */ 	sub.s	$f2,$f18,$f0
/*  f0d27b4:	4602603c */ 	c.lt.s	$f12,$f2
/*  f0d27b8:	00000000 */ 	nop
/*  f0d27bc:	45020003 */ 	bc1fl	.L0f0d27cc
/*  f0d27c0:	46020200 */ 	add.s	$f8,$f0,$f2
/*  f0d27c4:	46006086 */ 	mov.s	$f2,$f12
/*  f0d27c8:	46020200 */ 	add.s	$f8,$f0,$f2
.L0f0d27cc:
/*  f0d27cc:	3c01bf80 */ 	lui	$at,0xbf80
/*  f0d27d0:	44817000 */ 	mtc1	$at,$f14
/*  f0d27d4:	44808000 */ 	mtc1	$zero,$f16
/*  f0d27d8:	e4480170 */ 	swc1	$f8,0x170($v0)
/*  f0d27dc:	10000055 */ 	b	.L0f0d2934
/*  f0d27e0:	8c820284 */ 	lw	$v0,0x284($a0)
.L0f0d27e4:
/*  f0d27e4:	8cee0024 */ 	lw	$t6,0x24($a3)
/*  f0d27e8:	11c0001a */ 	beqz	$t6,.L0f0d2854
/*  f0d27ec:	3c01bf80 */ 	lui	$at,0xbf80
/*  f0d27f0:	44817000 */ 	mtc1	$at,$f14
/*  f0d27f4:	3c017f1b */ 	lui	$at,%hi(var7f1adb58)
/*  f0d27f8:	c42adb58 */ 	lwc1	$f10,%lo(var7f1adb58)($at)
/*  f0d27fc:	3c02800a */ 	lui	$v0,%hi(g_Vars+0x284)
/*  f0d2800:	3c01800a */ 	lui	$at,%hi(g_Vars+0x4c)
/*  f0d2804:	8c42a244 */ 	lw	$v0,%lo(g_Vars+0x284)($v0)
/*  f0d2808:	c424a00c */ 	lwc1	$f4,%lo(g_Vars+0x4c)($at)
/*  f0d280c:	3c013f80 */ 	lui	$at,0x3f80
/*  f0d2810:	c4400170 */ 	lwc1	$f0,0x170($v0)
/*  f0d2814:	46045302 */ 	mul.s	$f12,$f10,$f4
/*  f0d2818:	44819000 */ 	mtc1	$at,$f18
/*  f0d281c:	46007081 */ 	sub.s	$f2,$f14,$f0
/*  f0d2820:	460c103c */ 	c.lt.s	$f2,$f12
/*  f0d2824:	00000000 */ 	nop
/*  f0d2828:	45020003 */ 	bc1fl	.L0f0d2838
/*  f0d282c:	46020180 */ 	add.s	$f6,$f0,$f2
/*  f0d2830:	46006086 */ 	mov.s	$f2,$f12
/*  f0d2834:	46020180 */ 	add.s	$f6,$f0,$f2
.L0f0d2838:
/*  f0d2838:	44808000 */ 	mtc1	$zero,$f16
/*  f0d283c:	3c04800a */ 	lui	$a0,%hi(g_Vars)
/*  f0d2840:	24849fc0 */ 	addiu	$a0,$a0,%lo(g_Vars)
/*  f0d2844:	e4460170 */ 	swc1	$f6,0x170($v0)
/*  f0d2848:	3c02800a */ 	lui	$v0,%hi(g_Vars+0x284)
/*  f0d284c:	10000039 */ 	b	.L0f0d2934
/*  f0d2850:	8c42a244 */ 	lw	$v0,%lo(g_Vars+0x284)($v0)
.L0f0d2854:
/*  f0d2854:	8cef0010 */ 	lw	$t7,0x10($a3)
/*  f0d2858:	3c08800a */ 	lui	$t0,%hi(g_Vars+0x284)
/*  f0d285c:	3c02800a */ 	lui	$v0,%hi(g_Vars+0x284)
/*  f0d2860:	11e0002b */ 	beqz	$t7,.L0f0d2910
/*  f0d2864:	3c013f80 */ 	lui	$at,0x3f80
/*  f0d2868:	8cf800a8 */ 	lw	$t8,0xa8($a3)
/*  f0d286c:	3c01428c */ 	lui	$at,0x428c
/*  f0d2870:	44812000 */ 	mtc1	$at,$f4
/*  f0d2874:	44984000 */ 	mtc1	$t8,$f8
/*  f0d2878:	3c19800a */ 	lui	$t9,%hi(g_Vars+0x284)
/*  f0d287c:	8f39a244 */ 	lw	$t9,%lo(g_Vars+0x284)($t9)
/*  f0d2880:	468042a0 */ 	cvt.s.w	$f10,$f8
/*  f0d2884:	3c02800a */ 	lui	$v0,%hi(g_Vars+0x284)
/*  f0d2888:	3c013f80 */ 	lui	$at,0x3f80
/*  f0d288c:	44814000 */ 	mtc1	$at,$f8
/*  f0d2890:	44808000 */ 	mtc1	$zero,$f16
/*  f0d2894:	3c01bf80 */ 	lui	$at,0xbf80
/*  f0d2898:	46045183 */ 	div.s	$f6,$f10,$f4
/*  f0d289c:	3c04800a */ 	lui	$a0,%hi(g_Vars)
/*  f0d28a0:	e7260170 */ 	swc1	$f6,0x170($t9)
/*  f0d28a4:	8c42a244 */ 	lw	$v0,%lo(g_Vars+0x284)($v0)
/*  f0d28a8:	c4400170 */ 	lwc1	$f0,0x170($v0)
/*  f0d28ac:	4600403c */ 	c.lt.s	$f8,$f0
/*  f0d28b0:	00000000 */ 	nop
/*  f0d28b4:	4502000a */ 	bc1fl	.L0f0d28e0
/*  f0d28b8:	44817000 */ 	mtc1	$at,$f14
/*  f0d28bc:	3c013f80 */ 	lui	$at,0x3f80
/*  f0d28c0:	44815000 */ 	mtc1	$at,$f10
/*  f0d28c4:	3c01bf80 */ 	lui	$at,0xbf80
/*  f0d28c8:	44817000 */ 	mtc1	$at,$f14
/*  f0d28cc:	e44a0170 */ 	swc1	$f10,0x170($v0)
/*  f0d28d0:	3c02800a */ 	lui	$v0,%hi(g_Vars+0x284)
/*  f0d28d4:	1000000a */ 	b	.L0f0d2900
/*  f0d28d8:	8c42a244 */ 	lw	$v0,%lo(g_Vars+0x284)($v0)
/*  f0d28dc:	44817000 */ 	mtc1	$at,$f14
.L0f0d28e0:
/*  f0d28e0:	00000000 */ 	nop
/*  f0d28e4:	460e003c */ 	c.lt.s	$f0,$f14
/*  f0d28e8:	00000000 */ 	nop
/*  f0d28ec:	45020005 */ 	bc1fl	.L0f0d2904
/*  f0d28f0:	3c013f80 */ 	lui	$at,0x3f80
/*  f0d28f4:	e44e0170 */ 	swc1	$f14,0x170($v0)
/*  f0d28f8:	3c02800a */ 	lui	$v0,%hi(g_Vars+0x284)
/*  f0d28fc:	8c42a244 */ 	lw	$v0,%lo(g_Vars+0x284)($v0)
.L0f0d2900:
/*  f0d2900:	3c013f80 */ 	lui	$at,0x3f80
.L0f0d2904:
/*  f0d2904:	44819000 */ 	mtc1	$at,$f18
/*  f0d2908:	1000000a */ 	b	.L0f0d2934
/*  f0d290c:	24849fc0 */ 	addiu	$a0,$a0,%lo(g_Vars)
.L0f0d2910:
/*  f0d2910:	44808000 */ 	mtc1	$zero,$f16
/*  f0d2914:	8d08a244 */ 	lw	$t0,%lo(g_Vars+0x284)($t0)
/*  f0d2918:	44819000 */ 	mtc1	$at,$f18
/*  f0d291c:	3c01bf80 */ 	lui	$at,0xbf80
/*  f0d2920:	3c04800a */ 	lui	$a0,%hi(g_Vars)
/*  f0d2924:	e5100170 */ 	swc1	$f16,0x170($t0)
/*  f0d2928:	44817000 */ 	mtc1	$at,$f14
/*  f0d292c:	8c42a244 */ 	lw	$v0,%lo(g_Vars+0x284)($v0)
/*  f0d2930:	24849fc0 */ 	addiu	$a0,$a0,%lo(g_Vars)
.L0f0d2934:
/*  f0d2934:	8ce30028 */ 	lw	$v1,0x28($a3)
/*  f0d2938:	50600011 */ 	beqzl	$v1,.L0f0d2980
/*  f0d293c:	8ce3002c */ 	lw	$v1,0x2c($a3)
/*  f0d2940:	44832000 */ 	mtc1	$v1,$f4
/*  f0d2944:	3c017f1b */ 	lui	$at,%hi(var7f1adb5c)
/*  f0d2948:	c428db5c */ 	lwc1	$f8,%lo(var7f1adb5c)($at)
/*  f0d294c:	468021a0 */ 	cvt.s.w	$f6,$f4
/*  f0d2950:	c4400168 */ 	lwc1	$f0,0x168($v0)
/*  f0d2954:	46007081 */ 	sub.s	$f2,$f14,$f0
/*  f0d2958:	46083302 */ 	mul.s	$f12,$f6,$f8
/*  f0d295c:	460c103c */ 	c.lt.s	$f2,$f12
/*  f0d2960:	00000000 */ 	nop
/*  f0d2964:	45020003 */ 	bc1fl	.L0f0d2974
/*  f0d2968:	46020280 */ 	add.s	$f10,$f0,$f2
/*  f0d296c:	46006086 */ 	mov.s	$f2,$f12
/*  f0d2970:	46020280 */ 	add.s	$f10,$f0,$f2
.L0f0d2974:
/*  f0d2974:	1000002e */ 	b	.L0f0d2a30
/*  f0d2978:	e44a0168 */ 	swc1	$f10,0x168($v0)
/*  f0d297c:	8ce3002c */ 	lw	$v1,0x2c($a3)
.L0f0d2980:
/*  f0d2980:	50600011 */ 	beqzl	$v1,.L0f0d29c8
/*  f0d2984:	8ce90014 */ 	lw	$t1,0x14($a3)
/*  f0d2988:	44832000 */ 	mtc1	$v1,$f4
/*  f0d298c:	3c017f1b */ 	lui	$at,%hi(var7f1adb60)
/*  f0d2990:	c428db60 */ 	lwc1	$f8,%lo(var7f1adb60)($at)
/*  f0d2994:	468021a0 */ 	cvt.s.w	$f6,$f4
/*  f0d2998:	c4400168 */ 	lwc1	$f0,0x168($v0)
/*  f0d299c:	46009081 */ 	sub.s	$f2,$f18,$f0
/*  f0d29a0:	46083302 */ 	mul.s	$f12,$f6,$f8
/*  f0d29a4:	4602603c */ 	c.lt.s	$f12,$f2
/*  f0d29a8:	00000000 */ 	nop
/*  f0d29ac:	45020003 */ 	bc1fl	.L0f0d29bc
/*  f0d29b0:	46020280 */ 	add.s	$f10,$f0,$f2
/*  f0d29b4:	46006086 */ 	mov.s	$f2,$f12
/*  f0d29b8:	46020280 */ 	add.s	$f10,$f0,$f2
.L0f0d29bc:
/*  f0d29bc:	1000001c */ 	b	.L0f0d2a30
/*  f0d29c0:	e44a0168 */ 	swc1	$f10,0x168($v0)
/*  f0d29c4:	8ce90014 */ 	lw	$t1,0x14($a3)
.L0f0d29c8:
/*  f0d29c8:	51200019 */ 	beqzl	$t1,.L0f0d2a30
/*  f0d29cc:	e4500168 */ 	swc1	$f16,0x168($v0)
/*  f0d29d0:	8cea00a4 */ 	lw	$t2,0xa4($a3)
/*  f0d29d4:	3c01428c */ 	lui	$at,0x428c
/*  f0d29d8:	44814000 */ 	mtc1	$at,$f8
/*  f0d29dc:	448a2000 */ 	mtc1	$t2,$f4
/*  f0d29e0:	00000000 */ 	nop
/*  f0d29e4:	468021a0 */ 	cvt.s.w	$f6,$f4
/*  f0d29e8:	46083283 */ 	div.s	$f10,$f6,$f8
/*  f0d29ec:	e44a0168 */ 	swc1	$f10,0x168($v0)
/*  f0d29f0:	8c820284 */ 	lw	$v0,0x284($a0)
/*  f0d29f4:	c4400168 */ 	lwc1	$f0,0x168($v0)
/*  f0d29f8:	4600903c */ 	c.lt.s	$f18,$f0
/*  f0d29fc:	00000000 */ 	nop
/*  f0d2a00:	45020005 */ 	bc1fl	.L0f0d2a18
/*  f0d2a04:	460e003c */ 	c.lt.s	$f0,$f14
/*  f0d2a08:	e4520168 */ 	swc1	$f18,0x168($v0)
/*  f0d2a0c:	8c820284 */ 	lw	$v0,0x284($a0)
/*  f0d2a10:	c4400168 */ 	lwc1	$f0,0x168($v0)
/*  f0d2a14:	460e003c */ 	c.lt.s	$f0,$f14
.L0f0d2a18:
/*  f0d2a18:	00000000 */ 	nop
/*  f0d2a1c:	45020005 */ 	bc1fl	.L0f0d2a34
/*  f0d2a20:	8fa2005c */ 	lw	$v0,0x5c($sp)
/*  f0d2a24:	10000002 */ 	b	.L0f0d2a30
/*  f0d2a28:	e44e0168 */ 	swc1	$f14,0x168($v0)
/*  f0d2a2c:	e4500168 */ 	swc1	$f16,0x168($v0)
.L0f0d2a30:
/*  f0d2a30:	8fa2005c */ 	lw	$v0,0x5c($sp)
.L0f0d2a34:
/*  f0d2a34:	3c017f1b */ 	lui	$at,%hi(var7f1adb64)
/*  f0d2a38:	c424db64 */ 	lwc1	$f4,%lo(var7f1adb64)($at)
/*  f0d2a3c:	c4400070 */ 	lwc1	$f0,0x70($v0)
/*  f0d2a40:	c44c00b8 */ 	lwc1	$f12,0xb8($v0)
/*  f0d2a44:	4604003c */ 	c.lt.s	$f0,$f4
/*  f0d2a48:	46006307 */ 	neg.s	$f12,$f12
/*  f0d2a4c:	45000008 */ 	bc1f	.L0f0d2a70
/*  f0d2a50:	3c017f1b */ 	lui	$at,%hi(var7f1adb68)
/*  f0d2a54:	c428db68 */ 	lwc1	$f8,%lo(var7f1adb68)($at)
/*  f0d2a58:	46000187 */ 	neg.s	$f6,$f0
/*  f0d2a5c:	3c017f1b */ 	lui	$at,%hi(var7f1adb6c)
/*  f0d2a60:	46083282 */ 	mul.s	$f10,$f6,$f8
/*  f0d2a64:	c422db6c */ 	lwc1	$f2,%lo(var7f1adb6c)($at)
/*  f0d2a68:	10000008 */ 	b	.L0f0d2a8c
/*  f0d2a6c:	460a6300 */ 	add.s	$f12,$f12,$f10
.L0f0d2a70:
/*  f0d2a70:	3c017f1b */ 	lui	$at,%hi(var7f1adb70)
/*  f0d2a74:	c422db70 */ 	lwc1	$f2,%lo(var7f1adb70)($at)
/*  f0d2a78:	3c017f1b */ 	lui	$at,%hi(var7f1adb74)
/*  f0d2a7c:	c426db74 */ 	lwc1	$f6,%lo(var7f1adb74)($at)
/*  f0d2a80:	46001101 */ 	sub.s	$f4,$f2,$f0
/*  f0d2a84:	46062202 */ 	mul.s	$f8,$f4,$f6
/*  f0d2a88:	46086300 */ 	add.s	$f12,$f12,$f8
.L0f0d2a8c:
/*  f0d2a8c:	4610603c */ 	c.lt.s	$f12,$f16
/*  f0d2a90:	00000000 */ 	nop
/*  f0d2a94:	45020004 */ 	bc1fl	.L0f0d2aa8
/*  f0d2a98:	460c103e */ 	c.le.s	$f2,$f12
/*  f0d2a9c:	10000006 */ 	b	.L0f0d2ab8
/*  f0d2aa0:	46026300 */ 	add.s	$f12,$f12,$f2
/*  f0d2aa4:	460c103e */ 	c.le.s	$f2,$f12
.L0f0d2aa8:
/*  f0d2aa8:	00000000 */ 	nop
/*  f0d2aac:	45020003 */ 	bc1fl	.L0f0d2abc
/*  f0d2ab0:	e7b00030 */ 	swc1	$f16,0x30($sp)
/*  f0d2ab4:	46026301 */ 	sub.s	$f12,$f12,$f2
.L0f0d2ab8:
/*  f0d2ab8:	e7b00030 */ 	swc1	$f16,0x30($sp)
.L0f0d2abc:
/*  f0d2abc:	0c0068f7 */ 	jal	sinf
/*  f0d2ac0:	e7ac003c */ 	swc1	$f12,0x3c($sp)
/*  f0d2ac4:	46000287 */ 	neg.s	$f10,$f0
/*  f0d2ac8:	c7ac003c */ 	lwc1	$f12,0x3c($sp)
/*  f0d2acc:	0c0068f4 */ 	jal	cosf
/*  f0d2ad0:	e7aa0034 */ 	swc1	$f10,0x34($sp)
/*  f0d2ad4:	e7a00038 */ 	swc1	$f0,0x38($sp)
/*  f0d2ad8:	27a40030 */ 	addiu	$a0,$sp,0x30
/*  f0d2adc:	0fc2d341 */ 	jal	func0f0b4d04
/*  f0d2ae0:	27a50028 */ 	addiu	$a1,$sp,0x28
/*  f0d2ae4:	0fc2d602 */ 	jal	currentPlayerGetScreenTop
/*  f0d2ae8:	00000000 */ 	nop
/*  f0d2aec:	0fc2d5fa */ 	jal	currentPlayerGetScreenHeight
/*  f0d2af0:	e7a00024 */ 	swc1	$f0,0x24($sp)
/*  f0d2af4:	c7a4002c */ 	lwc1	$f4,0x2c($sp)
/*  f0d2af8:	c7a60024 */ 	lwc1	$f6,0x24($sp)
/*  f0d2afc:	3c013f80 */ 	lui	$at,0x3f80
/*  f0d2b00:	3c0b800a */ 	lui	$t3,%hi(g_Vars+0x284)
/*  f0d2b04:	46062081 */ 	sub.s	$f2,$f4,$f6
/*  f0d2b08:	44812000 */ 	mtc1	$at,$f4
/*  f0d2b0c:	3c013f40 */ 	lui	$at,0x3f40
/*  f0d2b10:	8d6ba244 */ 	lw	$t3,%lo(g_Vars+0x284)($t3)
/*  f0d2b14:	46021200 */ 	add.s	$f8,$f2,$f2
/*  f0d2b18:	46004283 */ 	div.s	$f10,$f8,$f0
/*  f0d2b1c:	46045181 */ 	sub.s	$f6,$f10,$f4
/*  f0d2b20:	44815000 */ 	mtc1	$at,$f10
/*  f0d2b24:	46003207 */ 	neg.s	$f8,$f6
/*  f0d2b28:	460a4102 */ 	mul.s	$f4,$f8,$f10
/*  f0d2b2c:	e56401b8 */ 	swc1	$f4,0x1b8($t3)
/*  f0d2b30:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f0d2b34:	27bd0060 */ 	addiu	$sp,$sp,0x60
/*  f0d2b38:	03e00008 */ 	jr	$ra
/*  f0d2b3c:	00000000 */ 	nop
);

// Mismatch due to stack placement.
// Goal has a 6-word gap between contnum and sp60. It appears to be using this
// space implicitly for some calculations then optimising the stack usage out.
// The code below puts the implicit usage at the bottom of the stack, even if
// sp60 onwards is moved to be declared at the latest possible location in the
// function.
//void currentPlayerUpdateSpeedBike(struct movedata *data)
//{
//	struct hoverbikeobj *bike = (struct hoverbikeobj *)g_Vars.currentplayer->hoverbike->obj;
//	s8 contnum = optionsGetContpadNum1(g_Vars.currentplayerstats->mpindex);
//	f32 a;
//	f32 b;
//	f32 c;
//	f32 d;
//	f32 sp60;
//	struct coord sp48;
//	f32 sp40[2];
//	f32 sp36;
//
//	if ((optionsGetControlMode(g_Vars.currentplayerstats->mpindex) == CONTROLMODE_12
//				|| optionsGetControlMode(g_Vars.currentplayerstats->mpindex) == CONTROLMODE_14
//				|| optionsGetControlMode(g_Vars.currentplayerstats->mpindex) == CONTROLMODE_13
//				|| optionsGetControlMode(g_Vars.currentplayerstats->mpindex) == CONTROLMODE_11)
//			&& !soloIsPaused()) {
//		data->stepleft = func00014c98(0, contnum, L_JPAD | L_CBUTTONS);
//		data->stepright = func00014c98(0, contnum, R_JPAD | R_CBUTTONS);
//	}
//
//	// Forward/back
//	if (data->stepforward) {
//		a = 1.0f - g_Vars.currentplayer->speedforwards;
//
//		if (a > 0.1f * g_Vars.lvupdate240freal) {
//			a = 0.1f * g_Vars.lvupdate240freal;
//		}
//
//		g_Vars.currentplayer->speedforwards += a;
//	} else if (data->stepback) {
//		a = -1.0f - g_Vars.currentplayer->speedforwards;
//
//		if (a < -0.1f * g_Vars.lvupdate240freal) {
//			a = -0.1f * g_Vars.lvupdate240freal;
//		}
//
//		g_Vars.currentplayer->speedforwards += a;
//	} else if (data->unk10) {
//		g_Vars.currentplayer->speedforwards = data->unka8 / 70.0f;
//
//		if (g_Vars.currentplayer->speedforwards > 1.0f) {
//			g_Vars.currentplayer->speedforwards = 1;
//		} else if (g_Vars.currentplayer->speedforwards < -1.0f) {
//			g_Vars.currentplayer->speedforwards = -1;
//		}
//	} else {
//		g_Vars.currentplayer->speedforwards = 0;
//	}
//
//	// Sideways
//	if (data->stepleft) {
//		b = -1.0f - g_Vars.currentplayer->speedsideways;
//
//		if (b < data->stepleft * -0.1f) {
//			b = data->stepleft * -0.1f;
//		}
//
//		g_Vars.currentplayer->speedsideways += b;
//	} else if (data->stepright) {
//		b = 1.0f - g_Vars.currentplayer->speedsideways;
//
//		if (b > data->stepright * 0.1f) {
//			b = data->stepright * 0.1f;
//		}
//
//		g_Vars.currentplayer->speedsideways += b;
//	} else if (data->unk14) {
//		g_Vars.currentplayer->speedsideways = data->unka4 / 70.0f;
//
//		if (g_Vars.currentplayer->speedsideways > 1.0f) {
//			g_Vars.currentplayer->speedsideways = 1.0f;
//		}
//
//		if (g_Vars.currentplayer->speedsideways < -1.0f) {
//			g_Vars.currentplayer->speedsideways = -1.0f;
//		}
//	} else {
//		g_Vars.currentplayer->speedsideways = 0;
//	}
//
//	sp60 = -bike->exreal;
//
//	if (bike->hov.unk14 < M_PI) {
//		sp60 += -bike->hov.unk14 * 0.8f;
//	} else {
//		sp60 += (M_BADTAU - bike->hov.unk14) * 0.8f;
//	}
//
//	if (sp60 < 0) {
//		sp60 += M_BADTAU;
//	} else if (sp60 >= M_BADTAU) {
//		sp60 -= M_BADTAU;
//	}
//
//	sp48.x = 0;
//	sp48.y = -sinf(sp60);
//	sp48.z = cosf(sp60);
//
//	func0f0b4d04(&sp48, sp40);
//
//	sp36 = currentPlayerGetScreenTop();
//	g_Vars.currentplayer->gunextraaimy =
//		-(((sp40[1] - sp36) + (sp40[1] - sp36)) / currentPlayerGetScreenHeight() - 1.0f) * 0.75f;
//}

GLOBAL_ASM(
glabel func0f0d2b40
.late_rodata
glabel var7f1adb78
.word 0x3dcccccd
.text
/*  f0d2b40:	27bdff58 */ 	addiu	$sp,$sp,-168
/*  f0d2b44:	3c0f8007 */ 	lui	$t7,%hi(var80070ee0)
/*  f0d2b48:	afbf002c */ 	sw	$ra,0x2c($sp)
/*  f0d2b4c:	afb10028 */ 	sw	$s1,0x28($sp)
/*  f0d2b50:	afb00024 */ 	sw	$s0,0x24($sp)
/*  f0d2b54:	f7b40018 */ 	sdc1	$f20,0x18($sp)
/*  f0d2b58:	afa500ac */ 	sw	$a1,0xac($sp)
/*  f0d2b5c:	25ef0ee0 */ 	addiu	$t7,$t7,%lo(var80070ee0)
/*  f0d2b60:	8de10000 */ 	lw	$at,0x0($t7)
/*  f0d2b64:	27ae0084 */ 	addiu	$t6,$sp,0x84
/*  f0d2b68:	8de80004 */ 	lw	$t0,0x4($t7)
/*  f0d2b6c:	adc10000 */ 	sw	$at,0x0($t6)
/*  f0d2b70:	8de10008 */ 	lw	$at,0x8($t7)
/*  f0d2b74:	00e08825 */ 	or	$s1,$a3,$zero
/*  f0d2b78:	4486a000 */ 	mtc1	$a2,$f20
/*  f0d2b7c:	00808025 */ 	or	$s0,$a0,$zero
/*  f0d2b80:	3c077f1b */ 	lui	$a3,%hi(var7f1adb10)
/*  f0d2b84:	24e7db10 */ 	addiu	$a3,$a3,%lo(var7f1adb10)
/*  f0d2b88:	27a40078 */ 	addiu	$a0,$sp,0x78
/*  f0d2b8c:	2406014d */ 	addiu	$a2,$zero,0x14d
/*  f0d2b90:	27a5006c */ 	addiu	$a1,$sp,0x6c
/*  f0d2b94:	adc80004 */ 	sw	$t0,0x4($t6)
/*  f0d2b98:	0c009393 */ 	jal	func00024e4c
/*  f0d2b9c:	adc10008 */ 	sw	$at,0x8($t6)
/*  f0d2ba0:	8e090014 */ 	lw	$t1,0x14($s0)
/*  f0d2ba4:	27a8009c */ 	addiu	$t0,$sp,0x9c
/*  f0d2ba8:	27a40078 */ 	addiu	$a0,$sp,0x78
/*  f0d2bac:	c5240008 */ 	lwc1	$f4,0x8($t1)
/*  f0d2bb0:	27a5006c */ 	addiu	$a1,$sp,0x6c
/*  f0d2bb4:	27a60060 */ 	addiu	$a2,$sp,0x60
/*  f0d2bb8:	e7a40060 */ 	swc1	$f4,0x60($sp)
/*  f0d2bbc:	8e0a0014 */ 	lw	$t2,0x14($s0)
/*  f0d2bc0:	27a70054 */ 	addiu	$a3,$sp,0x54
/*  f0d2bc4:	c546000c */ 	lwc1	$f6,0xc($t2)
/*  f0d2bc8:	e7a60064 */ 	swc1	$f6,0x64($sp)
/*  f0d2bcc:	8e0b0014 */ 	lw	$t3,0x14($s0)
/*  f0d2bd0:	c5680010 */ 	lwc1	$f8,0x10($t3)
/*  f0d2bd4:	e7a80068 */ 	swc1	$f8,0x68($sp)
/*  f0d2bd8:	8e0d0014 */ 	lw	$t5,0x14($s0)
/*  f0d2bdc:	8e2c0014 */ 	lw	$t4,0x14($s1)
/*  f0d2be0:	c5a40008 */ 	lwc1	$f4,0x8($t5)
/*  f0d2be4:	c58a0008 */ 	lwc1	$f10,0x8($t4)
/*  f0d2be8:	46045181 */ 	sub.s	$f6,$f10,$f4
/*  f0d2bec:	e7a60054 */ 	swc1	$f6,0x54($sp)
/*  f0d2bf0:	8e180014 */ 	lw	$t8,0x14($s0)
/*  f0d2bf4:	8e390014 */ 	lw	$t9,0x14($s1)
/*  f0d2bf8:	c70a000c */ 	lwc1	$f10,0xc($t8)
/*  f0d2bfc:	c728000c */ 	lwc1	$f8,0xc($t9)
/*  f0d2c00:	460a4101 */ 	sub.s	$f4,$f8,$f10
/*  f0d2c04:	e7a40058 */ 	swc1	$f4,0x58($sp)
/*  f0d2c08:	8e0f0014 */ 	lw	$t7,0x14($s0)
/*  f0d2c0c:	8e2e0014 */ 	lw	$t6,0x14($s1)
/*  f0d2c10:	c5e80010 */ 	lwc1	$f8,0x10($t7)
/*  f0d2c14:	c5c60010 */ 	lwc1	$f6,0x10($t6)
/*  f0d2c18:	afa80010 */ 	sw	$t0,0x10($sp)
/*  f0d2c1c:	46083281 */ 	sub.s	$f10,$f6,$f8
/*  f0d2c20:	0fc0b8f7 */ 	jal	func0f02e3dc
/*  f0d2c24:	e7aa005c */ 	swc1	$f10,0x5c($sp)
/*  f0d2c28:	8fa200ac */ 	lw	$v0,0xac($sp)
/*  f0d2c2c:	44809000 */ 	mtc1	$zero,$f18
/*  f0d2c30:	27a40090 */ 	addiu	$a0,$sp,0x90
/*  f0d2c34:	c4440000 */ 	lwc1	$f4,0x0($v0)
/*  f0d2c38:	e7b20094 */ 	swc1	$f18,0x94($sp)
/*  f0d2c3c:	27a50094 */ 	addiu	$a1,$sp,0x94
/*  f0d2c40:	e7a40090 */ 	swc1	$f4,0x90($sp)
/*  f0d2c44:	c7a80090 */ 	lwc1	$f8,0x90($sp)
/*  f0d2c48:	c4460008 */ 	lwc1	$f6,0x8($v0)
/*  f0d2c4c:	46089032 */ 	c.eq.s	$f18,$f8
/*  f0d2c50:	e7a60098 */ 	swc1	$f6,0x98($sp)
/*  f0d2c54:	c7aa0098 */ 	lwc1	$f10,0x98($sp)
/*  f0d2c58:	45000005 */ 	bc1f	.L0f0d2c70
/*  f0d2c5c:	00000000 */ 	nop
/*  f0d2c60:	460a9032 */ 	c.eq.s	$f18,$f10
/*  f0d2c64:	3c013f80 */ 	lui	$at,0x3f80
/*  f0d2c68:	45030007 */ 	bc1tl	.L0f0d2c88
/*  f0d2c6c:	44812000 */ 	mtc1	$at,$f4
.L0f0d2c70:
/*  f0d2c70:	0c0011e4 */ 	jal	scaleTo1
/*  f0d2c74:	27a60098 */ 	addiu	$a2,$sp,0x98
/*  f0d2c78:	44809000 */ 	mtc1	$zero,$f18
/*  f0d2c7c:	10000004 */ 	b	.L0f0d2c90
/*  f0d2c80:	8fa200ac */ 	lw	$v0,0xac($sp)
/*  f0d2c84:	44812000 */ 	mtc1	$at,$f4
.L0f0d2c88:
/*  f0d2c88:	00000000 */ 	nop
/*  f0d2c8c:	e7a40098 */ 	swc1	$f4,0x98($sp)
.L0f0d2c90:
/*  f0d2c90:	c4400000 */ 	lwc1	$f0,0x0($v0)
/*  f0d2c94:	3c01800a */ 	lui	$at,%hi(g_Vars+0x4c)
/*  f0d2c98:	02202025 */ 	or	$a0,$s1,$zero
/*  f0d2c9c:	46009032 */ 	c.eq.s	$f18,$f0
/*  f0d2ca0:	27a5009c */ 	addiu	$a1,$sp,0x9c
/*  f0d2ca4:	27a60090 */ 	addiu	$a2,$sp,0x90
/*  f0d2ca8:	27a70084 */ 	addiu	$a3,$sp,0x84
/*  f0d2cac:	45030007 */ 	bc1tl	.L0f0d2ccc
/*  f0d2cb0:	c4400008 */ 	lwc1	$f0,0x8($v0)
/*  f0d2cb4:	c428a00c */ 	lwc1	$f8,%lo(g_Vars+0x4c)($at)
/*  f0d2cb8:	c7a60084 */ 	lwc1	$f6,0x84($sp)
/*  f0d2cbc:	46080283 */ 	div.s	$f10,$f0,$f8
/*  f0d2cc0:	460a3100 */ 	add.s	$f4,$f6,$f10
/*  f0d2cc4:	e7a40084 */ 	swc1	$f4,0x84($sp)
/*  f0d2cc8:	c4400008 */ 	lwc1	$f0,0x8($v0)
.L0f0d2ccc:
/*  f0d2ccc:	3c01800a */ 	lui	$at,%hi(g_Vars+0x4c)
/*  f0d2cd0:	46009032 */ 	c.eq.s	$f18,$f0
/*  f0d2cd4:	00000000 */ 	nop
/*  f0d2cd8:	45010006 */ 	bc1t	.L0f0d2cf4
/*  f0d2cdc:	00000000 */ 	nop
/*  f0d2ce0:	c426a00c */ 	lwc1	$f6,%lo(g_Vars+0x4c)($at)
/*  f0d2ce4:	c7a8008c */ 	lwc1	$f8,0x8c($sp)
/*  f0d2ce8:	46060283 */ 	div.s	$f10,$f0,$f6
/*  f0d2cec:	460a4100 */ 	add.s	$f4,$f8,$f10
/*  f0d2cf0:	e7a4008c */ 	swc1	$f4,0x8c($sp)
.L0f0d2cf4:
/*  f0d2cf4:	0fc20ba1 */ 	jal	func0f082e84
/*  f0d2cf8:	afa00010 */ 	sw	$zero,0x10($sp)
/*  f0d2cfc:	44809000 */ 	mtc1	$zero,$f18
/*  f0d2d00:	c7a6009c */ 	lwc1	$f6,0x9c($sp)
/*  f0d2d04:	c7aa00a4 */ 	lwc1	$f10,0xa4($sp)
/*  f0d2d08:	4612a032 */ 	c.eq.s	$f20,$f18
/*  f0d2d0c:	00000000 */ 	nop
/*  f0d2d10:	4503003c */ 	bc1tl	.L0f0d2e04
/*  f0d2d14:	8fbf002c */ 	lw	$ra,0x2c($sp)
/*  f0d2d18:	8e020014 */ 	lw	$v0,0x14($s0)
/*  f0d2d1c:	3c0a8007 */ 	lui	$t2,%hi(var80070eec)
/*  f0d2d20:	254a0eec */ 	addiu	$t2,$t2,%lo(var80070eec)
/*  f0d2d24:	c4480008 */ 	lwc1	$f8,0x8($v0)
/*  f0d2d28:	c4440010 */ 	lwc1	$f4,0x10($v0)
/*  f0d2d2c:	8d410000 */ 	lw	$at,0x0($t2)
/*  f0d2d30:	46083081 */ 	sub.s	$f2,$f6,$f8
/*  f0d2d34:	27a9003c */ 	addiu	$t1,$sp,0x3c
/*  f0d2d38:	ad210000 */ 	sw	$at,0x0($t1)
/*  f0d2d3c:	46045381 */ 	sub.s	$f14,$f10,$f4
/*  f0d2d40:	46021182 */ 	mul.s	$f6,$f2,$f2
/*  f0d2d44:	8d410008 */ 	lw	$at,0x8($t2)
/*  f0d2d48:	8d4c0004 */ 	lw	$t4,0x4($t2)
/*  f0d2d4c:	460e7202 */ 	mul.s	$f8,$f14,$f14
/*  f0d2d50:	ad210008 */ 	sw	$at,0x8($t1)
/*  f0d2d54:	ad2c0004 */ 	sw	$t4,0x4($t1)
/*  f0d2d58:	e7ae004c */ 	swc1	$f14,0x4c($sp)
/*  f0d2d5c:	e7a20050 */ 	swc1	$f2,0x50($sp)
/*  f0d2d60:	0c012974 */ 	jal	sqrtf
/*  f0d2d64:	46083300 */ 	add.s	$f12,$f6,$f8
/*  f0d2d68:	3c013f80 */ 	lui	$at,0x3f80
/*  f0d2d6c:	44815000 */ 	mtc1	$at,$f10
/*  f0d2d70:	3c01800a */ 	lui	$at,%hi(g_Vars+0x4c)
/*  f0d2d74:	c424a00c */ 	lwc1	$f4,%lo(g_Vars+0x4c)($at)
/*  f0d2d78:	46005303 */ 	div.s	$f12,$f10,$f0
/*  f0d2d7c:	c7a20050 */ 	lwc1	$f2,0x50($sp)
/*  f0d2d80:	c7ae004c */ 	lwc1	$f14,0x4c($sp)
/*  f0d2d84:	3c014220 */ 	lui	$at,0x4220
/*  f0d2d88:	44815000 */ 	mtc1	$at,$f10
/*  f0d2d8c:	44809000 */ 	mtc1	$zero,$f18
/*  f0d2d90:	240d0001 */ 	addiu	$t5,$zero,0x1
/*  f0d2d94:	afad0010 */ 	sw	$t5,0x10($sp)
/*  f0d2d98:	02202025 */ 	or	$a0,$s1,$zero
/*  f0d2d9c:	27a5003c */ 	addiu	$a1,$sp,0x3c
/*  f0d2da0:	24070001 */ 	addiu	$a3,$zero,0x1
/*  f0d2da4:	4604a503 */ 	div.s	$f20,$f20,$f4
/*  f0d2da8:	460c1082 */ 	mul.s	$f2,$f2,$f12
/*  f0d2dac:	00000000 */ 	nop
/*  f0d2db0:	460c7382 */ 	mul.s	$f14,$f14,$f12
/*  f0d2db4:	46007187 */ 	neg.s	$f6,$f14
/*  f0d2db8:	46143202 */ 	mul.s	$f8,$f6,$f20
/*  f0d2dbc:	c7a6003c */ 	lwc1	$f6,0x3c($sp)
/*  f0d2dc0:	460a4102 */ 	mul.s	$f4,$f8,$f10
/*  f0d2dc4:	46043200 */ 	add.s	$f8,$f6,$f4
/*  f0d2dc8:	46141282 */ 	mul.s	$f10,$f2,$f20
/*  f0d2dcc:	44813000 */ 	mtc1	$at,$f6
/*  f0d2dd0:	3c017f1b */ 	lui	$at,%hi(var7f1adb78)
/*  f0d2dd4:	e7a8003c */ 	swc1	$f8,0x3c($sp)
/*  f0d2dd8:	c7a80044 */ 	lwc1	$f8,0x44($sp)
/*  f0d2ddc:	46065102 */ 	mul.s	$f4,$f10,$f6
/*  f0d2de0:	c426db78 */ 	lwc1	$f6,%lo(var7f1adb78)($at)
/*  f0d2de4:	46044280 */ 	add.s	$f10,$f8,$f4
/*  f0d2de8:	4606a202 */ 	mul.s	$f8,$f20,$f6
/*  f0d2dec:	e7aa0044 */ 	swc1	$f10,0x44($sp)
/*  f0d2df0:	46089400 */ 	add.s	$f16,$f18,$f8
/*  f0d2df4:	44068000 */ 	mfc1	$a2,$f16
/*  f0d2df8:	0fc20a87 */ 	jal	func0f082a1c
/*  f0d2dfc:	00000000 */ 	nop
/*  f0d2e00:	8fbf002c */ 	lw	$ra,0x2c($sp)
.L0f0d2e04:
/*  f0d2e04:	d7b40018 */ 	ldc1	$f20,0x18($sp)
/*  f0d2e08:	8fb00024 */ 	lw	$s0,0x24($sp)
/*  f0d2e0c:	8fb10028 */ 	lw	$s1,0x28($sp)
/*  f0d2e10:	03e00008 */ 	jr	$ra
/*  f0d2e14:	27bd00a8 */ 	addiu	$sp,$sp,0xa8
);

GLOBAL_ASM(
glabel func0f0d2e18
.late_rodata
glabel var7f1adb7c
.word 0x40c907a9
.text
/*  f0d2e18:	27bdfec8 */ 	addiu	$sp,$sp,-312
/*  f0d2e1c:	afb10030 */ 	sw	$s1,0x30($sp)
/*  f0d2e20:	3c11800a */ 	lui	$s1,%hi(g_Vars)
/*  f0d2e24:	26319fc0 */ 	addiu	$s1,$s1,%lo(g_Vars)
/*  f0d2e28:	8e230284 */ 	lw	$v1,0x284($s1)
/*  f0d2e2c:	240e0001 */ 	addiu	$t6,$zero,0x1
/*  f0d2e30:	afbf0034 */ 	sw	$ra,0x34($sp)
/*  f0d2e34:	afb0002c */ 	sw	$s0,0x2c($sp)
/*  f0d2e38:	afa5013c */ 	sw	$a1,0x13c($sp)
/*  f0d2e3c:	afae0134 */ 	sw	$t6,0x134($sp)
/*  f0d2e40:	afa000d4 */ 	sw	$zero,0xd4($sp)
/*  f0d2e44:	8c621a6c */ 	lw	$v0,0x1a6c($v1)
/*  f0d2e48:	44800000 */ 	mtc1	$zero,$f0
/*  f0d2e4c:	00803025 */ 	or	$a2,$a0,$zero
/*  f0d2e50:	c4440008 */ 	lwc1	$f4,0x8($v0)
/*  f0d2e54:	8c500004 */ 	lw	$s0,0x4($v0)
/*  f0d2e58:	00002825 */ 	or	$a1,$zero,$zero
/*  f0d2e5c:	e7a40128 */ 	swc1	$f4,0x128($sp)
/*  f0d2e60:	8c6f1a6c */ 	lw	$t7,0x1a6c($v1)
/*  f0d2e64:	c5e6000c */ 	lwc1	$f6,0xc($t7)
/*  f0d2e68:	e7a6012c */ 	swc1	$f6,0x12c($sp)
/*  f0d2e6c:	8c781a6c */ 	lw	$t8,0x1a6c($v1)
/*  f0d2e70:	c7080010 */ 	lwc1	$f8,0x10($t8)
/*  f0d2e74:	e7a80130 */ 	swc1	$f8,0x130($sp)
/*  f0d2e78:	c48a0000 */ 	lwc1	$f10,0x0($a0)
/*  f0d2e7c:	460a0032 */ 	c.eq.s	$f0,$f10
/*  f0d2e80:	00000000 */ 	nop
/*  f0d2e84:	4502000c */ 	bc1fl	.L0f0d2eb8
/*  f0d2e88:	8c6400bc */ 	lw	$a0,0xbc($v1)
/*  f0d2e8c:	c4900004 */ 	lwc1	$f16,0x4($a0)
/*  f0d2e90:	46100032 */ 	c.eq.s	$f0,$f16
/*  f0d2e94:	00000000 */ 	nop
/*  f0d2e98:	45020007 */ 	bc1fl	.L0f0d2eb8
/*  f0d2e9c:	8c6400bc */ 	lw	$a0,0xbc($v1)
/*  f0d2ea0:	c4920008 */ 	lwc1	$f18,0x8($a0)
/*  f0d2ea4:	46120032 */ 	c.eq.s	$f0,$f18
/*  f0d2ea8:	00000000 */ 	nop
/*  f0d2eac:	450300a6 */ 	bc1tl	.L0f0d3148
/*  f0d2eb0:	c7a4013c */ 	lwc1	$f4,0x13c($sp)
/*  f0d2eb4:	8c6400bc */ 	lw	$a0,0xbc($v1)
.L0f0d2eb8:
/*  f0d2eb8:	0fc1905e */ 	jal	func0f064178
/*  f0d2ebc:	afa60138 */ 	sw	$a2,0x138($sp)
/*  f0d2ec0:	8e390284 */ 	lw	$t9,0x284($s1)
/*  f0d2ec4:	00002825 */ 	or	$a1,$zero,$zero
/*  f0d2ec8:	0fc1905e */ 	jal	func0f064178
/*  f0d2ecc:	8f241a6c */ 	lw	$a0,0x1a6c($t9)
/*  f0d2ed0:	8fa20138 */ 	lw	$v0,0x138($sp)
/*  f0d2ed4:	c7a40128 */ 	lwc1	$f4,0x128($sp)
/*  f0d2ed8:	c7aa0130 */ 	lwc1	$f10,0x130($sp)
/*  f0d2edc:	c4460000 */ 	lwc1	$f6,0x0($v0)
/*  f0d2ee0:	8e280284 */ 	lw	$t0,0x284($s1)
/*  f0d2ee4:	27a50094 */ 	addiu	$a1,$sp,0x94
/*  f0d2ee8:	46062200 */ 	add.s	$f8,$f4,$f6
/*  f0d2eec:	27a6009c */ 	addiu	$a2,$sp,0x9c
/*  f0d2ef0:	27a70098 */ 	addiu	$a3,$sp,0x98
/*  f0d2ef4:	e7a80128 */ 	swc1	$f8,0x128($sp)
/*  f0d2ef8:	c4500008 */ 	lwc1	$f16,0x8($v0)
/*  f0d2efc:	46105480 */ 	add.s	$f18,$f10,$f16
/*  f0d2f00:	e7b20130 */ 	swc1	$f18,0x130($sp)
/*  f0d2f04:	0fc21d5b */ 	jal	propObjGetBbox
/*  f0d2f08:	8d041a6c */ 	lw	$a0,0x1a6c($t0)
/*  f0d2f0c:	8e290284 */ 	lw	$t1,0x284($s1)
/*  f0d2f10:	27aa00a8 */ 	addiu	$t2,$sp,0xa8
/*  f0d2f14:	240b0014 */ 	addiu	$t3,$zero,0x14
/*  f0d2f18:	8d221a6c */ 	lw	$v0,0x1a6c($t1)
/*  f0d2f1c:	afab0014 */ 	sw	$t3,0x14($sp)
/*  f0d2f20:	afaa0010 */ 	sw	$t2,0x10($sp)
/*  f0d2f24:	27a60128 */ 	addiu	$a2,$sp,0x128
/*  f0d2f28:	27a70118 */ 	addiu	$a3,$sp,0x118
/*  f0d2f2c:	24440008 */ 	addiu	$a0,$v0,0x8
/*  f0d2f30:	0fc1977f */ 	jal	func0f065dfc
/*  f0d2f34:	24450028 */ 	addiu	$a1,$v0,0x28
/*  f0d2f38:	2606001c */ 	addiu	$a2,$s0,0x1c
/*  f0d2f3c:	afa60040 */ 	sw	$a2,0x40($sp)
/*  f0d2f40:	02002025 */ 	or	$a0,$s0,$zero
/*  f0d2f44:	27a50128 */ 	addiu	$a1,$sp,0x128
/*  f0d2f48:	0fc248cf */ 	jal	func0f09233c
/*  f0d2f4c:	27a70118 */ 	addiu	$a3,$sp,0x118
/*  f0d2f50:	27a500d8 */ 	addiu	$a1,$sp,0xd8
/*  f0d2f54:	240c0001 */ 	addiu	$t4,$zero,0x1
/*  f0d2f58:	afac00d4 */ 	sw	$t4,0xd4($sp)
/*  f0d2f5c:	00a0c825 */ 	or	$t9,$a1,$zero
/*  f0d2f60:	0200c025 */ 	or	$t8,$s0,$zero
/*  f0d2f64:	260f003c */ 	addiu	$t7,$s0,0x3c
.L0f0d2f68:
/*  f0d2f68:	8f01005c */ 	lw	$at,0x5c($t8)
/*  f0d2f6c:	2718000c */ 	addiu	$t8,$t8,0xc
/*  f0d2f70:	2739000c */ 	addiu	$t9,$t9,0xc
/*  f0d2f74:	af21fff4 */ 	sw	$at,-0xc($t9)
/*  f0d2f78:	8f010054 */ 	lw	$at,0x54($t8)
/*  f0d2f7c:	af21fff8 */ 	sw	$at,-0x8($t9)
/*  f0d2f80:	8f010058 */ 	lw	$at,0x58($t8)
/*  f0d2f84:	170ffff8 */ 	bne	$t8,$t7,.L0f0d2f68
/*  f0d2f88:	af21fffc */ 	sw	$at,-0x4($t9)
/*  f0d2f8c:	8f01005c */ 	lw	$at,0x5c($t8)
/*  f0d2f90:	02002025 */ 	or	$a0,$s0,$zero
/*  f0d2f94:	27a60128 */ 	addiu	$a2,$sp,0x128
/*  f0d2f98:	af210000 */ 	sw	$at,0x0($t9)
/*  f0d2f9c:	8fa80040 */ 	lw	$t0,0x40($sp)
/*  f0d2fa0:	27a70118 */ 	addiu	$a3,$sp,0x118
/*  f0d2fa4:	0fc1c4f9 */ 	jal	func0f0713e4
/*  f0d2fa8:	afa80010 */ 	sw	$t0,0x10($sp)
/*  f0d2fac:	c7a4010c */ 	lwc1	$f4,0x10c($sp)
/*  f0d2fb0:	c6060090 */ 	lwc1	$f6,0x90($s0)
/*  f0d2fb4:	c7aa012c */ 	lwc1	$f10,0x12c($sp)
/*  f0d2fb8:	8e290284 */ 	lw	$t1,0x284($s1)
/*  f0d2fbc:	46062201 */ 	sub.s	$f8,$f4,$f6
/*  f0d2fc0:	3c013f00 */ 	lui	$at,0x3f00
/*  f0d2fc4:	c7b20128 */ 	lwc1	$f18,0x128($sp)
/*  f0d2fc8:	c7a60130 */ 	lwc1	$f6,0x130($sp)
/*  f0d2fcc:	46085400 */ 	add.s	$f16,$f10,$f8
/*  f0d2fd0:	c7a80094 */ 	lwc1	$f8,0x94($sp)
/*  f0d2fd4:	240a003f */ 	addiu	$t2,$zero,0x3f
/*  f0d2fd8:	240b0001 */ 	addiu	$t3,$zero,0x1
/*  f0d2fdc:	e7b0012c */ 	swc1	$f16,0x12c($sp)
/*  f0d2fe0:	44818000 */ 	mtc1	$at,$f16
/*  f0d2fe4:	8d221a6c */ 	lw	$v0,0x1a6c($t1)
/*  f0d2fe8:	46104002 */ 	mul.s	$f0,$f8,$f16
/*  f0d2fec:	c4440008 */ 	lwc1	$f4,0x8($v0)
/*  f0d2ff0:	c44a0010 */ 	lwc1	$f10,0x10($v0)
/*  f0d2ff4:	46049081 */ 	sub.s	$f2,$f18,$f4
/*  f0d2ff8:	c7b20094 */ 	lwc1	$f18,0x94($sp)
/*  f0d2ffc:	460a3301 */ 	sub.s	$f12,$f6,$f10
/*  f0d3000:	4602003c */ 	c.lt.s	$f0,$f2
/*  f0d3004:	00000000 */ 	nop
/*  f0d3008:	45030010 */ 	bc1tl	.L0f0d304c
/*  f0d300c:	e7b20010 */ 	swc1	$f18,0x10($sp)
/*  f0d3010:	460c003c */ 	c.lt.s	$f0,$f12
/*  f0d3014:	00000000 */ 	nop
/*  f0d3018:	4503000c */ 	bc1tl	.L0f0d304c
/*  f0d301c:	e7b20010 */ 	swc1	$f18,0x10($sp)
/*  f0d3020:	46000387 */ 	neg.s	$f14,$f0
/*  f0d3024:	460e103c */ 	c.lt.s	$f2,$f14
/*  f0d3028:	00000000 */ 	nop
/*  f0d302c:	45030007 */ 	bc1tl	.L0f0d304c
/*  f0d3030:	e7b20010 */ 	swc1	$f18,0x10($sp)
/*  f0d3034:	460e603c */ 	c.lt.s	$f12,$f14
/*  f0d3038:	240f003f */ 	addiu	$t7,$zero,0x3f
/*  f0d303c:	24180001 */ 	addiu	$t8,$zero,0x1
/*  f0d3040:	45020028 */ 	bc1fl	.L0f0d30e4
/*  f0d3044:	afaf0010 */ 	sw	$t7,0x10($sp)
/*  f0d3048:	e7b20010 */ 	swc1	$f18,0x10($sp)
.L0f0d304c:
/*  f0d304c:	afaa0014 */ 	sw	$t2,0x14($sp)
/*  f0d3050:	afab0018 */ 	sw	$t3,0x18($sp)
/*  f0d3054:	c440000c */ 	lwc1	$f0,0xc($v0)
/*  f0d3058:	c7a4009c */ 	lwc1	$f4,0x9c($sp)
/*  f0d305c:	c7aa0098 */ 	lwc1	$f10,0x98($sp)
/*  f0d3060:	24440008 */ 	addiu	$a0,$v0,0x8
/*  f0d3064:	46002181 */ 	sub.s	$f6,$f4,$f0
/*  f0d3068:	24450028 */ 	addiu	$a1,$v0,0x28
/*  f0d306c:	27a60128 */ 	addiu	$a2,$sp,0x128
/*  f0d3070:	46005201 */ 	sub.s	$f8,$f10,$f0
/*  f0d3074:	e7a6001c */ 	swc1	$f6,0x1c($sp)
/*  f0d3078:	27a70118 */ 	addiu	$a3,$sp,0x118
/*  f0d307c:	0c00b657 */ 	jal	func0002d95c
/*  f0d3080:	e7a80020 */ 	swc1	$f8,0x20($sp)
/*  f0d3084:	24010001 */ 	addiu	$at,$zero,0x1
/*  f0d3088:	14410024 */ 	bne	$v0,$at,.L0f0d311c
/*  f0d308c:	afa20134 */ 	sw	$v0,0x134($sp)
/*  f0d3090:	8e2c0284 */ 	lw	$t4,0x284($s1)
/*  f0d3094:	240e003f */ 	addiu	$t6,$zero,0x3f
/*  f0d3098:	240d0001 */ 	addiu	$t5,$zero,0x1
/*  f0d309c:	8d821a6c */ 	lw	$v0,0x1a6c($t4)
/*  f0d30a0:	afad0014 */ 	sw	$t5,0x14($sp)
/*  f0d30a4:	afae0010 */ 	sw	$t6,0x10($sp)
/*  f0d30a8:	c440000c */ 	lwc1	$f0,0xc($v0)
/*  f0d30ac:	c7b0009c */ 	lwc1	$f16,0x9c($sp)
/*  f0d30b0:	c7a40098 */ 	lwc1	$f4,0x98($sp)
/*  f0d30b4:	27a50128 */ 	addiu	$a1,$sp,0x128
/*  f0d30b8:	46008481 */ 	sub.s	$f18,$f16,$f0
/*  f0d30bc:	8fa60094 */ 	lw	$a2,0x94($sp)
/*  f0d30c0:	27a70118 */ 	addiu	$a3,$sp,0x118
/*  f0d30c4:	46002181 */ 	sub.s	$f6,$f4,$f0
/*  f0d30c8:	e7b20018 */ 	swc1	$f18,0x18($sp)
/*  f0d30cc:	24440008 */ 	addiu	$a0,$v0,0x8
/*  f0d30d0:	0c00aa7c */ 	jal	func0002a9f0
/*  f0d30d4:	e7a6001c */ 	swc1	$f6,0x1c($sp)
/*  f0d30d8:	10000010 */ 	b	.L0f0d311c
/*  f0d30dc:	afa20134 */ 	sw	$v0,0x134($sp)
/*  f0d30e0:	afaf0010 */ 	sw	$t7,0x10($sp)
.L0f0d30e4:
/*  f0d30e4:	afb80014 */ 	sw	$t8,0x14($sp)
/*  f0d30e8:	c440000c */ 	lwc1	$f0,0xc($v0)
/*  f0d30ec:	c7aa009c */ 	lwc1	$f10,0x9c($sp)
/*  f0d30f0:	c7b00098 */ 	lwc1	$f16,0x98($sp)
/*  f0d30f4:	24440008 */ 	addiu	$a0,$v0,0x8
/*  f0d30f8:	46005201 */ 	sub.s	$f8,$f10,$f0
/*  f0d30fc:	27a50128 */ 	addiu	$a1,$sp,0x128
/*  f0d3100:	8fa60094 */ 	lw	$a2,0x94($sp)
/*  f0d3104:	46008481 */ 	sub.s	$f18,$f16,$f0
/*  f0d3108:	e7a80018 */ 	swc1	$f8,0x18($sp)
/*  f0d310c:	27a700a8 */ 	addiu	$a3,$sp,0xa8
/*  f0d3110:	0c00aa7c */ 	jal	func0002a9f0
/*  f0d3114:	e7b2001c */ 	swc1	$f18,0x1c($sp)
/*  f0d3118:	afa20134 */ 	sw	$v0,0x134($sp)
.L0f0d311c:
/*  f0d311c:	8e390284 */ 	lw	$t9,0x284($s1)
/*  f0d3120:	24050001 */ 	addiu	$a1,$zero,0x1
/*  f0d3124:	0fc1905e */ 	jal	func0f064178
/*  f0d3128:	8f2400bc */ 	lw	$a0,0xbc($t9)
/*  f0d312c:	8e280284 */ 	lw	$t0,0x284($s1)
/*  f0d3130:	24050001 */ 	addiu	$a1,$zero,0x1
/*  f0d3134:	0fc1905e */ 	jal	func0f064178
/*  f0d3138:	8d041a6c */ 	lw	$a0,0x1a6c($t0)
/*  f0d313c:	44800000 */ 	mtc1	$zero,$f0
/*  f0d3140:	00000000 */ 	nop
/*  f0d3144:	c7a4013c */ 	lwc1	$f4,0x13c($sp)
.L0f0d3148:
/*  f0d3148:	02002025 */ 	or	$a0,$s0,$zero
/*  f0d314c:	2609001c */ 	addiu	$t1,$s0,0x1c
/*  f0d3150:	46002032 */ 	c.eq.s	$f4,$f0
/*  f0d3154:	00000000 */ 	nop
/*  f0d3158:	45030023 */ 	bc1tl	.L0f0d31e8
/*  f0d315c:	8fab0134 */ 	lw	$t3,0x134($sp)
/*  f0d3160:	0fc1c836 */ 	jal	hoverpropGetTurnAngle
/*  f0d3164:	afa90040 */ 	sw	$t1,0x40($sp)
/*  f0d3168:	c7a6013c */ 	lwc1	$f6,0x13c($sp)
/*  f0d316c:	3c017f1b */ 	lui	$at,%hi(var7f1adb7c)
/*  f0d3170:	c42edb7c */ 	lwc1	$f14,%lo(var7f1adb7c)($at)
/*  f0d3174:	46060081 */ 	sub.s	$f2,$f0,$f6
/*  f0d3178:	02002025 */ 	or	$a0,$s0,$zero
/*  f0d317c:	4602703e */ 	c.le.s	$f14,$f2
/*  f0d3180:	46001306 */ 	mov.s	$f12,$f2
/*  f0d3184:	45020004 */ 	bc1fl	.L0f0d3198
/*  f0d3188:	44805000 */ 	mtc1	$zero,$f10
/*  f0d318c:	10000008 */ 	b	.L0f0d31b0
/*  f0d3190:	460e1301 */ 	sub.s	$f12,$f2,$f14
/*  f0d3194:	44805000 */ 	mtc1	$zero,$f10
.L0f0d3198:
/*  f0d3198:	00000000 */ 	nop
/*  f0d319c:	460a103c */ 	c.lt.s	$f2,$f10
/*  f0d31a0:	00000000 */ 	nop
/*  f0d31a4:	45020003 */ 	bc1fl	.L0f0d31b4
/*  f0d31a8:	44056000 */ 	mfc1	$a1,$f12
/*  f0d31ac:	460e1300 */ 	add.s	$f12,$f2,$f14
.L0f0d31b0:
/*  f0d31b0:	44056000 */ 	mfc1	$a1,$f12
.L0f0d31b4:
/*  f0d31b4:	0fc1c844 */ 	jal	hoverpropSetTurnAngle
/*  f0d31b8:	e7ac0084 */ 	swc1	$f12,0x84($sp)
/*  f0d31bc:	c7ac0084 */ 	lwc1	$f12,0x84($sp)
/*  f0d31c0:	0c0058dd */ 	jal	func00016374
/*  f0d31c4:	27a50044 */ 	addiu	$a1,$sp,0x44
/*  f0d31c8:	8e0a0018 */ 	lw	$t2,0x18($s0)
/*  f0d31cc:	27a50044 */ 	addiu	$a1,$sp,0x44
/*  f0d31d0:	0c0057c1 */ 	jal	func00015f04
/*  f0d31d4:	c54c0014 */ 	lwc1	$f12,0x14($t2)
/*  f0d31d8:	27a40044 */ 	addiu	$a0,$sp,0x44
/*  f0d31dc:	0c005768 */ 	jal	func00015da0
/*  f0d31e0:	8fa50040 */ 	lw	$a1,0x40($sp)
/*  f0d31e4:	8fab0134 */ 	lw	$t3,0x134($sp)
.L0f0d31e8:
/*  f0d31e8:	24010001 */ 	addiu	$at,$zero,0x1
/*  f0d31ec:	8fac00d4 */ 	lw	$t4,0xd4($sp)
/*  f0d31f0:	55610024 */ 	bnel	$t3,$at,.L0f0d3284
/*  f0d31f4:	8fbf0034 */ 	lw	$ra,0x34($sp)
/*  f0d31f8:	51800022 */ 	beqzl	$t4,.L0f0d3284
/*  f0d31fc:	8fbf0034 */ 	lw	$ra,0x34($sp)
/*  f0d3200:	8e2e0284 */ 	lw	$t6,0x284($s1)
/*  f0d3204:	c7a80128 */ 	lwc1	$f8,0x128($sp)
/*  f0d3208:	2608005c */ 	addiu	$t0,$s0,0x5c
/*  f0d320c:	8dcd1a6c */ 	lw	$t5,0x1a6c($t6)
/*  f0d3210:	e5a80008 */ 	swc1	$f8,0x8($t5)
/*  f0d3214:	8e2f0284 */ 	lw	$t7,0x284($s1)
/*  f0d3218:	c7b00130 */ 	lwc1	$f16,0x130($sp)
/*  f0d321c:	8df81a6c */ 	lw	$t8,0x1a6c($t7)
/*  f0d3220:	e7100010 */ 	swc1	$f16,0x10($t8)
/*  f0d3224:	8e390284 */ 	lw	$t9,0x284($s1)
/*  f0d3228:	8f241a6c */ 	lw	$a0,0x1a6c($t9)
/*  f0d322c:	0fc19711 */ 	jal	func0f065c44
/*  f0d3230:	afa80040 */ 	sw	$t0,0x40($sp)
/*  f0d3234:	8e290284 */ 	lw	$t1,0x284($s1)
/*  f0d3238:	27a40118 */ 	addiu	$a0,$sp,0x118
/*  f0d323c:	8d251a6c */ 	lw	$a1,0x1a6c($t1)
/*  f0d3240:	0fc195e9 */ 	jal	roomsCopy
/*  f0d3244:	24a50028 */ 	addiu	$a1,$a1,0x28
/*  f0d3248:	27ab00d8 */ 	addiu	$t3,$sp,0xd8
/*  f0d324c:	256d003c */ 	addiu	$t5,$t3,0x3c
/*  f0d3250:	8faa0040 */ 	lw	$t2,0x40($sp)
.L0f0d3254:
/*  f0d3254:	8d610000 */ 	lw	$at,0x0($t3)
/*  f0d3258:	256b000c */ 	addiu	$t3,$t3,0xc
/*  f0d325c:	254a000c */ 	addiu	$t2,$t2,0xc
/*  f0d3260:	ad41fff4 */ 	sw	$at,-0xc($t2)
/*  f0d3264:	8d61fff8 */ 	lw	$at,-0x8($t3)
/*  f0d3268:	ad41fff8 */ 	sw	$at,-0x8($t2)
/*  f0d326c:	8d61fffc */ 	lw	$at,-0x4($t3)
/*  f0d3270:	156dfff8 */ 	bne	$t3,$t5,.L0f0d3254
/*  f0d3274:	ad41fffc */ 	sw	$at,-0x4($t2)
/*  f0d3278:	8d610000 */ 	lw	$at,0x0($t3)
/*  f0d327c:	ad410000 */ 	sw	$at,0x0($t2)
/*  f0d3280:	8fbf0034 */ 	lw	$ra,0x34($sp)
.L0f0d3284:
/*  f0d3284:	8fa20134 */ 	lw	$v0,0x134($sp)
/*  f0d3288:	8fb0002c */ 	lw	$s0,0x2c($sp)
/*  f0d328c:	8fb10030 */ 	lw	$s1,0x30($sp)
/*  f0d3290:	03e00008 */ 	jr	$ra
/*  f0d3294:	27bd0138 */ 	addiu	$sp,$sp,0x138
);

GLOBAL_ASM(
glabel func0f0d3298
/*  f0d3298:	27bdffc8 */ 	addiu	$sp,$sp,-56
/*  f0d329c:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f0d32a0:	afa40038 */ 	sw	$a0,0x38($sp)
/*  f0d32a4:	0fc34b86 */ 	jal	func0f0d2e18
/*  f0d32a8:	afa5003c */ 	sw	$a1,0x3c($sp)
/*  f0d32ac:	24010001 */ 	addiu	$at,$zero,0x1
/*  f0d32b0:	10410055 */ 	beq	$v0,$at,.L0f0d3408
/*  f0d32b4:	afa20034 */ 	sw	$v0,0x34($sp)
/*  f0d32b8:	0c0093ac */ 	jal	func00024eb0
/*  f0d32bc:	00000000 */ 	nop
/*  f0d32c0:	10400051 */ 	beqz	$v0,.L0f0d3408
/*  f0d32c4:	3c05800a */ 	lui	$a1,%hi(g_Vars)
/*  f0d32c8:	24a59fc0 */ 	addiu	$a1,$a1,%lo(g_Vars)
/*  f0d32cc:	8cae0034 */ 	lw	$t6,0x34($a1)
/*  f0d32d0:	59c0004e */ 	blezl	$t6,.L0f0d340c
/*  f0d32d4:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f0d32d8:	90430000 */ 	lbu	$v1,0x0($v0)
/*  f0d32dc:	24010003 */ 	addiu	$at,$zero,0x3
/*  f0d32e0:	10610049 */ 	beq	$v1,$at,.L0f0d3408
/*  f0d32e4:	24010006 */ 	addiu	$at,$zero,0x6
/*  f0d32e8:	10610047 */ 	beq	$v1,$at,.L0f0d3408
/*  f0d32ec:	24010001 */ 	addiu	$at,$zero,0x1
/*  f0d32f0:	54610046 */ 	bnel	$v1,$at,.L0f0d340c
/*  f0d32f4:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f0d32f8:	8c470004 */ 	lw	$a3,0x4($v0)
/*  f0d32fc:	8ce30040 */ 	lw	$v1,0x40($a3)
/*  f0d3300:	00037940 */ 	sll	$t7,$v1,0x5
/*  f0d3304:	05e00040 */ 	bltz	$t7,.L0f0d3408
/*  f0d3308:	0003c100 */ 	sll	$t8,$v1,0x4
/*  f0d330c:	0702003f */ 	bltzl	$t8,.L0f0d340c
/*  f0d3310:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f0d3314:	8cf90010 */ 	lw	$t9,0x10($a3)
/*  f0d3318:	33280001 */ 	andi	$t0,$t9,0x1
/*  f0d331c:	5100003b */ 	beqzl	$t0,.L0f0d340c
/*  f0d3320:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f0d3324:	8ca90284 */ 	lw	$t1,0x284($a1)
/*  f0d3328:	306b0080 */ 	andi	$t3,$v1,0x80
/*  f0d332c:	24020001 */ 	addiu	$v0,$zero,0x1
/*  f0d3330:	8d2a1a6c */ 	lw	$t2,0x1a6c($t1)
/*  f0d3334:	8fa50038 */ 	lw	$a1,0x38($sp)
/*  f0d3338:	11600007 */ 	beqz	$t3,.L0f0d3358
/*  f0d333c:	8d440004 */ 	lw	$a0,0x4($t2)
/*  f0d3340:	8cec0048 */ 	lw	$t4,0x48($a3)
/*  f0d3344:	8d8d0000 */ 	lw	$t5,0x0($t4)
/*  f0d3348:	31ae1000 */ 	andi	$t6,$t5,0x1000
/*  f0d334c:	11c00002 */ 	beqz	$t6,.L0f0d3358
/*  f0d3350:	00000000 */ 	nop
/*  f0d3354:	00001025 */ 	or	$v0,$zero,$zero
.L0f0d3358:
/*  f0d3358:	1040002b */ 	beqz	$v0,.L0f0d3408
/*  f0d335c:	8fa6003c */ 	lw	$a2,0x3c($sp)
/*  f0d3360:	0fc34ad0 */ 	jal	func0f0d2b40
/*  f0d3364:	afa7002c */ 	sw	$a3,0x2c($sp)
/*  f0d3368:	8fa7002c */ 	lw	$a3,0x2c($sp)
/*  f0d336c:	8cef0040 */ 	lw	$t7,0x40($a3)
/*  f0d3370:	31f80080 */ 	andi	$t8,$t7,0x80
/*  f0d3374:	53000025 */ 	beqzl	$t8,.L0f0d340c
/*  f0d3378:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f0d337c:	8cf90048 */ 	lw	$t9,0x48($a3)
/*  f0d3380:	00e02025 */ 	or	$a0,$a3,$zero
/*  f0d3384:	27a5001c */ 	addiu	$a1,$sp,0x1c
/*  f0d3388:	8f280000 */ 	lw	$t0,0x0($t9)
/*  f0d338c:	31090800 */ 	andi	$t1,$t0,0x800
/*  f0d3390:	5120001e */ 	beqzl	$t1,.L0f0d340c
/*  f0d3394:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f0d3398:	afa0001c */ 	sw	$zero,0x1c($sp)
/*  f0d339c:	0fc1cf1b */ 	jal	func0f073c6c
/*  f0d33a0:	afa7002c */ 	sw	$a3,0x2c($sp)
/*  f0d33a4:	8fa7002c */ 	lw	$a3,0x2c($sp)
/*  f0d33a8:	8cea0040 */ 	lw	$t2,0x40($a3)
/*  f0d33ac:	314b0080 */ 	andi	$t3,$t2,0x80
/*  f0d33b0:	11600010 */ 	beqz	$t3,.L0f0d33f4
/*  f0d33b4:	00000000 */ 	nop
/*  f0d33b8:	8ce30048 */ 	lw	$v1,0x48($a3)
/*  f0d33bc:	8c6c0000 */ 	lw	$t4,0x0($v1)
/*  f0d33c0:	358d1000 */ 	ori	$t5,$t4,0x1000
/*  f0d33c4:	10400006 */ 	beqz	$v0,.L0f0d33e0
/*  f0d33c8:	ac6d0000 */ 	sw	$t5,0x0($v1)
/*  f0d33cc:	8ce30048 */ 	lw	$v1,0x48($a3)
/*  f0d33d0:	8c6e0000 */ 	lw	$t6,0x0($v1)
/*  f0d33d4:	35cf2000 */ 	ori	$t7,$t6,0x2000
/*  f0d33d8:	10000006 */ 	b	.L0f0d33f4
/*  f0d33dc:	ac6f0000 */ 	sw	$t7,0x0($v1)
.L0f0d33e0:
/*  f0d33e0:	8ce30048 */ 	lw	$v1,0x48($a3)
/*  f0d33e4:	2401dfff */ 	addiu	$at,$zero,-8193
/*  f0d33e8:	8c780000 */ 	lw	$t8,0x0($v1)
/*  f0d33ec:	0301c824 */ 	and	$t9,$t8,$at
/*  f0d33f0:	ac790000 */ 	sw	$t9,0x0($v1)
.L0f0d33f4:
/*  f0d33f4:	10400004 */ 	beqz	$v0,.L0f0d3408
/*  f0d33f8:	8fa40038 */ 	lw	$a0,0x38($sp)
/*  f0d33fc:	0fc34b86 */ 	jal	func0f0d2e18
/*  f0d3400:	8fa5003c */ 	lw	$a1,0x3c($sp)
/*  f0d3404:	afa20034 */ 	sw	$v0,0x34($sp)
.L0f0d3408:
/*  f0d3408:	8fbf0014 */ 	lw	$ra,0x14($sp)
.L0f0d340c:
/*  f0d340c:	8fa20034 */ 	lw	$v0,0x34($sp)
/*  f0d3410:	27bd0038 */ 	addiu	$sp,$sp,0x38
/*  f0d3414:	03e00008 */ 	jr	$ra
/*  f0d3418:	00000000 */ 	nop
);

GLOBAL_ASM(
glabel func0f0d341c
.late_rodata
glabel var7f1adb80
.word 0x40c907a9
glabel var7f1adb84
.word 0xc6ea6000
.text
/*  f0d341c:	27bdff98 */ 	addiu	$sp,$sp,-104
/*  f0d3420:	afb00030 */ 	sw	$s0,0x30($sp)
/*  f0d3424:	3c10800a */ 	lui	$s0,%hi(g_Vars)
/*  f0d3428:	26109fc0 */ 	addiu	$s0,$s0,%lo(g_Vars)
/*  f0d342c:	8e0e0284 */ 	lw	$t6,0x284($s0)
/*  f0d3430:	afbf0034 */ 	sw	$ra,0x34($sp)
/*  f0d3434:	afa40068 */ 	sw	$a0,0x68($sp)
/*  f0d3438:	8dcf1a6c */ 	lw	$t7,0x1a6c($t6)
/*  f0d343c:	8de40004 */ 	lw	$a0,0x4($t7)
/*  f0d3440:	afa00048 */ 	sw	$zero,0x48($sp)
/*  f0d3444:	0fc1c836 */ 	jal	hoverpropGetTurnAngle
/*  f0d3448:	afa40064 */ 	sw	$a0,0x64($sp)
/*  f0d344c:	8fb80064 */ 	lw	$t8,0x64($sp)
/*  f0d3450:	e7a00060 */ 	swc1	$f0,0x60($sp)
/*  f0d3454:	8fa60068 */ 	lw	$a2,0x68($sp)
/*  f0d3458:	8f020014 */ 	lw	$v0,0x14($t8)
/*  f0d345c:	27a70050 */ 	addiu	$a3,$sp,0x50
/*  f0d3460:	24440008 */ 	addiu	$a0,$v0,0x8
/*  f0d3464:	0fc1979d */ 	jal	func0f065e74
/*  f0d3468:	24450028 */ 	addiu	$a1,$v0,0x28
/*  f0d346c:	8e040284 */ 	lw	$a0,0x284($s0)
/*  f0d3470:	8fa50068 */ 	lw	$a1,0x68($sp)
/*  f0d3474:	0fc32de7 */ 	jal	func0f0cb79c
/*  f0d3478:	27a60050 */ 	addiu	$a2,$sp,0x50
/*  f0d347c:	8e190284 */ 	lw	$t9,0x284($s0)
/*  f0d3480:	0fc19711 */ 	jal	func0f065c44
/*  f0d3484:	8f2400bc */ 	lw	$a0,0xbc($t9)
/*  f0d3488:	8e090284 */ 	lw	$t1,0x284($s0)
/*  f0d348c:	27a40050 */ 	addiu	$a0,$sp,0x50
/*  f0d3490:	8d2500bc */ 	lw	$a1,0xbc($t1)
/*  f0d3494:	0fc195e9 */ 	jal	roomsCopy
/*  f0d3498:	24a50028 */ 	addiu	$a1,$a1,0x28
/*  f0d349c:	3c017f1b */ 	lui	$at,%hi(var7f1adb80)
/*  f0d34a0:	c420db80 */ 	lwc1	$f0,%lo(var7f1adb80)($at)
/*  f0d34a4:	c7a40060 */ 	lwc1	$f4,0x60($sp)
/*  f0d34a8:	3c0143b4 */ 	lui	$at,0x43b4
/*  f0d34ac:	44814000 */ 	mtc1	$at,$f8
/*  f0d34b0:	46040181 */ 	sub.s	$f6,$f0,$f4
/*  f0d34b4:	8e0a0284 */ 	lw	$t2,0x284($s0)
/*  f0d34b8:	8fa80068 */ 	lw	$t0,0x68($sp)
/*  f0d34bc:	46083282 */ 	mul.s	$f10,$f6,$f8
/*  f0d34c0:	46005403 */ 	div.s	$f16,$f10,$f0
/*  f0d34c4:	e5500144 */ 	swc1	$f16,0x144($t2)
/*  f0d34c8:	8e0b0284 */ 	lw	$t3,0x284($s0)
/*  f0d34cc:	c5120000 */ 	lwc1	$f18,0x0($t0)
/*  f0d34d0:	8d6c00bc */ 	lw	$t4,0xbc($t3)
/*  f0d34d4:	27ab004c */ 	addiu	$t3,$sp,0x4c
/*  f0d34d8:	e5920008 */ 	swc1	$f18,0x8($t4)
/*  f0d34dc:	8e0d0284 */ 	lw	$t5,0x284($s0)
/*  f0d34e0:	c5040004 */ 	lwc1	$f4,0x4($t0)
/*  f0d34e4:	27ac0048 */ 	addiu	$t4,$sp,0x48
/*  f0d34e8:	8dae00bc */ 	lw	$t6,0xbc($t5)
/*  f0d34ec:	e5c4000c */ 	swc1	$f4,0xc($t6)
/*  f0d34f0:	8e0f0284 */ 	lw	$t7,0x284($s0)
/*  f0d34f4:	c5060008 */ 	lwc1	$f6,0x8($t0)
/*  f0d34f8:	8df800bc */ 	lw	$t8,0xbc($t7)
/*  f0d34fc:	e7060010 */ 	swc1	$f6,0x10($t8)
/*  f0d3500:	8e020284 */ 	lw	$v0,0x284($s0)
/*  f0d3504:	8c4300bc */ 	lw	$v1,0xbc($v0)
/*  f0d3508:	8c450378 */ 	lw	$a1,0x378($v0)
/*  f0d350c:	2459161e */ 	addiu	$t9,$v0,0x161e
/*  f0d3510:	2449161c */ 	addiu	$t1,$v0,0x161c
/*  f0d3514:	244a19b0 */ 	addiu	$t2,$v0,0x19b0
/*  f0d3518:	afaa0018 */ 	sw	$t2,0x18($sp)
/*  f0d351c:	afa90014 */ 	sw	$t1,0x14($sp)
/*  f0d3520:	afb90010 */ 	sw	$t9,0x10($sp)
/*  f0d3524:	afac0020 */ 	sw	$t4,0x20($sp)
/*  f0d3528:	afab001c */ 	sw	$t3,0x1c($sp)
/*  f0d352c:	2447161a */ 	addiu	$a3,$v0,0x161a
/*  f0d3530:	24640008 */ 	addiu	$a0,$v1,0x8
/*  f0d3534:	0c00a86c */ 	jal	coordFindGroundY
/*  f0d3538:	24660028 */ 	addiu	$a2,$v1,0x28
/*  f0d353c:	3c017f1b */ 	lui	$at,%hi(var7f1adb84)
/*  f0d3540:	c42cdb84 */ 	lwc1	$f12,%lo(var7f1adb84)($at)
/*  f0d3544:	46000086 */ 	mov.s	$f2,$f0
/*  f0d3548:	8fae004c */ 	lw	$t6,0x4c($sp)
/*  f0d354c:	460c003c */ 	c.lt.s	$f0,$f12
/*  f0d3550:	00000000 */ 	nop
/*  f0d3554:	45020003 */ 	bc1fl	.L0f0d3564
/*  f0d3558:	8e020284 */ 	lw	$v0,0x284($s0)
/*  f0d355c:	46006086 */ 	mov.s	$f2,$f12
/*  f0d3560:	8e020284 */ 	lw	$v0,0x284($s0)
.L0f0d3564:
/*  f0d3564:	8c4d02b0 */ 	lw	$t5,0x2b0($v0)
/*  f0d3568:	51a0000d */ 	beqzl	$t5,.L0f0d35a0
/*  f0d356c:	afa00048 */ 	sw	$zero,0x48($sp)
/*  f0d3570:	51c0000b */ 	beqzl	$t6,.L0f0d35a0
/*  f0d3574:	afa00048 */ 	sw	$zero,0x48($sp)
/*  f0d3578:	8c4f1a7c */ 	lw	$t7,0x1a7c($v0)
/*  f0d357c:	c4480078 */ 	lwc1	$f8,0x78($v0)
/*  f0d3580:	15e00007 */ 	bnez	$t7,.L0f0d35a0
/*  f0d3584:	46081001 */ 	sub.s	$f0,$f2,$f8
/*  f0d3588:	c44a1a94 */ 	lwc1	$f10,0x1a94($v0)
/*  f0d358c:	46005400 */ 	add.s	$f16,$f10,$f0
/*  f0d3590:	e4501a94 */ 	swc1	$f16,0x1a94($v0)
/*  f0d3594:	10000002 */ 	b	.L0f0d35a0
/*  f0d3598:	8e020284 */ 	lw	$v0,0x284($s0)
/*  f0d359c:	afa00048 */ 	sw	$zero,0x48($sp)
.L0f0d35a0:
/*  f0d35a0:	8fb8004c */ 	lw	$t8,0x4c($sp)
/*  f0d35a4:	ac5802b0 */ 	sw	$t8,0x2b0($v0)
/*  f0d35a8:	8fb9004c */ 	lw	$t9,0x4c($sp)
/*  f0d35ac:	53200004 */ 	beqzl	$t9,.L0f0d35c0
/*  f0d35b0:	8faa0048 */ 	lw	$t2,0x48($sp)
/*  f0d35b4:	8e090284 */ 	lw	$t1,0x284($s0)
/*  f0d35b8:	e5220294 */ 	swc1	$f2,0x294($t1)
/*  f0d35bc:	8faa0048 */ 	lw	$t2,0x48($sp)
.L0f0d35c0:
/*  f0d35c0:	8e0b0284 */ 	lw	$t3,0x284($s0)
/*  f0d35c4:	ad6a0298 */ 	sw	$t2,0x298($t3)
/*  f0d35c8:	8e0c0284 */ 	lw	$t4,0x284($s0)
/*  f0d35cc:	e5820078 */ 	swc1	$f2,0x78($t4)
/*  f0d35d0:	8e020284 */ 	lw	$v0,0x284($s0)
/*  f0d35d4:	c45203c4 */ 	lwc1	$f18,0x3c4($v0)
/*  f0d35d8:	c4440414 */ 	lwc1	$f4,0x414($v0)
/*  f0d35dc:	c44819c4 */ 	lwc1	$f8,0x19c4($v0)
/*  f0d35e0:	46049183 */ 	div.s	$f6,$f18,$f4
/*  f0d35e4:	46083282 */ 	mul.s	$f10,$f6,$f8
/*  f0d35e8:	e44a19bc */ 	swc1	$f10,0x19bc($v0)
/*  f0d35ec:	8e020284 */ 	lw	$v0,0x284($s0)
/*  f0d35f0:	8c4d00bc */ 	lw	$t5,0xbc($v0)
/*  f0d35f4:	c45219bc */ 	lwc1	$f18,0x19bc($v0)
/*  f0d35f8:	c5b0000c */ 	lwc1	$f16,0xc($t5)
/*  f0d35fc:	46128101 */ 	sub.s	$f4,$f16,$f18
/*  f0d3600:	e4440074 */ 	swc1	$f4,0x74($v0)
/*  f0d3604:	8e0e0284 */ 	lw	$t6,0x284($s0)
/*  f0d3608:	95cf161c */ 	lhu	$t7,0x161c($t6)
/*  f0d360c:	31f84000 */ 	andi	$t8,$t7,0x4000
/*  f0d3610:	13000003 */ 	beqz	$t8,.L0f0d3620
/*  f0d3614:	00000000 */ 	nop
/*  f0d3618:	0fc304ea */ 	jal	currentPlayerDie
/*  f0d361c:	24040001 */ 	addiu	$a0,$zero,0x1
.L0f0d3620:
/*  f0d3620:	0fc32fd4 */ 	jal	func0f0cbf50
/*  f0d3624:	00000000 */ 	nop
/*  f0d3628:	8fbf0034 */ 	lw	$ra,0x34($sp)
/*  f0d362c:	8fb00030 */ 	lw	$s0,0x30($sp)
/*  f0d3630:	27bd0068 */ 	addiu	$sp,$sp,0x68
/*  f0d3634:	03e00008 */ 	jr	$ra
/*  f0d3638:	00000000 */ 	nop
);

s32 func0f0d363c(f32 arg0)
{
	struct coord coord = {0, 0, 0};

	return func0f0d3298(&coord, arg0);
}

s32 func0f0d3680(struct coord *arg0, struct coord *arg1, struct coord *arg2)
{
	s32 result = func0f0d3298(arg0, 0);

	if (!result) {
		func00024e4c(arg1, arg2, 659, "bondbike.c");
	}

	return result;
}

const char var7f1adb28[] = "bondbike.c";

GLOBAL_ASM(
glabel func0f0d36d4
/*  f0d36d4:	27bdffd0 */ 	addiu	$sp,$sp,-48
/*  f0d36d8:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f0d36dc:	afa40030 */ 	sw	$a0,0x30($sp)
/*  f0d36e0:	afa50034 */ 	sw	$a1,0x34($sp)
/*  f0d36e4:	afa60038 */ 	sw	$a2,0x38($sp)
/*  f0d36e8:	0c0093a9 */ 	jal	func00024ea4
/*  f0d36ec:	afa7003c */ 	sw	$a3,0x3c($sp)
/*  f0d36f0:	5040004f */ 	beqzl	$v0,.L0f0d3830
/*  f0d36f4:	2402ffff */ 	addiu	$v0,$zero,-1
/*  f0d36f8:	0c0093a6 */ 	jal	func00024e98
/*  f0d36fc:	00000000 */ 	nop
/*  f0d3700:	8fa30030 */ 	lw	$v1,0x30($sp)
/*  f0d3704:	3c013e80 */ 	lui	$at,0x3e80
/*  f0d3708:	44811000 */ 	mtc1	$at,$f2
/*  f0d370c:	c4640000 */ 	lwc1	$f4,0x0($v1)
/*  f0d3710:	27a40024 */ 	addiu	$a0,$sp,0x24
/*  f0d3714:	24050000 */ 	addiu	$a1,$zero,0x0
/*  f0d3718:	46002182 */ 	mul.s	$f6,$f4,$f0
/*  f0d371c:	00000000 */ 	nop
/*  f0d3720:	46023202 */ 	mul.s	$f8,$f6,$f2
/*  f0d3724:	e7a80024 */ 	swc1	$f8,0x24($sp)
/*  f0d3728:	c46a0004 */ 	lwc1	$f10,0x4($v1)
/*  f0d372c:	46005402 */ 	mul.s	$f16,$f10,$f0
/*  f0d3730:	00000000 */ 	nop
/*  f0d3734:	46028482 */ 	mul.s	$f18,$f16,$f2
/*  f0d3738:	e7b20028 */ 	swc1	$f18,0x28($sp)
/*  f0d373c:	c4640008 */ 	lwc1	$f4,0x8($v1)
/*  f0d3740:	46002182 */ 	mul.s	$f6,$f4,$f0
/*  f0d3744:	00000000 */ 	nop
/*  f0d3748:	46023202 */ 	mul.s	$f8,$f6,$f2
/*  f0d374c:	0fc34ca6 */ 	jal	func0f0d3298
/*  f0d3750:	e7a8002c */ 	swc1	$f8,0x2c($sp)
/*  f0d3754:	24010001 */ 	addiu	$at,$zero,0x1
/*  f0d3758:	14410003 */ 	bne	$v0,$at,.L0f0d3768
/*  f0d375c:	00000000 */ 	nop
/*  f0d3760:	10000033 */ 	b	.L0f0d3830
/*  f0d3764:	24020001 */ 	addiu	$v0,$zero,0x1
.L0f0d3768:
/*  f0d3768:	14400030 */ 	bnez	$v0,.L0f0d382c
/*  f0d376c:	8fa50040 */ 	lw	$a1,0x40($sp)
/*  f0d3770:	3c077f1b */ 	lui	$a3,%hi(var7f1adb28)
/*  f0d3774:	24e7db28 */ 	addiu	$a3,$a3,%lo(var7f1adb28)
/*  f0d3778:	8fa4003c */ 	lw	$a0,0x3c($sp)
/*  f0d377c:	0c009393 */ 	jal	func00024e4c
/*  f0d3780:	240602ad */ 	addiu	$a2,$zero,0x2ad
/*  f0d3784:	8fa20034 */ 	lw	$v0,0x34($sp)
/*  f0d3788:	8fa3003c */ 	lw	$v1,0x3c($sp)
/*  f0d378c:	8fa50040 */ 	lw	$a1,0x40($sp)
/*  f0d3790:	c4500000 */ 	lwc1	$f16,0x0($v0)
/*  f0d3794:	c46a0000 */ 	lwc1	$f10,0x0($v1)
/*  f0d3798:	46105032 */ 	c.eq.s	$f10,$f16
/*  f0d379c:	00000000 */ 	nop
/*  f0d37a0:	45000020 */ 	bc1f	.L0f0d3824
/*  f0d37a4:	00000000 */ 	nop
/*  f0d37a8:	c4720004 */ 	lwc1	$f18,0x4($v1)
/*  f0d37ac:	c4440004 */ 	lwc1	$f4,0x4($v0)
/*  f0d37b0:	46049032 */ 	c.eq.s	$f18,$f4
/*  f0d37b4:	00000000 */ 	nop
/*  f0d37b8:	4500001a */ 	bc1f	.L0f0d3824
/*  f0d37bc:	00000000 */ 	nop
/*  f0d37c0:	c4660008 */ 	lwc1	$f6,0x8($v1)
/*  f0d37c4:	c4480008 */ 	lwc1	$f8,0x8($v0)
/*  f0d37c8:	8fa20038 */ 	lw	$v0,0x38($sp)
/*  f0d37cc:	46083032 */ 	c.eq.s	$f6,$f8
/*  f0d37d0:	00000000 */ 	nop
/*  f0d37d4:	45000013 */ 	bc1f	.L0f0d3824
/*  f0d37d8:	00000000 */ 	nop
/*  f0d37dc:	c4aa0000 */ 	lwc1	$f10,0x0($a1)
/*  f0d37e0:	c4500000 */ 	lwc1	$f16,0x0($v0)
/*  f0d37e4:	46105032 */ 	c.eq.s	$f10,$f16
/*  f0d37e8:	00000000 */ 	nop
/*  f0d37ec:	4500000d */ 	bc1f	.L0f0d3824
/*  f0d37f0:	00000000 */ 	nop
/*  f0d37f4:	c4b20004 */ 	lwc1	$f18,0x4($a1)
/*  f0d37f8:	c4440004 */ 	lwc1	$f4,0x4($v0)
/*  f0d37fc:	46049032 */ 	c.eq.s	$f18,$f4
/*  f0d3800:	00000000 */ 	nop
/*  f0d3804:	45000007 */ 	bc1f	.L0f0d3824
/*  f0d3808:	00000000 */ 	nop
/*  f0d380c:	c4a60008 */ 	lwc1	$f6,0x8($a1)
/*  f0d3810:	c4480008 */ 	lwc1	$f8,0x8($v0)
/*  f0d3814:	46083032 */ 	c.eq.s	$f6,$f8
/*  f0d3818:	00000000 */ 	nop
/*  f0d381c:	45030004 */ 	bc1tl	.L0f0d3830
/*  f0d3820:	2402ffff */ 	addiu	$v0,$zero,-1
.L0f0d3824:
/*  f0d3824:	10000002 */ 	b	.L0f0d3830
/*  f0d3828:	00001025 */ 	or	$v0,$zero,$zero
.L0f0d382c:
/*  f0d382c:	2402ffff */ 	addiu	$v0,$zero,-1
.L0f0d3830:
/*  f0d3830:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f0d3834:	27bd0030 */ 	addiu	$sp,$sp,0x30
/*  f0d3838:	03e00008 */ 	jr	$ra
/*  f0d383c:	00000000 */ 	nop
);

GLOBAL_ASM(
glabel func0f0d3840
/*  f0d3840:	27bdffc0 */ 	addiu	$sp,$sp,-64
/*  f0d3844:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f0d3848:	c4c20000 */ 	lwc1	$f2,0x0($a2)
/*  f0d384c:	c4a00000 */ 	lwc1	$f0,0x0($a1)
/*  f0d3850:	00803825 */ 	or	$a3,$a0,$zero
/*  f0d3854:	46020032 */ 	c.eq.s	$f0,$f2
/*  f0d3858:	00000000 */ 	nop
/*  f0d385c:	45020009 */ 	bc1fl	.L0f0d3884
/*  f0d3860:	46001201 */ 	sub.s	$f8,$f2,$f0
/*  f0d3864:	c4a40008 */ 	lwc1	$f4,0x8($a1)
/*  f0d3868:	c4c60008 */ 	lwc1	$f6,0x8($a2)
/*  f0d386c:	2403ffff */ 	addiu	$v1,$zero,-1
/*  f0d3870:	46062032 */ 	c.eq.s	$f4,$f6
/*  f0d3874:	00000000 */ 	nop
/*  f0d3878:	4501002c */ 	bc1t	.L0f0d392c
/*  f0d387c:	00000000 */ 	nop
/*  f0d3880:	46001201 */ 	sub.s	$f8,$f2,$f0
.L0f0d3884:
/*  f0d3884:	e7a80030 */ 	swc1	$f8,0x30($sp)
/*  f0d3888:	c4b00008 */ 	lwc1	$f16,0x8($a1)
/*  f0d388c:	c4ca0008 */ 	lwc1	$f10,0x8($a2)
/*  f0d3890:	c7a80030 */ 	lwc1	$f8,0x30($sp)
/*  f0d3894:	afa70040 */ 	sw	$a3,0x40($sp)
/*  f0d3898:	46105481 */ 	sub.s	$f18,$f10,$f16
/*  f0d389c:	e7b20038 */ 	swc1	$f18,0x38($sp)
/*  f0d38a0:	c7a40038 */ 	lwc1	$f4,0x38($sp)
/*  f0d38a4:	46042182 */ 	mul.s	$f6,$f4,$f4
/*  f0d38a8:	00000000 */ 	nop
/*  f0d38ac:	46084282 */ 	mul.s	$f10,$f8,$f8
/*  f0d38b0:	0c012974 */ 	jal	sqrtf
/*  f0d38b4:	460a3300 */ 	add.s	$f12,$f6,$f10
/*  f0d38b8:	3c013f80 */ 	lui	$at,0x3f80
/*  f0d38bc:	44818000 */ 	mtc1	$at,$f16
/*  f0d38c0:	c7b20030 */ 	lwc1	$f18,0x30($sp)
/*  f0d38c4:	c7a80038 */ 	lwc1	$f8,0x38($sp)
/*  f0d38c8:	46008083 */ 	div.s	$f2,$f16,$f0
/*  f0d38cc:	8fa70040 */ 	lw	$a3,0x40($sp)
/*  f0d38d0:	44807000 */ 	mtc1	$zero,$f14
/*  f0d38d4:	27a40024 */ 	addiu	$a0,$sp,0x24
/*  f0d38d8:	44057000 */ 	mfc1	$a1,$f14
/*  f0d38dc:	46029102 */ 	mul.s	$f4,$f18,$f2
/*  f0d38e0:	00000000 */ 	nop
/*  f0d38e4:	46024182 */ 	mul.s	$f6,$f8,$f2
/*  f0d38e8:	e7a40030 */ 	swc1	$f4,0x30($sp)
/*  f0d38ec:	e7a60038 */ 	swc1	$f6,0x38($sp)
/*  f0d38f0:	c4ea0008 */ 	lwc1	$f10,0x8($a3)
/*  f0d38f4:	c4f20000 */ 	lwc1	$f18,0x0($a3)
/*  f0d38f8:	e7ae0028 */ 	swc1	$f14,0x28($sp)
/*  f0d38fc:	460a3402 */ 	mul.s	$f16,$f6,$f10
/*  f0d3900:	00000000 */ 	nop
/*  f0d3904:	46049202 */ 	mul.s	$f8,$f18,$f4
/*  f0d3908:	46088300 */ 	add.s	$f12,$f16,$f8
/*  f0d390c:	460c2282 */ 	mul.s	$f10,$f4,$f12
/*  f0d3910:	00000000 */ 	nop
/*  f0d3914:	460c3482 */ 	mul.s	$f18,$f6,$f12
/*  f0d3918:	e7aa0024 */ 	swc1	$f10,0x24($sp)
/*  f0d391c:	0fc34ca6 */ 	jal	func0f0d3298
/*  f0d3920:	e7b2002c */ 	swc1	$f18,0x2c($sp)
/*  f0d3924:	10000001 */ 	b	.L0f0d392c
/*  f0d3928:	00401825 */ 	or	$v1,$v0,$zero
.L0f0d392c:
/*  f0d392c:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f0d3930:	27bd0040 */ 	addiu	$sp,$sp,0x40
/*  f0d3934:	00601025 */ 	or	$v0,$v1,$zero
/*  f0d3938:	03e00008 */ 	jr	$ra
/*  f0d393c:	00000000 */ 	nop
);

GLOBAL_ASM(
glabel func0f0d3940
/*  f0d3940:	27bdffa8 */ 	addiu	$sp,$sp,-88
/*  f0d3944:	3c0e800a */ 	lui	$t6,%hi(g_Vars+0x284)
/*  f0d3948:	8dcea244 */ 	lw	$t6,%lo(g_Vars+0x284)($t6)
/*  f0d394c:	afb20020 */ 	sw	$s2,0x20($sp)
/*  f0d3950:	afb1001c */ 	sw	$s1,0x1c($sp)
/*  f0d3954:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f0d3958:	00a08025 */ 	or	$s0,$a1,$zero
/*  f0d395c:	00808825 */ 	or	$s1,$a0,$zero
/*  f0d3960:	00c09025 */ 	or	$s2,$a2,$zero
/*  f0d3964:	afbf0024 */ 	sw	$ra,0x24($sp)
/*  f0d3968:	27a6003c */ 	addiu	$a2,$sp,0x3c
/*  f0d396c:	27a50030 */ 	addiu	$a1,$sp,0x30
/*  f0d3970:	27a70038 */ 	addiu	$a3,$sp,0x38
/*  f0d3974:	0fc21d5b */ 	jal	propObjGetBbox
/*  f0d3978:	8dc41a6c */ 	lw	$a0,0x1a6c($t6)
/*  f0d397c:	3c03800a */ 	lui	$v1,%hi(g_Vars+0x284)
/*  f0d3980:	8c63a244 */ 	lw	$v1,%lo(g_Vars+0x284)($v1)
/*  f0d3984:	c6240000 */ 	lwc1	$f4,0x0($s1)
/*  f0d3988:	c60a0000 */ 	lwc1	$f10,0x0($s0)
/*  f0d398c:	8c6f1a6c */ 	lw	$t7,0x1a6c($v1)
/*  f0d3990:	c5e60008 */ 	lwc1	$f6,0x8($t7)
/*  f0d3994:	46062200 */ 	add.s	$f8,$f4,$f6
/*  f0d3998:	46085401 */ 	sub.s	$f16,$f10,$f8
/*  f0d399c:	e7b0004c */ 	swc1	$f16,0x4c($sp)
/*  f0d39a0:	8c781a6c */ 	lw	$t8,0x1a6c($v1)
/*  f0d39a4:	c6320008 */ 	lwc1	$f18,0x8($s1)
/*  f0d39a8:	c60a0008 */ 	lwc1	$f10,0x8($s0)
/*  f0d39ac:	c7040010 */ 	lwc1	$f4,0x10($t8)
/*  f0d39b0:	c7b00030 */ 	lwc1	$f16,0x30($sp)
/*  f0d39b4:	46049180 */ 	add.s	$f6,$f18,$f4
/*  f0d39b8:	46108002 */ 	mul.s	$f0,$f16,$f16
/*  f0d39bc:	46065201 */ 	sub.s	$f8,$f10,$f6
/*  f0d39c0:	c7aa004c */ 	lwc1	$f10,0x4c($sp)
/*  f0d39c4:	e7a80054 */ 	swc1	$f8,0x54($sp)
/*  f0d39c8:	c7b20054 */ 	lwc1	$f18,0x54($sp)
/*  f0d39cc:	46129102 */ 	mul.s	$f4,$f18,$f18
/*  f0d39d0:	00000000 */ 	nop
/*  f0d39d4:	460a5182 */ 	mul.s	$f6,$f10,$f10
/*  f0d39d8:	46062200 */ 	add.s	$f8,$f4,$f6
/*  f0d39dc:	4600403e */ 	c.le.s	$f8,$f0
/*  f0d39e0:	00000000 */ 	nop
/*  f0d39e4:	45000040 */ 	bc1f	.L0f0d3ae8
/*  f0d39e8:	00000000 */ 	nop
/*  f0d39ec:	8c621a6c */ 	lw	$v0,0x1a6c($v1)
/*  f0d39f0:	c6100000 */ 	lwc1	$f16,0x0($s0)
/*  f0d39f4:	c4520008 */ 	lwc1	$f18,0x8($v0)
/*  f0d39f8:	46128032 */ 	c.eq.s	$f16,$f18
/*  f0d39fc:	00000000 */ 	nop
/*  f0d3a00:	45020008 */ 	bc1fl	.L0f0d3a24
/*  f0d3a04:	c6060008 */ 	lwc1	$f6,0x8($s0)
/*  f0d3a08:	c60a0008 */ 	lwc1	$f10,0x8($s0)
/*  f0d3a0c:	c4440010 */ 	lwc1	$f4,0x10($v0)
/*  f0d3a10:	46045032 */ 	c.eq.s	$f10,$f4
/*  f0d3a14:	00000000 */ 	nop
/*  f0d3a18:	4503008b */ 	bc1tl	.L0f0d3c48
/*  f0d3a1c:	00001025 */ 	or	$v0,$zero,$zero
/*  f0d3a20:	c6060008 */ 	lwc1	$f6,0x8($s0)
.L0f0d3a24:
/*  f0d3a24:	c4480010 */ 	lwc1	$f8,0x10($v0)
/*  f0d3a28:	44805000 */ 	mtc1	$zero,$f10
/*  f0d3a2c:	46083401 */ 	sub.s	$f16,$f6,$f8
/*  f0d3a30:	e7aa0050 */ 	swc1	$f10,0x50($sp)
/*  f0d3a34:	46008487 */ 	neg.s	$f18,$f16
/*  f0d3a38:	e7b2004c */ 	swc1	$f18,0x4c($sp)
/*  f0d3a3c:	8c791a6c */ 	lw	$t9,0x1a6c($v1)
/*  f0d3a40:	c6040000 */ 	lwc1	$f4,0x0($s0)
/*  f0d3a44:	46129402 */ 	mul.s	$f16,$f18,$f18
/*  f0d3a48:	c7260008 */ 	lwc1	$f6,0x8($t9)
/*  f0d3a4c:	46062201 */ 	sub.s	$f8,$f4,$f6
/*  f0d3a50:	e7a80054 */ 	swc1	$f8,0x54($sp)
/*  f0d3a54:	c7aa0054 */ 	lwc1	$f10,0x54($sp)
/*  f0d3a58:	460a5102 */ 	mul.s	$f4,$f10,$f10
/*  f0d3a5c:	0c012974 */ 	jal	sqrtf
/*  f0d3a60:	46102300 */ 	add.s	$f12,$f4,$f16
/*  f0d3a64:	3c013f80 */ 	lui	$at,0x3f80
/*  f0d3a68:	44813000 */ 	mtc1	$at,$f6
/*  f0d3a6c:	c7a8004c */ 	lwc1	$f8,0x4c($sp)
/*  f0d3a70:	c7aa0054 */ 	lwc1	$f10,0x54($sp)
/*  f0d3a74:	46003083 */ 	div.s	$f2,$f6,$f0
/*  f0d3a78:	44807000 */ 	mtc1	$zero,$f14
/*  f0d3a7c:	27a40040 */ 	addiu	$a0,$sp,0x40
/*  f0d3a80:	44057000 */ 	mfc1	$a1,$f14
/*  f0d3a84:	46024482 */ 	mul.s	$f18,$f8,$f2
/*  f0d3a88:	00000000 */ 	nop
/*  f0d3a8c:	46025102 */ 	mul.s	$f4,$f10,$f2
/*  f0d3a90:	e7b2004c */ 	swc1	$f18,0x4c($sp)
/*  f0d3a94:	e7a40054 */ 	swc1	$f4,0x54($sp)
/*  f0d3a98:	c6300008 */ 	lwc1	$f16,0x8($s1)
/*  f0d3a9c:	c6280000 */ 	lwc1	$f8,0x0($s1)
/*  f0d3aa0:	e7ae0044 */ 	swc1	$f14,0x44($sp)
/*  f0d3aa4:	46102182 */ 	mul.s	$f6,$f4,$f16
/*  f0d3aa8:	00000000 */ 	nop
/*  f0d3aac:	46124282 */ 	mul.s	$f10,$f8,$f18
/*  f0d3ab0:	460a3300 */ 	add.s	$f12,$f6,$f10
/*  f0d3ab4:	460c9402 */ 	mul.s	$f16,$f18,$f12
/*  f0d3ab8:	00000000 */ 	nop
/*  f0d3abc:	460c2202 */ 	mul.s	$f8,$f4,$f12
/*  f0d3ac0:	e7b0004c */ 	swc1	$f16,0x4c($sp)
/*  f0d3ac4:	e7b00040 */ 	swc1	$f16,0x40($sp)
/*  f0d3ac8:	e7a80054 */ 	swc1	$f8,0x54($sp)
/*  f0d3acc:	0fc34ca6 */ 	jal	func0f0d3298
/*  f0d3ad0:	e7a80048 */ 	swc1	$f8,0x48($sp)
/*  f0d3ad4:	24010001 */ 	addiu	$at,$zero,0x1
/*  f0d3ad8:	5441005b */ 	bnel	$v0,$at,.L0f0d3c48
/*  f0d3adc:	00001025 */ 	or	$v0,$zero,$zero
/*  f0d3ae0:	10000059 */ 	b	.L0f0d3c48
/*  f0d3ae4:	24020001 */ 	addiu	$v0,$zero,0x1
.L0f0d3ae8:
/*  f0d3ae8:	8c681a6c */ 	lw	$t0,0x1a6c($v1)
/*  f0d3aec:	c6260000 */ 	lwc1	$f6,0x0($s1)
/*  f0d3af0:	c6440000 */ 	lwc1	$f4,0x0($s2)
/*  f0d3af4:	c50a0008 */ 	lwc1	$f10,0x8($t0)
/*  f0d3af8:	460a3480 */ 	add.s	$f18,$f6,$f10
/*  f0d3afc:	46122401 */ 	sub.s	$f16,$f4,$f18
/*  f0d3b00:	e7b0004c */ 	swc1	$f16,0x4c($sp)
/*  f0d3b04:	8c691a6c */ 	lw	$t1,0x1a6c($v1)
/*  f0d3b08:	c6280008 */ 	lwc1	$f8,0x8($s1)
/*  f0d3b0c:	c6440008 */ 	lwc1	$f4,0x8($s2)
/*  f0d3b10:	c5260010 */ 	lwc1	$f6,0x10($t1)
/*  f0d3b14:	46064280 */ 	add.s	$f10,$f8,$f6
/*  f0d3b18:	c7a6004c */ 	lwc1	$f6,0x4c($sp)
/*  f0d3b1c:	460a2481 */ 	sub.s	$f18,$f4,$f10
/*  f0d3b20:	e7b20054 */ 	swc1	$f18,0x54($sp)
/*  f0d3b24:	c7b00054 */ 	lwc1	$f16,0x54($sp)
/*  f0d3b28:	46108202 */ 	mul.s	$f8,$f16,$f16
/*  f0d3b2c:	00000000 */ 	nop
/*  f0d3b30:	46063102 */ 	mul.s	$f4,$f6,$f6
/*  f0d3b34:	46044280 */ 	add.s	$f10,$f8,$f4
/*  f0d3b38:	4600503e */ 	c.le.s	$f10,$f0
/*  f0d3b3c:	00000000 */ 	nop
/*  f0d3b40:	45000040 */ 	bc1f	.L0f0d3c44
/*  f0d3b44:	00000000 */ 	nop
/*  f0d3b48:	8c621a6c */ 	lw	$v0,0x1a6c($v1)
/*  f0d3b4c:	c6520000 */ 	lwc1	$f18,0x0($s2)
/*  f0d3b50:	c4500008 */ 	lwc1	$f16,0x8($v0)
/*  f0d3b54:	46109032 */ 	c.eq.s	$f18,$f16
/*  f0d3b58:	00000000 */ 	nop
/*  f0d3b5c:	45020008 */ 	bc1fl	.L0f0d3b80
/*  f0d3b60:	c6440008 */ 	lwc1	$f4,0x8($s2)
/*  f0d3b64:	c6460008 */ 	lwc1	$f6,0x8($s2)
/*  f0d3b68:	c4480010 */ 	lwc1	$f8,0x10($v0)
/*  f0d3b6c:	46083032 */ 	c.eq.s	$f6,$f8
/*  f0d3b70:	00000000 */ 	nop
/*  f0d3b74:	45030034 */ 	bc1tl	.L0f0d3c48
/*  f0d3b78:	00001025 */ 	or	$v0,$zero,$zero
/*  f0d3b7c:	c6440008 */ 	lwc1	$f4,0x8($s2)
.L0f0d3b80:
/*  f0d3b80:	c44a0010 */ 	lwc1	$f10,0x10($v0)
/*  f0d3b84:	44807000 */ 	mtc1	$zero,$f14
/*  f0d3b88:	460a2481 */ 	sub.s	$f18,$f4,$f10
/*  f0d3b8c:	e7ae0050 */ 	swc1	$f14,0x50($sp)
/*  f0d3b90:	46009407 */ 	neg.s	$f16,$f18
/*  f0d3b94:	e7b0004c */ 	swc1	$f16,0x4c($sp)
/*  f0d3b98:	8c6a1a6c */ 	lw	$t2,0x1a6c($v1)
/*  f0d3b9c:	c6460000 */ 	lwc1	$f6,0x0($s2)
/*  f0d3ba0:	46108282 */ 	mul.s	$f10,$f16,$f16
/*  f0d3ba4:	c5480008 */ 	lwc1	$f8,0x8($t2)
/*  f0d3ba8:	46083101 */ 	sub.s	$f4,$f6,$f8
/*  f0d3bac:	e7a40054 */ 	swc1	$f4,0x54($sp)
/*  f0d3bb0:	c7b20054 */ 	lwc1	$f18,0x54($sp)
/*  f0d3bb4:	46129182 */ 	mul.s	$f6,$f18,$f18
/*  f0d3bb8:	0c012974 */ 	jal	sqrtf
/*  f0d3bbc:	460a3300 */ 	add.s	$f12,$f6,$f10
/*  f0d3bc0:	3c013f80 */ 	lui	$at,0x3f80
/*  f0d3bc4:	44814000 */ 	mtc1	$at,$f8
/*  f0d3bc8:	c7a4004c */ 	lwc1	$f4,0x4c($sp)
/*  f0d3bcc:	c7b20054 */ 	lwc1	$f18,0x54($sp)
/*  f0d3bd0:	46004083 */ 	div.s	$f2,$f8,$f0
/*  f0d3bd4:	44807000 */ 	mtc1	$zero,$f14
/*  f0d3bd8:	27a40040 */ 	addiu	$a0,$sp,0x40
/*  f0d3bdc:	44057000 */ 	mfc1	$a1,$f14
/*  f0d3be0:	46022402 */ 	mul.s	$f16,$f4,$f2
/*  f0d3be4:	00000000 */ 	nop
/*  f0d3be8:	46029182 */ 	mul.s	$f6,$f18,$f2
/*  f0d3bec:	e7b0004c */ 	swc1	$f16,0x4c($sp)
/*  f0d3bf0:	e7a60054 */ 	swc1	$f6,0x54($sp)
/*  f0d3bf4:	c62a0008 */ 	lwc1	$f10,0x8($s1)
/*  f0d3bf8:	c6240000 */ 	lwc1	$f4,0x0($s1)
/*  f0d3bfc:	e7ae0044 */ 	swc1	$f14,0x44($sp)
/*  f0d3c00:	460a3202 */ 	mul.s	$f8,$f6,$f10
/*  f0d3c04:	00000000 */ 	nop
/*  f0d3c08:	46102482 */ 	mul.s	$f18,$f4,$f16
/*  f0d3c0c:	46124300 */ 	add.s	$f12,$f8,$f18
/*  f0d3c10:	460c8282 */ 	mul.s	$f10,$f16,$f12
/*  f0d3c14:	00000000 */ 	nop
/*  f0d3c18:	460c3102 */ 	mul.s	$f4,$f6,$f12
/*  f0d3c1c:	e7aa004c */ 	swc1	$f10,0x4c($sp)
/*  f0d3c20:	e7aa0040 */ 	swc1	$f10,0x40($sp)
/*  f0d3c24:	e7a40054 */ 	swc1	$f4,0x54($sp)
/*  f0d3c28:	0fc34ca6 */ 	jal	func0f0d3298
/*  f0d3c2c:	e7a40048 */ 	swc1	$f4,0x48($sp)
/*  f0d3c30:	24010001 */ 	addiu	$at,$zero,0x1
/*  f0d3c34:	54410004 */ 	bnel	$v0,$at,.L0f0d3c48
/*  f0d3c38:	00001025 */ 	or	$v0,$zero,$zero
/*  f0d3c3c:	10000002 */ 	b	.L0f0d3c48
/*  f0d3c40:	24020001 */ 	addiu	$v0,$zero,0x1
.L0f0d3c44:
/*  f0d3c44:	00001025 */ 	or	$v0,$zero,$zero
.L0f0d3c48:
/*  f0d3c48:	8fbf0024 */ 	lw	$ra,0x24($sp)
/*  f0d3c4c:	8fb00018 */ 	lw	$s0,0x18($sp)
/*  f0d3c50:	8fb1001c */ 	lw	$s1,0x1c($sp)
/*  f0d3c54:	8fb20020 */ 	lw	$s2,0x20($sp)
/*  f0d3c58:	03e00008 */ 	jr	$ra
/*  f0d3c5c:	27bd0058 */ 	addiu	$sp,$sp,0x58
);

GLOBAL_ASM(
glabel func0f0d3c60
/*  f0d3c60:	27bdff90 */ 	addiu	$sp,$sp,-112
/*  f0d3c64:	afbf001c */ 	sw	$ra,0x1c($sp)
/*  f0d3c68:	afa40070 */ 	sw	$a0,0x70($sp)
/*  f0d3c6c:	27a50064 */ 	addiu	$a1,$sp,0x64
/*  f0d3c70:	0fc34da0 */ 	jal	func0f0d3680
/*  f0d3c74:	27a60058 */ 	addiu	$a2,$sp,0x58
/*  f0d3c78:	14400031 */ 	bnez	$v0,.L0f0d3d40
/*  f0d3c7c:	8fa40070 */ 	lw	$a0,0x70($sp)
/*  f0d3c80:	27ae0040 */ 	addiu	$t6,$sp,0x40
/*  f0d3c84:	afae0010 */ 	sw	$t6,0x10($sp)
/*  f0d3c88:	27a50064 */ 	addiu	$a1,$sp,0x64
/*  f0d3c8c:	27a60058 */ 	addiu	$a2,$sp,0x58
/*  f0d3c90:	0fc34db5 */ 	jal	func0f0d36d4
/*  f0d3c94:	27a7004c */ 	addiu	$a3,$sp,0x4c
/*  f0d3c98:	1c400002 */ 	bgtz	$v0,.L0f0d3ca4
/*  f0d3c9c:	8fa40070 */ 	lw	$a0,0x70($sp)
/*  f0d3ca0:	0441000c */ 	bgez	$v0,.L0f0d3cd4
.L0f0d3ca4:
/*  f0d3ca4:	27a50064 */ 	addiu	$a1,$sp,0x64
/*  f0d3ca8:	0fc34e10 */ 	jal	func0f0d3840
/*  f0d3cac:	27a60058 */ 	addiu	$a2,$sp,0x58
/*  f0d3cb0:	1c400023 */ 	bgtz	$v0,.L0f0d3d40
/*  f0d3cb4:	8fa40070 */ 	lw	$a0,0x70($sp)
/*  f0d3cb8:	27a50064 */ 	addiu	$a1,$sp,0x64
/*  f0d3cbc:	0fc34e50 */ 	jal	func0f0d3940
/*  f0d3cc0:	27a60058 */ 	addiu	$a2,$sp,0x58
/*  f0d3cc4:	5c40001f */ 	bgtzl	$v0,.L0f0d3d44
/*  f0d3cc8:	8fbf001c */ 	lw	$ra,0x1c($sp)
/*  f0d3ccc:	1000001d */ 	b	.L0f0d3d44
/*  f0d3cd0:	8fbf001c */ 	lw	$ra,0x1c($sp)
.L0f0d3cd4:
/*  f0d3cd4:	1440001a */ 	bnez	$v0,.L0f0d3d40
/*  f0d3cd8:	8fa40070 */ 	lw	$a0,0x70($sp)
/*  f0d3cdc:	27af0024 */ 	addiu	$t7,$sp,0x24
/*  f0d3ce0:	afaf0010 */ 	sw	$t7,0x10($sp)
/*  f0d3ce4:	27a5004c */ 	addiu	$a1,$sp,0x4c
/*  f0d3ce8:	27a60040 */ 	addiu	$a2,$sp,0x40
/*  f0d3cec:	0fc34db5 */ 	jal	func0f0d36d4
/*  f0d3cf0:	27a70030 */ 	addiu	$a3,$sp,0x30
/*  f0d3cf4:	8fa40070 */ 	lw	$a0,0x70($sp)
/*  f0d3cf8:	27a5004c */ 	addiu	$a1,$sp,0x4c
/*  f0d3cfc:	0fc34e10 */ 	jal	func0f0d3840
/*  f0d3d00:	27a60040 */ 	addiu	$a2,$sp,0x40
/*  f0d3d04:	1c40000e */ 	bgtz	$v0,.L0f0d3d40
/*  f0d3d08:	8fa40070 */ 	lw	$a0,0x70($sp)
/*  f0d3d0c:	27a50064 */ 	addiu	$a1,$sp,0x64
/*  f0d3d10:	0fc34e10 */ 	jal	func0f0d3840
/*  f0d3d14:	27a60058 */ 	addiu	$a2,$sp,0x58
/*  f0d3d18:	1c400009 */ 	bgtz	$v0,.L0f0d3d40
/*  f0d3d1c:	8fa40070 */ 	lw	$a0,0x70($sp)
/*  f0d3d20:	27a5004c */ 	addiu	$a1,$sp,0x4c
/*  f0d3d24:	0fc34e50 */ 	jal	func0f0d3940
/*  f0d3d28:	27a60040 */ 	addiu	$a2,$sp,0x40
/*  f0d3d2c:	1c400004 */ 	bgtz	$v0,.L0f0d3d40
/*  f0d3d30:	8fa40070 */ 	lw	$a0,0x70($sp)
/*  f0d3d34:	27a50064 */ 	addiu	$a1,$sp,0x64
/*  f0d3d38:	0fc34e50 */ 	jal	func0f0d3940
/*  f0d3d3c:	27a60058 */ 	addiu	$a2,$sp,0x58
.L0f0d3d40:
/*  f0d3d40:	8fbf001c */ 	lw	$ra,0x1c($sp)
.L0f0d3d44:
/*  f0d3d44:	27bd0070 */ 	addiu	$sp,$sp,0x70
/*  f0d3d48:	03e00008 */ 	jr	$ra
/*  f0d3d4c:	00000000 */ 	nop
);

// Mismatch because the below copies arg0 into s0 but goal uses sp.
//void func0f0d3c60(struct coord *arg0)
//{
//	struct coord sp100;
//	struct coord sp88;
//	struct coord sp76;
//	struct coord sp64;
//	s32 lVar1;
//	struct coord sp48;
//	struct coord sp36;
//
//	if (func0f0d3680(arg0, &sp100, &sp88) == 0) {
//		lVar1 = func0f0d36d4(arg0, &sp100, &sp88, &sp76, &sp64);
//
//		if (lVar1 > 0 || lVar1 < 0) {
//			if (func0f0d3840(arg0, &sp100, &sp88) < 1
//					&& func0f0d3940(arg0, &sp100, &sp88) < 1) {
//				// empty
//			}
//		} else if (lVar1 == 0) {
//			func0f0d36d4(arg0, &sp76, &sp64, &sp48, &sp36);
//
//			if (func0f0d3840(arg0, &sp76, &sp64) < 1
//					&& func0f0d3840(arg0, &sp100, &sp88) < 1
//					&& func0f0d3940(arg0, &sp76, &sp64) < 1) {
//				func0f0d3940(arg0, &sp100, &sp88);
//			}
//		}
//	}
//}

GLOBAL_ASM(
glabel func0f0d3d50
.late_rodata
glabel var7f1adb88
.word 0x4528c000
glabel var7f1adb8c
.word 0x3b23d70a
glabel var7f1adb90
.word 0x3c8ef461
glabel var7f1adb94
.word 0x40c907a9
glabel var7f1adb98
.word 0x3f333333
glabel var7f1adb9c
.word 0x3c8ef461
.text
/*  f0d3d50:	27bdfde0 */ 	addiu	$sp,$sp,-544
/*  f0d3d54:	afb00048 */ 	sw	$s0,0x48($sp)
/*  f0d3d58:	3c10800a */ 	lui	$s0,%hi(g_Vars)
/*  f0d3d5c:	26109fc0 */ 	addiu	$s0,$s0,%lo(g_Vars)
/*  f0d3d60:	8e080284 */ 	lw	$t0,0x284($s0)
/*  f0d3d64:	afbf004c */ 	sw	$ra,0x4c($sp)
/*  f0d3d68:	8e0f0034 */ 	lw	$t7,0x34($s0)
/*  f0d3d6c:	8d0e1a6c */ 	lw	$t6,0x1a6c($t0)
/*  f0d3d70:	8dc40004 */ 	lw	$a0,0x4($t6)
/*  f0d3d74:	19e000f8 */ 	blez	$t7,.L0f0d4158
/*  f0d3d78:	afa4021c */ 	sw	$a0,0x21c($sp)
/*  f0d3d7c:	8d1800bc */ 	lw	$t8,0xbc($t0)
/*  f0d3d80:	3c013f40 */ 	lui	$at,0x3f40
/*  f0d3d84:	44815000 */ 	mtc1	$at,$f10
/*  f0d3d88:	c7040008 */ 	lwc1	$f4,0x8($t8)
/*  f0d3d8c:	3c017f1b */ 	lui	$at,%hi(var7f1adb88)
/*  f0d3d90:	44800000 */ 	mtc1	$zero,$f0
/*  f0d3d94:	e5040310 */ 	swc1	$f4,0x310($t0)
/*  f0d3d98:	8e080284 */ 	lw	$t0,0x284($s0)
/*  f0d3d9c:	8d1900bc */ 	lw	$t9,0xbc($t0)
/*  f0d3da0:	c726000c */ 	lwc1	$f6,0xc($t9)
/*  f0d3da4:	e5060314 */ 	swc1	$f6,0x314($t0)
/*  f0d3da8:	8e080284 */ 	lw	$t0,0x284($s0)
/*  f0d3dac:	8d0900bc */ 	lw	$t1,0xbc($t0)
/*  f0d3db0:	c5280010 */ 	lwc1	$f8,0x10($t1)
/*  f0d3db4:	e5080318 */ 	swc1	$f8,0x318($t0)
/*  f0d3db8:	c604004c */ 	lwc1	$f4,0x4c($s0)
/*  f0d3dbc:	c428db88 */ 	lwc1	$f8,%lo(var7f1adb88)($at)
/*  f0d3dc0:	8e080284 */ 	lw	$t0,0x284($s0)
/*  f0d3dc4:	46045182 */ 	mul.s	$f6,$f10,$f4
/*  f0d3dc8:	c5040198 */ 	lwc1	$f4,0x198($t0)
/*  f0d3dcc:	46083283 */ 	div.s	$f10,$f6,$f8
/*  f0d3dd0:	460a2181 */ 	sub.s	$f6,$f4,$f10
/*  f0d3dd4:	e5060198 */ 	swc1	$f6,0x198($t0)
/*  f0d3dd8:	8e080284 */ 	lw	$t0,0x284($s0)
/*  f0d3ddc:	c5080198 */ 	lwc1	$f8,0x198($t0)
/*  f0d3de0:	4600403c */ 	c.lt.s	$f8,$f0
/*  f0d3de4:	00000000 */ 	nop
/*  f0d3de8:	45020004 */ 	bc1fl	.L0f0d3dfc
/*  f0d3dec:	8d021a7c */ 	lw	$v0,0x1a7c($t0)
/*  f0d3df0:	e5000198 */ 	swc1	$f0,0x198($t0)
/*  f0d3df4:	8e080284 */ 	lw	$t0,0x284($s0)
/*  f0d3df8:	8d021a7c */ 	lw	$v0,0x1a7c($t0)
.L0f0d3dfc:
/*  f0d3dfc:	54400009 */ 	bnezl	$v0,.L0f0d3e24
/*  f0d3e00:	24010001 */ 	addiu	$at,$zero,0x1
/*  f0d3e04:	8d050170 */ 	lw	$a1,0x170($t0)
/*  f0d3e08:	8d060168 */ 	lw	$a2,0x168($t0)
/*  f0d3e0c:	8d070148 */ 	lw	$a3,0x148($t0)
/*  f0d3e10:	0fc1cab7 */ 	jal	func0f072adc
/*  f0d3e14:	afa40218 */ 	sw	$a0,0x218($sp)
/*  f0d3e18:	1000000c */ 	b	.L0f0d3e4c
/*  f0d3e1c:	8fa70218 */ 	lw	$a3,0x218($sp)
/*  f0d3e20:	24010001 */ 	addiu	$at,$zero,0x1
.L0f0d3e24:
/*  f0d3e24:	14410003 */ 	bne	$v0,$at,.L0f0d3e34
/*  f0d3e28:	240a0002 */ 	addiu	$t2,$zero,0x2
/*  f0d3e2c:	ad0a1a7c */ 	sw	$t2,0x1a7c($t0)
/*  f0d3e30:	8e080284 */ 	lw	$t0,0x284($s0)
.L0f0d3e34:
/*  f0d3e34:	8d050170 */ 	lw	$a1,0x170($t0)
/*  f0d3e38:	8d060168 */ 	lw	$a2,0x168($t0)
/*  f0d3e3c:	8d070148 */ 	lw	$a3,0x148($t0)
/*  f0d3e40:	0fc1cab7 */ 	jal	func0f072adc
/*  f0d3e44:	afa40218 */ 	sw	$a0,0x218($sp)
/*  f0d3e48:	8fa70218 */ 	lw	$a3,0x218($sp)
.L0f0d3e4c:
/*  f0d3e4c:	8e080284 */ 	lw	$t0,0x284($s0)
/*  f0d3e50:	24010002 */ 	addiu	$at,$zero,0x2
/*  f0d3e54:	8d0b1a7c */ 	lw	$t3,0x1a7c($t0)
/*  f0d3e58:	55610044 */ 	bnel	$t3,$at,.L0f0d3f6c
/*  f0d3e5c:	c4ea00ac */ 	lwc1	$f10,0xac($a3)
/*  f0d3e60:	c5000170 */ 	lwc1	$f0,0x170($t0)
/*  f0d3e64:	c5020168 */ 	lwc1	$f2,0x168($t0)
/*  f0d3e68:	3c013f80 */ 	lui	$at,0x3f80
/*  f0d3e6c:	46000102 */ 	mul.s	$f4,$f0,$f0
/*  f0d3e70:	44817000 */ 	mtc1	$at,$f14
/*  f0d3e74:	3c018007 */ 	lui	$at,%hi(var80070ef4+0x10)
/*  f0d3e78:	46021282 */ 	mul.s	$f10,$f2,$f2
/*  f0d3e7c:	460a2300 */ 	add.s	$f12,$f4,$f10
/*  f0d3e80:	460c703c */ 	c.lt.s	$f14,$f12
/*  f0d3e84:	00000000 */ 	nop
/*  f0d3e88:	45020003 */ 	bc1fl	.L0f0d3e98
/*  f0d3e8c:	8e030034 */ 	lw	$v1,0x34($s0)
/*  f0d3e90:	46007306 */ 	mov.s	$f12,$f14
/*  f0d3e94:	8e030034 */ 	lw	$v1,0x34($s0)
.L0f0d3e98:
/*  f0d3e98:	00001025 */ 	or	$v0,$zero,$zero
/*  f0d3e9c:	1860000c */ 	blez	$v1,.L0f0d3ed0
/*  f0d3ea0:	00000000 */ 	nop
/*  f0d3ea4:	c4220f04 */ 	lwc1	$f2,%lo(var80070ef4+0x10)($at)
/*  f0d3ea8:	3c017f1b */ 	lui	$at,%hi(var7f1adb8c)
/*  f0d3eac:	c420db8c */ 	lwc1	$f0,%lo(var7f1adb8c)($at)
.L0f0d3eb0:
/*  f0d3eb0:	46026181 */ 	sub.s	$f6,$f12,$f2
/*  f0d3eb4:	24420001 */ 	addiu	$v0,$v0,0x1
/*  f0d3eb8:	0043082a */ 	slt	$at,$v0,$v1
/*  f0d3ebc:	46003202 */ 	mul.s	$f8,$f6,$f0
/*  f0d3ec0:	1420fffb */ 	bnez	$at,.L0f0d3eb0
/*  f0d3ec4:	46081080 */ 	add.s	$f2,$f2,$f8
/*  f0d3ec8:	3c018007 */ 	lui	$at,%hi(var80070ef4+0x10)
/*  f0d3ecc:	e4220f04 */ 	swc1	$f2,%lo(var80070ef4+0x10)($at)
.L0f0d3ed0:
/*  f0d3ed0:	3c018007 */ 	lui	$at,%hi(var80070ef4+0x10)
/*  f0d3ed4:	c4220f04 */ 	lwc1	$f2,%lo(var80070ef4+0x10)($at)
/*  f0d3ed8:	3c014396 */ 	lui	$at,0x4396
/*  f0d3edc:	44812000 */ 	mtc1	$at,$f4
/*  f0d3ee0:	46021000 */ 	add.s	$f0,$f2,$f2
/*  f0d3ee4:	4600703c */ 	c.lt.s	$f14,$f0
/*  f0d3ee8:	46007301 */ 	sub.s	$f12,$f14,$f0
/*  f0d3eec:	45000003 */ 	bc1f	.L0f0d3efc
/*  f0d3ef0:	00000000 */ 	nop
/*  f0d3ef4:	44806000 */ 	mtc1	$zero,$f12
/*  f0d3ef8:	00000000 */ 	nop
.L0f0d3efc:
/*  f0d3efc:	46046302 */ 	mul.s	$f12,$f12,$f4
/*  f0d3f00:	8d041a6c */ 	lw	$a0,0x1a6c($t0)
/*  f0d3f04:	44051000 */ 	mfc1	$a1,$f2
/*  f0d3f08:	3c018007 */ 	lui	$at,%hi(var80070ef4+0x10)
/*  f0d3f0c:	e4220f04 */ 	swc1	$f2,%lo(var80070ef4+0x10)($at)
/*  f0d3f10:	2406ffff */ 	addiu	$a2,$zero,-1
/*  f0d3f14:	0fc24d8c */ 	jal	func0f093630
/*  f0d3f18:	e7ac0200 */ 	swc1	$f12,0x200($sp)
/*  f0d3f1c:	3c018007 */ 	lui	$at,%hi(var80070ef4+0x10)
/*  f0d3f20:	c4220f04 */ 	lwc1	$f2,%lo(var80070ef4+0x10)($at)
/*  f0d3f24:	3c014396 */ 	lui	$at,0x4396
/*  f0d3f28:	44815000 */ 	mtc1	$at,$f10
/*  f0d3f2c:	8e0c0284 */ 	lw	$t4,0x284($s0)
/*  f0d3f30:	460a1182 */ 	mul.s	$f6,$f2,$f10
/*  f0d3f34:	8d841a6c */ 	lw	$a0,0x1a6c($t4)
/*  f0d3f38:	4600320d */ 	trunc.w.s	$f8,$f6
/*  f0d3f3c:	44054000 */ 	mfc1	$a1,$f8
/*  f0d3f40:	0fc24de4 */ 	jal	func0f093790
/*  f0d3f44:	00000000 */ 	nop
/*  f0d3f48:	c7ac0200 */ 	lwc1	$f12,0x200($sp)
/*  f0d3f4c:	8e0e0284 */ 	lw	$t6,0x284($s0)
/*  f0d3f50:	4600610d */ 	trunc.w.s	$f4,$f12
/*  f0d3f54:	8dc400bc */ 	lw	$a0,0xbc($t6)
/*  f0d3f58:	44052000 */ 	mfc1	$a1,$f4
/*  f0d3f5c:	0fc24de4 */ 	jal	func0f093790
/*  f0d3f60:	00000000 */ 	nop
/*  f0d3f64:	8fa70218 */ 	lw	$a3,0x218($sp)
/*  f0d3f68:	c4ea00ac */ 	lwc1	$f10,0xac($a3)
.L0f0d3f6c:
/*  f0d3f6c:	c606004c */ 	lwc1	$f6,0x4c($s0)
/*  f0d3f70:	46065302 */ 	mul.s	$f12,$f10,$f6
/*  f0d3f74:	0fc34d8f */ 	jal	func0f0d363c
/*  f0d3f78:	00000000 */ 	nop
/*  f0d3f7c:	8fa70218 */ 	lw	$a3,0x218($sp)
/*  f0d3f80:	c600004c */ 	lwc1	$f0,0x4c($s0)
/*  f0d3f84:	44805000 */ 	mtc1	$zero,$f10
/*  f0d3f88:	c4e8009c */ 	lwc1	$f8,0x9c($a3)
/*  f0d3f8c:	27a4020c */ 	addiu	$a0,$sp,0x20c
/*  f0d3f90:	e7aa0210 */ 	swc1	$f10,0x210($sp)
/*  f0d3f94:	46004102 */ 	mul.s	$f4,$f8,$f0
/*  f0d3f98:	e7a4020c */ 	swc1	$f4,0x20c($sp)
/*  f0d3f9c:	c4e600a0 */ 	lwc1	$f6,0xa0($a3)
/*  f0d3fa0:	46003202 */ 	mul.s	$f8,$f6,$f0
/*  f0d3fa4:	e7a80214 */ 	swc1	$f8,0x214($sp)
/*  f0d3fa8:	8ce20014 */ 	lw	$v0,0x14($a3)
/*  f0d3fac:	c4440008 */ 	lwc1	$f4,0x8($v0)
/*  f0d3fb0:	e4e400a4 */ 	swc1	$f4,0xa4($a3)
/*  f0d3fb4:	c44a0010 */ 	lwc1	$f10,0x10($v0)
/*  f0d3fb8:	0fc34f18 */ 	jal	func0f0d3c60
/*  f0d3fbc:	e4ea00a8 */ 	swc1	$f10,0xa8($a3)
/*  f0d3fc0:	8fa70218 */ 	lw	$a3,0x218($sp)
/*  f0d3fc4:	c600004c */ 	lwc1	$f0,0x4c($s0)
/*  f0d3fc8:	8ce20014 */ 	lw	$v0,0x14($a3)
/*  f0d3fcc:	c4e800a4 */ 	lwc1	$f8,0xa4($a3)
/*  f0d3fd0:	c4460008 */ 	lwc1	$f6,0x8($v0)
/*  f0d3fd4:	c44a0010 */ 	lwc1	$f10,0x10($v0)
/*  f0d3fd8:	46083101 */ 	sub.s	$f4,$f6,$f8
/*  f0d3fdc:	c4e600a8 */ 	lwc1	$f6,0xa8($a3)
/*  f0d3fe0:	46002383 */ 	div.s	$f14,$f4,$f0
/*  f0d3fe4:	44802000 */ 	mtc1	$zero,$f4
/*  f0d3fe8:	46065201 */ 	sub.s	$f8,$f10,$f6
/*  f0d3fec:	46004403 */ 	div.s	$f16,$f8,$f0
/*  f0d3ff0:	46047032 */ 	c.eq.s	$f14,$f4
/*  f0d3ff4:	00000000 */ 	nop
/*  f0d3ff8:	45000007 */ 	bc1f	.L0f0d4018
/*  f0d3ffc:	00000000 */ 	nop
/*  f0d4000:	44805000 */ 	mtc1	$zero,$f10
/*  f0d4004:	00000000 */ 	nop
/*  f0d4008:	460a8032 */ 	c.eq.s	$f16,$f10
/*  f0d400c:	00000000 */ 	nop
/*  f0d4010:	4503001f */ 	bc1tl	.L0f0d4090
/*  f0d4014:	e4ee009c */ 	swc1	$f14,0x9c($a3)
.L0f0d4018:
/*  f0d4018:	460e7182 */ 	mul.s	$f6,$f14,$f14
/*  f0d401c:	44802000 */ 	mtc1	$zero,$f4
/*  f0d4020:	46108202 */ 	mul.s	$f8,$f16,$f16
/*  f0d4024:	46083480 */ 	add.s	$f18,$f6,$f8
/*  f0d4028:	4612203c */ 	c.lt.s	$f4,$f18
/*  f0d402c:	00000000 */ 	nop
/*  f0d4030:	45020017 */ 	bc1fl	.L0f0d4090
/*  f0d4034:	e4ee009c */ 	swc1	$f14,0x9c($a3)
/*  f0d4038:	c4e200a0 */ 	lwc1	$f2,0xa0($a3)
/*  f0d403c:	c4e0009c */ 	lwc1	$f0,0x9c($a3)
/*  f0d4040:	e7b001f4 */ 	swc1	$f16,0x1f4($sp)
/*  f0d4044:	46021282 */ 	mul.s	$f10,$f2,$f2
/*  f0d4048:	e7ae01f8 */ 	swc1	$f14,0x1f8($sp)
/*  f0d404c:	46000182 */ 	mul.s	$f6,$f0,$f0
/*  f0d4050:	46065200 */ 	add.s	$f8,$f10,$f6
/*  f0d4054:	0c012974 */ 	jal	sqrtf
/*  f0d4058:	46124303 */ 	div.s	$f12,$f8,$f18
/*  f0d405c:	3c013f80 */ 	lui	$at,0x3f80
/*  f0d4060:	44812000 */ 	mtc1	$at,$f4
/*  f0d4064:	8fa70218 */ 	lw	$a3,0x218($sp)
/*  f0d4068:	c7ae01f8 */ 	lwc1	$f14,0x1f8($sp)
/*  f0d406c:	4604003c */ 	c.lt.s	$f0,$f4
/*  f0d4070:	c7b001f4 */ 	lwc1	$f16,0x1f4($sp)
/*  f0d4074:	45020006 */ 	bc1fl	.L0f0d4090
/*  f0d4078:	e4ee009c */ 	swc1	$f14,0x9c($a3)
/*  f0d407c:	46007382 */ 	mul.s	$f14,$f14,$f0
/*  f0d4080:	00000000 */ 	nop
/*  f0d4084:	46008402 */ 	mul.s	$f16,$f16,$f0
/*  f0d4088:	00000000 */ 	nop
/*  f0d408c:	e4ee009c */ 	swc1	$f14,0x9c($a3)
.L0f0d4090:
/*  f0d4090:	e4f000a0 */ 	swc1	$f16,0xa0($a3)
/*  f0d4094:	8fa4021c */ 	lw	$a0,0x21c($sp)
/*  f0d4098:	0fc1c52e */ 	jal	func0f0714b8
/*  f0d409c:	24e5005c */ 	addiu	$a1,$a3,0x5c
/*  f0d40a0:	8fa4021c */ 	lw	$a0,0x21c($sp)
/*  f0d40a4:	24050001 */ 	addiu	$a1,$zero,0x1
/*  f0d40a8:	0fc1a71c */ 	jal	func0f069c70
/*  f0d40ac:	24060001 */ 	addiu	$a2,$zero,0x1
/*  f0d40b0:	8fa4021c */ 	lw	$a0,0x21c($sp)
/*  f0d40b4:	27a501a8 */ 	addiu	$a1,$sp,0x1a8
/*  f0d40b8:	0c005755 */ 	jal	func00015d54
/*  f0d40bc:	2484001c */ 	addiu	$a0,$a0,0x1c
/*  f0d40c0:	8fb8021c */ 	lw	$t8,0x21c($sp)
/*  f0d40c4:	27a501a8 */ 	addiu	$a1,$sp,0x1a8
/*  f0d40c8:	8f040014 */ 	lw	$a0,0x14($t8)
/*  f0d40cc:	0c005775 */ 	jal	func00015dd4
/*  f0d40d0:	24840008 */ 	addiu	$a0,$a0,0x8
/*  f0d40d4:	8e050284 */ 	lw	$a1,0x284($s0)
/*  f0d40d8:	27a401a8 */ 	addiu	$a0,$sp,0x1a8
/*  f0d40dc:	27a601e8 */ 	addiu	$a2,$sp,0x1e8
/*  f0d40e0:	0c0056da */ 	jal	func00015b68
/*  f0d40e4:	24a51a70 */ 	addiu	$a1,$a1,0x1a70
/*  f0d40e8:	0fc34d07 */ 	jal	func0f0d341c
/*  f0d40ec:	27a401e8 */ 	addiu	$a0,$sp,0x1e8
/*  f0d40f0:	8e080284 */ 	lw	$t0,0x284($s0)
/*  f0d40f4:	2405ffff */ 	addiu	$a1,$zero,-1
/*  f0d40f8:	8d0600bc */ 	lw	$a2,0xbc($t0)
/*  f0d40fc:	84d90028 */ 	lh	$t9,0x28($a2)
/*  f0d4100:	00c01025 */ 	or	$v0,$a2,$zero
/*  f0d4104:	50b90015 */ 	beql	$a1,$t9,.L0f0d415c
/*  f0d4108:	8fad021c */ 	lw	$t5,0x21c($sp)
/*  f0d410c:	850419b0 */ 	lh	$a0,0x19b0($t0)
/*  f0d4110:	84c30028 */ 	lh	$v1,0x28($a2)
.L0f0d4114:
/*  f0d4114:	5483000d */ 	bnel	$a0,$v1,.L0f0d414c
/*  f0d4118:	8443002a */ 	lh	$v1,0x2a($v0)
/*  f0d411c:	0fc19711 */ 	jal	func0f065c44
/*  f0d4120:	00c02025 */ 	or	$a0,$a2,$zero
/*  f0d4124:	8e080284 */ 	lw	$t0,0x284($s0)
/*  f0d4128:	2405ffff */ 	addiu	$a1,$zero,-1
/*  f0d412c:	850919b0 */ 	lh	$t1,0x19b0($t0)
/*  f0d4130:	8d0a00bc */ 	lw	$t2,0xbc($t0)
/*  f0d4134:	a5490028 */ 	sh	$t1,0x28($t2)
/*  f0d4138:	8e0b0284 */ 	lw	$t3,0x284($s0)
/*  f0d413c:	8d6c00bc */ 	lw	$t4,0xbc($t3)
/*  f0d4140:	10000005 */ 	b	.L0f0d4158
/*  f0d4144:	a585002a */ 	sh	$a1,0x2a($t4)
/*  f0d4148:	8443002a */ 	lh	$v1,0x2a($v0)
.L0f0d414c:
/*  f0d414c:	24420002 */ 	addiu	$v0,$v0,0x2
/*  f0d4150:	14a3fff0 */ 	bne	$a1,$v1,.L0f0d4114
/*  f0d4154:	00000000 */ 	nop
.L0f0d4158:
/*  f0d4158:	8fad021c */ 	lw	$t5,0x21c($sp)
.L0f0d415c:
/*  f0d415c:	44806000 */ 	mtc1	$zero,$f12
/*  f0d4160:	25ae001c */ 	addiu	$t6,$t5,0x1c
/*  f0d4164:	0fc44fc4 */ 	jal	func0f113f10
/*  f0d4168:	afae0060 */ 	sw	$t6,0x60($sp)
/*  f0d416c:	44806000 */ 	mtc1	$zero,$f12
/*  f0d4170:	0fc44e29 */ 	jal	func0f1138a4
/*  f0d4174:	46006386 */ 	mov.s	$f14,$f12
/*  f0d4178:	8e0f0284 */ 	lw	$t7,0x284($s0)
/*  f0d417c:	3c0143b4 */ 	lui	$at,0x43b4
/*  f0d4180:	44815000 */ 	mtc1	$at,$f10
/*  f0d4184:	c5e60158 */ 	lwc1	$f6,0x158($t7)
/*  f0d4188:	3c017f1b */ 	lui	$at,%hi(var7f1adb90)
/*  f0d418c:	c424db90 */ 	lwc1	$f4,%lo(var7f1adb90)($at)
/*  f0d4190:	46065201 */ 	sub.s	$f8,$f10,$f6
/*  f0d4194:	27a50164 */ 	addiu	$a1,$sp,0x164
/*  f0d4198:	46044302 */ 	mul.s	$f12,$f8,$f4
/*  f0d419c:	0c0058ba */ 	jal	func000162e8
/*  f0d41a0:	00000000 */ 	nop
/*  f0d41a4:	8e080284 */ 	lw	$t0,0x284($s0)
/*  f0d41a8:	27a40124 */ 	addiu	$a0,$sp,0x124
/*  f0d41ac:	24050000 */ 	addiu	$a1,$zero,0x0
/*  f0d41b0:	c50a03cc */ 	lwc1	$f10,0x3cc($t0)
/*  f0d41b4:	24060000 */ 	addiu	$a2,$zero,0x0
/*  f0d41b8:	24070000 */ 	addiu	$a3,$zero,0x0
/*  f0d41bc:	46005187 */ 	neg.s	$f6,$f10
/*  f0d41c0:	e7a60010 */ 	swc1	$f6,0x10($sp)
/*  f0d41c4:	c50803d0 */ 	lwc1	$f8,0x3d0($t0)
/*  f0d41c8:	46004107 */ 	neg.s	$f4,$f8
/*  f0d41cc:	e7a40014 */ 	swc1	$f4,0x14($sp)
/*  f0d41d0:	c50a03d4 */ 	lwc1	$f10,0x3d4($t0)
/*  f0d41d4:	46005187 */ 	neg.s	$f6,$f10
/*  f0d41d8:	e7a60018 */ 	swc1	$f6,0x18($sp)
/*  f0d41dc:	c50803d8 */ 	lwc1	$f8,0x3d8($t0)
/*  f0d41e0:	e7a8001c */ 	swc1	$f8,0x1c($sp)
/*  f0d41e4:	c50403dc */ 	lwc1	$f4,0x3dc($t0)
/*  f0d41e8:	e7a40020 */ 	swc1	$f4,0x20($sp)
/*  f0d41ec:	c50a03e0 */ 	lwc1	$f10,0x3e0($t0)
/*  f0d41f0:	0c005b56 */ 	jal	func00016d58
/*  f0d41f4:	e7aa0024 */ 	swc1	$f10,0x24($sp)
/*  f0d41f8:	27a40124 */ 	addiu	$a0,$sp,0x124
/*  f0d41fc:	0c00567f */ 	jal	func000159fc
/*  f0d4200:	27a50164 */ 	addiu	$a1,$sp,0x164
/*  f0d4204:	8fa40060 */ 	lw	$a0,0x60($sp)
/*  f0d4208:	0c005755 */ 	jal	func00015d54
/*  f0d420c:	27a50124 */ 	addiu	$a1,$sp,0x124
/*  f0d4210:	8fb8021c */ 	lw	$t8,0x21c($sp)
/*  f0d4214:	3c013f80 */ 	lui	$at,0x3f80
/*  f0d4218:	44813000 */ 	mtc1	$at,$f6
/*  f0d421c:	8f190018 */ 	lw	$t9,0x18($t8)
/*  f0d4220:	27a50124 */ 	addiu	$a1,$sp,0x124
/*  f0d4224:	c7280014 */ 	lwc1	$f8,0x14($t9)
/*  f0d4228:	0c0057c1 */ 	jal	func00015f04
/*  f0d422c:	46083303 */ 	div.s	$f12,$f6,$f8
/*  f0d4230:	0fc1c836 */ 	jal	hoverpropGetTurnAngle
/*  f0d4234:	8fa4021c */ 	lw	$a0,0x21c($sp)
/*  f0d4238:	46000306 */ 	mov.s	$f12,$f0
/*  f0d423c:	0c0058dd */ 	jal	func00016374
/*  f0d4240:	27a500e4 */ 	addiu	$a1,$sp,0xe4
/*  f0d4244:	27a400e4 */ 	addiu	$a0,$sp,0xe4
/*  f0d4248:	0fc25c11 */ 	jal	func0f097044
/*  f0d424c:	27a500d4 */ 	addiu	$a1,$sp,0xd4
/*  f0d4250:	27a40124 */ 	addiu	$a0,$sp,0x124
/*  f0d4254:	0fc25c11 */ 	jal	func0f097044
/*  f0d4258:	27a500c4 */ 	addiu	$a1,$sp,0xc4
/*  f0d425c:	27a400c4 */ 	addiu	$a0,$sp,0xc4
/*  f0d4260:	0fc25db0 */ 	jal	func0f0976c0
/*  f0d4264:	27a500d4 */ 	addiu	$a1,$sp,0xd4
/*  f0d4268:	3c063f4c */ 	lui	$a2,0x3f4c
/*  f0d426c:	34c6cccd */ 	ori	$a2,$a2,0xcccd
/*  f0d4270:	27a400d4 */ 	addiu	$a0,$sp,0xd4
/*  f0d4274:	27a500c4 */ 	addiu	$a1,$sp,0xc4
/*  f0d4278:	0fc25cae */ 	jal	func0f0972b8
/*  f0d427c:	27a700b4 */ 	addiu	$a3,$sp,0xb4
/*  f0d4280:	27a400b4 */ 	addiu	$a0,$sp,0xb4
/*  f0d4284:	0fc25bb5 */ 	jal	func0f096ed4
/*  f0d4288:	27a50124 */ 	addiu	$a1,$sp,0x124
/*  f0d428c:	27a40124 */ 	addiu	$a0,$sp,0x124
/*  f0d4290:	0c00567f */ 	jal	func000159fc
/*  f0d4294:	27a50164 */ 	addiu	$a1,$sp,0x164
/*  f0d4298:	8e080284 */ 	lw	$t0,0x284($s0)
/*  f0d429c:	3c013f80 */ 	lui	$at,0x3f80
/*  f0d42a0:	8d091a7c */ 	lw	$t1,0x1a7c($t0)
/*  f0d42a4:	5520008b */ 	bnezl	$t1,.L0f0d44d4
/*  f0d42a8:	c7aa0184 */ 	lwc1	$f10,0x184($sp)
/*  f0d42ac:	44811000 */ 	mtc1	$at,$f2
/*  f0d42b0:	3c014270 */ 	lui	$at,0x4270
/*  f0d42b4:	44815000 */ 	mtc1	$at,$f10
/*  f0d42b8:	c604004c */ 	lwc1	$f4,0x4c($s0)
/*  f0d42bc:	c5081a80 */ 	lwc1	$f8,0x1a80($t0)
/*  f0d42c0:	3c017f1b */ 	lui	$at,%hi(var7f1adb94)
/*  f0d42c4:	460a2183 */ 	div.s	$f6,$f4,$f10
/*  f0d42c8:	46064100 */ 	add.s	$f4,$f8,$f6
/*  f0d42cc:	e5041a80 */ 	swc1	$f4,0x1a80($t0)
/*  f0d42d0:	8e080284 */ 	lw	$t0,0x284($s0)
/*  f0d42d4:	c5001a80 */ 	lwc1	$f0,0x1a80($t0)
/*  f0d42d8:	4600103e */ 	c.le.s	$f2,$f0
/*  f0d42dc:	00000000 */ 	nop
/*  f0d42e0:	45000004 */ 	bc1f	.L0f0d42f4
/*  f0d42e4:	00000000 */ 	nop
/*  f0d42e8:	e5021a80 */ 	swc1	$f2,0x1a80($t0)
/*  f0d42ec:	8e0a0284 */ 	lw	$t2,0x284($s0)
/*  f0d42f0:	c5401a80 */ 	lwc1	$f0,0x1a80($t2)
.L0f0d42f4:
/*  f0d42f4:	c42adb94 */ 	lwc1	$f10,%lo(var7f1adb94)($at)
/*  f0d42f8:	3c013f00 */ 	lui	$at,0x3f00
/*  f0d42fc:	44813000 */ 	mtc1	$at,$f6
/*  f0d4300:	460a0202 */ 	mul.s	$f8,$f0,$f10
/*  f0d4304:	00000000 */ 	nop
/*  f0d4308:	46064302 */ 	mul.s	$f12,$f8,$f6
/*  f0d430c:	0c0068f4 */ 	jal	cosf
/*  f0d4310:	00000000 */ 	nop
/*  f0d4314:	3c013f80 */ 	lui	$at,0x3f80
/*  f0d4318:	44812000 */ 	mtc1	$at,$f4
/*  f0d431c:	3c013f00 */ 	lui	$at,0x3f00
/*  f0d4320:	44814000 */ 	mtc1	$at,$f8
/*  f0d4324:	46040280 */ 	add.s	$f10,$f0,$f4
/*  f0d4328:	8e0b0284 */ 	lw	$t3,0x284($s0)
/*  f0d432c:	3c013f80 */ 	lui	$at,0x3f80
/*  f0d4330:	240c0001 */ 	addiu	$t4,$zero,0x1
/*  f0d4334:	46085182 */ 	mul.s	$f6,$f10,$f8
/*  f0d4338:	44815000 */ 	mtc1	$at,$f10
/*  f0d433c:	24050001 */ 	addiu	$a1,$zero,0x1
/*  f0d4340:	e5661a84 */ 	swc1	$f6,0x1a84($t3)
/*  f0d4344:	8e080284 */ 	lw	$t0,0x284($s0)
/*  f0d4348:	c5041a80 */ 	lwc1	$f4,0x1a80($t0)
/*  f0d434c:	4604503e */ 	c.le.s	$f10,$f4
/*  f0d4350:	00000000 */ 	nop
/*  f0d4354:	45020047 */ 	bc1fl	.L0f0d4474
/*  f0d4358:	25041a9c */ 	addiu	$a0,$t0,0x1a9c
/*  f0d435c:	ad0c1a7c */ 	sw	$t4,0x1a7c($t0)
/*  f0d4360:	8e0d0284 */ 	lw	$t5,0x284($s0)
/*  f0d4364:	3406ffff */ 	dli	$a2,0xffff
/*  f0d4368:	0fc249af */ 	jal	func0f0926bc
/*  f0d436c:	8da41a6c */ 	lw	$a0,0x1a6c($t5)
/*  f0d4370:	8e0e0284 */ 	lw	$t6,0x284($s0)
/*  f0d4374:	3c01bf80 */ 	lui	$at,0xbf80
/*  f0d4378:	44810000 */ 	mtc1	$at,$f0
/*  f0d437c:	8dc500bc */ 	lw	$a1,0xbc($t6)
/*  f0d4380:	240fffff */ 	addiu	$t7,$zero,-1
/*  f0d4384:	2418ffff */ 	addiu	$t8,$zero,-1
/*  f0d4388:	afb8002c */ 	sw	$t8,0x2c($sp)
/*  f0d438c:	afaf0010 */ 	sw	$t7,0x10($sp)
/*  f0d4390:	afa00028 */ 	sw	$zero,0x28($sp)
/*  f0d4394:	afa00020 */ 	sw	$zero,0x20($sp)
/*  f0d4398:	afa0001c */ 	sw	$zero,0x1c($sp)
/*  f0d439c:	afa00018 */ 	sw	$zero,0x18($sp)
/*  f0d43a0:	afa00014 */ 	sw	$zero,0x14($sp)
/*  f0d43a4:	00002025 */ 	or	$a0,$zero,$zero
/*  f0d43a8:	240600f5 */ 	addiu	$a2,$zero,0xf5
/*  f0d43ac:	2407ffff */ 	addiu	$a3,$zero,-1
/*  f0d43b0:	e7a00038 */ 	swc1	$f0,0x38($sp)
/*  f0d43b4:	e7a00034 */ 	swc1	$f0,0x34($sp)
/*  f0d43b8:	e7a00030 */ 	swc1	$f0,0x30($sp)
/*  f0d43bc:	0fc24e7e */ 	jal	func0f0939f8
/*  f0d43c0:	e7a00024 */ 	swc1	$f0,0x24($sp)
/*  f0d43c4:	8e190284 */ 	lw	$t9,0x284($s0)
/*  f0d43c8:	3c01bf80 */ 	lui	$at,0xbf80
/*  f0d43cc:	44810000 */ 	mtc1	$at,$f0
/*  f0d43d0:	8f2500bc */ 	lw	$a1,0xbc($t9)
/*  f0d43d4:	2409ffff */ 	addiu	$t1,$zero,-1
/*  f0d43d8:	240affff */ 	addiu	$t2,$zero,-1
/*  f0d43dc:	afaa002c */ 	sw	$t2,0x2c($sp)
/*  f0d43e0:	afa90010 */ 	sw	$t1,0x10($sp)
/*  f0d43e4:	afa00028 */ 	sw	$zero,0x28($sp)
/*  f0d43e8:	afa00020 */ 	sw	$zero,0x20($sp)
/*  f0d43ec:	afa0001c */ 	sw	$zero,0x1c($sp)
/*  f0d43f0:	afa00018 */ 	sw	$zero,0x18($sp)
/*  f0d43f4:	afa00014 */ 	sw	$zero,0x14($sp)
/*  f0d43f8:	00002025 */ 	or	$a0,$zero,$zero
/*  f0d43fc:	240680af */ 	addiu	$a2,$zero,-32593
/*  f0d4400:	2407ffff */ 	addiu	$a3,$zero,-1
/*  f0d4404:	e7a00038 */ 	swc1	$f0,0x38($sp)
/*  f0d4408:	e7a00034 */ 	swc1	$f0,0x34($sp)
/*  f0d440c:	e7a00030 */ 	swc1	$f0,0x30($sp)
/*  f0d4410:	0fc24e7e */ 	jal	func0f0939f8
/*  f0d4414:	e7a00024 */ 	swc1	$f0,0x24($sp)
/*  f0d4418:	8e0b0284 */ 	lw	$t3,0x284($s0)
/*  f0d441c:	3c01bf80 */ 	lui	$at,0xbf80
/*  f0d4420:	44810000 */ 	mtc1	$at,$f0
/*  f0d4424:	8d651a6c */ 	lw	$a1,0x1a6c($t3)
/*  f0d4428:	240cffff */ 	addiu	$t4,$zero,-1
/*  f0d442c:	240dffff */ 	addiu	$t5,$zero,-1
/*  f0d4430:	afad002c */ 	sw	$t5,0x2c($sp)
/*  f0d4434:	afac0010 */ 	sw	$t4,0x10($sp)
/*  f0d4438:	afa00028 */ 	sw	$zero,0x28($sp)
/*  f0d443c:	afa00020 */ 	sw	$zero,0x20($sp)
/*  f0d4440:	afa0001c */ 	sw	$zero,0x1c($sp)
/*  f0d4444:	afa00018 */ 	sw	$zero,0x18($sp)
/*  f0d4448:	afa00014 */ 	sw	$zero,0x14($sp)
/*  f0d444c:	00002025 */ 	or	$a0,$zero,$zero
/*  f0d4450:	240601b4 */ 	addiu	$a2,$zero,0x1b4
/*  f0d4454:	2407ffff */ 	addiu	$a3,$zero,-1
/*  f0d4458:	e7a00038 */ 	swc1	$f0,0x38($sp)
/*  f0d445c:	e7a00034 */ 	swc1	$f0,0x34($sp)
/*  f0d4460:	e7a00030 */ 	swc1	$f0,0x30($sp)
/*  f0d4464:	0fc24e7e */ 	jal	func0f0939f8
/*  f0d4468:	e7a00024 */ 	swc1	$f0,0x24($sp)
/*  f0d446c:	8e080284 */ 	lw	$t0,0x284($s0)
/*  f0d4470:	25041a9c */ 	addiu	$a0,$t0,0x1a9c
.L0f0d4474:
/*  f0d4474:	0fc25c11 */ 	jal	func0f097044
/*  f0d4478:	27a500a4 */ 	addiu	$a1,$sp,0xa4
/*  f0d447c:	27a40164 */ 	addiu	$a0,$sp,0x164
/*  f0d4480:	0fc25c11 */ 	jal	func0f097044
/*  f0d4484:	27a50094 */ 	addiu	$a1,$sp,0x94
/*  f0d4488:	27a40094 */ 	addiu	$a0,$sp,0x94
/*  f0d448c:	0fc25db0 */ 	jal	func0f0976c0
/*  f0d4490:	27a500a4 */ 	addiu	$a1,$sp,0xa4
/*  f0d4494:	8e0e0284 */ 	lw	$t6,0x284($s0)
/*  f0d4498:	3c013f80 */ 	lui	$at,0x3f80
/*  f0d449c:	44814000 */ 	mtc1	$at,$f8
/*  f0d44a0:	c5c61a84 */ 	lwc1	$f6,0x1a84($t6)
/*  f0d44a4:	27a400a4 */ 	addiu	$a0,$sp,0xa4
/*  f0d44a8:	27a50094 */ 	addiu	$a1,$sp,0x94
/*  f0d44ac:	46064101 */ 	sub.s	$f4,$f8,$f6
/*  f0d44b0:	27a70084 */ 	addiu	$a3,$sp,0x84
/*  f0d44b4:	44062000 */ 	mfc1	$a2,$f4
/*  f0d44b8:	0fc25cae */ 	jal	func0f0972b8
/*  f0d44bc:	00000000 */ 	nop
/*  f0d44c0:	27a40084 */ 	addiu	$a0,$sp,0x84
/*  f0d44c4:	0fc25bb5 */ 	jal	func0f096ed4
/*  f0d44c8:	27a50164 */ 	addiu	$a1,$sp,0x164
/*  f0d44cc:	8e080284 */ 	lw	$t0,0x284($s0)
/*  f0d44d0:	c7aa0184 */ 	lwc1	$f10,0x184($sp)
.L0f0d44d4:
/*  f0d44d4:	e50a0388 */ 	swc1	$f10,0x388($t0)
/*  f0d44d8:	8e0f0284 */ 	lw	$t7,0x284($s0)
/*  f0d44dc:	c7a80188 */ 	lwc1	$f8,0x188($sp)
/*  f0d44e0:	e5e8038c */ 	swc1	$f8,0x38c($t7)
/*  f0d44e4:	8e180284 */ 	lw	$t8,0x284($s0)
/*  f0d44e8:	c7a6018c */ 	lwc1	$f6,0x18c($sp)
/*  f0d44ec:	e7060390 */ 	swc1	$f6,0x390($t8)
/*  f0d44f0:	8e190284 */ 	lw	$t9,0x284($s0)
/*  f0d44f4:	c7a40174 */ 	lwc1	$f4,0x174($sp)
/*  f0d44f8:	e7240394 */ 	swc1	$f4,0x394($t9)
/*  f0d44fc:	8e090284 */ 	lw	$t1,0x284($s0)
/*  f0d4500:	c7aa0178 */ 	lwc1	$f10,0x178($sp)
/*  f0d4504:	e52a0398 */ 	swc1	$f10,0x398($t1)
/*  f0d4508:	8e0a0284 */ 	lw	$t2,0x284($s0)
/*  f0d450c:	c7a8017c */ 	lwc1	$f8,0x17c($sp)
/*  f0d4510:	e548039c */ 	swc1	$f8,0x39c($t2)
/*  f0d4514:	8e080284 */ 	lw	$t0,0x284($s0)
/*  f0d4518:	8d0b1a7c */ 	lw	$t3,0x1a7c($t0)
/*  f0d451c:	55600020 */ 	bnezl	$t3,.L0f0d45a0
/*  f0d4520:	8d0400bc */ 	lw	$a0,0xbc($t0)
/*  f0d4524:	c5061a90 */ 	lwc1	$f6,0x1a90($t0)
/*  f0d4528:	c5041adc */ 	lwc1	$f4,0x1adc($t0)
/*  f0d452c:	c5081a84 */ 	lwc1	$f8,0x1a84($t0)
/*  f0d4530:	8d0c00bc */ 	lw	$t4,0xbc($t0)
/*  f0d4534:	46043281 */ 	sub.s	$f10,$f6,$f4
/*  f0d4538:	27a40078 */ 	addiu	$a0,$sp,0x78
/*  f0d453c:	c5840008 */ 	lwc1	$f4,0x8($t4)
/*  f0d4540:	46085182 */ 	mul.s	$f6,$f10,$f8
/*  f0d4544:	46043280 */ 	add.s	$f10,$f6,$f4
/*  f0d4548:	e7aa0078 */ 	swc1	$f10,0x78($sp)
/*  f0d454c:	8d0d00bc */ 	lw	$t5,0xbc($t0)
/*  f0d4550:	c5081a94 */ 	lwc1	$f8,0x1a94($t0)
/*  f0d4554:	c5041a84 */ 	lwc1	$f4,0x1a84($t0)
/*  f0d4558:	c5a0000c */ 	lwc1	$f0,0xc($t5)
/*  f0d455c:	46004181 */ 	sub.s	$f6,$f8,$f0
/*  f0d4560:	46043282 */ 	mul.s	$f10,$f6,$f4
/*  f0d4564:	46005200 */ 	add.s	$f8,$f10,$f0
/*  f0d4568:	e7a8007c */ 	swc1	$f8,0x7c($sp)
/*  f0d456c:	c5041ae4 */ 	lwc1	$f4,0x1ae4($t0)
/*  f0d4570:	c5061a98 */ 	lwc1	$f6,0x1a98($t0)
/*  f0d4574:	c5081a84 */ 	lwc1	$f8,0x1a84($t0)
/*  f0d4578:	8d0e00bc */ 	lw	$t6,0xbc($t0)
/*  f0d457c:	46043281 */ 	sub.s	$f10,$f6,$f4
/*  f0d4580:	c5c40010 */ 	lwc1	$f4,0x10($t6)
/*  f0d4584:	46085182 */ 	mul.s	$f6,$f10,$f8
/*  f0d4588:	46043280 */ 	add.s	$f10,$f6,$f4
/*  f0d458c:	0fc33067 */ 	jal	func0f0cc19c
/*  f0d4590:	e7aa0080 */ 	swc1	$f10,0x80($sp)
/*  f0d4594:	10000005 */ 	b	.L0f0d45ac
/*  f0d4598:	8e0f0284 */ 	lw	$t7,0x284($s0)
/*  f0d459c:	8d0400bc */ 	lw	$a0,0xbc($t0)
.L0f0d45a0:
/*  f0d45a0:	0fc33067 */ 	jal	func0f0cc19c
/*  f0d45a4:	24840008 */ 	addiu	$a0,$a0,0x8
/*  f0d45a8:	8e0f0284 */ 	lw	$t7,0x284($s0)
.L0f0d45ac:
/*  f0d45ac:	3c017f1b */ 	lui	$at,%hi(var7f1adb98)
/*  f0d45b0:	c426db98 */ 	lwc1	$f6,%lo(var7f1adb98)($at)
/*  f0d45b4:	c5e8015c */ 	lwc1	$f8,0x15c($t7)
/*  f0d45b8:	46064083 */ 	div.s	$f2,$f8,$f6
/*  f0d45bc:	0fc4505b */ 	jal	func0f11416c
/*  f0d45c0:	e7a20070 */ 	swc1	$f2,0x70($sp)
/*  f0d45c4:	3c013f80 */ 	lui	$at,0x3f80
/*  f0d45c8:	c7a20070 */ 	lwc1	$f2,0x70($sp)
/*  f0d45cc:	44812000 */ 	mtc1	$at,$f4
/*  f0d45d0:	46000306 */ 	mov.s	$f12,$f0
/*  f0d45d4:	3c01bf80 */ 	lui	$at,0xbf80
/*  f0d45d8:	4602203c */ 	c.lt.s	$f4,$f2
/*  f0d45dc:	00000000 */ 	nop
/*  f0d45e0:	45020006 */ 	bc1fl	.L0f0d45fc
/*  f0d45e4:	44815000 */ 	mtc1	$at,$f10
/*  f0d45e8:	3c013f80 */ 	lui	$at,0x3f80
/*  f0d45ec:	44811000 */ 	mtc1	$at,$f2
/*  f0d45f0:	1000000a */ 	b	.L0f0d461c
/*  f0d45f4:	8e180284 */ 	lw	$t8,0x284($s0)
/*  f0d45f8:	44815000 */ 	mtc1	$at,$f10
.L0f0d45fc:
/*  f0d45fc:	3c01bf80 */ 	lui	$at,0xbf80
/*  f0d4600:	460a103c */ 	c.lt.s	$f2,$f10
/*  f0d4604:	00000000 */ 	nop
/*  f0d4608:	45020004 */ 	bc1fl	.L0f0d461c
/*  f0d460c:	8e180284 */ 	lw	$t8,0x284($s0)
/*  f0d4610:	44811000 */ 	mtc1	$at,$f2
/*  f0d4614:	00000000 */ 	nop
/*  f0d4618:	8e180284 */ 	lw	$t8,0x284($s0)
.L0f0d461c:
/*  f0d461c:	44807000 */ 	mtc1	$zero,$f14
/*  f0d4620:	44061000 */ 	mfc1	$a2,$f2
/*  f0d4624:	c7080168 */ 	lwc1	$f8,0x168($t8)
/*  f0d4628:	24070000 */ 	addiu	$a3,$zero,0x0
/*  f0d462c:	0fc27637 */ 	jal	func0f09d8dc
/*  f0d4630:	e7a80010 */ 	swc1	$f8,0x10($sp)
/*  f0d4634:	8e190284 */ 	lw	$t9,0x284($s0)
/*  f0d4638:	3c017f1b */ 	lui	$at,%hi(var7f1adb9c)
/*  f0d463c:	c424db9c */ 	lwc1	$f4,%lo(var7f1adb9c)($at)
/*  f0d4640:	c7260158 */ 	lwc1	$f6,0x158($t9)
/*  f0d4644:	46043302 */ 	mul.s	$f12,$f6,$f4
/*  f0d4648:	0fc288a4 */ 	jal	func0f0a2290
/*  f0d464c:	00000000 */ 	nop
/*  f0d4650:	0fc307fd */ 	jal	func0f0c1ff4
/*  f0d4654:	00000000 */ 	nop
/*  f0d4658:	0fc32e31 */ 	jal	func0f0cb8c4
/*  f0d465c:	8e040284 */ 	lw	$a0,0x284($s0)
/*  f0d4660:	8e090284 */ 	lw	$t1,0x284($s0)
/*  f0d4664:	8d2a00bc */ 	lw	$t2,0xbc($t1)
/*  f0d4668:	0fc257d8 */ 	jal	objectiveCheckRoomEntered
/*  f0d466c:	85440028 */ 	lh	$a0,0x28($t2)
/*  f0d4670:	0fc23064 */ 	jal	func0f08c190
/*  f0d4674:	00000000 */ 	nop
/*  f0d4678:	8fbf004c */ 	lw	$ra,0x4c($sp)
/*  f0d467c:	8fb00048 */ 	lw	$s0,0x48($sp)
/*  f0d4680:	27bd0220 */ 	addiu	$sp,$sp,0x220
/*  f0d4684:	03e00008 */ 	jr	$ra
/*  f0d4688:	00000000 */ 	nop
/*  f0d468c:	00000000 */ 	nop
);
