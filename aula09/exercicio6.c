#include <stdio.h>
void main(){
	int i,res=0;
	for(i = 10;i<=20;i++){
		if(i%2==0)
			res +=i;
	}
	printf("O resultado do somatorio e %d",res);
}

