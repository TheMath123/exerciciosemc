#include <stdio.h>

int main(){
	int a,n;
	printf("Informe uma valor inteiro e positivo de tres digitos:\n");
	scanf("%i",&n);
	a=(n%10)*100;
	a+=((n/10)%10)*10;
	a+=((n/100)%10);
	printf("O numero invertido eh %d",a);
	return 0;
}