#include <stdio.h>
#include <stdlib.h>
#include "TADPilha.h"
void criaPilha( Pilha *P){
	P->inicio=NULL;
	P->fim=NULL;
}
void Inserir( Pilha *P, int n){
	Celula *new = (Celula*)malloc(sizeof(Celula));
	new->valor= n;
	if(P->inicio==NULL){
		P->inicio=new;
		P->fim=new;
	}else{
		P->fim->proximo=new;
		P->fim=new;
		new->proximo=NULL;
	}
}

void Remover(Pilha *P){
	Celula *x, *y;
    x = P->fim;
    y = P->inicio;
    for(int i=0;i<(Tamanho(P)-2);i++){
        y = y->proximo;
    }
    P->fim=y;
    y->proximo=NULL;
    if (x != NULL){
        free(x);
    }
}

int Tamanho(Pilha *P){
	if(P->inicio==NULL){
		return 0;
	}else{
		Celula* temp=P->inicio;
		int i=0;
		while(temp!=NULL){
			i++;
			temp=temp->proximo;
		}
		return i;
	}
}

int Busca(Pilha *P, int n){
	Celula *aux=P->inicio;
	int i=1,pos=0;
	if (aux==NULL){
		return 0;
	}else{
		while(aux!=NULL){
			if(aux->valor==n){
				pos=i;
				break;
			}else{
				i++;
				aux=aux->proximo;
			}
		}
	}
	if(pos==0){
			return 0;
	}else{
		return pos;
	}

}

void Imprime(Pilha *P){
	Celula *aux=P->fim;
	if(aux==NULL){
		printf("Lista Vazia!\n");
	}else{
		printf("|");
		while(aux!=NULL){
			printf("%d->",aux->valor);
			aux = aux->proximo;
		}
		printf("|\n");
	}
}

void Menu(Pilha *P){
    printf("\n-1 - Sair\n");
    printf("1 - Inserir\n");
    printf("2 - Remover\n");
    printf("3 - Buscar\n");
    printf("4 - Tamanho\n");
    printf("5 - Imprimir\n");
    int op,n;
    scanf("%i",&op);
    switch(op){
    	//SAIR
    	case -1:
    			system("clear");
    			exit(1);
    			break;
    	//INSERI
    	case 1: system("clear"); //Lipar terminal
				printf("Insira o valor: ");
    			scanf("%i",&n);
    			Inserir(P,n);
    			Menu(P);
    			break;
    	//REMOVE
    	case 2: system("clear"); //Lipar terminal
    			printf("Digite o valor que deseja remover: \n");
    			scanf("%i",&n);
    			Remover(P);
    			Menu(P);
    			break;
    	//BUSCA
    	case 3:	system("clear"); //Lipar terminal
    			printf("Insira o valor que deseja buscar: \n");
    			scanf("%i",&n);
    			if(Busca(P,n)==0){
    				printf("A lista esta vazia ou valor inexistente.\n");
    			}else{
					printf("O Valor %i esta na posicao %i da lista.",n,Busca(P,n));
    			}
    			Menu(P);
    			break;
    	//TAMANHO
    	case 4: system("clear"); //Lipar terminal
    			printf("Tamanho da Lista: %i\n",Tamanho(P));
    			Menu(P);
    			break;
    	//IMPRIME
    	case 5:	system("clear"); //Lipar terminal
    			Imprime(P);
    			Menu(P);
    			break;
    	//default
    	default:system("clear"); //Lipar terminal
    			Menu(P);
    			break;
    }

}
