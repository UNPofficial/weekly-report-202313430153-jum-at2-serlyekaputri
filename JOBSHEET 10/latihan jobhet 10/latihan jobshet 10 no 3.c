// created by serly eka putri_23343083
#include <stdio.h>

enum hari {SENIN, SELASA, RABU, KAMIS, JUMAT, SABTU, MINGGU};

void main() {
	enum hari sekarang;
	sekarang = RABU;
	printf("Ukuran variabel enum: %d bytes\n", sizeof(sekarang));
}
