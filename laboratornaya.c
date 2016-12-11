#include <stdio.h>
#include <stdlib.h>

int main(void){
	int i, j, ecx, min, k, s, x, y, c, z;
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
	x=m-1;
	y=n-1;
	int myArray2[x][y];
	for (i=0; i<x; i++) {
		if (i<k) c=0;
		else c=1;
		printf("\n");
			for(j=0;j<y;j++){
				if (j<s) z=0;
				else z=1;
				myArray2[i][j]=myArray[i+c][j+z];
				printf("[%d][%d]=%d\n", i, j, myArray2[i][j]);
			}
	}
	return 0;
}
