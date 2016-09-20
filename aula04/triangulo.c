#include <stdio.h>
#include <stdlib.h>
int a,b,c;
void main(){
	printf("Escreva o valor de A: ");
	scanf("%d",&a);
	printf("Escreva o valor de B: ");
	scanf("%d",&b);
	printf("Escreva o valor de C: ");
	scanf("%d",&c);
	if(a<b+c && b<a+c && c<a+b){
		printf("E uma triangulo:\n");
		if(a==b && b!=c || c==b && b!=a){
			printf("E isosceles.");
		}else if(a!=b && b!=c && c!=a){
			printf("E escaleno.");
		}else if(a==b && b==c){
			printf("E equilatero.");
		}
	}else{
		printf("nao e um triangulo: ");
	}
	
}
