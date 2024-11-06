#include "src/game/envfx_snow.h"

const GeoLayout exclamation_box_000_switch_opt1[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, exclamation_box_000_displaylist_mesh_mat_override_green_0),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout exclamation_box_000_switch_opt2[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, exclamation_box_000_displaylist_mesh_mat_override_Blue_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout exclamation_box_000_switch_opt3[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, exclamation_box_000_displaylist_mesh_mat_override_Yellow_2),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout exclamation_box_000_switch_opt4[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, exclamation_box_000_displaylist_mesh_mat_override_red_3),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout exclamation_box_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_CULLING_RADIUS(300),
		GEO_OPEN_NODE(),
			GEO_SHADOW(10, 180, 70),
			GEO_OPEN_NODE(),
				GEO_SWITCH_CASE(4, geo_switch_anim_state),
				GEO_OPEN_NODE(),
					GEO_NODE_START(),
					GEO_OPEN_NODE(),
						GEO_DISPLAY_LIST(LAYER_OPAQUE, exclamation_box_000_displaylist_mesh),
					GEO_CLOSE_NODE(),
					GEO_BRANCH(1, exclamation_box_000_switch_opt1),
					GEO_BRANCH(1, exclamation_box_000_switch_opt2),
					GEO_BRANCH(1, exclamation_box_000_switch_opt3),
					GEO_BRANCH(1, exclamation_box_000_switch_opt4),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, exclamation_box_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
