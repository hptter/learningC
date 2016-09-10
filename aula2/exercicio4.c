#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

float valor,vFinal;
void main(){
	printf("Forneca o valor do salario do funcionario: ");
	scanf("%f",&valor);
	vFinal = valor*1.25;
	printf("O valor do salario depois do aumento e de %.2f",vFinal);
	getch();
}
