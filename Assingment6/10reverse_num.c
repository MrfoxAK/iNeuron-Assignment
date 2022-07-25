#include <stdio.h>
int main()
{
     int n,num=0,i=0,r;
     printf("Enter a num: ");
     scanf("%d",&n);
     while (n>0)
     {
          r=n%10;
          num = num*10+r;
          n/=10;
     }
     printf("The reverse num is: %d",num);
     return 0;
}