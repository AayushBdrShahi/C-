#include <stdio.h>
#include <pthread.h>

int count = 0;
pthread_mutex_t count_mutex;

void* fun(void* arg)
{
    pthread_mutex_lock(&count_mutex);
    count++;
    printf("Thread %d has started\n", count);
    pthread_mutex_unlock(&count_mutex);

    int i;
    for (i = 1; i <= 1000000; i++) {}

    printf("Thread %d has finished\n", count);
}

int main()
{
    pthread_t thread1, thread2;

    pthread_mutex_init(&count_mutex, NULL);

    pthread_create(&thread1, NULL, fun, NULL);
    pthread_join(thread1, NULL);

    pthread_create(&thread2, NULL, fun, NULL);
    pthread_join(thread2, NULL);

    pthread_mutex_destroy(&count_mutex);

    return 0;
}