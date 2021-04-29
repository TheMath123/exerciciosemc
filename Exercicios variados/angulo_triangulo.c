#include <stdio.h>

int main(){
	//Variaveis
	int a,b,c;
	
	//Entrada dos angulos
	printf("Informe o valor dos 2 angulos:\n");
	scanf("%i %i",&a,&b);
	
	//Calcula para descobrir o 3ºangulo
	c = a + b;
	c = 180 - c; //Um triângulo tem 180º com somas de todos seus ângulos.
	
	//Mostrando o Resultado.
	printf("O terceiro angulo eh %i",c);
	
	return 0;
}
