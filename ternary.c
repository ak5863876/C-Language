#include <stdio.h>

// test_condition ? exp1 : exp2
/*
int main() {
    int age = 25;
    (age >= 18) ? printf("You can vote") : printf("You cannot vote") ;
    return 0;
} 
*/
int main(){
    char operator = '+';
    int num1 = 7;
    int num2 = 8;
    int result = (operator == '+') ? (num1 + num2) : (num1 - num2);
    printf("%d",result);
    return 0;
}
