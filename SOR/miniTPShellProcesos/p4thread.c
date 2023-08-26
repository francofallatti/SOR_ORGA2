#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <stdint.h>

void do_nothing(int microsegundos){
    usleep(2000000);
}

int main(){
    pthread_t tid[]; 
    pthread_attr_t attr;

    pthread_attr_init(&attr);

    for(int i = 0; 0<=5;i++){
        pthread_create(&tid[i], &attr, do_nothing,null);
    }

    for(int i = 0; 0<=5;i++){
        pthread_join(tid[i],NULL);
    }

    return 0;
}