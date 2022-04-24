#include<stdio.h>
int main()
{
    int arr[100],i,n,c=0,sum,sear;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&sear);
    for(i=0;i<n;i++)
    {
        if(sear==arr[i])
        c++;
        
    }
    if(c>0)
    printf("True");
    else
    printf("False");
}