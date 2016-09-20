#include <stdio.h>
void main(){
	char nome[100],categoria;
	float salario,salarioAnt;
	printf("Informe o nome do funcionario: ");
	gets(nome);
	printf("Informe a categoria do funcionario: ");
	scanf("%c",&categoria);
	printf("Informe o salario do funcionario: ");
	scanf("%f",&salario);
	salarioAnt=salario;
	switch(categoria){
		case 'a':
		case 'c':
		case 'f':
		case 'h':
			salario *= 1.10;
			break;
		case 'b':
		case 'd':
		case 'e':
		case 'i':
		case 'j':
		case 't':
			salario *= 1.15;
			break;
		case 'k':
		case 'r':
			salario *= 1.25;
			break;
		case 'l':
		case 'm':
		case 'n':
		case 'o':
		case 'p':
		case 'q':
		case 's':
			salario *= 1.35;
			break;
		case 'u':
		case 'v':
		case 'x':
		case 'y':
		case 'w':
		case 'z':
			salario *= 1.50;
			break;
		default:
			printf("Categoria invalida!!!");
	}
	if(salarioAnt!=salario)
		printf("O salario reajustado do funcionario:\n\nNome:%s\n\nCategoria:%c\n\nSalario Antigo:%.2f\n\nSalario Reajustado:%.2f",nome,categoria,salarioAnt,salario);
	else 
		printf("ERRO!!!!");
}
