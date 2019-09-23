#include<stdio.h>

int main(){
	
	int m[5][5], i, j, somapos = 0, somane = 0;
	srand(time(NULL));
	
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			m[i][j] = rand() % 10 * -1 + rand() % 10;
			printf("%3d ", m[i][j]);
			if(m[i][j] < 0){
				somane = somane + m[i][j];
			}else{
				somapos = somapos + m[i][j];
			}
		}
		printf("\n");
	}
	
	printf("\n\n");
	printf("Soma positivos: %d\n", somapos);
	printf("Soma negativos: %d", somane);
	
}
