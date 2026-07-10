#include <stdio.h>

#define PI 3.1415 // Used to define macro in which PI is a macro
/*
#define circleArea(r) (PI * r * r)
*/

int main(){
    double radius = 12.1;
    double area = PI * radius * radius;
    printf("Area of Circle = %.2lf",area);
    return 0;
}