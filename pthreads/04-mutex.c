/* Este codigo resolve o problema do codigo 03-regiao_critica.c */

#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

/* Inicializacao estatica de um mutex */
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

void *regiao(void *arg)
{
    
    int *ptr = (int *)arg;
    int id = *ptr;
    /* Usando o LOCK, conseguimos garantir que a thread em execucao acessara a regiao critica
     * e excluira outras de acessarem ate que ela seja finalizada. Ao final, sempre devemos
     * liberar a regiao com o UNLOCK */
    pthread_mutex_lock(&mutex);
    printf("Thread %d entrando na região crítica...\n", id);
    sleep(2);
    printf("Thread %d finalizada!\n", id);
    pthread_mutex_unlock(&mutex);
    pthread_exit(NULL);
}

int main()
{
    int size = 3;
    pthread_t threads[size];

    int i = 0;
    while (i < size)
    {
        pthread_create(&threads[i], NULL, regiao, &i);
        i = i + 1;
    }

    pthread_exit(NULL);
}