#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double R1;
    double R2;
    double R3;
    double series;
    double parallel;
    scanf("%lf",&R1);
    scanf("%lf",&R2);
    scanf("%lf",&R3);
    series=R1+R2+R3;
    parallel=1/(1/R1+1/R2+1/R3);
    printf("series %.5lf parallel %.5lf",series,parallel);
    return 0;
