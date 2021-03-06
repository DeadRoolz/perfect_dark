#include <ultra64.h>
#include "constants.h"
#include "game/data/data_000000.h"
#include "game/data/data_0083d0.h"
#include "game/data/data_00e460.h"
#include "game/data/data_0160b0.h"
#include "game/data/data_01a3a0.h"
#include "game/data/data_020df0.h"
#include "game/data/data_02da90.h"
#include "gvars/gvars.h"
#include "types.h"

GLOBAL_ASM(
glabel osInvalICache
/*    48150:	18a00011 */ 	blez	$a1,.L00048198
/*    48154:	00000000 */ 	nop
/*    48158:	240b4000 */ 	addiu	$t3,$zero,0x4000
/*    4815c:	00ab082b */ 	sltu	$at,$a1,$t3
/*    48160:	1020000f */ 	beqz	$at,.L000481a0
/*    48164:	00000000 */ 	nop
/*    48168:	00804025 */ 	or	$t0,$a0,$zero
/*    4816c:	00854821 */ 	addu	$t1,$a0,$a1
/*    48170:	0109082b */ 	sltu	$at,$t0,$t1
/*    48174:	10200008 */ 	beqz	$at,.L00048198
/*    48178:	00000000 */ 	nop
/*    4817c:	310a001f */ 	andi	$t2,$t0,0x1f
/*    48180:	2529ffe0 */ 	addiu	$t1,$t1,-32
/*    48184:	010a4023 */ 	subu	$t0,$t0,$t2
.L00048188:
/*    48188:	bd100000 */ 	cache	0x10,0x0($t0)
/*    4818c:	0109082b */ 	sltu	$at,$t0,$t1
/*    48190:	1420fffd */ 	bnez	$at,.L00048188
/*    48194:	25080020 */ 	addiu	$t0,$t0,0x20
.L00048198:
/*    48198:	03e00008 */ 	jr	$ra
/*    4819c:	00000000 */ 	nop
.L000481a0:
/*    481a0:	3c088000 */ 	lui	$t0,0x8000
/*    481a4:	010b4821 */ 	addu	$t1,$t0,$t3
/*    481a8:	2529ffe0 */ 	addiu	$t1,$t1,-32
.L000481ac:
/*    481ac:	bd000000 */ 	cache	0x0,0x0($t0)
/*    481b0:	0109082b */ 	sltu	$at,$t0,$t1
/*    481b4:	1420fffd */ 	bnez	$at,.L000481ac
/*    481b8:	25080020 */ 	addiu	$t0,$t0,0x20
/*    481bc:	03e00008 */ 	jr	$ra
/*    481c0:	00000000 */ 	nop
/*    481c4:	00000000 */ 	nop
/*    481c8:	00000000 */ 	nop
/*    481cc:	00000000 */ 	nop
);