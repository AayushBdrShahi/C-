//    // # 1
    // #include <stdio.h>
    // int main(){
    //     int n;
    //     printf("Enter a number:");
    //     scanf("%d",&n);

    //     for(int i =1; i<=n; i++){
    //         int j = i * (i+1)/2;
    //     printf("The traingular number of %d is %d\n is",i,j);
    //     }
    //     return 0;
    // }

// 22 Write a program to print the sum of digits of the number provided byuser
//  #include<stdio.h>

// int main() {
//     int num, sum = 0, digit;

//     printf("Enter a number:");
//     scanf("%d", &num);

//     // Calculate the sum of digits
//     while (num > 0) {
//         digit = num % 10;
//         sum += digit;
//         num /= 10;
//     }

//     printf("The sum of digits is: %d\n\n", sum);

//     return 0;
// }

///33 Write a program to create simple calculator using switch case. (The
    //operators +, -, *, /and % must be asked to user as a character.)

    // #include <stdio.h>
    // int main(){
    //     char calc;
    //     float a,b,result;
    //     printf("Enter a operator:");
    //     scanf("%c",&calc);
    //     printf("Enter a First number:");
    //     scanf("%f",&a);
    //     printf("Enter a  Second number:");
    //     scanf("%f",&b);

    //     switch (calc) {
    //         case '+':
    //             result = a + b;
    //             break;
    //         case '-':
    //             result = a - b;
    //             break;
    //         case '*':
    //             result = a * b;
    //             break;
    //         case '/':
    //             result = a/b;
    //             break;
    //         case '%':
    //             result = (int)a % (int)b;
    //             break;

        
    //     default:
    //     printf("Plz!!! Enter a numbe not a character"); 
    //     }
    //     printf("result:%.2f\n",result);
    //     return 0;
    // }

//  // 4 Write a program to input a character from the user until an enter
// // is pressed and print it in lowercase. If the character is in uppercase,
// // then you must change it in lowercase and if it is in lowercase then
// // you must print as it is.


// #include<stdio.h>
// int main(){
//     char a;
//     printf("Enter any character:");
//     scanf("%c",&a);
//     while(a!=101){
//    if(a>=65 && a<=90){
//     printf("It  is in upper case.\n");
//     printf(" Converting  into lower case= %c", a+32);
//     printf("Press e to end the loop\n");
//    }
//    else{
//     printf("It is already in Lower case.\n The character is: %c\n",a);
//     printf("Press e to end the loop\n");
//    }
//     printf("Enter any character:"); 
//     scanf("%c",&a);
//     }
//     return 0;
// }



// // 5 Write a program to ask the final score from user and print it
// // whether he/she is passed in (distinction above 80%, first division
// // above 60% to 80%, second division above 50% to 60%, Third
// // division above 40% to 50%, and fail below 40%). It is mandatory to
// // use elseif statement to solve the task.


//  #include<stdio.h>
//  int main(){
//     int n;
//     printf("Enter the final score:");
//     scanf("%d",&n);

//     if(n>=80){
//         printf(" He/She got Distinction");
//    }
//     else if(n>=60 && n<=80){
//         printf(" He/She got First Division");
//      }
//      else if(n>=50 && n<=60){
//          printf(" He/She got Second Division");
//        }
//         else if(n>=40 && n<=50){
//         printf(" He/She got Third Division");
//         }
//         else{
//         printf("You are failed");
//     }
//     return 0;
// }

// 6. Write a program to print the following pattern using nested loop:
// A
// B B
// C C C
// D D D D
// E E E E E

#include<stdio.h>
int main(){
    int n =4;
    
    for(int i =0; i<=n; i++){
         for(int j=0; j<=i; j++){
         
            char ch = 'A' + i;
            printf("%c ", ch);
         }
            printf("\n");
         }
      
         return 0;
    }
    
