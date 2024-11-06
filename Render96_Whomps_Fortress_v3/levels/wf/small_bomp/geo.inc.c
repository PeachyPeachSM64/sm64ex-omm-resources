// 0x0E000A00
const GeoLayout wf_geo_000A00[] = {
   GEO_CULLING_RADIUS(500),
   GEO_OPEN_NODE(),
      GEO_RENDER_RANGE(-2048, 5000),
      GEO_OPEN_NODE(),
         GEO_DISPLAY_LIST(LAYER_OPAQUE, bompnew_000_displaylist_mesh_layer_1),
      GEO_CLOSE_NODE(),
      GEO_RENDER_RANGE(5000, 32767),
      GEO_OPEN_NODE(),
         GEO_DISPLAY_LIST(LAYER_OPAQUE, bompnew_000_displaylist_001_mesh_layer_1),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
   GEO_END(),
};
