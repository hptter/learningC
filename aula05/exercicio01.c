#include <stdio.h>

void main(){
	float salario,qSalario,salaMin;
	char nome[100];
	printf("Digite o nome do funcionario: ");
	gets(nome);
	printf("Informe quanto o funcionario ganha: ");
	scanf("%f",&salario);
	printf("Informe o valor do salario minimo: ");
	scanf("%f",&salaMin);
	qSalario = salario/salaMin;
	printf("O funcionario %s ganha %.2f salario(s) minimos",nome,qSalario);
}
