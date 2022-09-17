#include<stdio.h>
int main()
{
	int first,second,third,N,flag=0;
	int i;
	printf("Enter the number :");
	scanf("%d",&N);
	
	first=0,second=1;
	
	//printf("%d\t",first);
	//printf("%d\t",second);
	while(third<=N)
	{   
	    third=first+second;
		
		printf("%d\t",third);
		first=second;
		second=third;
				if(N==first)
				flag=1;
				else
				flag=0;
	}
	if(flag==1)
	printf("\nEntered number is in fibbo.");
	else
	printf("\nEntered number is not in fibbo.");
}