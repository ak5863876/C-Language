#include <stdio.h>

int main(){
    int number;
    printf("Enter a number b/w 1-7: ");
    scanf("%d", &number);

    switch(number){
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        printf("WeekDay");
        break;
        
        case 1:
        case 7:
        printf("Weekend");
        break;
        
        default:
        printf("Invalid Number!");
    }
    return 0;
}