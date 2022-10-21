#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n=999,k=999;
    int matrix[n][k];
    int i,j;
    int matrix_transpose[n][k];
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++){
        for(j=0;j<k;j++){
            scanf("%d",& matrix[i][j]);
        }
    }
    if(n>=1 && k<=1000){
        for(i=0;i<n;i++){
           for(j=0;j<k;j++){
         matrix_transpose[j][i]=matrix[i][j];     
           }
            
        }
        for(i=0;i<k;i++){
       for(j=0;j<n;j++){  
           printf("%d ", matrix_transpose[i][j]);
    }
        printf("\n");
        }}
    else{
        printf("no constraints on integers of the matrix");
    }
    return 0;
}

