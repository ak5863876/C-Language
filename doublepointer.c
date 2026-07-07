#include <stdio.h>

int main() {
    double salary;
    double *ptr;

    printf("Enter salary: ");
    scanf("%lf", &salary);

    ptr = &salary;

    printf("Salary = %.2lf\n", *ptr);

    *ptr = *ptr * 2;

    printf("New Salary = %.2lf\n", *ptr);
    return 0;
}