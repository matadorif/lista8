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
		if(m[i][0] == m[i][1] && m[i][0] == m[i][2]){
			printf("Linha %d tem valores iguais. Valor da linha: %d\n", i+1, m[i][0]);
		}
		
		if(m[0][i] == m[1][i] && m[0][i] == m[2][i]){
			printf("Coluna %d tem valores iguais. Valor da coluna: %d\n", i+1, m[0][j]);
		}
		
	}
	
	
}
