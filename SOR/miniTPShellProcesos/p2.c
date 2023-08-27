#include <stdio.h>

int main(){
	int num;
	int num2;
	int resultado;
	printf("ingrese un numero: ");
	scanf("%d", &num);
	printf("ingrese otro numero: ");
	scanf("%d", &num2);
	resultado = num * num2;
	printf("El resultado es: %d \n", resultado);
}