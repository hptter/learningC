#include <stdio.h>
#include <math.h>
void main(){
	float num;
	printf("Informe um numero positivo: ");
	scanf("%f",&num);
	printf("O numero informado ao quadrado eh: %.2f\n",num*num);
	printf("O numero informado ao cubo eh: %.2f\n",num*num*num);
	printf("A raiz do numero informado eh: %.2f\n",sqrt(num));
	num=num*num+num*num*num+sqrt(num);
	printf("A soma do quadrado, cubo e raiz eh: %.2f",num);
}
