#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
float tempo,velocidadeM,distancia,litros_usados;
void main (){
	printf("Forneca o tempo de viagem(em Horas no formato XX.XX): ");
	scanf("%f",&tempo);
	printf("Forneca a velocidade media da viagem: ");
	scanf("%f",&velocidadeM);
	distancia=tempo*velocidadeM;
	litros_usados=distancia/12;
	printf("velocidade media de %.1fkm/h\nTempo gasto de %.2f\nDistancia percorrida de %.2fKm\nQuantidade de litros usados %.2f",velocidadeM,tempo,distancia,litros_usados);
	getch();
	
}
