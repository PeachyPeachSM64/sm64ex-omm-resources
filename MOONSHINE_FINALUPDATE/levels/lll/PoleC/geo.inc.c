#include "src/game/envfx_snow.h"

const GeoLayout PoleC_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, PoleC_Inside__mTool_mesh),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, PoleC_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
