// #include<stdio.h>
// #include<string.h>
// int main(){
//     int a[] = {1,2,4,5,7,2};
//  int  len =sizeof(a)/sizeof(a[0]);
//  printf("Legth of array =%d \n", len);

//  for(int i =0;i<len;i++){
//     printf("a[%d] address is %x and value %d \n",i,&a[i],a[i]);
//     //printf("%d,",a[i]);
//  }


    
//     return 0;
// }

// #include<string.h>
// #include<stdio.h>
// //#define max to determine  range
// int main(){
//     int a [3][2]=  {{2,3},{3,6},{5,9}};
//     printf("%d", a[2] [0]);
// }

// #include<stdio.h>
// #include<string.h>
// int main(){
// char* week[] ={{"Sunday"},{"Monday"},{"Tuesday"},{"Wednesday"},{"Thursday"},{"Friday"},{"Saturday"}};
// printf(" Week \n");

// for (int i=0; i<7; i++){
//     printf("%d,%s\n", i+1, week[i]);
// }
// return 0;
// }


// // Sorting

// #include<stdio.h>
// #include<string.h>
// int main(){
    
// }


///////////////Workshop 3///////////////
// #include<stdio.h>
// int max(int *a, int*b){
//     if(*a > *b){
//         printf("First number is greatest ");
//     }
//     else{
//         printf(" Second number is greates");
//     }
// }
// int main(){
//     int a,b;
//     printf("Enter a  first number:");
//     scanf("%d", &a);
//     printf("Enter a second number");
//     scanf("%d",&b);
//     max(&a,&b);
//     return 0;
// }

// #include<stdio.h>

// int main() {
//     int size;
//     printf("Enter the size of array: ");
//     scanf("%d", &size);

//     int array_no[size];
//     printf("Enter the elements of array:\n");
//     for (int i = 0; i < size; i++) {
//         printf("Element %d: ", i + 1);
//         scanf("%d", &array_no[i]);
//     }

//     int count = 0;
//     int sum = 0;

//     for (int i = 0; i < size; i++) {
//         if (array_no[i] % 7 == 0 && array_no[i] % 2 != 0 && array_no[i] % 3 != 0) {
//             count++;
//             sum += array_no[i];
//         }
//     }

//     printf("Count of numbers divisible by 7 and not divisible by 2 and 3: %d\n", count);
//     printf("Sum of numbers divisible by 7 and not divisible by 2 and 3: %d\n", sum);

//     return 0;
// }


// 3. Write a program to initialize an integer array with values {10,5,7,91,54,24}.
// Pass this array to a function. If element is found, print out its index number
// and if element is not found then display the message “Element Not found” in
// the function.




//// lab 1 
// #include<stdio.h>
// int maximum (int size, int a[]){
//     int max =a[0];
// for(int i=0;i<size;i++){
// if (a[i] > max){
//     max = a[i];
// }
// }
// return max;
//  }
// int main(){
//     int size,i;
//     printf("Enter a size of array:");
//     scanf("%d",&size);
//     int a[size];
//     printf("Enter a %d number of array",size);
//     for(i=0;i<size;i++){
//         scanf("%d",&a[i]);
//     }
//     int max = maximum (size,a);
//     printf("The maxmimum value of array is %d \n", maximum);
//     return 0;
// }


#include<stdio.h>
int main(){
    int size,i;
    printf("Enter a size of  array");
    scanf("%d",&size);
    printf("Enter a numbers  in array");
    int a[size];
    for(i=0;i<size;i++){
        scanf("%d\n",&a[i]);
    }
    for(i=0;i<size;i++){
    printf("%d", a[i]);
    }
}

