#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define SIZE 5

int findLargestLine(int matrix[SIZE][SIZE]){
	int max_secuencia = 0;
	int secuencia_actual = 0;
	for (int i = 0; i < SIZE; i++){
		for (int j = 0; j<SIZE; j++){
			if (matrix[i][j] == 1) {
				secuencia_actual++;
				if (secuencia_actual > max_secuencia){
					max_secuencia = secuencia_actual;
					}
			}else{
				secuencia_actual = 0;
		}
	}
}


	return max_secuencia;
}
 void fillRandomMatrix(int matrix[SIZE][SIZE]){
	srand(time(0));
	for (int i = 0; i< SIZE; i++){
		for (int j = 0; j<SIZE; j++){
			matrix[i][j] = rand() % 2;
		}
	}
}

int main(){
	int matrix[SIZE][SIZE];
	fillRandomMatrix(matrix);
	printf("Matriz generada: \n");
	for (int i = 0; i< SIZE; i++){
		for (int j = 0; j < SIZE; j++){
			printf("%d", matrix[i][j]);
	}
		printf("\n");
	}
	int largest_sequence = findLargestLine(matrix);
	return 0;
}
