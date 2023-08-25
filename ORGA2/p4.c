#include <stdio.h>

int main(){
	int n,aux;
	aux=1;
	printf("ingrese numero a calcular su factorial: ");
	scanf("%d", &n);

	for (int i=1; i <= n; i++){
		aux*=i;
	}

	printf("el factorial de %d es: %d\n",n, aux);

	return 0;
}
