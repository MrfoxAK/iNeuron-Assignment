#include <stdio.h>
int main()
{
     int n,a[100][100],rsum=0,csum=0;
     printf("Enter the n: ");
     scanf("%d",&n);
     for (int i = 0; i < n; i++)
     {
          for (int j = 0; j < n; j++)
          {
               printf("enter at %d,%d : ",i,j);
               scanf("%d",&a[i][j]);
          }
     }
     for (int i = 0; i < n; i++)
     {
          rsum=0;
          printf("\nFor the %d row : ",i+1);
          for (int j = 0; j < n; j++)
          {
               rsum=rsum+a[i][j];
          }
          printf("%d",rsum);
     }
     for (int i = 0; i < n; i++)
     {
          csum=0;
          printf("\nFor the %d colom : ",i+1);
          for (int j = 0; j < n; j++)
          {
               csum=csum+a[j][i];
          }
          printf("%d",csum);
     }
     return 0;
}