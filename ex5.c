#include<stdio.h>

int main(){
	
	int m[10][10], i, j, menor = 101, maior = -1;
	srand(time(NULL));
	
	for(i = 0; i < 10; i++){
		for(j = 0; j < 10; j++){
			m[i][j] = rand() % 100;
			
			if(m[i][j] > maior){
				maior = m[i][j];
			}
			
			if(m[i][j] < menor){
				menor = m[i][j];
			}
			
			printf("%2d ", m[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n");
	printf("Maior: %d\n", maior);
	printf("Menor: %d", menor);
	
}
