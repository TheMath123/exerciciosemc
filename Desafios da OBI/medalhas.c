#include <stdio.h>

int main(){
	int t1,t2,t3,a=1,b=2,c=3;

	scanf("%i %i %i",&t1,&t2,&t3);
	
	if (t1<=1000 && t2<=1000 && t3<=1000){
		if (t1<t2 && t1<t3 && t2<t3){
			printf("%i\n%i\n%i\n",a,b,c);
		}
		if (t1<t3 && t1<t2 && t3<t2){
			printf("%i\n%i\n%i\n",a,c,b);
		}
		if (t2<t1 && t2<t3 && t1<t3){
			printf("%i\n%i\n%i\n",b,a,c);
		}
		if (t2<t3 && t2<t1 && t3<t1){
			printf("%i\n%i\n%i\n",b,c,a);
		}
		if (t3<t1 && t3<t2 && t1<t2){
			printf("%i\n%i\n%i\n",c,a,b);
		}
		if (t3<t2 && t3<t1 && t2<t1){
			printf("%i\n%i\n%i\n",c,b,a);
		}
	}
	return 0;
}
