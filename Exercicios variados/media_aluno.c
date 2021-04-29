#include <stdio.h>

int main(){
	
	//Variaveis.
	float n1, n2, n3, mf;
	
	// Pegando Notas.
	printf("Digite a primeira nota: ");
	scanf("%f", &n1);
	printf("Digite a segunda nota: ");
	scanf("%f", &n2);
	printf("Digite a terceira nota: ");
	scanf("%f", &n3);
	
	//Calculo da Média.
	mf = (n1+n2+n3)/3;
	
	//Mostrando resultados.
	printf("Primeira Nota: %.1f\nSegunda Nota: %.1f\nTerceira Nota: %.1f\n",n1,n2,n3);
	printf("A Media Final do Aluno e %.1f\n",mf);
		
	return 0;
}
