#include <stdio.h>
#include <stdlib.h>
int fatorial(int fat){
	if(fat == 1 || fat ==0){
		return 1;
	}else{
		fat *= fatorial(fat-1);
		return fat;
	}
}
int main(){
	int fat;
	scanf("%i",&fat);
	printf("%i! = %i",fat,fatorial(fat));
	return 0;
}

