#include <stdio.h>

int main(){    
    double num1;
    double num2;
    printf("\nEnter the first number: ");
    scanf("%lf", &num1);
    printf("\nEnter the second number: ");
    scanf("%lf", &num2);
    char operator;
    printf("Enter the arithmetic symbol [+,-,*,/]: ");
    scanf(" %c", &operator);
    double result;
    if (operator == '+'){
        result = num1 + num2;
    } else if (operator == '-'){
        result = num2 - num1;
    } else if (operator == '*'){
        result = num1 * num2;
    } else if (operator == '/'){
        result = num2 / num1;
    }
    printf("Result = %lf", result);
    return 0;
}