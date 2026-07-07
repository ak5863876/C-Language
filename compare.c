#include <stdio.h>
#include <stdbool.h>

int main() {
    // Greater Than Operator
    bool value1 = (77 > 45);
    printf("Result = %d",value1);
    // Lesser Than Operator
    bool value2 = (29 < 92);
    printf("Result = %d",value2);
    // Equal To Operator
    bool value3 = (1 == 1);
    printf("Result = %d",value3);
    // Not Equal To Operator
    bool value4 = (2 != 1);
    printf("Result = %d",value4);
    // Greater Than or Equal To Operator
    bool value5 = (534 >= 12);
    printf("Result = %d",value5);
    // Lesser Than or Equal To Operator
    bool value5 = (90 <= 234);
    printf("Result = %d",value5);

    // COMPARING TWO VARIABLES
    int num1 = 9;
    int num2 = 6;
    bool value = num1 > num2;
    printf("Variable Result = %d",value);

    return 0;
}