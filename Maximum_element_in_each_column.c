#include<stdio.h>
int main()
{
    int m,n,a[1000][1000],i,j,mx;
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(j=0;j<n;j++)
    {
        mx=a[0][i];
        for(i=0;i<m;i++)
        {
            if(a[i][j]>mx)
            {
                mx=a[i][j];
            }
        }
        printf("%d
",mx);
    }
}