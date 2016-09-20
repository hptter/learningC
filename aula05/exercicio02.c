#include <stdio.h>
void main(){
	float presAtraso,prestacao,taxa,tempo;
	printf("Informe o valor da prestacao: ");
	scanf("%f",&prestacao);
	printf("Informe a taxa: ");
	scanf("%f",&taxa);
	printf("Informe o tempo de atraso: ");
	scanf("%f",&tempo);
	presAtraso=prestacao+(prestacao*(taxa/100)*tempo);
	printf("O valor com a taxa de atraso e: %.2f",presAtraso);
}
