#include<stdio.h>
int main()
{
    int a,b,i,j,sum=0;
    scanf("%d %d",&a,&b);
    int arr[a][b];
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&arr[i][j]);
            if(i!=a-1 && j!=b-1 && i!=0 && j!=0)
            {
                sum+=arr[i][j];
            }
        }
       
    }
    printf("%d",sum);
    return 0;
}