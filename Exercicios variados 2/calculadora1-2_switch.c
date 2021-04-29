#include <stdio.h>
#include <stdlib.h>

int main(){
	double v[2],res;
	char sinal;
	while(1){
		printf("Digite o primeiro valor, a operacao e o segundo valor:\n");
		scanf("%lf %c %lf",&v[1],&sinal,&v[2]);
		
	/*Analizando sinal, e calculando resultado.*/
		switch(sinal){
			case '+': printf("Resultado = %.2lf\n",v[1]+v[2]);
					break;
			case '-': printf("Resultado = %.2lf\n",v[1]-v[2]);
					break;
			case '*': printf("Resultado = %.2lf\n",v[1]*v[2]);
					break;
			case 'x': printf("Resultado = %.2lf\n",v[1]*v[2]);
					break;
			case '/': if(v[2] == 0){
						printf("Operacao Invalida.\n");
					}else{
						printf("Resultado = %.2lf\n",v[1]/v[2]);
					}
					break;
			case 's': break;
			default: printf("Operacao Invalida.\n");
					 break;
		}
	}	
	return 0;
}
