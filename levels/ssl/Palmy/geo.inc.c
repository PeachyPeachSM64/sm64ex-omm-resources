#include "src/game/envfx_snow.h"

const GeoLayout Palmy_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, Palmy_palmtree_mesh),
		GEO_DISPLAY_LIST(LAYER_ALPHA, Palmy_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
