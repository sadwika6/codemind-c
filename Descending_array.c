#include<stdio.h>
int main()
{
    int n,a[1000],i,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        if(a[i]>a[i-1])
        {
            c++;
        }
    }
    if(c!=0)
    {
        printf("no");
    }
    else
    {
        printf("yes");
    }
}