#include <stdio.h>
void main(){
	float a,b,c,resultado;
	printf("Informe o valor de A: ");
	scanf("%f",&a);
	printf("Informe o valor de B: ");
	scanf("%f",&b);
	
	if(a>0 && b>0)
		c=30;
	else if(a>0 && b<0)
		c = 0;
	else if(a<0 && b>0)
		c = -1;
	else if(a<0 && b<0)
		c=a*b*(-1);
	resultado = (a*a)+(2*a*b)+(b*b)+(c*a*c);
	printf("O resultado e: %.2f ", resultado);
}
