// Write a program which takes the length of the sides of a triangle as an input. Display
// whether the triangle is valid or not.
#include <stdio.h>

void main()
{
     int a, b , c;
     printf("enter sides : ");
     scanf("%d%d%d",&a,&b,&c);
     if (a + b <= c || a + c <= b || b + c <= a)
          printf("InValid");
     else
          printf("valid");
}