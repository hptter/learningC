#include <stdio.h>

int main(void){
    char url[]="poema.txt";
    char ch;
    FILE *arq;

    arq = fopen(url, "r");
    if(arq == NULL){
        printf("Erro, nao foi possivel abrir o arquivo");
    }else{
        while((ch=fgetc(arq))!= EOF)
            putchar(ch);
    }
    fclose(arq);

    return 0;
}
