#include <stdio.h>

void main()
{
     int i, n;

     printf("Input number of terms : ");
     scanf("%d", &n);
     printf("\nThe Odd numbers are :");
     for (i = 1; i <= 2*n; i++)
     {
          if (i%2==0)
          {
               printf("%d\t",i);
          }
     }
}
