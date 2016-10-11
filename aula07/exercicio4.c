#include <stdio.h>
#include <string.h>
void main(){
	char oper;
	float num1,num2,res;
	loop:
	printf("Digite a operacao: ");
	scanf("%f %s %f",&num1,&oper,&num2);
	if(oper == '+' || oper == '-' || oper == '/' || oper == '*'){
		switch(oper){
			case '+':
				res = num1+num2;
				break;
			case '-':
				res = num1-num2;
				break;
			case '/':
				if(num2!=0){
				res = num1/num2;
				}else{
					system("cls");
					fflush(stdin);
					printf("Tentativa de divisao por zero\n\n");
					goto loop;
				}
				break;
			case '*':
				res = num1*num2;
		}
		printf("O resultado e: %.2f",res);
	}else{
		system("cls");
		fflush(stdin);
		printf("Operacao invalida\n\n");
		goto loop;
	}
	
}
