#include<stdio.h>
#include "TADLista.h"

int main(){

    Lista k; 

    criaLista2(&k);
    imprime(k);
    k = inserir(k,10);
    imprime(k);        
    k = inserir(k,20);
    imprime(k);
    k = inserir(k,30);
    imprime(k);
    k = inserir(k,40);
    imprime(k);

    k = inserirQualquer(k,15,2); // inserir 15 na posição 2 (entre o 10 e 20 na lista)
    imprime(k);

    k = remover(k); //remover o elemento da ultima posição (valor 40)
    imprime(k);

    k = removerQualquer(k,1); //remover o elemento da posição 1 (valor 10)   
    imprime(k);

    return 0;
}