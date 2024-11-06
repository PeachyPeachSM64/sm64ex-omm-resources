Lights1 Desertp_P1_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 Desertp_p2_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx Desertp_PBackRock_rgba32_aligner[] = {gsSPEndDisplayList()};
u8 Desertp_PBackRock_rgba32[] = {
	#include "levels/ssl/PBackRock.rgba32.inc.c"
};

Gfx Desertp_PSand1_rgba32_aligner[] = {gsSPEndDisplayList()};
u8 Desertp_PSand1_rgba32[] = {
	#include "levels/ssl/PSand1.rgba32.inc.c"
};

Vtx Desertp_Cube_001_mesh_vtx_0[64] = {
	{{{-365, -31, 166},0, {27, 593},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-365, 22, 166},0, {27, 365},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-365, 22, -134},0, {1405, 365},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-365, -31, -134},0, {1405, 593},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-365, -31, -134},0, {-890, 593},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-365, 22, -134},0, {-890, 365},{0x0, 0x0, 0x81, 0xFF}}},
	{{{135, 22, -134},0, {1410, 365},{0x0, 0x0, 0x81, 0xFF}}},
	{{{135, -31, -134},0, {1410, 593},{0x0, 0x0, 0x81, 0xFF}}},
	{{{135, -31, -134},0, {1405, 593},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{135, 22, -134},0, {1405, 365},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{135, 22, 166},0, {27, 365},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{135, -31, 166},0, {27, 593},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{135, -31, 166},0, {1410, 593},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{135, 22, 166},0, {1410, 365},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-365, 22, 166},0, {-890, 365},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-365, -31, 166},0, {-890, 593},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{105, 22, -104},0, {1272, 365},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-335, 22, -104},0, {-752, 365},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-335, 16, -104},0, {-752, 390},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{105, 16, -104},0, {1272, 390},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{105, 22, 136},0, {165, 365},{0x81, 0x0, 0x0, 0xFF}}},
	{{{105, 22, -104},0, {1267, 365},{0x81, 0x0, 0x0, 0xFF}}},
	{{{105, 16, -104},0, {1267, 390},{0x81, 0x0, 0x0, 0xFF}}},
	{{{105, 16, 136},0, {165, 390},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-335, 22, -104},0, {1267, 365},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-335, 22, 136},0, {165, 365},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-335, 16, 136},0, {165, 390},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-335, 16, -104},0, {1267, 390},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{105, -31, 136},0, {1272, 593},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-335, -31, 136},0, {-752, 593},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-335, -28, 136},0, {-752, 581},{0x0, 0x0, 0x81, 0xFF}}},
	{{{105, -28, 136},0, {1272, 581},{0x0, 0x0, 0x81, 0xFF}}},
	{{{105, -31, -104},0, {1267, 593},{0x81, 0x0, 0x0, 0xFF}}},
	{{{105, -31, 136},0, {165, 593},{0x81, 0x0, 0x0, 0xFF}}},
	{{{105, -28, 136},0, {165, 581},{0x81, 0x0, 0x0, 0xFF}}},
	{{{105, -28, -104},0, {1267, 581},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-335, -31, -104},0, {-752, 593},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{105, -31, -104},0, {1272, 593},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{105, -28, -104},0, {1272, 581},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-335, -28, -104},0, {-752, 581},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-335, -31, 136},0, {165, 593},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-335, -31, -104},0, {1267, 593},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-335, -28, -104},0, {1267, 581},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-335, -28, 136},0, {165, 581},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-335, 22, 136},0, {-752, 365},{0x0, 0x0, 0x81, 0xFF}}},
	{{{105, 22, 136},0, {1272, 365},{0x0, 0x0, 0x81, 0xFF}}},
	{{{105, 16, 136},0, {1272, 390},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-335, 16, 136},0, {-752, 390},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-335, -31, -104},0, {-752, 8},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-335, -31, 136},0, {-752, 1050},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-365, -31, 166},0, {-890, 1180},{0x0, 0x81, 0x0, 0xFF}}},
	{{{135, -31, 166},0, {1410, 1180},{0x0, 0x81, 0x0, 0xFF}}},
	{{{105, -31, 136},0, {1272, 1050},{0x0, 0x81, 0x0, 0xFF}}},
	{{{135, -31, -134},0, {1410, -122},{0x0, 0x81, 0x0, 0xFF}}},
	{{{105, -31, -104},0, {1272, 8},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-365, -31, -134},0, {-890, -122},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-335, 22, 136},0, {-752, 1050},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-335, 22, -104},0, {-752, 8},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-365, 22, -134},0, {-890, -122},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{135, 22, -134},0, {1410, -122},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{105, 22, -104},0, {1272, 8},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{135, 22, 166},0, {1410, 1180},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{105, 22, 136},0, {1272, 1050},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-365, 22, 166},0, {-890, 1180},{0x0, 0x7F, 0x0, 0xFF}}},
};

