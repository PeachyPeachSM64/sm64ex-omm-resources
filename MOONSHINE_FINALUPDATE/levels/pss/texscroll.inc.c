void scroll_pss_dl_Water_1_mesh_vtx_0() {
	int i = 0;
	int count = 4;
	int width = 512 * 0x20;
	int height = 512 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(pss_dl_Water_1_mesh_vtx_0);

	deltaX = (int)(0.4300004541873932 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;

}
void scroll_pss_dl_Water_1_mesh_vtx_1() {
	int i = 0;
	int count = 4;
	int width = 512 * 0x20;
	int height = 512 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(pss_dl_Water_1_mesh_vtx_1);

	deltaY = (int)(0.7000002861022949 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;

}
void scroll_pss() {
	scroll_pss_dl_Water_1_mesh_vtx_0();
	scroll_pss_dl_Water_1_mesh_vtx_1();

}
