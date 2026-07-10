#include <stdio.h>

int main(){
    int age = 20;
    int* ptr = &age;
    *ptr = 31;
    printf("%d",age);
    return 0;
}
/*
ptr = number;    // Invalid
*ptr = &number;  // Invalid
ptr = &number;   // Vaild
*ptr = number;   // Valid
*/