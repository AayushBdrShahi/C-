
// Question no.1
// #include<stdio.h>
// int myfunction(){
//     printf("Hello world"); 
// }

// int main (){
//     myfunction();
//     return 0;
// }

// question no.2

// #include<stdio.h>
// float square(float n){
//     return n*n;
// }
// int main(){
//     float n;
//     printf("Enter a number:");
//     scanf("%f",&n);
//     float sq = square(n);
//     printf("%f",sq);

// }

//# Question 2
// #include<stdio.h>
// #include<math.h>

// int function( int n){
//     int square = pow(n,2);
//     return square ;

// }
// int main(){
// int n;
// printf("Enter a number");
// scanf("%d",&n);
// printf("%d",function(n));
// }


// queestion 3

#include<stdio.h>
int function(int a,int b){
    int temp = a;
    a =b;
    b =temp;
    return 0;
}
int main(){
    int x;
    int y;
    printf("Enter a number:");
    scanf("%d",&x);
    printf("Enter a second number:");
    scanf("%d",&y);
    printf("After swapping:",function(x,y));
}


//Question 4

// #include <stdio.h>

// int function(int n){
//     if(n%2==0){
//         printf("The number is even:");
//     }
//     else{
//         printf("The number is odd:");
//     }
//     return 0 ;
// }

// int main(){
//     int n ;
//     printf("Enter a number:");
//     scanf("%d",&n);
//    function(n);
// }
