#include <stdio.h>
#include <pthread.h>

int count = 0;

void *hello(void *arg)
{
    count = count + 1;
    printf("Hello world! (Thread %d)\n", count);
    pthread_exit(NULL);
}

int main()
{
    int size = 20;
    pthread_t threads[size];

    /* Com o uso do join, garantimos que as threads serao executadas em ordem */
    for (int i = 0; i < size; i++)
    {
        pthread_create(&threads[i], NULL, &hello, NULL);
        pthread_join(threads[i], NULL);
    }

    pthread_exit(NULL);
}