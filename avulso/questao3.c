#include <stdio.h>
void main(){
	float h,pIdeal;
	char sexo;
	printf("Infome seu sexo: (F/M)");
	scanf("%c",&sexo);
	switch(sexo){
		case 'M':
		case 'm':
			printf("Informe a altura do homem: ");
			scanf("%f",&h);
			pIdeal = (72.7*h) - 58;
			break;
		case 'F':
		case 'f':
			printf("Informe a altura da mulher: ");
			scanf("%f",&h);
			pIdeal = (62.1*h) - 44.7;
			break;
		default:
			printf("Sexo invalido\n");
	}
	if(pIdeal > 0)
		printf("O peso ideal eh: %.2f",pIdeal);
}
