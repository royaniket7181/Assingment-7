#include<stdio.h>
int main()
{
	int a,b,i,min,HCF;
	printf("Enter the two numbers:");
	scanf("%d%d",&a,&b);

    if(a<b)
    {   min=a;
    	for(i=1;i<=min;i++)
    	{
    		if((a % i == 0)&&(b % i== 0 ))
    		{   
    		    HCF=i;
			}
			}
			if(HCF==1)
		   printf("Given two numbers are coprime.");
		   else
		   printf("Given two numbers are not coprime.");
	}
	if(b<a)
    {   min=b;
    	for(i=1;i<=min;i++)
    	{
    		if((a % i == 0)&&(b % i== 0 ))
    		{
    			HCF=i;
			}
		   }
		   if(HCF==1)
		   printf("Given two numbers are coprime.");
		   else
		   printf("Given two numbers are not coprime.");
	}
}