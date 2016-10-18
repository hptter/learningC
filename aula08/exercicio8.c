#include <stdio.h>
void main(){
	int c=1,fat=1;
	do{
		fat += c * fat; 
		c++;
	}while(c < 6);
	printf("%d",fat);
}
