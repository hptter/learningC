#include <stdio.h>
void main(){
	float base,altura,area;
	printf("Informe o valor da base: ");
	scanf("%f",&base);
	while(base < 0){
		printf("Informe um valor positivo para a base: ");
		scanf("%f",&base);
	}
	printf("Informe o valor da altura: ");
	scanf("%f",&altura);
	while(altura < 0){
		printf("Informe um valor positivo para a altura: ");
		scanf("%f",&altura);
	}
	area = (base*altura)/2;
	printf("O valor da area do triangulo e: %.2f",area);	
}
