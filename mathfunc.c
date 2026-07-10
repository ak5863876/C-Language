#include <stdio.h>

void calculateSquare(int number) {
    int square = number * number;
    printf("Square of %d is %d\n", number, square);
}
int addNums(int n1, int n2) {
    int sum = n1 + n2;
    return sum;
}
int main() {
    int num, n1, n2;

    printf("Enter a number to find its square: ");
    scanf("%d", &num);

    printf("Enter a value for n1: ");
    scanf("%d", &n1);

    printf("Enter a value for n2: ");
    scanf("%d", &n2);

    calculateSquare(num);

    int result = addNums(n1, n2);
    printf("\nAddition Result = %d", result);

    return 0;
}