#include <stdio.h>

int main() {
    float purchase_amount, tax_rate, total_amount;

    // Input purchase amount
    printf("Enter the purchase amount in UGX: ");
    scanf("%f", &purchase_amount);

    // Determine tax rate based on purchase amount
    if (purchase_amount < 500) {
        tax_rate = 0.05;
    } else {
        tax_rate = 0.08;
    }

    // Calculate total payable amount
    total_amount = purchase_amount + (purchase_amount * tax_rate);

    // Display the total amount payable
    printf("Total payable amount: UGX %.2f\n", total_amount);
    system("pause");

    return 0;
}
