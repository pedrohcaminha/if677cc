#include <stdio.h>
#include <pthread.h>

/* Variaveis globais podem ser declaradas fora das funcoes */
int count = 0;

/* Quando utilizamos pthreads, tanto o retorno quanto os argumentos das funcoes
 * devem ser um ponteiro VOID */
void *hello(void *arg)
{
    count = count + 1;
    printf("Hello world! (Thread %d)\n", count);
    pthread_exit(NULL);
}

int main()
{
    /* Declarando um array de threads */
    pthread_t threads[10];

    /* Neste exemplo, nao eh garantido que as threads serao executadas em ordem (1 ao 10) */
    for (int i = 0; i < 10; i++)
    {
        /* Passamos a referencia para a thread no array de threads e tambem o nome da funcao
         * que sera executada.  Os argumentos NULL sao padrao, e nao sera necessario muda-los */
        pthread_create(&threads[i], NULL, hello, NULL);
    }

    pthread_exit(NULL);
}