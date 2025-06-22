#include <stdio.h>

int main() {
    float cost_price, selling_price, difference;

    // Input cost price
    printf("Enter the cost price of the item in UGX: ");
    scanf("%f", &cost_price);

    // Input selling price
    printf("Enter the selling price of the item in UGX: ");
    scanf("%f", &selling_price);

    // Calculate the difference
    difference = selling_price - cost_price;

    // Check if profit or loss
    if (difference > 0) {
        printf("Profit amount: UGX %.2f\n", difference);
    } else if (difference < 0) {
        printf("Loss amount: UGX %.2f\n", -difference);
    } else {
        printf("No profit, no loss.\n");
    }
    system("pause");

    return 0;
}
