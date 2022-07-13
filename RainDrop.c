#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%3==0)
    {
        printf("Pling");
        if(n%5==0)
        {
            printf("Plang");
        }
        else if(n%7==0)
        {
            printf("Plong");
        }
    }
    else if(n%5==0)
    {
        printf("Plang");
        if(n%3==0)
        {
            printf("Pling");
        }
        else if(n%7==0)
        {
            printf("Plong");
        }
    }
    else if(n%7==0)
    {
        printf("Plong");
        if(n%3==0)
        {
            printf("Pling");
        }
        else if(n%5==0)
        {
            printf("Plang");
        }
    }
    else
    {
        printf("%d",n);
    }
}