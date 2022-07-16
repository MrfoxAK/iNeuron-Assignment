// Write a program which takes the cost price and selling price of a product from the
// user. Now calculate and print profit or loss percentage.

#include <stdio.h>

int main()
{
     int costPrice, sellingPrice;
     printf("Enter costprice : ");
     scanf("%d", &costPrice);
     printf("Enter sellprice : ");
     scanf("%d", &sellingPrice);
     if (sellingPrice == costPrice)
          printf("No profit nor loss");

     else if (sellingPrice > costPrice)
          printf("%d Profit", sellingPrice - costPrice);

     else
          printf("%d loss", costPrice - sellingPrice);

     return 0;
}