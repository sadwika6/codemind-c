#include<stdio.h>
int main()
{
    int arr[100][100],i,j,m,n,sum;
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
            if((i==j)||(i+j)==n-1)
            {
                sum+=arr[i][j];
            }
        }
    }
    printf("%d",sum);
}