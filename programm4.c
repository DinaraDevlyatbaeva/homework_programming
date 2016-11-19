#include <stdio.h>
#include <math.h>

/* программа для решения квадратного уравнения */

int main(void){
	int a, b, c, D, x, x1, x2;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	D = b*b-4*a*c;
	if(D<0){
		printf("Net reshenia");
	}
	else{
		if(D>0){
			x1=(-b+sqrt(D))/(2*a);
			x2=(-b-sqrt(D))/(2*a);
			printf("%d %d", x1, x2);
		}
		else{
			x=(-b)/(2*a);
			printf("%d", x);
		}
	}
	return 0;
}
