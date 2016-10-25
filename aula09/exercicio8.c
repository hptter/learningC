#include <stdio.h>
void main(){
	int i,res[15],result,media;
	for(i = 0;i<15;i++){
		printf("(%d/15)Digite um numero: ",i+1);
		scanf("%d",&res[i]);
		result +=res[i];
	}
	media = result / 15;
	printf("O valor da soma dos numero e: %d",result);
	printf("\nO a media e de: %d",media);
}
