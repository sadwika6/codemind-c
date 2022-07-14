#include<stdio.h>
int main()
{
    int a,b,i,j,s1=0,s2=0;
    scanf("%d %d",&a,&b);
    int arr[a][b];
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&arr[i][j]);
            if(i%2==0)
            {
                s1+=arr[i][j];
            }
            else if(i%2!=0)
            {
                //printf("%d ",arr[i][j]);
                s2+=arr[i][j];
            }
            //printf("%d ",arr[i][j]);
        }
        //printf("
");
    }
    printf("%d %d",s1,s2);
}