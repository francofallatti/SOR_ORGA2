#include <stdio.h>

int main(){
	double base, altura, area;

	printf("Ingrese la base: ");
	scanf("%lf", &base);

	printf("Ingrese la altura: ");
	scanf("%lf", &altura);

	//calcular area
	area = (base * altura)/2;

	printf("El area es: %.3lf\n",area);

	return 0;
}
