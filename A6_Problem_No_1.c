/*
1. Write a program to calculate sum of first N natural numbers.
*/
#include<stdio.h>
int main()
{
    int i, num, sum=0;
    printf("\nEnter a number: ");
    scanf("%d",&num);

    for ( i = 1; i<=num; i++)
    {
        sum=sum+i;
        printf("Sum of %d is = %d\n",i,sum);
    }
    
    return 0;    
}