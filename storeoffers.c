#include <stdio.h>

int main() {
    float price_per_unit, total_cost, discount, discounted_price;
    int quantity;

    // Input price per unit
    printf("Enter the price per unit in UGX: ");
    scanf("%f", &price_per_unit);

    // Input quantity
    printf("Enter the quantity: ");
    scanf("%d", &quantity);

    // Calculate total cost before discount
    total_cost = price_per_unit * quantity;

    // Apply discount if quantity is 10 or more
    if (quantity >= 10) {
        discount = 0.15; // 15% discount
        discounted_price = total_cost - (total_cost * discount);
    } else {
        discounted_price = total_cost; // No discount
    }

    // Display the total cost after discount
    printf("Total cost: UGX %.2f\n", discounted_price);
    system("pause");

    return 0;
}
