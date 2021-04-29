#include<stdio.h>
int main(){

    int c=0,l=0,soma,mat[3][3];
    //Entrada
    for(c=0;c<3;c++){
        for(l=0;l<3;l++){
            scanf("%i",&mat[c][l]);
        }
    }
    //Resultado
    for(c=0;c<3;c++){
        for(l=0;l<3;l++){
            printf("%i ",mat[c][l]);
        }
        printf("\n");
    }
    return 0;
}
