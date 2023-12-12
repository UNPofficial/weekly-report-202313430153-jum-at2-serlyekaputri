// created by serly eka putri_23343083
#include <stdio.h>

void main() {
	// membuat variabel score
	int score = 0;
	
	// membuat pointer dan referensikan dengan alamat dari variabel score
	int *p_score = &score;
	
	// mengakses data variabel score dari pointer
	printf("isi *p_pointer = %d\n", score);
	
	printf("isi score awal = %d\n", score);
	
	// mengubah data variabel score dari pointer
	*p_score = 5;
	
	// melihat isi variabel score
	printf("isi score setelah di ubah = %d\n", score);
}