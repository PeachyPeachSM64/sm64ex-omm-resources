#include "src/game/envfx_snow.h"

const GeoLayout newbox[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_CULLING_RADIUS(300),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, newbox_000_displaylist_mesh_layer_1),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, newbox_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
