#include <stdio.h>
#include <math.h>

int main() {
    double num;
    printf("\n Enter a number to find its square root: ");
    scanf("%lf", &num);

    double result = sqrt(num);
    printf("Square root of %lf is %lf",num,result);

    return 0;
}