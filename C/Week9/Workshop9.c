// #include<stdio.h>
// #include<pthread.h>

// typedef struct Range{
// 	int start;
// 	int end;
// 	int id;
// }range;

// void* display(void *p){
// 	range *d = p; 
// 	int i;
// 	for(i=d->start;i<=d->end;i++){
// 		printf("thread %d : value = %d\n",d->id,i);
// 	}	
// }

// void main(){
// 	int total = 1000;
// 	int no_of_thread = 5;
// 	range d[no_of_thread];
	
// 	int slice_per_thread = total/no_of_thread; //200
// 	int i;
// 	for(i=0;i<no_of_thread;i++){
// 		d[i].start = i*slice_per_thread+1;
// 		d[i].end = (i+1) * slice_per_thread;
// 		d[i].id = i;
// 	}
	
	
// 	pthread_t id[no_of_thread];
// 	for(i=0;i<no_of_thread;i++){
// 		pthread_create(&id[i],NULL,display,&d[i]);
// 	}
// 	for(i=0;i<no_of_thread;i++){
// 		pthread_join(id[i],NULL);
// 	}
// }



// #include<stdio.h>
// #include<pthread.h>

// void * display1(void *p){
//     int i;
//     for(i=1;i<500;i++){
//         printf("Thrread %d, value =%d\n", 1,i);
//     }
// }
// void * display2(void *p){
//     int i;
//     for(i=501;i<1000;i++){
//         printf("Thread %d, value =%d\n", 2,i);
//     }
// }
// int main(){
//     pthread_t id1, id2;
//     pthread_create(&id1,NULL,display1,NULL);
//     pthread_create(&id2,NULL,display2,NULL);
//     pthread_join(id1,NULL);
//      pthread_join(id2,NULL);
// }

//////////////////////////////////////////////////////ODDDDDDD
// #include <stdio.h>
// #include <pthread.h>

// typedef struct Range {
//     int start;
//     int end;
//     int id;
// } range;

// void *odd(void *p) {
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
//         pthread_create(&id[i], NULL, odd, &d[i]);
//     }

//     for (i = 0; i < no_of_thread; i++) {
//         pthread_join(id[i], NULL);
//     }

//     return 0;
// }
// ////////////PRIME


// #include <stdio.h>
// #include <pthread.h>

// typedef struct Range {
//     int start;
//     int end;
//     int id;
// } range;

// void *odd(void *p) {
//     range *d = p;
//     int i,c;
//     for (i = d->start; i <= d->end; i++) {
//            for(c=2; c<=i-1; c++)
//     {
//       if ( i%c==0 )
//         break;
//     }
//     if ( c==i ) 
//         printf("Thread %d: Value =%d\n", d->id,i);
//   }     
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
//         pthread_create(&id[i], NULL, odd, &d[i]);
//     }

//     for (i = 0; i < no_of_thread; i++) {
//         pthread_join(id[i], NULL);
//     }

//     return 0;
// }

