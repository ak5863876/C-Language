#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove trailing newline characters (if present)
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    if (strlen(str1) > strlen(str2)) {
        printf("Larger string: %s\n", str1);
    } else if (strlen(str2) > strlen(str1)) {
        printf("Larger string: %s\n", str2);
    } else {
        printf("Both strings have the same length.\n");
    }

    return 0;
}