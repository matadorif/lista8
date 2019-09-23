#include<stdio.h>
#include<stdlib.h>

int main(){
	
	float m[6][6];
	int i, j;
	srand(time(NULL));
	
	for(i = 0; i < 6; i++){
		for(j = 0; j < 6; j++){
			m[i][j] = -1.0 * (float)(rand()) / (float)(RAND_MAX) + (float)(rand()) / (float)(RAND_MAX);
			printf("%f ", m[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n");
	
	for(i = 0; i < 6; i++){
		for(j = 0; j < 6; j++){
			m[i][j] = m[i][j] * 2;
			printf("%f ", m[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n");
	
	for(i = 0; i < 6; i++){
		for(j = 0; j < 6; j++){
			m[i][j] = m[i][j] - 1.0;
			printf("%f ", m[i][j]);
		}
		printf("\n");
	}
	
	
	
}
