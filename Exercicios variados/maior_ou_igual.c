#include <stdio.h>

int main(){
	int a,b;
	printf("Digite 2 valores:\n");
	scanf("%i %i",&a,&b);
	if (a>b){
		printf("O maior eh: %i\n",a);
	}
	if(b>a){
		printf("O maior eh: %i\n",b);
	}
	if (a==b){
		printf("Numeros iguais!\n");
	}
	return 0;
}

