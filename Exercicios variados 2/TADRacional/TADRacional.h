//ESTRUTURA DE DADOS
struct racional{
    int num; //Numerador
   	int den; //Denomidador
};

typedef struct racional rac;

//OPERAÇÕES:
rac multi(rac racional1, rac racional2);
rac soma(rac racional1, rac racional2);