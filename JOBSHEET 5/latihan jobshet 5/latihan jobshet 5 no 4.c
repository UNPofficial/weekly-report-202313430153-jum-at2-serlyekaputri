//created by serly eka putri_23343083
#include <stdio.h>

void main(){
	
	char grade;
	
	printf("Inputkan grade: ");
	scanf("%c", &grade);
	
	switch (toupper(grade)){
		case 'A':
			printf("luar biasa!\n");
			break;
		case 'B':
		case 'C':
			printf("Bagus!\n");
			break;
		case 'D':
			printf("Anda lulus\n");
			break;
		case 'E':
		case 'F':
			printf("Anda remidi\n");
			break;
		default:
			printf("Grade salah!\n");
			
	}
	
}