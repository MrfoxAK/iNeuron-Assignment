#include <stdio.h>
int main()
{
     int n,k;
     printf("Enter the no.of rows : ");
     scanf("%d",&n);
     for (int i = 0; i < n; i++)
     {
          k=0;
          for (int j = 0; j < i; j++)
          {
               printf(" ");
          }
          for (int j = 0; j < n-i; j++)
          {
               printf("%c",k+65);
               k++;
          }
          k--;
          for (int j = n; j > i+1; j--)
          {
               printf("%c",--k+65);
          }
          printf("\n");
     }
     return 0;
}