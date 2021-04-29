#include <stdio.h>

int main(){
	int c,dias,ace[9999],s_ace,dm=0;
	scanf("%i",&dias);	//Entrada do Numero de dias.
	
	//Entrada dos Numeros de acessos.
	for(c=0;c<dias;c++){
		scanf("%i",&ace[c]);
	}
	
	//Calculo para descobrir quantos dias levou para chegar a 1 milhão.
	for(c=0;c<dias;c++){
		s_ace+=ace[c];	
		if(s_ace>=1000000){
			dm=c;
			break;
		}
	}
	
	printf("%i",dm+1);	//Mostrar o resultado.
	return 0;
}
