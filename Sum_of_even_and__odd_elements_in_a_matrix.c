#include<stdio.h>
int main()
{
    int m,n,i,j,a[1000][1000],esum=0,osum=0;
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]%2==0)
            {
                esum+=a[i][j];
            }
            else
            {
                osum+=a[i][j];
            }
        }
    }
    printf("%d %d",esum,osum);
}