
// Convert program no.3 to accept an integer to specify the number of threads and then
// create that number of threads dynamically. All the threads will equally contribute to
// display the numbers from 1-1000.

#include <stdio.h>
#include <pthread.h>

typedef struct Range {
    int start;
    int end;
    int id;
} range;

void *display(void *p) {
    range *d = p;
    int i;
    for (i = d->start; i <= d->end; i++) {
        if((i%2)!=0){
        printf("Thread %d : Value = %d\n", d->id, i);
}
}
}

int main() {
    int total = 1000;
    int no_of_thread;

    printf("Enter the number of threads: ");
    scanf("%d", &no_of_thread);
    range d[no_of_thread];
    int slice_per_thread = total / no_of_thread;

    int i;
    for (i = 0; i < no_of_thread; i++) {
        d[i].start = i * slice_per_thread + 1;
        d[i].end = (i + 1) * slice_per_thread;
        d[i].id = i;
    }

    pthread_t id[no_of_thread];
    for (i = 0; i < no_of_thread; i++) {
        pthread_create(&id[i], NULL, display, &d[i]);
    }

    for (i = 0; i < no_of_thread; i++) {
        pthread_join(id[i], NULL);
    }

    return 0;
}