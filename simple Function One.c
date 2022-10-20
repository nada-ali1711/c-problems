
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
long int poly(int x){
    
    long int z;
   z=3*pow(x,5)+2*pow(x,4)-5*pow(x,3)-pow(x,2)+7*pow(x,1)-6;
    return z;
}
  
 int main() { 
   long  int r;
    int x;
     scanf("%d",&x);
   r= poly(x);
   printf("%ld",r);
    return 0;
}

