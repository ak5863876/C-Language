#include <stdio.h>
/*
do{
    // loop's body
}while(condition);
*/
int main() {
    int count = 0;
    do{
        printf("%d\n",count);
        count = count + 1;
    }while(count < 21);
    return 0;
}