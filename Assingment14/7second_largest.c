#include <stdio.h>
int main()
{
     // supose its a user input array
     int a[]={1,93,4,32,123,35,5};
     int l,l2=0;
     for (int i = 0; i < 6; i++)
     {
          for (int j = i+1; j < 6; j++)
          {
               if (a[j]>a[i])
               {
                    l = a[j];
                    if (a[i]>l2)
                    {
                         l2=a[i];
                    }
               }
               else
               {
                    l = a[i];
                    if (a[j]>l2)
                    {
                         l2=a[j];
                    }
               }
          }
     }
     printf("The 2nd largest is : %d",l2);
     return 0;
}