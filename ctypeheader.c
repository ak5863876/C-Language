#include <stdio.h>
#include <ctype.h>


int main(){
    char alpha1 = 'a';
    char alpha2 = 'N';
    char upper = toupper(alpha1);
    char lower = tolower(alpha2);
    printf("%c -> %c",alpha1,upper);
    printf("\n%c -> %c",alpha2,lower);
    return 0;
}