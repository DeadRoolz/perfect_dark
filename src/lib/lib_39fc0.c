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
glabel func00039fc0
/*    39fc0:	3c0e8006 */ 	lui	$t6,%hi(var8005f114)
/*    39fc4:	8dcef114 */ 	lw	$t6,%lo(var8005f114)($t6)
/*    39fc8:	adc00000 */ 	sw	$zero,0x0($t6)
/*    39fcc:	03e00008 */ 	jr	$ra
/*    39fd0:	00000000 */ 	nop
/*    39fd4:	03e00008 */ 	jr	$ra
/*    39fd8:	00000000 */ 	nop
/*    39fdc:	00000000 */ 	nop
);