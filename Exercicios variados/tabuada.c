#include <stdio.h>

int main(){
	int x, y;
	x=0;

	do
	{
		x=x+1;
		y=7*x;
		printf("7 * %i = %i\n",x,y);
	} while (y<=69);
	
	return 0;

}
