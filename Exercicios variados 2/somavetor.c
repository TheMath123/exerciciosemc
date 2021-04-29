#include <stdio.h>
#include <stdlib.h>
int soma(int vetor[]){
	int res=0;
	for(int j=0;j<10;j++){
		res=vetor[j]+res;
	}
	return res;
}
int main(){
	int v[10]={0,0,0,0,0,0,0,0,0,0};
	for(int i=0;i<10;i++){
		scanf("%i",&v[i]);
	}
	printf("%i",soma(v));
	return 0;
}

