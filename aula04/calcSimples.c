#include <stdio.h>
#include <stdlib.h>

void main(){
	float num1,num2,resultado;
	char operacao;
	printf("Digite o primeiro numero: ");
	scanf("%f",&num1);
	printf("Digite o segundo numero: ");
	scanf("%f",&num2);
	printf("Digite a operacao (+,-,*,/): ");
	scanf("%s",&operacao);
	if(operacao == '-')
		resultado = num1-num2;
	else if(operacao == '+')
		resultado = num1+num2;
	else if(operacao == '*')
		resultado = num1*num2;
	else if(operacao == '/'){
		if(num2!=0.00)
		resultado = num1/num2;
		else
		printf("Erro de divisao por zero!!!\n\n\n");
	}
	else{
		printf("\n\nNao foi digitado uma opercao valida!\n\n");
	}
	if(resultado > 0 || resultado < 0){
		printf("O resultado e %6.2f",resultado);
	}	
}