Gfx Desertp_Cube_001_mesh_tri_0[] = {
	gsSPVertex(Desertp_Cube_001_mesh_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(Desertp_Cube_001_mesh_vtx_0 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(Desertp_Cube_001_mesh_vtx_0 + 32, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(Desertp_Cube_001_mesh_vtx_0 + 48, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 3, 2, 0),
	gsSP1Triangle(1, 4, 3, 0),
	gsSP1Triangle(4, 5, 3, 0),
	gsSP1Triangle(4, 6, 5, 0),
	gsSP1Triangle(6, 7, 5, 0),
	gsSP1Triangle(6, 0, 7, 0),
	gsSP1Triangle(0, 2, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(9, 11, 10, 0),
	gsSP1Triangle(9, 12, 11, 0),
	gsSP1Triangle(12, 13, 11, 0),
	gsSP1Triangle(12, 14, 13, 0),
	gsSP1Triangle(14, 15, 13, 0),
	gsSP1Triangle(14, 8, 15, 0),
	gsSP1Triangle(8, 10, 15, 0),
	gsSPEndDisplayList(),
};Vtx Desertp_Cube_001_mesh_vtx_1[8] = {
	{{{-335, -28, -104},0, {-16, 1008},{0x0, 0x81, 0x0, 0xFF}}},
	{{{105, -28, -104},0, {1008, 1008},{0x0, 0x81, 0x0, 0xFF}}},
	{{{105, -28, 136},0, {1008, 450},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-335, -28, 136},0, {-16, 450},{0x0, 0x81, 0x0, 0xFF}}},
	{{{105, 16, -104},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-335, 16, -104},0, {1008, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-335, 16, 136},0, {1008, 450},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{105, 16, 136},0, {-16, 450},{0x0, 0x7F, 0x0, 0xFF}}},
};

Gfx Desertp_Cube_001_mesh_tri_1[] = {
	gsSPVertex(Desertp_Cube_001_mesh_vtx_1 + 0, 8, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSPEndDisplayList(),
};


Gfx mat_Desertp_P1[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_32b, 32, Desertp_PBackRock_rgba32),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 8, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 124, 124),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(Desertp_P1_lights),
	gsSPEndDisplayList(),
};


Gfx mat_Desertp_p2[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_32b, 32, Desertp_PSand1_rgba32),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 8, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 124, 124),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(Desertp_p2_lights),
	gsSPEndDisplayList(),
};


Gfx Desertp_Cube_001_mesh[] = {
	gsSPDisplayList(mat_Desertp_P1),
	gsSPDisplayList(Desertp_Cube_001_mesh_tri_0),
	gsSPDisplayList(mat_Desertp_p2),
	gsSPDisplayList(Desertp_Cube_001_mesh_tri_1),
	gsSPEndDisplayList(),
};



Gfx Desertp_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};
