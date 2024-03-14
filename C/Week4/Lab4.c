// Write a program in C to compute the sum of all elements in an array
// using pointer.

// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int size,i;
//     printf("Enter the size of an array:");
//     scanf("%d",&size);
//     int *p;
//     p = (int *) malloc (size *(sizeof(int)));
//     printf("Enter the elements in the array:");
//     for(i=0;i<size;i++){
//         scanf("%d", &p[i]);
//     }
// int sum =0;
// int *ptr = p;
//     for(i=0;i<size;i++){
//         sum+= *ptr;
//         ptr++;
//     }
//     printf("The sum of all elemnets in array is %d",sum);
//     free(p);

// }

// Write a C program to search an element in array using pointers.

// #include<stdio.h>
// #include<stdlib.h>
// int  searchElements(int size, int search, int *p ){
//     int *ptr = p;
//     for(int i=0;i<size;i++){
//         if(*ptr== search){
//             return i; // if found
//         }
//         ptr++; // move to next element 
//     }
//     return -1; // if not found 
// }
// int main(){
//     int size,i,search;
//     printf("Enter the size of an array:");
//     scanf("%d",&size);
//     int *p;
//     p = (int *) malloc (size *(sizeof(int)));
//     printf("Enter the elements in array:");
//     for(i=0;i<size;i++){
//         scanf("%d", &p[i]);
//     }
//     printf("Enter the elemnents to search:");
//     scanf("%d", &search);

//     int result = searchElements(size,search,p);

//     if(result !=-1){
//         printf("The  %d search elements is found in array %d:", search,result);
//     }
//     else{
//      printf("The  %d search elements is not  found in array:",search);

//     }

// free(p);
// }

// C program to create memory for int, char and float variables at run
// time.

// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int *i = (int *)malloc((sizeof(int)));
//     if(i== NULL){
//         printf("Memory allocation failed");
//         return 1;

//     }
//     char *c = (char*)malloc((sizeof(char)));
//     if(c==NULL){
//         printf("Memory allocation failed");
//         free(i);
//         return 1;
//     }
//     float *f = (float*)malloc((sizeof(float)));
//     if(f==NULL){
//         printf("Memory allocation failed");
//         free(i);
//         free(c);
//         return 1;
//     }
//     *i = 22;
//     *c = 'A';
//     *f =2.2;
// printf("Value of int in memory is: %d\n",*i);
// printf("Value of char in memory is: %c\n",*c);
// printf("Value of float in memory is: %f",*f);

// free(i);
// free(c);
// free(f);

// }

// Finding maximum in an array using dynamic memory allocation.

// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int size,i;
//     printf("Enter the size of an array:");
//     scanf("%d",&size);
//     int *p;
//     p = (int *)malloc(size*(sizeof(int)));
//     printf("Enter the elements in array:");
//     for(i=0;i<size;i++){
//         scanf("%d", (p+i));
//     }
//     int max = 0;
//     for(i=0;i<size;i++){
//         if(*(p+i)> max){
//              max = *(p+i);
//         }
//     }
//     printf("Largest elements in array is %d:",max);
//     free(p);
// }


// Write a program that allocates memory space as required by the user for three arrays. User enters the numbers for two arrays and the
// program sums the corresponding array elements and stores them in the third array.

// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int size,i;
//     printf("Enter the size of an array:");
//     scanf("%d",&size);

//     int  *p1= (int *) malloc(size*(sizeof(int)));
//     int  *p2= (int *) malloc(size*(sizeof(int)));
//     int  *sum= (int *) malloc(size*(sizeof(int)));

// printf("Enter the elements in the first array:\n");
// for(i=0;i<size;i++){
//     scanf("%d", &p1[i]);
// }
// printf("Enter the elements in the second array:\n");
// for(i=0;i<size;i++){
//     scanf("%d", &p2[i]);
// }
// for(i=0;i<size;i++){
//     sum[i] = p1[i] +p2[i];
    
// }
// printf("Adding the elements of first  and second arrays\n");
// for(i=0;i<size;i++){
//     printf("%d",sum[i]);
//     printf("\n");
// }

// free(p1);
// free(p2);
// free(sum);
// }

// Write a C program to take an array using dynamic memory allocation and print them, later add elements onto that array using the realloc
// function and print them all.


#include<stdio.h>
#include<stdlib.h>
int main(){
    int size,i,size1;
    printf("Enter the size of an arrays:");
    scanf("%d",&size);
    int *p ;
    p = (int *)malloc(size*(sizeof(int)));
    printf("Enter the elements in the array\n");
    for(i=0;i<size;i++){
        scanf("%d", &p[i]);
    }
    printf("The elements in the arrays are\n");
    for(i=0;i<size;i++){
        printf("%d ", p[i]);
    }
    printf("\n");

printf("Enter the number elements to add:");
scanf("%d",&size1);

 p = (int *) realloc (p,(size+size1)*sizeof(int));

 printf("Enter elements in the new Memory:");
 for(i=size;i < size+size1;i++){
    scanf("%d", &p[i]);
 }
 printf("Updated arrays is: \n");
 for(i=0;i < size+size1;i++){
    printf("%d ", p[i]);
 }
 free(p);

}