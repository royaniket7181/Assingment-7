#include <stdio.h>
int main() {
    int num,i,originalNum, remainder, result;

    for(num=1;num<1000;num++)
    {   result = 0;
	
	originalNum = num;

    while (originalNum != 0) {
       
        remainder = originalNum % 10;
        
       result = result+remainder * remainder * remainder;
        
       
       originalNum /= 10;
    }

    if (result == num)
        printf("%d\t", num);
    
    } 

}
