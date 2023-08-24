#include <stdio.h>
#include <string.h>

struct amigo {
	char nombre[50];
	char apellido[50];
	char telefono[15];
	char fec_cumpl[11];
};

int main(){
	int id_amigo = 1;
	struct amigo amigos[id_amigo];

	strcpy(amigos[0].nombre,"fran");
	strcpy(amigos[0].apellido, "fallati");
	strcpy(amigos[0].telefono, "1234567890");
	strcpy(amigos[0].fec_cumpl, "26/09");

	printf("Lista de amigos:");
	for(int i=0; i<id_amigo;i++){
		printf("\n Amigo %d:", i+1);
		printf("\n Nombre: %s %s", amigos[i].nombre, amigos[i].apellido);
		printf("\n Telefono: %s", amigos[i].telefono);
		printf("\n Fecha de Cumpleaños: %s", amigos[i].fec_cumpl);
		printf("\n");
	}

	return 0;
}
