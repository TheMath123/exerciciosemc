#include <stdio.h>

int main(){
	int funcionario,hora;
	float salario;
	scanf("%i %i %f",&funcionario,&hora,&salario);
	printf("NUMBER = %i\n",funcionario);
	printf("SALARY = U$ %.2f\n",hora*salario);
	return 0;
}

