#include <stdio.h>

int main(){
	int a,b,c,d,e,f;
	scanf("%i %i %i %i",&a,&b,&c,&d);
	e=a+b;
	f=c+d;
	if(b>c && d>a && f>e){
		printf("Valores aceitos\n");
	}else{
		printf("Valores nao aceitos\n");
	}
	return 0;
}
