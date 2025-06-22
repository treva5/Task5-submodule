#include <stdio.h>

int main() {
    float hours_worked, hourly_rate, total_salary, overtime_pay = 0;
    const float overtime_multiplier = 1.5;
    const int regular_hours = 40;

    // Input hours worked
    printf("Enter hours worked in the week: ");
    scanf("%f", &hours_worked);

    // Input hourly rate
    printf("Enter hourly rate in UGX: ");
    scanf("%f", &hourly_rate);

    // Calculate salary
    if (hours_worked > regular_hours) {
        // Calculate overtime hours
        float overtime_hours = hours_worked - regular_hours;
        // Calculate overtime pay
        overtime_pay = overtime_hours * hourly_rate * overtime_multiplier;
        // Calculate total salary
        total_salary = (regular_hours * hourly_rate) + overtime_pay;
    } else {
        // No overtime
        total_salary = hours_worked * hourly_rate;
    }

    // Display total salary
    printf("Total salary for the week: UGX %.2f\n", total_salary);
    system("pause");

    return 0;
}
