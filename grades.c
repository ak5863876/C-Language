#include <stdio.h> 

int main(){
    int total_marks;
    printf("GRADE CALCULATOR\n");
    printf("Enter the total marks to determine its grade: ");
    scanf("%d", &total_marks);
    if (total_marks >= 90 && total_marks <= 100){
        printf("A");
    } else if (total_marks >= 80 && total_marks <= 89){
        printf("B");
    } else if (total_marks >= 70 && total_marks <= 79){
        printf("C");
    } else if (total_marks >= 60 && total_marks <= 69){
        printf("D");
    } else if (total_marks <= 59){
        printf("F");
    } else {
        printf("Invalid score");
    }
    return 0;
}