#include "src/game/envfx_snow.h"

const GeoLayout towerplatform[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_CULLING_RADIUS(650),
		GEO_OPEN_NODE(),
			GEO_SHADOW(0, 150, 420),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, towerplatform_000_displaylist_mesh_layer_1),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, towerplatform_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
