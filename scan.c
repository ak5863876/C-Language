#include <stdio.h>

int main(){
    //Single Input
    int age;
    printf("Enter age:");
    scanf("\n%d", &age); //'&' represents memory address
    printf("\nAge = %d", age);
    //Double Input
    double num;
    char alphabet;
    printf("\nEnter num:");
    scanf("\n%lf", &num);
    printf("\nNumber = %lf", num);
    printf("\nEnter alphabet:");
    scanf("\n%c", &alphabet);
    printf("\nAlphabet = %c", alphabet);
    //Multiple Input
    double num1;
    char alpha;
    printf("\nEnter input values:");
    scanf("\n%lf %c", &num1, &alpha);
    return 0;
}
