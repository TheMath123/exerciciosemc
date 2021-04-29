#include <stdio.h>

int main(){
	int vlogica1, vlogica2, x;
	
	x=200;
	vlogica1=(x>=0) && (x<=5);
	vlogica2=!((x>=0) && (x<=5));
	
	printf("O valor %i esta dentro do intervalo 0 a 5? %i\n",x,vlogica1);
	printf("O valor %i fora do intervalo 0 a 5? %i",x,vlogica2);
	
	return 0;
}
