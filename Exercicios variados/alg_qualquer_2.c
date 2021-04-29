#include <stdio.h>

int main(){
	
		int a;
		float b;
	
		a = 5.32 / 1.05;
		printf("Resultado_1 = %f\n",(5.32/1.05));
		printf("Resultado_2 = %i\n",a);
	
		a = 5 / 2;
		printf("Resultado_3 = %i\n",a);
		b = 5 / 2.0;
		//                    |
		//                   \/ . numeros de casa depois do f
		printf("Resultado_4 = %.1f \n", b);
	
	
	return 0;
}
