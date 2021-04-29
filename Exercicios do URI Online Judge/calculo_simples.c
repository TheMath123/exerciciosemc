#include<stdio.h>

int main(){
	int p1,p2,q1,q2;
	float v1,v2;
	scanf("%i %i %f",&p1,&q1,&v1);
	scanf("%i %i %f",&p1,&q2,&v2);
	v1= q1*v1;
	v2= q2*v2;
	printf("VALOR A PAGAR: R$ %.2f\n",v1+v2);
	return 0;
}
