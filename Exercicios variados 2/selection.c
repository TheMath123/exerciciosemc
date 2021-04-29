#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void selection(int *t){
	int v[*t]; //CRIA O VETOR.

	for(int i=0;i<*t;i++){ //ATRIBUINDO VALORES AO VETOR.
		scanf("%i",&v[i]);
	}
	printf("Antes:\n");
	for(int i=0;i<*t;i++){ //IMPRIME VETOR SEM ESTÁ ORDENADO.
		printf("%i ",v[i]);
	}
	printf("\n");

	//ORDENAÇÃO
	int temp,i,j,min;
	for (i = 0; i < (*t-1); i++){
    	min = i;
    	for (j = (i+1); j < *t; j++) {
    		if(v[j] < v[min]) 
    			min = j;
    	}
     	if (v[i] != v[min]) {
       		temp = v[i];
       		v[i] = v[min];
       		v[min] = temp;
     	}
  	}

	printf("Depois:\n");	//IMPRIME O VETOR ORDENADO.
	for(int i=0;i<*t;i++){
		printf("%i ",v[i]);
	}
	printf("\n");
}

int main(){
	int t;
	scanf("%i",&t); //TAMANHO DO VETOR.

	selection(&t);
	return 0;
}
