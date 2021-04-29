#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void fibonacci(int t, int *seq){
	int a=1,b=1,x;
	t-=2;
	for (int i=0;i<t;i++){
		x=a+b;
		a=b;
		b=x;
	}
	*seq=x;
}
int main(){
	int t,seq;
	scanf("%i",&t);
	fibonacci(t,&seq);
	printf("%i posicao da sequencia = %i\n",t,seq);
	return 0;
}