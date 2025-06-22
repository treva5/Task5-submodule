#include <stdio.h>

int main() {
    float basic_salary, final_salary;
    int years_of_service;

    // Input years of service
    printf("Enter the employee's years of service: ");
    scanf("%d", &years_of_service);

    // Input basic salary
    printf("Enter the basic salary in UGX: ");
    scanf("%f", &basic_salary);

    // Calculate final salary with bonus if applicable
    if (years_of_service > 5) {
        final_salary = basic_salary + (basic_salary * 0.05); // 5% bonus
    } else {
        final_salary = basic_salary;
    }

    // Display the final salary
    printf("The final salary is: UGX %.2f\n", final_salary);
    system("pause");

    return 0;
}
