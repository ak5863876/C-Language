#include <stdio.h>
/*
Types of Variables in C/C++
*/
int main(){
    //Integer Variable (%d)
    int age = 10;
    printf("Age = %d",age);
    //Double Variable (%lf)
    double num = 12.45;
    printf("\n%lf",num); //Upto six decimal points
    printf("\nDouble = %.2lf",num); //Upto two decimal points
    //Float Variable (%f)
    float num1 = 10.9f;
    printf("\nFloat = %f",num1);
    //Exponential Number
    double num2 = 5.5e6; // 5.5 × 10^6 = 5500000
    printf("\nExponential Num =  %lf",num2);
    //Character Variable (%c)
    char c = 'A';
    printf("\nCharacter =  %c",c);
    printf("\nCharacter ASCII value = %d",c); //Converting character to its ASCII value
    // sizeof(datatype) operator %zu
    printf("int size = %zu", sizeof(age));
    printf("double size = %zu", sizeof(num));
    return 0;
}