#include <stdio.h>
#include <stdlib.h>
void matriz(int* t){
	int m[*t][*t];
	if(*t < 0 && *t> 10){
		printf("ERROOO!!!!!!");
	}else{
		for(int j=0;j<*t;j++){
			for(int i=0;i<*t;i++){
				if(j == i){
					m[j][i]=1;
				}else{
					m[j][i]=0;
				}
			}
		}
	}
	for(int j=0;j<*t;j++){
		for(int i=0;i<*t;i++){
			printf("%i ",m[j][i]);
		}
		printf("\n");
	}
}
int main(){
	int tam;
	scanf("%i",&tam);
	matriz(&tam);
	return 0;
}

