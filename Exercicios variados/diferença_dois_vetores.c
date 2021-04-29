#include <stdio.h>

int main(){
	int a[6],b[6],c[6],i,t=6;
	for(i=0;i<t;i++){
		scanf("%i",&a[i]);
	}
	for(i=0;i<t;i++){
		scanf("%i",&b[i]);
	}
	for(i=0;i<t;i++){
		c[i]=a[i]-b[i];
		printf("%i ",c[i]);
	}

	return 0;
}

