// created by serly eka putri_23343083
#include <stdio.h>

void main(){
	// membuat array
	int nilai[5] = {33, 44, 55, 66, 77};
	
	// mengambil banyaknya isi array
	int length = sizeof(nilai) / sizeof(*nilai);
	
	printf("Banyaknya isi array nilai: %d\n", length);
}