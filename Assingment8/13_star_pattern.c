#include <stdio.h>
int main()
{
     int n,k;
     printf("Enter the no.of rows : ");
     scanf("%d",&n);
     for (int i = 1; i <= n; i++)
     {
          k=0;
          for (int j = 1; j < 2*n; j++)
          {
               if (j<=n-i || j>=n+i)
               {
                    if (j<=n)
                    {
                         printf("%c",k++ + 65);
                    }
                    else{
                         printf("%c",--k + 65);
                    }
               }
               else
               {
                    printf(" ");
               }
          }
          printf("\n");
     }
     return 0;
}