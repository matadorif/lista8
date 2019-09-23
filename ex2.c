#include<stdio.h>

int main(){
	
	int m[6][6], i, j;
	
	for(i = 0; i < 6; i++){
		for(j = 0; j < 6; j++){
			m[i][j] = 0;
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n");
	
	for(i = 0; i < 6; i++){
		for(j = 0; j < 6; j++){
			if(i == j){
				m[i][j] = 1;
			}
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}
	
}
