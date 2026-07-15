#include <stdio.h>

// With return and argument together

int AreaRect(int l, int b);

int AreaRect(int l, int b){
    int area = l * b;
    return area;
}

int main(){
    int l;
    int b;

    printf("Enter the length of the rectangle: ");
    scanf("%d", &l);
    printf("Enter the breadth of the rectangle: ");
    scanf("%d", &b);

    int area = AreaRect(l,b);

    printf("Area of Rectangle with Length %d and Breadth %d = %d",l,b,area);
    
    return 0;
}