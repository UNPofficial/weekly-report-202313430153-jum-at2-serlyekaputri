// created by serly eka putri_23343083
#include <stdio.h>

void main()
{
	char buff[255];
	char text[255];
	FILE *fptr;
	
	// membuka isi file untuk ditulis 
	fptr = fopen("puisi.txt","w");
	
	// mengambil input dari user
	printf("Inputkan isi file: ");
	fgets(text, sizeof(text), stdin);
	
	// menulis ke text ke file 
	fputs(text, fptr);
	
	printf("File berhasil ditulis");
	
	// tutup file setelah ditulis
	fclose(fptr);
	
	// buka kembali file untuk di baca
	fptr = fopen("puisi.txt","w");
	
	// baca isi file dengan gets lalu simpam ke buff
	while(fgets(buff, sizeof(buff), fptr)){
		printf("Isi filenya sekarang: %s", buff);
	}
	
	//tutup file
	fclose(fptr);	
}