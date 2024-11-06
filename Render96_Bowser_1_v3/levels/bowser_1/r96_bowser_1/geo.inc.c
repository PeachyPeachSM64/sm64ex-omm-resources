#include "src/game/envfx_snow.h"

const GeoLayout r96_bowser_1_fight[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, r96_bowser_1_000_displaylist_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, r96_bowser_1_000_displaylist_mesh_layer_5),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, r96_bowser_1_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, r96_bowser_1_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ASM(0, geo_envfx_main),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
