// Write a program to make the last digit of a number stored in a variable as zero.
// (Example - if x=2345 then make it x=2340)

#include <stdio.h>
int main()
{
     int n;
     printf("Enter a num: ");
     scanf("%d",&n);
     n/=10;
     n*=10;
     printf("Now the number is: %d",n);
     return 0;
}