#include <stdio.h>

int main(){
    char operator;
    printf("Enter an arithmetic operator [+,-,*,/]: ");
    scanf("%c", &operator);

    double num1, num2;
    printf("Enter a num1: ");
    scanf("%lf", &num1);

    printf("Enter a num2: ");
    scanf("%lf", &num2);

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
        printf("Invalid sign");
    }
    printf("Result %lf",result);
    return 0;
}