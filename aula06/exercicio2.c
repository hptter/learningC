#include <stdio.h>
void main(){
	char ch;
	printf("Digite uma letra: ");
	scanf("%c",&ch);
	switch(ch){
		case 'a':
		case 'e':	
		case 'i':
		case 'o':
		case 'u':
			printf("\nE uma vogal\n");
			break;
		default:
			printf("\nE uma consoante\n");
	}
	
}
