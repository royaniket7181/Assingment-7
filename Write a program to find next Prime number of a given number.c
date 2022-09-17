#include<stdio.h>
int main()
{
	int n,i,j,flag=0;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=n+1;i<=n+100;i++)
	{
		flag=0;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			printf("Next prime number is:%d",i);
			break;
		}
	}
}