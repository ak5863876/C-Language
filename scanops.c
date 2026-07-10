#include <stdio.h>

int main() {
    int a, b;

    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);

    // Arithmetic
    printf("\n--- Arithmetic ---\n");
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b);

    // Relational
    printf("\n--- Relational ---\n");
    printf("a == b = %d\n", a == b);
    printf("a != b = %d\n", a != b);
    printf("a > b  = %d\n", a > b);
    printf("a < b  = %d\n", a < b);

    // Logical
    printf("\n--- Logical ---\n");
    printf("(a>5 && b>5) = %d\n", (a > 5 && b > 5));
    printf("(a>5 || b>5) = %d\n", (a > 5 || b > 5));
    printf("!(a>5)       = %d\n", !(a > 5));

    // Assignment
    printf("\n--- Assignment ---\n");
    int c = a;
    c += b;
    printf("c += b -> c = %d\n", c);

    // Increment / Decrement
    printf("\n--- Increment / Decrement ---\n");
    int x = a;
    printf("x = %d\n", x);
    printf("x++ gives %d\n", x++);
    printf("after x++, x = %d\n", x);
    printf("++x gives %d\n", ++x);

    // Bitwise
    printf("\n--- Bitwise ---\n");
    printf("a & b = %d\n", a & b);
    printf("a | b = %d\n", a | b);
    printf("a ^ b = %d\n", a ^ b);
    printf("~a    = %d\n", ~a);

    // Ternary
    printf("\n--- Ternary ---\n");
    int max = (a > b) ? a : b;
    printf("max(a,b) = %d\n", max);

    return 0;
}
