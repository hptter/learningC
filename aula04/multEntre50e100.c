#include <stdio.h>
#include <stdlib.h>

void main(){
	float num1,num2,mult;
	printf("Digite o primeiro numero: ");
	scanf("%f",&num1);
	printf("Digite o segundo numero: ");
	scanf("%f",&num2);
	mult = num1*num2;
	if(mult > 50 && mult < 100){
		printf("\n\n%5.2f",mult);
	}
}
