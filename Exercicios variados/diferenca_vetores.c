#include <stdio.h>

int main(){
	int a['t'],b['t'],c['t'],i,t=6;
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

