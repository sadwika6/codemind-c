#include<stdio.h>
int main()
{
    int a,b,i,j,csum=0,rsum=0;
    scanf("%d %d",&a,&b);
    int arr[a][b],cm;
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(j=0;j<b;j++)
    {
        cm=0;
        for(i=0;i<a;i++)
        {
           cm+=arr[i][j]; 
        }
        printf("%d ",cm);
    }
    return 0;
}