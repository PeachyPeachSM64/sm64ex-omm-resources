#include "src/game/envfx_snow.h"

const GeoLayout Pine1_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, Pine1_polygon0_mesh),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, Pine1_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
