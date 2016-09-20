#include <stdio.h>
void main(){
	float nota1,nota2,nota3,notaF;
	printf("Informe o valor da nota de laboratorio: ");
	scanf("%f",&nota1);
	printf("Informe o valor da nota da avaliacao semestral: ");
	scanf("%f",&nota2);
	printf("Informe o valor da nota do exame final: ");
	scanf("%f",&nota3);
	notaF=((nota1*2)+(nota2*3)+(nota3*5))/10;
	printf("A nota final do aluno e: %.2f Conceito: ",notaF);
	
	if(notaF >= 8)
		printf("'A'\n");
	else if(notaF >=7 && notaF < 8)
		printf("'B'\n");
	else if(notaF >=6 && notaF < 7)
		printf(" 'C'\n");
	else if(notaF >=5 && notaF < 6)
		printf("'D'\n");
	else
		printf("'E'\n");
	
}
