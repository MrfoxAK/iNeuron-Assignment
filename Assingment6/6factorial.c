// Write a program to calculate factorial of a number
#include <stdio.h>
int main()
{
     int n,f=1;
     printf("Enter a num : ");
     scanf("%d",&n);
     for (int i = 1; i <= n; i++)
     {
          f*=i;
     }
     printf("The factorial is : %d",f);
     return 0;
}