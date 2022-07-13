#include<stdio.h>
int prime(int n)
{
    int i;
    if(n==1)
    {
        return 0;
    }
    for(i=2;i<=(n/2)+1;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d",&n);
    int x,y,i;
    for(i=n;i>1;i--)
    {
        if(prime(i))
        {
            x=i;
            break;
        }
    }
    for(i=n;;i++)
    {
        if(prime(i))
        {
            y=i;
            break;
        }
    }
    if(n-x<=y-n)
    {
        printf("%d
",n-x);
    }
    else
    {
        printf("%d
",y-n);
    }
}