#include <stdio.h>

int main (void){

    //define TAX_RATE 0.065

    int quantity, taxed;
    float TAX_RATE = 0.065, price_of_item, total_price;

    printf("Hello, Welcome to the UCF Theme Park,\nWhat is the price of your item?\n");
    scanf("%f", &price_of_item);

    printf("How many items are you purchasing?\n");
    scanf("%d", &quantity);

    printf("Is tax included?\nEnter 1 for Yes or 0 for No\n");
    scanf("%d", &taxed);

    float taxed_total;

    TAX_RATE = (taxed*TAX_RATE);

    float total_tax = TAX_RATE * (price_of_item * quantity);

    total_price = total_tax + (price_of_item * quantity);

    printf("Your total purchase will cost $%.2f.", total_price);

    return 0;
}
