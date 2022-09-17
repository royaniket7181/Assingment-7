#include<stdio.h>
int main()
{
	int temp,first,second,third,N,count;
	
	printf("Enter the number of terms:");
	scanf("%d",&N);
	
	first=0,second=1;
	count=1;

	while(count<=N-2)
	{   
	    third=first+second;
		
		
		first=second;
		second=third;
		count++;		
	}
	printf("%d is the %dth term of fibbo series",third,N);
}