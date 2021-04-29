#include <stdio.h>

int main(){
	int a;
	printf("Digite o valor:\n");
	scanf("%i",&a);
	if (a>=0){
		printf("O valor absoluto eh: %i",a);
	} else {
		printf("O valor absoluto eh: %i",a*-1);
	}
	return 0;
}
