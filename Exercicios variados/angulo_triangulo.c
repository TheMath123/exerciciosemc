#include <stdio.h>

int main(){
	//Variaveis
	int a,b,c;
	
	//Entrada dos angulos
	printf("Informe o valor dos 2 angulos:\n");
	scanf("%i %i",&a,&b);
	
	//Calcula para descobrir o 3�angulo
	c = a + b;
	c = 180 - c; //Um tri�ngulo tem 180� com somas de todos seus �ngulos.
	
	//Mostrando o Resultado.
	printf("O terceiro angulo eh %i",c);
	
	return 0;
}
