#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,k=1;
    scanf("%d",&n);
    long a[52][52]={0};
    for(i=0;i<n;i++)
    {
        for(j=1;j<=n;j++)
        {
            a[i][j]= i==0 ? k++ : a[i-1][j-1]+a[i-1][j+1];
            printf("%li ",a[i][j]);
        }
        printf("\n");
    }

}
