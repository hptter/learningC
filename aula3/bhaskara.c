#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void main(){
	float a,b,c,delta,x1,x2;
	printf("Digite o valor de a: ");
	scanf("%f",&a);
	printf("Digite o valor de b: ");
	scanf("%f",&b);
	printf("Digite o valor de c: ");
	scanf("%f",&c);
	delta = (b*b) - 4*a*c;
	if(delta > 0){
	
	x1=(-b+sqrt(delta))/(2*a);
	x2=(-b-sqrt(delta))/(2*a);
	printf("Raiz 1: %.2f\nRaiz 2: %.2f\n",x1,x2);
	}else{
		printf("\n\nDelta negativo!!!");
	}	
	printf("Valor de delta: %.2f",delta);
}
