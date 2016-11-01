#include <stdio.h>

void main(){
		float  mat[4][7],menor,maior;
		int i,j,pmaior[2],pmenor[2];
		for(i=0;i<4;i++){
			for(j=0;j<7;j++){
				printf("Digite o numero para a linha %d, coluna %d: ",i+1,j+1);
				scanf("%f",&mat[i][j]);
			}
		}
		menor = mat[3][3];
		maior = mat[0][0];
		for(i = 0;i<4;i++){
			for(j = 0;j<7;j++){
				if(mat[i][j] > maior){
					maior = mat[i][j];
					pmaior[0] = i+1;
					pmaior[1] = j+1;
				}
				if(mat[i][j] < menor){
					menor = mat[i][j];
					pmenor[0] = i+1;
					pmenor[1] = j+1;
				}
			}
		}
		printf("O maior numero e %.2f linha: %d coluna: %d\nO menor numero e %.2f linha: %d coluna: %d",maior,pmaior[0],pmaior[1],menor,pmenor[0],pmenor[1]);
}
