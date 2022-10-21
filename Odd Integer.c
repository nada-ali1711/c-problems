#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void odd (int *Arr,int n){
    int Reverse=0,i;
    for(i=0;i<n;++i){
        Reverse=Reverse^Arr[i];
    }
    printf("%d ",Reverse);
}
    int main() {
        int *Arr,i,n;
        scanf("%d",&n);
        Arr=(int*)malloc(n*sizeof(int));
        if(0<=n && n<=100000){
            for(i=0;i<n;++i){
                scanf("%d",&Arr[i]);
            }
            odd(Arr,n);
        }
        else{
            printf("ERROR");
        }
    return 0;
}
