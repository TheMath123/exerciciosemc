#include "TADRacional.h"
#include<stdio.h>

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
        //printf("resp.den: %i\n",resp.den); //debug
        resp.num = (r1.num * r2.den) + (r1.den * r2.num);
        }
    return resp;
}