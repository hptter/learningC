#include <stdio.h>
#include <stdlib.h>
void main(){
    int i=0,dec,j,decAux;
    int bin[100];
    printf("Digite o numero decimal:\n");
    scanf("%d",&dec);
    decAux=dec;
    while(dec > 0){
            if(dec>1){          
                if(dec%2==0){
                    printf("cheguei no 1\n");
                    bin[i] = 0;
                    dec=dec/2;
                }else{
                    j=dec;
                    printf("cheguei no 2\n");
                    bin[i] = 1;
                    while(j%2!=0){
                        j--;
                    }
                    dec = j/2;
                }
            }else{
                printf("cheguei no 3\n");
                bin[i]=1;
                dec = 0;
            }
            i++;
   }
    printf("O numero decimal %d para binario e: \n",decAux);
    j=i;
    for(i;i>=0;i--)
        printf("%d",bin[i]);
    printf("\n");
    
}

