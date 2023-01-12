/*
2. Write a program to calculate sum of first N even natural numbers
*/
#include<stdio.h>
int main()
{
          int num,i,sum=0,f;
          printf("Enter a number: ");
          scanf("%d",&num);

          for (i = 1; +i<=num; i++)
          {
                    f = i*2;
                    sum = sum+f;
                    printf("\n Sum of %d + %d even is %d \n",f,sum,sum);

          }
          return 0;
}