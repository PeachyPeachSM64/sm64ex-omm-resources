void scroll_castle_courtyard_dl_Back_mesh_vtx_1() {
	int i = 0;
	int count = 91;
	int width = 256 * 0x20;
	int height = 256 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(castle_courtyard_dl_Back_mesh_vtx_1);

	deltaX = (int)(0.18000000715255737 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;

}
void scroll_castle_courtyard_dl_Shadow_mesh_vtx_1() {
	int i = 0;
	int count = 8;
	int width = 64 * 0x20;
	int height = 64 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(castle_courtyard_dl_Shadow_mesh_vtx_1);

	deltaX = (int)(0.18000000715255737 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;

}
void scroll_castle_courtyard() {
	scroll_castle_courtyard_dl_Back_mesh_vtx_1();
	scroll_castle_courtyard_dl_Shadow_mesh_vtx_1();

}
