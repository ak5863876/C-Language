#include <stdio.h>

int main() {
    int age;
    printf("Enter your age for voting: ");
    scanf("%d", &age);
    if(age >= 18 && age <= 120) {
        printf("You are eligible to vote.");
    }
    else if(age > 120 || age < 0) {
        printf("Invalid Age.");
    }
    else {
        printf("Sorry! Not eligible to vote. Must be above 18.");
    }
    return 0;
}
