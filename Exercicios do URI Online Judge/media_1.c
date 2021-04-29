#include <stdio.h>

int main(){
	float n1,n2,n3,media;
	scanf("%f %f",&n1,&n2);
	n1=n1*3.5;
	n2=n2*7.5;
	media=(n1+n2)/11;
	printf("MEDIA = %0.5f\n",media);
	return 0;
}

