#include <stdio.h>
int i,j,a[10],rep[10];
int main(){
	for(i=0;i<10;i++){
		rep[i]=0;
		scanf("%i",&a[i]);
	}
	//----Teste---
	for(i=0;i<10;i++){
		for(j=0;j<6;j++){
			if(a[i]==j){
			rep[j]++;
			}		
		}
	}
	//--------------
	
	//----Mostrar---
	for(i=0;i<6;i++){
		if(rep[i]>0){
			printf("%i: %ix\n",i,rep[i]);
		}	
	}
	//--------------
	return 0;
}
