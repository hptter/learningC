#include <stdio.h>
#include <string.h>
void main(){
	char nome[100],sexo[10];
	int qtM=0,qtF=0;
	while(strcmp(nome,"FIM")!=0){
		printf("(FIM) para sair\nDigite seu nome: ");
		gets(nome);
		if(strcmp(nome,"FIM")!=0){
			printf("Digite o seu sexo(masculino/feminino): ");
			gets(sexo);
			if(strcmp(sexo,"feminino")==0){
				qtF++;
			}
			if(strcmp(sexo,"masculino")==0){
				qtM++;
			}
		}
		strcpy(sexo," ");
	}
	printf("Sexo masculino: %d\nSexo feminino: %d",qtM,qtF);
}
