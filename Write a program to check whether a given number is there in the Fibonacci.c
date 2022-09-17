#include<stdio.h>
int main()
{
	int temp,first,second,third,N,count;
	
	printf("Enter the number of terms:");
	scanf("%d",&N);
	
	first=0,second=1;
	count=1;
	printf("%d\t",first);
	printf("%d\t",second);
	while(count<=N-2)
	{   
	    third=first+second;
		
		printf("%d\t",third);
		first=second;
		second=third;
		count++;		
	}
	
}