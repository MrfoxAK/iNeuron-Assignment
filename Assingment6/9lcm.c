#include <stdio.h>
int main()
{
     int n1,n2,lcm=1;
     printf("Enter 1st num: ");
     scanf("%d",&n1);
     printf("Enter 2nd num: ");
     scanf("%d",&n2);
     for (int i = 1; i <= n1; i++)
     {
          if (n1%i==0 && n2%i==0)
          {
               lcm*=i;
               n1/=i;
               n2/=i;
          }
     }
     lcm=lcm*n1*n2;
     printf("The lcm is: %d",lcm);
     return 0;
}