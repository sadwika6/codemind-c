#include<stdio.h>
int main()
{
    int n,m,r,i,sum=0,temp;
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        sum=0;
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    if(sum==temp)
    printf("True
");
    else
    printf("False
");
    }
}