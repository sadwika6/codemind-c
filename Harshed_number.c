
#include<stdio.h>
int main()
{
    int m,n,r,sum=0;
    scanf("%d",&m);
    n=m;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        sum+=r;
    }
    if(m%sum==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}
