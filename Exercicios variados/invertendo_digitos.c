#include <stdio.h>

int main() {
	//Variaveis
	int numero,dig1,dig2,dig3;
	
	//Entrada do N�mero
	printf("Informe uma valor inteiro e positivo de tres digitos:\n");
	scanf("%i", &numero);

	//Convertendo o numero de 3 digitos em um digito s�.
	if (numero==300){
		printf("O numero invertido eh 3");
	}else{

	dig1=(numero/100);		// Descobrindo o primeiro digito do n�mero, divindo ele por 100.
	dig2=(numero%100)/10;	// Descobrindo o segundo digito do n�mero, pegando o resto da divis�o de 100 e depois dividir por 10.
	dig3=(numero%100)%10;	// Descobrindo o terceiro digito do n�mero, pegar o resto da divis�o de 100 e depois extrair o resto da divis�o por 10.
	
	//Mostrando o n�mero invertido.
	printf("O numero invertido eh %i%i%i",dig3,dig2,dig1);	
	}

	

}

