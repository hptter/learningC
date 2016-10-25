#include <stdio.h>
void main(){
	int i,vT[10],nExiste;
	for(i = 0;i<10;i++){
		printf("(%d/10)Digite um numero: ",i+1);
		scanf("%d",&vT[i]);
	}
	
	for(i = 0;i < 10;i++){
		if(vT[i] > 50){
			printf("O numero %d e maior que 50 e esta na posicao %d\n",vT[i],i);
			nExiste++;
		}
	}
	if(nExiste == 0){
		printf("Nenhum numero maior que 50 encontrado");
	}
}
