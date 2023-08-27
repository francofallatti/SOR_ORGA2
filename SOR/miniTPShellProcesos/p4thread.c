#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>
#include <time.h>

void do_nothing(){
    usleep(2000000);
}

int main(){
    pthread_t tid[5];
    pthread_attr_t attr;

    pthread_attr_init(&attr);

    for(int i = 0; i<5;i++){
        pthread_create(&tid[i], &attr, (void *(*)(void *))do_nothing,NULL);
    }

    for(int i = 0; i<5;i++){
        pthread_join(tid[i],NULL);
    }

    return 0;
}
