#include <stdio.h>
#include "TADLista.h"

Lista criaLista1(Lista l){

    l.ultimo = 0;
    l.primeiro = 0;
    // printf("CRIA P:%i U:%i\n",l.ultimo,l.primeiro);
    return l;
}

void criaLista2(Lista *l){

    l->ultimo = 0;
    l->primeiro = 0;
    //printf("CRIA P:%i U:%i\n",l->ultimo,l->primeiro);
}
int vazia(Lista l){
    return(l.primeiro==l.ultimo);
}

Lista inserir(Lista l, int x){
    //Verificar se a lista está cheia
    if(l.ultimo < MAX){
        //Inserir o elemento x na lista l
        l.vetor[l.ultimo] = x; // inserindo na ultima
        l.ultimo++;
    }
    return l;
}

void imprime(Lista l){
    printf("[");
    int temp=l.ultimo;
    for (int p=0; p<l.ultimo; p++){
        if(temp<=1){
            printf("%i",l.vetor[p]);
        }else if(temp>1){
            printf("%i|",l.vetor[p]);
        }
        temp--;
    }
    printf("] Tamanho:%i \n",tam_list(l));
}

int tam_list(Lista l){
    return l.ultimo;
}

Lista inserirFim(Lista l, int x){
    if(l.ultimo<MAX){
        l.vetor[l.ultimo]=x; 
        l.ultimo++;
    }
    return l;
}

Lista inserirQualquer(Lista l,int valor, int p){
    int temp;
    if(p>=MAX){
        printf("Possicao supera o tamanho maximo da lista.\n");
    }else{
        temp=l.vetor[p-1];
        l.vetor[p-1]=valor;
        for (int i=p; i<l.ultimo; i++){
            valor=l.vetor[i];
            l.vetor[i]=temp;
            temp=valor;
        }
        l.ultimo++;
        l.vetor[l.ultimo-1]=valor;
    }
    return l;
}

Lista removerQualquer(Lista l, int p){
    int temp,temp2;
    if(vazia(l) || p>=l.ultimo ){
        printf("Lista Vazia ou Possicao nao existe.\n");
    }else{
        l.vetor[p-1]=l.vetor[p];
        temp=l.vetor[p+1];
        for (int i = p; i < l.ultimo; i++){
            temp2=l.vetor[i];
            l.vetor[i]=temp;
            temp=temp2;
        }
        l.ultimo--;
        l.vetor[l.ultimo-1]=temp;
    }
    return l;
}

Lista remover(Lista l){
    l.ultimo--;
    return l;
}