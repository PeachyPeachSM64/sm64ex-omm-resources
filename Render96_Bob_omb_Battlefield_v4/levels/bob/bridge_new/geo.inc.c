#include "src/game/envfx_snow.h"

const GeoLayout bridgegeo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_CULLING_RADIUS(1200),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bridge_new_000_displaylist_mesh_layer_1),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, bridge_new_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
