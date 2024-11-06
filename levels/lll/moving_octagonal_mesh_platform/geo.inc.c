#include "src/game/envfx_snow.h"

const GeoLayout lll_geo_000B08[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, moving_octagonal_mesh_platform_Donut_mesh),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, moving_octagonal_mesh_platform_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
