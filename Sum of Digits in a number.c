#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
long long getSum(long long n)
{
    long long sum = 0;
    while (n != 0) {
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}
 
// Driver code
int main()
{
    long long n;
    scanf("%lld",&n);
    printf("Sum of digits of %lld = %lld\n", n,getSum(n));
    return 0;
}




