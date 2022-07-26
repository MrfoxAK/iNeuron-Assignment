#include <stdio.h>
int main()
{
     int n,k;
     printf("Enter the no.of rows : ");
     scanf("%d",&n);
     for (int i = 0; i < n-1; i++)
     {
          k=1;
          for (int j = 0; j <= n-i; j++)
          {
               printf(" ");
          }
          for (int j = 0; j <= i; j++)
          {
               printf("%d",k);
               k++;
          }
          for (int j = i; j >= 1; j--)
          {
               printf("%d",j);
               // k++;
          }
          printf("\n");
     }
     return 0;
}