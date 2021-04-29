#include <stdio.h>
#include <string.h>
int main(){
	char fra[150];
	int i,palavra=0;
	printf("Informe a frase:\n");
	fgets(fra,150,stdin);
	for(i=0;i<strlen(fra);i++){
		if(fra[i] == ' '){
			palavra++;
		}
	}
	printf("frase contem %i palavras",palavra+1);
	return 0;
}

