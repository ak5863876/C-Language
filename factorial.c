#include <stdio.h>

int factorial(int n){
    if (n > 0){
        return n * factorial(n-1);
    }else{
        return 1;
    }
}
int main(){
    int number;
    printf("Enter a number to determine its factorial: ");
    scanf("%d", &number);
    printf("Factorial = %d\n", factorial(number));
    return 0;   
}