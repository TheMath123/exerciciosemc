#include <stdio.h>
#include <stdlib.h>
void soma(int *a){
	*a=(*a)*(*a);
}
int main(){
	int a;
	scanf("%i",&a);
	soma(&a);
	printf("Quadrado: %i\n",a);
	return 0;
}
