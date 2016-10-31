#include <stdio.h>
#include <string.h>
void main(){
	char oper;
	float num,num2,res;
	loop:
	printf("Digite a operacao\nA - Adicao\nS - Subtracao\nM - Multiplicacao\nD - Divisao\n");
	scanf("%c",&oper);
	if(oper == 'a' || oper == 'A' || oper == 'm' || oper == 'M' || oper == 'd' || oper == 'd'){
		printf("Digite o primeiro numero: ");
		scanf("%f",&num);
		printf("Digite o segundo numero: ");
		scanf("%f",&num2);
		switch(oper){
			case 'A':
			case 'a':
				res = num+num2;
				break;
			case 's':
			case 'S':
				res = num-num2;
				break;
			case 'm':
			case 'M':
				res = num * num2;
				break;
			case 'd':
			case 'D':
				if(num2<=0){
					fflush(stdin);
					system("cls");
					printf("Tentativa de divisao por zero\n\n");
					goto loop;
				}else{
					res = num / num2;
				}
					
		}
		printf("O resultado final e: %.2f",res);
	}else{
		system("cls");
		printf("Operacao invalida\n\n");
		goto loop;
	}
}

