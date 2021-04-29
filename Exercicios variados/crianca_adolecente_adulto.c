#include <stdio.h>

int main(){
	
	//Variaveis.
	int crianca,adolecente,adulto,x;
	
	//Entrada da Idade.
	scanf("%i",&x);
	
	//Consulta se a pessoa é criança, adolecente ou adulto.
	crianca=(x>=0) && (x<=12);
	adolecente=(x>12) && (x<18);
	adulto=(x>=18);
	
	//Mostrar o Resultado na tela.
	printf("Crianca %i Adolescente %i Adulto %i",crianca,adolecente,adulto);
	// 0 = Falso, 1 = Verdade
	
	return 0;
}
