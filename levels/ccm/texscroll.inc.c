void scroll_ccm_dl_Water_mesh_vtx_0() {
	int i = 0;
	int count = 15;
	int width = 508 * 0x20;
	int height = 504 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(ccm_dl_Water_mesh_vtx_0);

	deltaX = (int)(0.1300000250339508 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;

}
void scroll_ccm_dl_Burning_mesh_vtx_0() {
	int i = 0;
	int count = 120;
	int width = 508 * 0x20;
	int height = 504 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(ccm_dl_Burning_mesh_vtx_0);

	deltaY = (int)(0.3100000321865082 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;

}
void scroll_ccm_dl_Lava_mesh_vtx_0() {
	int i = 0;
	int count = 83;
	int width = 508 * 0x20;
	int height = 504 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(ccm_dl_Lava_mesh_vtx_0);

	deltaY = (int)(0.1299997717142105 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;

}
void scroll_ccm() {
	scroll_ccm_dl_Water_mesh_vtx_0();
	scroll_ccm_dl_Burning_mesh_vtx_0();
	scroll_ccm_dl_Lava_mesh_vtx_0();

}
