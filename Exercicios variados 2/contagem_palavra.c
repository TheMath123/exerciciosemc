#include <stdio.h>
#include <string.h>
void procura(char *vetor, char *pala, int *quant){
	int s=strlen(pala)-1,v=strlen(vetor)-1,j=0;
	for(int i=0;i<v;i++){
		if(pala[j] == vetor[i]){
			j++;
			if(j == s){
				*juant+=1;
				j=0;
			}
		}else{
			j=0;
		}
	}
}
int main(){
    char vetor[100];
    char palavra[50];
    int frequencia=0;
	fgets(vetor,100,stdin);
	fgets(palavra,50,stdin);
    procura(vetor,palavra,&frequencia);
    printf("QTD: %i\n",frequencia);
    return 0;
}