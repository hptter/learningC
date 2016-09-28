#include <stdio.h>
int hora,minuto,segundos,resultado;

void matrizz(int x,int y){
	int i,j;
	//preenche matriz
	char matriz[x][y];
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			if(i==0 || i==x-1){
				matriz[i][j] = '=';
			}
			else if(j==0 || j==y-1){
				matriz[i][j] = '*';
			}else{
				matriz[i][j] = ' ';
			}

		}
	}
	//Desenha matriz
	//desenha hora no relogio
	switch(hora){
		case 1:
		case 2:
			matriz[1][6] = '/';
			break;
		case 3:
			matriz[2][6] = '-';
			break;
		case 4:
			matriz[3][6] = '\\';
			break;
		case 5:
			matriz[3][5] = '|';
			break;
		case 6:
		case 7:
			matriz[3][4] = '/';
			break;
		case 8:
			matriz[2][4] = '/';
			break;
		case 9:
			matriz[2][4] = '-';
			break;
		case 10:
		case 11:
			matriz[1][4] = '\\';
			break;
		case 12:
		case 0:
			matriz[1][6] = '|';
			break;	
		
	}
	//desenha minutos no relogio
	if(minuto == 0){
		matriz[1][6] = '|';
	}
	else if(minuto < 10){
		matriz[1][6] = '/';
	}else if(minuto < 30){
		matriz[3][7] = '\\';
	}else if(minuto == 30){
		matriz[2][7] = '-';
	}else if(minuto < 40){
		matriz[2][4] = '|';
	}else if(minuto < 59){
		matriz[2][3] = '\\';
	}
	//desenha matriz
	matriz[2][5] = '.';
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			printf("%c",matriz[i][j]);
		}
		printf("\n");
	}
	
}



void main(){
	

	printf("Entre com a hora: ");
	scanf("%d",&hora);
	printf("Entre com os minutos: ");
	scanf("%d",&minuto);
	printf("Entre com os segundos: ");
	scanf("%d",&segundos);
	resultado = (hora*3600)+(minuto*60)+segundos;

	printf("A hora informada corresponde a %d\n",resultado);
	printf("\n\n ::Reloginho daora:: \n\n");
	matrizz(5,10);

}


