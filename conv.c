#include <stdio.h>

int main() {
    //IMPLICIT
    // Char to Int
    char a = '9'; //Converting it into ASCII value
    int b = 5;
    int r = a + b;
    printf("Result (Char to Int) = %d",r);
    // Double to Int
    double c = 10.34; 
    int d = 5;
    int r2 = c + d;
    printf("\nResult (Double to Int) = %d",r2);
    //EXPLICIT
    double g = 67.54;
    int f = 3;
    double r3 = (int)g + f;
    printf("\nResult (Double to Int) = %.1lf",r3);
    return 0;
}