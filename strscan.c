#include <stdio.h>
/*
To print a full string without any spaces ignored:
----------------------------------|
  fgets(str, sizeof(str), stdin); |
----------------------------------|
str = name of string
sizeof(str) = size of string
stdin = standard input
*/

int main(){
    char str[20]; // Maximum string size is 20 bytes
    printf("Enter your name: ");
    // String isn't a built-in datatype for C, & is not added
    scanf("%19s", str); // Upto 19 characters at most, also ignores spaces
    printf("%s",str); // %s is used to print/scan a string
    return 0;
}