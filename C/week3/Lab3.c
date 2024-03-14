
//  #include<stdio.h>
// int largest(int arr[],int size){
//     int largest_arr= arr[0];
//     for(int i=0;i<size;i++){
//         if(arr[i]> largest_arr){
//             largest_arr=arr[i];
//         }
//     }
//     printf("The lagest number in array is %d", largest_arr);
// }
// int main(){
//     int size,i;
//     printf("Enter the size of an array:");
//     scanf("%d",&size);
//     int arr[size];
//     printf("Enter the elemnts in array:");
//     for(i=0;i<size;i++){
//         scanf("%d",&arr[i]);
//     }
// largest(arr,size);
// }



// Write a program to count and find the sum of all the numbers in the array which
// are exactly divisible by 5 and not divisible by 2 and 3.

// #include<stdio.h>
// int main(){
//     int size,i;
//     printf("Enter the size of an array :");
//     scanf("%d",&size);
//     int arr[size];
//     printf("Enter the number in array:");
//     for(i=0;i<size;i++){
//         scanf("%d",&arr[i]);
//     }
//     int count =0;
//     int sum=0; 
//     for(i=0;i<size;i++){
//         if(arr[i] % 5==0 && arr[i] % 2 != 0 && arr[i] %3 !=0){
//             count++;
//             sum=sum+arr[i];
//         }
//     }
//     printf("The number divisible by 5 and not by 2 and 3 is %d\n",count);
//     printf("The sum of number divisible by 5 and not by 2 and 3 is %d\n",sum);

// }

// 6. WAP reads two 2-D arrays, adds the corresponding elements and displays the
// result on the screen.

// #include<stdio.h>
// int main(){
// int i,j;
// int arr1[2][2],arr2[2][2],sum[2][2];
// for(i=0;i<2;i++){
//     for(j=0;j<2;j++){
//      printf("Element for arra1[%d,%d]:",i,j);
//      scanf("%d",&arr1[i][j]);
//     }
// }
// for(i=0;i<2;i++){
//     for(j=0;j<2;j++){
//      printf("Element for arra2[%d,%d]:",i,j);
//      scanf("%d",&arr2[i][j]);
//     }
// }
// for(i=0;i<2;i++){
//     for(j=0;j<2;j++){
//      sum[i][j]= arr1[i][j]+arr2[i][j];
//     }
// }
// printf("The sum of array1 and array2:\n");
//     for(i=0;i<2;i++){
//     for(j=0;j<2;j++){
//      printf("%d\t",sum[i][j]);
//     }
//     printf("\n");
// }
// }


// // 3. Write a program to print all unique elements in an array. For example,a[ ] =
// {1,2,4,8,4,2,4,9,6} answer : 1,2,4,8,9,6.

// #include<stdio.h>

// int main() {
//     int size, i;
//     printf("Enter the size of an array:");
//     scanf("%d", &size);
//     int arr[size];
    
//     printf("Enter the elements in the array:\n");
//     for (i = 0; i < size; i++) {
//         scanf("%d", &arr[i]);
//     }

//     printf("Array without duplicates: ");
//     for (i = 0; i < size; i++) {
//         int duplicate = 0;

//         for (int j = 0; j < i; j++) {
//             if (arr[i] == arr[j]) {
//                 duplicate = 1;
//                 break;
//             }
//         }

//         if (!duplicate) {
//             printf("%d ", arr[i]);
//         }
//     }

//     return 0;
// }
// Write a program to sort an array elements in ascending order.
// #include<stdio.h>
// int main(){
//     int size,i,j;
//     printf("Enter the size of an array:");
//     scanf("%d", &size);
//     int arr[size];
//     printf("Enter the elements in array:");
//     for(i=0;i<size;i++){
//         scanf("%d",&arr[i]);
//     }
    
// for(i=0;i<size;i++){
// for(j=1;j<size-i;j++){
//     if(arr[j-1] > arr[j]){
//         int temp =arr[j];
//         arr[j] = arr[j-1];
//         arr[j-1] =temp;
//     }
// }
// }
// printf("Sorted an array elements in ascending order:");
// for(i=0;i<size;i++){
//     printf("%d ",arr[i]);
// }
    
    
// }

// 2. Write a program to check whether two given strings are an anagram.
#include<stdio.h>
#include<string.h>
int sort(char *p){
    int n =strlen(p);
    int i, j, temp;
    for(i=0;i<n;i++){
        for(j=1;j<n-i;j++){
            if(p[j-1] > p[j]){
                temp =p[j];
                p[j] = p[j-1];
                p[j-1]=temp;

            }
        }
    }
}
int main(){
    char str1[20],str2[20];
    printf("Enter first String:");
    scanf("%s",str1);
    printf("Enter second String:");
    scanf("%s",str2);
    sort(str1);
    sort(str2);
    if(strcmp(str1,str2) ==0){
        printf("The String are anagram");
    }
    else{
        printf("This string are not anagram");
    }
    return 0;
}
