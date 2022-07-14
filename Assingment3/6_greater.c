// Write a program to print greater between two numbers. Print one number of both are
// the same.
#include <stdio.h>
int main()
{
     int n1,n2,count=0;
     printf("Please enter 1st number: ");
     scanf("%d", &n1);
     printf("Please enter 2nd number: ");
     scanf("%d", &n2);
     if (n1==n2)
     {
          printf("%d Both are same",n1);
     }
     else if (n1>n2)
     {
          printf("%d is greater than %d",n1,n2);
     }
     else
     {
          printf("%d is greater than %d",n2,n1);
     }
     return 0;
}