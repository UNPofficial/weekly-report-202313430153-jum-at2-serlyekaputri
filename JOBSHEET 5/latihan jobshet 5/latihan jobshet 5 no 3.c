//created by serly eka putri_23343083
#include <stdio.h>

void main(){
	int nilai;
	int grade;
	
	printf("=== program grade nilai ===\n");
	printf("Inputkan nilai: ");
	scanf("%i", &nilai);
	
	// menggunakan percabanga if/else/if
	if(nilai >= 90){
		grade = 'A';
	}else if(nilai >= 80){
	 	grade ='B'; // seharusnya B+
	}else if(nilai >= 70){
		grade = 'B';
	}else if(nilai >= 60){
		grade = 'c'; // seharusnya c+
	}else if(nilai >= 50){
		grade = 'c';
	}else if(nilai >= 40){
		grade = 'd';
	}else if(nilai >= 30){
		grade = 'E';
	}else {
		grade = 'F';
	}
	
	printf("Nilai: %i\n", nilai);
	printf("Grade anda: %c\n", grade);
}