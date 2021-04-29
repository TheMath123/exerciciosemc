#include <stdio.h>

int main(){
	int n,x,y,z,r;
	scanf("%i %i %i %i",&n,&x,&y,&z);
	if(n>=0 && n<=1000 && x>=1 && x<=1000 && y>=1 && y<=1000 && z>=1 && z<=1000){
		
		if(n>=(x+y+z)){
			r=3;
		}else if(n>=(x+y) || n>=(x+z) || n>(y+z)){
			r=2;
		}else if(n>=x || n>=y || n>=z){
			r=1;
		}else{
			r=0;
		}
	}
	printf("%i",r);
	return 0;
}

