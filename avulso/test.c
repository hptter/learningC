#include <stdio.h>
void main(){
    int i=0,j=0;
    while(i < 8){
        while(j < 8){
            if(i+j==7){
                printf("i:%d j:%d\n",i,j);
            }          
        j++;
        }
    j=0;
    i++;
    }


}
