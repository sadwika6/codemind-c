#include<stdio.h>
int is_prime(int i)
{
    int j;
    for(j=2;j*j<=i;j++)
    {
        if(i%j==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int a,b,i;
    scanf("%d %d",&a,&b);
    for(i=a+1;i<=b;i++)
    {
        if(is_prime(i))
        {
            printf("%d
",i);
        }
    }
}