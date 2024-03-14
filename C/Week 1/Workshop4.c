#include<stdio.h>
int main()
{
    char a;
    printf("Enter any character:");
    scanf("%c",&a);
    if(a>=65 && a<=90){
        printf("it  is in upper case.\n");
        printf(" convertING  into lower case= %c", a+32);
    }
    else{
     printf("it is already in Lower case",a);
    }
    return 0;
}