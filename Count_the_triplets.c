#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n;
        scanf("%d",&n);
        int i,j,k,s,a[n],c=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i!=j)
                {
                    s=a[i]+a[j];
                    for(k=0;k<n;k++)
                    {
                        if(a[k]==s)
                        {
                            c+=1;
                        }
                    }
                }
                
            }
        }
        if(c>0)
        {
            printf("%d
",c/2);
        }
        else
        {
            printf("-1
");
        }
    }
}