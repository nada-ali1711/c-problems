#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int num1,num2,gcd;
  scanf("%d",&num1);
  scanf("%d",&num2);
if (num1==0){
    printf("%d",num2);
}else if(num2==0){
    printf("%d",num1);
}else{

  gcd = findGCD(num1,num2);
  printf("%d",gcd);}
  return 0;
}

int findGCD(int a,int b)
{
     while(a!=b)
     {
          if(a>b)
              return findGCD(a-b,b);
          else
             return findGCD(a,b-a);
     }
     return a;
}

