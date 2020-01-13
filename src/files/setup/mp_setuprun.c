//
// Stage ID 0x23
//

#include "stagesetup.h"

u8 intro[];
u8 props[];
struct path paths[];
struct ailist ailists[];

struct stagesetup setup = {
	NULL,
	NULL,
	NULL,
	intro,
	props,
	paths,
	ailists,
	NULL,
};

u8 props[] = {
	endprops
};

u8 intro[] = {
	outfit(OUTFIT_DEFAULT)
	endintro
};

struct path paths[] = {
	{ NULL, 0, 0 },
};

u8 unregistered_func1[] = {
	set_ailist(CHR_SELF, GAILIST_IDLE)
	endlist
};

u8 unregistered_func2[] = {
	cmd0185_mponly
	rebuild_teams
	rebuild_squadrons
	set_ailist(CHR_SELF, GAILIST_IDLE)
	endlist
};

struct ailist ailists[] = {
	{ NULL, 0 },
};

