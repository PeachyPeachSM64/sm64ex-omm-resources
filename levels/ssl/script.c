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
#include "levels/ssl/header.h"

const LevelScript level_ssl_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x07, _ssl_segment_7SegmentRomStart, _ssl_segment_7SegmentRomEnd), 
	LOAD_MIO0(0x0A, _ssl_skybox_mio0SegmentRomStart, _ssl_skybox_mio0SegmentRomEnd), 
	LOAD_MIO0_TEXTURE(0x09, _generic_mio0SegmentRomStart, _generic_mio0SegmentRomEnd), 
	LOAD_MIO0(0x05, _group5_mio0SegmentRomStart, _group5_mio0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group5_geoSegmentRomStart, _group5_geoSegmentRomEnd), 
	LOAD_MIO0(0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0xb, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_6), 
	LOAD_MODEL_FROM_GEO(MODEL_SSL_PALM_TREE, Palmy_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, ssl_geo_0005C0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04, ssl_geo_0005D8), 
	LOAD_MODEL_FROM_GEO(MODEL_SSL_PYRAMID_TOP, ssl_geo_000618), 
	LOAD_MODEL_FROM_GEO(MODEL_SSL_GRINDEL, ssl_geo_000734), 
	LOAD_MODEL_FROM_GEO(MODEL_SSL_SPINDEL, ssl_geo_000764), 
	LOAD_MODEL_FROM_GEO(MODEL_SSL_MOVING_PYRAMID_WALL, ssl_geo_000794), 
	LOAD_MODEL_FROM_GEO(MODEL_SSL_PYRAMID_ELEVATOR, ssl_geo_0007AC), 
	LOAD_MODEL_FROM_GEO(MODEL_SSL_TOX_BOX, ssl_geo_000630), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_WARP_PIPE, Pipesand_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CHECKERBOARD_PLATFORM, Desertp_geo), 

	AREA(1, ssl_area_1),
		WARP_NODE(0x0A, LEVEL_SSL, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_SSL, 0x02, 0x0A, WARP_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE, 0x01, 0x39, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE, 0x01, 0x40, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_BEE, -5058, 366, 3423, 0, 0, 0, 0x00000000, bhvBee),
		OBJECT(MODEL_BEE, -4191, 1578, 1199, 0, 0, 0, 0x00000000, bhvBee),
		OBJECT(MODEL_BEE, 1, 903, 1199, 0, 0, 0, 0x00000000, bhvBee),
		OBJECT(MODEL_BREAKABLE_BOX, 740, 2300, 726, 0, 0, 0, 0x00000000, bhvBreakableBox),
		OBJECT(MODEL_BREAKABLE_BOX, 3799, 3225, -3283, 0, 0, 0, 0x00000000, bhvBreakableBox),
		OBJECT(MODEL_YELLOW_COIN, -5429, 181, 2257, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -5889, 645, 1606, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -5449, 1502, 1167, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_NONE, -4792, -42, 4227, 0, 0, 0, 0x00000000, bhvGoombaTripletSpawner),
		OBJECT(MODEL_CHECKERBOARD_PLATFORM, 1354, 699, 2580, 0, 0, 0, 0x00000000, bhvCheckerboardElevatorGroup),
		OBJECT(MODEL_NONE, 3852, 3418, -3811, 0, 0, 0, 0x01000000, bhvHiddenRedCoinStar),
		OBJECT(MODEL_CASTLE_GROUNDS_WARP_PIPE, 3660, 2895, -6524, 0, 0, 0, 0x000B0000, bhvWarpPipe),
		OBJECT(MODEL_SSL_PALM_TREE, 2995, 1009, -4021, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_SSL_PALM_TREE, 4216, 2248, -4653, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_SSL_PALM_TREE, 4216, 3162, -6606, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_SSL_PALM_TREE, 3001, 3154, -6606, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_SSL_PALM_TREE, -5900, 1751, 1162, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_SSL_PALM_TREE, -4389, -155, 6536, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_SSL_PALM_TREE, -5156, -209, 5588, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_SSL_PALM_TREE, -1598, 320, 2503, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_SSL_PALM_TREE, -1181, 324, 1164, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_SSL_PALM_TREE, 1890, 1417, 3527, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_SSL_PALM_TREE, 1890, 2315, 1632, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_SSL_PALM_TREE, 4830, 2200, 1581, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_NONE, -4857, 200, 6022, 0, -180, 0, 0x000A0000, bhvSpinAirborneWarp),
		MARIO_POS(0x01, -180, -4857, 200, 6022),
		TERRAIN(ssl_area_1_collision),
		MACRO_OBJECTS(ssl_area_1_macro_objs),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0001, /*seq*/ SEQ_STREAMED_SNOW_LAVA),
		TERRAIN_TYPE(TERRAIN_SAND),
	END_AREA(),

	AREA(2, ssl_area_2),
		WARP_NODE(0x0A, LEVEL_SSL, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE, 0x01, 0x39, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE, 0x01, 0x40, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_YELLOW_COIN, -2602, -1835, -5028, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -2602, -1835, -4828, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -2602, -1835, -4613, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -2602, -1835, -4396, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -705, -1835, -5028, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -705, -1835, -4828, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -705, -1835, -4613, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -705, -1835, -4396, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -1495, -1931, -2841, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -1771, -1876, -2280, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -1613, -1385, -4874, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_NONE, -1616, -1605, -5096, 0, 0, 0, 0x00000000, bhvEyerokBoss),
		OBJECT(MODEL_RED_FLAME, -2617, -1559, -3333, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, -719, -1559, -3333, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_NONE, -1638, -1247, -1775, 0, -180, 0, 0x000A0000, bhvSpinAirborneWarp),
		TERRAIN(ssl_area_2_collision),
		MACRO_OBJECTS(ssl_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0004, /*seq*/ SEQ_STREAMED_UNDERGROUND),
		TERRAIN_TYPE(TERRAIN_STONE),
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, -180, -4857, 200, 6022),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
