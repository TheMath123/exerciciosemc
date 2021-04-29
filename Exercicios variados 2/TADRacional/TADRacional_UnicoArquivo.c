#include <stdio.h>
#include <stdlib.h>
#include <string.h>

	//ESTRUTURA DE DADOS
	struct racional{
	    int num; //Numerador
    	int den; //Denomidador
	};

	typedef struct racional rac;

	//OPERAÇÕES:
	rac multi(rac racional1, rac racional2);
	rac soma(rac racional1, rac racional2);

	rac multi(rac r1, rac r2){
	    rac r;
 		//PRÉ-CONDIÇÃO
 		if(r1.den!= 0 && r2.den!=0){
 		   //OPERAÇÃO DE MULTIPLICAÇÃO
 		   r.num = r1.num * r2.num;
 		   r.den = r1.den * r2.den;
 		}
    	//RETORNO DO RACIONAL
    	return r;
	}
	rac soma(rac r1, rac r2){
			rac resp;
			if (r1.den != 0  && r2.den != 0){
				resp.den = r1.den * r2.den;
//				printf("resp.den: %i\n",resp.den); //debug
				resp.num = (r1.num * r2.den) + (r1.den * r2.num);
			}
 		return resp;
	}

int main(){


	///CODE
	rac val1,val2,val3; // Criando 3 variáveis do tipo rac (racional)

    val1.num = 2;
    val1.den = 3;

    printf("(%i | %i)\n",val1.num,val1.den);

    val2 = val1;
	printf("(%i | %i)\n",val2.num,val2.den);

    val3 = multi(val1,val2); // Utilizando a função multiplica do TADRacional
    printf("(%i | %i)\n",val3.num,val3.den);

/*	//debug:
    printf("val1.den: %i / val1.num: %i\n",val1.den, val1.num );
    printf("val2.den: %i / val2.num: %i\n",val2.den, val2.num );
    printf("val3.den: %i / val3.num: %i\n",val3.den, val3.num );
*/ 

    val3 = soma(val1,val2); // Utilizando a função soma. Mas não funciona ainda :(, funciona sim seu fdp >:(
    printf("(%i | %i)\n",val3.num,val3.den);


	return 0;
}