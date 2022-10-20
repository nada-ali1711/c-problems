
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#define M_PI 3.14159265358979323846

double factorial(double n);
int main()
{
     int n;
    long double x,radian,r,t,a,b,i;
    scanf("%Lf",&x);
    scanf("%d",&n);

    x= x*(M_PI/180);
    radian=0;
    for(i=0;i<n;i++){
        r =factorial((2*i+1));
        t = pow((-1),i)*(powl(x,(2*i+1)))/r;
        radian = t + radian;
    }
    a=radian;
    b=sin(x);
    printf("calculated %.10Lf",a);
    printf(" expected %.10Lf",b);
    return 0;
}
double factorial(double n){
    double i;
    double result=1;
    if (n<=10000){
        for (i=1;i<=n;i++){
            result = result*i;
        }
    }
    return result;
    }
