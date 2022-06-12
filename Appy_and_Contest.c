#include<stdio.h>
int min(int x,int y)
{
    if(x<=y)
    {
        return x;
    }
    else
    {
        return y;
    }
}
int max(int x,int y)
{
    if(x>=y)
    {
        return x;
    }
    else
    {
        return y;
    }
}
int cal(int x,int y)
{
    if(x==0)
    {
        return y;
    }
    else
    {
        return cal(y%x,x);
    }
}
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n,x,k,y,a,b,z;
        scanf("%d %d %d %d ",&n,&x,&y,&k);
        a=n/x;
        b=n/y;
        z=n/((x*y)/cal(min(x,y),max(x,y)));
        if(a+b-2*z>=k)
        {
            printf("Win
");
        }
        else
        {
            printf("Lose
");
        }
    }
}