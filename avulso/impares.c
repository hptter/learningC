#include <stdio.h>

void main(){

    int n,qI=0,i;
    printf("Quantos numeros impares voce quer ver?:\n");
    scanf("%d",&n);
    for (i = 1; i <= n*2; i++) {
        if(i%2==0){
        }else{
            qI++;
            printf("O numero e impar :::::%d° : %d:::::\n",qI,i);
        }
    }

}
