// Write a program to print the elements of an array in reverse order.
#include <stdio.h>
#include <string.h>
int main()
{
     char s[50];
     printf("enter str: ");
     gets(s);
     int len = strlen(s);
     char * ptr = &s[len-1];
     while (len)
     {
          printf("%c",*ptr);
          ptr--;
          len--;
     }
     return 0;
}

// #include <stdio.h>
// int main()
// {
//     char str1[50];
//     char revstr[50];
//     char *stptr = str1;
//     char *rvptr = revstr;
//     int i=-1;
//  	printf("\n\n Pointer : Print a string in reverse order :\n"); 
// 	printf("------------------------------------------------\n");	
//     printf(" Input a string : ");
//     scanf("%s",str1);
//     while(*stptr)
//     {
//      stptr++;
//      i++;
//     }
//     while(i>=0)
//     {
//      stptr--;
//      *rvptr = *stptr;
//      rvptr++;
//      --i;
//     }
//     *rvptr='\0';
//     printf(" Reverse of the string is : %s\n\n",revstr);
//     return 0;
// }
