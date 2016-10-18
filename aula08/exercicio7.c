#include <stdio.h>
void main(){
	int num=1,i=0,res=0;
	printf("Digite um numero: ");
	scanf("%d",&num);
	while(i <= num){
		res += i;
		i++;
	}

	printf("%d",res);
}
