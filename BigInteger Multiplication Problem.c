#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void reverse(int a[],int n){
    int i=0,temp;
    for(i=0;i<n/2;i++){
            temp=a[n-i-1];
            a[n-i-1]=a[i];
            a[i]=temp;
            }

}

// print array of size n
void print_array(int a[], int n) {
    int i = 0;
    while(i < n - 1 && a[i] == 0)i++;
    while(i < n) {
        printf("%d",a[i]);
        i++;
    }
    printf("\n");
}

// scans a single integer into array with size n
void scan_array(int a[], int n) {
    for(int i = 0; i < n; i++) {
        scanf("%1d", &a[i]);
    }
}

// the multiplication operation
// it is better to split the logic on several other functions
// then make multiply function call them.
void multiply(int a[], int n, int b[], int m, int r[], int t) {
int i,j=0,temp=0,ans[1000],temp2;

for (i=0;i<t;i++){
    r[i]=0;
}
    reverse(a,n);
    reverse(b,m);
             for(j=0;j<n;j++)
            {
                for (i=0;i<m;i++){
               r[i+j] = r[i+j]+ b[i]*a[j];
               r[i+j+1] = r[i+j+1]+r[i+j]/10;
               r[i+j]=r[i+j]%10;
                    }
            }
            reverse(r,t);
        }





// don't change any thing in the main
int main() {

    int n;
    scanf("%d", &n);
    int x[n];
    scan_array(x, n);

    int m;
    scanf("%d", &m);
    int y[m];
    scan_array(y, m);

    int t = n + m;
    int ans[t];

    multiply(x, n, y, m, ans, t);
    print_array(ans, t);

    return 0;
}
