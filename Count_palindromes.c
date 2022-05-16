#include<stdio.h>
int palindrome(int n)
{
    int r,rev=0,k;
    k=n;
    while(n>0)
    {
        r=n%10;
        rev=(rev*10)+r;
        n=n/10;
    }
    if(rev==k)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,a[1000],c=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(palindrome(a[i]))
        {
            c++;
        }
    }
    printf("%d",c);
}