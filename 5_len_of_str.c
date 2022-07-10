#include <stdio.h>
#include <string.h>
int main()
{
     char str[50];
     printf("Enter the string: ");
     gets(str);
     int len = strlen(str);
     printf("The string length is %d",len);
     return 0;
}