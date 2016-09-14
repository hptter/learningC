#include <stdio.h>
#include <stdlib.h>

void main(){
    int m,calc,i;
    printf("Digite o valor de m: ");
    scanf("%d",&m);
    while(m>0){
        calc=0;
        if(m%2==0){
            for(i=1;i<=m;i++){
                if(m%i==0){
                    calc++;
                }
            }
            printf("O valor de calc e: %d\n",calc);
        }else{
            for(i=1;i<m;i++){
                calc +=i;
            }
            printf("O valor de calc e: %d\n",calc);
        }
        printf("Escreva o valor de m: ");
        scanf("%d",&m);
    }

}
//Resposta C =D
