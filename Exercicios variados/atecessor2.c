#include <stdio.h>
int main(){
	
	//Variaveis
	int n;
	
	//Entrada do Valor
	printf("Digite um numero: ");
	scanf("%i",&n);
	
	//Antecessor
	printf("Antecessor %i\n",n--);
	
	//Sucessor
	printf("Sucessor %i\n",n++);
	
	return 0;
}
