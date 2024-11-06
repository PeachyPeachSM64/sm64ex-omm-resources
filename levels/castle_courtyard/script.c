#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

#include "make_const_nonconst.h"
#include "levels/castle_courtyard/header.h"

const LevelScript level_castle_courtyard_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x07, _castle_courtyard_segment_7SegmentRomStart, _castle_courtyard_segment_7SegmentRomEnd), 
	LOAD_MIO0(0x0A, _clouds_skybox_mio0SegmentRomStart, _clouds_skybox_mio0SegmentRomEnd), 
	LOAD_MIO0_TEXTURE(0x09, _outside_mio0SegmentRomStart, _outside_mio0SegmentRomEnd), 
	LOAD_MIO0(0x05, _group9_mio0SegmentRomStart, _group9_mio0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group9_geoSegmentRomStart, _group9_geoSegmentRomEnd), 
	LOAD_MIO0(0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_10), 
	LOAD_MODEL_FROM_GEO(MODEL_COURTYARD_SPIKY_TREE, spiky_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_COURTYARD_WOODEN_DOOR, wooden_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, castle_courtyard_geo_000200), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_WARP_PIPE, Pipe1_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, Pine_geo),
	LOAD_MODEL_FROM_GEO(MODEL_BREAKABLE_BOX_SMALL, Stone1_geo), 

	AREA(1, castle_courtyard_area_1),
	/*BBH*/
		/*Entrance/Warp Pipe*/
		WARP_NODE(0x0C, LEVEL_BBH, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_CASTLE_GROUNDS_WARP_PIPE, 389, 119, 159, 0, 0, 0, 0x000C0000, bhvWarpPipe),
		/*Star*/
		WARP_NODE(0x0D, LEVEL_CASTLE_COURTYARD, 0x01, 0x0D, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 389, 119, 159, 0, 180, 0, 0x000D0000,  bhvLaunchStarCollectWarp),
		/*Death*/
		WARP_NODE(0x0E, LEVEL_CASTLE_COURTYARD, 0x01, 0x0E, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 389, 119, 159, 0, 180, 0, 0x000E0000, bhvLaunchDeathWarp),
	/*CASTLE_COURTYARD*/ 
		/*from CASTLE*/
		WARP_NODE(0x0A, LEVEL_CASTLE_COURTYARD, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 212, 215, 7062, 0, -180, 0, 0x000A0000, bhvSpinAirborneWarp),
		/*to CASTLE*/
		WARP_NODE(0x0B, LEVEL_CASTLE, 0x01, 0x05, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 217, 140, 7330, 0, 180, 0, 0x000B0000, bhvWarp),
		/*Death*/
		WARP_NODE(0xF1, LEVEL_CASTLE, 0x01, 0xF1, WARP_NO_CHECKPOINT),
	/*Objects*/
		OBJECT(MODEL_NONE, -2005, -32, 4338, 0, 0, 0, 0x00000000, bhvBirdsSoundLoop),
		OBJECT(MODEL_NONE, 4060, -32, -1587, 0, 0, 0, 0x00000000, bhvBirdsSoundLoop),
		OBJECT(MODEL_NONE, 4060, -32, 4990, 0, 0, 0, 0x00000000, bhvBirdsSoundLoop),
		OBJECT(MODEL_NONE, 408, 35, 3860, 0, 0, 0, 0x00000000, bhvAmbientSounds),
		OBJECT(MODEL_YELLOW_COIN, -4492, -662, 1629, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -4492, -662, 1929, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -4492, -662, 2217, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -4492, -662, 2390, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -4198, -662, 2390, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -3746, -662, 2390, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 4053, -532, 4014, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 3738, -532, 4299, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 3362, -532, 4008, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 3736, -532, 3755, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 393, 39, 3749, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 393, 39, 3489, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 393, 39, 3152, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 393, 39, 2787, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 1246, 39, 2963, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -488, 39, 2970, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -4776, 39, 3203, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -3349, 94, -457, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 3487, 94, 2550, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 47, 39, -3534, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 727, 39, -3534, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -243, -16, -4892, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 1037, -16, -4892, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_COURTYARD_WOODEN_DOOR, 395, -32, -3742, 0, -180, 0, 0x00000000, bhvDoor),
		OBJECT(MODEL_NONE, 3656, -480, 4008, 0, 0, 0, 0x00000000, bhvFish2),
		OBJECT(MODEL_NONE, -4455, -368, 2199, 0, 0, 0, 0x00000000, bhvFish2),
		OBJECT(MODEL_NONE, -2943, -32, 4775, 0, 0, 0, 0x00000000, bhvGoombaTripletSpawner),
		OBJECT(MODEL_NONE, -4407, -32, -1849, 0, 0, 0, 0x00000000, bhvGoombaTripletSpawner),
		OBJECT(MODEL_NONE, 4418, -32, 409, 0, 0, 0, 0x00000000, bhvGoombaTripletSpawner),
	    OBJECT(MODEL_BREAKABLE_BOX_SMALL, -1733, 15, 3180, 0, 0, 0, 0x00000000, bhvBreakableBoxSmall),
		OBJECT(MODEL_BREAKABLE_BOX_SMALL, 4066, 15, 890, 0, 0, 0, 0x00000000, bhvBreakableBoxSmall),
		OBJECT(MODEL_BREAKABLE_BOX_SMALL, -3268, 15, -1255, 0, 0, 0, 0x00000000, bhvBreakableBoxSmall),
		OBJECT(MODEL_BREAKABLE_BOX_SMALL, 1678, 15, 5811, 0, 0, 0, 0x00000000, bhvBreakableBoxSmall),
		OBJECT(MODEL_RED_FLAME, 27, 300, -5629, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, 735, 300, -5629, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, -2766, -32, 2729, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, -4363, -32, 67, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, 3970, -32, -905, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, 5012, -32, 1757, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, -3576, -32, -2456, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, 4850, -32, -2456, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, 5011, -32, 3840, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, -3745, -32, 4882, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, -1979, -32, -3035, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, 3626, -32, 5465, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, 1348, -32, -3091, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, -602, -32, -407, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, 1367, -32, 798, 0, 0, 0, 0x00000000, bhvTree),
		MARIO_POS(0x01, 0, 255, 423, 6837),
		TERRAIN(castle_courtyard_area_1_collision),
		MACRO_OBJECTS(castle_courtyard_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_EVENT_PIRANHA_PLANT),
		TERRAIN_TYPE(TERRAIN_STONE),
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, 255, 423, 6837),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
