#include <stdio.h>
void main(){
	int res=1,i,numero;
	printf("Digite o numero para fatorar: ");
	scanf("%d",&numero);
	for(i=1;i<=numero;i++){
		res *= i;
	}
	printf("O resultado e: %d",res);
}
