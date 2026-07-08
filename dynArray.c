#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 4;
    int *ages;

    ages = (int*)malloc(n * sizeof(int));

    if (ages == NULL) {
        printf("Memory allocation failed");
        return 0;
    }

    printf("Enter 4 ages:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &ages[i]);
    }

    printf("Array elements before resizing:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", ages[i]);
    }

    n = 6;
    ages = (int*)realloc(ages, n * sizeof(int));

    if (ages == NULL) {
        printf("Memory reallocation failed");
        return 0;
    }

    ages[4] = 32;
    ages[5] = 59;

    printf("Array elements after resizing:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", ages[i]);
    }

    free(ages);

    return 0;
}