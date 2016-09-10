#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
float volume,comprimento,largura,altura;
void main()
{
	printf("CALCULADORA DE VOLUME\n\n\n");
	printf("Informe o Comprimento:\n");
	scanf("%f", &comprimento);
	printf("Informe a largura:\n");
	scanf("%f", &largura);
	printf("Informe a Altura:\n");
	scanf("%f", &altura);
	volume = comprimento*largura*altura;
	printf("O volume da caixa e de: %5.3f\n\n\n", volume);
	getch();
}
