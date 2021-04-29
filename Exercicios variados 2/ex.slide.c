#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void man(char* narq){
	FILE *p = fopen(narq,"w");
	char* v=(char*)malloc(999), cont=(char*)malloc(999);
	if(p==NULL){
		printf("ERROOOO!!!");
		exit(1);
	}
	
	printf("Escreve seu texto:\n");
	fgets(v,999,stdin);
	
	fprintf(p,"Texto:\n%s\n",v);
//	int t=strlen(v);
	//fprintf(p,"Quant. de Caracteres: %i\n\n\n",t);
	
	fclose(p);
}
/*
void ler(char* narq){
	system("cls");
	FILE *p = fopen(narq,"r");
	char* v=(char*)malloc(999), cont=(char*)malloc(999);
	if(p==NULL){
		printf("ERROOOO!!!");
		exit(1);
	}

	fread(cont,sizeof(char),9999,p);
	printf("%s\n",cont);
	system("pause");
	fclose(p);
}
*/
int main(){
	char* narq=(char*)malloc(200);
	printf("Nome do arquivo:\n");
	scanf("%s",narq);
	narq=strcat(narq,".txt");
	FILE* p=fopen(narq,"w");
	fprintf(p,"SALVO COM SUCESSO\n");
	man(narq);
	ler(narq);
	fclose(p);
}
