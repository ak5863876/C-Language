#include <stdio.h>
#include <string.h>

int main(){
    char str1[20];
    char str2[20];
    char str3[20];

    printf("Enter string 1: ");
    scanf("%s", str1);
    printf("\n");

    printf("Enter string 2: ");
    scanf("%s", str2);
    printf("\n");

    printf("Length of String 1 = %zu\n",strlen(str1));
    printf("Length of String 2 = %zu\n",strlen(str2));

    int cmp = strcmp(str1,str2);
    if(cmp < 0){
        printf("%s comes first alphabetically\n",str1);
    } else if(cmp > 0){
        printf("%s comes first alphabetically\n",str2);
    } else{
        printf("Both strings are equal\n");
    }

    strcat(str1,str2);
    printf("String Concatenation = %s\n",str1);
    
    strcpy(str3,str2);
    printf("Copied = %s\n",str3);
    return 0;
}

