#include <stdio.h>
int main(void){
	int a, b, c; 
	scanf ("%d", &a);
	b = 0;
	c = 1;
	while (a!=0){
		b = b+(a%10)*c;
		c = 2 * c;
		a =  ( a - (a % 10)) / 10;
	}
	printf("%d\n", b);
	return 0;
}
