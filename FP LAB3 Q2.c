#include <stdio.h>

int main() {
    //Assigning integer to a,b and temp
int a, b, temp;

    // Taking input of a from the user
    printf("Enter first integer: ");
    scanf("%d", &a);
    
    // Taking input of b from the user
printf("Enter second integer: ");
    scanf("%d", &b);

    // Displaying initial values of a and b
    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swapping the values using a temporary variable temp
    temp = a;
    a = b;
    b = temp;

    // Displaying the swapped values of a and b
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
//End Main