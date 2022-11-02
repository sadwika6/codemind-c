#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t!=0)
    {
        int n,i,j,c=0,x=0;
        char s[104];
        scanf("%d",&n);
        scanf(" %s",s);
        for(i=0;i<n;i++)
        {
            c=0;
            for(j=0;j<n;j++)
            {
                if(s[i]==s[j])
                {
                    c+=1;
                }
            }
            if(c==1)
            {
                x=1;
                printf("%c",s[i]);
                break;
            }
        }
        if(x==0)
        {
            printf("-1");
        }
        t--;
        printf("
");
    }
}