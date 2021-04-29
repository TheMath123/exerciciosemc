#include<stdio.h>

int main(){
	float dolar,conv,real;
	printf("Digite o valor em R$\n");
	scanf("%f",&real);
	printf("Digite o valor da cotacao U$\n");
	scanf("%f",&dolar);
	conv=real/dolar;
	printf("U$: %.2f",conv);	
	return 0;
}
