#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

float a,b;
void main(){
	printf("Coloque o valor de A:\n");
	scanf("%f", &a);
	printf("Coloque o valor de B:\n");
	scanf("%f", &b);
	b=a+b;
	a=b-a;
	b=b-a;
	printf("O valor trocado de A: %10.3f\n                   B: %10.3f\n\n\n", a , b);
	getch();
}
