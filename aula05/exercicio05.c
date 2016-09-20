#include <stdio.h>
void main(){
		float nota1,nota2,media;
		printf("Infome a primera nota: ");
		scanf("%f",&nota1);
		printf("Infome a segunda nota: ");
		scanf("%f",&nota2);
		media=(nota1+nota2)/2;
		if(media >=7)
			printf("O aluno foi aprovado!");
		else if(media >=5 && media < 7)
			printf("O aluno esta de exame!");
		else
			printf("O aluno esta reprovado!");
}
