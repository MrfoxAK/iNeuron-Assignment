// Write a program to take marks of 5 subjects from the user. Assume marks are given
// out of 100 and passing marks is 33. Now display whether the candidate passed the
// examination or failed.

#include <stdio.h>
#include <string.h>
int main()
{
     char name[50];
     printf("Enter your name : ");
     gets(name);
     int eng, math, chem, phy, bio, avr;
     printf("Enter your eng marks : ");
     scanf("%d", &eng);
     printf("Enter your math marks : ");
     scanf("%d", &math);
     printf("Enter your chem marks : ");
     scanf("%d", &chem);
     printf("Enter your phy marks : ");
     scanf("%d", &phy);
     printf("Enter your bio marks : ");
     scanf("%d", &bio);
     avr = (eng + math + chem + phy + bio);
     if (avr > 165)
     {
          puts(name);
          printf("is passed\n");
     }
     else
     {
          puts(name);
          printf("is failed\n");
     }
     return 0;
}