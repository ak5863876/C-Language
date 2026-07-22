#include <stdio.h> 

int main(){
    double length;
    double breadth;
    printf("AREA & PERIMETER OF RECTANGLE");
    printf("\nEnter the length of rectangle:");
    scanf("%lf", &length);
    printf("\nEnter the breadth of rectangle:");
    scanf("%lf", &breadth);
    // Perimeter
    double perimeter = 2 * (length + breadth);
    printf("\nPerimeter = %.1lf",perimeter);
    // Area
    double area = length * breadth;
    printf("\nArea = %.1lf",area);
    return 0;
}