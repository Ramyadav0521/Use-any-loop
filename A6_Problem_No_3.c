/*
3. Write a program to calculate sum of first N odd natural numbers
*/
#include<stdio.h>

int main()
{
          int num,i,sum=0,f;
          printf("\nenter a number: ");
          scanf("%d",&num);

          for (i = 1; i <=num; i++)
          {         
                    f = i*2-1;
                    sum = sum+f;

                    printf("Sum of %d odd is %d \n",f,sum);

          }
          return 0;

}