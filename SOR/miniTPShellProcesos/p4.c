#include <stdio.h> //incluimos la libreria de estandar input/output
#include <unistd.h> //para hacer sleep
#include <time.h> //para inicializar el tiempo

void do_nothing(int microseconds){
    usleep(2000000); //esperar 2 segundos, 1 millon de microsegundos en 1 segundo
    //dormir el proceso, simula que esta haciendo alguna tarea
}

int main() {
    do_nothing();
    do_nothing();
    do_nothing();
    do_nothing();
    do_nothing();
 
    return 0;
}
//para compilar: gcc do_nothing.c -o ejecutable
//para ejecutar: ./ejecutable
