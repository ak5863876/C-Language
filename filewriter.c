#include <stdio.h>

int main(){
    FILE* fptr;

    fptr = fopen("C:/Users/hp/OneDrive - rit.edu/Attachments/CSEC201/.vscode/testing.txt", "w");

    // Writes the statement into the file
    fputs("I love C Programming\n",fptr);
    fputs("C Programming is better than Java",fptr);

    fclose(fptr);

    return 0;   
}