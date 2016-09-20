#include <stdio.h>
#include <math.h>
void main(){
	float num;
	printf("Informe um numero: ");
	scanf("%f",&num);
	if(fmod(num,2)!=0){
		printf("O numero %.2f e impar",num);
	}
}
