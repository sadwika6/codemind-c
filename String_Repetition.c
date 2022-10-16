#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    long long int r,i,c=0,ca=0,a,b,count=0;
    scanf("%s",str);
    scanf("%lld",&r);
    for(i=0;i<strlen(str);i++)
    {
        c+=1;
    }
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]=='a')
        {
            ca+=1;
        }
    }
    a=r/c;
    b=r%c;
    count=a*ca;
    for(i=0;i<b;i++)
    {
        if(str[i]=='a')
        {
            count+=1;
        }
    }
    printf("%lld",count);
}