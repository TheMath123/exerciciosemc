#define MAX 5
struct Lista{
    int vetor[MAX];
    int primeiro;
    int ultimo;
};

typedef struct Lista Lista;

//OPERAÇÕES:
//Função para criar lista vazia com ponteiros
void criaLista2(Lista *l);
//Função para criar lista vazia com retorno da lista
Lista criaLista1(Lista l);
/*
FUNÇÃO PARA INSERIR UM VALOR NA LISTA
    - Lista l: lista que se deseja inserir o valor.
    - int x: valor inteiro a ser inserido.
*/
int vazia(Lista l);

Lista inserir(Lista l, int x);

//!IMPLEMENTE UMA FUNÇÃO PARA IMPRIMIR A LISTA!
void imprime(Lista l);
//!IMPLEMENTE UMA FUNÇÃO PARA CALCULAR O TAMANHO DA LISTA!jn
int tam_list(Lista l);
Lista inserirQualquer(Lista l,int valor, int p);

Lista inserirFim(Lista l, int x); //Inserir na última possição da lista.

Lista removerQualquer(Lista l, int p);

Lista remover(Lista l);
