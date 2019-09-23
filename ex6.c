#include<stdio.h>

int main(){
	
	int m[5][5], i, j, maior = 0, menor = 1000, smaior = 0, smenor = 1000;
	srand(time(NULL));
	
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			m[i][j] = 100 + rand() % 899;
			printf("%d ", m[i][j]);
			
			if(m[i][j] > maior){
				maior = m[i][j];
			}
			
			if(m[i][j] < menor){
				menor = m[i][j];
			}
		}
		printf("\n");
	}
	
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			if(m[i][j] > smaior && m[i][j] != maior){
				smaior = m[i][j];
			}
			
			if(m[i][j] < smenor && m[i][j] != menor){
				smenor = m[i][j];
			}
		}
	}
	
	
	printf("\n\n");
	printf("Segundo maior: %d\n", smaior);
	printf("Segundo menor: %d", smenor);
	
}
