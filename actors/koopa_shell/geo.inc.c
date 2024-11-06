// 0x0F000AB0
const GeoLayout koopa_shell_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(0, 200, 70),
		GEO_OPEN_NODE(),
			GEO_SCALE(LAYER_FORCE, 65536),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, koopa_shell_000_displaylist_mesh),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, koopa_shell_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};

// 0x0F000ADC
const GeoLayout koopa_shell2_geo[] = {
   GEO_SHADOW(SHADOW_CIRCLE_4_VERTS, 0xC8, 70),
   GEO_OPEN_NODE(),
      GEO_SCALE(0x00, 16384),
      GEO_OPEN_NODE(),
         GEO_DISPLAY_LIST(LAYER_OPAQUE, koopa_shell_seg8_dl_08027420),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
   GEO_END(),
};

// 0x0F000B08
const GeoLayout koopa_shell3_geo[] = {
   GEO_SHADOW(SHADOW_CIRCLE_4_VERTS, 0xC8, 70),
   GEO_OPEN_NODE(),
      GEO_SCALE(0x00, 16384),
      GEO_OPEN_NODE(),
         GEO_DISPLAY_LIST(LAYER_OPAQUE, koopa_shell_seg8_dl_080273C8),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
   GEO_END(),
};
