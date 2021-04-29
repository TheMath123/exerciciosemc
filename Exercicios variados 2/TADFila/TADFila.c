#include <stdio.h>
#include <stdlib.h>
#include "TADFila.h"

void criaFila(Fila *F){
	F->fim = NULL;
	F->inicio = NULL;
}

void Inserir(Fila *F, int n){
	Celula* nova = (Celula*)malloc(sizeof(Celula));
	nova.valor = n;
	// nova->valor = n;
	if( F->inicio == NULL){
		nova->proximo = NULL;
		F->fim = nova;
		F->inicio = nova;
	}else{
		nova->proximo = F->fim;
		F->fim = nova;
	}
}

void Remover(Fila *F){
	Celula * temp = F->fim;
	if(F->inicio == NULL){
		printf("LISTA VAZIA\n");
		return;
	}else{
		if( F->fim == F->inicio){
			F->fim = NULL;
			F->inicio = NULL;
			free(temp);
		}else{
			while ( temp->proximo != F->inicio){
			temp = temp->proximo;
			}
				F->inicio = temp;
				temp = temp->proximo;
				F->inicio->proximo = NULL;
				free(temp);	
		}
	}
}

int Tamanho(Fila *F){
	Celula* temp = F->fim;
	int t = 0;
	if(F->inicio == NULL){
		printf("\nLISTA VAZIA\n");
	}else{
		while ( temp != NULL){
			t++;
			temp = temp->proximo;
		}
	}
	return t;
}

int Busca(Fila *F, int n){
	Celula* temp = F->fim;
	int p = 1;
	if(F->inicio == NULL){
		printf("\nLISTA VAZIA\n");
		return 0;
	}else{
		while ( temp != NULL){
			if(  temp->valor == n){
				return p;
			}
			p++;
			temp = temp->proximo;
		}
		return -1;
	}
}

void Imprime(Fila *F){
	Celula* temp = F->fim;
	if(F->inicio == NULL){
		printf("\nLISTA VAZIA\n");
	}else{
		while ( temp != NULL){
			printf("%i ", temp->valor);
			temp = temp->proximo;
		}
	}
	
}

void Menu(Fila *F){
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
    			Inserir(F,n);
    			Menu(F);
    			break;
    	//REMOVE
    	case 2: system("clear"); //Lipar terminal
    			printf("Digite o valor que deseja remover: \n");
    			scanf("%i",&n);
    			Remover(F);
    			Menu(F);
    			break;
    	//BUSCA
    	case 3:	system("clear"); //Lipar terminal
    			printf("Insira o valor que deseja buscar: \n");
    			scanf("%i",&n);
    			if(Busca(F,n)==0){
    				printf("A lista esta vazia ou valor inexistente.\n");
    			}else{
					printf("O Valor %i esta na posicao %i da lista.",n,Busca(F,n));
    			}
    			Menu(F);
    			break;
    	//TAMANHO
    	case 4: system("clear"); //Lipar terminal
    			printf("Tamanho da Lista: %i\n",Tamanho(F));
    			Menu(F);
    			break;
    	//IMPRIME
    	case 5:	system("clear"); //Lipar terminal
    			Imprime(F);
    			Menu(F);
    			break;
    	//default
    	default:system("clear"); //Lipar terminal
    			Menu(F);
    			break;
    }
}