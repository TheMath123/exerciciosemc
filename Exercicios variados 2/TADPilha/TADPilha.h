#include <stdio.h>
#include <stdlib.h>
struct Celula {
    int valor;
    struct Celula* proximo;
};

typedef struct Celula Celula;

struct Pilha {
    Celula* inicio;
    Celula* fim;
};

typedef struct Pilha Pilha;

// FUNCAO PARA INICIALIZAR INICIO E FIM COMO NULL
void criaPilha( Pilha *P);

// FUNCAO PARA INSERIR UM ELEMENTO NA Pilha (INSERIR NO FIM)
void Inserir( Pilha *P, int n);

// FUNCAO PARA REMOVER UM ELEMENTO DA PILHA ( REMOVE APENAS O INICIO)
void Remover(Pilha *P);

// FUNCAO PARA MOSTRAR O TAMANHO DA Pilha
int Tamanho(Pilha *P);

// FUNCAO DE BUSCA PARA MOSTRAR A POSICAO DO ELEMENTO DESEJADO, NA Pilha, SE EXISTIR
int Busca(Pilha *P, int n);

//FUNCAO PARA IMPRIMIR TODOS OS ELEMENTOS DA Pilha
void Imprime(Pilha *P);

// FUNCAO PARA MOSTRAR NA TELA O MENU COM AS OPERACOES PARA/COM A Pilha
void Menu(Pilha *P);
