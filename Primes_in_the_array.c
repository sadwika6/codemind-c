#include<stdio.h>
int main()
{
    int n,arr[100],i,j,f=1,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        f=0;
        for(j=2;j<arr[i];j++)
        {
            if(arr[i]%j==0)
            {
                f=1;
            }
        }
        if(f!=1 && arr[i]!=1)
        {
             c++;
        }
    }
    printf("%d",c);
}