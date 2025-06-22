#include <stdio.h>

int man() {
    flo units_consumed, total_bill;

    // Input units consumed
    printf("enter the number of units consumed: ");
    scanf("%f", &uniconsumed);

    // Calculate total bill based on usage
    if (units_cosumed < 200) {
        total_bill = units_cons * 0.50;
    } else {
        total_bill = units_consumed * 5;
    }

    // Display the total bill
    printf("tal bill: UGX %.2f\n", total_bill);

    return 0;
}
