#include <stdio.h>

int main() {
    float units_consumed, total_bill;

    // Input units consumed
    printf("Enter the number of units consumed: ");
    scanf("%f", &units_consumed);

    // Calculate total bill based on usage
    if (units_consumed < 200) {
        total_bill = units_consumed * 0.50;
    } else {
        total_bill = units_consumed * 0.75;
    }

    // Display the total bill
    printf("Total bill: UGX %.2f\n", total_bill);
    system("pause");

    return 0;
}
