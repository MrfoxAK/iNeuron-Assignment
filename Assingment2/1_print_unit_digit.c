#include <stdio.h>
int main()
{
     int n,r,sum=0;
     printf("Enter the num : ");
     scanf("%d",&n);
     r=n%10;
     sum=sum+r;
     n/=10;
     while (n>0)
     {
          r=n%10;
          n/=10;
     }
     sum=sum+r;
     printf("%d",sum);
     return 0;
}