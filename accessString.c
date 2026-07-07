#include <stdio.h>

int main(){
    // ACCESS ALL CHARACTERS IN STRING
    char str[] = "Programiz";
    printf("%c\n",str[0]); // Prints first character of the string
    printf("%c\n",str[2]);
    printf("%c\n",str[4]);
    printf("%c\n",str[8]); // Prints last character of the string

    // CHANGING CHARACTERS IN STRING
    str[2] = 'O';
    str[4] = 'R';
    printf("Modified String = %s", str);
    return 0;
}