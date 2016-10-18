#include <stdio.h>
void main(){
	int i,a;
	while(a>0){
		printf("Digite um numero: ");
		scanf("%d",&a);
		if(a>=100 && a<=200){
			i++;
		}
	}
	printf("%d numeros entre 100 e 200 foram digitados",i);
}
