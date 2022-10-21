#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int factorial(int n) {

   if(n == 0) {
      return 1;
   } else {
      return n * factorial(n-1);
   }
}

int fibbonacci(int n) {
   if(n == 0){
      return 0;
   } else if(n == 1) {
      return 1;
   } else {
      return (fibbonacci(n-1) + fibbonacci(n-2));
   }
}

int main() {
   int n;
    
  scanf("%d",&n);
   printf("Fibonacci of %d = " , n);
    
   
      printf("%d ",fibbonacci(n));            
   
    return 0;
}


