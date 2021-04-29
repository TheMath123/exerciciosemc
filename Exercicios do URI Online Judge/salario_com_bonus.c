#include <stdio.h>

int main(){
	char nome[50];
	double salario,vendas,bonus;
	scanf("%s %lf %lf",&nome,&salario,&vendas);
	bonus=vendas*0.15;
	printf("TOTAL = R$ %.2lf\n",salario+bonus);
	return 0;
}
