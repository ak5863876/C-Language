#include <stdio.h>

int main(){
    char str1[] = "John Williams";
    char str2[] = "Julie Bing";

    str1[0] = 'X';
    str2[0] = 'X';

    printf("Modified String1 = %s\n", str1);
    printf("Modified String2 = %s\n", str2);
    return 0;
}