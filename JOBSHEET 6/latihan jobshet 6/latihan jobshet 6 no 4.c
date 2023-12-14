//created by serly eka putri_23343083
#include <stdio.h>

void main(){
	
	char ulangi = 'Y';
	int counter = 0;
	
	do {
		printf("Apakah kamu mau mengulang?\n");
		printf("jawab(y/t): ");
		scanf(" %c", &ulangi);
		
		// increment counter
		counter++;
	} while(ulangi == 'y');
	
	printf("\n\n=====\n");
	printf("perulangan selesai!\n");
	printf("Kamu mengulang sebanyak %i kali.\n", counter);
}