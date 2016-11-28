#include <stdio.h>

/*программа преобразования температуры по одной 
из шкал (Цельсии, Фаренгейты, Кельвины*/

int main(void){
	float inputvalue, celsium, fahrengate, kelwin;
	char t;
	
	printf("Ведите температуру:\n");
	scanf("%f", &inputvalue);
	printf("Введите C, F или K:\n");
	scanf("%s", &t);
	
	if(t=='C'){
		kelwin=inputvalue+273;
		fahrengate=9*inputvalue/5+32;
		printf("kelwin: %.4f\n", kelwin);
		printf("fahrengate: %.4f\n", fahrengate);
	}
	else if (t=='F'){
		celsium=5*(inputvalue-32)/9;
		kelwin=celsium+273;
		printf("celsium: %.4f\n", celsium);
		printf("kelwin: %.4f\n", kelwin);
	}
	else{
		celsium=inputvalue-273;
		fahrengate=9*celsium/5+32;
		printf("celsium: %.4f\n", celsium);
		printf("fahrengate: %.4f\n", fahrengate);
	}
	return 0;
}
		
