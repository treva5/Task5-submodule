#include <stdio.h>

int main() {
    float purchase_amount, final_amount;

    // Prompt user for total purchase amount
    printf("Enter the total purchase amount in UGX: ");
    scanf("%f", &purchase_amount);

    // Check if amount exceeds 1000 and apply discount
    if (purchase_amount > 1000) {
        final_amount = purchase_amount - (purchase_amount * 0.1); // 10% discount
    } else {
        final_amount = purchase_amount;
    }

    // Display the final amount
    printf("Final amount after discount (if applicable): UGX %.2f\n", final_amount);
    system("pause");

    return 0;
}
