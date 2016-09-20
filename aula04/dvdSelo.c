#include <stdio.h>
#include <stdlib.h>

void main(){
	int dias;
	float preco;
	char cor;
	printf("Digite a cor do selo do dvd:\nVerde(v)\nAzul(a)\nBranco(b)\nRosa(r): ");
	scanf("%s",&cor);
	if(cor == 'v' || cor == 'a' || cor == 'b' || cor == 'r'){
	
	printf("Digite o numero de dias que vai ficar com o dvd: ");
	scanf("%d",&dias);
	if(cor == 'v')
		preco = dias*5.50;
	else if(cor == 'a')
		preco = dias*5.70;
	else if(cor == 'b')
		preco = dias*4.00;
	else if(cor == 'r')
		preco = dias*3.50;
	
	printf("O preco total e: %5.2f",preco); 
	}else{
		printf("\n\n Selo invalido \n\n");
	}

		
	
}
