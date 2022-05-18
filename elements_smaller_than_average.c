#include<stdio.h>
int main()
{
    int n,ar[1000],i,s=0,a,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
        s+=ar[i];
    }
    a=s/n;
    for(i=0;i<n;i++)
    {
        if(ar[i]<=a)
        {
            c++;
        }
    }
    printf("%d",c);
}