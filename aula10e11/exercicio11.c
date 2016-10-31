#include <stdio.h>
void main(){
	int i,num;
	float vT[5];
	for(i = 0;i < 5;i++){
		printf("(%d/5)Digite um numero : ",i+1);
		scanf("%f",&vT[i]);
	}
	printf("Digite \t0 (sair)\n\t1 (mostrar vetor na ordem direto)\n\t2 (mostrar vetor na ordem inversa): ");
	scanf("%d",&num);
	if(num == 1){
		for(i = 0;i<5;i++){
			printf("[%.2f] ",vT[i]);
		}
	}else if(num == 2){
		for(i = 4;i>=0;i--){
			printf("[%.2f] ",vT[i]);
		}
	}
	else{
		
	}
	
}
