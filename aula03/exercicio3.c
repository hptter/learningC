#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
float a,b,c,resultado;
void main(){
	printf("Forneca o primeiro numero: ");
	scanf("%f",&a);
	while(a==0){
		printf("Digite um valor diferente de 0: ");
		scanf("%f",&a);
	}
	printf("Forneca o segundo numero: ");
	scanf("%f",&b);
	while(b==0){
		printf("Digite um valor diferente de 0: ");
		scanf("%f",&b);
	}
	printf("Forneca o terceiro numero: ");
	scanf("%f",&c);
	while(c==0){
		printf("Digite um valor diferente de 0: ");
		scanf("%f",&c);
	}
	resultado=(a/b)+1;
	printf("%.2f\n",resultado);
	
	resultado=(a-b)/(a+b);
	printf("%.2f\n",resultado);
	
	resultado=(a-(b/c))/(a+(b/c));
	printf("%.2f\n",resultado);
	
	resultado=a-(b/(b+c));
	printf("%.2f\n",resultado);
	
	resultado=((b+c)*a)/(a+b);
	printf("%.2f\n",resultado);

}
		
