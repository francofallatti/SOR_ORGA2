#include <stdio.h>

//macro
#define CUADRADO(x) (x * x)

int main (){
	int x;

	printf("Ingrese numero: ");
	scanf("%d", &x);

	int resultado = CUADRADO(x);

	printf("El cuadrado de %d es: %d\n", x, resultado);

	return 0;
}
