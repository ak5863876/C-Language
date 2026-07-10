#include <stdio.h>
#include <stdbool.h>

int main() {
    // AND Operator (&&)
    int age1 = 18;
    double height1 = 6.77;
    bool result1 = (age1 >= 18) && (height1 > 6.0);
    printf("Result 1 = %d",result1);
    // OR Operator (||)
    int age2 = 18;
    double height2 = 6.77;
    bool result2 = (age2 >= 18) || (height2 > 6.0);
    printf("Result 2 = %d",result2);
    // NOT Operator (!)
    int age3 = 18;
    bool result3 = !(age3 >= 18);
    printf("Result 3 = %d",result3);
    return 0;
}