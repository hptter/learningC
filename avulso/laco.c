#include <stdio.h>
#include <time.h>
void main(){
    time_t inicio,fim;
    inicio = time(NULL);
    int i = 0,j;
    while(i < 100000){
        j=i;
        while(j<100000){
            j++;
        }
        i++;
    }
    fim = time(NULL);
    printf("FIM TEMPO: %f\n",difftime(fim,inicio));

}
