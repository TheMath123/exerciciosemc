#include <stdio.h>

int main(){
	int i,pir[9];
	
	for(i=0;i<9;i++){
		scanf("%i",&pir[i]);
		//printf("vet[%i]=%i\n",i,pir[i]);
	}
	printf("    %i\n",pir[4]);
	printf("   %i%i%i\n",pir[3],pir[4],pir[5]);
	printf("  %i%i%i%i%i\n",pir[2],pir[3],pir[4],pir[5],pir[6]);
	printf(" %i%i%i%i%i%i%i\n",pir[1],pir[2],pir[3],pir[4],pir[5],pir[6],pir[7]);
	for(i=0;i<9;i++){
		printf("%i",pir[i]);
	}
	return 0;
}

