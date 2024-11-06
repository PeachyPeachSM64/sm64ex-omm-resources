void scroll_wdw_dl_Back_mesh_vtx_0() {
	int i = 0;
	int count = 248;
	int width = 32 * 0x20;
	int height = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(wdw_dl_Back_mesh_vtx_0);

	deltaX = (int)(0.05999999865889549 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;

}
void scroll_wdw_dl_Transparent_mesh_vtx_3() {
	int i = 0;
	int count = 4;
	int width = 508 * 0x20;
	int height = 504 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(wdw_dl_Transparent_mesh_vtx_3);

	deltaX = (int)(1.029999852180481 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;

}
void scroll_wdw_dl_Transparenty_mesh_vtx_0() {
	int i = 0;
	int count = 4;
	int width = 508 * 0x20;
	int height = 504 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(wdw_dl_Transparenty_mesh_vtx_0);

	deltaX = (int)(1.029999852180481 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;

}
void scroll_wdw() {
	scroll_wdw_dl_Back_mesh_vtx_0();
	scroll_wdw_dl_Transparent_mesh_vtx_3();
	scroll_wdw_dl_Transparenty_mesh_vtx_0();

}
