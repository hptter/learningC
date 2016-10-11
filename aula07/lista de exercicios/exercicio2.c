#include <stdio.h>
void main(){
	int velMax,velMot;
	float multa;
	printf("Digite a velocidade maxima da avenida: ");
	scanf("%d",&velMax);
	printf("Digite a velocidade do motorista: ");
	scanf("%d",&velMot);
	if(velMot > velMax){
		if((velMot - velMax)<=10){
			multa = 50.0;
		}else if((velMot - velMax)>10 && (velMot - velMax)<=30){
			multa = 100.0;
		}else if((velMot - velMax)>30){
			multa = 200.0;
		}
		printf("O valor da multa a ser paga e: R$%.2f",multa);
	}else
		printf("O motorista nao ultrapassou a velocidade");
}
