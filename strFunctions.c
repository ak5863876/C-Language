#include <stdio.h>
#include <string.h> // Used for string functions

int main(){
    // Length Function: strlen()
    char lang[] = "French";
    printf("\nLength: %zu\n",strlen(lang));
    // String Copy: strcpy()
    char lang2[strlen(lang)];
    strcpy(lang2,lang);
    printf("%s\n",lang2);
    // String Concatenation: strcat()
    char text1[] = "Hey, ";
    char text2[] = "Ajit Doval";
    strcat(text1,text2);
    printf("%s\n",text1);
    // String Comparison: strcmp()
    char text3[] = "abcd";
    char text4[] = "abcd";
    int r1 = strcmp(text1, text2);
    int r2 = strcmp(text3, text4);
    printf("R1 = %d\n",r1);
    printf("R2 = %d\n",r2);
    return 0;
}