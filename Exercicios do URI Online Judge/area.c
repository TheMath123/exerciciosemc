#include <stdio.h>

int main(){
	double a,b,c,tri,cir,tra,qua,ret;
	scanf("%lf %lf %lf",&a,&b,&c);
	tri=(a*c)/2;
	cir=3.14159*(c*c);
	tra=(c*(a+b))/2;
	qua=b*b;
	ret=a*b;
	printf("TRIANGULO: %.3lf\nCIRCULO: %0.3lf\nTRAPEZIO: %0.3lf\nQUADRADO: %0.3lf\nRETANGULO: %0.3lf\n",tri,cir,tra,qua,ret);
	return 0;
}
