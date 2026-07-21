#include <stdio.h> 

int main(){
    int number;
    printf("Enter a number to determine if its (+/-/zero): ");
    scanf("%d", &number);
    if (number > 0){
        printf("Positive Integer");
    } else if (number < 0){
        printf("Negative Integer");
    } else {
        printf("Zero");
    }
    return 0;
}