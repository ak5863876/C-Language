#include <stdio.h>

int main() {
    printf("Determine whether the number is positive/negative/zero");
    int num;
    printf("\nEnter a number:");
    scanf("%d", &num);
    if(num > 0){
        printf("\nIt is a positive number");
    } else if(num < 0){
        printf("\nIt is a negative number");
    } else if(num == 0){
        printf("\nIt is a zero");
    } else{
        printf("\nInvalid, try again!");
    }
    return 0;
}
