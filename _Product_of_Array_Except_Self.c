#include<stdio.h>
int main()
{
    int n,arr[1000],i,j,p=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        p=1;
        for(j=0;j<n;j++){
            if(arr[i]!=arr[j])
            {
                p*=arr[j];
            }
        }
        printf("%d ",p);
    }
}