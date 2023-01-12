/*
4. Write a program to calculate sum of squares of first N natural numbers
*/
#include<stdio.h>
int main()
{
          int num,i,sum=0,f;
          printf("\nEnter a number: ");
          scanf("%d",&num);

          for (i = 1; i<=num; i++)
          {         f = i*i;
                    sum = sum+f;
                    printf("Sum of %d is %d \n",f,sum);

          }
          return 0;
}