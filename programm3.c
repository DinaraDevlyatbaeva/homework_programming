#include <stdio.h>
#include <math.h>
int main(void){
	int num, res, deg;
	scanf("%d %d", &deg, &num);
    if (deg >= 0){
        res = pow (num, deg);
        printf("%d", res);
    }
    else{
        printf("Net resheniya");
    }
	return 0;
}


