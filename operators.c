#include <stdio.h>
/*
Addition:       +
Subtraction:    -
Multiplication: *
Division:       /
Remainder:      %
Increment:      ++
Decrement:      --
*/
int main() {
    // Addition/Subtraction with INTEGER
    int x = 12;
    int result = x + 8;
    printf("Addition (int & int) Result = %d", result);     // Method I
    printf("\nAddition (int & int) Result = %d", x + 12);   // Method II
    // Addition/Subtraction with DOUBLE
    double x1 = 12.34;
    double result2 = x1 + 9.2;
    printf("\nAddition (double & double) Result = %lf", result2);
    // MIXED addition/subtraction (double + int)
    double x2 = 12.34;
    int y = 9;
    double result3 = x2 + y;
    printf("\nAddition (double & int) Result = %lf", result3);
    // Multiplication
    int i1 = 25;
    int i2 = 89;
    int r = i1 * i2;
    printf("\nMultiplication  Result = %d", r);
    // Division 
    int a = 12;
    int b = 2;
    int r4 = a/b;
    printf("\nDivision Result = %d", r4);
    // Remainder
    int c = 28;
    int rem = c % 14;
    printf("\nRemainder Result = %d", r4);
    // Increment
    int i = 145;
    printf("\nIncrement Result = %d",++i);
    // Decrement
    int d = 134;
    printf("\nDecrement Result = %d",--d);
    // Multiple Operators 
    int m = (4 * 4) - 2 + 8 + (9 / 3);
    printf("\nMuliple Ops Result = %d",m);
    return 0;
}