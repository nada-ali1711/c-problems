#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n=100000,k=100000,w=0,*Union_p,i,j;

    int *arr1;
    int *arr2;


     scanf("%d",&n);
   arr1=(int*)malloc(n*sizeof(int));

     for (i = 0; i < n; i++) {
     scanf("%d",&arr1[i]);
            }

     scanf("%d",&k);
     arr2=(int*)malloc(k*sizeof(int));
     Union_p=(int*)malloc((n+k)*sizeof(int));

     for (int i = 0; i < k; i++) {
     scanf("%d",&arr2[i]);
            }

    if (n>=0 && k<=100000){
        int i=0;
        int j=0;
          while (i < n && j < k)
        {
            if (arr1[i] < arr2[j])
            {
                Union_p[w] = arr1[i];
                i++;
            }

            else
            {
                Union_p[w] = arr2[j];
                j++;
            }
            w++;
        }

        if (i >= n)
        {
            while (j < k)
            {
                Union_p[w] = arr2[j];
                j++;
                w++;
            }
        }

        if (j >= k)
        {
            while (i < n)
            {
                Union_p[w] = arr1[i];
                i++;
                w++;
            }

        }

          for(i=0;i<(n+k);i++){
         printf("%d ",Union_p[i]);
        }
    }
    else{
        printf("ERROR");
    }
    return 0;
}
    