Gfx doornew_GateStar_rgba32_aligner[] = {gsSPEndDisplayList()};
u8 doornew_GateStar_rgba32[] = "levels/wf/GateStar.rgba32";

Vtx doornew_000_displaylist_mesh_layer_1_vtx_0[4] = {
	{{{0, 0, -107},0, {-180, 1215},{0x81, 0x0, 0x0, 0xFF}}},
	{{{0, 0, 108},0, {-180, 1148},{0x81, 0x0, 0x0, 0xFF}}},
	{{{0, 205, 108},0, {-241, 1148},{0x81, 0x0, 0x0, 0xFF}}},
	{{{0, 205, -107},0, {-241, 1215},{0x81, 0x0, 0x0, 0xFF}}},
};

Gfx doornew_000_displaylist_mesh_layer_1_tri_0[] = {
	gsSPVertex(doornew_000_displaylist_mesh_layer_1_vtx_0 + 0, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSPEndDisplayList(),
};


Gfx mat_doornew_Material_014_f3d[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, ENVIRONMENT, 0, 0, 0, TEXEL0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_32b, 32, doornew_GateStar_rgba32),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 8, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 124, 124),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx doornew_000_displaylist_mesh_layer_1[] = {
	gsSPDisplayList(mat_doornew_Material_014_f3d),
	gsSPDisplayList(doornew_000_displaylist_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx doornew_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

