/*
7. Write a program to count digits in a given number
*/
#include<stdio.h>
int main()
{
   int i,num;
   printf("\nEnter a number: ");
   scanf("%d",&num);
   for (i = 0; num!=0; i++)
   {
      num=num/10;
   }
   printf("digits in number are %d\n",i);
   
   return 0;

}

