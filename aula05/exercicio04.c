#include <stdio.h>

void main(){
	float num1,num2,num3,resultado;
	printf("Informe o primero valor: ");
	scanf("%f",&num1);
	printf("Informe o segundo valor: ");
	scanf("%f",&num2);
	printf("Informe o terceiro valor: ");
	scanf("%f",&num3);
	num1 *= num1;
	num2 *= num2;
	num3 *= num3;
	resultado = num1+num2+num3;
	printf("O valor ao quadrado dos numeros e:\n1: %.2f\n2: %.2f\n3: %.2f\nE o valor da soma deles e: %.2f",num1,num2,num3,resultado);
	
}
