#include<stdio.h>
int main()
{ 
   int num,i,flag;
   printf("All prime number upto 100:\t");
   //Loop for all prime number
   for(num=2;num<100;num++)
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