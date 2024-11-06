#include "src/game/envfx_snow.h"

const GeoLayout ClearPine_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, ClearPine_Tree_001_mesh),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, ClearPine_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
