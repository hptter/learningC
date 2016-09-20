#include <stdio.h>
#include <stdlib.h>

void main(){
	float nota1, nota2,media;
	printf("Digite a primeira nota: ");
	scanf("%f",&nota1);
	printf("Digite a segunda nota: ");
	scanf("%f",&nota2);
	media = (nota1+nota2)/2;
	printf("\n\nA media do aluno e: %5.2f",media);
	if(media < 7){
		printf("\n\nAluno Reprovado!");
	}else{
		printf("\n\nAluno aprovado!");
	}
}
