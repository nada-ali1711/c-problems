#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int x, reverse = 0, remainder, originalN;
    
    scanf("%d", &x);
    originalN = x;


    while (x != 0) {
        remainder = x % 10;
        reverse = reverse * 10 + remainder;
        x /= 10;

    }

    if (originalN == reverse)
        printf("%d is a palindrome number", originalN);
    else
        printf("%d is not a palindrome number", originalN);

    return 0;
}
 
