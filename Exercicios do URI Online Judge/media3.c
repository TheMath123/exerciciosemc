#include <stdio.h>

int main(){
	float a,b,c,d,media,exame;
	scanf("%f %f %f %f",&a,&b,&c,&d);
	a=a*2;
	b=b*3;
	c=c*4;
	d=d*1;
	media=(a+b+c+d)/10;
	if(media>=7.0 && media<10.0){
		printf("Media: %.1f\nAluno aprovado.\n",media);
	}
	if(media<=4.9 && media>=0.0){
		printf("Media: %.1f\nAluno reprovado.\n",media);
	}
	if(media<=6.9 && media>=5.0){
		printf("Media: %.1f\nAluno em exame.\n",media);
		scanf("%f",&exame);
		printf("Nota do exame: %.1f\n",exame);
		media=(media+exame)/2;
		if(media>=5.0 && media<=10.0){
			printf("Aluno aprovado.\nMedia final: %.1f\n",media);
		}
		if(media<=4.9 && media>=0.0){
			printf("Aluno reprovado.\nMedia final: %.1f\n",media);
		}
	}

	return 0;
}
