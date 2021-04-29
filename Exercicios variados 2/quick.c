#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void quick(int *v, int esq, int dir){
    int i=esq, j=dir, x=v[(esq+dir)/2], y;

    while(i <= j) {
        while(v[i] < x && i < dir) {
            i++;
        }
        while(v[j] > x && j > esq) {
            j--;
        }
        if(i <= j) {
            y = v[i];
            v[i] = v[j];
            v[j] = y;
            i++;
            j--;
        }
    }

    if(j > esq) {
        quick(v, esq, j);
    }
    if(i < dir) {
        quick(v, i, dir);
    }
}

void vetor(int *t){
	int v[*t], tm=*t-1;

	for(int i=0;i<*t;i++){ //ATRIBUINDO VALORES AO VETOR.
		scanf("%i",&v[i]);
	}
	printf("Antes:\n");
	for(int i=0;i<*t;i++){ //IMPRIME VETOR SEM ESTÁ ORDENADO.
		printf("%i ",v[i]);
	}
	printf("\n");

	quick(v, 0, tm); //Chamando função de ordenação.

    //IMPRIME O VETOR ORDENADO.
	printf("Depois:\n");
	for(int i=0;i<*t;i++){
		printf("%i ",v[i]);
	}
	printf("\n");
}

int main(){
	int t;
	scanf("%i",&t); //TAMANHO DO VETOR.
	vetor(&t);
	return 0;
}
