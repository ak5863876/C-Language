#include <stdio.h>

int multiply(int n1, int n2){
    int result = n1 * n2;
    return result;
}

int main(){
    int n1;
    int n2;

    printf("Enter a value for n1: ");
    scanf("%d", &n1);

    printf("Enter a value for n2: ");
    scanf("%d", &n2);

    int result = multiply(n1, n2);

    printf("\nMultiplication result = %d\n", result);

    return 0;
}