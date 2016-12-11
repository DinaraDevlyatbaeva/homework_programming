#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	int i, j, ecx, min, k, s;
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
	
	
	//Находим наименьший элемент массива
	for ( i = 0; i < m; i++ ) {
		for ( j = 0; j < n; j++ ){
			if(min>myArray[i][j]) {
				min=myArray[i][j];
				k=i;
				s=j;
			}
		}
	}
	printf("Минимальное значение: [%d][%d]=%d\n", k, s, min);
	
	//Удаление строки и столбца на пересечении которых находится наименьший элемент массива
	for ( k=i; k < m-1; k++ ) {
		for ( j = 0; j < n; j++ ){
			myArray[k][j] = myArray[k+1][j];
			m--;
		}
	}
	printf( "[%d][%d]=%d\n", k, j, myArray[k][j]);		
	return 0;
}
