#include<stdio.h>
int main()
{
    int a,b,i,j,c=0,d,e;
    scanf("%d %d",&a,&b);
    int arr[a][b];
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<a;i++)
    {
        d=0;
        e=0;
        for(j=0;j<b-1;j++)
        {
            if(arr[i][j]>arr[i][j+1])
            {
                d+=1;
            }
        }
        if(d==0 or d==b-1)
        {
            c+=1;
        }
    }
    printf("%d",c);
    return 0;
}