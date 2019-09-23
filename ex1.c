#include<stdio.h>

int main(){
	
	srand(time(NULL));
	
	int m[10][10], i, j;
	
	for(i = 0; i < 10; i++){
		for(j = 0; j < 10; j++){
			m[i][j] = 10 + rand() % 89;
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}
	
	
}
