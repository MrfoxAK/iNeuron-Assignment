#include <stdio.h>

int primenumber(int n){
     int flag=0;
     for (int i = 2; i < n; i++)
     {
          if (n%i==0)
          {
               flag=1;
               break;
          }
     }
     if (flag==0)
     {
          return 1;
     }
}

void nextPrime(int n){
     int found=1;
     while (found)
     {
          n++;
          if (primenumber(n))
          {
               found=0;
          }
     }
     printf("The next prime is: %d",n);
}

int main()
{
     int num;
     printf("Enter a num: ");
     scanf("%d",&num);
     // nextPrime(num);
     // printf("%d",primenumber(num));
     nextPrime(num);
     return 0;
}