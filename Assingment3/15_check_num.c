// Write a program to check whether a given number is positive, negative or zero.
#include <stdio.h>
int main()
{
     int n;
     printf("Enter the num : ");
     scanf("%d",&n);
     if (n>0)
     {
          printf("%d is positive\n",n);
     }
     else if (n==0)
     {
          printf("%d is zero\n",n);
     }
     else if(n<0)
     {
          printf("%d is negative\n",n);
     }   
     return 0;
}