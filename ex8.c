#include<stdio.h>
#include<stdlib.h>

int main(){
	
	float m[6][6], soma = 0.0;
	int i, j;
	srand(time(NULL));
	
	for(i = 0; i < 6; i++){
		for(j = 0; j < 6; j++){
			m[i][j] = (float)(rand()) / (float)(RAND_MAX);
			soma = soma + m[i][j];
			printf("%f ", m[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\nMedia: %f", soma / 36.0);
	
}
