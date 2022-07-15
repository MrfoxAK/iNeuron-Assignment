// Write a program to check whether a given year is a leap year or not.
#include <stdio.h>
int main()
{
     int y;
     printf("Enter a year: ");
     scanf("%d", &y);

     // leap year if perfectly divisible by 400
     if (y % 400 == 0)
     {
          printf("%d is a leap year.", y);
     }
     // not a leap year if divisible by 100
     // but not divisible by 400
     else if (y % 100 == 0)
     {
          printf("%d is not a leap year.", y);
     }
     // leap year if not divisible by 100
     // but divisible by 4
     else if (y % 4 == 0)
     {
          printf("%d is a leap year.", y);
     }
     // all other years are not leap years
     else
     {
          printf("%d is not a leap year.", y);
     }

     return 0;
}