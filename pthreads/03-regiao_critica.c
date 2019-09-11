#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

void *regiao(void *arg)
{
    /* Podemos fazer cast para qualquer tipo */
    int *ptr = (int *)arg;
    int id = *ptr;
    printf("Thread %d entrando na região crítica...\n", id);
    sleep(2);
    printf("Thread %d finalizada!\n", id);
    pthread_exit(NULL);
}
/* Se executarmos varias vezes esse codigo, perceberemos que o resultado sempre
 * sera diferente. O que ocorre eh que uma thread pode ser encerrada enquanto outra
 * nem sequer comecou */
int main()
{
    int size = 3;
    pthread_t threads[size];

    int i = 0;
    while (i < size)
    {
        /* Quando quisermos passar argumentos para uma funcao, devemos sempre
         * passar a referencia para aquela variavel */
        pthread_create(&threads[i], NULL, regiao, &i);
        i = i + 1;
    }

    pthread_exit(NULL);
}