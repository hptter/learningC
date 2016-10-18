#include <stdio.h>
void main(){
	int c=1,fat=1;
	while(c < 5){
		fat += c * fat; 
		c++;
	}
	printf("%d",fat);	
}


