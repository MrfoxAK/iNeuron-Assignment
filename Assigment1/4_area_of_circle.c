#include <stdio.h>
int main()
{
     int R;
     float A;
     printf("Enter the radius : ");
     scanf("%d",&R);
     A = 3.142 * R * R;
     printf("Area of the circle is %f having the radius %d\n",A,R);
     return 0;
}