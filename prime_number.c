#include<stdio.h>
int main()
{
	int n,i,fc=0;
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			fc++;
			break;
		}
    }
		if(fc==0)
		{
			printf("prime");
		}
		else
		{
			printf("not a prime");
		}
		return 0;
}