#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	//==========
    int d,c,n; //Var. de Contagem
    char na[5][11],inv[5][11]; //Matriz de n 5x11
    //==========

	//==Entrada
    for(n=0;n<5;n++){
        scanf("%s",na[n]); //lendo a prmeira string e armazenando na linha `n` da matriz.
        na[n][10]='\0'; //Adicionando o '\0' na última posição da string.
    }
    //=========
    
	for(c=0;c<5;c++){
    	for(d=strlen(na[c])-1;d>=0;d--){
    		inv[c][strlen(na[c])-d-1] = na[c][d];
		}
		inv[c][strlen(na[c])]='\0';
	}

    //Mostrando na tela os n armazenados na matriz por linha.
    for(n=0;n<5;n++){
    	printf("%s%s\n",na[n],inv[n]);
	}
	//=========
	
	
    return 0;
}
