#include <stdio.h>
#include <stdlib.h>

int dec(int n){
	if(n==0){
		printf("%i\n",n);
	}else{   
		if(n%2 == 0){
			printf("%i,",n);
			n = dec(n-1);
		}else{
			n = dec(n-1);
		}
	}
	return n;
}
int main(){
	int num;
	scanf("%i",&num);
	dec(num);
	return 0;
}

