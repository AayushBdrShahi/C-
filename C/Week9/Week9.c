
// #include <stdio.h>
// #include <pthread.h>

// void *threadOne(void *p){
//   int i, c;
//   int nstart=1, nfinish=10000; 
//   printf("threadOne : Prime numbers between %d and %d are :\n", nstart, nfinish);
//   for(i=nstart; i<=nfinish; i++)
//   { 
//     for(c=2; c<=i-1; c++)
//     {
//       if ( i%c==0 )
//         break;
//     }
//     if ( c==i ) ;
//         printf("threadOne : %d\n", i);
//   }
//   return 0;
// }
// void *threadTwo(void *p){
//   int i, c;
//   int nstart=10001, nfinish=20000; 
//   for(i=nstart; i<=nfinish; i++)
//   { 
//     for(c=2; c<=i-1; c++)
//     {
//       if ( i%c==0 )
//         break;
//     }
//     if ( c==i ) ;
//         printf("threadTwo : %d\n", i);
//   }
//   return 0;
// }
    

// int main(){
//   pthread_t thrID1, thrID2;
//   pthread_create(&thrID1, NULL, threadOne, NULL);
//   pthread_create(&thrID2, NULL, threadTwo, NULL);
//   pthread_join(thrID1, NULL);
//   pthread_join(thrID2, NULL);
// }


// typedef struct Data
// {
//     int n1;
//     int n2;
// }data;


// int r1,r2;
// void * add(void *p){
//     data *d =p;
//     r1 =d->n1 +d ->n2;
//     pthread_exit(&r1);

// }
// void * sub(void *p){
//     data *d =p;
//      r2 =d->n1 - d ->n2;
//     pthread_exit(&r2);

// }
// int main(){
// data d;
// d.n1 =20;
// d.n2 =30;

//     pthread_t id1,id2;
//     pthread_create(&id1,NULL,add,&d);
//     pthread_create(&id2,NULL,sub,&d);

// void *p1,*p2;
//     pthread_join(id1,&p1);
//     pthread_join(id2,&p2);
//     printf("Sum = %d, Sub = %d", *(int*)p1,*(int*)p2);

// }

#include<stdio.h>
#include<pthread.h>
void * firstthread(void *p){
    while(1){
    sleep(1);
        printf("this is from thread 1\n");
    }
}
void * secondthread(void *p){
    while(1){
        
        printf("This is from thread 2 \n");
    }
 }
int main(){
    pthread_t id1,id2;
    pthread_create(&id1,NULL,firstthread,NULL);
    pthread_create(&id2,NULL,secondthread,NULL);

    pthread_join(id1,NULL);
    pthread_join(id2,NULL);

    
}