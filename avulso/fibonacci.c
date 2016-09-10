#include <stdio.h>
int i,n;
void main(){
    printf("quantos numeros da sequencia fibonacci voce quer?:\n");
    scanf("%d",&n);
    for (i = 1; i < n+1; i++) {
        printf("%d: %d\n",i,fib(i));
    }
     
}


int fib(int n){
    if(n==1 || n==2){
        return 1;
    }
    else{
        return fib(n-1)+fib(n-2);
    }
}
