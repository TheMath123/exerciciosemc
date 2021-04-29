#include <stdio.h>
#include <stdlib.h>
#include "TADLista.h"
void criaLista( Lista *L){
	L->inicio=NULL;
	L->fim=NULL;
}
void Inserir( Lista *L, int n){
	Celula *new = (Celula*)malloc(sizeof(Celula));
	new->valor= n;
	if(L->inicio==NULL){
		L->inicio=new;
		L->fim=new;
	}else{
		L->fim->proximo=new;
		L->fim=new;
	}

}

void Remover (Lista *L, int n){ //n é valor que deseja remover.
	Celula *x, *y; //vai criar dois ponteiros celula.
	x = L->inicio; //x irá armazenar o inicio da lista.
	y = L->inicio->proximo; //y irar armazenar o ponteiro da proxima celular da lista, + ou - isso.
	while(x != NULL && y->valor!=n){
		/* "x!= null" vai vereficar se chegou no final da celular e "y->valor != n", vai vereficar se o alor é diferente do valor que está querendo remover,
		no momento que a expreção for false o while vai parar.*/
		x=y; //Enquanto o while está rodando ele vai adicionar os valor da variavel y para x, no caso os atributos de valor e proxima celular.
		y=y->proximo; //Vai andar para proxima celula.
	}
	if (y != NULL){	
		x->proximo = y->proximo; //Salvando o valor da proxima celular caso existir.
		free(y); //Limpando a celular y.
	}
}

int Tamanho( Lista *L){
	if(L->inicio==NULL){
		return 0;
	}else{
		Celula* temp=L->inicio;
		int i=0;
		while(temp!=NULL){
			i++;
			temp=temp->proximo;
		}
		return i;
	}
}

int Busca(Lista *L, int n){
	Celula *aux=L->inicio;
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
	if(pos!=0){
		return pos;
	}else{
		return 0;
	}

}

void Imprime( Lista *L){
	Celula *aux=L->inicio;
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

void Menu (Lista *L){

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
    			Inserir(L,n);
    			Menu(L);
    			break;
    	//REMOVE
    	case 2: system("clear"); //Lipar terminal
    			printf("Digite o valor que deseja remover: \n");
    			scanf("%i",&n);
    			Remover(L,n);
    			Menu(L);
    			break;
    	//BUSCA
    	case 3:	system("clear"); //Lipar terminal
    			printf("Insira o valor que deseja buscar: \n");
    			scanf("%i",&n);
    			if(Busca(L,n)==0){
    				printf("A lista esta vazia ou valor inexistente.\n");
    			}else{
					printf("O Valor %i esta na posicao %i da lista.",n,Busca(L,n));
    			}
    			Menu(L);
    			break;
    	//TAMANHO
    	case 4: system("clear"); //Lipar terminal
    			printf("Tamanho da Lista: %i\n",Tamanho(L));
    			Menu(L);
    			break;
    	//IMPRIME
    	case 5:	system("clear"); //Lipar terminal
    			Imprime(L);
    			Menu(L);
    			break;
    	//default
    	default:system("clear"); //Lipar terminal
    			Menu(L);
    			break;
    }

}