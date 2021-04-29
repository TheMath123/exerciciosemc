#include<stdio.h>
int main (){
	int N,N2;
	scanf("%i",&N);
	printf("%i\n",N);
	N2 = N/100;
	N -= N2*100;
	printf("%i nota(s) de R$ 100,00\n",N2);
	N2 = N/50;
	N -= N2*50;
	printf("%i nota(s) de R$ 50,00\n",N2);
	N2 = N/20;
	N -= N2*20;
	printf("%i nota(s) de R$ 20,00\n",N2);
	N2 = N/10;
	N -= N2*10;
	printf("%i nota(s) de R$ 10,00\n",N2);
	N2 = N/5;
	N -= N2*5;
	printf("%i nota(s) de R$ 5,00\n",N2);
	N2 = N/2;
	N -= N2*2;
	printf("%i nota(s) de R$ 2,00\n",N2);
	N2 = N/1;
	N -= N2;
	printf("%i nota(s) de R$ 1,00\n",N2);
	
	
return 0;	
}
