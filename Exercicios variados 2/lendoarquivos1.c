#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	FILE *f=fopen("texto.txt","r");
	char c[256];
	if(f==NULL){
		printf("Erro ao abrir o arquivo.");
		exit(1);
	}
	while(fgets(c,256,f)!='\0'){
		printf("%s",c);
	}
	fclose(f);
	return 0;
}