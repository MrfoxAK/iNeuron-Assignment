// Write a program to calculate the length of the string using a pointer
#include <stdio.h>
int main()
{
     int count=0;
     char s[50];
     printf("Enter str: ");
     gets(s);
     char * str=s;
     while (*str!='\0')
     {
          count++;
          str++;
     }
     printf("The len is : %d",count);
     return 0;
}