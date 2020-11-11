#include <stdio.h>
#include "myMath.h"
int main()
{

double temp = 0;
double temp0=0;
double temp1=0;
double temp2=0;
double x=0;
printf("Please insert a real number:");
scanf("%lf", &x);
int temp10=(int)x;
temp=Exponent(temp10);
temp0=Power(x, 3);
temp1=add(temp, temp0);
temp2=sub((float)temp1, 2);
double temp3=0;
double temp4=0;
double temp5=0;
double temp6=0;
temp3=mul(x, 3);
temp4=Power(x,2);
temp5=mul(temp4, 2);
temp6=add(temp3, temp5);
double temp7=0;
double temp8=0;
double temp9=0;
double temp11=0;
temp7=mul(temp0, 4);
temp8=div(temp7, 5);
temp9=mul(x, 2);
temp11=sub(temp8, temp9);
printf("f(x)= e^x+x^3-2 at the point %lf  is: %.4lf, \n\
f(x)= 3x+2x^2 at the point %lf  is: %.4lf, \n\
f(x)= (4x^3)/5-2x at the point %lf is: %.4lf\n",x, temp2, x, temp6, x, temp11);
    return 0;
}
