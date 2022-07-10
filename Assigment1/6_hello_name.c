#include <stdio.h>
#include <string.h>
int main()
{
     char str[50];
     printf("Enter your name: ");
     gets(str);
     printf("Hello, %s",str);
     return 0;
}