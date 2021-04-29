#include <stdio.h>
#include <stdlib.h>

void soma(int *p1, int p2){
	*p1 = *p1 + p2;
}

int main(){
    int n1,n2;
    scanf("%i%i",&n1,&n2);
    soma(&n1,n2);
    printf("Resultado da soma eh: %i\n",n1);
    return 0;
}
