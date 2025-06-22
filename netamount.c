#include <stdio.h>

int main() {
    float withdrawal_amount, net_amount;

    // Input withdrawal amount
    printf("Enter the withdrawal amount in UGX: ");
    scanf("%f", &withdrawal_amount);

    // Calculate net amount after fee
    if (withdrawal_amount < 500) {
        net_amount = withdrawal_amount - 10; // Deduct transaction fee
    } else {
        net_amount = withdrawal_amount; // No fee for amounts 500 and above
    }

    // Display the net amount received
    printf("Net amount received: UGX %.2f\n", net_amount);
    system("pause");

    return 0;
}
