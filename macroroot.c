#include <stdio.h>
#include <math.h>

// Macro to calculate square root
#define squareRoot(n) sqrt(n)

int main() {
    double num, result;
    printf("Enter a number: ");
    scanf("%lf", &num);
    result = squareRoot(num);
    printf("\nSquare root of %.2lf = %.2lf\n", num, result);
    return 0;
}