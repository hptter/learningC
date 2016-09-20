#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

float valor,vFinal,percent;
void main(){
	printf("Forneca o valor do salario do funcionario: ");
	scanf("%f",&valor);
	printf("Forneca a porcentagem de aumento do funcionario: ");
	scanf("%f",&percent);
	vFinal = valor*(1+(percent/100));
	printf("O valor do salario depois do aumento e de %.2f",vFinal);
	getch();
}
