#include <stdio.h>
#include <stdlib.h>

void seno(int ang){									//Seno
	if(ang == 0 || ang == 360){
		printf("Seno Positivo\n");
	}else{
		if(ang >= 0 && ang <= 180){
			printf("Seno Positivo\n");
		}else if(ang > 180 && ang <=360){
			printf("Seno Negativo\n");
		}
	}
}

void cosseno(int ang){								//Cosseno
	if(ang == 0 || ang == 360){
		printf("Cosseno Positivo\n");
	}else{
		if((ang >= 0 && ang < 180)||(ang <=360 && ang >= 270)){
			printf("Cosseno Positivo\n");
		}else if(ang >= 90 && ang <= 270){
			printf("Cosseno Negativo\n");
		}
	}
}

void quad(int ang){									//Quadrante
	if(ang > 0 && ang < 90){
		printf("Primeiro Quadrante\n");
	}else if(ang > 90 && ang < 180){
		printf("Segundo Quadrante\n");
	}else if(ang > 180 && ang < 270){
		printf("Terceiro Quadrante\n");
	}else if(ang > 270 && ang <360){
		printf("Quarto Quadrante\n");
	}else if(ang == 360 || ang == 0 || ang == 180){
		printf("Eixo X\n");
	}else  if(ang == 90 || ang == 270){
		printf("Eixo Y\n");
	}
}

int main(){											//MAIN PORA!!!
	int ang;
	scanf("%i",&ang);
	if(ang > 360){
		ang =  ang - 360;
		quad(ang);
		seno(ang);
		cosseno(ang);
	}else{
		quad(ang);
		seno(ang);
		cosseno(ang);
	}
	return 0;
}

