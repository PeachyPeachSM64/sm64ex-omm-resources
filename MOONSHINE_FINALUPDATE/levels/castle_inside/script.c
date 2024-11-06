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
#include "levels/castle_inside/header.h"

const LevelScript level_castle_inside_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x07, _castle_inside_segment_7SegmentRomStart, _castle_inside_segment_7SegmentRomEnd), 
	LOAD_MIO0_TEXTURE(0x09, _inside_mio0SegmentRomStart, _inside_mio0SegmentRomEnd), 
	LOAD_MIO0(0x05, _group8_mio0SegmentRomStart, _group8_mio0SegmentRomEnd),
	LOAD_RAW(0x0C, _group8_geoSegmentRomStart,  _group8_geoSegmentRomEnd),
	LOAD_MIO0(0x06, _group15_mio0SegmentRomStart, _group15_mio0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group15_geoSegmentRomStart, _group15_geoSegmentRomEnd), 
	LOAD_MIO0(0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0xa, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1),
	JUMP_LINK(script_func_global_9),
	JUMP_LINK(script_func_global_16), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_BOWSER_TRAP, castle_geo_000F18), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_WATER_LEVEL_PILLAR, castle_geo_001940), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CLOCK_MINUTE_HAND, castle_geo_001530), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CLOCK_HOUR_HAND, castle_geo_001548), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CLOCK_PENDULUM, castle_geo_001518), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CASTLE_DOOR, castle_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_WOODEN_DOOR, wooden_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_METAL_DOOR, metal_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CASTLE_DOOR_UNUSED, castle_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_WOODEN_DOOR_UNUSED, wooden_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_0_STARS, castle_door_0_star_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_1_STAR, castle_door_1_star_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_3_STARS, castle_door_3_stars_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_KEY_DOOR, key_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_30_STARS, castle_geo_000F00), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_8_STARS, castle_geo_000F00), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_50_STARS, castle_geo_000F00), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_70_STARS, castle_geo_000F00), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_WARP_PIPE, Pipe_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CAP_SWITCH, red_geo), 

	AREA(1, castle_inside_area_1),
	/*BOB*/
		/*Entrance/Warp Pipe*/
		WARP_NODE(0x00, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_CASTLE_GROUNDS_WARP_PIPE, -8, -1859, -2538, 0, 0, 0, 0x00000000, bhvWarpPipe),
		/*Star*/
		WARP_NODE(0x32, LEVEL_CASTLE, 0x01, 0x32, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, -8, -1859, -2538, 0, -180, 0, 0x00320000,  bhvLaunchStarCollectWarp),
		/*Death*/
		WARP_NODE(0x64, LEVEL_CASTLE, 0x01, 0x64, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, -8, -1859, -2538, 0, -180, 0, 0x00640000, bhvLaunchDeathWarp),
	/*WF*/
		/*Entrance/Warp Pipe*/
		WARP_NODE(0x0B, LEVEL_WF, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_CASTLE_GROUNDS_WARP_PIPE, -3950, -2750, 487, 0, 0, 0, 0x000B0000, bhvWarpPipe),
		/*Star*/
		WARP_NODE(0x34, LEVEL_CASTLE, 0x01, 0x34, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, -3774, -2467, 494, 0, -90, 0, 0x00340000,  bhvLaunchStarCollectWarp),
		/*Death*/
		WARP_NODE(0x66, LEVEL_CASTLE, 0x01, 0x66, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, -3774, -2467, 494, 0, -90, 0, 0x00660000, bhvLaunchDeathWarp),
	/*PSS*/
		/*Entrance/Warp Pipe*/
		WARP_NODE(0x28, LEVEL_PSS, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_CASTLE_GROUNDS_WARP_PIPE, 3988, -2787, 520, 0, 90, 0, 0x00280000,  bhvWarpPipe),
		/*Star*/
		WARP_NODE(0x26, LEVEL_CASTLE, 0x01, 0x26, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 3988, -2787, 520, 0, 90, 0, 0x00260000, bhvLaunchStarCollectWarp),
		/*Fall No Death F3*/
		WARP_NODE(0x20, LEVEL_CASTLE, 0x01, 0x20, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 5, -2070, 2082, 0, 0, 0, 0x00200000, bhvAirborneWarp),
	/*HMC*/
        /*Entrance/Warp Pipe*/
        WARP_NODE(0x09, LEVEL_HMC, 0x01, 0x0A, WARP_NO_CHECKPOINT),
        OBJECT(MODEL_CASTLE_GROUNDS_WARP_PIPE, -3950, -2782, -937, 0, 0, 0, 0x00090000, bhvWarpPipe),
        /*Star*/
        WARP_NODE(0x22, LEVEL_CASTLE, 0x01, 0x22, WARP_NO_CHECKPOINT),
        OBJECT(MODEL_NONE, -3774, -2499, -936, 0, -90, 0, 0x00220000,  bhvLaunchStarCollectWarp),
        /*Death*/
        WARP_NODE(0x24, LEVEL_CASTLE, 0x01, 0x24, WARP_NO_CHECKPOINT),
        OBJECT(MODEL_NONE, -3774, -2499, -936, 0, -90, 0, 0x00240000, bhvLaunchDeathWarp),
     /*CCM*/
        /*Entrance/Warp Pipe*/
        WARP_NODE(0x06, LEVEL_CCM, 0x01, 0x0A, WARP_NO_CHECKPOINT),
        OBJECT(MODEL_CASTLE_GROUNDS_WARP_PIPE, 3965, -2719, -936, 0, -180, 0, 0x00060000, bhvWarpPipe),
        /*Star*/
        WARP_NODE(0x23, LEVEL_CASTLE, 0x01, 0x23, WARP_NO_CHECKPOINT),
        OBJECT(MODEL_NONE, 3788, -2436, -937, 0, 90, 0, 0x00230000,  bhvLaunchStarCollectWarp),
        /*Death*/
        WARP_NODE(0x27, LEVEL_CASTLE, 0x01, 0x27, WARP_NO_CHECKPOINT),
        OBJECT(MODEL_NONE, 3788, -2436, -937, 0, 90, 0, 0x00270000, bhvLaunchDeathWarp),
     /*LLL*/
        /*Entrance/Warp Pipe*/
        WARP_NODE(0x10, LEVEL_LLL, 0x01, 0x0A, WARP_NO_CHECKPOINT),
        OBJECT(MODEL_CASTLE_GROUNDS_WARP_PIPE, 1847, -1818, 6705, 0, 90, 0, 0x00100000, bhvWarpPipe),
        /*Star*/
        WARP_NODE(0x11, LEVEL_CASTLE, 0x01, 0x11, WARP_NO_CHECKPOINT),
        OBJECT(MODEL_NONE, 1848, -1535, 6529, 0, 0, 0, 0x00110000, bhvLaunchStarCollectWarp),
        /*Death*/
        WARP_NODE(0x12, LEVEL_CASTLE, 0x01, 0x12, WARP_NO_CHECKPOINT),
        OBJECT(MODEL_NONE, 1848, -1535, 6529, 0, 0, 0, 0x00120000, bhvLaunchDeathWarp),

      /*WDW*/
        /*Entrance/Warp Pipe*/
        WARP_NODE(0x13, LEVEL_WDW, 0x01, 0x0A, WARP_NO_CHECKPOINT),
        OBJECT(MODEL_CASTLE_GROUNDS_WARP_PIPE, 1139, -2782, -4100, 0, -90, 0, 0x00130000, bhvWarpPipe),
        /*Star*/
        WARP_NODE(0x14, LEVEL_CASTLE, 0x01, 0x14, WARP_NO_CHECKPOINT),
       OBJECT(MODEL_NONE, 1138, -2499, -3923, 0, 180, 0, 0x00140000, bhvLaunchStarCollectWarp),
        /*Death*/
        WARP_NODE(0x15, LEVEL_CASTLE, 0x01, 0x15, WARP_NO_CHECKPOINT),
        OBJECT(MODEL_NONE, 1138, -2499, -3923, 0, 180, 0, 0x00150000, bhvLaunchDeathWarp),
        
      /*BITFS*/
        /*Entrance/Warp Pipe*/
        WARP_NODE(0x35, LEVEL_BITFS, 0x01, 0x0A, WARP_NO_CHECKPOINT),
        OBJECT(MODEL_CASTLE_GROUNDS_WARP_PIPE, -1047, -2782, -4100, 0, -90, 0, 0x00350000, bhvWarpPipe),
        /*Star*/
        WARP_NODE(0x36, LEVEL_CASTLE, 0x01, 0x36, WARP_NO_CHECKPOINT),
        OBJECT(MODEL_NONE, -1048, -2499, -3923, 0, 180, 0, 0x00360000, bhvLaunchStarCollectWarp),
        /*Death*/
        WARP_NODE(0x37, LEVEL_CASTLE, 0x01, 0x37, WARP_NO_CHECKPOINT),
        OBJECT(MODEL_NONE, -1048, -2499, -3923, 0, 180, 0, 0x00370000, bhvLaunchDeathWarp),

      /*BITS*/
        /*Entrance/Warp Pipe*/
        WARP_NODE(0x70, LEVEL_BITS, 0x01, 0x0A, WARP_NO_CHECKPOINT),
        OBJECT(MODEL_CASTLE_GROUNDS_WARP_PIPE, 1847, -1818, 7921, 0, 90, 0, 0x00700000, bhvWarpPipe),
        /*Star*/
        WARP_NODE(0x71, LEVEL_CASTLE, 0x01, 0x71, WARP_NO_CHECKPOINT),
        OBJECT(MODEL_NONE, 1848, -1535, 6513, 0, 0, 0, 0x00710000, bhvLaunchStarCollectWarp),
        /*Death*/
        WARP_NODE(0x72, LEVEL_CASTLE, 0x01, 0x72, WARP_NO_CHECKPOINT),
        OBJECT(MODEL_NONE, 1848, -1535, 6513, 0, 0, 0, 0x00720000, bhvLaunchDeathWarp),

	/*CASTLE*/
		/*Entrance*/
		WARP_NODE(0x0A, LEVEL_CASTLE, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 5, -2070, 2082, 0, -180, 0, 0x000A0000, bhvSpinAirborneWarp),
		/*Exit Level*/
		WARP_NODE(0x1F, LEVEL_CASTLE, 0x01, 0x1F, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 5, -2070, 2082, 0, -180, 0, 0x001F0000, bhvInstantActiveWarp),
		/*Death*/
		WARP_NODE(0xF1, LEVEL_CASTLE, 0x01, 0xF1, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 5, -2070, 2082, 0, -180, 0, 0x00F10000, bhvDeathWarp),
		
	/*CASTLE_COURTYARD*/ 
		/*from CASTLE*/
		WARP_NODE(0x02, LEVEL_CASTLE_COURTYARD, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 2, -2792, 4815, 0, 0, 0, 0x00020000, bhvWarp),
		/*to CASTLE ???*/
		WARP_NODE(0x05, LEVEL_CASTLE, 0x01, 0x05, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 5, -2070, 2082, 0, -180, 0, 0x00050000, bhvSpinAirborneWarp),
	/*Objects*/
		OBJECT(MODEL_BREAKABLE_BOX, 1588, -2796, -4186, 0, -90, 0, 0x00000000, bhvBreakableBox),
		OBJECT(MODEL_BREAKABLE_BOX, 1588, -2796, -3964, 0, -90, 0, 0x00000000, bhvBreakableBox),
		OBJECT(MODEL_YELLOW_COIN, 2, -2792, 4498, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 2, -2792, 4291, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 2, -2792, 4074, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -3359, -2643, 1061, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -3520, -2643, 1061, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -3671, -2643, 1061, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -3037, -2580, -425, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -3591, -2489, -425, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 3158, -2386, -327, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 3358, -2387, -1448, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 835, -2679, -3562, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_CASTLE_STAR_DOOR_30_STARS, 1747, -1821, 7529, 0, 0, 0, 0x1E000000, bhvStarDoor),
		OBJECT(MODEL_CASTLE_STAR_DOOR_30_STARS, 1901, -1821, 7529, 0, -180, 0, 0x1E000000, bhvStarDoor),
		OBJECT(MODEL_YELLOW_COIN, 2042, -1149, 7871, 0, 90, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 1835, -1149, 7871, 0, 90, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 1618, -1149, 7871, 0, 90, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_CASTLE_STAR_DOOR_8_STARS, 1772, -1824, 5071, 0, 0, 0, 0x08000000, bhvStarDoor),
		OBJECT(MODEL_CASTLE_STAR_DOOR_8_STARS, 1926, -1824, 5071, 0, -180, 0, 0x08000000, bhvStarDoor),
		OBJECT(MODEL_CASTLE_DOOR_1_STAR, -2211, -2797, 535, 0, 90, 0, 0x01000000, bhvDoor),
		OBJECT(MODEL_CASTLE_DOOR_3_STARS, 2278, -2797, 530, 0, -90, 0, 0x03000000, bhvDoor),
		OBJECT(MODEL_CASTLE_DOOR_0_STARS, -2292, -2797, -880, 0, 90, 0, 0x00000000, bhvDoor),
		OBJECT(MODEL_CASTLE_DOOR_0_STARS, 2307, -2797, -889, 0, -90, 0, 0x00000000, bhvDoor),
		OBJECT(MODEL_CASTLE_DOOR_0_STARS, -1065, -2797, -2749, 0, 0, 0, 0x00000000, bhvDoor),
		OBJECT(MODEL_CASTLE_DOOR_0_STARS, 1072, -2797, -2749, 0, 0, 0, 0x00000000, bhvDoor),
		OBJECT(MODEL_CAP_SWITCH, -1822, -1886, 4094, 0, -180, 0, 0x00000000, bhvCapSwitch),
		OBJECT(MODEL_TOAD, 526, -2794, 1536, 0, -37, 0, DIALOG_133 << 24, bhvToadMessage),
		OBJECT(MODEL_TOAD, -573, -2794, 4485, 0, 144, 0, DIALOG_134 << 24, bhvToadMessage),
		OBJECT(MODEL_TOAD, 1271, -1799, 5900, 0, 20, 0, DIALOG_076 << 24, bhvToadMessage),
		MARIO_POS(0x01, -180, 5, -2070, 2082),
		TERRAIN(castle_inside_area_1_collision),
		MACRO_OBJECTS(castle_inside_area_1_macro_objs),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0001, /*seq*/ SEQ_STREAMED_CASTLE),
		TERRAIN_TYPE(TERRAIN_STONE),
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, -180, 5, -2070, 2082),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
