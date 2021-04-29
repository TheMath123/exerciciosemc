
struct cell{
    int valor; //variável do tipo inteiro
    struct cell *proximo; //variável ponteiro do tipo struct celula
};
typedef struct cell cell;

struct list{
	cell *primeiro;
	cell *ultimo;
};
typedef struct list list;

void imprime(list *l);
