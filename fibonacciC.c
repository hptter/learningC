#include <stdio.h>

void main(){
    float a,b,c,i,n;

    a=0;
    b=1;
    
    printf("Digite quantos numeros da sequencia voce quer?: ");
    scanf("%f",&n);
    printf("Serie de fibonacci:\n");
    printf("1: %.0f\n",b);

    for (i = 1; i < n; i++) {
        c = a+b;
        a=b;
        b=c;


        printf("%.0f: %.0f\n",i+1,c);

    }

}
