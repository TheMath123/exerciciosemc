#include <stdio.h>

int main(){
	int opcao;

	printf("1. Somar 2 valores\n");
	printf("2. Subtrair 2 valores\n");
	printf("3. Multiplicar 2 valores\n");
	printf("4. Dividir 2 valores\n");
	
	scanf("%i",&opcao);
	
	switch(opcao){
		case 1: printf("Somar 2 valores\n");
				break;
		case 2: printf("Subtrair 2 valores\n");
				break;
		case 3: printf("Multiplicar 2 valores\n");
				break;
		case 4: printf("Dividir 2 valores\n");
				break;
	}
	return 0;
}
