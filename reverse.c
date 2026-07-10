#include <stdio.h>

int main() {
    int number;
    printf("Enter a number for reverse multiplication: ");
    scanf("%d", &number);

    int count = 10;

    do {
        int p = number * count;
        printf("%d\n", p);
        count = count - 1;
    } while (count >= 1);

    return 0;
}