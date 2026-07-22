#include <stdio.h> 
/* 
Simple Interest Calculation
*/
int main(){
    int principal;
    int rate;
    int time;
    printf("Enter the principal: ");
    scanf("%d", &principal);
    printf("Enter the rate: ");
    scanf("%d", &rate);
    printf("Enter the time: ");
    scanf("%d", &time);
    int simple_interest = (principal * rate * time) / 100;
    printf("Simple Interest = %d",simple_interest);
    return 0;
}