#include <stdio.h>

int main(){
	int quad[6],i,num[6],a=6,b=a;
	for(i=0;i<a;i++){
		scanf("%i",&num[i]);
	}
	for(i=0;i<a;i++){
		quad[i]=num[i]*num[i];
	}
	for(i=0;i<a;i++){
		b--;
		printf("%i ",quad[b]);
	}
	return 0;
}

