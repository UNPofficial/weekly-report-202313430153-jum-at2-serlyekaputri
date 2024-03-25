// created by serly eka putri_23343083
#include <stdio.h>

void main()
{
	char buff[255]; 
	char text[255];
	FILE *fptr;
	
	// membuka file 
	fptr = fopen("puisi.txt","W");
	
	// mengammbil input dari user
	printf("inputkan isi file: ");
	fgets(text, sizeof(text), stdin);
	
	// menulis ke text ke file
	fputs(text, fptr);
	
	printf("File berhasi ditulis\n");
	
	// tutup file 
	fclose(fptr);
}