#include <stdio.h>
#include <time.h>
void main(){
	int num1,num2,num3,a,b,c,igual;
	loop:
	igual=0;
	printf("Digite o primeiro numero: ");
	scanf("%d",&num1);
	printf("Digite o segundo numero: ");
	scanf("%d",&num2);
	printf("Digite o terceiro numero: ");
	scanf("%d",&num3);
	srand(time(NULL));
	a = rand()%10;
	b = rand()%10;
	c = rand()%10;
	printf("%d %d %d\n",a,b,c);
	if(num1==a)
		igual++;
	if(num2==b)
		igual++;
	if(num3==c)
		igual++;
	printf("Voce acertou %d numeros\n",igual);
	goto loop;
}
