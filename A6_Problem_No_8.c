/*
8. Write a program to check whether a given number is a Prime number or not
*/
#include <stdio.h>
int main()
{
   int num, i;
   printf("\nEnter a number: ");
   scanf("%d", &num);

   for (i = 2; i < num; i++)
   {
      if (num % i==0 && i!=2)
      {
         printf("Given number %d is not a prime number: ", num);
         break;
      }

   }
   if (i==num || num==1)
   {
      printf("Given number %d is a prime number: ", num);
   }
   
   return 0;
 }