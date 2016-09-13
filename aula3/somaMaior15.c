#include <stdio.h>
#include <stdlib.h>

void main(){
	float num1,num2,soma;
	printf("Digite o primeiro numero: ");
	scanf("%f",&num1);
	printf("Digite o segundo numero: ");
	scanf("%f",&num2);
	soma = num1+num2;
	if(soma > 15){
		printf("\n\n%5.2f",soma);
	}
}
