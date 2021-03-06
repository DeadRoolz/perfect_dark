#ifndef IN_GAME_BONDBIKE_H
#define IN_GAME_BONDBIKE_H
#include <ultra64.h>
#include "types.h"

void currentPlayerBikeInit(void);
u32 func0f0d2184(void);
void func0f0d2294(void);
u32 func0f0d22f8(void);
u32 func0f0d2558(void);
void currentPlayerUpdateSpeedBike(struct movedata *data);
u32 func0f0d2b40(void);
u32 func0f0d2e18(void);
s32 func0f0d3298(struct coord *coord, f32 arg1);
u32 func0f0d341c(void);
s32 func0f0d363c(f32 arg0);
s32 func0f0d3680(struct coord *arg0, struct coord *arg1, struct coord *arg2);
s32 func0f0d36d4(struct coord *arg0, struct coord *arg1, struct coord *arg2, struct coord *arg3, struct coord *arg4);
s32 func0f0d3840(struct coord *arg0, struct coord *arg1, struct coord *arg2);
s32 func0f0d3940(struct coord *arg0, struct coord *arg1, struct coord *arg2);
void func0f0d3c60(struct coord *arg0);
void func0f0d3d50(void);

#endif
