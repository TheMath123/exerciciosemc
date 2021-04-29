#include <stdio.h>
int main(){
	int c,l,valor,vet[50][50];
	
	scanf("%i",&valor); //Entrando o valor.
	
	for(c=0;c<50;c++){ //Zerando todos vetores vet=0.
		for(l=0;l<50;l++){
			vet[c][l]=0;
		}
	}
	for(c=0;c<50;c++){ // Atribuindo valor a diagoanal 'X'.
		for(l=0;l<50;l++){
			if(c==l){
				vet[c][l]=valor;	//Diagonal '\'	
			}
			if(c+l==49){
				vet[c][l]=valor;	//Diagonal '/'	
			}
		}
	}
	for(c=0;c<50;c++){ //Imprimindo a matriz na tela.
		for(l=0;l<50;l++){
			printf("%i ",vet[c][l]);
		}
		printf("\n");
	}	
	return 0;
}

