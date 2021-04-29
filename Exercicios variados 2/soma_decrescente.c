#include <stdio.h>
#include <stdlib.h>
void soma(int *a){
	int t=*a;
	for(int i=0;i<*a;i++){
		t+=i;
	}
	*a=t;
}
int main(){
	int a;
	scanf("%i",&a);
	soma(&a);
	printf("Soma: %i\n",a);
	return 0;
}
