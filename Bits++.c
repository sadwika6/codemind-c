#include<stdio.h>
int main()
{
    int i,j,s=0,t;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        char a[3];
        scanf("%s",a);
        if(a[1]=='+')
        {
            s+=1;
        }
        else if(a[1]=='-')
        {
            s-=1;
        }
    }
    printf("%d",s);
}