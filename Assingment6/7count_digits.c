// Write a program to count digits in a given number
#include <stdio.h>
int main()
{
     int n,count=0;
     printf("Enter a num : ");
     scanf("%d",&n);
     while (n>0)
     {
          count++;
          n/=10;
     }
     printf("The total digit is %d",count);
     return 0;
}