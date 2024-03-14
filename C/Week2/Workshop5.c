#include<stdio.h>
int equations (double a,double b, double c, double d, double e, double f){


double det  = a*e - b*d;

if (det!=0){
    double x=  (c * e - b * f) / det;
    double y = (a * f - c * d) / det;

    printf("The value of x %f and y %f is",x,y);
}
else{
    printf("Determinant zero cannot be solved:");
}
    return 0;

}
int main (){
    double a = 2;
    double b = 3;
    double c = 8;
    double d = 4;
    double e = -1;
    double f = 6;
equations  (a,b,c,d,e,f);
return 0;

}