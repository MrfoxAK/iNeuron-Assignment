// Write a program to check whether a given number is a three-digit number or not.

#include <stdio.h>
int main()
{
     int n,count=0;
     printf("Please enter a number: ");
     scanf("%d", &n);
     while (n>0)
     {
          count++;
          n/=10;
     }
     // printf("%d",count);
     if (count==3)
     {
          printf("Yes! it's a three digit number.\n");
     }
     else
     {
          printf("No! it's not a three digit number.\n");
     }
     
     return 0;
}