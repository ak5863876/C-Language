#include <stdio.h>
#include <stdbool.h>

int main(){
    int a;
    char c;
    double d;
    float f;
    char name[20];

    printf("Enter an integer: ");
    scanf("%d", &a);

    printf("\nEnter a character: ");
    scanf(" %c", &c);   // space before %c skips leftover newline

    printf("\nEnter a float: ");
    scanf("%f", &f);

    printf("\nEnter a double: ");
    scanf("%lf", &d);

    printf("\nEnter a name: ");
    scanf("%s", name);   // no & needed, array name is already an address

    printf("\n--- You entered ---\n");
    printf("a = %d\n", a);
    printf("c = %d\n", c);
    printf("d = %f\n", d);
    printf("f = %lf\n", f);
    printf("name = %s\n", name);

    bool value1 = true;
    bool value2 = false;

    printf("\nValue for true = %d",value1);
    printf("\nValue for false = %d",value2);

    return 0;
}