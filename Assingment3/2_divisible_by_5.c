// Write a program to check whether a given number is divisible by 5 or not
#include <stdio.h>
int main()
{
     int num;
     printf("Enter the num : ");
     scanf("%d",&num);
     if (num%5==0)
     {
          printf("The number you have entred %d is divisible by 5\n",num);
     }
     else
     {
          printf("The number you have entred %d is not divisible by 5\n",num);
     }
     return 0;
}