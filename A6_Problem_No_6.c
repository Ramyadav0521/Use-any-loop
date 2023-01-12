/*
6. Write a program to calculate factorial of a number
*/
#include <stdio.h>
int main()
{
      int num, i,multi=1, result;

      printf("Enter a number to Check factorial: ");
      scanf("%d",&num);

      for (i = num; i >0; i--)
      {
         multi=multi*i;
         result=multi*(i-1);
         
         if(i>1)
         {
            printf("\nFactorial of %2d X %2d = %3d",multi,i-1,result);
         }

      }
      
      printf("\n\nFactorial of %d is: %d",num,multi);
      return 0;
         
}