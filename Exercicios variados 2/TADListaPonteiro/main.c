#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "TADListaP.h"

int main(){
	cell c1,c2,c3,c4,c5;
	list l;

	//Atribuindo o valor das celulas.
	c1.valor=1;
    c2.valor=2;
    c3.valor=3;
    c4.valor=0;

    //Atribuindo o ponteiro das proxima celula.
    c1.proximo = &c2;
	c2.proximo = &c3;
	c3.proximo = &c4;
	c4.proximo = &c5;
	c5.proximo = NULL;
	
	l.primeiro=&c1;
	l.ultimo=&c5;
	
	imprime(&l);
	
	return 0;	
}
