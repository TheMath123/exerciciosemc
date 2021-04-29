#include <stdio.h>
int main(){
	char pa[15];
	int i,vogais;
	printf("Informe a palavra:\n");
	scanf("%s",pa);
	for(i=0;i<15;i++){
		if((pa[i] == 'a')||(pa[i] == 'e')||(pa[i] == 'i')||(pa[i] == 'o')||(pa[i] == 'u')){
			vogais++;	
		}
	}
	printf("palavra contem %i vogais\n",vogais);
	return 0;
}
