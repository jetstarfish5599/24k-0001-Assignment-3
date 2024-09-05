#include <stdio.h>

int main() {
    // Constants 
    const float DPT = 1207;
 // Distance between point A and B (single trip in KM)
    const float FFP = 118; 
// Fuel price during forward trip (per liter)
    const float RFP = 123;  
// Fuel price during return trip (per liter)
//variables including Average fuel ,Ttal Fuel consumed,fuel consumed in forward direction,returning feul consumption
    float fuelAverage, totalFuelConsumed, forwardFuelConsumed, returnFuelConsumed;
 //Final values of cost of bothsides,one  side and return
    float totalFuelCost, forwardFuelCost, returnFuelCost;

    // Input the car's fuel average, with a check for positive input
    do {
        printf("Enter your car's fuel average (KM per liter, must be positive): ");
        scanf("%f", &fuelAverage);

        if (fuelAverage <= 0) {
            printf("Error: Fuel average must be a positive value!\n");
        }
    } while (fuelAverage <= 0); // Repeat until a positive fuel average is entered

    // Calculate the fuel consumed for the forward and return trips
    forwardFuelConsumed = DPT/ fuelAverage;
    returnFuelConsumed = DPT / fuelAverage;

    // Calculate total fuel consumed for both trips
   totalFuelConsumed = forwardFuelConsumed + returnFuelConsumed;

    // Calculate the fuel costs for forward and return trips
    forwardFuelCost = forwardFuelConsumed * FFP;
    returnFuelCost = returnFuelConsumed * RFP;

    // Calculate the total fuel cost for both trips
    totalFuelCost = forwardFuelCost + returnFuelCost;

    // Output the results
    printf("\nTotal fuel consumed for the trip: %.2f liters\n", totalFuelConsumed);
    printf("Total fuel cost for the trip: %.2f\n",totalFuelCost);

return 0;
}