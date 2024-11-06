//Hours and hourly wage
#include <stdio.h>

#define REGULAR_HOURS 40
#define OVERTIME_RATE 1.5
#define TAX_RATE1 0.15
#define TAX_RATE2 0.20
#define TAX_THRESHOLD 600

int main() {
    float hoursWorked, hourlyWage, grossPay, taxes, netPay;

    printf("Enter hours worked in a week: ");
    scanf("%f", &hoursWorked);

    printf("Enter hourly wage: ");
    scanf("%f", &hourlyWage);

    if (hoursWorked <= REGULAR_HOURS) {
        grossPay = hoursWorked * hourlyWage;
    } else {
        grossPay = REGULAR_HOURS * hourlyWage + (hoursWorked - REGULAR_HOURS) * hourlyWage * OVERTIME_RATE;
    }

    if (grossPay <= TAX_THRESHOLD) {
        taxes = grossPay * TAX_RATE1;
    } else {
        taxes = TAX_THRESHOLD * TAX_RATE1 + (grossPay - TAX_THRESHOLD) * TAX_RATE2;
    }

    netPay = grossPay - taxes;

    printf("Gross Pay: $%.2f\n", grossPay);
    printf("Taxes: $%.2f\n", taxes);
    printf("Net Pay: $%.2f\n", netPay);

    return 0;
}
