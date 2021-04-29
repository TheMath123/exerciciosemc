#include <stdio.h>

int main(){
	int n,x1,y1,x2,y2,r,d;
	scanf("%i",&n);
	scanf("%i %i %i %i",&x1,&y1,&x2,&y2);
	r = n%2;
	if(r==0){
		if(2<=n && n<=1000){
			d = n/2;
			if ( ( (x1<=d) != (x2<=d ) ) || ( (y1<=d) != (y2<=d) ) ){
				printf("S\n");
			}else{
				printf("N\n");
			}		
		}
	}

	return 0;
}

