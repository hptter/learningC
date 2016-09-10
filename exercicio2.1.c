#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
float fah,cel;
void main(){
	printf("Forneca a temperatura em graus fahrenheit: ");
	scanf("%f",&fah);
	cel=(5*(fah-32))/9;
	printf("A temperatura em celsios e %.2f",cel);
	getch();
}
