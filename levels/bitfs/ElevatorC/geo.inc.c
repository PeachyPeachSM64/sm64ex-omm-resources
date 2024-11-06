#include "src/game/envfx_snow.h"

const GeoLayout ElevatorC_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, ElevatorC_OneSideStep4x4M__OneSideStep4x4MMat00_mesh),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, ElevatorC_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
