
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int digit(int n, int k);
int num_digits(int n);

int main(void)
{int z=0;
    int n, k, result;
    scanf("%d%d", &n, &k);
 if ((result = digit(n, k)) == 0)
    
   printf("%d",z);    
   
   else 
  printf("%d", result);
    
    return 0;
}

int digit(int n, int k)
{
    int num_of_digits = num_digits(n);
    if (k > num_of_digits) return 0;

    for (; k != 1; k--)
        n /= 10;

    return n % 10;
}
/* Returns the number of digits that n has */
int num_digits(int n)
{
    int digits;
    for (digits = 0; n != 0; digits++)
        n /= 10;
    return digits;
}
  