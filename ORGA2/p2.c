#include <stdio.h>
#include <limits.h> //proporciona constates para representar valores max y min

//sizeof -> obtiene el valor en bytes de los tipos de datos
int main(){

	printf("Valores maximos y minimos:\n");
	printf("char min: %d\n", CHAR_MIN);
	printf("int max: %d\n", INT_MAX);
	printf("int min: %d\n", INT_MIN);
	printf("long max: %d\n", LONG_MAX);
	printf("long min: %d\n", LONG_MIN);

	printf("Tamaño de los tipos de datos básicos en  bytes:\n");
	printf("char: %zu\n", sizeof(char));
	printf("int: %zu\n", sizeof(int));
	printf("float: %zu\n", sizeof(float));
	printf("double: %zu\n", sizeof(double));
	printf("long: %zu\n", sizeof(long));

	return 0;
}
