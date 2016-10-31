#include <stdio.h>
void main(){
	int i=100;
	do{
		if(i%2==0){
			printf("%d\n",i);
		}
		i++;
	}while(i<=200);
}
