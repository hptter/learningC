#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

void main(){
	int mat[8][8],i,j;
	bool sim = true;
	loop:
	srand(time(NULL));
	
	for(i = 0;i < 8;i++){
		for(j = 0;j < 8;j++){
			mat[i][j] = rand()%2;
		}
	}
	
	for(i = 0;i<8;i++){
		for(j = 0;j < 8;j++){
			if(mat[i][j] != mat[j][i]){
				sim = false;	
			}
		}
	}
	
	if(!sim){
		printf("A matriz nao e simetrica\n");
	}else{
		printf("A matriz e simetrica\n");
	}
	getch();
	goto loop;
	
	
}
