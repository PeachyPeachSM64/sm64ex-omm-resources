void scroll_bitfs_dl_Back_mesh_vtx_0() {
	int i = 0;
	int count = 14;
	int width = 32 * 0x20;
	int height = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(bitfs_dl_Back_mesh_vtx_0);

	deltaX = (int)(0.04000017046928406 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;

}
void scroll_bitfs_dl_Back_mesh_vtx_1() {
	int i = 0;
	int count = 187;
	int width = 32 * 0x20;
	int height = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(bitfs_dl_Back_mesh_vtx_1);

	deltaX = (int)(0.05999999865889549 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;

}
void scroll_bitfs_dl_Transparent_mesh_vtx_1() {
	int i = 0;
	int count = 842;
	int width = 128 * 0x20;
	int height = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(bitfs_dl_Transparent_mesh_vtx_1);

	deltaX = (int)(0.4300004541873932 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;

}
void scroll_bitfs() {
	scroll_bitfs_dl_Back_mesh_vtx_0();
	scroll_bitfs_dl_Back_mesh_vtx_1();
	scroll_bitfs_dl_Transparent_mesh_vtx_1();

}
