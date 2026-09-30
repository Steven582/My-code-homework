#include <stdio.h>

int main()
{
	double x;
	double y;
	scanf("%lf", &x);
	
	if (x>2){
		y = x*(x+2);
	}else if (x>=-1){
		y=x*2;
	}else {
		y=x-1;
	}
	printf("%.6f",y);
	
}
