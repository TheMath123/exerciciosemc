#include <stdio.h>

int main(){
	int a,b,c,maiorAB;
	scanf("%i %i %i",&a,&b,&c);
	if(a>b && a>c){
		printf("%i eh o maior\n",a);
	}
	if(b>a && b>c){
		printf("%i eh o maior\n",b);
	}
	if(c>a && c>b){
		printf("%i eh o maior\n",c);
	}
	return 0;
}
