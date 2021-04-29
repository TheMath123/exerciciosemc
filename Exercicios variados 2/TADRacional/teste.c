#include<stdio.h>
#include "TADRacional.h" //Utilizando o seu TAD

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

/*  //debug:
    printf("val1.den: %i / val1.num: %i\n",val1.den, val1.num );
    printf("val2.den: %i / val2.num: %i\n",val2.den, val2.num );
    printf("val3.den: %i / val3.num: %i\n",val3.den, val3.num );
*/ 

    val3 = soma(val1,val2); // Utilizando a função soma. Mas não funciona ainda :(, funciona sim seu fdp >:(
    printf("(%i | %i)\n",val3.num,val3.den);


    return 0;
}