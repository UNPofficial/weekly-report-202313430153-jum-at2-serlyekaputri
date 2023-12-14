// created by serly eka putri_23343083
#include <stdio.h>

void kali_dua(int *num){
	*num = *num * 2;
}

void main(){
	int angka = 9;
	
	//memanggil fungsi
	kali_dua(&angka);
	
	// mencetak isi variabel
	// setelah fungsi di panggil
	printf("isi variabel angka = %d\n", angka);
}