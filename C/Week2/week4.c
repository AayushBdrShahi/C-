// #include<stdio.h>
// int main(){
//     int size,i;
//     printf("Enter an size of array:");
//     scanf("%d",&size);
//     int arr[size];
//     printf("Enter the elememts in array:");
//     for(i=0;i<size;i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("The number in array is:");
//     for(i=0;i<size;i++){
//         printf("%d,",arr[i]);
//     }


 //}
 //using pointer 
//  #include<stdio.h>
// int main(){
//     int size,i;
//     int *p;
//     printf("Enter the size of an array:");
//     scanf("%d",&size);
//     int arr[size];
//     p = &arr[0];
//     printf("Enter the elements in the array");
//     for(i=0;i<size;i++){
//         scanf("%d",(p+i));
//     }
//     printf("The elements in the array");
//     for(i=0;i<size;i++){
//         printf("%d ",*(p+i));
//     }
    
// }


// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int size,i;
//     int*p;
//     printf("Enter the size of an array:");
//     scanf("%d",&size);
//     p=(int *) malloc(size*(sizeof(size)));
//     printf("Enter the elements in array:");
//     for(i=0;i<size;i++){
//     scanf("%d",(p+i));
//     }
//     printf(" the elements in array:");
//    for(i=0;i<size;i++){
//     printf("%d ",*(p+i));
// }
// free(p);
// }

// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int size,i;
//     int *p;
//     printf("Enter the size of an array");
//     scanf("%d",&size);
//     p= calloc(4,size);
//     printf("Enter the elements in array:");
//     for(i=0;i<size;i++){
//         scanf("%d", (p+i));
//     }
//      printf("the elements in array:");
//     for(i=0;i<size;i++){
//         printf("%d", *(p+i));
//     }

// free(p); 
// }
/////////////////////////////WORKSHOP/////////////////
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
// int size,i;
// int *t;
// char *c;
// float *f;
// printf("Enter the size of an array:");
// scanf("%d",&size);
// t = (int *) malloc(size * (sizeof(int)));
// c = (char *) malloc(size * (sizeof(char)));
// f = (float *) malloc(size * (sizeof(float)));

// printf("Enter the elements in array:");
// for(i=0;i<size;i++){
//     scanf("%d", (t+i));
//     scanf("%s", (c+i));
//     scanf("%f",  (f+i));
// }
// printf("The elements in array is:");
// for(i=0;i<size;i++){
//     printf("%d ", *(t+i));
//     printf("%d",  *(c+i));
//     printf("%f",  *(f+i));
// }
//     free(t);
//     free(c);
//     free(f);
// }
//////////////////USING FLOAT ///////////
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
// int size,i;
// float *p;
// printf("Enter the size of an array:");
// scanf("%d",&size);
// p = (float *) malloc(size * (sizeof(size)));
// printf("Enter the elements in array:");
// for(i=0;i<size;i++){
//     scanf("%f", (p+i));
// }
// printf("The elements in array is:");
// for(i=0;i<size;i++){
//     printf("%f ", *(p+i));
// }
// }
////////////////USING CHAR////////////
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
// int size,i;
// char *p;
// printf("Enter the size of an array:");
// scanf("%d",&size);
// getchar(); 
// p = (char *) malloc(size * (sizeof(size)));
// printf("Enter the elements in array:");
// for(i=0;i<size;i++){
//     scanf("%c", (p+i));
// }
// printf("The elements in array is:");
// for(i=0;i<size;i++){
//     printf("%c ", *(p+i));
// }
// }
//////////////////////Workshop 1/////////////////
// #include<stdio.h>
// #include<stdlib.h>

// int main() {
//     int *t;
//     char *c;
//     float *f;

   
//     t = (int*)malloc(sizeof(int));
//     c = (char*)malloc(sizeof(char));
//     f = (float*)malloc(sizeof(float));

//     printf("Int address: %x\n", t);
//     printf("Char address: %x\n",c);
//     printf("Float address:%x\n",f);
//     // Free the allocated memory
//     free(t);
//     free(c);
//     free(f);

//     return 0;
// }
//////////////////////Workshop 2/////////////////

// 2. Finding maximum in an array using dynamic memory allocation.



#include<stdio.h>
#include<stdlib.h>
int main(){
    int size,i;
    printf("Enter the size of an array:");
    scanf("%d",&size);
    int *p;
    p = calloc(4,size);
    printf("Enter the elements in array:");
    for(i=0;i<size;i++){
        scanf("%d", (p+i));
    }
    int max = 0;
    for(i=0;i<size;i++){
        if(*(p+i)> max){
             max = *(p+i);

        }
    }
    printf("Largest elements in array is %d:",max);
}


// Write a program that allocates memory space as required by the user for three arrays. User enters the numbers for two arrays and the program sums the
// corresponding array elements and stores them in the third array.

// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int size1,size2,i,j;
//     printf("Enter the size of an first array:");
//     scanf("%d",&size1);
//     int *p;
//     p = malloc(size1 *sizeof(size1));
//     printf("Enter the elemnents in first array:");
//     for(i=0;i<size1;i++){
//     scanf("%d", (p+i));
//     }

//     printf("Enter the size of an Second  array:");
//     scanf("%d",&size2);
//     int *p1;
//     p1 = malloc(size2 *sizeof(size2));
//     printf("Enter the elemnents in second array:");
//     for(i=0;i<size2;i++){
//     scanf("%d", (p1+i));
//     }

//     for(j=0;j<size1 &&  j<size2;j++){
//         printf("Sum of two arrays at index %d is %d\n ", j, *(p+j) + *(p1+j));
//     }
//     free(p);
//     free(p1);

// }

// Write a program that reads ‘n’ from the user and allocates memory to hold n integer numbers. Pass these numbers
// to a function that returns the sum.

// #include<stdio.h>
// #include<stdlib.h>
// int sum(int *p ,int size){
//     int sum=0;
//     for(int i=0;i<size ;i++){
//         sum+=*(p+i);    
//     }
//     printf(" The sum of the numbers in array is %d",sum);

// }
// int main(){
//     int size,i;
//     printf("Enter the size of an array:");
//     scanf("%d",&size);
//     int *p;
//     p = (int *) malloc(size *(sizeof(size)));
//     printf("Enter the elements in array:");{
//         for(i=0;i<size;i++){
//             scanf("%d",(p+i));
//         }
//     }
//     sum(p,size);
//     free(p);
    
// }

