#include<stdio.h>
int main()
{
    int m,n,i,j,a[1000][1000],sum=0;
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++)
    {
        sum=0;
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            sum+=a[i][j];
        }
        printf("%d ",sum);
    }
}