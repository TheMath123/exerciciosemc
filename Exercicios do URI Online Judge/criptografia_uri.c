#include <stdio.h>

int main(){
	char fra[10000],cri[10000];
	int i,k,asc[10000],asc2[10000],c=0;

	//Entrada.
		scanf("%s",fra);
		c=strlen(fra);
		printf("%i\n",c);
	//--------
	
	//Convertendo 'char' em 'int'.
	for(i=0;i<10001;i++){
		asc[i]=fra[i];
	}
	//---------------------------
	
	//Primeira Passada.
	for(i=0;i<10001;i++){
		if(asc[i]>=65 || asc[i]<=90 || asc[i]>=97 || asc[i]<=122 ){
			asc[i]=asc[i]+3; //Somando +3 na numero da tabela ASCII.
		}
	}
	//----------------
	
	//Segunda Passada.
	for(i=0;i<10001;i++){
		for(k=c;k<c;k--){
			asc2[i]=asc[k];
		}
	}
	//----------------

	//Impreção da crip.
	
	for(i=0;i<10001;i++){
		fra[i]=asc2[i]; 	//Voltando de 'int' para 'char'.
	}
	
	for(i=0;i<c;i++){
		printf("%c",fra[i]);
	}
	//----------------
	return 0;
}

