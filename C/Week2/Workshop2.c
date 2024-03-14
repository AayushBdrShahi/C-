// 2. Write a function that takes two integers as arguments and return the greatest among them.

#include<stdio.h>
int greatest(int x,int y){
    if(x>y){
        printf("The greatest among two integers is %d\n",x);
    }
    else{
        printf("The greatest among two integers is %d\n",y);
    }
    return 0;
}
    int main(){
        int x, y;
        printf("Enter a first integer:");
        scanf("%d",&x);
        printf("Enter a second integer:");
        scanf("%d",&y);
        greatest(x,y);
    return 0;
 }
   
