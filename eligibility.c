#include <stdio.h>

int main() {
    float salary;
    int employment_years;
    int eligible;

    // Input salary
    printf("Enter your salary in UGX: ");
    scanf("%f", &salary);

    // Input years of employment
    printf("Enter your years of employment: ");
    scanf("%d", &employment_years);

    // Check eligibility
    if (salary >= 5000 || employment_years >= 2) {
        eligible = 1;
    } else {
        eligible = 0;
    }

    // Display result
    if (eligible) {
        printf("You are eligible for the loan.\n");
    } else {
        printf("You are not eligible for the loan.\n");
    }
     system("pause");
    return 0;
}
