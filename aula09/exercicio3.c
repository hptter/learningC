#include <stdio.h>
void main(){
	int i,res = 0,numero;
	printf("Digite um numero: ");
	scanf("%d",&numero);
	for(i = 1;i <= numero;i++){
		res += i;
	}
	printf("A soma desse intervalo e de: %d",res);
}
