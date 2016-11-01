#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main(){
	int escola[3][8][4],i,j,k;
	float mediaG=0,mediaT[3];
	srand(time(NULL));
	for(i = 0;i<3;i++){
		for(j = 0;j<8;j++){
			for(k = 0;k<4;k++){
				escola[i][j][k] = (rand()%4)+6;
				mediaG += escola[i][j][k];
				mediaT[i] += escola[i][j][k];
			}	
		}
	}
	mediaG /= 96;
	printf("A media geral dos alunos e %.2f\n",mediaG);
	for(i = 0;i<3;i++){
		mediaT[i] /= 32;
		printf("A media da turma %d e %.2f\n",i+1,mediaT[i]);
	}
	
	
	
	
}
