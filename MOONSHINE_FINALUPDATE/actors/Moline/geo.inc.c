#include "src/game/envfx_snow.h"

const GeoLayout Moline_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, Moline_pCube38__mm_windmill01_mesh),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, Moline_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
