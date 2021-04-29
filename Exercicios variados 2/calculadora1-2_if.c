#include <stdio.h>
#include <stdlib.h>

int main(){
	double v[2];
	char sinal;
	
	while(1){
		printf("Digite o primeiro valor, a operacao e o segundo valor:\n");
		scanf("%lf %c %lf",&v[1],&sinal,&v[2]);

	/*Analizando sinal, e calculando resultado.*/	
		if(sinal == '+'){
			printf("Resultado = %.2lf\n",v[1]+v[2]);
		}else if(sinal == '-'){
			printf("Resultado = %.2lf\n",v[1]-v[2]);
		}else if(sinal == 'x' || sinal == '*'){
			printf("Resultado = %.2lf\n",v[1]*v[2]);
		}else if(sinal == '/'){
			if(v[2] == 0){
				printf("Operacao Invalida.\n");
			}else{
				printf("Resultado = %.2lf\n",v[1]/v[2]);
			}	
		}else if(sinal == 's'){
			break;
		}else if(sinal != '+' || sinal != '-' || sinal != 'x' || sinal != '*' || sinal != '/' ){
			printf("Operacao Invalida.\n");
		}
	}
	
	return 0;
}
