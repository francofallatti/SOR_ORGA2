#include <pthread.h>
#include <semaphore.h>
#include <stdio.h>

sem_t EQ1;
sem_t EQ2;
sem_t EQ3;

int finalizar_carrera = 2;
char ganador;

static void * equipo1_comienzo(){

    int acum=0;

	while(acum<2147483647){

		acum++;
	}

    sem_post(&EQ1);
}

static void * equipo2_comienzo(){

    int acum=0;

	while(acum<2147483647){

		acum++;
	}

    sem_post(&EQ2);
}

static void * equipo3_comienzo(){
    
    int acum=0;

	while(acum<2147483647){

		acum++;
	}

    sem_post(&EQ3);
}

static void * equipo1_relevo(){

    sem_wait(&EQ1);

    printf("Relevo equipo 1 \n");
    int acum=0;

	while(acum<2147483647){

		acum++;
	}

    if(finalizar_carrera%2==0){
        finalizar_carrera=1;
        ganador ='1';
    }
    
}

static void * equipo2_relevo(){

    sem_wait(&EQ2);

    printf("relevo equipo 2 \n");
    int acum=0;

	while(acum<2147483647){

		acum++;
	}

    if(finalizar_carrera%2==0){
        finalizar_carrera=1;
        ganador ='1';
    }
}

static void * equipo3_relevo(){

    sem_wait(&EQ3);

    printf("relevo equipo 3 \n");
    int acum=0;

	while(acum<2147483647){

		acum++;
	}

    if(finalizar_carrera%2==0){
        finalizar_carrera=1;
        ganador ='1';
    }
}

int main(void){

    printf("Comenzó la carrera \n");

    pthread_t thread1, thread2, thread3, thread4, thread5, thread6;

    sem_init(&EQ1, 0, 0);
    sem_init(&EQ2, 0, 0);
    sem_init(&EQ3, 0, 0);
    
    pthread_create(&thread1, NULL, *equipo1_comienzo, NULL);
    pthread_create(&thread2, NULL, *equipo2_comienzo, NULL);
    pthread_create(&thread3, NULL, *equipo3_comienzo, NULL);
    pthread_create(&thread4, NULL, *equipo1_relevo, NULL);
    pthread_create(&thread5, NULL, *equipo2_relevo, NULL);
    pthread_create(&thread6, NULL, *equipo3_relevo, NULL);

    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
    pthread_join(thread3, NULL);
    pthread_join(thread4, NULL);
    pthread_join(thread5, NULL);
    pthread_join(thread6, NULL);

    sem_destroy(&EQ1);
    sem_destroy(&EQ2);
    sem_destroy(&EQ3);

    printf("Equipo ganador es el equipo: %c \n", ganador);
    pthread_exit(NULL);
    
    return 0;
}
