#include <stdio.h>

int main) {
    int membership_years
    float total_fee, discount, final_amount;

    // Input membership duration
    printf("Enter membership duration in years: ");
    scanf("%d", &membershipyears);

    // Input total fee
    printf("Enter the total fee: UGX ");
    scanf("%f", &total_fee);

    // Determine discount based on membership duration
    if (membershp_years >= 1 && membership_years <= 3) {
        discount = 0.05; // 5% discount
    } else if (meship_years > 3) {
        discount = 0.10; // 10% discount
    } else {
        discount = 0; // No discount for less than 1 year
    }

    // Calculate final amount
    final_amount = totl_fee - (total_fee * discount);

    // Display final payable amount
    printf("Fial payable amount: UGX %.2f\n", final_amount);

    return 0;
}
