#include <stdio.h>
#include <stdlib.h>

void main(){
	float num1,num2,sub;
	printf("Digite o primeiro numero: ");
	scanf("%f",&num1);
	printf("Digite o segundo numero: ");
	scanf("%f",&num2);
	sub=num1-num2;
	if(sub<0){
		printf("\n\nO resultado e negativo: %5.2f",sub);
	}
}
