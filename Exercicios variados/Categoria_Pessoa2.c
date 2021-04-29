#include <stdio.h>

int main(){
	int idade;
	
	scanf("%i",&idade);
	
	if(idade>=0 && idade<=12){
		printf("Crianca\n");
	}
	if (idade>12 && idade<18){
		printf("Adolescente\n");
	}
	if(idade>=18){
		printf("Adulto\n");
	}
	
	return 0;
}
