#include <stdio.h>
#include <stdlib.h>
void main(){
	int vTor[5],vTor2[5],vTor3[10],i,j;
	for(i = 0;i<10;i++){
		printf("Escreva o %d numero: ",i+1);
		if(i<5)
			scanf("%d",&vTor[i]);
		else
			scanf("%d",&vTor2[i-5]);
	}
	
	
	printf("\n\nSem ordenacao: \n\n");
	for(i = 0;i<10;i++){
		if(i<5){
			printf("[%d] ",vTor[i]);
			vTor3[i] = vTor[i];
		}
		else{
			printf("[%d] ",vTor2[i-5]);
			vTor3[i] = vTor2[i-5]; 
		}
	}
	
	
	
	
	printf("\n\nOrdenacao crescente: \n\n");
	//vetor3
	for(i = 0;i<=10;i++){
		for(j = 10;j >= 0;j--){
			if(vTor3[i] > vTor3[j]){
				vTor3[j] = vTor3[i] + vTor3[j];
				vTor3[i] = vTor3[j] - vTor3[i];
				vTor3[j] = vTor3[j] - vTor3[i];
			}
		}
	}
	//vetor 1
	for(i = 0;i<=5;i++){
		for(j = 5;j >= 0;j--){
			if(vTor[i] > vTor[j]){
				vTor[j] = vTor[i] + vTor[j];
				vTor[i] = vTor[j] - vTor[i];
				vTor[j] = vTor[j] - vTor[i];
			}
		}
	}
	//vetor2
	for(i = 0;i <= 5;i++){
		for(j = 5;j >= 0;j--){
			if(vTor2[i] > vTor2[j]){
				vTor2[j] = vTor2[i] + vTor2[j];
				vTor2[i] = vTor2[j] - vTor2[i];
				vTor2[j] = vTor2[j] - vTor2[i];
			}
		}
	}
		
	for(i = 0;i<10;i++){
		printf("[%d] ",vTor3[i]);
	}
	printf("\n");
	
	for(i = 0;i<10;i++){
		if(i<5){
			printf("[%d] ",vTor[i]);
		}
		else{
			if(i==5)
				printf("\n");
			printf("[%d] ",vTor2[i-5]);
		}
	}
}
