void scroll_ssl_dl_Back_mesh_vtx_4() {
	int i = 0;
	int count = 124;
	int width = 32 * 0x20;
	int height = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(ssl_dl_Back_mesh_vtx_4);

	deltaX = (int)(0.03999999910593033 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;

}
void scroll_ssl_dl_Transparent_mesh_vtx_0() {
	int i = 0;
	int count = 8;
	int width = 250 * 0x20;
	int height = 251 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(ssl_dl_Transparent_mesh_vtx_0);

	deltaY = (int)(0.1600000411272049 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;

}
void scroll_ssl_dl_Transparent2_mesh_vtx_0() {
	int i = 0;
	int count = 12;
	int width = 250 * 0x20;
	int height = 251 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(ssl_dl_Transparent2_mesh_vtx_0);

	deltaY = (int)(0.1600000411272049 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;

}
void scroll_ssl() {
	scroll_ssl_dl_Back_mesh_vtx_4();
	scroll_ssl_dl_Transparent_mesh_vtx_0();
	scroll_ssl_dl_Transparent2_mesh_vtx_0();

}
