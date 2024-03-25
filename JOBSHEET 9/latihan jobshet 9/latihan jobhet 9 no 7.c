// created by serly eka putri_23343083
#include <stdio.h>

void main(){
	printf("## program antrian cs ##\n");
	
	char no_antrian[5] = {'A', 'B', 'C', 'D', 'E'};
	
	// menggunakan pointer
	char *ptr_current = &no_antrian;
	
	for(int i = 0; i < 5; i++);{
		printf("pelanggan dengan no antrian %c silahkan ke loket!\n", *ptr_current);
		printf("saat ini cs sedang melayani : %c\n", *ptr_current);
		printf("-----Tekan enter untuk next-----");
		getchar();
		ptr_current++;
	}
	
	printf("selesai");
}