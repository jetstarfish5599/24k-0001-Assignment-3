//24k0001 M.masoom Khan
#include <stdio.h>

int main() {
    // Declare variables for the first coordinates
    float x1 = 5, y1 = 4;
    // Declare variables for the second coordinates
float x2 = 3, y2 = 2;
// assigning slope    
float slope;

    // Calculating the slope using y=mx+c
    slope = (y1 - y2) / (x1 - x2);

    // Printing the slope, capped to 3 decimal places
    printf("The slope between points (%.0f,%.0f) and (%.0f,%.0f) is: %.3f\n", x1, y1, x2, y2, slope);

    return 0;
}//main end