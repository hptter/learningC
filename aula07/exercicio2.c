#include <stdio.h>
#include <string.h>
void main(){
	char senha[100];
	printf("Senha: ");
	scanf("%s",&senha);
	if(strcmp(senha,"password")==0){
		printf("Senha OK");
	}else{
		printf("Senha invalida");
	}
}
