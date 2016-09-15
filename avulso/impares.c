#include <stdio.h>

void main(){

    int n,qI=1,i;
    printf("Quantos numeros impares voce quer ver?:\n");
    scanf("%d",&n);
    printf("O numero impar e :::::%d° : %d:::::\n",1,1);
    for (i = 2; i <= n; i++) {
            qI++;
                printf("O numero e impar :::::%d° : %d:::::\n",qI,2*i+1);
            
        
    }

}
