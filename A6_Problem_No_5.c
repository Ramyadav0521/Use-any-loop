/*
5. Write a program to calculate sum of cubes of first N natural numbers
*/
#include<stdio.h>
int main()
{
          int num,i,sum=0,f;
          printf("\nEnter a number: ");
          scanf("%d",&num);

          for (i = 1; i <=num; i++)
          {
                    f =i*i*i;
                    sum = sum+f;
                    printf("Sum of %d is %d\n",f,sum);
          }
          return 0;       
}