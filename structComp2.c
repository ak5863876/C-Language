#include <stdio.h>

typedef struct ComplexSubtract {
    double real;
    double imagine;
} complex;

int main() {
    complex c1 = {.real = 21.87, .imagine = 30};
    complex c2 = {.real = 13.34, .imagine = 112.23};
    complex c3 = {.real = 5.50, .imagine = 10.75};

    complex diff1, diff2, diff3;

    // c1 - c2
    diff1.real = c1.real - c2.real;
    diff1.imagine = c1.imagine - c2.imagine;

    // c1 - c3
    diff2.real = c1.real - c3.real;
    diff2.imagine = c1.imagine - c3.imagine;

    // c2 - c3
    diff3.real = c2.real - c3.real;
    diff3.imagine = c2.imagine - c3.imagine;

    printf("c1 - c2 = %.2lf + %.2lfi\n", diff1.real, diff1.imagine);
    printf("c1 - c3 = %.2lf + %.2lfi\n", diff2.real, diff2.imagine);
    printf("c2 - c3 = %.2lf + %.2lfi\n", diff3.real, diff3.imagine);

    return 0;
}