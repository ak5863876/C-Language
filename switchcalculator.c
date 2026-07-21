#include <stdio.h>

int main(){
    char operator;
    printf("Enter an arithmetic operator from calculator [+,-,*,/]: ");
    scanf("%c",&operator);

    double num1;
    printf("Enter a value for num1: ");
    scanf("%lf",&num1);

    double num2;
    printf("Enter a value for num2: ");
    scanf("%lf",&num2);

    double result;

    switch(operator){
        case '+':
        result = num1 + num2;
        break;

        case '-':
        result = num1 - num2;
        break;

        case '*':
        result = num1 * num2;
        break;

        case '/':
        result = num1 / num2;
        break;

        default:
        printf("Invalid operator");
    }
    printf("Result = %.1lf",result);
    return 0;
}