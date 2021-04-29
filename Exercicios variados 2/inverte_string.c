#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//Função para ler os caracteres do usuário até encontrar um enter
void leCaracteresUsuario(char *vetor){
	fgets(vetor,100,stdin);
}

//Inverte a ordem dos elementos do vetor de caracteres
void inverte(char *vetor){
	int t=strlen(vetor)-1;
	int j=(t)/2,c=0,d=t;
	for(int c+1=j;i>=0;i--){
		char temp=*(vetor+c);
		*(vetor+c)=*(vetor+d);
		*(vetor+d)=temp;
		d--;
		c++;
	}
}

//Imprime os elementos do vetor de caracteres
void imprime(char *vetor){
	printf("%s\n",vetor);
}

int main(){
    char vetor[100];
    leCaracteresUsuario(vetor);
    inverte(vetor);
    imprime(vetor);
    return 0;
}
