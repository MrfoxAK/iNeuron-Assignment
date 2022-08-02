#include <stdio.h>

void findLCM(int n1,int n2){
     int d1,d2,LCM=1;
     for (int i = 2; i < n1; i++)
     {
          if (n1%i==0 && n2%i==0)
          {
               LCM*=i;
               n1/=i;
               n2/=i;
          }
     }
     LCM*=n1*n2;
     printf("The LCM of two num is : %d",LCM);
}

int main()
{
     int n1,n2;
     printf("Enter two numbers: ");
     scanf("%d%d",&n1,&n2);
     findLCM(n1,n2);
     return 0;
}