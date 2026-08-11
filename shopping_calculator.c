#include <stdio.h>
#include <stdlib.h>

int main()
{
   char item [50] = "" ;
   float price = 0.0f;
   int quantity = 0;
   float total = 0.0f;
   float discount = 0.0f;
   float totalPrice = 0.0f;



   printf("WHAT ITEM DO YOU WANT TO BUY?\n");
   fgets(item, sizeof(item),stdin);

   printf("WHAT IS THE PRICE FOR EACH?\n");
   scanf("%f", &price);

   printf("HOW MANY WOULD YOU LIKE?\n");
   scanf("%d", &quantity);

   total = price * quantity;
   discount = total * 10/100;
   totalPrice = total - discount;

   printf("YOU ARE BUYING: %s\n", item);
   printf("THE PRICE IS: $%.2f\n", price);
   printf("TOTAL QUANTITY: %d\n", quantity);
   printf("YOUR PRICE: $%.2f\n", total);
   printf("YOU HAVE A DISCOUNT OF: $%.2f\n", discount);
   printf("YOUR TOTAL PRICE: $%.2f\n", totalPrice);



    return 0;
}
