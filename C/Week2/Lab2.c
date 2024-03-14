// 1. Write a C program to find cube of a number using function.

// #include <stdio.h>
// int cube (int n){
//     int result =  n * n * n;
//     printf("The cube of number is %d",result);
//     return 0;
// }

// int main (){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     cube(n);
// }

// // 2 Write a program in C to swap two numbers using function.

// #include<stdio.h>
// int swap(int *a, int *b){
//     int temp = *a;
//     *a = *b;
//     *b =temp;
//     printf("\nAfter swapping:\n");
//     printf("The first number after swaping is %d \n", *a);
//     printf("The  second number after swaping is %d \n", *b);

//     return 0;
// }
// int main(){
//     int a ,b;
//     printf("Enter a first numnber:");
//     scanf("%d", &a);
//     printf("Enter a second number:");
//     scanf("%d",&b);
//     printf("\n Before swapping:\n");
//     printf("The first number is %d \n",a);
//     printf("The second number is %d \n",b);


//     swap(&a,&b);

// }



//3. Write a void function which finds and prints the midpoint coordinates of a line. The function
//should take in four parameters (x1, y1, x2 and y2). xmid=(x1+x2)/2, ymid=(y1+y2)/2

// #include <stdio.h>
// int midpoint( int x1, int x2, int y1, int y2){
//     int xmid = (x1 + x2) /2;
//     int ymid = (y1 +y2) /2;

//     printf("The mid point of x cordinates is %d", xmid);
//     printf("\n");
//     printf("The mid point of y cordinates is %d", ymid);
// return 0;
// }
// int main(){
//     int x1,x2,y1,y2;

//     printf("Enter   the cordinates of x1,x2,y1,y2");
//     scanf("%d %d %d %d", &x1,&x2,&y1,&y2);
// midpoint(x1,x2,y1,y2);
// }

//4. Write a program in C to check Armstrong and perfect numbers using the function.


// #include<stdio.h>
// int armstrong (int num){
//     int d ,sum,p;
//     sum =0;
//     p = num;
//     while(p!=0){
//         d=p%10; // Store the last digit
//         sum +=d*d*d;
//         p=p/10;  // remove the last digits
//     }
//     return (num == sum);
// }
// int perfect(int num){
//     int sum =0 ;
//     for(int i=1; i<=num /2; ++i){
//     if (num %i ==0)
//         sum+=i;
    
//     }
//         return (sum==num);

// return 0;
// }
// int main (){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
    
    
//      if(armstrong(n)){ 
//         printf("%d is an Armstrong number",n);
//     }
//     else{
//         printf("%d is not an Armstrong number",n);
//     }
// printf("\n");
//      if (perfect(n)) {
//         printf("%d is a Perfect number.\n", n);
//     } else {
//         printf("%d is not a Perfect number.\n", n);
//     }
//      armstrong(n);
//      perfect(n);
// }


// //  5. Write a function named “velocityCalc” which returns an appropriate value for the formula
// “v=u+at”, where v is the final velocity, u is the initial velocity, a is the acceleration and t is
// the time that has elapsed. Depending upon which variable is set to “NAN” when the
// function is called, your function should work it out and return the value.



// #include<stdio.h>
// #include<math.h>
// int velocityCalc( double v, double u, double a, double t){
//     if (isnan(u)){
//         return  u = ( a * t) / v;
//         printf("The initial velocity is %f",u);
//     }
//     else if(isnan(v)){
//        v = u + a * t;
//         return v;
//         //printf("The final velocity is %f",v);
//     }
//     else if(isnan(a)){
//         return a = (v-u)/t;
//         printf("The acceleration is %f", a);
//     } 
//     else if(isnan(t)){
//         return t = (v - u) /a;
//         printf("The time is %f", t);
//     }
//     else {
//         return NAN;
//     }
// return 0;   
// }
// int main(){
//     double v = NAN;
//     double u =3;
//     double a =2;
//     double t =2;
//     double velocity = velocityCalc(v,u,a,t);
//     printf("The value is %.2f", velocity);
// return 0;
//  }


//6. Write a void function named “equations” which solves simultaneous equations. Your
// program will take six parameters. E.g. function(double a, double b, double c, double d,
// double e, double f){}. By solving simultaneous equations, you are finding where the two
// lines cross each other, so your function should print an x and y coordinate.
// ax+by=c ......(i)
// dx+ey=f........(ii)
// a = number in front of x of equation one
// b = number in front of y of equation one
// c = constant of equation one

// d = number in front of x of equation two
// e = number in front of y of equation two
// f = constant of equation two

// #include<stdio.h>
// int equations(double a, double b, double c, double d, double e, double f){
    
//     double det = a*e - b*d;

// if(det!=0){
//     double x = (c*e -b*f)/det;
//     double y =(a*f -c*d) / det;
//     printf("The value of x %f and y %f is", x,y);
// }
// else{
//     printf("Determinant zero cant be solved");
// }
// return 0;
// }

//  int main(){
//     double a,b,c,d,e,f;
//     printf("Enter a value for a:");
//     scanf("%lf",&a);
//     printf("Enter a value for b:");
//     scanf("%lf",&b);
//     printf("Enter a value for c:");
//     scanf("%lf",&c);
//     printf("Enter a value for d:");
//     scanf("%lf",&d);
//     printf("Enter a value for e:");
//     scanf("%lf",&e);
//     printf("Enter a value for f:");
//     scanf("%lf",&f);
    


//  equations  (a,b,c,d,e,f);
// return 0;
// }


