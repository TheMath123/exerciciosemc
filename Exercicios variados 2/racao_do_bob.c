#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int racao(int kg){
	int i=0;
	while(kg>0){
		kg=kg/2;
		i++;
	}
	return i;
}
int main(){
	int kg;
	scanf("%i",&kg);
	printf("%i Dias\n",racao(kg));
	return 0;
}