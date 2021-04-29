#include <stdio.h>

int main(){
	float x1,x2,y1,y2,n1,n2,r;
	scanf("%f %f",&x1,&y1);
	scanf("%f %f",&x2,&y2);
	n1=(x2-x1);
	n2=(y2-y1);
	n1=n1*n1;
	n2=n2*n2;
	r=n1+n2;
	
	return 0;
}

