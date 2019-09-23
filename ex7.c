#include<stdio.h>

int main(){
	
	int m[7][7], i, j;
	srand(time(NULL));
	
	for(i = 0; i < 7; i++){
		for(j = 0; j < 7; j++){
			m[i][j] = 10 + rand() % 40;
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}

	printf("\n\n");
	
	for(i = 0; i < 7; i++){
		for(j = 0; j < 7; j++){
			if(m[i][j] % 2 == 0){
				m[i][j] = 0;
			}
			printf("%2d ", m[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n");
	
	for(i = 0; i < 7; i++){
		for(j = 0; j < 7; j++){
			if(m[i][j] % 2 != 0){
				m[i][j] = 1;
			}
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}	
}
