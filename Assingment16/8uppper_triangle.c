// Write a program in C to print or display an upper triangular matrix.

#include <stdio.h>
int main()
{
     int n,a[100][100],b[100][100],rsum=0,csum=0;
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
          for (int j = i+1; j < n; j++)
          {
               printf("%d",a[i][j]);
          }
          printf("\n");
     }
     return 0;
}
















