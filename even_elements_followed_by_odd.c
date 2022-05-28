#include<stdio.h>
int main()
{
    int i,j,a[1000],b[1000],n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            b[j]=a[i];
            j++;
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            b[j]=a[i];
            j++;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
}