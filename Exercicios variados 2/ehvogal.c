#include<stdio.h>
#include<stdlib.h>

int ehVogal(char letra){
	if(letra == 'a' || letra =='e' || letra == 'i' || letra == 'o' || letra == 'u' ){
		return 1;
	}else{				//Verificando se a letra é vogal.
		return 0;
	}
}

int main(){
    char letra;
    int resposta;
    printf("Digite uma letra: ");
    scanf("%c",&letra);
    resposta = ehVogal(letra);
    if(resposta == 1){
    	printf("\n");
        printf("A letra %c eh uma vogal.\n",letra);
    }else{  
   		printf("\n");
        printf("A letra %c nao eh uma vogal.\n",letra);
    }
return 0;
}
