#include <stdio.h>
 
 int main(){
 	
 	//Variaveis.
 	 char A, B;
 	 int C, D, n1;
 	 float E, F;
 	 
 	//Atribuição de Valores na variavel.
 	 A = 'X';
 	 B = 'Y';
 	 C = 2;
 	 E = 5.54555;

 	//Atribuição de valores de outros valores.
 	 D = C;
 	 F = E;
	
	//Mostrar os valores da varaiveis.
	 printf("--------------------------------\n");
 	 printf("A:%c, B:%c, C:%i, D:%i, E:%f, F:%f\n",A,B,C,D,E,F);
 	 printf("%c + %i = %c\n",A,C,B);
 	 printf("Lixo:%i\n",n1);
 	 printf("ALL = %i\n",C+D);
 	
 	return 0;
 }
