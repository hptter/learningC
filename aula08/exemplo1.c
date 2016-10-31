#include <stdio.h>
#include <string.h>
void main(){
	char dig[100],cpy[100];
	printf("Digite alguma coisa: ");
	fgets(dig,100,stdin);
	printf("Copia %s\n",strcpy(cpy,dig));
	printf("Retorno da comparacao %d\n",strcmp(dig,cpy));
	printf("Tamanho %d\n",strlen(dig));
	printf("Concatenacao %s",strcat(dig,cpy));
}
