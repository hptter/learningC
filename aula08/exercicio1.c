#include <stdio.h>
#include <string.h>
void main(){
	char palavra1[20],palavra2[20];
	printf("\n Primeira palavra: ");
	scanf("%s",&palavra1);
	printf("\n Segunda palavra: ");
	scanf("%s",&palavra2);
	
	if(strcmp(palavra1,palavra2)==0){
		printf("\nAs palavra sao identicas.\n");
	}else{
		printf("\nAS palavras sao diferentes.\n\n");
	}
}
