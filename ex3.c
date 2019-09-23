#include<stdio.h>

int main(){
	
	int m[5][5], i, j;
	srand(time(NULL));
	
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			m[i][j] = rand() % 10 * -1 + rand() % 10;
			printf("%3d ", m[i][j]);
		}
		printf("\n");
	}
	
}
