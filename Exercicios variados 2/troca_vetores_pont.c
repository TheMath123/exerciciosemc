#include <stdio.h>
#include <stdlib.h>
void troca(int* v1,int* v2){
	int temp,j=0;
	for(int i=0;i<5;i++){
		temp=*(v1+j);
		*(v1+j)=*(v2+j);
		*(v2+j)=temp;
		j++;
	}
}
int main(){
	int v1[5],v2[5];
	for(int i=0;i<5;i++){
		scanf("%i",&v1[i]);
	}
	for(int i=0;i<5;i++){
		scanf("%i",&v2[i]);
	}	
	troca(v1,v2);
	printf("Vetor 1: %i,%i,%i,%i,%i\n",v1[0],v1[1],v1[2],v1[3],v1[4]);
	printf("Vetor 2: %i,%i,%i,%i,%i\n",v2[0],v2[1],v2[2],v2[3],v2[4]);
	return 0;
}

