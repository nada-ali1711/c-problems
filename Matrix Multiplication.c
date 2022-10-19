
#include <stdio.h>

int main()
{
  int m, n, f,i,k,j, sum = 0;
  int A1[200][200], A2[200][200], multiply[200][200];

  scanf("%d%d%d", &m, &f, &n);

  for (  i = 0 ; i < m ; i++ )
    for ( j = 0 ; j < f ; j++ )
      scanf("%d", &A1[i][j]);

  //second array
    for ( i = 0 ; i < f ; i++ )
      for ( j = 0 ; j < n ; j++ )
        scanf("%d", &A2[i][j]);

    for ( i = 0 ; i < m ; i++ )
    {
      for ( j = 0 ; j < n ; j++ )
      {
        for ( k = 0 ; k < f ; k++ )
        {
          sum = sum + A1[i][k]*A2[k][j];
        }
        multiply[i][j] = sum;
        sum = 0;
      }
    }
    for ( i = 0 ; i < m ; i++ )
    {
      for ( j = 0 ; j < n ; j++ )
        printf("%d\t", multiply[i][j]);

      printf("\n");
    }
  return 0;
}

