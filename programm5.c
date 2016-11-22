#include <stdio.h>
#include <stdlib.h>
#define N 5

/* программа угадывания задуманного числа */

int main(void){
	int num, randnum, k;
    randnum = rand();
    for (k=0; k<N; k++){
		scanf("%d", &num);
		if(randnum==num){
			break;
		}
    }
    if(randnum==num){
		printf("Verno");
    }
    else{
		printf("Neverno");
    }
    return 0;
}

