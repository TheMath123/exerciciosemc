#include <stdio.h>

int main(){
	int r,l,d;
	scanf("%i %i %i",&l,&r,&d);
	if (r > 50 && l < r && r > d){
		printf("S");
	}else{
		printf("N");
	}
	return 0;
}

