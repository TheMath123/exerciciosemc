#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void orde(int *v){
	for(int i=0;i<5;i++){
		for(int j=0;j<4;j++){
			if(*(v+j) > *(v+(j+1))){
				int t = *(v+(j+1));
				*(v+(j+1)) = *(v+j);
				*(v+j) = t;
			}
		}
	}
}
int main(){
	int *t;
	scanf("%i",&t);
	int v[*t];
	for(int i=0;i<5;i++){
		scanf("%i",&n[i]);
	}
	orde(n);
	for(int i=0;i<5;i++){
		printf("%i ",n[i]);
	}
	printf("\n");
	return 0;
}
