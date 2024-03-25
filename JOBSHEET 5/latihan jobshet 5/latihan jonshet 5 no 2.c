//created by serly eka putri_23343083
#include <stdio.h>

void main(){
	// membuat array karakter untuk menhimpan password
	char password[30];
	
	printf("=== program login ===\n");
	printf("Masukkan password: ");
	scanf("%s", &password);
	
	//percabangan ig/ esle
	if(strcmp(password, "kopi") == 0 ){
		printf("Selamat datang bos!\n");
	}else{
		printf("password salah, coba lagi!\n");
	}
	
	printf("Terima kasih sudah menggunakan aplikasi ini!\n");
}