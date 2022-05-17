#include<stdio.h>
int rev(int n)
{
    int r,l=0;
    while(n>0)
    {
        r=n%10;
        l+=r;
        n=n/10;
    }
    return l;
}
int main()
{
    int n,a[1000],i,*res,s;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s+=rev(a[i]);
    }
    printf("%d",s-4);
}