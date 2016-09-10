#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
float fah,cel;
void main(){
	printf("Forneca a temperatura em graus celsios: ");
	scanf("%f",&cel);
	fah=((9*cel+160)/5);
	printf("A temperatura em fahrenheit e %.2f",fah);
	getch();
}
