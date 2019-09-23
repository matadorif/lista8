#include<stdio.h>

int main(){
	
	srand(time(NULL));
	
	int m[10][10], i, j, somalinha[10] = {0,0,0,0,0,0,0,0,0,0}, somacoluna[10] = {0,0,0,0,0,0,0,0,0,0}, soma = 0;
	
	for(i = 0; i < 10; i++){
		for(j = 0; j < 10; j++){
			if(i <= 8 && j <= 8){
				m[i][j] = rand() % 9;
				somalinha[i] += m[i][j];
				somacoluna[j] += m[i][j];
			}else{
				m[i][9] = somalinha[i];
				m[9][j] = somacoluna[j];
				soma = soma + m[i][9];
				m[9][9] = soma;
			}
		}
	}
	
	for(i = 0; i < 10; i++){
		for(j = 0; j < 10; j++){
			printf("%2d ", m[i][j]);
		}
		printf("\n");
	}
	
}
