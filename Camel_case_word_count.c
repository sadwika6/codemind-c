#include<stdio.h>
int main()
{
    char s[1000];
    int i,c=0;
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]>=65 && s[i]<=90)
        {
            c+=1;
        }
    }
    if(s[0]>=97 && s[0]<=122)
    {
        printf("%d",c+1);
    }
    else
    {
        printf("%d",c);
    }
}