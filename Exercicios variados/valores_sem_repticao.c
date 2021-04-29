#include <stdio.h>



int main(){
	int i,a[10],rep[10],t=10,b;
	//----Entrada----
	for(i=0;i<t;i++){
		rep[i]=0;
		scanf("%i",&a[i]);
	}
	//--------------
	
	//----Teste----
	for(i=0;i<t;i++){
		b=i+1;
		if(a[i]!=a[b]){
			rep[i]=a[i];
		}
	}
	//--------------

	//----Saida----
	for(i=0;i<t;i++){
		if(1){
			printf("%i ",rep[i]);
		}		
		
	}
	//--------------
	return 0;
}
