#include <stdio.h>

int suma_diagonal(int matriz[][100], int n){
	int suma_principal = 0, suma_secundaria = 0;
	
	for (int i = 0; i< n; i++){
		suma_principal += matriz[i][i];
		suma_secundaria += matriz[i][n-i-1];
}
	printf("Suma diagonal principal: %d\n", suma_principal);
	printf("Suma diagonal secundaria : %d\n", suma_secundaria);
	return suma_principal + suma_secundaria;
}
int main() {
	int matriz[100][100] ={
	    {1, 2, 3},
	    {4, 5, 6},
	    {7, 7, 7}
	    };
	    
	int n= 3;
	int suma_total = suma_diagonal(matriz, n);
	printf("Suma total de las diagonales: %d\n", suma_total);
	return 0;	
	}    
