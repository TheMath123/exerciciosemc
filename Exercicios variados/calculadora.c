#include <stdio.h>

int main(){
	int opcao;
	float a,b;

	printf("1. Somar 2 valores\n");
	printf("2. Subtrair 2 valores\n");
	printf("3. Multiplicar 2 valores\n");
	printf("4. Dividir 2 valores\n");
	
	scanf("%i",&opcao);
	scanf("%f %f",&a,&b);
	
	switch(opcao){
		case 1: printf("Somar %.2f + %.2f = %.2f\n",a,b,a+b);
				break;
		case 2: printf("Subtrair %.2f - %.2f = %.2f\n",a,b,a-b);
				break;
		case 3: printf("Multiplicar %.2f * %.2f = %.2f\n",a,b,a*b);
				break;
		case 4: printf("Dividir %.2f / %.2f = %.2f\n",a,b,a/b);
				break;
	}
	return 0;
}
