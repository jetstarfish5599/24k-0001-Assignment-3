#include <stdio.h>

int main() {
    // Declare variables
    float principal, rate, time, simpleInterest;

    // Input validation for principal
    do {
        printf("Enter the Principal amount (between 100 and 1,000,000 Rs): ");
        scanf("%f", &principal);

        if (principal < 100 || principal > 1000000) {
            printf("Error: Principal must be between 100 and 1,000,000 Rs!\n");
        }
    } while (principal < 100 || principal > 1000000);

    // Input validation for rate of interest
    do {
        printf("Enter the Rate of Interest (between 5%% and 10%%): ");
        scanf("%f", &rate);

       if (rate < 5 || rate > 10) {
            printf("Error: Rate of Interest must be between 5%% and 10%%!\n");
        }
    } while (rate < 5 || rate > 10);

    // Input validation for time period
    do {
        printf("Enter the Time period (in years, between 1 and 10): ");
        scanf("%f", &time);

        if (time < 1 || time > 10) {
            printf("Error: Time period must be between 1 and 10 years!\n");
        }
    } while (time < 1 || time > 10);

    // Calculate Simple Interest
    simpleInterest = (principal * rate * time) / 100;

    // Display the Simple Interest
    printf("\nSimple Interest = %.2f Rs\n", simpleInterest);
    return 0;
}//Main end