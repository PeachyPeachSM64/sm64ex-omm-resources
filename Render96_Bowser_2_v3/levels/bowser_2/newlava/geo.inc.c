#include "src/game/envfx_snow.h"

const GeoLayout lava2[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, newlava_000_displaylist_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, newlava_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ASM(12, geo_envfx_main),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
