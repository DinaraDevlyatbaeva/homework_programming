#include <stdio.h>

//Программа, переводящая время из секунд в часы и минуты
int main(void){
	int n, a, b, c, v;
	printf("Введите n-ую секунду суток:\n"); 
	scanf("%d", &n);
	b = n / 3600;
	c = n % 3600;
	a = c / 60;
	v = c % 60;
	printf("%d часов, %d минут и %d секунд", b, a, v);
	return 0;
}
	
	
