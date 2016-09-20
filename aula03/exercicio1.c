#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
char produto[100];
float valor,vFinal;
void main(){
	printf("Forneca o nome do produto: ");
	fflush(stdin);
	gets(produto);
	printf("Fornecao o valor de producao do produto: ");
	scanf("%f",&valor);
	vFinal = valor*1.3;
	printf("O valor de venda do produto e de %.2f",vFinal);
	getch();
}
