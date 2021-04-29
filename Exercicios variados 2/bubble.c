#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void bubble(int *t){
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
	for(int i=0;i<*t;i++){
		for(int j=0;j<*t-1;j++){
			if(v[j] > v[j+1]){
				int t = v[j+1];
				v[j+1] = v[j];
				v[j] = t;
			}
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

	orde(&t);
	return 0;
}
