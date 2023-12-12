//created by serly eka putri_23343083
#include <stdio.h>

void main(){
	char ulangi = 'Y';
	int counter = 0;
	
	// perulangan while
	while(ulangi == 'Y'){
		printf("Apakah kamu mau mengulang?\n");
		printf("jawab(y/t): ");
		scanf(" %c", &ulangi);
		
		// increment counter
		counter++;
	}
	
	printf("\n\n--------\n");
	printf("perulangan selesai!\n");
	printf("Kamu mengulang sebanyak %i kali.\n", counter);
}