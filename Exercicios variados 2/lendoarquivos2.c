#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	char texto1[256],texto2[256];
	FILE *t1=fopen("texto1.txt","r"),*t2=fopen("texto2.txt","r");
	if(t1 == NULL || t2 == NULL){
		printf("Erro ao abrir o arquivo.\n");
		exit(1);
	}
	while(fgets(texto1,256,t1)!=fgets(texto2,256,t2)){
		texto1[strlen(texto1)-1]='\0';
		texto2[strlen(texto2)-1]='\0';
		printf("%s - %s\n",texto1,texto2);
	}
	fclose(t1);
	fclose(t2);
	return 0;
}