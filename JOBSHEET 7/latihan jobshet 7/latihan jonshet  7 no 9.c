// created by serly eka putri_23343083
#include <stdio.h>
void main(){
	
	char title[] = "Belajar string.h pada bahasa c";
	char title_copy[20];
	
	// copy string title ke title_copy
	strcpy(title_copy, title);
	
	// maka sekarang title_copy akan berisi:
	printf("Isi title_copy\t: %s\n", title_copy);
	
}