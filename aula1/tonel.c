#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

float raio,altura,volume;
void main(){
	printf("Coloque o raio do tonel:\n");
	scanf("%f", &raio);
	printf("Coloque a altura do tonel:\n");
	scanf("%f", &altura);
	volume = 3.1415*(raio*raio)*altura;
	printf("O volume do tonel e de %5.3f\n\n\n", volume);
	getch();
}
