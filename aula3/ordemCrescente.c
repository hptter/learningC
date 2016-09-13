#include <stdio.h>
#include <stdio.h>

void main(){
	float a,b,c;
	printf("Digite o primeiro numero: ");
	scanf("%f",&a);
	printf("Digite o segundo numero: ");
	scanf("%f",&b);
	printf("Digite o terceiro numero: ");
	scanf("%f",&c);
	
	if(a>b && b>c )
		printf("A ordem e C:%.2f\nB:%.2f\nA:%.2f",c,b,a);
	else if(b>a && c>b)
		printf("A ordem e A:%.2f\nB:%.2f\nC:%.2f",a,b,c);
	else if(a>b && c>a)
		printf("A ordem e B:%.2f\nA:%.2f\nC:%.2f",b,a,c);
	else if(b>a && c>a)
		printf("A ordem e A:%.2f\nC:%.2f\nB:%.2f",a,c,b);
	else if(c>b && a>c)
		printf("A ordem e B:%.2f\nC:%.2f\nA:%.2f",b,c,a);
	else if(a>c && b>a)
		printf("A ordem e C:%.2f\nA:%.2f\nB:%.2f",c,a,b);
}
