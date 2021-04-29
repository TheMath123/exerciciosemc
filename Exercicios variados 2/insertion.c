#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void insertion(int *t){
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
	int temp,i,j;
	for (i=1; i<*t; i++){
		temp = v[i];
		for (j=i-1; (j>=0) && (temp<v[j]); j--){
			v[j + 1] = v[j];
        }
		v[j+1] = temp;
	}
	int vixi=*t;
	printf("Depois:\n");	//IMPRIME O VETOR ORDENADO.
	for(int i=0;i<*t;i++){
		if(vixi<=1){
			printf("%i",v[i]);
		}else{
			printf("%i ",v[i]);
		}
	}
	printf("\n");
}

int main(){
	int t;
	scanf("%i",&t); //TAMANHO DO VETOR.

	insertion(&t);
	return 0;
}
