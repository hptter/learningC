#include <stdio.h>
void main(){
	int i=0,par=0,impar=1,num;
	while(i<20){
		printf("Digite um numero: ");
		scanf("%d",&num);
		if(num%2==0){
			par += num;
		}else{
			impar *= num;
		}
		i++;
	}
	printf("A soma dos numeros pares e %d\nO produto dos numeros impares e %d",par,impar);
}
