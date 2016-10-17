#include <stdio.h>
void soma(float *x,float *y,float *res){
    *res = *x+*y; 
}

void main(){
    float x=0,y=0,res=0;
    printf("Digite 2 numeros para somar, separados por espaco\n");
    scanf("%f %f",&x,&y);
    soma(&x,&y,&res);
    printf("x:%.2f\ny:%.2f\nResultado: %.2f",x,y,res); 
}
