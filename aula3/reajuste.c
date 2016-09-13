#include <stdio.h>
#include <stdlib.h>

void main(){
	float salario;
	printf("Digite o salario do funcionario: ");
	scanf("%f",&salario);
	if(salario < 500)
		salario *= 1.15;
	else if(salario >=500 && salario <= 1000)
		salario *= 1.1;
	else
		salario  *= 1.05;
	printf("O salario reajustado do funcionario e: %5.2f",salario);
}
