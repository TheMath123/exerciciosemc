#include <stdio.h>

int main(){
	//Variaveis.
	int x, y, r;

	//Atribuição de valores na variavel.
	x=0;
	scanf("%i", &y);

	do
	{
		x=x+1;
		r=y*x;
		printf("%ix%i=%i\n",y,x,r);
	} while (r<=y*9);
	
	return 0;

}
