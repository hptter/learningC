#include <stdio.h>
void main(){
	int c=1,fat=1,i=1;
	while(i>0){
		printf("Digite o numero: ");
		scanf("%d",&i);
		if(i>0){
			while(c < i){
				fat += c * fat; 
				c++;
			}
			printf("%d\n",fat);
		}
	}
}

