#include <stdio.h>
void main(){
	float peso,pagar,excesso=0;
	printf("Digite o peso: ");
	scanf("%f",&peso);
	if(peso > 50){
		excesso = peso - 50;
		pagar = 4 * excesso;
	}else{
		pagar = 0;
	}
	printf("Peso em excesso: %.2f Valor da multa: R$%.2f",excesso,pagar);
}
