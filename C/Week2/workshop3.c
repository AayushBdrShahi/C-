// Write a void function which takes one integer (n) as a parameter. Your function should
//then print out all triangular numbers from 1 up to the nth term.

#include <stdio.h>
int triangular(int x){

    int num =1;
    int a =2;

    while(num<x){
        printf("%d \t",num);
        num = num +a;
        a++;
    }
    return 0;
}
int main(){
    int x;
    printf("Enter a integer:");
    scanf("%d",&x);
    triangular(x);    
}