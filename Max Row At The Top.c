
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int A1[1000][1000];
   int A2[1000];
   int A3[1000];

   int i,j,ma;
   int res1=0,res2=0;
   int N,M;
   scanf("%d",&N);
   scanf("%d",&M);

     for (int i=0;i<N;i++){
    for (int j=0;j<M;j++){
        scanf("%d",&A1[i][j]);
    }
   }
    if(N==1&&M==1){
        for(i=0;i<N;i++){
            for (int j=0;j<M;j++){
        printf("%d",A1[i][j]);
    }
        }
    }
            else{
   for (i=0;i<M;i++){
    A3[i]=A1[0][i];
   }
  for (i=0;i<M;i++){
    res2 = res2 + A1[0][i];
   }
   for (int i=0;i<N;i++){
    for (int j=0;j<M;j++){
       res1 = res1 + A1[i][j];

    }
    if (res1 > res2){
       ma=i;
       res2=res1;
       res1 = 0;
   }
    else{
        res1=0;
    }
   }
   for (int i=0;i<M;i++){
    A2[i]=A1[ma][i];
    }

    for (i=0;i<M;i++){
        A1[0][i]=A2[i];
        A1[ma][i]=A3[i];
    }
    for (int i=0;i<N;i++){
      for (int j=0;j<M;j++){
        printf("%d ",A1[i][j]);
    }
    printf("\n");
   }
            }

   return 0;
}