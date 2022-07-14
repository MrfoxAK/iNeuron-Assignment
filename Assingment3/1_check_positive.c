// Write a program to check whether a given number is positive or non-positive.

#include <stdio.h>
int main()
{
     int num;
     printf("Enter the num : ");
     scanf("%d",&num);
     if (num>0)
     {
          printf("The number you have entred %d is Positive\n",num);
     }
     else
     {
          printf("The number you have entred %d is Non-Positive\n",num);
     }
     return 0;
}