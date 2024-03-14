// Write a program that creates two threads to display the numbers from 1-1000. The two
// threads should equally contribute to display the numbers.



// #include<stdio.h>
// #include<pthread.h>

// void * display1(void *p){
//     int i;
    
//     for(i=1;i<=500;i++){
//         printf("Thrread %d, value =%d\n", 1,i);
//     }
// }
// void * display2(void *p){
//     int i;
//     for(i=501;i<=1000;i++){
//         printf("Thread %d, value =%d\n", 2,i);
//     }
// }
// int main(){
//     pthread_t id1, id2;
//     pthread_create(&id1,NULL,display1,NULL);
//     pthread_create(&id2,NULL,display2,NULL);
//     pthread_join(id1,NULL);
//      pthread_join(id2,NULL);

//      return 0;
// }

// 2. Write a program that creates two threads to display all the prime numbers from 1-500.
// The two threads should equally contribute to display the numbers.

// #include<stdio.h>
// #include<pthread.h>

// int prime(int n){
//     int j, flag =1;
//     for(j=2;j<=n/2;j++){
//         if(n%j==0){
//             flag =0;
//             break;
//         }
//     }
//     return flag;
// }

// void * display1(void *p){
//     int i,flag;
    
//     for(i=2;i<=250;i++){
//         flag = prime(i);
//         if(flag ==1){
//          printf("%d \n",i);
//         }
        
//     }
// }
// void * display2(void *p){
//     int i,flag;
    
//     for(i=251;i<=500;i++){
//         flag = prime(i);
//         if(flag ==1){
//          printf("%d \n",i);
//         }
        
//     }
// }
// int main(){
//     pthread_t id1, id2;
//     pthread_create(&id1,NULL,display1,NULL);
//     pthread_create(&id2,NULL,display2,NULL);
//     pthread_join(id1,NULL);
//      pthread_join(id2,NULL);

//      return 0;
// }

// Write a program that creates 5 threads to display the numbers from 1-1000.The five
// threads should equally contribute to display the numbers.

// #include<stdio.h>
// #include<pthread.h>

// void *display1(void *p) {
//     int i;
//     for (i = 1; i <= 200; i++) {
//         printf("Thread %d, value = %d\n", 1, i);
//     }
// }

// void *display2(void *p) {
//     int i;
//     for (i = 201; i <= 400; i++) {
//         printf("Thread %d, value = %d\n", 2, i);
//     }
// }

// void *display3(void *p) {
//     int i;
//     for (i = 401; i <= 600; i++) {
//         printf("Thread %d, value = %d\n", 3, i);
//     }
// }

// void *display4(void *p) {
//     int i;
//     for (i = 601; i <= 800; i++) {
//         printf("Thread %d, value = %d\n", 4, i);
//     }
// }

// void *display5(void *p) {
//     int i;
//     for (i = 801; i <= 1000; i++) {
//         printf("Thread %d, value = %d\n", 5, i);
//     }
// }

// int main() {
//     pthread_t id1, id2, id3, id4, id5;

//     pthread_create(&id1, NULL, display1, NULL);
//     pthread_create(&id2, NULL, display2, NULL);
//     pthread_create(&id3, NULL, display3, NULL);
//     pthread_create(&id4, NULL, display4, NULL);
//     pthread_create(&id5, NULL, display5, NULL);

//     pthread_join(id1, NULL);
//     pthread_join(id2, NULL);
//     pthread_join(id3, NULL);
//     pthread_join(id4, NULL);
//     pthread_join(id5, NULL);

//     return 0;
// }


// Convert program no.3 to accept an integer to specify the number of threads and then
// create that number of threads dynamically. All the threads will equally contribute to
// display the numbers from 1-1000.

// #include <stdio.h>
// #include <pthread.h>

// typedef struct Range {
//     int start;
//     int end;
//     int id;
// } range;

// void *display(void *p) {
//     range *d = p;
//     int i;
//     for (i = d->start; i <= d->end; i++) {
//         //if((i%2)!=0){
//         printf("Thread %d : Value = %d\n", d->id, i);
// //}
// }
// }

// int main() {
//     int total = 1000;
//     int no_of_thread;

//     printf("Enter the number of threads: ");
//     scanf("%d", &no_of_thread);
//     range d[no_of_thread];
//     int slice_per_thread = total / no_of_thread;

//     int i;
//     for (i = 0; i < no_of_thread; i++) {
//         d[i].start = i * slice_per_thread + 1;
//         d[i].end = (i + 1) * slice_per_thread;
//         d[i].id = i;
//     }

//     pthread_t id[no_of_thread];
//     for (i = 0; i < no_of_thread; i++) {
//         pthread_create(&id[i], NULL, display, &d[i]);
//     }

//     for (i = 0; i < no_of_thread; i++) {
//         pthread_join(id[i], NULL);
//     }

//     return 0;
// }
// Create a multithreaded program to display all the odd numbers from 1-1000. Your
// program should ask the user to input the number of threads. Based on the number of
// threads you should divide the workload among the threads

// #include <stdio.h>
// #include <pthread.h>

// typedef struct Range {
//     int start;
//     int end;
//     int id;
// } range;

// void *Odd(void *p) {
//     range *d = p;
//     int i;
//     for (i = d->start; i <= d->end; i++) {
//         if((i%2)!=0){
//         printf("Thread %d : Value = %d\n", d->id, i);
// }
// }
// }

// int main() {
//     int total = 1000;
//     int no_of_thread;

//     printf("Enter the number of threads: ");
//     scanf("%d", &no_of_thread);
//     range d[no_of_thread];
//     int slice_per_thread = total / no_of_thread;

//     int i;
//     for (i = 0; i < no_of_thread; i++) {
//         d[i].start = i * slice_per_thread + 1;
//         d[i].end = (i + 1) * slice_per_thread;
//         d[i].id = i;
//     }

//     pthread_t id[no_of_thread];
//     for (i = 0; i < no_of_thread; i++) {
//         pthread_create(&id[i], NULL, Odd, &d[i]);
//     }

//     for (i = 0; i < no_of_thread; i++) {
//         pthread_join(id[i], NULL);
//     }

//     return 0;
// }



#include <stdio.h>
#include <pthread.h>

#define ARRAY_SIZE 10
#define NUM_THREADS 2

int array[ARRAY_SIZE] = {2, 5, 8, 11, 15, 18, 22, 25, 30, 35};
int target_element = 18;

typedef struct Range {
    int start;
    int end;
} range;

int found = 0; // Global flag to track whether the element is found

void *search(void *p) {
    range *d = (range *)p;
    for (int i = d->start; i <= d->end; i++) {
        if (array[i] == target_element) {
            found = 1;
            break;
        }
    }
    pthread_exit(NULL);
}

int main() {
    pthread_t id[NUM_THREADS];
    range thread_ranges[NUM_THREADS];
    int slice_per_thread = ARRAY_SIZE / NUM_THREADS;

    // Create threads
    for (int i = 0; i < NUM_THREADS; i++) {
        thread_ranges[i].start = i * slice_per_thread;
        thread_ranges[i].end = (i + 1) * slice_per_thread - 1;

        pthread_create(&id[i], NULL, search, &thread_ranges[i]);
    }

    // Wait for threads to finish
    for (int i = 0; i < NUM_THREADS; i++) {
        pthread_join(id[i], NULL);
    }

    // Print result
    if (found) {
        printf("Element found!\n");
    } else {
        printf("Element not found.\n");
    }

    return 0;
}


