#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j,k,m=0,a[n],c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            c+=1;
        }
        else
        {
            if(c>=m)
            {
                m=c;
                c=0;
            }
        }
    }
    if(c>m)
    {
        printf("%d",c);
    }
    else
    {
        printf("%d",m);
    }
}