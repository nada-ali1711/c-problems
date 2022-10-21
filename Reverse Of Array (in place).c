#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
int i=0;
    int n=0;
    scanf("%d",&n);
 int A[n];
    int B[n];
    for(i=0;i<n;i++){
        scanf("%d ",&A[i]);}
       for(i=0;i<n;i++){ 
        B[i]=A[n-i-1];
        printf("%d ",B[i]);
    }
    return 0;
}