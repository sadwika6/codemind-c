#include<stdio.h>
int main()
{
    int n,a[1000],i,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n-1;i++)
    {
        if((a[i-1]%2==0 && a[i+1]%2!=0)||(a[i-1]%2!=0 && a[i+1]%2==0))
        {
            s++;
        }
    }
    printf("%d",s);
}