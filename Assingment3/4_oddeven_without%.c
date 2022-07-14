
// check odd even without using mod operator

#include <stdio.h>
int main()
{
     int n;
     printf("Please enter a number: ");
     scanf("%d", &n);
     if (n / 2 * 2 == n)
     {
          printf("Even!");
     }
     else
     {
          printf("Odd!");
     }
     return 0;
}