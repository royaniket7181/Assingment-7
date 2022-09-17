#include<stdio.h>
int main()
{ 
   int num,i,flag,num1,num2;
   printf("Initial number for prime: ");
   scanf("%d",&num1);
   
   printf("final number for prime: ");
   scanf("%d",&num2);
   
   for(num=num1+1;num<num2-1;num++)
   {  
      flag=0;
   	 for(i=2;i<num;i++)
   	 {
   	 	if(num%i==0)
   	 	{
   	 		flag=1;
   	 		break;
			}
		}
		if(flag==0)
		{
			printf("%d\t",num);
		}
   }
}