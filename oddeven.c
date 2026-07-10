#include <stdio.h>

int main(){
    int num;
    printf("Enter a number to determine whether it is odd/even:");
    scanf("%d", &num);
    (num%2 == 0) ? printf("\n%d is even") : printf("\n%d is odd");
    return 0;
}