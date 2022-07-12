#include <stdio.h>
int main()
{
     int n;
     printf("Enter the num : ");
     scanf("%d",&n);
     n=n/10;
     printf("The number without last digit is : %d",n); 
     return 0;
}