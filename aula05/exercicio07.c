#include <stdio.h>
void main(){
	float num;
	printf("Informe um valor: ");
	scanf("%f",&num);
	if(num >=0 && num < 100)
		printf("%.2f entre 0 e 100",num);
	else if(num >= 100 && num < 1000)
		printf("%.2f entre 100 e 1000",num);
	else if(num >= 1000)
		printf("%.2f maior ou igual a 1000",num);
	else
		printf("%.2f menor que 0",num);
}
