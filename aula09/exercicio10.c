#include <stdio.h>
void main(){
	int a=0,i=1,res;
	printf("Digite um numero: ");
	scanf("%d",&a);
	do{
		res = a*i;
		printf("%d*%d = %d\n",a,i,res);
		i++;
	}while(i<=10);
}
