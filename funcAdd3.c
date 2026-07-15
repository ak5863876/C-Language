#include <stdio.h>

// With return, no argument

int AreaRect();

int AreaRect(){
    int l = 3;
    int b = 4;

    int area = l * b;
    return area;
}

int main(){
    int a;
    a = AreaRect();
    printf("Area of Rectangle = %d", a);
    return 0;
}