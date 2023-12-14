//created by serly eka putri_23343083
#include <stdio.h>

void main(){
	char username[30], password[30];
	
	printf("=== Welcome to awesome program ===\n");
	printf("Username: ");
	scanf("%s", &username);
	printf("password: ");
	scanf("%s", &password);
	
	if(strcmp(username, "petanikode") == 0){
		if(strcmp(password, "kopi") == 0){
		} else{
			printf("password salah, coba lagi!\n");
		}
	}else{
		printf("Anda belum terdaftar\n");
	}
}