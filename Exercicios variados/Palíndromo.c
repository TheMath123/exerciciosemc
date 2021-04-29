#include <stdio.h>

int main(){
	char a,b,c,d,e;
	
	printf("Informe 5 letras:\n");
	scanf("%c%c%c%c%c",&a,&b,&c,&d,&e);
	
	if(a == e && b  == d && c == c && d == b && e == a){
		printf("a palavra eh palindromo\n");
		exit(0);	
	}else{
		printf("a palavra nao eh palindromo\n");
		exit(0);
	}
	
	return 0;
	
}
