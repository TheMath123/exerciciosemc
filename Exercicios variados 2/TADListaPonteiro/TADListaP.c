#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "TADListaP.h"

void imprime(list* l){
	printf("[");
	cell *c=l->primeiro;
	while(c->proximo != NULL){
		printf("%i ",c->valor);
		c=c->proximo;
	}
	printf("]\n");
}