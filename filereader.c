#include <stdio.h>

int main(){
    FILE* fptr; // Used for file operations

    // Opening the file
    fptr = fopen("C:/Users/hp/OneDrive - rit.edu/Attachments/CSEC201/.vscode/testing.txt", "r");

    char content[1000];

    if(fptr != NULL){
        // fgets(content, 1000, fptr); reads and prints one line from the file
        while(fgets(content, 1000, fptr)){
            printf("%s",content);
        }
        // Closing the file
        fclose(fptr);
    }else{
        printf("File Open Unsuccessful");
    }

    return 0;   
}