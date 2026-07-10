#include <stdio.h>

int* multiplyNumbers(int* num1, int* num2, int* product){
    *product = *num1 * *num2;
    return product;
}
int main(){
    int num1 = 13;
    int num2 = 9;
    int product;
    int* result = multiplyNumbers(&num1,&num2,&product);
    printf("Result is %d",*result);
    return 0;
}