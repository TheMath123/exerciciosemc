#include <stdio.h>

int main(){
	
	float n1,n2;
	printf("Digite as duas primeira notas:\n");
	scanf("%f %f",&n1,&n2);
	printf("Primeira Nota: %.1f, Segunda Nota: %.1f\n",n1,n2);
	n1=n1+n2;
	printf("Digite a terceira nota: ");
	scanf("%f",&n2);
	printf("Terceira Nota: %.1f\n",n1);
	n1=n1+n2;
	printf("Media final: %.1f\n",n1/3);
	
	return 0;
}
