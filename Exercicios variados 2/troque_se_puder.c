#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void troca(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp; 
}
int main(){
	int a,b;
	scanf("%i%i",&a,&b);
	printf("a = %i\nb = %i\n",a,b);
	if(a>b){
		troca(&a,&b);
		printf("Troca!\na = %i\nb = %i\n",a,b);
	}else{
		printf("Nao Troca!\na = %i\nb = %i\n",a,b);
	}
	return 0;
}