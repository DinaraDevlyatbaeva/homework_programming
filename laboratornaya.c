#include <stdio.h>
#include <stdlib.h>

int main(void){
	int i, j, ecx;
	int m = 3 + rand() % 5;
	int n = 4 + rand() % 5;
	printf("Размер массива:\n");
	scanf("%d\n%d", &m, &n);
	printf("Элементы массива:\n");
	//Объявление массива
	int myArray[m][n]; 
	
	//Вывод массива на экран  
	for ( i = 0; i < m; i++ ) {
		for ( j = 0; j < n; j++ ){
        printf( "[%d][%d]=%d\n", i, j, myArray[i][j]);  
		printf( "\n" );
		}
	}   
	
	//Меняем местами первую и последнюю строки
	ecx = 0;
	for ( i = 0; i < m/2; i++ ) {
		for ( j = 0; j < n; j++ ) {
			ecx = myArray[0][j];
			myArray[0][j] = myArray[m - 1][j]; 
			myArray[m - 1][j] = ecx;
			printf("Элементы массива с перевернутыми первым и последним строками:\n");
			for ( i = 0; i < m; i++ ) {
				for ( j = 0; j < n; j++ ){
					printf( "[%d][%d]=%d\n", i, j, myArray[i][j]);  
					printf( "\n" );
				}
			}
		}
	}
	return 0;
}
