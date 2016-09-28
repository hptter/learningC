#include <stdio.h>
void main(){
	float a,b,resultado,vaiounao;
	char o;
	printf("Digite a operacao[+ - * /]: ");
	scanf("%c",&o);
	printf("Entre com o primero numero: ");
	scanf("%f",&a);
	printf("Entre com o segundo numero: ");
	scanf("%f",&b);
	switch(o){
		case '+':
			resultado = a+b;
			break;
		case '-':
			resultado = a-b;
			break;
		case '*':
			resultado = a*b;
			break;
		case '/':
			if(b==0){
				printf("Erro, tentativa de divisao por 0\n");
				vaiounao=0;
			}else{
				resultado = a/b;
			}
			break;
		default:
			printf("Operacao invalida\n");
			vaiounao = 0;
	}
	if(vaiounao!=0)
	printf("%.2f %c %.2f = %.2f",a,o,b,resultado);
	
}
