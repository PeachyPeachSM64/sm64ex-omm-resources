void scroll_bits_dl_Transparent_mesh_vtx_0() {
	int i = 0;
	int count = 522;
	int width = 256 * 0x20;
	int height = 256 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(bits_dl_Transparent_mesh_vtx_0);

	deltaX = (int)(0.07000046968460083 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;

}
void scroll_bits_dl_Transparent_mesh_vtx_1() {
	int i = 0;
	int count = 24;
	int width = 64 * 0x20;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	static int timeY;
	float amplitudeY = 0.490000456571579;
	float frequencyY = 0.49000000953674316;
	float offsetY = 0.9899998903274536;
	Vtx *vertices = segmented_to_virtual(bits_dl_Transparent_mesh_vtx_1);

	deltaY = (int)(amplitudeY * frequencyY * coss((frequencyY * timeY + offsetY) * (1024 * 16 - 1) / 6.28318530718) * 0x20);

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
	timeY += 1;

}
void scroll_bits() {
	scroll_bits_dl_Transparent_mesh_vtx_0();
	scroll_bits_dl_Transparent_mesh_vtx_1();

}
