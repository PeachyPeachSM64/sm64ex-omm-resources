void scroll_hmc_dl_Transparent_mesh_vtx_1() {
	int i = 0;
	int count = 8;
	int width = 508 * 0x20;
	int height = 504 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(hmc_dl_Transparent_mesh_vtx_1);

	deltaX = (int)(0.6100001931190491 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;

}
void scroll_hmc() {
	scroll_hmc_dl_Transparent_mesh_vtx_1();

}
