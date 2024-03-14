// 4. Write a function named “velocityCalc” which returns an appropriate value for the
// formula “v=u+at”, where v is the final velocity, u is the initial velocity ,a is the
// acceleration and t is the time that has elapsed. Depending upon which variable is set to
// “NAN” when the function is called , your function should work it out and return the
// value.

#include<stdio.h>
#include<math.h>
int velocityCalc(double v, double u, double a, double t){
    if(isnan(u)){
        return u = a * t -v;
        printf("The initial velovity is %f", u);
    }
    else if (isnan(v)){
        return v = u + a * t;
        printf("The final velocity is %f",v);
    }
    else if(isnan(a)){
        return a = (v - u)/t;
        printf("The acceleration is %f",a);
    }
    else if(isnan(t)){
        return t =(v-u)/a;
        printf("The time is %f",t);
    }
    else{
        return nan ;
    }
return 0;
}
 int main(){
    double v = NAN;
    double u =3;
    double a =2;
    double t =2;
    double velocity = velocityCalc(v,u,a,t);
    printf("The value is %.2f", velocity);
return 0;
 }

