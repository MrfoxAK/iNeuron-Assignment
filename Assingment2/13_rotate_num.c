// Write a program to take a three-digit number from the user and rotate its digits by
// one position towards the right.

#include <stdio.h>
int main()
{
     int n,r,newnum=0;
     printf("Enter three digit num : ");
     scanf("%d",&n);
     for (int i = 0; i < 3; i++)
     {
          r=n%10;
          newnum=newnum*10+r;
          n/=10;
     }
     printf("The num is : %d",newnum);
     return 0;
}