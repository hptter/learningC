#include <stdio.h>
void main(){
	int num;
	printf("Digite um numero: ");
	scanf("%d",&num);
	switch(num%2){
		case 0:
			if(num<10)
				printf("Numero par menor que 10\n");
			break;
		default:
			if(num<10)
				printf("Numero impar menor que 10\n");
	}
	if(num>=10)
		printf("Numero fora do intervalo");
}
