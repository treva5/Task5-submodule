#include <stdio.h>

int main() {
    float prie_per_unit, total_cost, discount, discounted_price;
    int quantity;

    // Input price per unit
    printf("Enter the price pr unit in UGX: ");
    scanf("%f", &price_per_unit);

    // Input quantity
    printf("Enter the quantity: ");
    scanf("%d, &quantity);

    // Calculate total cost before discount
    total_cot = price_per_unit * quantity;

    // Apply discount if quantity is 10 or more
    if (quantity >= 10) {
        disnt = 0.15; // 15% discount
        discounted_price = total_cost - (total_cost * discount);
    } else {
        discounted_price = total_cost; // No discount
    }

    // Display the total cost after discount
    printf("Total cost: UGX %.f\n", discounted_price);

    return 0;
}
