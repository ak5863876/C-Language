#include <stdio.h>
#include <string.h>

int main(){
    char str[20];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Length of String = %zu\n",strlen(str));
    printf("Reverse: ");
    for(int i = strlen(str) - 1; i >= 0; i--){
        printf("%c ",str[i]);
    }
    printf("\n");
    return 0;
}