#include <stdio.h>

int main() {
    float cost_price, selling_price, difference;

    // Input cost price
    printf("Enter the cost price of the item in UGX: ");
    scanf("%f", &cost_price);


    // Calculate the difference
    difference = selling_price - cost_price;

    // Check if profit or loss
    if (difference > 0) {
        printf("Profit amount: UGX %.2fn", difference);
    } else if (difference < 0) {

    } else {
        printf("No profit, no loss.\n");
    }

    return 0;
}
