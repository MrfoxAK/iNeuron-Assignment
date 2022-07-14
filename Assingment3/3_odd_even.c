// Write a program to check whether a given number is an even number or an odd
// number.
#include <stdio.h>
int main()
{
     int n;
     printf("Please enter a number: ");
     scanf("%d", &n);
     if (n % 2)
     {
          printf("The number you have entred %d is Odd!\n",n);
     }
     else
     {
          printf("The number you have entred %d is Even!\n",n);
     }
     return 0;
}