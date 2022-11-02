#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],m='A';
    scanf("%[^
]s",a);
    int i;
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]>=m)
        {
            m=a[i];
        }
    }
    printf("%c",m);
}