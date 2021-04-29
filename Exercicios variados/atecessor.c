#include <stdio.h>
int main(){
	
	//Variaveis
	int n;
	
	//Entrada do Valor
	printf("Digite um numero: ");
	scanf("%i",&n);
	
	//Antecessor
	n=--n;
	printf("Antecessor %i\n",n);
	
	//Sucessor
	n=n+2;
	printf("Sucessor %i\n",n);
	
	return 0;
}
