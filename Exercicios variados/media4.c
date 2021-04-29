#include<stdio.h>

int main(){
	double a,b,c,d,res,r4;
	printf("Digite 4 valores\n");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	r4=a+b+c+d;
	res=r4/4;
	printf("O resultado da soma de %.2d, %.2d, %.2d e %.2d = %.2d",a,b,c,d,res);
	return 0;
}
