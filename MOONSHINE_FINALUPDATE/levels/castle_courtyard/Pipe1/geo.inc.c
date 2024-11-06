#include "src/game/envfx_snow.h"

const GeoLayout Pipe1_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, Pipe1_skinned_mesh),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, Pipe1_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
