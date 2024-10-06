#include <stdio.h>

int factorial(int n){
	int i = 1;
	while (n > 1) {
		i =i*n;
		n = n-1;
}
	return i;
}

int main(int argc, char *argv[]){
	int numero;
	printf("Ingrese un n[umero para calcular el factorial: ");
	scanf("%d", &numero);

	int resultado = factorial(numero);
	printf(" El factorial de %d es %d\n", numero, resultado);
	return 0;
} 
