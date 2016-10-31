#include <stdio.h>
void main(){
	int num1,num2,num3,num4,res;
	printf("Digite 4 numeros separados por espaco: ");
	scanf("%d %d %d %d",&num1,&num2,&num3,&num4);
	if(num1%2==0){
		res += num1;
	}
	if(num2%2==0){
		res += num2;
	}
	if(num3%2==0){
		res += num3;
	}
	if(num4%2==0){
		res += num4;
	}
	printf("A soma dos numeros pares e: %d",res);
}
