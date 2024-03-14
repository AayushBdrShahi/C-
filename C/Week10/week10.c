// #include <pthread.h> 
// #include <stdio.h>
// char retval[] = "Hello there!"; 
// void *threadOne(void *p){
// pthread_exit(retval);
// }

// int main(){
// void *pretval1; pthread_t thrID1;
// pthread_create(&thrID1, NULL, threadOne, NULL);
// pthread_join(thrID1, &pretval1);
//  printf("*pretval1 = %s\n", (char *)pretval1);
// }

// #include <pthread.h> 
// #include <stdio.h>
// int gretval=0;

// void *threadOne(void *p){ 
// gretval = 42; 
// pthread_exit(&gretval);
// }

// int main(){
// void *pretval1;
// int retval; 
// pthread_t thrID1;
// pthread_create(&thrID1, NULL, threadOne, NULL); 
// pthread_join(thrID1, &pretval1);
// retval=*(int *)pretval1; 
// printf("*pretval1 = %d\n", retval);
// }


// #include <stdio.h>
// #include <pthread.h> 
// #include<string.h>
// #include<stdlib.h>
// void *threadOne(void *p){ 
// char *retval;
// retval= malloc(1000); 
// strcpy(retval, "Hello world!"); 
// pthread_exit(retval);
// }

// int main(){
// void *pretval;
// pthread_t thrID1;
// pthread_create(&thrID1, NULL, threadOne, NULL);
// pthread_join(thrID1, &pretval); 
// printf("*pretval = %s\n", (char *)pretval); 
// free(pretval);
// }


// #include <pthread.h> 
// #include <stdio.h> 
// #include <unistd.h>

// void *threadFunc(void *p){ 
// long i;
// for(i = 0; i <100; i++){
// printf("i = %ld\n", i);
// }
// }
// int main(){ 
// pthread_t thrID;
// pthread_create(&thrID, NULL, threadFunc, NULL); 
// sleep(1);
// pthread_cancel(thrID);
// pthread_join(thrID, NULL);
// }



// Workshop10
//////////////////////////////QNO.1////////////////////
// #include <stdio.h>
// #include <pthread.h>

// int count = 0;
// pthread_mutex_t count_mutex;

// void* fun(void* arg)
// {
//     pthread_mutex_lock(&count_mutex);
//     count++;
//     printf("Thread %d has started\n", count);
//     pthread_mutex_unlock(&count_mutex);

//     int i;
//     for (i = 1; i <= 1000000; i++) {}

//     printf("Thread %d has finished\n", count);
// }

// int main()
// {
//     pthread_t thread1, thread2;

//     pthread_mutex_init(&count_mutex, NULL);

//     pthread_create(&thread1, NULL, fun, NULL);
//     pthread_join(thread1, NULL);

//     pthread_create(&thread2, NULL, fun, NULL);
//     pthread_join(thread2, NULL);

//     pthread_mutex_destroy(&count_mutex);

//     return 0;
// }



////////////////////2///////////////////

// #include <stdio.h>
// #include <pthread.h>
// #include <unistd.h>
// int counter = 0;
// void *threadOne(void *p)
// {
// int i;
// int temp;
// for(i=1; i<=3; i++)
// {
// temp = counter;
// sleep(1);
// counter = temp +1;
// }
// }
// void *threadTwo(void *p)
// {
// int i;
// int temp;
// for (i=1; i<=3; i++)
// {
// temp = counter;
// sleep(1);
// counter = temp - 1;
// }
// }
// int main()
// {
// pthread_t thrID1, thrID2;
// pthread_create(&thrID1, NULL, threadOne, NULL);
// pthread_create(&thrID2, NULL, threadTwo, NULL);

// pthread_join(thrID1, NULL);
// pthread_join(thrID2, NULL);
// printf("counter = %d\n", counter);
// }

// #include <stdio.h>
// #include <pthread.h>
// #include <unistd.h>

// int counter = 0;
// pthread_mutex_t counter_mutex;

// void *threadOne(void *p)
// {
//     int i;
//     int temp;
//     for (i = 1; i <= 3; i++)
//     {
//         pthread_mutex_lock(&counter_mutex);
//         temp = counter;
//         sleep(1);
//         counter = temp + 1;
//         pthread_mutex_unlock(&counter_mutex);
//     }
// }

// void *threadTwo(void *p)
// {
//     int i;
//     int temp;
//     for (i = 1; i <= 3; i++)
//     {
//         pthread_mutex_lock(&counter_mutex);
//         temp = counter;
//         sleep(1);
//         counter = temp - 1;
//         pthread_mutex_unlock(&counter_mutex);
//     }
// }

// int main()
// {
//     pthread_t thrID1, thrID2;

//     pthread_mutex_init(&counter_mutex, NULL);

//     pthread_create(&thrID1, NULL, threadOne, NULL);
//     pthread_create(&thrID2, NULL, threadTwo, NULL);

//     pthread_join(thrID1, NULL);
//     pthread_join(thrID2, NULL);

//     pthread_mutex_destroy(&counter_mutex);

//     printf("counter = %d\n", counter);

//     return 0;
// }
