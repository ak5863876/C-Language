#include <stdio.h> 

int main(){
    int temp;
    printf("Enter the temperature: ");
    scanf("%d", &temp);
    if (temp > 25){
        printf("It is hot");
    } else if (temp >= 15 && temp <= 25){
        printf("It is warm");
    } else if (temp < 15){
        printf("It is cold");
    }
    return 0;
}