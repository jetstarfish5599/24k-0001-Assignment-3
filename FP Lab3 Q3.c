#include <stdio.h>

int main() {
    // Declare decimal variables
    float salary, taxRate, taxAmount, netSalary;

    // Get salary  of the user
    printf("Enter your salary: ");
    scanf("%f", &salary);
// ask the user for percentile tax rate
    printf("Enter the tax rate (in percentage): ");
    scanf("%f", &taxRate);

    // Calculate the amount of taxes and net salary after taxes
    taxAmount = (taxRate / 100) * salary;
    netSalary = salary - taxAmount;

    // Display the Tax needed to payed
    printf("You need to pay: $%.2f in taxes.\n", taxAmount);
//Display salary after taxes    
printf("Your salary after tax will be: $%.2f\n", netSalary);

    return 0;
}//End Main