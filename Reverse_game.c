#include<stdio.h>
int rev(int n)
{
    int rv=0;
    int r;
    while(n>0)
    {
        r=n%10;
        rv=(rv*10)+r;
        n=n/10;
    }
    return rv;
}
int main()
{
    int n,a[1000],i,*res;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",rev(a[i]));
    }
}