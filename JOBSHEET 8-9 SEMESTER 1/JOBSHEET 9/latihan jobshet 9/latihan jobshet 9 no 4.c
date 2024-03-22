// created by serly eka putri_23343083
#include <stdio.h>

void add_score(int score){
	score = score + 5;
}
void main(){
	int score = 0;
	
	printf("score sebelum di ubah: %d\n", score);
	add_score(score);
	printf("score setelah di ubah: %d\n", score);
}