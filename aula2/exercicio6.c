#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

float valor,vFinal;
void main(){
	printf("Forneca o valor do salario base do funcionario: ");
	scanf("%f",&valor);
	vFinal = (valor*1.05)*0.93;
	printf("O valor do salario depois dos descontos e de %.2f",vFinal);
	getch();
}
