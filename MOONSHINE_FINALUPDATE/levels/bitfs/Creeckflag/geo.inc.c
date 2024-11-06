#include "src/game/envfx_snow.h"

const GeoLayout Creeckflag_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, Creeckflag_CheckpointFlag__CheckpointFlagBodyMat00_mesh),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, Creeckflag_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
