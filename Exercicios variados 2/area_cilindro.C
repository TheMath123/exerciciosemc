#include <stdio.h>
#include <stdlib.h>

float area(float raio){
	float area;
	area = (raio*raio)*3.14;
	return area;
}

float volume(float raio,float altura){
	float volume;
	volume = area(raio)*altura;
	return volume;
}

int main(){
	float raio, altura;
	
	scanf("%f %f",&raio,&altura);
	
	if(raio>=0 && altura>=0){
		printf("Area do Cilindro: %.2f cm\n",area(raio));
		printf("Volume do Cilindro: %.2f cm\n",volume(raio,altura));
	}else{
		printf("Impossivel calcular!\n");
	}
	
	return 0;
}

