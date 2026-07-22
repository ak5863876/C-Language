#include <stdio.h> 

int main(){
    double height;
    double weight;
    printf("\nEnter your height: ");
    scanf("%lf", &height);
    printf("\nEnter your weight: ");
    scanf("%lf", &weight);
    double bmi = weight / (height * height);
    if (bmi < 18.5){
        printf("Underweight");
    } else if (bmi >= 18.5 && bmi <= 24.9){
        printf("Normal Weight");
    } else if (bmi >= 25 && bmi <= 29.9){
        printf("Overweight");
    } else if (bmi >= 30){
        printf("Obesse");
    }
    return 0;
}