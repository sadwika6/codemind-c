#include<stdio.h>
int main()
{
    int n,a[1000000],i,j,c,t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=1;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c+=1;
            }
        }
        if(c%2==0)
        {
            t+=1;
        }
    }
    printf("%d",t);
}