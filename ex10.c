#include<stdio.h>

int main(){
	
	srand(time(NULL));
	
	int m[3][3], i, j;
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			m[i][j] = rand() % 2;
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			if(m[i][j] == m[i+1]){
				printf("Linha %d tem valores iguais. Valor da linha: %d\n", i+1, m[i][j]);
				break;
			}
			if(m[i][j] == m[i][j+1]){
				printf("Coluna %d tem valores iguais. Valor da coluna: %d\n", j+1, m[i][j]);
				break;
			}
		}
	}
	
	
}
