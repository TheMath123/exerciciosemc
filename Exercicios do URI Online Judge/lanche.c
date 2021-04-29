#include <stdio.h>

int main(){
	int a1,b1;
	float a;
	scanf("%i %i",&a1,&b1);
	switch(a1){
		case 1:	a=4.00;
				break;
		case 2: a=4.50;
				break;
		case 3:	a=5.00;
				break;
		case 4:	a=2.00;
				break;
		case 5:	a=1.50;
				break;
	}
	float b=b1;
	printf("Total: R$ %.2f\n",b*a);
	return 0;
}
